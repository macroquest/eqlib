/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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

struct MOUSECLICK {
	BYTE Confirm[8];         // DO NOT WRITE TO THIS BYTE
	BYTE Click[8];          // Left = 0, Right = 1, etc
};
using PMOUSECLICK = MOUSECLICK*;

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

struct [[offsetcomments]] EQCAMERABASE
{
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
using PEQCAMERABASE = EQCAMERABASE*;

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

#define MONITOR_SPAWN_X                          1
#define MONITOR_SPAWN_Y                          2
#define MONITOR_SPAWN_Z                          4
#define MONITOR_SPAWN_HEADING                    8
#define MONITOR_SPAWN_SPEEDRUN                   16
#define MONITOR_SPAWN_HPCURRENT                  32

struct SPAWNMONITORINFO
{
	WORD SpawnID;
	float Y;
	float X;
	float Z;
	float Heading;
	float SpeedRun;
	DWORD HPCurrent;
	DWORD MonitorMask;
};
using PSPAWNMONITORINFO = SPAWNMONITORINFO*;

// copy of D3DMATRIX by brainiac dec 16 2015
struct Matrix4x4
{
	union {
		struct {
			float        _11, _12, _13, _14;
			float        _21, _22, _23, _24;
			float        _31, _32, _33, _34;
			float        _41, _42, _43, _44;
		};
		float m[4][4];
	};
};

struct SWITCHCLICK
{
	float Y;
	float X;
	float Z;
	float Y1;
	float X1;
	float Z1;
};
using PSWITCHCLICK = SWITCHCLICK*;

enum eMemPoolType
{
	eGlobal,
	eOnDemand,
	eClearOnZone,
};

// this is actually a CActor Class
// actual size: 0x120 3-3-2009
// Size is 0x190 dec 13 2016 live - eqmule
// see Cactor::CActor in EQGraphicsDX9.dll
struct [[offsetcomments]] EQSWITCH
{
/*0x000*/ void*         vfTable;
/*0x004*/ eMemPoolType  MemType;
/*0x008*/ bool          bIsS3DCreated;
/*0x009*/ bool          bHasParentBone;
/*0x00a*/ bool          bUpdateScaledAmbient;
/*0x00c*/ float         ScaledAmbient;
/*0x010*/ float         ScaledAmbientTarget;
/*0x014*/ float         ParticleScaleFactor;
/*0x018*/ float         CollisionSphereScaleFactor;
/*0x01c*/ UINT          UpdateAmbientTick;
/*0x020*/ UINT          InterpolateAmbientTick;
/*0x024*/ void*         pParentActor;             // its a  CActor*
/*0x028*/ void*         pDPVSObject;
/*0x02c*/ float         Y;
/*0x030*/ float         X;
/*0x034*/ float         Z;
/*0x038*/ float         SurfaceNormalY;
/*0x03c*/ float         SurfaceNormalX;
/*0x040*/ float         SurfaceNormalZ;
/*0x044*/ UINT          VisibleIndex;
/*0x048*/ float         Alpha;
/*0x04c*/ bool          bCastShadow;
/*0x04d*/ bool          bNeverClip;
/*0x04e*/ bool          bClientCreated;
/*0x050*/ float         ZOffset;
/*0x054*/ float         EmitterScalingRadius;
/*0x058*/ void*         pDuplicateActor;          // its a  CActor*
/*0x05c*/ bool          bShowParticlesWhenInvisible;
/*0x060*/ void*         pAreaPortalVolumeList;    // CAreaPortalVolumeList*
/*0x064*/ void*         CleanupList;              // a TListNode<CActor*>? not sure
/*0x068*/ BYTE          CleanupListFiller[0xc];
/*0x074*/ void*         pActorApplicationData;    // CActorApplicationData* 74 for sure see 1003AE70
/*0x078*/ EActorType    ActorType;
/*0x07c*/ void*         pTerrainObject;           // CTerrainObject*
/*0x080*/ void*         HighlightData;            // HighlightData*
/*0x084*/ float         yAdjustment1;             // from this point on im not sure - 2013 dec 16
/*0x088*/ float         xAdjustment1;
/*0x08c*/ float         zAdjustment1;
/*0x090*/ float         headingAdjustment1;
/*0x094*/ float         yAdjustment2;
/*0x098*/ float         xAdjustment2;
/*0x09c*/ float         zAdjustment2;
/*0x0a0*/ float         headingAdjustment2;
/*0x0a4*/ float         yAdjustment3;
/*0x0a8*/ float         xAdjustment3;
/*0x0ac*/ float         zAdjustment3;
/*0x0b0*/ float         headingAdjustment3;
/*0x0b4*/ float         adjustments4[3];
/*0x0c0*/ float         adjustments5[4];
/*0x0d0*/ bool          bbHasAttachSRT;
/*0x0d1*/ bool          bDisableDesignOverride;
/*0x0d4*/ int           Unknown0xd4[4];
/*0x0e4*/ Matrix4x4     transformMatrix;          // used for new armor
/*0x124*/ float         Heading;
/*0x128*/ BYTE          Unknown0x12c[0x14];
/*0x13c*/ float         HeightAdjustment;         // this is most likely wrong dec 16 2013 eqmule
/*0x140*/ BYTE          Unknown0x144[0x4c];
/*0x18c*/
};
using PEQSWITCH = EQSWITCH*;


struct [[offsetcomments]] GUILDDATA
{
	FORCE_SYMBOLS;

/*0x00*/ char   Name[0x40];
/*0x40*/ DWORD  ID;
/*0x44*/
};
using PGUILDDATA = GUILDDATA*;

struct [[offsetcomments]] GUILD
{
/*0x00*/ char                Name[0x40];
/*0x40*/ DWORD               ID;                 // maybe this is just a int64 now, not sure needs more investigation.
/*0x44*/ DWORD               ID2;
/*0x48*/ GUILD*              pNext;
/*0x4c*/ GUILD*              pPrev;
/*0x50*/
};
using PGUILD = GUILD*;

// 11-15-11 - ieatacid
// aUnknownGuild the offset below is the guild vftable
// 2016 Oct 11 beta - eqmule (see AB50E4) not sure on size needs more investigation
struct [[offsetcomments]] GUILDS
{
/*0x0000*/ void*             pOneEntryVTable;
/*0x0004*/ BYTE              Unknown0x4[0x4];
/*0x0008*/ DWORD             GuildMemberCount;
/*0x000c*/ GuildMember*      pMember;
/*0x0010*/ BYTE              Unknown0x10[0x51];
/*0x0061*/ char              GuildMotD[0x200];
/*0x0261*/ char              GuildLeader[0x40];
/*0x02a1*/ BYTE              Unknown0x2a1[0x3];
/*0x02a4*/ DWORD             GuildTribute;
/*0x02a8*/ BYTE              Unknown0x2a8[0x8dc1];
/*0x9069*/ char              GuildUrl[0x200];
/*0x9269*/ char              GuildChannelName[0x80];
/*0x92e9*/ BYTE              Unknown0x9e9[0x2f];
/*0x9318*/ GUILD*            pFirst;
/*0x931c*/ GUILD*            pLast;
/*0x9320*/ UINT              GuildListCount;
/*0x9324*/ DWORD             Empty;
/*0x9328*/ GUILD*            GuildList;
/*0x932c*/ DWORD             HashValue;
/*0x9330*/
};
using PGUILDS = GUILDS*;

struct [[offsetcomments]] INTERACTGROUNDITEM
{
	FORCE_SYMBOLS;

/*0x00*/ DWORD DropID;
/*0x04*/ DWORD SpawnID;
/*0x08*/
};
using PINTERACTGROUNDITEM = INTERACTGROUNDITEM;

constexpr int MAX_SPELL_LOADOUT_NAME = 24;

struct [[offsetcomments]] SpellLoadout
{
/*0x00*/ int  SpellId[NUM_SPELL_GEMS];
/*0x38*/ char Name[MAX_SPELL_LOADOUT_NAME + 1];
/*0x51*/ bool inuse;
/*0x52*/ bool changed;
/*0x54*/
};

inline namespace deprecated {
	using SPELLFAVORITE DEPRECATE("Use SpellLoadout instead of SPELLFAVORITE") = SpellLoadout;
	using PSPELLFAVORITE DEPRECATE("Use SpellLoadout* instead of PSPELLFAVORITE") = SpellLoadout*;
}

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

struct [[offsetcomments]] EQSOCIAL
{
/*0x000*/ char Name[0x10];
/*0x010*/ char Line[0x5][0x100];
/*0x510*/ BYTE Color;
/*0x514*/ UINT TimerBegin;
/*0x518*/ UINT TimerDuration;
/*0x51c*/
};
using PEQSOCIAL = EQSOCIAL*;

struct EQSOCIALCHANGED
{
	bool bChanged[10][12];
};
using PEQSOCIALCHANGED = EQSOCIALCHANGED*;

struct [[offsetcomments]] EQFRIENDSLIST
{
	FORCE_SYMBOLS;

/*0x0000*/ char Name[0x64][0x40];
/*0x1900*/
};
using PEQFRIENDSLIST = EQFRIENDSLIST*;

struct [[offsetcomments]] AAEFFECTDATA
{
	FORCE_SYMBOLS;

/*0x00*/ int EffectType;
/*0x04*/ int BaseEffect1;
/*0x08*/ int BaseEffect2;
/*0x0c*/ int Slot;
/*0x10*/
};
using PAAEFFECTDATA = AAEFFECTDATA*;

// size 0x98 (3-12-2014)
// size 0x9c 3-18-2015 test see (49A077)
struct [[offsetcomments]] RaidPlayer
{
/*0x00*/ char      Name[EQ_MAX_NAME];
/*0x40*/ char      RaidNote[MAX_RAID_NOTE];
/*0x80*/ int       nLevel;
/*0x84*/ int       nClass;
/*0x88*/ bool      RaidLeader;
/*0x89*/ bool      GroupLeader;
/*0x8a*/ bool      RaidMainAssist;
/*0x8b*/ bool      RaidMarker;
/*0x8c*/ int       MasterLooter;
/*0x90*/ int       GroupNumber;
/*0x94*/ BYTE      Unknown0x94[0x8];            // i guess new master looter is in here...
/*0x9c*/
};
using EQRAIDMEMBER = RaidPlayer;
using PEQRAIDMEMBER = RaidPlayer*;

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

// sizeof(_EQRAID) is 0x3668 (12-09-2009)
// is size calculated by doing instCGuild_x - 4 - instCRaid_x ? 366C
// 0x3668 is locked so if its 4 byte aligned size should be /*0x366c*/ - eqmule Aug 10 2016
// instCRaid_x
// push    13C6h
// mar 18 2015 Test CRaid__ResetRaid eqgame.exe - eqmule
// as for the size... I have no idea...
// maybe 3544h? see 48055F                 mov     [esi+3544h], bl (jun 11 2014)
// 392C in mar 18 205 test? not sure...

// CRaid
struct [[offsetcomments]] EQRAID
{
/*0x0000*/ BYTE              Unknown0x0000[0xe0];
/*0x00e0*/ bool              RaidMemberUsed[MAX_RAID_SIZE];
/*0x0128*/ RaidPlayer        RaidMember[MAX_RAID_SIZE];
/*0x2d08*/ BYTE              Unknown0x2d08[0x4];
/*0x2d0c*/ int               RaidMemberCount;
/*0x2d10*/ char              RaidLeaderName[EQ_MAX_NAME];
/*0x2d50*/ char              RaidMOTD[MAX_RAID_MOTD];
/*0x3150*/ char              Inviter[EQ_MAX_NAME];
/*0x3190*/ eRaidState        Invited;
/*0x3194*/ int               RaidID;                       // not sure
/*0x3198*/ bool              bCreateRaidInvite;
/*0x3199*/ bool              IsRaidLeader;
/*0x319a*/ BYTE              Filler0x319a[0x2];
/*0x319c*/ DWORD             RaidTarget;
/*0x31a0*/ eRaidLootType     LootType;
/*0x31a4*/ char              RaidLooters[MAX_RAID_LOOTERS][EQ_MAX_NAME];
/*0x3664*/ DWORD             TotalRaidMemberLevels;        // TotalRaidMemberLevels/RaidMemberCount=RaidAvgLevel
/*0x3668*/ bool              Locked;
/*0x3669*/ BYTE              Unknown0x3669[0x7];
/*0x3670*/ // <- im sure this is not right but whatever... we got what we came for...
};
using PEQRAID = EQRAID*;

// size 0x19C 3-23-2005
struct [[offsetcomments]] EQGROUP
{
	FORCE_SYMBOLS;

/*0x000*/ BYTE          MemberExists[5];
/*0x005*/ char          MemberName[5][EQ_MAX_NAME];
/*0x145*/ BYTE          Unused[3];
/*0x148*/ PlayerClient* pMember[5];
/*0x15c*/ char          LeaderName[EQ_MAX_NAME];
/*0x19c*/
};
using PEQGROUP = EQGROUP*;

// size 0x08
struct [[offsetcomments]] EQSTRING {
/*0x00*/ DWORD ID;
/*0x04*/ char* String;
/*0x08*/
};
using PEQSTRING = EQSTRING*;

// size 0x10 4-28-2004 lax
struct [[offsetcomments]] EQSTRINGTABLE
{
/*0x00*/ EQSTRING** StringItems;
/*0x04*/ DWORD      Size;
/*0x08*/ int        Count;
/*0x0c*/ DWORD      Unknown0x0c;
/*0x10*/
};

inline namespace deprecated {
	using PEQSTRINGTABLE DEPRECATE("Use EQSTRINGTABLE* instead of PEQSTRINGTABLE") = EQSTRINGTABLE*;
}

// updated by eqmule
// see 7B000C in eqgame.exe dated jul 16 2014
// not sure about size... oh and this is __gWorld_x
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
/*0x04*/ __time32_t            TimerExpiration;
/*0x08*/ int                   EventID;
/*0x0c*/ int                   DynamicZoneID;
/*0x10*/ DynamicZoneTimerData* pNext;
/*0x14*/
};

struct [[offsetcomments]] DynamicZoneClientTimerData
{
/*0x000*/ char         ExpeditionName[0x80];
/*0x080*/ char         EventName[0x100];
/*0x180*/ __time32_t   TimeStamp;                      // TimeStamp - Util__FastTime = time left
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
};

inline namespace deprecated {
	using DYNAMICZONE DEPRECATE("Use CDynamicZone instead of DYNAMICZONE") = CDynamicZone;
	using PDYNAMICZONE DEPRECATE("Use CDynamicZone* instead of PDYNAMICZONE") = CDynamicZone*;
}

class UniversalChatProxyHandler;

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
/*0x18*/

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
/*0x34*/ __time32_t          unsuspendedTime;
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
/*0x08*/ __time32_t               restorationTime;
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

// Actual Size: 0x2fc (See 57117F in eqgame dated dec 10 2013) - eqmule
// this is CMercenaryClientManager
class [[offsetcomments]] CMercenaryManager
{
public:
/*0x000*/ uint8_t                 Unknown0x0[0x110];
/*0x110*/ MercenaryClientData     currentMercenary;
/*0x1f0*/ MercenaryInfoList       mercenaries;
/*0x200*/ int                     numMercenaries;
/*0x204*/ int                     maxMercenaries;
/*0x208*/ MercenaryStats          mercenaryStats;
/*0x218*/ int                     currMercenaryIndex;
/*0x21c*/ uint32_t                currentMerchantId;
/*0x220*/ uint32_t                lastMerchantId;
/*0x224*/ uint32_t                mercenarySpawnId;
/*0x228*/ uint32_t                initTimeMS;
/*0x22c*/ uint32_t                warningTimeMS;
/*0x230*/ uint32_t                lastUpdate;
/*0x234*/ ControllerFactory       uiControllerFactory;
/*0x248*/ MercenaryStancePtrList  merchantStanceList;
/*0x258*/ MercenaryStancePtrList  mercenaryStanceList;
/*0x268*/ // extra stuff related to event handling at the end
/*0x2fc*/

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

struct [[offsetcomments]] AGGRODATA
{
	FORCE_SYMBOLS;

/*0x00*/ DWORD         Unknown0x0;
/*0x04*/ BYTE          AggroPct;
/*0x05*/ BYTE          padding[3];
/*0x08*/
};

inline namespace deprecated {
	using PAGGRODATA DEPRECATE("Use AGGRODATA* instead of PAGGRODATA") = AGGRODATA*;
}

// size 0xe4 11-28-12 - ieatacid (in GetAggroInfo)
// size 0xfc see 422F94 in 20 Aug 2015
struct [[offsetcomments]] AGGROINFO
{
	FORCE_SYMBOLS;

/*0x00*/ AGGRODATA     aggroData[0x1e];
/*0xf0*/ DWORD         AggroLockID;              // this can be 0, I dont know what it is...
/*0xf4*/ DWORD         AggroTargetID;            // this is id of whoever we are fighting
/*0xf8*/ DWORD         AggroSecondaryID;         // this is id of whoever the npc is fighting
/*0xfc*/
};

inline namespace deprecated {
	using PAGGROINFO DEPRECATE("Use AGGROINFO* instead of PAGGROINFO") = AGGROINFO*;
}

enum AggroDataTypes
{
	AD_Player,
	AD_Secondary,
	AD_Group1,
	AD_Group2,
	AD_Group3,
	AD_Group4,
	AD_Group5,
	AD_xTarget1,
	AD_xTarget2,
	AD_xTarget3,
	AD_xTarget4,
	AD_xTarget5,
	AD_xTarget6,
	AD_xTarget7,
	AD_xTarget8,
	AD_xTarget9,
	AD_xTarget10,
	AD_xTarget11,
	AD_xTarget12,
	AD_xTarget13,
	AD_xTarget14,
	AD_xTarget15,
	AD_xTarget16,
	AD_xTarget17,
	AD_xTarget18,
	AD_xTarget19,
	AD_xTarget20,
};

struct [[offsetcomments]] GROUPAGGRO
{
/*0x00*/ DWORD         Unknown0x00;
/*0x04*/ DWORD         Unknown0x04;
/*0x08*/ DWORD         GroupMemberAggro[6];      // player is ALWAYS the 6th member...
/*0x20*/
};

inline namespace deprecated {
	using PGROUPAGGRO DEPRECATE("Use GROUPAGGRO* instead of PGROUPAGGRO") = GROUPAGGRO*;
}

struct [[offsetcomments]] BenefitSelection
{
/*0x00*/ int BenefitID;
/*0x04*/ int BenefitTier;
/*0x08*/
};

struct [[offsetcomments]] EQLogin
{
/*0x000*/ uint8_t     Unknown0x00[0x6b4];
/*0x6b4*/ char        station_name[32];
};

constexpr uint32_t EQ_ASSIST          = 0x5663;        // do_assist+37Ah :: 2021-12-01 (live) @ 0x5E1B77

// FIXME: Find a place for this
constexpr uint32_t EQ_LoadingS__ArraySize = 0x5a;      // EQ_LoadingS__SetProgressBar_x+76

} // namespace eqlib
