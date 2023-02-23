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

constexpr int MAX_BLOCKED_SPELLS = 30;
constexpr int MAX_BLOCKED_SPELLS_PET = 30;

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
///*0x18*/ uint32_t              UniquePlayerID;
/*0x15*/ bool                  bRoleStates[MaxGroupRoles];
/*0x1c*/ uint32_t              CurrentRoleBits;                      // (Roles & 0x1) = MainTank, 0x2 = MainAssist, 0x4 = Puller 0x8 = Mark NPC 0x10 = Master Looter
/*0x20*/ eqtime_t              OnlineTimestamp;
/*0x24*/

	CGroupMemberBase();
	virtual ~CGroupMemberBase();
	virtual void* GetUnknownPtr() { return nullptr; }
	virtual void* GetUnknownPtr2() { return nullptr; }
	virtual void* GetUnknownPtr3() { return nullptr; }
	virtual CharacterZoneClient* GetCharacter() { return nullptr; }
	virtual CGroupMember* AsMemberClient() { return nullptr; }
	virtual void RemovedFromGroup(uint32_t id) = 0;

	inline bool IsOffline() const { return bIsOffline; }
	inline eqtime_t GetOnlineTimestamp() const { return OnlineTimestamp; }
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
/*0x24*/ CharacterZoneClient*  pCharacter;
/*0x28*/ PlayerClient*         pPlayer;
/*0x2c*/ int                   GroupIndex;
/*0x30*/

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
/*0x00*/ int                   AdventureLastAdventureDefinitionSeen[5];
/*0x14*/ eqtime_t              AdventureLastAdventureDefinitionSeenTime[5];
/*0x28*/ int                   AdventureActiveAdventureId;
/*0x2c*/ int                   AdventureActiveAdventureTheme;
/*0x30*/ int                   AdventureActiveAdventureRisk;
/*0x34*/ int                   AdventureSafeReturnZoneId;
/*0x38*/ float                 AdventureSafeReturnX;
/*0x3c*/ float                 AdventureSafeReturnY;
/*0x40*/ float                 AdventureSafeReturnZ;
/*0x44*/ int                   AdventureStatAccepted;
/*0x48*/ int                   AdventureStatRejected;
/*0x4c*/ int                   AdventureStatEntered;
/*0x50*/ int                   AdventureStatFailedEnter;
/*0x54*/ int                   AdventurePointsAvailable;
/*0x58*/ int                   AdventurePointsAvailableMax;
/*0x5c*/ eqtime_t              AdventureLastSuccessTime;
/*0x60*/ PCAdventureThemeStats ThemeStats[6];
/*0xd8*/
};

struct [[offsetcomments]] PCTaskStatus
{
/*0x00*/ int  TaskID;
/*0x04*/ int  MovingStartTime;
/*0x08*/ int  InitialStartTime;
/*0x0c*/ bool ElementActive[0x14];
/*0x20*/ int  CurrentCounts[0x14];
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
/*0x00*/ int          ActiveSharedTaskID;
/*0x04*/ bool         bIsMonsterMission;
/*0x08*/ PCTaskStatus Status;                              // size 0x70
/*0x78*/ ArrayClass<MonsterMissionTemplate> Templates;  // size is 0x10
/*0x88*/ float        RewardAdjustment;
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
/*0x08*/ eqtime_t   TimeCompleted;
/*0x0c*/
};

struct [[offsetcomments]] PCQuestHistoryData
{
/*0x000*/ PCCompletedQuest Quests[50];
/*0x258*/
};

struct [[offsetcomments]] PvPKill
{
/*0x00*/ char     VictimName[EQ_MAX_NAME];
/*0x40*/ int      VictimLevel;
/*0x44*/ int      VictimRace;
/*0x48*/ int      VictimClass;
/*0x4c*/ int      ZoneID;
/*0x50*/ int      Lastkilltime;
/*0x54*/ int      PointsEarned;
/*0x58*/
};

struct [[offsetcomments]] PvPDeath
{
/*0x00*/ char     KillerName[EQ_MAX_NAME];
/*0x40*/ int      KillerLevel;
/*0x44*/ int      KillerRace;
/*0x48*/ int      KillerClass;
/*0x4c*/ int      ZoneID;
/*0x50*/ int      LastDeathTime;
/*0x54*/ int      PointsLost;
/*0x58*/
};

struct PvPKill24HourData : public PvPKill
{
	//nothing here?
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
/*0x00*/ uint32_t Value;
/*0x04*/
};

class [[offsetcomments]] StatElapsedTime
{
public:
/*0x00*/ eqtime_t StartTick;
/*0x04*/ uint32_t ElapsedTotal;
/*0x08*/ bool     bCurrentState;
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
/*0x090*/ eqtime_t        LastUpdateTime;
/*0x094*/ char            PlayerName[EQ_MAX_NAME];
/*0x0d4*/ char            PlayerStationID[EQ_MAX_STATION_ID];
/*0x0f4*/ int             PlayerLevel;
/*0x0f8*/ int             PlayerRace;
/*0x0fc*/ int             PlayerClass;
/*0x100*/ uint32_t        UniquePlayerID;
/*0x104*/
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
/*0x058*/ int          PlayerGuild;
/*0x05c*/ int          BuffIDs[NUM_LONG_BUFFS];
/*0x104*/ StatCounter  Statistics[S_LastStat];
/*0x150*/
};

class [[offsetcomments]] MercenaryAbilityInfo
{
public:
/*0x00*/ int Index;
/*0x04*/ int Cost;
/*0x08*/
};

class [[offsetcomments]] LeadershipAbilities {
public:
/*0x00*/ int     MarkNPC;
/*0x04*/ int     NPCHealth;
/*0x08*/ int     Unknown0x8;
/*0x0c*/ int     DelegateMA;
/*0x10*/ int     DelegateMarkNPC;
/*0x14*/ int     Unknown0x14;
/*0x18*/ int     InspectBuffs;
/*0x1c*/ int     Unknown0x1C;
/*0x20*/ int     SpellAwareness;
/*0x24*/ int     OffenseEnhancement;
/*0x28*/ int     ManaEnhancement;
/*0x2c*/ int     HealthEnhancement;
/*0x30*/ int     HealthRegen;
/*0x34*/ int     FindPathPC;
/*0x38*/ int     HoTT;
/*0x3c*/ };

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
	GameFeature_AA = 0,
	GameFeature_Level = 1,
	GameFeature_CharacterSlot = 2,
	GameFeature_SpellRank = 3,
	GameFeature_InventorySlots = 4,
	GameFeature_Platinum = 5,
	GameFeature_Mail = 6,
	GameFeature_Parcel = 7,
	GameFeature_Loyalty = 8,
	GameFeature_Mercenary = 9,
	GameFeature_Housing = 10,
	GameFeature_SharedBank = 11,
	GameFeature_Quests = 12,
	GameFeature_CreateGuild = 13,
	GameFeature_Bazaar = 14,
	GameFeature_Barter = 15,
	GameFeature_Chat = 16,
	GameFeature_Petition = 17,
	GameFeature_Advertising = 18,
	GameFeature_UseItem = 19,
	GameFeature_StartingCity = 20,
	GameFeature_Ornament = 21,
	GameFeature_HeroicCharacter = 22,
	GameFeature_AutoGrantAA = 23,
#if IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TBM)
	GameFeature_MountKeyRingSlots = 24,
	GameFeature_IllusionKeyRingSlots = 25,
	GameFeature_FamiliarKeyRingSlots = 26,
	GameFeature_FamiliarAutoLeave = 27,
	GameFeature_HeroForgeKeyRingSlots = 28,
	GameFeature_DragonHoardSlots = 29,
#endif
#if IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TOL)
	GameFeature_TeleportKeyRingSlots = 30,
#endif

	GameFeature_Max,
	GameFeature_Invalid = -1,

	eSpellRankFeature DEPRECATE("Use GameFeature_SpellRank instead of eSpellRankFeature") = GameFeature_SpellRank,
};

class IFreeToPlayInfo
{
public:
	virtual int GetGameFeature(GameFeatures feature) const = 0;
	virtual int GetMembershipLevel() const = 0;
};

enum eCharacterStatus : uint8_t {
	eCharStatusNormal = 0,
	eCharStatusStunned,
	eCharStatusFrozen,
	eCharStatusUnconcious,
	eCharStatusDead,
};

// .rdata:009D6D30 const PcClient::`vbtable'{for `CharacterZoneClient'} dd -4
// .rdata:009D6D30                                         ; DATA XREF: PcClient::PcClient(void)+3B↑o
// .rdata:009D6D34                 dd 420h

// .text:0057A2DB                 mov     dword ptr[esi + 2DCCh], offset const PcClient::`vbtable'{for `CharacterZoneClient'}

// this is the offset of CharacterZoneClient + virtual base table:
// CharacterZoneClient starts at 0x2DCC and we add 0x420 to give us 0x31EC

class [[offsetcomments(0x31ec)]] CharacterBase : public IFreeToPlayInfo
{
	// +0: vftable
public:
/*0x31f0*/ ProfileManager                        ProfileManager;
/*0x31f8*/ uint8_t                               languages[MAX_LANGUAGES];
/*0x3218*/ float                                 X;
/*0x321c*/ float                                 Y;
/*0x3220*/ float                                 Z;
/*0x3224*/ float                                 Heading;
/*0x3228*/ char                                  Name[EQ_MAX_NAME];
/*0x3268*/ char                                  Lastname[EQ_MAX_LASTNAME];
/*0x3288*/ char                                  Title[32];
/*0x32a8*/ char                                  VehicleName[64];
/*0x32e8*/ eCharacterStatus                      Status;
/*0x32ec*/ EQZoneIndex                           currentZoneId;
/*0x32f0*/ uint8_t                               standstate;
/*0x32f4*/ uint32_t                              unknown0x32f4;
/*0x32f8*/ LeadershipAbilities                   ActiveAbilities;
/*0x3334*/ uint8_t                               unknown0x3334[0x314];
/*0x3648*/ int                                   ExpansionFlags;
/*0x364c*/ bool                                  bSuperPKILL;
/*0x364d*/ bool                                  bUnclone;
/*0x364e*/ bool                                  bDead;
/*0x3650*/ int                                   LD_Timer;
/*0x3654*/ int                                   SpellInterruptCount;
/*0x3658*/ bool                                  bAutoSplit;
/*0x3659*/ bool                                  bTellsOff;
/*0x365a*/ bool                                  bGmInvis;
/*0x365c*/ int                                   KillMe;
/*0x3660*/ bool                                  CheaterLdFlag;
/*0x3661*/ bool                                  NoRent;
/*0x3662*/ bool                                  Corpse;
/*0x3664*/ int                                   SouldMarkCount;
/*0x3668*/ bool                                  ClientGmFlagSet;
/*0x366c*/ int                                   BankSharedPlat;
/*0x3670*/ int                                   BankSharedGold;
/*0x3674*/ int                                   BankSharedSilver;
/*0x3678*/ int                                   BankSharedCopper;
/*0x367c*/ int                                   BankPlat;
/*0x3680*/ int                                   BankGold;
/*0x3684*/ int                                   BankSilver;
/*0x3688*/ int                                   BankCopper; // 49c
/*0x368c*/ int                                   STR;
/*0x3690*/ int                                   STA;
/*0x3694*/ int                                   CHA;
/*0x3698*/ int                                   DEX;
/*0x369c*/ int                                   INT;
/*0x36a0*/ int                                   AGI;
/*0x36a4*/ int                                   WIS;
///*0x3148*/ int                                   LCK;
/*0x36a8*/ int                                   SavePoison;
/*0x36ac*/ int                                   SaveMagic;
/*0x36b0*/ int                                   SaveDisease;
/*0x36b4*/ int                                   SaveCorruption;
/*0x36b8*/ int                                   SaveFire;
/*0x36bc*/ int                                   SaveCold;
///*0x3164*/ int                                   SavePhysical;
/*0x36c0*/ int                                   UncappedStr;
/*0x36c4*/ int                                   UncappedSta;
/*0x36c8*/ int                                   UncappedCha;
/*0x36cc*/ int                                   UncappedDex;
/*0x36d0*/ int                                   UncappedInt;
/*0x36d4*/ int                                   UncappedAgi;
/*0x36d8*/ int                                   UncappedWis;
/*0x36dc*/ int                                   UncappedResistPoison;
/*0x36e0*/ int                                   UncappedResistMagic;
/*0x36e4*/ int                                   UncappedResistDisease;
/*0x36e8*/ int                                   UncappedResistCorruption;
/*0x36ec*/ int                                   UncappedResistFire;
/*0x36f0*/ int                                   UncappedResistCold;
///*0x319c*/ int                                   UncappedResistPhysical;
/*0x36f4*/ int                                   NoBuffStr;
/*0x36f8*/ int                                   NoBuffSta;
/*0x36fc*/ int                                   NoBuffCha;
/*0x3700*/ int                                   NoBuffDex;
/*0x3704*/ int                                   NoBuffInt;
/*0x3708*/ int                                   NoBuffAgi;
/*0x370c*/ int                                   NoBuffWis;
/*0x3710*/ int                                   NoBuffResistPoison;
/*0x3714*/ int                                   NoBuffResistMagic;
/*0x3718*/ int                                   NoBuffResistDisease;
/*0x371c*/ int                                   NoBuffResistCorruption;
/*0x3720*/ int                                   NoBuffResistFire;
/*0x3724*/ int                                   NoBuffResistCold;
/*0x3728*/ ///*0x31d4*/ int                                   NoBuffResistPhysical;
/*0x3728*/ uint8_t                               Unknown0x31d8[0x20dc];
/*0x5804*/

	virtual void Copy(const CharacterBase& other) {}
	virtual ~CharacterBase() {}

	ALT_MEMBER_GETTER(int8_t, Status, Stunned);

	uint16_t get_instance() const { return currentZoneId >> 16; }
	__declspec(property(get = get_instance)) uint16_t instance;

	uint16_t get_zoneId() const { return currentZoneId & 0x7fff; }
	__declspec(property(get = get_zoneId)) uint16_t zoneId;

	// Verified
	EQLIB_OBJECT int IsExpansionFlag(int);
	EQLIB_OBJECT int GetMemorizedSpell(int index) { return GetCurrentBaseProfile().GetMemorizedSpell(index); }

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

	// Stats
	int GetStrength() const { return STR; }
	int GetStamina() const { return STA; }
	int GetCharisma() const { return CHA; }
	int GetDexterity() const { return DEX; }
	int GetIntelligence() const { return INT; }
	int GetAgility() const { return AGI; }
	int GetWisdom() const { return WIS; }
	int GetLuck() const { return 0; }

	EQ_Affect& GetEffect(int nBuffSlot) { return GetCurrentBaseProfile().GetEffect(nBuffSlot); }
	EQ_Affect& GetTempEffect(int nBuffSlot) { return GetCurrentBaseProfile().GetTempEffect(nBuffSlot); }

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
class [[offsetcomments(0x2dc8)]] CharacterZoneClient : virtual public CharacterBase
{
	virtual void vftableph() {};

	// +0x00: const PcClient::`vftable'{for `CharacterZoneClient'}
	// +0x08: const PcClient::`vbtable'{for `CharacterZoneClient'}

public:
/*0x2dd0*/ PlayerClient*                         me;
/*0x2dd4*/ bool                                  statDirtyFlag;
/*0x2dd5*/ bool                                  zoningStatProcessing;
/*0x2dd8*/ int                                   ArmorClassBonus;
/*0x2ddc*/ int                                   CurrWeight;
/*0x2de0*/ int                                   LastHitPointSendPercent;
/*0x2de4*/ int                                   LastManaPointSendPercent;
/*0x2de8*/ int                                   LastEndurancePointSendPercent;
/*0x2dec*/ int                                   HPBonus;
/*0x2df0*/ int                                   ManaBonus;
/*0x2df4*/ int                                   EnduranceBonus;
///*0x2820*/ int                                   EnduranceCostPerSecond;
/*0x2df8*/ int                                   CombatEffectsBonus;
/*0x2dfc*/ int                                   ShieldingBonus;
/*0x2e00*/ int                                   SpellShieldBonus;
/*0x2e04*/ int                                   AvoidanceBonus;
/*0x2e08*/ int                                   AccuracyBonus;
/*0x2e0c*/ int                                   StunResistBonus;
/*0x2e10*/ int                                   StrikeThroughBonus;
/*0x2e14*/ int                                   ItemSkillMinDamageMod[NUM_ITEM_SKILL_DMG_MOD];
/*0x2e38*/ int                                   SkillMinDamageModBonus[NUM_ITEM_SKILL_DMG_MOD];
/*0x2e5c*/ int                                   Unknown0x2e5c;
/*0x2e60*/ int                                   DoTShieldBonus;
/*0x2e64*/ int                                   DamageShieldMitigationBonus;
/*0x2e68*/ int                                   CombatEffectsBonus2;
/*0x2e6c*/ int                                   SpellShieldBonus2;
/*0x2e70*/ int                                   ShieldingBonus2;
/*0x2e74*/ int                                   DamageShieldBonus2;
/*0x2e78*/ int                                   DoTShieldBonus2;
/*0x2e7c*/ int                                   DamageShieldMitigationBonus2;
/*0x2e80*/ int                                   AvoidanceBonus2;
/*0x2e84*/ int                                   AccuracyBonus2;
/*0x2e88*/ int                                   StunResistBonus2;
/*0x2e8c*/ int                                   StrikeThroughBonus2;
/*0x2e90*/ int                                   HeroicSTRBonus; // 2e90
/*0x2e94*/ int                                   HeroicINTBonus;
/*0x2e98*/ int                                   HeroicWISBonus;
/*0x2e9c*/ int                                   HeroicAGIBonus;
/*0x2ea0*/ int                                   HeroicDEXBonus;
/*0x2ea4*/ int                                   HeroicSTABonus;
/*0x2ea8*/ int                                   HeroicCHABonus;
/*0x2eac*/ int                                   HeroicSvMagicBonus;
/*0x2eb0*/ int                                   HeroicSvFireBonus;
/*0x2eb4*/ int                                   HeroicSvColdBonus;
/*0x2eb8*/ int                                   HeroicSvDiseaseBonus;
/*0x2ebc*/ int                                   HeroicSvPoisonBonus;
/*0x2ec0*/ int                                   HeroicSvCorruptionBonus;
/*0x2ec4*/ int                                   HealAmountBonus;
/*0x2ec8*/ int                                   SpellDamageBonus;
/*0x2ecc*/ int                                   ItemHealAmountDotMod;
/*0x2ed0*/ int                                   ItemSpellDamageDotMod;
/*0x2ed4*/ int                                   ClairvoyanceBonus;
/*0x2ed8*/ int                                   AttackBonus;
/*0x2edc*/ int                                   HPRegenBonus;
/*0x2ee0*/ int                                   ManaRegenBonus;
/*0x2ee4*/ int                                   EnduranceRegenBonus;
/*0x2ee8*/ int                                   DamageShieldBonus;
/*0x2eec*/ int                                   AttackSpeed;
///*0x28d8*/ int                                   NoBuffItemHitpointAdjustment;
///*0x28dc*/ int                                   NoBuffItemManaAdjustment;
///*0x28e0*/ int                                   NoBuffItemEnduranceAdjustment;
///*0x28e4*/ int                                   NoBuffItemBaseChanceProc;
///*0x28e8*/ int                                   NoBuffItemMinDamageMod;
///*0x28ec*/ int                                   NoBuffItemInnateSpellRune;
///*0x28f0*/ int                                   NoBuffItemAvoidance;
///*0x28f4*/ int                                   NoBuffItemToHit;
///*0x28f8*/ int                                   NoBuffItemResistStunChance;
///*0x28fc*/ int                                   NoBuffItemDotShieldingEffect;
///*0x2900*/ int                                   NoBuffItemStrikeThroughChance;
///*0x2904*/ int                                   NoBuffItemAttack;
///*0x2908*/ int                                   NoBuffItemHitPointRegen;
///*0x290c*/ int                                   NoBuffItemManaRegen;
///*0x2910*/ int                                   NoBuffItemEnduranceRegen;
///*0x2914*/ int                                   NoBuffItemDamageShield;
///*0x2918*/ int                                   NoBuffItemDamageShieldMitigation;
///*0x291c*/ int                                   NoBuffItemHaste;
/*0x2ef0*/ int                                   NoBuffItemSkillMinDamageMod[NUM_ITEM_SKILL_DMG_MOD];
/*0x2f14*/ bool                                  bOutputHpRegen;
/*0x2f15*/ bool                                  bInvulnerable;
/*0x2f16*/ bool                                  bOnAVehicle;
/*0x2f18*/ SpellCache                            spellCache;
/*0x2f70*/ HashListSet<int, 128>                 DoomEffectsBySlot; // 0x10 + 4 * 128
/*0x3180*/ uint32_t                              LastHitEval; // 3188 +3c4
/*0x3184*/

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
	EQLIB_OBJECT int GetHPRegen(bool bIncItemsAndBuffs = true, bool* pOutIsBleeding = nullptr, bool bCombat = false);
	EQLIB_OBJECT int GetManaRegen(bool bIncItemsAndBuffs = true, bool bCombat = true);
	EQLIB_OBJECT int GetModCap(int index);
	inline int GetModCap(int index, bool bToggle) { UNUSED(bToggle); return GetModCap(index); }
	EQLIB_OBJECT EQ_Affect* GetPCSpellAffect(int affectId, int* slotnum, int* spaslot = nullptr) const;
	EQLIB_OBJECT int Max_Endurance(bool bCapAtMax = true);
	EQLIB_OBJECT int Max_HP(int SpawnType, bool bCapAtMax = true);
	EQLIB_OBJECT int Max_Mana(bool bCapAtMax = true);
	EQLIB_OBJECT int SpellDuration(EQ_Spell const*, uint8_t casterLevel, uint8_t item /* bool? */);
	EQLIB_OBJECT int TotalEffect(int spaID, bool bIncludeItems = true, int subindex = 0, bool bIncludeAA = true, bool bincludeBuffs = true) const;

	EQLIB_OBJECT void UseSkill(unsigned char skill, PlayerZoneClient* Target);
	void UseSkill(unsigned char skill, PlayerZoneClient* Target, bool bAuto) { UNUSED(bAuto); UseSkill(skill, Target); }

	EQLIB_OBJECT int GetFocusReuseMod(const EQ_Spell* pSpell, ItemPtr& pOutItem, bool evalOnly);
	EQLIB_OBJECT int GetFocusReuseMod(const EQ_Spell* pSpell, ItemPtr& pOutItem);


	EQLIB_OBJECT int GetFocusRangeModifier(const EQ_Spell* pSpell, ItemPtr& pItemOut);

	EQLIB_OBJECT void GetPctModAndMin(const EQ_Spell* pSpell, int spa, ItemPtr& pOutItem, int& outPctMod, int& outMin, bool wMins, bool evalOnly = false, bool all = false, CharacterZoneClient* caster = nullptr);

	// Unverified

	EQLIB_OBJECT int CalcAffectChange(const EQ_Spell* spell, BYTE casterLevel, BYTE affextIndex, const EQ_Affect* theAffect, int EffectIndex = 0, PlayerZoneClient* pCaster = NULL, bool overrideChangeVal = false, int ChangeVal = -1, bool bCap = true);
	EQLIB_OBJECT int CalcAffectChangeGeneric(const EQ_Spell* spell, BYTE casterLevel, BYTE affextIndex, const EQ_Affect* theAffect, int EffectIndex, bool bCap = true);
	EQLIB_OBJECT void MakeMeVisible(int, bool);
	EQLIB_OBJECT int GetItemCountWorn(int);
	EQLIB_OBJECT int GetItemCountInInventory(int, bool skipCheck = false);
	EQLIB_OBJECT int GetCursorItemCount(int);
	EQLIB_OBJECT bool HasSkill(int);
	EQLIB_OBJECT EQ_Affect* FindAffectSlot(int SpellID, PlayerClient* Caster, int* slindex, bool bJustTest,
		int CasterLevel = -1, EQ_Affect* BuffArray = nullptr, int BuffArraySize = 0, bool = true);
	EQLIB_OBJECT bool IsStackBlocked(const EQ_Spell* pSpell, PlayerClient* pCaster, EQ_Affect* pEffects = NULL, int EffectsSize = 0);
	inline bool IsStackBlocked(const EQ_Spell* pSpell, PlayerClient* pCaster, EQ_Affect* pEffects, int EffectsSize, bool bMessageOn) { UNUSED(bMessageOn); return IsStackBlocked(pSpell, pCaster, pEffects, EffectsSize, bMessageOn); }
	EQLIB_OBJECT int BardCastBard(const EQ_Spell* pSpell, signed int caster_class) const;
	EQLIB_OBJECT unsigned char GetMaxEffects() const;
	EQLIB_OBJECT int GetOpenEffectSlot(bool bIsShortBuff, bool bIsMeleeSkill, int Index = -1);
	EQLIB_OBJECT int GetFirstEffectSlot(bool bIsShortBuff, bool bIsMeleeSkill);
	EQLIB_OBJECT int GetLastEffectSlot(bool bIsShortBuff, bool bIsMeleeSkill, bool bIsDisplay = false);
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
	EQLIB_OBJECT void ModifyCurHP(int32_t modification, PlayerZoneClient* resposibleplayer, int skilltype);
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

	// Stat Bonuses
	int GetDamageShieldBonus() const { return 0; }

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
/*0x1410*/ uint8_t                               Unknown0x1410[0x990];
/*0x1da0*/ LeadershipAbilities                   MyLeadershipAbilities; // emu: MyAbilities
/*0x1ddc*/ uint8_t                               Unknown0x1ddc[0xc4];
/*0x1ea0*/ ItemContainer                         BankItems;
/*0x1ed8*/ ItemContainer                         SharedBankItems;
///*0x1ed8*/ ItemContainer                         OverflowBufferItems;
/*0x1f10*/ ItemContainer                         LimboBufferItems;
///*0x1f10*/ ItemContainer                         MercenaryItems;
///*0x1f2c*/ ItemContainer                         MountKeyRingItems;
///*0x1f48*/ ItemContainer                         IllusionKeyRingItems;
///*0x1f64*/ ItemContainer                         FamiliarKeyRingItems;
///*0x1f80*/ ItemContainer                         HeroForgeKeyRingItems;
///*0x1f9c*/ ItemContainer                         TeleportationKeyRingItems;
///*0x1fb8*/ ItemContainer                         DragonHoardItems;
/*0x1f48*/ ItemContainer                         AltStorageItems;
/*0x1f80*/ ItemContainer                         ArchivedDeletedItems;
/*0x1fb8*/ ItemContainer                         MailItems;
/*0x1ff0*/ MailItemsHash                         MailItemsData;
///*0x2038*/ eqtime_t                              RecentMoves[1];
/*0x2000*/ HashTable<DynamicZoneData>            CurrentDynamicZones;
/*0x2010*/ HashTable<int>                        LearnedRecipes;
///*0x205c*/ EQList<TradeskillRecipeCount*>        QualifyingRecipeCounts;
/*0x2020*/ HashTable<int>                        NonrepeatableQuests;
/*0x2030*/ HashTable<int>                        CompletedTasks;
///*0x208c*/ HashTable<int>                        CompletedTasks2;
/*0x2040*/ eqtime_t                              AlchemyTimestamp;
/*0x2044*/ bool                                  bGoHomeOverride;
/*0x2048*/ uint32_t                              LoginTime;
/*0x204c*/ uint32_t                              GuildID; // emu: live is EqGuid
/*0x2050*/ uint32_t                              FullSaveToPDS;
/*0x2054*/ uint32_t                              FellowshipID; // emu: live is EqGuid
/*0x2058*/ SFellowship*                          pFellowship;
/*0x205c*/ int                                   GuildStatus; // emu
/*0x2060*/ int                                   GuildFlags; // emu
/*0x2064*/ bool                                  GuildShowSprite;
/*0x2068*/ eqtime_t                              CreationTime;
/*0x206c*/ eqtime_t                              AccountCreationTime;
/*0x2070*/ eqtime_t                              LastPlayedTime;
/*0x2074*/ uint32_t                              MinutesPlayed;
/*0x2078*/ uint8_t                               Anonymous;
/*0x2079*/ bool                                  bGM;
/*0x207a*/ bool                                  bGMStealth;
/*0x207c*/ uint32_t                              AAExp;
/*0x2080*/ uint8_t                               NobilityRank; // emu
/*0x2081*/ uint8_t                               PercentEXPtoAA;
/*0x2084*/ int                                   AirSupply;
/*0x2088*/ uint32_t                              SerialNum;
/*0x208c*/ bool                                  bNewCharacter;
/*0x2090*/ int                                   TasksAssigned;
/*0x2094*/ int                                   TasksCompleted;
/*0x2098*/ int                                   TaskPoints;
/*0x209c*/ int                                   CareerTaskPoints;
/*0x20a0*/ int                                   TasksAbandoned;
/*0x20a4*/ long                                  TaskRequestTimer;
/*0x20a8*/ uint32_t                              UniquePlayerID;
/*0x20ac*/ WorldLocation                         DynamicZoneSafeReturnLocation;
/*0x20c0*/ DynamicZoneTimerData*                 pDZTimerRoot;
/*0x20c4*/ int                                   BenefitTimer;
/*0x20c8*/ int                                   TrophyBenefitTimer;
/*0x20d0*/ int64_t                               CareerFavor;
/*0x20d8*/ int64_t                               CurrFavor;
/*0x20e0*/ bool                                  bBenefitsActive;
/*0x20e1*/ bool                                  bTrophyBenefitsActive;
/*0x20e8*/ double                                GroupLeadershipExp; // emu
/*0x20f0*/ double                                RaidLeadershipExp; // emu
/*0x20f8*/ int                                   GroupLeadershipPoints; // emu
/*0x20fc*/ int                                   RaidLeadershipPoints; // emu
/*0x2100*/ bool                                  DoLeadershipExp;
/*0x2101*/ char                                  szGroupMentoringName[64];
/*0x2141*/ uint8_t                               Unknown0x2141[4];
/*0x2145*/ char                                  szMyMentor[64];
/*0x2185*/ uint8_t                               Unknown0x2185[7];
/*0x218c*/ int                                   GroupMentoringPercent;
/*0x2190*/ bool                                  bHasResetStartingCity;
/*0x2191*/ bool                                  bIsHeadStartCharacter;
/*0x2194*/ int                                   PvPKills;
/*0x2198*/ int                                   PvPDeaths;
/*0x219c*/ int                                   PvPCurrentPoints;
/*0x21a0*/ int                                   PvPTotalPointsEarned;
/*0x21a4*/ int                                   PvPKillStreak;
/*0x21a8*/ int                                   PvPDeathStreak;
/*0x21ac*/ int                                   PvPCurrentStreak;
/*0x21b0*/ PvPKill                               LastKill;
/*0x2208*/ PvPDeath                              LastDeath;
/*0x2260*/ HashTable<PvPKill24HourData>          PvPLast24HoursKillHash;
/*0x2270*/ int                                   PvPInfamyLevel;
/*0x2274*/ int                                   PvPVitality;
/*0x2278*/ eqtime_t                              PvPLastInfamyTime;
/*0x227c*/ eqtime_t                              LastLastNameChange;
/*0x2280*/ int                                   LastNameChangePriv;
/*0x2284*/ uint32_t                              PvPLastVitalityTime;
/*0x2288*/ bool                                  bKeepItemsOnDeath;
/*0x2289*/ bool                                  bResetSpecializationSkills;
/*0x228c*/ int                                   CharityPointsAvailable;
/*0x2290*/ int                                   CharityPointsEarned;
/*0x2294*/ int                                   GoodPointsAvailable;         // a.k.a. RadiantCrystals
/*0x2298*/ int                                   GoodTotalPointsEarned;
/*0x229c*/ int                                   EvilPointsAvailable;         // a.k.a. EbonCrystals
/*0x22a0*/ int                                   EvilTotalPointsEarned;
/*0x22a4*/ bool                                  bCanRequestNameChange;
/*0x22a5*/ bool                                  bCanRequestNameChange2;
/*0x22a6*/ bool                                  bCanRequestServerTransfer;
///*0x22a7*/ bool                                  bIsCopied;
/*0x22a8*/ eqtime_t                              ServerTransferGrantTime;
/*0x22ac*/ bool                                  bCanRequestRaceChange;
/*0x22b0*/ uint32_t                              LastAAResetTime;
///*0x22b4*/ uint32_t                              LastMercAAResetTime;
/*0x22b4*/ EQZoneIndex                           NewZoneID;
/*0x22b8*/ int                                   NewAreaID;
/*0x22bc*/ EAreaCorner                           eNewAreaCorner;
/*0x22c0*/ EQZoneIndex                           PreviousZoneID;
/*0x22c4*/ int                                   RealEstateZoneID;
/*0x22c8*/ char                                  ServerCreated[32];
/*0x22e8*/ PCAdventureData                       AdventureData;
/*0x23c0*/ PCSharedTaskData                      SharedTaskData;
/*0x244c*/ TaskTimerData*                        pTaskTimerData;
/*0x2450*/ PCQuestHistoryData                    QuestHistoryData;
/*0x26a8*/ PCStatistics                          PcStatistics;
/*0x27ac*/ GroupMemberStats                      GroupStats;
/*0x28fc*/ bool                                  bIsLfg;
/*0x2900*/ int                                   RaidId;
/*0x2904*/ int                                   GroupID;
/*0x2908*/ int64_t                               UniqueGuildID;
/*0x2910*/ int64_t                               Exp;
/*0x2918*/ int                                   DaysEntitled;
/*0x291c*/ int                                   VeteranRewardsConsumed;
/*0x2920*/ bool                                  bIsVeteranRewardEntitled;
/*0x2921*/ bool                                  bAutoConsentGroup;
/*0x2922*/ bool                                  bAutoConsentRaid;
/*0x2923*/ bool                                  bAutoConsentGuild;
/*0x2924*/ bool                                  bPrivateForEqPlayers;
/*0x2928*/ long                                  AchievementFilesModificationTime;
/*0x292c*/ char                                  StationID[EQ_MAX_STATION_ID];
/*0x2950*/ EqGuid                                Guid;
/*0x2958*/ bool                                  bBetaBuffed;
/*0x295c*/ int                                   StartingCity;
/*0x2960*/ int                                   MainLevel;
/*0x2964*/ bool                                  bShowHelm;
/*0x2968*/ int64_t                               LastForcedUpdate;
/*0x2970*/ int64_t                               LastTestCopyTime;
/*0x2978*/ CPlayerPointManager                   PointManager;
/*0x298c*/ PointSystemBase                       PointSystem;
/*0x29a0*/ uint32_t                              LoyaltyVelocity;
/*0x29a4*/ uint32_t                              LoyaltyTokens;
/*0x29a8*/ bool                                  bHasLoyaltyInfo;
/*0x29ac*/ ArrayClass<int>                       OwnedRealEstates;
/*0x29bc*/ ArrayClass<int>                       OwnedItemRealEstates;
/*0x29cc*/ ArrayClass<int>                       ArchivedRealEstates;
/*0x29dc*/ char                                  OverridePetName[EQ_MAX_NAME];
/*0x2a1c*/ bool                                  bCanRequestPetNameChange;
///*0x2a1d*/ char                                  OverrideFamiliarName[EQ_MAX_NAME];
///*0x2a5d*/ bool                                  bCanRequestFamiliarNameChange;
/*0x2a20*/ CXStr                                 OverrideMercName[EQ_MAX_MERCENARIES];
/*0x2a48*/ bool                                  bCanRequestMercNameChange;
/*0x2a4c*/ PendingRewardList                     PendingRewards;
/*0x2a78*/ uint32_t                              DowntimeReductionTime;
/*0x2a7c*/ eqtime_t                              DowntimeTimerStart;
/*0x2a80*/ float                                 ActivityValue;
/*0x2a84*/ uint32_t                              NextItemId;
/*0x2a88*/ CXStr                                 SharedBank;                      // SharedVaultInstanceData
/*0x2a8c*/ CXStr                                 BankBuffer;                      // BankInstanceData
/*0x2a90*/ CXStr                                 LimboBuffer;                     // LimboInstanceData
///*0x2b7c*/ CXStr                                 MercenaryBuffer;                 // MercenaryInstanceData
///*0x2ab8*/ CXStr                                 KeyRingBuffer[eKeyRingTypeCount];// MountKeyRingInstanceData
/*0x2a94*/ CXStr                                 AltStorageBuffer;                // AltStorageInstanceData
///*0x2ad0*/ CXStr                                 OverflowBuffer;                  // ItemOverflow
///*0x2ad4*/ CXStr                                 DragonHoardBuffer;               // DragonHoardInstanceData
/*0x2a98*/ uint32_t                              AltStorageTimestamp;             // AltStorageTimestamp
/*0x2a9c*/ ELockoutCharacterReason               LockoutCharacterReason;
/*0x2aa0*/ HashTable<ProgressionExperience>      ProgressionExp;
/*0x2ab0*/ CXStr                                 ArchivedStorageBuffer;           // ArchiveStorageInstanceData
/*0x2ab4*/ CXStr                                 MailItemsBuffer;
/*0x2ab8*/ CXStr                                 MailItemsDataBuffer;
/*0x2abc*/ int                                   MailItemsOverCapWarningCount;
///*0x2b08*/ ItemIndex                             StatKeyRingItemIndex[eKeyRingTypeCount];
///*0x2bac*/ bool                                  UseAdvancedLooting;
///*0x2bad*/ bool                                  MasterLootCandidate;
/*0x2ac0*/ bool                                  bIsCorrupted;
/*0x2ac4*/ char*                                 pCorruptionReport;
/*0x2ac8*/ char                                  InspectText[256];
/*0x2bc8*/ HashTable<int>                        BlockedSpellsHash;
/*0x2bd8*/ int                                   BlockedSpell[MAX_BLOCKED_SPELLS];
/*0x2c50*/ HashTable<int>                        BlockedPetSpellsHash;
/*0x2c60*/ int                                   BlockedPetSpell[MAX_BLOCKED_SPELLS_PET];
/*0x2cd8*/ ClaimDataCollection                   ConsumableFeatures;
/*0x2ce8*/ bool                                  bGrantItemsRegistered;
/*0x2cf0*/ uint64_t                              CreatedGuildID;
///*0x2cf8*/ eqtime_t                              GuildCreateTime;
///*0x2cfc*/ CXStr                                 GuildCreateCharacter;
/*0x2cf8*/ bool                                  bInventoryUnserialized;
/*0x2cf9*/ bool                                  bAltStorageUnserialized;
/*0x2cfa*/ bool                                  bArchivedStorageUnserialized;
/*0x2cfb*/ bool                                  bMailUnserialized;
/*0x2cfc*/ bool                                  bPendingInventorySerialization;
/*0x2d00*/ CXStr                                 BuyLines;
/*0x2d04*/ ArrayClass<CXStr>                     OfflineTraderSoldItems;
/*0x2d14*/ ArrayClass<CXStr>                     OfflineBuyerBoughtItems;
/*0x2d24*/ uint32_t                              Krono;
/*0x2d28*/ uint32_t                              CursorKrono;
///*0x2df0*/ int64_t                               MercAAExp;                    // divide this with 3.30f and you get the percent
///*0x2df8*/ int                                   MercAAPoints;                 // number of unspent merc AA points
///*0x2dfc*/ int                                   MercAAPointsSpent;            // number of spent merc AA points
///*0x2e00*/ ArrayClass<MercenaryAbilityInfo*>     MercenaryAbilities;
/*0x2d2c*/ AchievementTable                      CompletedAchievements;
/*0x2d3c*/ AchievementSubComponentCountTable     CompletedEventBasedSubComponents;
/*0x2d4c*/ AchievementSubComponentCountTable     OpenEventBasedSubComponents;
/*0x2d5c*/ int                                   LastFellowshipJoin;
/*0x2d60*/ int64_t                               Vitality;
/*0x2d68*/ int                                   AAVitality; // emu: 64->32
/*0x2d6c*/ int                                   FreeToPlayUnlocks[22];
/*0x2dc4*/ // end PcBase / start CharacterZoneClient

	PcProfile* GetCurrentPcProfile() { return (PcProfile*)&GetCurrentBaseProfile(); }
	PcProfile* GetCurrentPcProfile() const { return (PcProfile*)&GetCurrentBaseProfile(); }

	//EQLIB_OBJECT ItemContainer& GetKeyRingItems(KeyRingType type);
	//inline ItemPtr GetKeyRingItem(KeyRingType type, int index) { GetKeyRingItems(type).GetItem(index); }
	//inline ItemPtr GetKeyRingItem(KeyRingType type, const ItemIndex& index) { GetKeyRingItems(type).GetItem(index); }
	//inline const ItemIndex& GetStatKeyRingItemIndex(KeyRingType type) const { return StatKeyRingItemIndex[type]; }

	// Stores information about purchased Mercenary Abilities
	EQLIB_OBJECT const MercenaryAbilityInfo* GetMercenaryAbilityInfo(int abilityId) const { return nullptr; }
	float GetMercAAExpPct() const { return 0.0f; }
	int64_t GetMercAAExp() const { return 0; }
	int GetMercAAPoints() const { return 0; }
	int GetMercAAPointsSpent() const { return 0; }

	int GetAirSupply() const { return AirSupply; }
	int GetLevel() const { return GetCurrentPcProfile()->Level; }

	int GetTradeskillDepotCapacity() const { return 0; }
	bool GetTradeskillDepotPopulated() const { return false; }

	// Advanced Loot is not available
	bool get_UseAdvancedLooting() const { return false; }
	__declspec(property(get = get_UseAdvancedLooting)) bool UseAdvancedLooting;

	ALT_MEMBER_GETTER(int, GoodPointsAvailable, RadiantCrystals);
	ALT_MEMBER_GETTER(int, EvilPointsAvailable, EbonCrystals);
	ALT_MEMBER_GETTER(eqtime_t, CreationTime, CharCreationTime);
	ALT_MEMBER_GETTER(int, BenefitTimer, TributeTimer);
};

class DebugText
{
public:
	EQLIB_OBJECT virtual void SendDebugText(const char* text, int color);
};

class [[offsetcomments]] PcZoneClient : public PcBase, public CharacterZoneClient, public DebugText
{
/*0x285c*/ // vftable
public:
/*0x3188*/ uint32_t                              Flags[3]; // 3190
/*0x3194*/ uint32_t                              TransfersReceived;
/*0x3198*/ int                                   LastLanguageSpoken;
/*0x319c*/ int                                   CurPowerSourceDrain;
/*0x31a0*/ EQList<ALCHEMYBONUSSKILLDATA*>        AlchemyBaseSkillBonusList;
/*0x31b0*/ uint32_t                              MomentumBalance;
/*0x31b4*/ uint32_t                              LoyaltyRewardBalance; // 31b4
/*0x31b8*/

	// Verified
	EQLIB_OBJECT void DestroyHeldItemOrMoney();
	EQLIB_OBJECT bool DoCombatAbility(int spellID, bool allowLowerRank = true);
	EQLIB_OBJECT int GetPcSkillLimit(int, bool = true);
	EQLIB_OBJECT void RemovePetEffect(int);
	EQLIB_OBJECT bool HasAlternateAbility(int aaindex, int* pIndex = nullptr, bool bProfile = false);
	inline bool HasAlternateAbility(int aaindex, int* pIndex, bool bProfile, bool bMerc) { UNUSED(bMerc);  return HasAlternateAbility(aaindex, pIndex, bProfile); }
	EQLIB_OBJECT bool CanEquipItem(const ItemPtr& pItem, int slotid, bool bOutputDebug, bool bUseRequiredLevel = false);
	// If allSlots is false, only checks slots the user has perks for.
	EQLIB_OBJECT ItemPtr GetItemByID(int itemid, ItemIndex* itemindex = nullptr);
	inline ItemPtr GetItemByID(int itemid, ItemIndex* itemindex, bool allSlots) { UNUSED(allSlots);  return GetItemByID(itemid, itemindex); }
	EQLIB_OBJECT ItemPtr GetItemByItemClass(int itemclass, ItemIndex* itemindex = nullptr);
	EQLIB_OBJECT void RemoveBuffEffect(int Index, int SpawnID);
	EQLIB_OBJECT void BandolierSwap(int index);
	EQLIB_OBJECT uint32_t GetLinkedSpellReuseTimer(int index);

private:
	EQLIB_OBJECT uint32_t _GetItemRecastTimer(const ItemPtr& item);

public:
	uint32_t GetItemRecastTimer(const ItemPtr& item, ItemSpellTypes eType = ItemSpellType_Clicky)
	{
		UNUSED(eType);
		
		return _GetItemRecastTimer(item);
	}

	// Unverified
	EQLIB_OBJECT bool HasCombatAbility(int);

	EQLIB_OBJECT int GetMaxAirSupply() const;
};

// @sizeof(PcClient) == 0x5804 :: 2013-05-10 (emu) @ 0x53be57
constexpr size_t PcClient_size = 0x5804;

class [[offsetcomments]] PcClient : public PcZoneClient
{
	// has a vftable but we get it from PcZoneClient
public:
	EQLIB_OBJECT PcClient();

/*0x31b8*/ ExtendedTargetList*                   pExtendedTargetList;          // cannot be null // 31b8
/*0x31bc*/ bool                                  InCombat;
/*0x31c0*/ uint32_t                              Downtime;
/*0x31c4*/ uint32_t                              DowntimeStart;
/*0x31c8*/ bool                                  bOverrideAvatarProximity;
/*0x31cc*/ CGroup*                               Group;
/*0x31d0*/ bool                                  bIAmCreatingGroup;
/*0x31d4*/ ItemArray                             ItemsPendingID;
/*0x31e0*/ eParcelStatus                         ParcelStatus;
/*0x31e4*/ int                                   SubscriptionDays;
/*0x31e8*/
	ALT_MEMBER_GETTER(ExtendedTargetList*, pExtendedTargetList, pXTargetMgr);  // cannot be null
	ALT_MEMBER_GETTER(uint32_t, DowntimeStart, DowntimeStamp);
	ALT_MEMBER_GETTER(CGroup*, Group, pGroupInfo);

	// Verified
	EQLIB_OBJECT unsigned long GetConLevel(const PlayerClient*);
	EQLIB_OBJECT bool HasLoreItem(const ItemPtr&, bool, bool, bool, bool);

	virtual int GetGameFeature(GameFeatures) const override { return 0; }
	virtual int GetMembershipLevel() const override { return 0; }

	// Unverified
	// TODO: Methods from EQ_PC: The ones we use need to be validated. Not all of them live in PcClient.
	EQLIB_OBJECT int CheckDupLoreItems();
	EQLIB_OBJECT int checkLang(int);
	EQLIB_OBJECT int CostToTrain(int, float, int);
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
	EQLIB_OBJECT void GetItemContainedRealEstateIds(ArrayClass<ItemContainingRealEstate>& Out, bool bCurrentProfileOnly = false, bool bIncludeAltStorage = true, bool bIncludeArchived = true);
	EQLIB_OBJECT void GetNonArchivedOwnedRealEstates(ArrayClass<int>& output);
	EQLIB_OBJECT EQ_Spell* GetMeleeSpellFromSkillIndex(int skillIdx);

	// Emu Compatibility Helpers
private:
	EQLIB_OBJECT uint32_t _GetCombatAbilityTimer(int);

public:
	uint32_t GetCombatAbilityTimer(int index, int spellGroup = 0) const
	{
		UNUSED(spellGroup);

		if (index >= 0 && index < NUM_COMBAT_ABILITY_TIMERS)
			return GetCurrentPcProfile()->CombatAbilityTimers[index];

		return 0;
	}

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
