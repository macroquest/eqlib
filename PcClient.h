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

#include "Common.h"
#include "Constants.h"
#include "Containers.h"
#include "CXStr.h"
#include "Achievements.h"
#include "Items.h"
#include "PlayerClient.h"
#include "Spells.h"
#include "EQData.h"
#include "PcProfile.h"

// This is the home of all things related to what used to be called CHARINFO 
// plus a few extra things until they find a home of their own.
//
// Class hierarchy:
//
// CHARINFO:
//   PcClient -> PcZoneClient -> PcBase, CharacterZoneClient, [SomeOtherClass]
//   PcBase -> CharacterBase


namespace eqlib {

class CharacterBase;
class CharacterZoneClient;
class HateListEntry;
class PcBase;
class PcClient;
class PcZoneClient;
class ProfileManager;

//============================================================================
// Enums
//============================================================================

enum EAreaCorner
{
	eAC_None = -1,
	eAC_TopLeftCorner,
	eAC_TopRightCorner,
	eAC_BottomLeftCorner,
	eAC_BottomRightCorner,
};

enum ELockoutCharacterReason
{
	LCR_AllowNormalPlay,
	LCR_InvalidWornItem,
	LCR_Something,
};

enum eXTSlotStatus
{
	eXTSlotEmpty,
	eXTSlotCurrentZone,
	eXTSlotDifferentZone,
	eXTSlotUnknown
};

constexpr int MAX_BLOCKED_SPELLS = 40;
constexpr int MAX_BLOCKED_SPELLS_PET = 40;

constexpr int EQSKILL_HIDE = 29;

//============================================================================
// Structs
//============================================================================

struct [[offsetcomments]] ALCHEMYBONUSSKILLDATA
{
	FORCE_SYMBOLS;

/*0x00*/ int SkillID;
/*0x04*/ int BonusPoints;
/*0x08*/
};

enum eGroupRoles
{
	GroupRoleNone,
	GroupRoleTank,
	GroupRoleAssist,
	GroupRolePuller,
	GroupRoleMarkNPC,
	GroupRoleMasterLooter,

	MaxGroupRoles
};

//============================================================================
// CGroupMember
//============================================================================

// Real name is CGroupMemberClient, but we will use CGroupMember for short since
// we only ever deal with the client.
class CGroupMember;

class [[offsetcomments]] CGroupMemberBase
{
public:
/*0x04*/ CXStr                 Name;
/*0x08*/ short                 Type;                                 // player type (EQP_PC, EQP_NPC, etc)
/*0x0c*/ CXStr                 OwnerName;
/*0x10*/ int                   Level;
/*0x14*/ bool                  bIsOffline;
/*0x18*/ uint32_t              UniquePlayerID;
/*0x1c*/ bool                  bRoleStates[MaxGroupRoles];
/*0x24*/ uint32_t              CurrentRoleBits;                      // (Roles & 0x1) = MainTank, 0x2 = MainAssist, 0x4 = Puller 0x8 = Mark NPC 0x10 = Master Looter
/*0x28*/ __time32_t            OnlineTimestamp;
/*0x2c*/

	CGroupMemberBase();
	virtual ~CGroupMemberBase();
	virtual void* GetUnknownPtr() { return nullptr; }
	virtual void* GetUnknownPtr2() { return nullptr; }
	virtual void* GetUnknownPtr3() { return nullptr; }
	virtual CharacterZoneClient* GetCharacter() { return nullptr; }
	virtual CGroupMember* AsMemberClient() { return nullptr; }
	virtual void RemovedFromGroup(uint32_t id) = 0;

	inline bool IsOffline() const { return bIsOffline; }
	inline __time32_t GetOnlineTimestamp() const { return OnlineTimestamp; }
	inline bool GetRole(eGroupRoles role) const { return bRoleStates[role]; }
	inline const char* GetName() const { return Name.c_str(); }
	inline const char* GetOwnerName() const { return OwnerName.c_str(); }
	inline int GetLevel() const { return Level; }

	inline bool IsMainTank() const { return GetRole(GroupRoleTank); }
	inline bool IsMainAssist() const { return GetRole(GroupRoleAssist); }
	inline bool IsPuller() const { return GetRole(GroupRolePuller); }
	inline bool IsMarkNPC() const { return GetRole(GroupRoleMarkNPC); }
	inline bool IsMasterLooter() const { return GetRole(GroupRoleMasterLooter); }

	// Compat wrappers for old member types/names
	__declspec(property(get = getPName)) CXStr* pName;
	DEPRECATE("CGroupMemberBase: Use Name instead of pName")
	inline CXStr* getPName() { return &Name; }

	__declspec(property(get = getPOwner)) CXStr* pOwner;
	DEPRECATE("CGroupMemberBase: Use OwnerName instead of pOwner")
	inline CXStr* getPOwner() { return &OwnerName; }

	// Compat wrapper for Mercenary
	__declspec(property(get = getMercenary)) uint8_t Mercenary;
	DEPRECATE("CGroupMemberBase: Use Type instead of Mercenary")
	inline uint8_t getMercenary() { return (uint8_t)Type; }

	ALT_MEMBER_GETTER(bool, bIsOffline, Offline);
	ALT_MEMBER_GETTER(uint32_t, CurrentRoleBits, Roles);

	__declspec(property(get = IsMainTank)) bool MainTank;
	__declspec(property(get = IsMainAssist)) bool MainAssist;
	__declspec(property(get = IsPuller)) bool Puller;
	__declspec(property(get = IsMarkNPC)) bool MarkNpc;
	__declspec(property(get = IsMasterLooter)) bool MasterLooter;

private:
	void ClearRoles();
};

class [[offsetcomments]] CGroupMember : public CGroupMemberBase
{
public:
/*0x2c*/ CharacterZoneClient*  pCharacter;
/*0x30*/ PlayerClient*         pPlayer;
/*0x34*/ int                   GroupIndex;
/*0x38*/

	CGroupMember();
	virtual ~CGroupMember();

	virtual CharacterZoneClient* GetCharacter() override { return pCharacter; }
	virtual CGroupMember* AsMemberClient() override { return this; }
	PlayerClient* GetPlayer() { return pPlayer; }

	ALT_MEMBER_GETTER(PlayerClient*, pPlayer, pSpawn);
};


inline namespace deprecated {
	using GROUPMEMBER DEPRECATE("Use CGroupMember instead of GROUPMEMBER") = CGroupMember;
	using PGROUPMEMBER DEPRECATE("Use CGroupMember* instead of PGROUPMEMBER") = CGroupMember*;
}

//============================================================================
// CGroupClient
//============================================================================

// This class holds information about the members of the group. Technically it
// stores CGroupMemberBase, but since this is the client, these will always be
// instances of CGroupMember, so we'll just skip the type casts and use
// the type instead.

class [[offsetcomments]] CGroupBase
{
public:
	CGroupBase();
	virtual ~CGroupBase();
	// other virtuals not mapped out

	CGroupMember* GetGroupLeader() const { return m_groupLeader; }
	EQLIB_OBJECT CGroupMember* GetGroupMember(int index) const;

	inline uint32_t GetID() const { return m_id; }

	// iterator support for stl containers and algorithms
	inline auto begin() { return std::begin(m_groupMembers); }
	inline auto begin() const { return std::cbegin(m_groupMembers); }
	inline auto cbegin() const { return std::cbegin(m_groupMembers); }
	inline auto end() { return std::end(m_groupMembers); }
	inline auto end() const { return std::cend(m_groupMembers); }
	inline auto cend() { return std::cend(m_groupMembers); }

	ALT_MEMBER_GETTER_ARRAY_DEPRECATED(CGroupMember*, MAX_GROUP_SIZE, m_groupMembers, pMember,
		"CGroupBase: Use Group->GetGroupMember instead of accessing pMembers");
	ALT_MEMBER_GETTER(CGroupMember*, m_groupLeader, pLeader);

protected:
/*0x04*/ CGroupMember*         m_groupMembers[MAX_GROUP_SIZE];
/*0x1c*/ CGroupMember*         m_groupLeader;
/*0x20*/ uint32_t              m_id;
/*0x24*/
};

class [[offsetcomments]] CGroup : public CGroupBase
{
public:
	using CGroupBase::GetGroupMember;

	// Get the mercenary member for the given owner name.
	EQLIB_OBJECT CGroupMember* GetMercenary(std::string_view ownerName) const;

	// Get the group member for the given name or index
	EQLIB_OBJECT CGroupMember* GetGroupMember(std::string_view name) const;

	// Retrieve a group member by some criteria
	EQLIB_OBJECT CGroupMember* GetGroupMember(PlayerClient* pPlayer) const;
	EQLIB_OBJECT CGroupMember* GetGroupMemberByRole(eGroupRoles role) const;

	// Retrieve a group member by its position (skipping holes)
	EQLIB_OBJECT CGroupMember* GetNthGroupMember(int position) const;

	// Get the number of group members
	EQLIB_OBJECT uint32_t GetNumberOfMembers(bool includeOffline = true) const;
	EQLIB_OBJECT uint32_t GetNumberOfPlayerMembers(bool includeOffline = true) const;
	EQLIB_OBJECT uint32_t GetNumberOfMembersExcludingSelf(bool includeOffline = true) const;

	// What is the index of this group member? Returns -1 if not found. Returns ARRAY INDEX. (counts blank slots)
	EQLIB_OBJECT int GetGroupMemberIndex(CGroupMember* pMember) const;

	// Returns the VISUAL INDEX of the group member. That is, what position they are in the list, ignoring blank slots.
	EQLIB_OBJECT int GetGroupMemberVisualIndex(CGroupMember* pMember) const;

	EQLIB_OBJECT bool IsGroupMember(PlayerClient* pPlayer) const;
	EQLIB_OBJECT bool IsGroupLeader(PlayerClient* pPlayer) const;

private:
/*0x24*/ int                   GroupSelectID;
/*0x28*/
};

inline namespace deprecated {
	using GROUPINFO DEPRECATE("Use CGroup instead of GROUPINFO") = CGroup;
	using PGROUPINFO DEPRECATE("Use CGroup* instead of PGROUPINFO") = CGroup*;
}
using CGroupClient = CGroup;

//============================================================================
//============================================================================

// size 0x4c 12-25-09 - ieatacid
struct [[offsetcomments]] ExtendedTargetSlot
{
/*0x00*/ DWORD          xTargetType;
/*0x04*/ eXTSlotStatus  XTargetSlotStatus;
/*0x08*/ uint32_t       SpawnID;
/*0x0c*/ char           Name[EQ_MAX_NAME];
/*0x4c*/
};

inline namespace deprecated {
	using XTARGETSLOT DEPRECATE("Use ExtendedTargetSlot instead of PXTARGETSLOT") = ExtendedTargetSlot;
	using PXTARGETSLOT DEPRECATE("Use ExtendedTargetSlot* instead of XTARGETSLOT") = ExtendedTargetSlot*;
}

DEPRECATE("The number of extended targets is not hard coded. Use GetNumSlots() to get the right value.")
constexpr int MAX_EXTENDED_TARGETS  = 23;

class [[offsetcomments]] ExtendedTargetList
{
public:
	using TargetSlotArray = ArrayClass<ExtendedTargetSlot>;

	int GetNumSlots() const { return m_targetSlots.GetLength(); }

	// will return null if slot is out of bounds. If not performing a bounds check,
	// its probably a good idea to do a null check on the response.
	EQLIB_OBJECT ExtendedTargetSlot* GetSlot(int slot);

	bool GetAutoAddHaters() const { return m_autoAddHaters; }
	virtual void SetAutoAddHaters(bool autoAdd) { m_autoAddHaters = autoAdd; }

	auto begin() { return m_targetSlots.begin(); }
	auto cbegin() const { return m_targetSlots.cbegin(); }
	auto end() { return m_targetSlots.end(); }
	auto cend() const { return m_targetSlots.cend(); }

	EQLIB_OBJECT const char* ExtendedTargetRoleName(uint32_t xTargetType);

private:
/*0x04*/ TargetSlotArray m_targetSlots;
/*0x14*/ bool m_autoAddHaters;
/*0x18*/ int CurrentSlot;
/*0x1c*/ int ContextSlot;
/*0x20*/

public:
	ALT_MEMBER_GETTER(TargetSlotArray, m_targetSlots, XTargetSlots);
	ALT_MEMBER_GETTER(bool, m_autoAddHaters, bAutoAddHaters);
};

EQLIB_API DEPRECATE("GetXtargetType() is deprecated. Use pLocalPC->pExtendedTargetList->ExtendedTargetRoleName() instead")
const char* GetXtargetType(DWORD type);

struct [[offsetcomments]] MailItemData
{
/*0x00*/ UINT   SendTime;
/*0x04*/ CXStr  SenderName;
/*0x08*/ CXStr  Note;
/*0x0c*/
};

struct [[offsetcomments]] PCAdventureThemeStats
{
/*0x00*/ int SucceededNormal;
/*0x04*/ int FailedNormal;
/*0x08*/ int SucceededHard;
/*0x0c*/ int FailedHard;
/*0x10*/ int AdventureTotalPointsEarned;
/*0x14*/
};

struct [[offsetcomments]] PCAdventureData
{
/*0x00*/ int AdventureLastAdventureDefinitionSeen[5];
/*0x14*/ UINT AdventureLastAdventureDefinitionSeenTime[5];
/*0x28*/ int AdventureActiveAdventureId;
/*0x2c*/ int AdventureActiveAdventureTheme;
/*0x30*/ int AdventureActiveAdventureRisk;
/*0x34*/ int AdventureSafeReturnZoneId;
/*0x38*/ float AdventureSafeReturnX;
/*0x3c*/ float AdventureSafeReturnY;
/*0x40*/ float AdventureSafeReturnZ;
/*0x44*/ int AdventureStatAccepted;
/*0x48*/ int AdventureStatRejected;
/*0x4c*/ int AdventureStatEntered;
/*0x50*/ int AdventureStatFailedEnter;
/*0x54*/ int AdventurePointsAvailable;
/*0x58*/ int AdventurePointsAvailableMax;
/*0x5c*/ UINT AdventureLastSuccessTime;
/*0x60*/ PCAdventureThemeStats ThemeStats[6];
/*0xd8*/
};

struct [[offsetcomments]] PCTaskStatus
{
/*0x00*/ int TaskID;
/*0x04*/ int MovingStartTime;
/*0x08*/ int InitialStartTime;
/*0x0c*/ bool ElementActive[0x14];
/*0x20*/ int CurrentCounts[0x14];
/*0x70*/
};

struct [[offsetcomments]] MonsterMissionTemplate
{
/*0x00*/ int  TemplateID;
/*0x04*/ int  Min;
/*0x08*/ int  Max;
/*0x0c*/ int  NumSelected;
/*0x10*/ bool CanSelect;
/*0x11*/ char TemplateName[0x40];
/*0x54*/
};

struct [[offsetcomments]] PCSharedTaskData
{
/*0x00*/ int  ActiveSharedTaskID;
/*0x04*/ bool bIsMonsterMission;
/*0x08*/ PCTaskStatus Status;                              // size 0x70
/*0x78*/ ArrayClass<MonsterMissionTemplate> Templates;  // size is 0x10
/*0x88*/ float RewardAdjustment;
/*0x8c*/
};

struct [[offsetcomments]] TaskTimerData
{
/*0x00*/ int GroupID;
/*0x04*/ int TimerSeconds;
/*0x08*/ UINT TimerExpiration;
/*0x0c*/ int TimerType;
/*0x10*/ int OrigTaskID;
/*0x14*/ TaskTimerData *pNext;
/*0x18*/
};

class [[offsetcomments]] PendingReward
{
	FORCE_SYMBOLS;

public:
/*0x00*/ void* vfTable;
/*0x04*/ int   ID;
/*0x08*/ int   SetID;
/*0x0c*/ float RewardAdjustment;
/*0x10*/ char  RewardTitle[0x80];
/*0x90*/
};

class [[offsetcomments]] PendingRewardList : public DoublyLinkedList<PendingReward*>
{
public:
/*0x20*/ int NextUID;
/*0x24*/ int MaxPending;
/*0x28*/ int ZoneMaxPending;
/*0x2c*/
};

struct [[offsetcomments]] Point
{
/*0x00*/ UINT PointType;
/*0x04*/ UINT PointSubtype;
/*0x08*/ UINT CurrentCount;
/*0x0c*/ UINT TotalEver;
/*0x10*/
};

struct [[offsetcomments]] PointNamesEntry
{
/*0x00*/ UINT PointTypeId;
/*0x04*/ UINT PointSubtypeId;
/*0x08*/ int  DBStringId;
/*0x0c*/ int  PointItemId;
/*0x10*/ int  ImageId;
/*0x14*/ int  MaxStackSize;
/*0x18*/ bool bStationCashRelated;
/*0x1c*/
};

class [[offsetcomments]] PointSystemBase
{
public:
/*0x00*/ void* vfTable;
/*0x04*/ ArrayClass<PointNamesEntry*> PointNameEntries;
/*0x14*/
};

class [[offsetcomments]] CPlayerPointManager
{
public:
	EQLIB_OBJECT unsigned long GetAltCurrency(unsigned long, unsigned long b = 1);

/*0x00*/ void* vfTable;
/*0x04*/ ArrayClass<Point*> Points;
/*0x14*/
};
using PlayerPointManager = CPlayerPointManager;

struct [[offsetcomments]] ProgressionExperience
{
/*0x00*/ int ProgressionID;
/*0x08*/ double ProgressionExp;
/*0x10*/
};

struct [[offsetcomments]] PCCompletedQuest
{
/*0x00*/ int        QuestID;
/*0x04*/ int        ElementBitmask;
/*0x08*/ __time32_t TimeCompleted;
/*0x0c*/
};

struct [[offsetcomments]] PCQuestHistoryData
{
/*0x000*/ PCCompletedQuest Quests[50];                   // size 0xc * 0x32 = 0x258
/*0x258*/
};

struct [[offsetcomments]] PvPKill
{
/*0x00*/ char VictimName[EQ_MAX_NAME];
/*0x40*/ int VictimLevel;
/*0x44*/ int Unknown0x44;
/*0x48*/ int Unknown0x48;
/*0x4c*/ DWORD VictimRace;
/*0x50*/ DWORD VictimClass;
/*0x54*/ int ZoneID;
/*0x58*/ long Lastkilltime;
/*0x5c*/ int PointsEarned;
/*0x60*/
};

struct [[offsetcomments]] PvPDeath
{
/*0x00*/ char KillerName[EQ_MAX_NAME];
/*0x40*/ int KillerLevel;
/*0x44*/ DWORD KillerRace;
/*0x48*/ DWORD KillerClass;
/*0x4c*/ int ZoneID;
/*0x50*/ long LastDeathTime;
/*0x54*/ int PointsLost;
/*0x58*/
};

struct PvPKill24HourData : public PvPKill
{
	//nothing here?
};

struct [[offsetcomments]] RaidData
{
/*0x00*/ int      MainAssists[MAX_RAID_ASSISTS];
/*0x0c*/ char     MainAssistNames[MAX_RAID_ASSISTS][EQ_MAX_NAME];
/*0xcc*/ int      MainMarkers[MAX_RAID_ASSISTS];
/*0xd8*/ int      MasterLooter;
/*0xdc*/
};

struct [[offsetcomments]] TradeskillRecipeCount
{
	FORCE_SYMBOLS;

/*0x00*/ int SkillID;
/*0x04*/ int RecipeCount;
/*0x08*/
};

class [[offsetcomments]] StatCounter
{
public:
/*0x00*/ uint64_t Value;
/*0x08*/
};

class [[offsetcomments]] StatElapsedTime
{
public:
/*0x00*/ uint32_t StartTick;
/*0x04*/ uint32_t ElapsedTotal;
/*0x08*/ bool bCurrentState;
/*0x0c*/
};

class [[offsetcomments]] PCStatistics
{
public:
	enum eStatisticType
	{
		S_TotalExpEarned,
		S_GroupExpEarned,
		S_ExpRaidEarned,
		S_ExpSoloEarned,
		S_NonExpKills,
		S_ExpKills,
		S_ZonesVisited,
		S_ChatShouts,
		S_ChatOOCs,
		S_ChatSays,
		S_ChatGroup,
		S_ChatTells,
		S_Deaths,
		S_Resurrections,
		S_PlatEarned,
		S_TradeskillCombines,
		S_Forages,
		S_Quests,
		S_LastStat,
	};

/*0x000*/ StatElapsedTime StatTimeSession;
/*0x00c*/ StatElapsedTime StatTimeLFG;
/*0x018*/ StatElapsedTime StatTimeGrouped;
/*0x024*/ StatElapsedTime StatTimeSolo;
/*0x030*/ StatElapsedTime StatTimeRaid;
/*0x03c*/ StatElapsedTime StatTimeInBazaar;
/*0x048*/ StatCounter     Statistics[S_LastStat];
/*0x0d8*/ __time32_t      LastUpdateTime;
/*0x0dc*/ char            PlayerName[EQ_MAX_NAME];
/*0x11c*/ char            PlayerStationID[EQ_MAX_STATION_ID];
/*0x13c*/ int             PlayerLevel;
/*0x140*/ int             PlayerRace;
/*0x144*/ int             PlayerClass;
/*0x148*/ uint32_t        UniquePlayerID;
/*0x14c*/
};

class [[offsetcomments]] GroupMemberStats
{
public:
	enum eStatisticType
	{
		S_Mez,
		S_Root,
		S_Charmed,
		S_Stunned,
		S_Slowed,
		S_FirstAgro,
		S_DmgMelee,
		S_DmgRanged,
		S_DmgSpell,
		S_DmgDot,
		S_DmgPet,
		S_DmgTaken,
		S_DmgHealed,
		S_ExpTotalEarned,
		S_Deaths,
		S_ExpKills,
		S_NonExpKills,
		S_ManaUsed,
		S_EnduranceUsed,
		S_LastStat,
	};

/*0x000*/ char         PlayerName[EQ_MAX_NAME];
/*0x040*/ int          PlayerLevel;
/*0x044*/ int          PlayerRace;
/*0x048*/ int          PlayerClass;
/*0x04c*/ uint32_t     UniquePlayerId;
/*0x050*/ uint32_t     LastMemberUpdateTime;
/*0x054*/ CXStr        StationID;
/*0x058*/ int64_t      PlayerGuild;
/*0x060*/ int          BuffIDs[NUM_LONG_BUFFS];
/*0x108*/ StatCounter  Statistics[S_LastStat];
/*0x1a0*/
};

struct [[offsetcomments]] ClaimData
{
/*0x00*/ int FeatureID;
/*0x04*/ int Count;
/*0x08*/
};

class [[offsetcomments]] ClaimDataCollection
{
public:
/*0x00*/ ArrayClass<ClaimData> ClaimData;
/*0x10*/
};

class [[offsetcomments]] MercenaryAbilityInfo
{
public:
/*0x00*/ int Index;
/*0x04*/ int Cost;
/*0x08*/
};

//============================================================================
// CHARINFO a.k.a. PcClient
//============================================================================

class PcClient;
using CHARINFO = PcClient;
using PCHARINFO = PcClient*;

// This type is DEPRECATED. Nothing should be using it. Use CHARINFO or PcClient
using CHARINFONEW DEPRECATE("Use PcClient instead of CHARINFONEW") = PcClient;

inline namespace deprecated
{
	struct BANKARRAY
	{
		ItemClient* Bank[NUM_BANK_SLOTS];
	};

	struct SHAREDBANKARRAY
	{
		ItemClient* SharedBank[NUM_SHAREDBANK_SLOTS];
	};
}

//============================================================================
// EQ_PC
//============================================================================

struct [[offsetcomments]] ItemContainingRealEstate
{
	FORCE_SYMBOLS;

/*0x00*/ int                RealEstateID;
/*0x04*/ ItemGlobalIndex    ItemLocation;
/*0x10*/
};

//============================================================================
// CharacterBase
//============================================================================

enum GameFeatures
{
	eSpellRankFeature = 3
};

class IFreeToPlayInfo
{
public:
	virtual int GetGameFeature(int feature) const = 0;
	virtual int GetMembershipLevel() const = 0;
};

enum eCharacterStatus : uint8_t {
	eCharStatusNormal = 0,
	eCharStatusStunned,
	eCharStatusFrozen,
	eCharStatusUnconcious,
	eCharStatusDead,
};

// .rdata:00AE7F00 const PcClient::`vbtable'{for `CharacterZoneClient'} dd -4
// .rdata:00AE7F00                                         ; DATA XREF: PcClient::PcClient(void)+3D
// .rdata:00AE7F04                 dd 438h

// this is the offset of CharacterZoneClient + virtual base table:
// CharacterZoneClient starts at 0x2474 and we add 0x438 to give us 0x28ac
class [[offsetcomments(0x28ac)]] CharacterBase : public IFreeToPlayInfo
{
	// +0: vftable
public:
/*0x28b0*/ ProfileManager                        ProfileManager;
/*0x28b8*/ uint8_t                               languages[MAX_LANGUAGES];
/*0x28d8*/ float                                 X;
/*0x28dc*/ float                                 Y;
/*0x28e0*/ float                                 Z;
/*0x28e4*/ float                                 Heading;
/*0x28e8*/ char                                  Name[EQ_MAX_NAME];
/*0x2928*/ char                                  Lastname[EQ_MAX_LASTNAME];
/*0x2948*/ char                                  Title[128];
/*0x29c8*/ char                                  VehicleName[64];
/*0x2a08*/ eCharacterStatus                      Status;
/*0x2a0c*/ EQZoneIndex                           currentZoneId;
/*0x2a10*/ uint8_t                               standstate;
/*0x2a14*/ RaidData                              raidData;
/*0x2af0*/ int                                   ExpansionFlags;
/*0x2af4*/ bool                                  bSuperPKILL;
/*0x2af5*/ bool                                  bUnclone;
/*0x2af6*/ bool                                  bDead;
/*0x2af8*/ int                                   LD_Timer;
/*0x2afc*/ int                                   SpellInterruptCount;
/*0x2b00*/ bool                                  bAutoSplit;
/*0x2b01*/ bool                                  bTellsOff;
/*0x2b02*/ bool                                  bGmInvis;
/*0x2b04*/ int                                   KillMe;
/*0x2b08*/ bool                                  CheaterLdFlag;                // likely this is int SoulMarkCount instead.
/*0x2b09*/ bool                                  NoRent;
/*0x2b0a*/ bool                                  Corpse;
/*0x2b0b*/ bool                                  ClientGmFlagSet;
/*0x2b0c*/ int                                   BankSharedPlat;
/*0x2b10*/ int                                   BankPlat;
/*0x2b14*/ int                                   BankGold;
/*0x2b18*/ int                                   BankSilver;
/*0x2b1c*/ int                                   BankCopper;
/*0x2b20*/ int                                   STR;
/*0x2b24*/ int                                   STA;
/*0x2b28*/ int                                   CHA;
/*0x2b2c*/ int                                   DEX;
/*0x2b30*/ int                                   INT;
/*0x2b34*/ int                                   AGI;
/*0x2b38*/ int                                   WIS;
/*0x2b3c*/ int                                   LCK;
/*0x2b40*/ int                                   SavePoison;
/*0x2b44*/ int                                   SaveMagic;
/*0x2b48*/ int                                   SaveDisease;
/*0x2b4c*/ int                                   SaveCorruption;
/*0x2b50*/ int                                   SaveFire;
/*0x2b54*/ int                                   SaveCold;
/*0x2b58*/ int                                   SavePhysical;
/*0x2b5c*/ int                                   UncappedStr;
/*0x2b60*/ int                                   UncappedSta;
/*0x2b64*/ int                                   UncappedCha;
/*0x2b68*/ int                                   UncappedDex;
/*0x2b6c*/ int                                   UncappedInt;
/*0x2b70*/ int                                   UncappedAgi;
/*0x2b74*/ int                                   UncappedWis;
/*0x2b78*/ int                                   UncappedResistPoison;
/*0x2b7c*/ int                                   UncappedResistMagic;
/*0x2b80*/ int                                   UncappedResistDisease;
/*0x2b84*/ int                                   UncappedResistCorruption;
/*0x2b88*/ int                                   UncappedResistFire;
/*0x2b8c*/ int                                   UncappedResistCold;
/*0x2b90*/ int                                   UncappedResistPhysical;
/*0x2b94*/ int                                   NoBuffStr;
/*0x2b98*/ int                                   NoBuffSta;
/*0x2b9c*/ int                                   NoBuffCha;
/*0x2ba0*/ int                                   NoBuffDex;
/*0x2ba4*/ int                                   NoBuffInt;
/*0x2ba8*/ int                                   NoBuffAgi;
/*0x2bac*/ int                                   NoBuffWis;
/*0x2bb0*/ int                                   NoBuffResistPoison;
/*0x2bb4*/ int                                   NoBuffResistMagic;
/*0x2bb8*/ int                                   NoBuffResistDisease;
/*0x2bbc*/ int                                   NoBuffResistCorruption;
/*0x2bc0*/ int                                   NoBuffResistFire;
/*0x2bc4*/ int                                   NoBuffResistCold;
/*0x2bc8*/ int                                   NoBuffResistPhysical;
/*0x2bcc*/

	virtual void Copy(const CharacterBase& other) {}
	virtual ~CharacterBase() {}

	ALT_MEMBER_GETTER(int8_t, Status, Stunned);

	uint16_t get_instance() const { return currentZoneId >> 16; }
	__declspec(property(get = get_instance)) uint16_t instance;

	uint16_t get_zoneId() const { return currentZoneId & 0x7fff; }
	__declspec(property(get = get_zoneId)) uint16_t zoneId;

	// Verified
	EQLIB_OBJECT int IsExpansionFlag(int);
	EQLIB_OBJECT int GetMemorizedSpell(int gem);             // 0-0xf this func returns the spellid for whatever is in the gem

	// Items
	EQLIB_OBJECT ItemPtr GetItemByGlobalIndex(const ItemGlobalIndex& GlobalIndex) const;
	EQLIB_OBJECT ItemPtr GetItemByGlobalIndex(const ItemGlobalIndex& GlobalIndex, ItemContainer::CheckDepthOptions Option) const;

	//EQLIB_OBJECT bool IsValidGlobalIndex(const ItemGlobalIndex& globalIndex) const;
	//EQLIB_OBJECT /*virtual*/ ItemContainer* GetItemContainerByGlobalIndex(const ItemGlobalIndex& index) const;

	inline ItemIndex CreateItemIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return GetCurrentBaseProfile().CreateItemIndex(slot0, slot1, slot2); }
	inline ItemGlobalIndex CreateItemGlobalIndex(int slot0, int slot1 = -1, int slot2 = -1) const { return GetCurrentBaseProfile().CreateItemGlobalIndex(slot0, slot1, slot2); }
	inline ItemPtr GetItemPossession(const ItemIndex& lIndex) { return GetCurrentBaseProfile().GetItemPossession(lIndex); }
	inline ItemContainer& GetItemPossessions() { return GetCurrentBaseProfile().GetItemPosessions(); }

	inline ItemPtr GetInventorySlot(int lIndex) { return GetCurrentBaseProfile().GetInventorySlot(lIndex); }

	inline BaseProfile& GetCurrentBaseProfile() { return *ProfileManager.GetCurrentProfile(); }
	inline const BaseProfile& GetCurrentBaseProfile() const { return *ProfileManager.GetCurrentProfile(); }

	// Fix Typo
	inline ItemContainer& GetItemPosessions() { return GetItemPossessions(); }

	// Accessors
	int GetRace() const { return GetCurrentBaseProfile().GetRace(); }
	int GetClass() const { return GetCurrentBaseProfile().GetClass(); }

	int GetStrength() const { return STR; }
	int GetStamina() const { return STA; }
	int GetCharisma() const { return CHA; }
	int GetDexterity() const { return DEX; }
	int GetIntelligence() const { return INT; }
	int GetAgility() const { return AGI; }
	int GetWisdom() const { return WIS; }
	int GetLuck() const { return LCK; }

	EQ_Affect& GetEffect(int nBuffSlot)
	{
		if (nBuffSlot >= 0 && nBuffSlot < NUM_LONG_BUFFS)
			return GetCurrentBaseProfile().GetEffect(nBuffSlot);
		if (nBuffSlot >= NUM_LONG_BUFFS && NUM_LONG_BUFFS + NUM_TEMP_BUFFS)
			return GetCurrentBaseProfile().GetTempEffect(nBuffSlot - NUM_LONG_BUFFS);
		// ??
		return GetEffect(0);
	}

	int GetEffectSlot(EQ_Affect* effect)
	{
		for (int nBuffSlot = 0; nBuffSlot < MAX_TOTAL_BUFFS; ++nBuffSlot)
		{
			if (effect == &GetEffect(nBuffSlot))
				return nBuffSlot;
		}

		return -1;
	}

	// Unverified
	EQLIB_OBJECT BYTE GetLanguageSkill(int) const;
};

// The starting offset is the size of PcBase
class [[offsetcomments(0x2470)]] CharacterZoneClient : virtual public CharacterBase
{
	virtual void vftableph() {};

	// +0x00: const PcClient::`vftable'{for `CharacterZoneClient'}
	// +0x04: const PcClient::`vbtable'{for `CharacterZoneClient'}

public:
/*0x2478*/ PlayerClient*                         me;
/*0x247c*/ bool                                  statDirtyFlag;
/*0x247d*/ bool                                  zoningStatProcessing;
/*0x2480*/ int                                   ArmorClassBonus;
/*0x2484*/ int                                   CurrWeight;
/*0x2488*/ int                                   LastHitPointSendPercent;
/*0x248c*/ int                                   LastManaPointSendPercent;
/*0x2490*/ int                                   LastEndurancePointSendPercent;
/*0x2494*/ int                                   HPBonus;
/*0x2498*/ int                                   ManaBonus;
/*0x249c*/ int                                   EnduranceBonus;
/*0x24a0*/ int                                   EnduranceCostPerSecond;
/*0x24a4*/ int                                   CombatEffectsBonus;
/*0x24a8*/ int                                   ShieldingBonus;
/*0x24ac*/ int                                   SpellShieldBonus;
/*0x24b0*/ int                                   AvoidanceBonus;
/*0x24b4*/ int                                   AccuracyBonus;
/*0x24b8*/ int                                   StunResistBonus;
/*0x24bc*/ int                                   StrikeThroughBonus;
/*0x24c0*/ int                                   DoTShieldBonus;
/*0x24c4*/ int                                   DamageShieldMitigationBonus;
/*0x24c8*/ int                                   DamageShieldBonus;
/*0x24cc*/ int                                   ItemSkillMinDamageMod[NUM_ITEM_SKILL_DMG_MOD];
/*0x24f0*/ int                                   SkillMinDamageModBonus[NUM_ITEM_SKILL_DMG_MOD];
/*0x2514*/ int                                   HeroicSTRBonus;
/*0x2518*/ int                                   HeroicINTBonus;
/*0x251c*/ int                                   HeroicWISBonus;
/*0x2520*/ int                                   HeroicAGIBonus;
/*0x2524*/ int                                   HeroicDEXBonus;
/*0x2528*/ int                                   HeroicSTABonus;
/*0x252c*/ int                                   HeroicCHABonus;
/*0x2530*/ int                                   HealAmountBonus;
/*0x2534*/ int                                   SpellDamageBonus;
/*0x2538*/ int                                   ItemHealAmountDotMod;
/*0x253c*/ int                                   ItemSpellDamageDotMod;
/*0x2540*/ int                                   ClairvoyanceBonus;
/*0x2544*/ int                                   AttackBonus;
/*0x2548*/ int                                   HPRegenBonus;
/*0x254c*/ int                                   ManaRegenBonus;
/*0x2550*/ int                                   EnduranceRegenBonus;
/*0x2554*/ int                                   AttackSpeed;
/*0x2558*/ int                                   NoBuffItemHitpointAdjustment;
/*0x255c*/ int                                   NoBuffItemManaAdjustment;
/*0x2560*/ int                                   NoBuffItemEnduranceAdjustment;
/*0x2564*/ int                                   NoBuffItemBaseChanceProc;
/*0x2568*/ int                                   NoBuffItemMinDamageMod;
/*0x256c*/ int                                   NoBuffItemInnateSpellRune;
/*0x2570*/ int                                   NoBuffItemAvoidance;
/*0x2574*/ int                                   NoBuffItemToHit;
/*0x2578*/ int                                   NoBuffItemResistStunChance;
/*0x257c*/ int                                   NoBuffItemDotShieldingEffect;
/*0x2580*/ int                                   NoBuffItemStrikeThroughChance;
/*0x2584*/ int                                   NoBuffItemAttack;
/*0x2588*/ int                                   NoBuffItemHitPointRegen;
/*0x258c*/ int                                   NoBuffItemManaRegen;
/*0x2590*/ int                                   NoBuffItemEnduranceRegen;
/*0x2594*/ int                                   NoBuffItemDamageShield;
/*0x2598*/ int                                   NoBuffItemDamageShieldMitigation;
/*0x259c*/ int                                   NoBuffItemHaste;
/*0x25a0*/ int                                   NoBuffItemSkillMinDamageMod[NUM_ITEM_SKILL_DMG_MOD];
/*0x25c4*/ bool                                  bOutputHpRegen;
/*0x25c5*/ bool                                  bInvulnerable;
/*0x25c6*/ bool                                  bOnAVehicle;
/*0x25c8*/ SpellCache                            spellCache;
/*0x2620*/ HashListSet<int, 128>                 DoomEffectsBySlot;
/*0x2830*/ uint32_t                              LastHitEval;
/*0x2834*/

	//EQLIB_OBJECT CharacterZoneClient();

	ALT_MEMBER_GETTER(PlayerClient*, me, pSpawn);

	// Verified
	EQLIB_OBJECT /* virtual */ int CalculateInvisLevel(InvisibleTypes Type, bool bIncludeSoS = true);
	EQLIB_OBJECT bool CanUseItem(const ItemPtr& pItem, bool bUseRequiredLvl, bool bOutput = true);
	EQLIB_OBJECT unsigned char CastSpell(unsigned char gemid, int spellid, const ItemPtr& pItem, const ItemGlobalIndex& itemLoc, ItemSpellTypes slot, unsigned char spell_loc, int arg7, int arg8, int arg9, bool arg10);
	EQLIB_OBJECT int Cur_HP(int Spawntype/*PC = 0 NPC=1 and so on*/, bool bCapAtMax = true);
	EQLIB_OBJECT int Cur_Mana(bool bCapAtMax = true);
	EQLIB_OBJECT int GetAdjustedSkill(int);
	EQLIB_OBJECT int GetCurrentMod(int index); // CalculateHeroicModAmount
	/* virtual */ EQLIB_OBJECT int GetBaseSkill(int);
	EQLIB_OBJECT int GetEnduranceRegen(bool bIncItemsAndBuffs = true, bool bCombat = true);
	EQLIB_OBJECT int GetCastingTimeModifier(const EQ_Spell* pSpell); // used to get aa modifiers
	EQLIB_OBJECT int GetFocusCastingTimeModifier(const EQ_Spell* pSpell, ItemPtr& pItemOut, bool bEvalOnly = false);
	EQLIB_OBJECT int GetFocusDurationMod(const EQ_Spell* spell, ItemPtr& pItemOut, PlayerZoneClient* pCaster, int originalDuration, int* pOut1, int* pOut2);
	EQLIB_OBJECT int GetFocusRangeModifier(const EQ_Spell* pSpell, ItemPtr& pItemOut);
	EQLIB_OBJECT int GetHPRegen(bool bIncItemsAndBuffs = true, bool* pOutIsBleeding = nullptr, bool bCombat = false);
	EQLIB_OBJECT int GetManaRegen(bool bIncItemsAndBuffs = true, bool bCombat = true);
	EQLIB_OBJECT int GetModCap(int index, bool bToggle = false);
	EQLIB_OBJECT EQ_Affect* GetPCSpellAffect(int affectId, int* slotnum, int* spaslot = nullptr) const;
	EQLIB_OBJECT int Max_Endurance(bool bCapAtMax = true);
	EQLIB_OBJECT int Max_HP(int SpawnType, bool bCapAtMax = true);
	EQLIB_OBJECT int Max_Mana(bool bCapAtMax = true);
	EQLIB_OBJECT int SpellDuration(EQ_Spell const*, uint8_t casterLevel, uint8_t item /* bool? */);
	EQLIB_OBJECT int TotalEffect(int spaID, bool bIncludeItems = true, int subindex = 0, bool bIncludeAA = true, bool bincludeBuffs = true) const;
	EQLIB_OBJECT void UseSkill(unsigned char skill, PlayerZoneClient* Target, bool bAuto = false);

	// Unverified

	EQLIB_OBJECT int CalcAffectChange(const EQ_Spell* spell, BYTE casterLevel, BYTE affextIndex, const EQ_Affect* theAffect, int EffectIndex = 0, PlayerZoneClient* pCaster = NULL, bool overrideChangeVal = false, int ChangeVal = -1, bool bCap = true);
	EQLIB_OBJECT int CalcAffectChangeGeneric(const EQ_Spell* spell, BYTE casterLevel, BYTE affextIndex, const EQ_Affect* theAffect, int EffectIndex, bool bCap = true);
	EQLIB_OBJECT void MakeMeVisible(int, bool);
	EQLIB_OBJECT int GetItemCountWorn(int);
	EQLIB_OBJECT int GetItemCountInInventory(int, bool skipCheck = false);
	EQLIB_OBJECT int GetCursorItemCount(int);
	EQLIB_OBJECT bool HasSkill(int);
	EQLIB_OBJECT EQ_Affect* FindAffectSlot(int SpellID, PlayerClient* Caster, int* slindex, bool bJustTest, int CasterLevel = -1, EQ_Affect* BuffArray = nullptr, int BuffArraySize = 0);
	EQLIB_OBJECT bool IsStackBlocked(const EQ_Spell* pSpell, PlayerClient* pCaster, EQ_Affect* pEffecs = NULL, int EffectsSize = 0, bool bMessageOn = false);
	EQLIB_OBJECT int BardCastBard(const EQ_Spell* pSpell, signed int caster_class) const;
	EQLIB_OBJECT unsigned char GetMaxEffects() const;
	EQLIB_OBJECT int GetOpenEffectSlot(bool bIsShortBuff, bool bIsMeleeSkill, int Index = -1);
	EQLIB_OBJECT int GetFirstEffectSlot(bool bIsShortBuff, bool bIsMeleeSkill);
	EQLIB_OBJECT int GetLastEffectSlot(bool bIsShortBuff, bool bIsMeleeSkill, bool bIsDisplay = false);
	EQLIB_OBJECT const int GetFocusReuseMod(const EQ_Spell* pSpell, ItemPtr& pOutItem, bool evalOnly = false);
	//EQLIB_OBJECT bool FindItemByGuid(const EqItemGuid& ItemGuid, int* pos_slot, int* con_slot);
	//EQLIB_OBJECT BYTE FindItemByRecord(int ItemNumber, int* pos_slot, int* con_slot, bool bReverseLookup);

	// From EQ_Character1
	// int const GetFocusCastingTimeModifier(class EQ_Spell const*, class EQ_Equipment**, int);
	EQLIB_OBJECT void SetEffectId(unsigned char, unsigned int);
	EQLIB_OBJECT void StopSpellCast(unsigned char);
	EQLIB_OBJECT void StopSpellCast(unsigned char, int);
	EQLIB_OBJECT void StunMe(unsigned int, bool, bool, bool);
	EQLIB_OBJECT void UnStunMe();

	// From EQ_Character
	EQLIB_OBJECT bool DoesSpellMatchFocusFilters(EQ_Spell const*, EQ_Spell const*);
	EQLIB_OBJECT bool IsSpellTooPowerfull(EQ_Spell*, CharacterZoneClient*);
	EQLIB_OBJECT bool CanUseMemorizedSpellSlot(int gem);
	EQLIB_OBJECT bool IsValidAffect(int);
	EQLIB_OBJECT char* Class(int);
	EQLIB_OBJECT char* KunarkClass(int, int, int, bool);
	EQLIB_OBJECT char* Race(int);
	//EQLIB_OBJECT EQ_Affect& GetEffect(int) const; // removeme
	EQLIB_OBJECT EQ_Equipment* GetFocusItem(EQ_Spell const*, int);
	EQLIB_OBJECT EQ_Spell* GetFocusEffect(EQ_Spell const*, int);
	EQLIB_OBJECT PlayerClient* FindClosest(int, int, int, int, int);
	EQLIB_OBJECT PlayerClient* GetMyPetPlayer();
	EQLIB_OBJECT float encum_factor();
	EQLIB_OBJECT int ac(bool);
	EQLIB_OBJECT int Agi();
	EQLIB_OBJECT int AntiTwinkAdj(EQ_Equipment*, int, int);
	EQLIB_OBJECT int ApplyDamage(int, EQMissileHitinfo*, bool, HateListEntry*, bool);
	EQLIB_OBJECT int ApplyFatigue(int);
	EQLIB_OBJECT int AutoEat(unsigned char);
	EQLIB_OBJECT int BaneDamage(EQ_Equipment*);
	//EQLIB_OBJECT int BardCastBard(EQ_Spell const*, int) const;
	EQLIB_OBJECT int basesave_cold();
	EQLIB_OBJECT int basesave_disease();
	EQLIB_OBJECT int basesave_fire();
	EQLIB_OBJECT int basesave_magic();
	EQLIB_OBJECT int basesave_poison();
	EQLIB_OBJECT int CalculateBardSongMod(int);
	EQLIB_OBJECT int CapStat(int, int);
	EQLIB_OBJECT int Cha();
	EQLIB_OBJECT int CheckFoodAndWater();
	EQLIB_OBJECT int compute_defense();
	EQLIB_OBJECT int compute_tohit(unsigned char);
	EQLIB_OBJECT int cur_encumbrance();
	EQLIB_OBJECT int defense_agility_bonus();
	EQLIB_OBJECT int Dex();
	EQLIB_OBJECT int ElementResistDmg(EQ_Equipment*, int);
	EQLIB_OBJECT int eqspa_change_form(EQ_Spell*, int, int, EQ_Affect*);
	EQLIB_OBJECT int eqspa_hp(unsigned int, EQ_Affect*, int, EQ_Spell*);
	EQLIB_OBJECT int GetBardInstrumentMod(int);
	EQLIB_OBJECT int GetClassACBonus(int);
	EQLIB_OBJECT int GetFirstEffectSlot(bool);
	EQLIB_OBJECT int GetHPFromStamina(int);
	EQLIB_OBJECT int GetIndexSkillMinDamageMod(int);
	EQLIB_OBJECT int GetLastEffectSlot(bool);
	EQLIB_OBJECT int GetOpenEffectSlot(bool, int);
	EQLIB_OBJECT int HasInnateSkill(unsigned char, int);
	EQLIB_OBJECT int HasSkill(unsigned char);
	EQLIB_OBJECT int HasSpell(int);
	EQLIB_OBJECT int IHaveSkill(unsigned char);
	EQLIB_OBJECT int InSpecialBindSpot(PlayerZoneClient*);
	EQLIB_OBJECT int Int();
	EQLIB_OBJECT int IsMage();
	EQLIB_OBJECT int IsSpecialBazaarSpot(PlayerZoneClient*);
	EQLIB_OBJECT int IsSpellcaster();
	EQLIB_OBJECT int ItemSpellAffects(int);
	EQLIB_OBJECT int max_encumbrance();
	EQLIB_OBJECT int NoBashMe(int);
	EQLIB_OBJECT int NoMezMe(int, PlayerZoneClient*, EQ_Spell*);
	EQLIB_OBJECT int offense(unsigned char);
	EQLIB_OBJECT int ProcessAffects();
	EQLIB_OBJECT int save_bash(int);
	EQLIB_OBJECT int save_cold();
	EQLIB_OBJECT int save_disease();
	EQLIB_OBJECT int save_fire();
	EQLIB_OBJECT int save_magic();
	EQLIB_OBJECT int save_poison();
	EQLIB_OBJECT int SetLocalVar(char*, int);
	EQLIB_OBJECT int Skill(int);
	EQLIB_OBJECT int Sta();
	EQLIB_OBJECT int Str();
	EQLIB_OBJECT int TakeFallDamage(float);
	EQLIB_OBJECT int TotalSpellAffects(unsigned char, bool, int*);
	EQLIB_OBJECT int Wis();
	EQLIB_OBJECT int const GetFocusConserveRegChance(const EQ_Spell*, EQ_Equipment**);
	EQLIB_OBJECT long TotalOnPerson();
	EQLIB_OBJECT static int normal_to_special(int);
	EQLIB_OBJECT unsigned char BarbarianCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char BaseAttr(int, unsigned char);
	EQLIB_OBJECT unsigned char CanDoubleAttack(PlayerZoneClient*, unsigned char);
	EQLIB_OBJECT unsigned char CanIBreathe();
	EQLIB_OBJECT unsigned char CanISeeInvis();
	EQLIB_OBJECT unsigned char CanMedOnHorse();
	EQLIB_OBJECT unsigned char CanSecondaryAttack(PlayerZoneClient*);
	EQLIB_OBJECT unsigned char CanWorship(int, int, unsigned char);
	EQLIB_OBJECT unsigned char CastingRequirementsMet(int);
	EQLIB_OBJECT unsigned char CheckClass(int, int);
	EQLIB_OBJECT unsigned char CityCanStart(int, int, int, int);
	EQLIB_OBJECT unsigned char ClassMin(int, int, unsigned char);
	EQLIB_OBJECT unsigned char DarkElfCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char DwarfCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char ElfCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char EruditeCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char ExpendItemCharge(int, int);
	EQLIB_OBJECT unsigned char FindItemByClass(int, int*, int*);
	EQLIB_OBJECT unsigned char FindItemQty(int, int);
	EQLIB_OBJECT unsigned char FroglockCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char GetSkillBaseDamage(unsigned char, PlayerZoneClient*);
	EQLIB_OBJECT unsigned char GnomeCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char HalfElfCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char HalflingCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char HighElfCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char HumanCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char IksarCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char IsSpellAffectingPC(int, int);
	EQLIB_OBJECT unsigned char OgreCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char SpellFizzled(unsigned char, EQ_Spell*);
	EQLIB_OBJECT unsigned char TrollCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT unsigned char VahShirCanWorship(unsigned char, unsigned char);
	EQLIB_OBJECT void CalcFoodDrinkBonus(int);
	EQLIB_OBJECT void DoFishingEvent();
	EQLIB_OBJECT void DoIntimidationEvent();
	EQLIB_OBJECT void DoLight(unsigned char);
	EQLIB_OBJECT void DoMeditation();
	EQLIB_OBJECT void DoPassageOfTime();
	EQLIB_OBJECT void EQ_CharacterResetAllMembers();
	EQLIB_OBJECT void EQSPA_Feign_Death(int);
	EQLIB_OBJECT void eqspa_levitation();
	EQLIB_OBJECT void eqspa_locate_corpse();
	EQLIB_OBJECT void eqspa_movement_rate(int);
	EQLIB_OBJECT void HandleSpecialPCAffects(int);
	EQLIB_OBJECT void HitBySpell(EQMissileHitinfo*);
	EQLIB_OBJECT void IAmDead(EQMissileHitinfo*, int);
	EQLIB_OBJECT void InitInnates(unsigned int, unsigned int);
	EQLIB_OBJECT void InitMyLanguages();
	EQLIB_OBJECT void InitSkills(unsigned char, unsigned int);
	EQLIB_OBJECT void ItemSold(long);
	EQLIB_OBJECT void ModifyCurHP(int64_t modification, PlayerZoneClient* resposibleplayer, int skilltype);
	EQLIB_OBJECT void NotifyPCAffectChange(int, int);
	EQLIB_OBJECT void ProcessAllStats();
	EQLIB_OBJECT void ProcessEnvironment();
	EQLIB_OBJECT void ProcessHungerandThirst(unsigned int);
	EQLIB_OBJECT void RemovePCAffect(EQ_Affect*);
	EQLIB_OBJECT void RemovePCAffectex(EQ_Affect*, bool, ArrayClass<LaunchSpellData*>&, int, int, int);
	EQLIB_OBJECT void ResetCur_HP(int);
	EQLIB_OBJECT void UpdateMyVisibleStatus();

	// private from EQ_Character
	EQLIB_OBJECT int GetCachEQSPA(int);
	EQLIB_OBJECT void ReCachItemEffects();
	EQLIB_OBJECT void ReCachSpellEffects();

	// DEPRECATED METHODS -- DO NOT USE

	DEPRECATE("CanUseItem: First parameter no longer takes a double pointer. If you have a ItemClient* then just pass it in.\n"
		"  CanUseItem(&pItem, true) -> CanUseItem(pItem, true)")
	inline bool CanUseItem(ItemClient** pItem, bool bUseRequiredLvl, bool bOutput = true)
	{
		return CanUseItem(*pItem, bUseRequiredLvl, bOutput);
	}
};

using MailItemsHash = HashTable<MailItemData, EqItemGuid, ResizePolicyNoShrink>;
using AchievementTable = HashTable<CompletedAchievementData, int, ResizePolicyNoShrink>;
using AchievementSubComponentCountTable = HashTable<AchievementSubComponentCountData, int, ResizePolicyNoShrink>;

class [[offsetcomments]] PcBase : virtual public CharacterBase
{
public:
/*0x0008*/ // void*    vfTable_CharacterZoneClient;
/*0x0008*/ // void*    vfTable_CharacterBase;
/*0x000C*/ // void*    vfTable_PcBase;
// last one changed
/*0x000C*/ virtual void vftableph() {};

/*0x0010*/ int                                   RecentTasks[10];
/*0x0038*/ PCTaskStatus                          Tasks[1];
/*0x00a8*/ PCTaskStatus                          Quests[29];
/*0x0d58*/ uint8_t                               BitFlags[6400 / 8];
/*0x1078*/ BenefitSelection                      ActiveTributeBenefits[5];
/*0x10a0*/ BenefitSelection                      ActiveTrophyTributeBenefits[10];
/*0x10f0*/ uint8_t                               BitFlags2[6400 / 8];
/*0x1410*/ ItemContainer                         BankItems;
/*0x142c*/ ItemContainer                         SharedBankItems;
/*0x1448*/ ItemContainer                         OverflowBufferItems;
/*0x1464*/ ItemContainer                         LimboBufferItems;
/*0x1480*/ ItemContainer                         MercenaryItems;
/*0x149c*/ ItemContainer                         MountKeyRingItems;
/*0x14b8*/ ItemContainer                         IllusionKeyRingItems;
/*0x14d4*/ ItemContainer                         FamiliarKeyRingItems;
/*0x14f0*/ ItemContainer                         HeroForgeKeyRingItems;
/*0x150c*/ ItemContainer                         DragonHoardItems;
/*0x1528*/ ItemContainer                         AltStorageItems;
/*0x1544*/ ItemContainer                         ArchivedDeletedItems;
/*0x1560*/ ItemContainer                         MailItems;
/*0x157c*/ MailItemsHash                         MailItemsData;
/*0x158c*/ __time32_t                            RecentMoves[1];
/*0x1590*/ HashTable<DynamicZoneData>            CurrentDynamicZones;
/*0x15a0*/ HashTable<int>                        LearnedRecipes;
/*0x15b0*/ EQList<TradeskillRecipeCount*>        QualifyingRecipeCounts;
/*0x15c0*/ HashTable<int>                        NonrepeatableQuests;
/*0x15d0*/ HashTable<int>                        CompletedTasks;
/*0x15e0*/ HashTable<int>                        CompletedTasks2;
/*0x15f0*/ __time32_t                            AlchemyTimestamp;
/*0x15f4*/ bool                                  bWhat;
/*0x15f5*/ bool                                  bSomethingHome;
/*0x15f8*/ uint32_t                              LoginTime;
/*0x1600*/ EqGuid                                GuildID;
/*0x1608*/ EqGuid                                FellowshipID;
/*0x1610*/ SFellowship*                          pFellowship;
/*0x1614*/ bool                                  GuildShowSprite;
/*0x1618*/ __time32_t                            CreationTime;
/*0x161c*/ __time32_t                            AccountCreationTime;
/*0x1620*/ __time32_t                            LastPlayedTime;
/*0x1624*/ uint32_t                              MinutesPlayed;
/*0x1628*/ uint8_t                               Anonymous;
/*0x1629*/ bool                                  bGM;
/*0x162a*/ bool                                  bGMStealth;
/*0x162c*/ uint32_t                              AAExp;
/*0x1630*/ uint8_t                               PercentEXPtoAA;
/*0x1634*/ int                                   AirSupply;
/*0x1638*/ uint32_t                              SerialNum;
/*0x163c*/ bool                                  bNewCharacter;
/*0x1640*/ int                                   TasksAssigned;
/*0x1644*/ int                                   TasksCompleted;
/*0x1648*/ long                                  TaskRequestTimer;
/*0x164c*/ uint32_t                              UniquePlayerID;
/*0x1650*/ WorldLocation                         DynamicZoneSafeReturnLocation;
/*0x1664*/ DynamicZoneTimerData*                 pDZTimerRoot;
/*0x1668*/ int                                   BenefitTimer;
/*0x166c*/ int                                   TrophyBenefitTimer;
/*0x1670*/ int64_t                               CareerFavor;
/*0x1678*/ int64_t                               CurrFavor;
/*0x1680*/ bool                                  bBenefitsActive;
/*0x1681*/ bool                                  bTrophyBenefitsActive;
/*0x1682*/ bool                                  bHasResetStartingCity;
/*0x1683*/ bool                                  bIsHeadStartCharacter;
/*0x1684*/ int                                   PvPKills;
/*0x1688*/ int                                   PvPDeaths;
/*0x168c*/ int                                   PvPCurrentPoints;
/*0x1690*/ int                                   PvPTotalPointsEarned;
/*0x1694*/ int                                   PvPKillStreak;
/*0x1698*/ int                                   PvPDeathStreak;
/*0x169c*/ int                                   PvPCurrentStreak;
/*0x16a0*/ PvPKill                               LastKill;
/*0x1700*/ PvPDeath                              LastDeath;
/*0x1758*/ HashTable<PvPKill24HourData>          PvPLast24HoursKillHash;
/*0x1768*/ int                                   PvPInfamyLevel;
/*0x176c*/ int                                   PvPVitality;
/*0x1770*/ uint32_t                              PvPLastInfamyTime;
/*0x1774*/ int                                   LastLastNameChange;
/*0x1778*/ int                                   LastNameChangePriv;
/*0x177c*/ uint32_t                              PvPLastVitalityTime;
/*0x1780*/ bool                                  bKeepItemsOnDeath;
/*0x1781*/ bool                                  bResetSpecializationSkills;
/*0x1784*/ int                                   GoodPointsAvailable;         // a.k.a. RadiantCrystals
/*0x1788*/ int                                   GoodTotalPointsEarned;
/*0x178c*/ int                                   EvilPointsAvailable;         // a.k.a. EbonCrystals
/*0x1790*/ int                                   EvilTotalPointsEarned;
/*0x1794*/ bool                                  bCanRequestNameChange;
/*0x1795*/ bool                                  bCanRequestNameChange2;
/*0x1796*/ bool                                  bCanRequestServerTransfer;
/*0x1797*/ bool                                  bIsCopied;
/*0x1798*/ __time32_t                            ServerTransferGrantTime;
/*0x179c*/ bool                                  bCanRequestRaceChange;
/*0x17a0*/ uint32_t                              LastAAResetTime;
/*0x17a4*/ uint32_t                              LastMercAAResetTime;
/*0x17a8*/ EQZoneIndex                           NewZoneID;
/*0x17ac*/ int                                   NewAreaID;
/*0x17b0*/ EAreaCorner                           eNewAreaCorner;
/*0x17b4*/ EQZoneIndex                           PreviousZoneID;
/*0x17b8*/ int                                   RealEstateZoneID;
/*0x17bc*/ char                                  ServerCreated[32];
/*0x17dc*/ PCAdventureData                       AdventureData;
/*0x18b4*/ PCSharedTaskData                      SharedTaskData;
/*0x1940*/ TaskTimerData*                        pTaskTimerData;
/*0x1944*/ PCQuestHistoryData                    QuestHistoryData;
/*0x1ba0*/ PCStatistics                          PcStatistics;
/*0x1cf0*/ GroupMemberStats                      GroupStats;
/*0x1e90*/ bool                                  bIsLfg;
/*0x1e94*/ int                                   RaidId;
/*0x1e98*/ int                                   GroupID;
/*0x1ea0*/ int64_t                               Exp;
/*0x1ea8*/ int                                   DaysEntitled;
/*0x1eac*/ bool                                  bAutoConsentGroup;
/*0x1ead*/ bool                                  bAutoConsentRaid;
/*0x1eae*/ bool                                  bAutoConsentGuild;
/*0x1eaf*/ bool                                  bPrivateForEqPlayers;
/*0x1eb0*/ long                                  AchievementFilesModificationTime;
/*0x1eb4*/ char                                  StationID[EQ_MAX_STATION_ID];
/*0x1ed8*/ EqGuid                                Guid;
/*0x1ee0*/ bool                                  bBetaBuffed;
/*0x1ee4*/ int                                   Unknown0x1ee4;
/*0x1ee8*/ int                                   StartingCity;
/*0x1eec*/ int                                   MainLevel;
/*0x1ef0*/ bool                                  bShowHelm;
/*0x1ef8*/ int64_t                               LastTestCopyTime;
/*0x1f00*/ CPlayerPointManager                   PointManager;
/*0x1f14*/ PointSystemBase                       PointSystem;
/*0x1f28*/ uint32_t                              LoyaltyVelocity;
/*0x1f2c*/ uint32_t                              LoyaltyTokens;
/*0x1f30*/ bool                                  bHasLoyaltyInfo;
/*0x1f34*/ ArrayClass<int>                       OwnedRealEstates;
/*0x1f44*/ ArrayClass<int>                       OwnedItemRealEstates;
/*0x1f54*/ ArrayClass<int>                       ArchivedRealEstates;
/*0x1f64*/ char                                  OverridePetName[EQ_MAX_NAME];
/*0x1fa4*/ bool                                  bCanRequestPetNameChange;
/*0x1fa5*/ char                                  OverrideFamiliarName[EQ_MAX_NAME];
/*0x1fe5*/ bool                                  bCanRequestFamiliarNameChange;
/*0x1fe8*/ CXStr                                 OverrideMercName[EQ_MAX_MERCENARIES];
/*0x2014*/ bool                                  bCanRequestMercNameChange;
/*0x2018*/ PendingRewardList                     PendingRewards;
/*0x2044*/ uint32_t                              DowntimeReductionTime;
/*0x2048*/ uint32_t                              DowntimeTimerStart;
/*0x204c*/ float                                 ActivityValue;
/*0x2050*/ uint32_t                              NextItemId;
/*0x2054*/ CXStr                                 SharedBank;
/*0x2058*/ CXStr                                 BankBuffer;
/*0x205c*/ CXStr                                 LimboBuffer;
/*0x2060*/ CXStr                                 MercenaryBuffer;
/*0x2064*/ CXStr                                 KeyRingBuffer[eKeyRingTypeCount];
/*0x2074*/ CXStr                                 AltStorageBuffer;
/*0x2078*/ CXStr                                 OverflowBuffer;
/*0x207c*/ CXStr                                 DragonHoardBuffer;
/*0x2080*/ CXStr                                 UnknownString0x2080;
/*0x2084*/ int                                   Unknown0x2084;
/*0x2088*/ uint32_t                              AltStorageTimestamp;
/*0x208c*/ ELockoutCharacterReason               LockoutCharacterReason;
/*0x2090*/ HashTable<ProgressionExperience>      ProgressionExp;
/*0x20a0*/ CXStr                                 ArchivedStorageBuffer;
/*0x20a4*/ CXStr                                 MailItemsBuffer;
/*0x20a8*/ CXStr                                 MailItemsDataBuffer;
/*0x20ac*/ int                                   MailItemsOverCapWarningCount;
/*0x20b0*/ ItemIndex                             StatKeyRingItemIndex[eKeyRingTypeCount];
/*0x20c8*/ bool                                  UseAdvancedLooting;
/*0x20c9*/ bool                                  MasterLootCandidate;
/*0x20ca*/ bool                                  bIsCorrupted;
/*0x20cc*/ char*                                 pCorruptionReport;
/*0x20d0*/ char                                  InspectText[256];
/*0x21d0*/ HashTable<int>                        BlockedSpellsHash;
/*0x21e0*/ int                                   BlockedSpell[MAX_BLOCKED_SPELLS];
/*0x2280*/ HashTable<int>                        BlockedPetSpellsHash;
/*0x2290*/ int                                   BlockedPetSpell[MAX_BLOCKED_SPELLS_PET];
/*0x2330*/ ClaimDataCollection                   ConsumableFeatures;
/*0x2340*/ bool                                  bGrantItemsRegistered;
/*0x2348*/ uint64_t                              CreatedGuildID;
/*0x2350*/ __time32_t                            GuildCreateTime;
/*0x2354*/ CXStr                                 GuildCreateCharacter;
/*0x2358*/ bool                                  bInventoryUnserialized;
/*0x2359*/ bool                                  bAltStorageUnserialized;
/*0x235a*/ bool                                  bArchivedStorageUnserialized;
/*0x235b*/ bool                                  bMailUnserialized;
/*0x235c*/ bool                                  bPendingInventorySerialization;
/*0x2360*/ CXStr                                 BuyLines;
/*0x2364*/ ArrayClass<CXStr>                     OfflineTraderSoldItems;
/*0x2374*/ ArrayClass<CXStr>                     OfflineBuyerBoughtItems;
/*0x2384*/ uint32_t                              Krono;
/*0x2388*/ uint32_t                              CursorKrono;
/*0x2390*/ int64_t                               MercAAExp;                    // divide this with 3.30f and you get the percent
/*0x2398*/ int                                   MercAAPoints;                 // number of unspent merc AA points
/*0x239c*/ int                                   MercAAPointsSpent;            // number of spent merc AA points
/*0x23a0*/ ArrayClass<MercenaryAbilityInfo*>     MercenaryAbilities;
/*0x23b0*/ AchievementTable                      CompletedAchievements;
/*0x23c0*/ AchievementSubComponentCountTable     CompletedEventBasedSubComponents;
/*0x23d0*/ AchievementSubComponentCountTable     OpenEventBasedSubComponents;
/*0x23e0*/ int                                   LastFellowshipJoin;
/*0x23e8*/ int64_t                               Vitality;
/*0x23f0*/ int64_t                               AAVitality;
/*0x23f8*/ int                                   FreeToPlayUnlocks[30];
/*0x2470*/ // end PcBase / start CharacterZoneClient

	PcProfile* GetCurrentPcProfile() { return (PcProfile*)&GetCurrentBaseProfile(); }
	PcProfile* GetCurrentPcProfile() const { return (PcProfile*)&GetCurrentBaseProfile(); }

	EQLIB_OBJECT ItemContainer& GetKeyRingItems(KeyRingType type);
	inline ItemPtr GetKeyRingItem(KeyRingType type, int index) { GetKeyRingItems(type).GetItem(index); }
	inline ItemPtr GetKeyRingItem(KeyRingType type, const ItemIndex& index) { GetKeyRingItems(type).GetItem(index); }
	inline const ItemIndex& GetStatKeyRingItemIndex(KeyRingType type) const { return StatKeyRingItemIndex[type]; }

	// Stores information about purchased Mercenary Abilities
	EQLIB_OBJECT const MercenaryAbilityInfo* GetMercenaryAbilityInfo(int abilityId) const;

	int GetAirSupply() const { return AirSupply; }
	int GetLevel() const { return GetCurrentPcProfile()->Level; }

	ALT_MEMBER_GETTER(int, GoodPointsAvailable, RadiantCrystals);
	ALT_MEMBER_GETTER(int, EvilPointsAvailable, EbonCrystals);
	ALT_MEMBER_GETTER(__time32_t, CreationTime, CharCreationTime);
	ALT_MEMBER_GETTER(int, TrophyBenefitTimer, TributeTimer);
};

class DebugText
{
public:
	EQLIB_OBJECT virtual void SendDebugText(const char* text, int color);
};

class [[offsetcomments]] PcZoneClient : public PcBase, public CharacterZoneClient, public DebugText
{
public:
/*0x2838*/ uint32_t                              Flags[3];
/*0x2844*/ uint32_t                              TransfersReceived;
/*0x2848*/ int                                   LastLanguageSpoken;
/*0x284c*/ int                                   CurPowerSourceDrain;
/*0x2850*/ EQList<ALCHEMYBONUSSKILLDATA*>        AlchemyBaseSkillBonusList;
/*0x2860*/ uint32_t                              MomentumBalance;
/*0x2864*/ uint32_t                              LoyaltyRewardBalance;
/*0x2868*/

	// Verified
	EQLIB_OBJECT void DestroyHeldItemOrMoney();
	EQLIB_OBJECT bool DoCombatAbility(int spellID, bool allowLowerRank = true);
	EQLIB_OBJECT int GetPcSkillLimit(int, bool = true);
	EQLIB_OBJECT void RemovePetEffect(int);
	EQLIB_OBJECT bool HasAlternateAbility(int aaindex, int* pIndex = nullptr, bool bProfile = false, bool bMerc = false);
	EQLIB_OBJECT bool CanEquipItem(const ItemPtr& pItem, int slotid, bool bOutputDebug, bool bUseRequiredLevel = false);
	// If allSlots is false, only checks slots the user has perks for.
	EQLIB_OBJECT ItemPtr GetItemByID(int itemid, ItemIndex* itemindex = nullptr, bool allSlots = false);
	EQLIB_OBJECT ItemPtr GetItemByItemClass(int itemclass, ItemIndex* itemindex = nullptr);
	EQLIB_OBJECT void RemoveBuffEffect(int Index, int SpawnID);
	EQLIB_OBJECT void BandolierSwap(int index);
	EQLIB_OBJECT uint32_t GetLinkedSpellReuseTimer(int index);
	EQLIB_OBJECT uint32_t GetItemRecastTimer(const ItemPtr& item, ItemSpellTypes etype);

	// Unverified
	EQLIB_OBJECT bool HasCombatAbility(int);

	EQLIB_OBJECT int GetMaxAirSupply() const;
};

// @sizeof(PcClient) == 0x2BCC :: 2021-11-12 (live) @ 0x6246F2
constexpr size_t PcClient_size = 0x2BCC;

class [[offsetcomments]] PcClient : public PcZoneClient
{
	// has a vftable but we get it from PcZoneClient
public:
	EQLIB_OBJECT PcClient();

/*0x2868*/ ExtendedTargetList*                   pExtendedTargetList;          // cannot be null
/*0x286c*/ bool                                  InCombat;
/*0x2870*/ uint32_t                              Downtime;
/*0x2874*/ uint32_t                              DowntimeStart;
/*0x2878*/ bool                                  bOverrideAvatarProximity;
/*0x287c*/ CGroup*                               Group;
/*0x2880*/ bool                                  bIAmCreatingGroup;
/*0x2884*/ ItemArray                             ItemsPendingID;
/*0x2890*/ eParcelStatus                         ParcelStatus;
/*0x2894*/ int                                   SubscriptionDays;
/*0x2898*/ short                                 BaseKeyRingSlots[eKeyRingTypeCount];
/*0x28a0*/ bool                                  bPickZoneFewest;
/*0x28a4*/ int                                   Unknown0x28a4;                // used in CContainerWnd::HandleCombine
/*0x28a8*/

	ALT_MEMBER_GETTER(ExtendedTargetList*, pExtendedTargetList, pXTargetMgr);  // cannot be null
	ALT_MEMBER_GETTER(uint32_t, DowntimeStart, DowntimeStamp);
	ALT_MEMBER_GETTER(CGroup*, Group, pGroupInfo);

	// Verified
	EQLIB_OBJECT unsigned long GetConLevel(const PlayerClient*);
	EQLIB_OBJECT bool HasLoreItem(const ItemPtr&, bool, bool, bool, bool);

	virtual int GetGameFeature(int) const { return 0; }
	virtual int GetMembershipLevel() const { return 0; }

	// Unverified
	// TODO: Methods from EQ_PC: The ones we use need to be validated. Not all of them live in PcClient.
	EQLIB_OBJECT int CheckDupLoreItems();
	EQLIB_OBJECT int checkLang(int);
	EQLIB_OBJECT int CostToTrain(int, float, int);
	// GetAlternateAbilityId checked on May 1 2016 only reason why it looks like it takes 2 args(which it doesnt) is cause it pushes another which is meant for AltAdvManager__GetAAById_x see 43BBB7 in eqgame 21 apr 2016 live for an example.
	EQLIB_OBJECT int GetAlternateAbilityId(int);
	EQLIB_OBJECT int GetArmorType(int);
	EQLIB_OBJECT int GetCombatAbility(int);
	EQLIB_OBJECT PcZoneClient* GetPcZoneClient() const;
	EQLIB_OBJECT int HandleMoney(long);
	EQLIB_OBJECT int IsAGroupMember(char*);
	EQLIB_OBJECT int MaxAirSupply();
	EQLIB_OBJECT int numInParty();
	EQLIB_OBJECT unsigned char AtSkillLimit(int);
	EQLIB_OBJECT unsigned char RemoveMyAffect(int);
	EQLIB_OBJECT unsigned long GetArmorTint(int);
	EQLIB_OBJECT unsigned long GetBodyTint(int);
	EQLIB_OBJECT void CheckForGroupChanges();
	EQLIB_OBJECT void CheckForLanguageImprovement(unsigned char, unsigned char);
	EQLIB_OBJECT void CheckSkillImprove(int, float);
	EQLIB_OBJECT void ClearSharedVault();
	EQLIB_OBJECT void DetermineQuestExpGained(int);
	EQLIB_OBJECT void EmptyPossessionSlots();
	EQLIB_OBJECT void InitializeNewPCVariables(int);
	EQLIB_OBJECT void InitPlayerStart(unsigned int, unsigned char, int);
	EQLIB_OBJECT void PrepareForRepop(int);
	EQLIB_OBJECT void ProcessAirSupply();
	EQLIB_OBJECT void ProcessFatigue();
	EQLIB_OBJECT void RefitNewbieEQ();
	EQLIB_OBJECT void RefreshMe(int);
	EQLIB_OBJECT void SetAltAbilityIndex(int, int);
	EQLIB_OBJECT void SetArmorTint(int, unsigned long);
	EQLIB_OBJECT void SetArmorType(int, int);
	EQLIB_OBJECT void SetFatigue(int);
	EQLIB_OBJECT void UnpackMyNetPC(char*, int);
	EQLIB_OBJECT void AlertInventoryChanged();
	EQLIB_OBJECT unsigned long GetCombatAbilityTimer(int, int);
	EQLIB_OBJECT void GetItemContainedRealEstateIds(ArrayClass<ItemContainingRealEstate>& Out, bool bCurrentProfileOnly = false, bool bIncludeAltStorage = true, bool bIncludeArchived = true);
	EQLIB_OBJECT void GetNonArchivedOwnedRealEstates(ArrayClass<int>& output);

	//----------------------------------------------------------------------------
	// Deprecated properties

	DEPRECATE("pBankArraySize is deprecated. Use BankItems.GetSize() instead.")
	inline int get_pBankArraySize() const { return BankItems.GetSize(); }
	__declspec(property(get = get_pBankArraySize)) int pBankArraySize;

	DEPRECATE("pBankArraySpec is deprecated. Use BankItems.GetContainerType() instead.")
	inline int get_pBankArraySpec() const { return BankItems.GetContainerType(); }
	__declspec(property(get = get_pBankArraySpec)) int pBankArraySpec;

	DEPRECATE("pBankArray is deprecated. Adapt the code to use BankItems instead.")
#pragma warning(suppress: 4996)
	inline deprecated::BANKARRAY* get_pBankArray() { return reinterpret_cast<deprecated::BANKARRAY*>(BankItems.ContainedItems.pItems); }
	__declspec(property(get = get_pBankArray)) deprecated::BANKARRAY* pBankArray;

	DEPRECATE("NumBankSlots is deprecated. Use BankItems.GetSize() instead.")
	inline int get_NumBankSlots() const { return BankItems.GetSize(); }
	__declspec(property(get = get_NumBankSlots)) int NumBankSlots;

	DEPRECATE("pSharedBankArray is deprecated. Adapt the code to use BankItems instead.")
#pragma warning(suppress: 4996)
	inline deprecated::SHAREDBANKARRAY* get_pSharedBankArray() { return reinterpret_cast<deprecated::SHAREDBANKARRAY*>(SharedBankItems.ContainedItems.pItems); }
	__declspec(property(get = get_pSharedBankArray)) deprecated::SHAREDBANKARRAY* pSharedBankArray;

	DEPRECATE("NumSharedSlots is deprecated. Use SharedBankItems.GetSize() instead.")
	inline int get_NumSharedSlots() const { return SharedBankItems.GetSize(); }
	__declspec(property(get = get_NumSharedSlots)) int NumSharedSlots;

	// This is used a lot, so its provided here for convenience. If you need more than this,
	// use the Group object directly.
	CGroupMember* GetGroupMember(int groupMember)
	{
		if (!Group)
			return nullptr;

		return Group->GetGroupMember(groupMember);
	}
};

inline namespace deprecated {
	using EQ_PC DEPRECATE("Use PcClient instead of EQ_PC") = PcClient;
	using EQ_Character DEPRECATE("Use PcClient instead of EQ_Character") = PcClient;
	using EQ_Character1 DEPRECATE("Use PcClient instead of EQ_Character1") = PcClient;
}

// The in-memory layout of this class hierarchy looks like this:
// PcBase
// CharacterZoneClient
// PcZoneClient
// PcClient
// CharacterBase
SIZE_CHECK(PcClient, PcClient_size);

} // namespace eqlib
