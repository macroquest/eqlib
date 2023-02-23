/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include "../common/Common.h"
#include "Common.h"
#include "Constants.h"
#include "Containers.h"
#include "Items.h"
#include "PlayerClient.h"
#include "SoeUtil.h"
#include "UIHelpers.h"

namespace eqlib {

//----------------------------------------------------------------------------

struct SClassInfo
{
	bool CanCast;
	bool PureCaster;
	bool PetClass;
	bool DruidType;
	bool NecroType;
	bool ClericType;
	bool ShamanType;
	bool MercType;
	char RaidColorOrder;
	char* Name;
	char* ShortName;
	char* UCShortName;
};

inline namespace deprecated {
	using CLASSINFO DEPRECATE("Use SClassInfo instead of CLASSINFO") = SClassInfo;
	using PCLASSINFO DEPRECATE("Use SClassInfo instead of CLASSINFO") = SClassInfo*;
}

static SClassInfo ClassInfo[] =
{
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0,  "",             "",    ""    }, // unk
	{ 0, 0, 0, 0, 0, 0, 0, 0, 13, "Warrior",      "war", "WAR" }, // war
	{ 1, 1, 0, 0, 0, 1, 0, 0, 2,  "Cleric",       "clr", "CLR" }, // clr
	{ 1, 0, 0, 0, 0, 1, 0, 0, 8,  "Paladin",      "pal", "PAL" }, // pal
	{ 1, 0, 0, 1, 0, 0, 0, 0, 9,  "Ranger",       "rng", "RNG" }, // rng
	{ 1, 0, 0, 0, 1, 0, 0, 0, 11, "Shadowknight", "shd", "SHD" }, // shd
	{ 1, 1, 0, 1, 0, 0, 0, 0, 3,  "Druid",        "dru", "DRU" }, // dru
	{ 0, 0, 0, 0, 0, 0, 0, 0, 6,  "Monk",         "mnk", "MNK" }, // mnk
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0,  "Bard",         "brd", "BRD" }, // brd
	{ 0, 0, 0, 0, 0, 0, 0, 0, 10, "Rogue",        "rog", "ROG" }, // rog
	{ 1, 1, 1, 0, 0, 0, 1, 0, 12, "Shaman",       "shm", "SHM" }, // shm
	{ 1, 1, 1, 0, 1, 0, 0, 0, 7,  "Necromancer",  "nec", "NEC" }, // nec
	{ 1, 1, 0, 0, 0, 0, 0, 0, 14, "Wizard",       "wiz", "WIZ" }, // wiz
	{ 1, 1, 1, 0, 0, 0, 0, 0, 5,  "Mage",         "mag", "MAG" }, // mag
	{ 1, 1, 0, 0, 0, 0, 0, 0, 4,  "Enchanter",    "enc", "ENC" }, // enc
	{ 1, 0, 1, 0, 0, 0, 1, 0, 1,  "Beastlord",    "bst", "BST" }, // bst
	{ 0, 0, 0, 0, 0, 0, 0, 0, 15, "Berserker",    "ber", "BER" }, // ber
	{ 1, 1, 0, 0, 0, 0, 0, 1, 16, "Mercenary",    "mer", "MER" }, // mer
};

enum MOUSE_DATA_TYPES
{
	MD_Unknown        = -1,
	MD_Button0Click   = 0,
	MD_Button1Click   = 1,
	MD_Button0        = 2,
	MD_Button1        = 3,
};

inline namespace deprecated {
	constexpr char* KeyRingWindowParent DEPRECATE("Use pKeyRingWnd instead of looking it up by name") = "KeyRingWnd";
	constexpr char* MountWindowList DEPRECATE("Use pKeyRingWnd instead of looking members up by name") = "KRW_Mounts_List";
	constexpr char* IllusionWindowList DEPRECATE("Use pKeyRingWnd instead of looking members up by name") = "KRW_Illusions_List";
	constexpr char* FamiliarWindowList DEPRECATE("Use pKeyRingWnd instead of looking members up by name") = "KRW_Familiars_list";
	constexpr char* HeroForgeWindowList DEPRECATE("Use pKeyRingWnd instead of looking members up by name") = "KRW_HeroForge_List";
	constexpr char* KeyRingTab DEPRECATE("Use pKeyRingWnd instead of looking members up by name") = "KRW_Subwindows";
}

template <typename T>
inline int EQHeading(T heading)
{
	return static_cast<int>((((heading + 16) % 256) / 32) * 2);
}

// ***************************************************************************
// Structures
// ***************************************************************************

class PopDialogHandler
{
public:
	virtual void DialogResponse(int, int, void*);
};

template <typename Groups, int NumGroups, int EveryoneGroup, typename Caps, int NumCaps>
class [[offsetcomments]] AccessGroup
{
public:
	using GroupEnum = Groups;
	using CapabilityEnum = Caps;

	enum {
		eNumGroups = NumGroups,
		eEveryoneGroup = EveryoneGroup,
		eNumCaps = NumCaps
	};

	bool HasAccess(Caps capability) const { return capabilities.IsBitSet(capability); }
	Groups GetGroup() const { return group; }

	Groups            group = {};
	BitField<NumCaps> capabilities;
};

template <typename AccessGroupType>
class [[offsetcomments]] AccessGroupList
{
public:
	AccessGroupType accessGroups[AccessGroupType::eNumGroups];

	using PlayerToGroupMap = HashTable<typename AccessGroupType::GroupEnum, CXStr>;
	PlayerToGroupMap playersToGroups;

	typename AccessGroupType::GroupEnum GetPlayerAccessGroup(const char* playerName)
	{
		AccessGroupType::GroupEnum* currentGroup = playersToGroups.FindFirst(playerName);
		if (currentGroup != nullptr)
		{
			return *currentGroup;
		}

		return (AccessGroupType::GroupEnum)AccessGroupType::eEveryoneGroup;
	}

	bool HasAccess(const char* playerName, typename AccessGroupType::CapabilityEnum capability) const
	{
		AccessGroupType::GroupEnum group = GetPlayerAccessGroup(playerName);
		if (group < AccessGroupType::eNumGroups)
		{
			return HasAccess(group, capability);
		}

		return false;
	}

	bool InAnyAccessGroup(const char* playerName) const
	{
		return playersToGroups.FindFirst(playerName) != nullptr;
	}

	bool HasAccess(typename AccessGroupType::GroupEnum group, typename AccessGroupType::CapabilityEnum capability) const
	{
		return accessGroups[group].HasAccess(capability);
	}
};

class IUniqueIdCheck
{
public:
	virtual bool IdInUse(int id, int) const = 0;
};

template <typename T>
class UniqueIdGen
{
public:
	T a, b, c;
	IUniqueIdCheck* check;
};

struct MOUSESPOOF
{
	MOUSE_DATA_TYPES   mdType;
	DWORD              dwData;
	MOUSESPOOF*        pNext;
};

struct [[offsetcomments]] LEADERABILITIES
{
	FORCE_SYMBOLS;

/*0x00*/ DWORD MarkNPC;
/*0x04*/ DWORD NPCHealth;
/*0x08*/ DWORD Unknown0x8;
/*0x0c*/ DWORD DelegateMA;
/*0x10*/ DWORD DelegateMarkNPC;
/*0x14*/ DWORD Unknown0x14;
/*0x18*/ DWORD InspectBuffs;
/*0x1c*/ DWORD Unknown0x1c;
/*0x20*/ DWORD SpellAwareness;
/*0x24*/ DWORD OffenseEnhancement;
/*0x28*/ DWORD ManaEnhancement;
/*0x2c*/ DWORD HealthEnhancement;
/*0x30*/ DWORD HealthRegen;
/*0x34*/ DWORD FindPathPC;
/*0x38*/ DWORD HoTT;
/*0x3c*/
};
using PLEADERABILITIES = LEADERABILITIES*;

class [[offsetcomments]] EQCamera
{
	FORCE_SYMBOLS

public:

/*0x00*/ void* vftable;
/*0x04*/ float Y;
/*0x08*/ float X;
/*0x0c*/ float Z;
/*0x10*/ float Orientation_Y;                   // old name Heading
/*0x14*/ float Orientation_X;                   // old name LookAngle
/*0x18*/ float Orientation_Z;
/*0x1c*/ float OldPosition_Y;
/*0x20*/ float OldPosition_X;
/*0x24*/ float OldPosition_Z;
/*0x28*/ float Heading;
/*0x2c*/ float Height;
/*0x30*/ float Pitch;
/*0x34*/ float Distance;
/*0x38*/ float DirectionalHeading;
/*0x3c*/ float SideMovement;
/*0x40*/ float Zoom;                            // old name: ViewAngle
/*0x44*/ bool  bAutoPitch;
/*0x45*/ bool  bAutoHeading;
/*0x46*/ bool  bSkipFrame;
/*0x48*/
};

using EQCAMERABASE DEPRECATE("Use EQCamera instead of EQCAMERABASE") = EQCamera;
using PEQCAMERABASE DEPRECATE("Use EQCamera* instead of PEQCAMERABASE") = EQCamera*;

#define MODEL_LABEL                              0
#define MODEL_LABELINFO                          1
#define MODEL_NULL2                              2
#define MODEL_HELD_R                             3
#define MODEL_HELD_L                             4
#define MODEL_SHIELD                             5
#define MODEL_NULL6                              6

#if 0
// Work in progress...
#define MODEL_HEAD                               0x00
#define MODEL_HEAD_POINT                         0x01
#define MODEL_NULL_1                             0x02
#define MODEL_HELD_R                             0x03
#define MODEL_HELD_L                             0x04
#define MODEL_SHIELD                             0x05
#define MODEL_NULL_2                             0x06
#define MODEL_TUNIC                              0x07
#define MODEL_HAIR                               0x08
#define MODEL_BEARD                              0x09
#define MODEL_CHEST                              0x0a
#define MODEL_GLOVES                             0x0b
#define MODEL_GLOVES2                            0x0c
#endif

// This is the # of spell gems + 1 (zero-based)
constexpr int InnateETA = 12;

enum InvisibleTypes
{
	eAll,
	eUndead,
	eAnimal
};

#define STANDSTATE_STAND                         0x64
#define STANDSTATE_CASTING                       0x66
#define STANDSTATE_BIND                          0x69
#define STANDSTATE_SIT                           0x6E
#define STANDSTATE_DUCK                          0x6F
#define STANDSTATE_FEIGN                         0x73
#define STANDSTATE_DEAD                          0x78

constexpr int MAX_LOADOUT_NAME = 25;

struct [[offsetcomments]] SpellLoadout
{
/*0x00*/ int  SpellId[NUM_SPELL_GEMS];
/*0x30*/ char Name[MAX_LOADOUT_NAME];
/*0x49*/ bool inuse;
/*0x4a*/ bool changed;
/*0x4c*/
};

inline namespace deprecated {
	using SPELLFAVORITE DEPRECATE("Use SpellLoadout instead of SPELLFAVORITE") = SpellLoadout;
	using PSPELLFAVORITE DEPRECATE("Use SpellLoadout* instead of PSPELLFAVORITE") = SpellLoadout*;
}

constexpr int MAX_HOTBUTTON_LOADOUT_NAME = 25;

struct [[offsetcomments]] HotButtonLoadout
{
/*0x00*/ char Name[MAX_HOTBUTTON_LOADOUT_NAME];
/*0x19*/ bool inuse;
/*0x1a*/ bool changed;
/*0x1c*/ int id;
/*0x20*/
};

struct [[offsetcomments]] PlayerRoleLoadout
{
/*0x00*/ int roles;
/*0x04*/ char name[128];
/*0x84*/
};

struct [[offsetcomments]] GroupRoleLoadout
{
/*0x000*/ PlayerRoleLoadout players[MAX_GROUP_SIZE];
/*0x318*/ char name[MAX_LOADOUT_NAME];
/*0x331*/ bool inuse;
/*0x332*/ bool changed;
/*0x334*/
};

struct [[offsetcomments]] TargetSetLoadout
{
/*0x000*/ char name[MAX_LOADOUT_NAME];
/*0x019*/ char storedString[1500];
/*0x5f5*/ bool inuse;
/*0x5f6*/ bool changed;
/*0x5f8*/
};

struct [[offsetcomments]] CMDLIST
{
/*0x00*/ DWORD LocalizedStringID;
/*0x04*/ char* szName;
/*0x08*/ char* szLocalized;
/*0x0c*/ void  (*fAddress)(PlayerClient*, char*);
/*0x10*/ DWORD Restriction;
/*0x14*/ DWORD Category;
/*0x18*/ DWORD Flags;
/*0x1c*/
};
using PCMDLIST = CMDLIST*;

struct [[offsetcomments]] EQSocial
{
/*0x000*/ char Name[SOCIAL_NAME_LEN];
/*0x010*/ char Line[SOCIAL_NUM_LINES][SOCIAL_LINE_LEN];
/*0x510*/ BYTE Color;
/*0x514*/ UINT TimerBegin;
/*0x518*/ UINT TimerDuration;
/*0x51c*/
};
using EQSOCIAL = EQSocial;
using PEQSOCIAL = EQSOCIAL*;

struct [[offsetcomments]] HotButtonData
{
	// needs to be mapped out
/*0x00*/ void*     unknown[23];
/*0x5c*/
	// 0xa0 iconType
	// 0xa4 iconSlot
};

struct [[offsetcomments]] EQFRIENDSLIST
{
	FORCE_SYMBOLS;

/*0x0000*/ char Name[0x64][0x40];
/*0x1900*/
};
using PEQFRIENDSLIST = EQFRIENDSLIST*;


struct [[offsetcomments]] RaidMember
{
/*0x00*/ char      Name[EQ_MAX_NAME];
/*0x40*/ char      RaidNote[MAX_RAID_NOTE];
/*0x80*/ int       nLevel;
/*0x84*/ int       nClass;
/*0x88*/ bool      RaidLeader;
/*0x89*/ bool      GroupLeader;
/*0x8a*/ bool      RaidMainAssist;
/*0x8b*/ bool      RaidMarker;
/*0x8c*/ int       MasterLooter; // emu ??
/*0x90*/ int       GroupNumber;
/*0x94*/
};

using RaidPlayer DEPRECATE("Use RaidMember instead of RaidPlayer") = RaidMember;
using EQRAIDMEMBER = RaidMember;
using PEQRAIDMEMBER = RaidMember*;


enum eRaidLootType : int32_t
{
	RaidLootUnknown = 0,
	RaidLootLeaderOnly = 1,
	RaidLootLeaderAndGroupLeader = 2,
	RaidLootAssignments = 3,
};


enum eRaidState : int32_t
{
	RaidStateNotInRaid = 1,
	RaidStateInvited = 2,
	RaidStateInRaid = 4
};


//struct [[offsetcomments]] RaidData
//{
///*0x00*/ int      MainAssists[MAX_RAID_ASSISTS];
///*0x0c*/ char     MainAssistNames[MAX_RAID_ASSISTS][EQ_MAX_NAME];
///*0xcc*/ int      MainMarkers[MAX_RAID_ASSISTS];
///*0xd8*/ int      MasterLooter;
///*0xdc*/
//};


class [[offsetcomments]] CRaid
{
public:
	//EQLIB_OBJECT bool IsInRaid();
	//EQLIB_OBJECT bool IsInvited();
	//EQLIB_OBJECT bool IsRaidGroupLeader();
	//EQLIB_OBJECT bool IsRaidLeader();
	//EQLIB_OBJECT bool IsRaidMember(char*);
	//EQLIB_OBJECT int GetLootType();
	//EQLIB_OBJECT int GetNumRaidMembers();
	//EQLIB_OBJECT RaidMember* GetRaidMemberAt(int);
	//EQLIB_OBJECT void AddRaidLooter();
	//EQLIB_OBJECT void ClearInvitedState();
	//EQLIB_OBJECT void CreateInviteRaid();
	//EQLIB_OBJECT void HandleC2SRaidMessage(char*);
	//EQLIB_OBJECT void HandleCreateInviteRaid(SCRaidMessage*);
	//EQLIB_OBJECT void HandleS2CRaidMessage(char*);
	//EQLIB_OBJECT void RemoveRaidLooter();
	//EQLIB_OBJECT void RemoveRaidMember();
	//EQLIB_OBJECT void ResetRaid();
	//EQLIB_OBJECT void ResetWindow();
	//EQLIB_OBJECT void SendInviteResponse(bool);
	//EQLIB_OBJECT void SendLeadershipChange(char*);
	//EQLIB_OBJECT void SendRaidChat(char*);
	//EQLIB_OBJECT void SetLootType(char*);
	//EQLIB_OBJECT void SetRaidLeader(char*);
	//EQLIB_OBJECT void SetTargetRaidPlayer(char*);
	//EQLIB_OBJECT void UpdateClassColor(int, unsigned long);
	//EQLIB_OBJECT void UpdateOptionsWindow();

	// private
	//EQLIB_OBJECT bool IsRaidLooter(char*);
	//EQLIB_OBJECT int FindOpenIndex();
	//EQLIB_OBJECT int FindPlayerIndex(char*);
	//EQLIB_OBJECT int FindRaidGroupLeader(int);
	//EQLIB_OBJECT void AddRaidMember(RaidAddMember*);
	//EQLIB_OBJECT void ChangeLeadership(char*);
	//EQLIB_OBJECT void DeleteRaidMember(SCRaidMessage*);
	//EQLIB_OBJECT void DetermineRaidChanges(char*);
	//EQLIB_OBJECT void HandleAddLooter(char*);
	//EQLIB_OBJECT void HandlePositionChange(SCRaidMessage*);
	//EQLIB_OBJECT void HandleRemoveLooter(char*);
	//EQLIB_OBJECT void HandleSetLootType(int);
	//EQLIB_OBJECT void InitializeRaid(char*);
	//EQLIB_OBJECT void RaidCreated(CreateRaidMessage*);
	//EQLIB_OBJECT void RaidGroupLeaderChange(SCRaidMessage*);
	//EQLIB_OBJECT void RenameMember(RenameRaidMember*);
	//EQLIB_OBJECT void SendRaidMsg(int, char*, char*, int);
	//EQLIB_OBJECT void SetLootTypeResponse(SCRaidMessage*);
	//EQLIB_OBJECT void UpdateLevelAverage();

/*0x0000*/ uint8_t           unknown[0x218];
/*0x0218*/ bool              locations[MAX_RAID_SIZE];
/*0x0260*/ RaidMember        raidMembers[MAX_RAID_SIZE];
/*0x2c00*/ int               raidId;
/*0x2c04*/ int               RaidMemberCount;
/*0x2c08*/ char              RaidLeaderName[EQ_MAX_NAME];
/*0x2c48*/ char              RaidMOTD[MAX_RAID_MOTD];
/*0x3048*/ char              Inviter[EQ_MAX_NAME];
/*0x3088*/ uint8_t           unknown2[0x400];
/*0x3488*/ eRaidState        raidState;
/*0x348c*/ int               raidId2;
/*0x3490*/ bool              bCreateRaidInvite;
/*0x3491*/ bool              IsRaidLeader;
/*0x3494*/ DWORD             RaidTarget;
/*0x3498*/ eRaidLootType     LootType;
/*0x349c*/ char              RaidLooters[MAX_RAID_LOOTERS][EQ_MAX_NAME];
/*0x395c*/ DWORD             levelTotal;                   // Average level of raid members
/*0x3960*/ bool              Locked;
/*0x3961*/ bool              bGroupOnInvite;
/*0x3964*/

	ALT_MEMBER_GETTER_ARRAY(bool, MAX_RAID_SIZE, locations, RaidMemberUsed);

	using RaidMemberArray = RaidMember[MAX_RAID_SIZE];
	RaidMemberArray& getter_RaidMember() { return raidMembers; }
	__declspec(property(get = getter_RaidMember)) RaidMemberArray& RaidMember;

	ALT_MEMBER_GETTER(int, levelTotal, TotalRaidMemberLevels);
	ALT_MEMBER_GETTER(eRaidState, raidState, Invited);
};

using EQRAID DEPRECATE("Use CRaid instead of EQRAID") = CRaid;
using PEQRAID DEPRECATE("Use CRaid instead of EQRAID") = CRaid*;


class [[offsetcomments]] StringItem
{
public:
/*0x00*/ uint32_t  ID;
/*0x04*/ char* String;
/*0x08*/
};

using EQSTRING DEPRECATE("Use StringItem instead of EQSTRING") = StringItem;
using PEQSTRING DEPRECATE("Use StringItem* instead of PEQSTRING") = StringItem*;


class StringTable
{
public:
/*0x00*/ StringItem** strings;
/*0x08*/ uint32_t    alloc;
/*0x0c*/ int         filled;
/*0x10*/ int         Language;

	EQLIB_OBJECT const char* getString(uint32_t ID, bool* bFound = nullptr);

	ALT_MEMBER_GETTER(StringItem**, strings, StringItems);
	ALT_MEMBER_GETTER(uint32_t, alloc, Size);
	ALT_MEMBER_GETTER(int, filled, Count);
};

using EQSTRINGTABLE DEPRECATE("Use StringTable instead of EQSTRINGTABLE") = StringTable;
using PEQSTRINGTABLE DEPRECATE("Use StringTable*I instead of EQSTRINGTABLE*") = StringTable*;


// needs to be updated
struct [[offsetcomments]] connection_t
{
/*0x000*/ void* vtable;
/*0x004*/ BYTE  Unknown0x4[0x110];
/*0x114*/ DWORD Master;
/*0x118*/ DWORD Average;
/*0x11c*/ DWORD Low;
/*0x120*/ DWORD High;
/*0x124*/ DWORD Last;
/*0x128*/
};

inline namespace deprecated {
	using CONNECTION_T DEPRECATE("Use connection_t instead of CONNECTION_T") = connection_t;
	using PCONNECTION_T DEPRECATE("Use connection_t instead of PCONNECTION_T") = connection_t*;
}

enum eDynamicZoneType
{
	eDZT_Unknown,
	eDZT_Expedition,
	eDZT_Tutorial,
	eDZT_Task,
	eDZT_Mission,
	eDZT_Quest
};

struct [[offsetcomments]] DynamicZoneData
{
/*0x00*/ int                DynamicZoneID;
/*0x04*/ int                SetID;
/*0x08*/ eDynamicZoneType   Type;
/*0x0c*/
};

struct [[offsetcomments]] DynamicZoneTimerData
{
/*0x00*/ int                   DataSetID;
/*0x04*/ eqtime_t              TimerExpiration;
/*0x08*/ int                   EventID;
/*0x0c*/ int                   DynamicZoneID;
/*0x10*/ DynamicZoneTimerData* pNext;
/*0x14*/
};

struct [[offsetcomments]] DynamicZoneClientTimerData
{
/*0x000*/ char         ExpeditionName[0x80];
/*0x080*/ char         EventName[0x100];
/*0x180*/ eqtime_t     TimeStamp;                      // TimeStamp - Util__FastTime = time left
/*0x184*/ int          TimerID;
/*0x188*/ DynamicZoneClientTimerData* pNext;
/*0x18c*/
};

inline namespace deprecated {
	using DZTIMERINFO DEPRECATE("Use DynamicZoneClientTimerData instead of DZTIMERINFO") = DynamicZoneClientTimerData;
	using PDZTIMERINFO DEPRECATE("Use DynamicZoneClientTimerData* instead of PDZTIMERINFO") = DynamicZoneClientTimerData*;
}

enum eDyanicZonePlayerStatus
{
	eStatusUnknown = 0,
	eStatusOnline,
	eStatusOffline,
	eStatusInZone,
	eStatusLinkDead,
};

struct [[offsetcomments]] DynamicZonePlayerInfo
{
/*0x00*/ char                     Name[EQ_MAX_NAME];
/*0x40*/ eDyanicZonePlayerStatus  Status;
/*0x44*/ DynamicZonePlayerInfo*   pNext;
/*0x48*/ bool                     bFlagged;                  // Do we meet the requirements?
/*0x49*/ bool                     bCheckedZoneReqs;          // Zone reqs serverside checked?
/*0x4c*/
};

inline namespace deprecated {
	using DZMEMBER DEPRECATE("Use DynamicZonePlayerInfo instead of DZMEMBER") = DynamicZonePlayerInfo;
	using PDZMEMBER DEPRECATE("Use DynamicZonePlayerInfo* instead of PDZMEMBER") = DynamicZonePlayerInfo*;
}

enum eSharedTaskPlayerRole
{
	eSharedTaskRoleNone = 0,
	eSharedTaskRoleLeader
};

// Shared Task Member Info
struct [[offsetcomments]] SharedTaskPlayerInfo
{
/*0x00*/ char                     Name[0x40];
/*0x40*/ int                      ShroudID;
/*0x44*/ eSharedTaskPlayerRole    Role;
/*0x48*/ SharedTaskPlayerInfo*    pNext;
/*0x4c*/

	ALT_MEMBER_GETTER(DWORD, Role, IsLeader);
};

inline namespace deprecated {
	using TASKMEMBER DEPRECATE("Use SharedTaskPlayerInfo instead of TASKMEMBER") = SharedTaskPlayerInfo;
	using PTASKMEMBER DEPRECATE("Use SharedTaskPlayerInfo* instead of PTASKMEMBER") = SharedTaskPlayerInfo*;
}

struct [[offsetcomments]] DynamicZoneSwitchInfo
{
/*0x00*/ int          DZID;
/*0x04*/ int          Type;
/*0x08*/ int          DZSwitchID;
/*0x0c*/ float        SwitchX;
/*0x10*/ float        SwitchY;
/*0x14*/ float        SwitchZ;
/*0x18*/
};

inline namespace deprecated {
	using DZSWITCHINFO DEPRECATE("Use DynamicZoneSwitchInfo instead of DZSWITCHINFO") = DynamicZoneSwitchInfo;
	using PDZSWITCHINFO DEPRECATE("Use DynamicZoneSwitchInfo* instead of PDZSWITCHINFO") = DynamicZoneSwitchInfo*;
	using _DZSWITCHINFO DEPRECATE("Use DynamicZoneSwitchInfo instead of _DZSWITCHINFO") = DynamicZoneSwitchInfo;
}

struct [[offsetcomments]] DynamicZoneCompass
{
/*0x00*/ int          R;
/*0x04*/ int          G;
/*0x08*/ int          B;
/*0x0c*/ float        X;
/*0x10*/ float        Y;
/*0x14*/ float        Z;
/*0x18*/ bool         bVisible;
/*0x1c*/ int          PixelOffset;
/*0x20*/ bool         bInWindow;
/*0x24*/
};

inline namespace deprecated {
	using DZCOMPASS DEPRECATE("Use DynamicZoneCompass instead of DZCOMPASS") = DynamicZoneCompass;
	using PDZCOMPASS DEPRECATE("Use DynamicZoneCompass* instead of PDZCOMPASS") = DynamicZoneCompass*;
}

struct [[offsetcomments]] DynamicZoneClientSwitchInfo : public DynamicZoneSwitchInfo
{
/*0x18*/ DynamicZoneCompass* pCompass;
/*0x1c*/
};

inline namespace deprecated {
	using DZSWITCH DEPRECATE("Use DynamicZoneCompass instead of DZCOMPASS") = DynamicZoneClientSwitchInfo;
	using PDZSWITCH DEPRECATE("Use DynamicZoneCompass instead of DZCOMPASS") = DynamicZoneClientSwitchInfo*;
}

// CDynamicZone size: 0x128
struct [[offsetcomments]] CDynamicZone : public PopDialogHandler
{
/*0x004*/ uint32_t     NewMemberDZID;
/*0x008*/ char         NewMemberName[0x40];
/*0x048*/ bool         bNewSwap;
/*0x049*/ bool         bNewAssignedToDZ;
/*0x04a*/ char         LeaderName[0x40];
/*0x08a*/ char         DZName[0x80];
/*0x10c*/ int          MaxPlayers;
/*0x110*/ DynamicZonePlayerInfo* pFirstMember;
/*0x114*/ DynamicZoneClientTimerData* pFirstTimer;
/*0x118*/ HashTable<DynamicZoneClientSwitchInfo> Switches;
/*0x128*/

	ALT_MEMBER_GETTER_ARRAY(char, 0x40, LeaderName, Name);
	ALT_MEMBER_GETTER_ARRAY(char, 0x80, DZName, ExpeditionName);
	ALT_MEMBER_GETTER(DynamicZonePlayerInfo*, pFirstMember, pMemberList);

	int get_MinPlayers() const { return 0; } // not available on emu
	__declspec(property(get = get_MinPlayers)) int MinPlayers;
};

inline namespace deprecated {
	using DYNAMICZONE DEPRECATE("Use CDynamicZone instead of DYNAMICZONE") = CDynamicZone;
	using PDYNAMICZONE DEPRECATE("Use CDynamicZone* instead of PDYNAMICZONE") = CDynamicZone*;
}

class UniversalChatProxyHandler
{
public:
	virtual void UcpOnLoginConfirm(bool, void*) {}
	virtual void UcpOnTerminated(void*) {}
	virtual void UcpOnMessage(const char*, const char*, int, const char*, bool, bool, const char*) {}
	virtual void UcpOnPacket(void*, int, const char*, int, const char*, bool) {}
	virtual void UcpOnPlayerEntering(const char*, int, const char*, bool) {}
	virtual void UcpOnPlayerLeaving(const char*, int, const char*, bool) {}
	virtual void UcpOnPlayerList(const char*, int, const char*) {}
	virtual void UcpOnChannelListChange() {}
	virtual void UcpOnBuddyStatusChange(const char*, int) {}
	virtual void UcpOnMessageHeaderSet(int, int, bool, int, int) {}
	virtual void UcpOnMessageHeader(int, int, int, int, int, int, const char*, const char*) {}
	virtual void UcpOnNewMessageHeader(int, int, int, int, const char*, const char*) {}
	virtual void UcpOnMessageBody(int, int, const char*, const char*, bool, int) {}
	virtual void UcpOnMailboxOutOfSync(int) {}
	virtual void UcpOnMailtoResult(int, const char*, const char*, bool, int) {}
	virtual void UcpOnMailboxSelectionResult(int, bool) {}
	virtual void UcpOnCheckMailboxResult(int, int, bool) {}
	virtual void UcpOnIgnoreStatusChange(const char*, int) {}
};

constexpr int ChatProxy_MaxNameLen = 48;

class [[offsetcomments]] UniversalChatProxy
{
public:
	virtual ~UniversalChatProxy() {}

	EQLIB_OBJECT char* GetChannelName(int channelNumber);

	enum class BuddyStatus
	{
		eFriendRemoved,
		eFriendOffline,
		eFriendOnline,
		eFriendOnlineAway,
		eFriendOnlineInvisible,
		eFriendInGame,
		eFriendInGameAway,
		eFriendInGameInvisible
	};

	struct [[offsetcomments]] BuddyEntry
	{
	/*0x00*/ char          Name[ChatProxy_MaxNameLen];
	/*0x30*/ BuddyStatus   Status;
	/*0x34*/ bool          bInMyNamespace;
	/*0x38*/
	};

	// FIXME: This is off and needs to update updated (members don't align with the functions)
/*0x04*/ UniversalChatProxyHandler* pChatProxyHandler;
/*0x08*/ void*             pUdpManager;             // UdpLibrary::UdpManager
/*0x0c*/ char**            ChannelList;
/*0x10*/ int               ActiveChannels;          // number of channels joined, aka channelcount
/*0x14*/ bool              mAuthenticated;
/*0x15*/ bool              bLoginSent;
/*0x16*/ bool              bInvisible;
/*0x17*/ bool              bFullNotifyMode;
/*0x18*/ void*             UdpConnection;           // UdpLibrary::UdpConnection
/*0x1c*/ char              ChatID[ChatProxy_MaxNameLen];              // "ServerName.CharName"
/*0x4c*/ char              ChatPass[ChatProxy_MaxNameLen];
/*0x7c*/ char              ServerName[ChatProxy_MaxNameLen];          // "ServerName."
/*0xac*/ int               ServerNameLen;
/*0xb0*/ char              Locale[16];
/*0xc0*/ const char*       ChatPrefix;
/*0xc4*/ int               LastDisconnectCheckTime;
/*0xc8*/ BuddyEntry**      BuddyList;
/*0xcc*/ int               BuddyListCount;
/*0xd0*/ ArrayClass<CXStr> IgnoreList;
/*0xe0*/

	EQLIB_OBJECT int GetNumberOfFriends();
	EQLIB_OBJECT const char* GetFriendName(int);
};

using CChatService = UniversalChatProxy;

inline namespace deprecated {
	using FriendEntry DEPRECATE("Use UniversalChatProxy::BuddyEntry instead of FriendEntry") = UniversalChatProxy::BuddyEntry;
	using PCHATSERVICE DEPRECATE("Use UniversalChatProxy* instead of PCHATSERVICE") = UniversalChatProxy*;
	using CHATSERVICE DEPRECATE("Use UniversalChatProxy instead of PCHATSERVICE") = UniversalChatProxy;
}

// EQ Refers to Auras as SOI or "sphere of influence", but we'll just call them Auras.
struct [[offsetcomments]] AuraData
{
/*0x00*/ char         Name[EQ_MAX_NAME];
/*0x40*/ uint32_t     SpawnID;
/*0x44*/ int          Cost;
/*0x48*/ int          IconID;
/*0x4c*/
};

inline namespace deprecated {
	using AURAINFO DEPRECATE("Use AuraData instead of AURAINFO") = AuraData;
	using PAURAINFO DEPRECATE("Use AuraData* instead of PAURAINFO") = AuraData*;

	using AssociatedSOIData DEPRECATE("Use AuraData instead of AssociatedSOIData") = AuraData;
}

class [[offsetcomments]] ClientAuraManager
{
	FORCE_SYMBOLS;

public:
/*0x00*/ ArrayClass2<AuraData> Auras;
/*0x1c*/

	static EQLIB_OBJECT ClientAuraManager* GetSingleton();

	ALT_MEMBER_GETTER_DEPRECATED(AuraData**, Auras, pAuraInfo, "ClientAuraManager: Use Auras[num] instead of pAuraInfo[num]");

	DEPRECATE("ClientAuraManager: Use Auras.GetLength() instead of NumAuras")
	__declspec(property(get = get_NumAuras)) uint32_t NumAuras;
	uint32_t get_NumAuras() const { return Auras.GetLength(); }
};

inline namespace deprecated {
	using AURAMGR DEPRECATE("Use ClientAuraManager instead of AURAMGR") = ClientAuraManager;
	using PAURAMGR DEPRECATE("Use ClientAuraManager& instead of PAURAMGR") = ClientAuraManager*;

	using ClientSOIManager DEPRECATE("Use ClientAuraManager instead of ClientSOIManager") = ClientAuraManager;
}

//----------------------------------------------------------------------------
// Mercenaries
//----------------------------------------------------------------------------

constexpr int MAX_MERC_STANCES = 10;

struct MercenaryStanceInfo
{
	int stanceId;
	int stanceStringId;

	ALT_MEMBER_GETTER(DWORD, stanceId, nStance);
	ALT_MEMBER_GETTER(DWORD, stanceStringId, nDbStance);
};

inline namespace deprecated {
	using MERCSTANCEDATA DEPRECATE("Use MercenaryStanceInfo instead of MERCSTANCEDATA") = MercenaryStanceInfo;
}

struct [[offsetcomments]] MercenaryInfo
{
/*0x00*/ int                 id;
/*0x04*/ int                 typeStringId;
/*0x08*/ int                 subtypeStringId;
/*0x0c*/ int                 initialCost;
/*0x10*/ int                 upkeepCost;
/*0x14*/ int                 altInitialCost;
/*0x18*/ int                 altUpkeepCost;
/*0x1c*/ int                 altCurrencyId;
/*0x20*/ bool                altCurrencyOnly;
/*0x24*/ uint32_t            timeRemaining;
/*0x28*/ int                 stanceGroupId;
/*0x2c*/ int                 stanceId;
/*0x30*/ int                 numStances;
/*0x34*/ eqtime_t            unsuspendedTime;
/*0x38*/ bool                autoAssist;
/*0x3c*/ int                 type;
/*0x40*/ char                name[EQ_MAX_NAME];
/*0x80*/ MercenaryStanceInfo stanceData[MAX_MERC_STANCES];
/*0xd0*/ int                 requiredMembershipLevel;
/*0xd4*/

	// These should all be marked deprecated...
	ALT_MEMBER_GETTER(DWORD, typeStringId, nMercCategory);
	ALT_MEMBER_GETTER(DWORD, subtypeStringId, nMercDesc);
	ALT_MEMBER_GETTER(DWORD, initialCost, Purchase);
	ALT_MEMBER_GETTER(DWORD, upkeepCost, Upkeep);
	ALT_MEMBER_GETTER_ARRAY(char, EQ_MAX_NAME, name, Name);
};

inline namespace deprecated {
	using MERCSINFO DEPRECATE("Use MercenaryInfo instead of MERCSINFO") = MercenaryInfo;
}

struct [[offsetcomments]] MERCSLIST
{
/*0x000*/ MercenaryInfo     mercinfo[7];              // is 7 max, even with slots u can buy for sc?
/*0x5cc*/
};

enum eMercenaryState {
	MercenaryState_Dead             = 0,
	MercenaryState_Suspended        = 1,
	MercenaryState_Active           = 5,
};

class [[offsetcomments]] MercenaryClientData
{
public:
/*0x00*/ bool                     hasMercenary;
/*0x04*/ eMercenaryState          suspendedState;
/*0x08*/ eqtime_t                 restorationTime;
/*0x0c*/ MercenaryInfo            mercenaryInfo;
/*0xe0*/
	inline int GetCurrentStanceId() const { return mercenaryInfo.stanceId; }
};

using MercenaryInfoList = ArrayClass<MercenaryInfo>;
using MercenaryStanceList = ArrayClass<MercenaryStanceInfo>;
using MercenaryStancePtrList = ArrayClass<MercenaryStanceInfo*>;

// This type may not be right anymore. Take a look at CMercenaryClientManager::ProcessMercenaryUpdateStats
using MercenaryStats = ArrayClass<int>;

// Enum value representing the keys of MercenaryStats array
// FIXME: These were copied from MERCENARYSTATS struct and are out of date.
// There should be 44 values.
enum eMercenaryStats {
	MercStat_MaxHP,
	MercStat_CurrHP,
	MercStat_MaxMana,
	Mercstat_CurrMana,
	MercStat_MaxEndurance,
	Mercstat_CurrEndurance,
	MercStat_AC,
	MercStat_Attack,
	MercStat_Haste,
	MercStat_STR,
	MercStat_STA,
	MercStat_INT,
	MercStat_WIS,
	MercStat_AGI,
	MercStat_DEX,
	MercStat_CHA,
	MercStat_CombatHPRegen,
	MercStat_CombatManaRegen,
	MercStat_CombatEnduranceRegen,
	MercStat_HealAmount,
	MercStat_SpellDamage,
};

// This lives here temporarily beacuse it gets used by the mercenary manager, but it should
// be better understood and moved into its own home.
namespace EQUtil
{
	template <typename T>
	class IEventListener
	{
	public:
		virtual ~IEventListener() {}
		virtual bool OnEvent(const T& event) = 0;
	};

	template <typename T, int N>
	class EventHandler
	{
	public:
		HashTable<IEventListener<T>*, typename T::EventType> listeners;

		// note: not actually an int. Some kind of event type. but the type doesn't factor into the size
		// of the object in the layout, so we just use this for now until it gets figured out.
		TList<int> events;
	};
}

struct MercenaryEventBase
{
	using EventType = int;
};


class [[offsetcomments]] CMercenaryManager // a.k.a. CMercenaryClientManager
	: public EQUtil::EventHandler<MercenaryEventBase, 30>
	, public PopDialogHandler
{
public:
/*0x01c*/ ArrayClass<MercenaryInfo> currentMercenaryMerchantInfoList;
/*0x02c*/ ArrayClass<int>           currentMercenaryMerchantTypeList;
/*0x03c*/ MercenaryInfo             currentMechantMercenaryInfo;
/*0x110*/ MercenaryClientData       currentMercenary;
/*0x1f0*/ MercenaryInfoList         mercenaries;
/*0x200*/ int                       numMercenaries;
/*0x204*/ int                       maxMercenaries;
/*0x208*/ MercenaryStats            mercenaryStats;
/*0x218*/ int                       currMercenaryIndex;
/*0x21c*/ uint32_t                  currentMerchantId;
/*0x220*/ uint32_t                  lastMerchantId;
/*0x224*/ uint32_t                  mercenarySpawnId;
/*0x228*/ uint32_t                  initTimeMS;
/*0x22c*/ uint32_t                  warningTimeMS;
/*0x230*/ uint32_t                  lastUpdate;
/*0x234*/ ControllerFactory         uiControllerFactory;
/*0x248*/ MercenaryStancePtrList    merchantStanceList;
/*0x258*/ MercenaryStancePtrList    mercenaryStanceList;
/*0x268*/ // extra stuff related to event handling at the end
/*0x2fc*/ // 370

	inline bool HasMercenary() const { return currentMercenary.hasMercenary; }
	inline eMercenaryState GetMercenaryState() const { return currentMercenary.suspendedState; }

	inline const MercenaryStanceInfo* GetActiveMercenaryStance() const
	{
		for (const MercenaryStanceInfo* info : mercenaryStanceList)
		{
			if (info->stanceId == currentMercenary.GetCurrentStanceId())
				return info;
		}

		return nullptr;
	}


	ALT_MEMBER_GETTER_DEPRECATED(DWORD, currentMercenary.hasMercenary, HaveMerc,
		"Use HasMercenary() instead of HaveMerc");
	ALT_MEMBER_GETTER_DEPRECATED(DWORD, currentMercenary.suspendedState, MercState,
		"Use currentMercenary.suspendedState instead of MercState");
	ALT_MEMBER_GETTER_DEPRECATED(DWORD, currentMercenary.mercenaryInfo.stanceId, ActiveStance,
		"Use currentMercenary.mercenaryInfo.stanceId instead of ActiveStance");
	ALT_MEMBER_GETTER_ARRAY_DEPRECATED(char, EQ_MAX_NAME, currentMercenary.mercenaryInfo.name, MercName,
		"Use currentMercenary.mercenaryInfo.name instead of MercName");
	ALT_VMEMBER_GETTER_DEPRECATED(int, mercenaries.GetLength(), MercenaryCount,
		"Use mercenaries.GetLength() instead of MercenaryCount");
	ALT_MEMBER_GETTER_DEPRECATED(MERCSLIST*, mercenaries[0], pMercsList,
		"Use mercenaries instead of pMercsList");
	ALT_MEMBER_GETTER_DEPRECATED(DWORD, maxMercenaries, MaxMercsCount,
		"Use maxMercenaries instead of MaxMercsCount");
	ALT_MEMBER_GETTER_DEPRECATED(DWORD, currMercenaryIndex, CurrentMercIndex,
		"Use currMercenaryIndex instead of CurrentMercIndex");
	ALT_MEMBER_GETTER_DEPRECATED(DWORD, mercenarySpawnId, MercSpawnId,
		"Use mercenarySpawnId instead of MercSpawnId");
	ALT_VMEMBER_GETTER_DEPRECATED(int, mercenaryStanceList.GetLength(), NumStances,
		"Use mercenaryStanceList.GetLength() instead of NumStances");
	ALT_VMEMBER_GETTER_DEPRECATED(MercenaryStanceInfo**, &mercenaryStanceList[0], pMercStanceData,
		"Use mercenaryStanceList instead of pMercStanceData");
};

inline namespace deprecated {
	using PMERCENARYINFO DEPRECATE("Use CMercenaryManager* instead of PMERCENARYINFO") = CMercenaryManager*;
	using MERCENARYINFO DEPRECATE("Use CMercenaryManager instead of MERCENARYINFO") = CMercenaryManager;
}

struct [[offsetcomments]] MERCENARYSTATS
{
	FORCE_SYMBOLS;

/*0x00*/ DWORD        MaxHP;
/*0x04*/ DWORD        CurrHP;
/*0x08*/ DWORD        MaxMana;
/*0x0c*/ DWORD        CurrMana;
/*0x10*/ DWORD        MaxEndurance;
/*0x14*/ DWORD        CurrEndurance;
/*0x18*/ DWORD        AC;
/*0x1c*/ DWORD        Attack;
/*0x20*/ DWORD        Haste;
/*0x24*/ DWORD        STR;
/*0x28*/ DWORD        STA;
/*0x2c*/ DWORD        INT;
/*0x30*/ DWORD        WIS;
/*0x34*/ DWORD        AGI;
/*0x38*/ DWORD        DEX;
/*0x3c*/ DWORD        CHA;
/*0x40*/ DWORD        CombatHPRegen;
/*0x44*/ DWORD        CombatManaRegen;
/*0x48*/ DWORD        CombatEnduranceRegen;
/*0x4c*/ DWORD        HealAmount;
/*0x50*/ DWORD        SpellDamage;
/*0x54*/
};

inline namespace deprecated {
	using PMERCENARYSTATS DEPRECATE("Use MERCENARYSTATS* instead of PMERCENARYSTATS") = MERCENARYSTATS*;
}

enum XTargetTypes
{
	XTARGET_EMPTY_TARGET,
	XTARGET_AUTO_HATER,
	XTARGET_SPECIFIC_PC,
	XTARGET_SPECIFIC_NPC,
	XTARGET_TARGETS_TARGET,
	XTARGET_GROUP_TANK,
	XTARGET_GROUP_TANKS_TARGET,
	XTARGET_GROUP_ASSIST,
	XTARGET_GROUP_ASSIST_TARGET,
	XTARGET_GROUP_PULLER,
	XTARGET_GROUP_PULLER_TARGET,
	XTARGET_GROUP_MARK1,
	XTARGET_GROUP_MARK2,
	XTARGET_GROUP_MARK3,
	XTARGET_RAID_ASSIST1,
	XTARGET_RAID_ASSIST2,
	XTARGET_RAID_ASSIST3,
	XTARGET_RAID_ASSIST1_TARGET,
	XTARGET_RAID_ASSIST2_TARGET,
	XTARGET_RAID_ASSIST3_TARGET,
	XTARGET_RAID_MARK1,
	XTARGET_RAID_MARK2,
	XTARGET_RAID_MARK3,
	XTARGET_MY_PET,
	XTARGET_MY_PET_TARGET,
	XTARGET_MY_MERCENARY,
	XTARGET_MY_MERCENARY_TARGET,

	XTARGET_MY_MERCENTARY_TARGET DEPRECATE("XTARGET_MY_MERCENTARY_TARGET has a typo, use XTARGET_MY_MERCENARY_TARGET instead.") = XTARGET_MY_MERCENARY_TARGET,
};

inline namespace deprecated {
	using xTargetTypes DEPRECATE("Use XTargetTypes instead of xTargetTypes") = XTargetTypes;
}

constexpr int MAX_XTARGETS = 20;

struct [[offsetcomments]] BenefitSelection
{
/*0x00*/ int BenefitID;
/*0x04*/ int BenefitTier;
/*0x08*/
};


struct [[offsetcomments]] EQLogin
{
/*0x000*/ uint8_t     Unknown0x00[0x6bc];
/*0x6bc*/ char        station_name[32];
/*0x6dc*/
};

// keyring: 2010592 2008511 2010564 2011970 2016968

// User owns the "Merchant" Perk which grants 2 additional inventory slots.
constexpr int EQFeature_MerchantPerk = 2012274;

// User has access to the dragorn hoard
constexpr int EQFeature_DragonHoard = 2016763;

// User has access to the Tradeskill Depot feature
constexpr int EQFeature_TradeskillDepot = 2018125;

// Extra slots for the Tradeskill Depot feature.
constexpr int EQFeature_TradeskillDepotSlots = 2018260;

struct [[offsetcomments]] ClaimData
{
/*0x00*/ int featureId;
/*0x04*/ int count;
/*0x08*/
};

class [[offsetcomments]] ClaimDataCollection
{
public:
/*0x00*/ ArrayClass<ClaimData> claimData;
/*0x10*/

	bool CanConsumeFeature(int featureId)
	{
		for (int i = 0; i < claimData.GetCount(); ++i)
		{
			if (claimData[i].featureId == featureId)
				return claimData[i].count > 0;
		}
		return false;
	}
};


//constexpr uint32_t EQ_ASSIST          = 0x4478;

// FIXME: Find a place for this
constexpr uint32_t EQ_LoadingS__ArraySize = 0x5a;      // EQ_LoadingS__SetProgressBar_x+76

} // namespace eqlib
