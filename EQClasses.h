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
#include "EverQuest.h"
#include "Items.h"
#include "KeyCombo.h"
#include "PcClient.h"
#include "PlayerClient.h"
#include "SerializeBuffer.h"
#include "Spells.h"
#include "UI.h"

#include <limits>

#undef FindWindow
#undef InsertMenuItem

namespace eqlib {

class CMemoryStream;
class CVector3;

struct TargetBuff
{
	int slot;
	int spellId;
	int duration;            // in ticks...
	int count;
	char casterName[64];
};
inline namespace deprecated {
	using PTargetBuff DEPRECATE("Use TargetBuff* Instead of PTargetBuff") = TargetBuff*;
}

struct AggroMeterListEntry
{
	void*    vfTable;
	uint16_t AggroPct;
};
using PAggroMeterListEntry = AggroMeterListEntry*;

constexpr int MAX_AGGRO_METER_SIZE = 30;

class [[offsetcomments]] AggroMeterManagerClient
{
public:
	static EQLIB_OBJECT AggroMeterManagerClient& Instance();

/*0x00*/ TSafeArrayStatic<AggroMeterListEntry, MAX_AGGRO_METER_SIZE> aggroData;
/*0xf0*/ DWORD AggroLockID;                     // this can be 0, I dont know what it is...
/*0xf4*/ DWORD AggroTargetID;                   // this is id of whoever we are fighting
/*0xf8*/ DWORD AggroSecondaryID;                // this is id of whoever the npc is fighting
/*0xfc*/
};


class AltAdvManager
{
public:
	EQLIB_OBJECT AltAdvManager();

	// IsAbilityReady was checked on apr 29 2016, it looks like it has 5 arguments in IDA, but it doesnt. (it has 4)
	EQLIB_OBJECT bool IsAbilityReady(PcZoneClient*, ALTABILITY*, int* Refresh/*out*/, int* Timer/*out*/ = nullptr);
	EQLIB_OBJECT int AbilitiesByClass(int, int);
	EQLIB_OBJECT int AltSkillReqs(PcZoneClient*, int);
	EQLIB_OBJECT int CalculateDoubleAttackChance(PcZoneClient*, int, unsigned char);
	EQLIB_OBJECT int CalculateFleetOfFoot(PcZoneClient*);
	EQLIB_OBJECT int CalculateHideTimeReduce(PcZoneClient*);
	EQLIB_OBJECT int CalculateInstrumentMasteryMod(PcZoneClient*);
	EQLIB_OBJECT int CalculateLoHHarmTouchReuseTimer(PcZoneClient*, int);
	EQLIB_OBJECT int CalculateMaxHPAA(PcZoneClient*, int);
	EQLIB_OBJECT int CalculateMaxStatAA(PcZoneClient*, int);
	EQLIB_OBJECT int CalculateMitigationBoost(PcZoneClient*, int);
	EQLIB_OBJECT int CalculateNimbleEvasionChance(PcZoneClient*);
	EQLIB_OBJECT int CalculateSingingMasteryMod(PcZoneClient*, int);
	EQLIB_OBJECT int CalculateSpellCastingMastery(PcZoneClient*);
	EQLIB_OBJECT int CalculateStalwartEnduranceChance(PcZoneClient*);
	EQLIB_OBJECT bool CanTrainAbility(PcZoneClient* pWho, CAltAbilityData* pAbility, bool = false, bool = false, bool = false);
	EQLIB_OBJECT bool CanSeeAbility(PcZoneClient*, CAltAbilityData*);
	EQLIB_OBJECT int GetAALevelNeeded(PcZoneClient*, int);
	EQLIB_OBJECT int GetAbilityTitle(PcZoneClient*);
	EQLIB_OBJECT int GetNextAbilityCost(int, int);
	EQLIB_OBJECT int MeetsPoPLevelReqs(PcZoneClient*, int, int);
	EQLIB_OBJECT int TotalPointsInSkill(int, int);
	EQLIB_OBJECT unsigned long GetCalculatedTimer(PcZoneClient*, ALTABILITY*);
	EQLIB_OBJECT void GetAbilityReqs(char*, int);
	EQLIB_OBJECT ALTABILITY* GetAAById(int index, int level = -1);
};

// actual size 0x80 20101012 - ieatacid
class [[offsetcomments]] EQGroundItem
{
public:
/*0x00*/ EQGroundItem* pPrev;
/*0x04*/ EQGroundItem* pNext;
/*0x08*/ ItemPtr       Item;
/*0x0c*/ DWORD         DropID;                   // unique id
/*0x10*/ DWORD         ZoneID;
/*0x14*/ DWORD         DropSubID;                // well zonefile id, but yeah...
/*0x18*/ EQSWITCH*     pSwitch;                  // CActorInterface
/*0x1c*/ char          Name[0x40];
/*0x5c*/ long          Expires;
/*0x60*/ float         Heading;
/*0x64*/ float         Pitch;
/*0x68*/ float         Roll;
/*0x6c*/ float         Scale;
/*0x70*/ float         Y;
/*0x74*/ float         X;
/*0x78*/ float         Z;
/*0x7c*/ int           Weight;                   // -1 means it can't be picked up
/*0x80*/

	DEPRECATE("Use Item instead of ID/pContents") inline ItemPtr get_ID() const { return Item; }
	DEPRECATE("Use Item instead of ID/pContents") inline void set_ID(ItemPtr ptr) { Item = ptr; }
	__declspec(property(get = get_ID, put = set_ID)) ItemPtr ID;
	__declspec(property(get = get_ID, put = set_ID)) ItemPtr pContents;
};
using GROUNDITEM = EQGroundItem;
using PGROUNDITEM = EQGroundItem*;

class EQGroundItemListManager
{
public:
	EQGroundItem*      Top;

	static EQLIB_OBJECT EQGroundItemListManager& Instance();
};

class [[offsetcomments]] CBroadcast
{
public:
	static EQLIB_OBJECT CBroadcast* Get();
	//EQLIB_OBJECT void BroadcastString(const CXStr cxStr, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime);
	//EQLIB_OBJECT void BroadcastString(const char* Str, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime);
	//EQLIB_OBJECT void EndBroadcast(UINT FadeOutTime);
	//EQLIB_OBJECT void Draw();

	EQLIB_OBJECT void DisplayText(const char* Str, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime);

/*0x00*/ CTextObjectInterface* TextObject;
/*0x04*/ bool               bBroadcastActive;
/*0x05*/ bool               bFadingOut;
/*0x06*/ bool               bFadingIn;
/*0x08*/ UINT               StartTime;
/*0x0c*/ UINT               FadeInTime;
/*0x10*/ UINT               EndTime;
/*0x14*/ UINT               FadeOutTime;
/*0x18*/ UINT               DisplayTime;
/*0x1c*/ int                BroadcastColor;
/*0x20*/ int                CurrentPriority;
/*0x24*/ int                MaxAlpha;
/*0x28*/
};
inline namespace deprecated {
	using CTextOverlay DEPRECATE("Use CBroadcast instead of CTextOverlay") = CBroadcast;
}

class ChatManagerClient
{
public:
	static EQLIB_OBJECT ChatManagerClient& Instance();
};

class CDistillerInfo
{
public:
	static EQLIB_OBJECT CDistillerInfo &Instance();
	EQLIB_OBJECT int GetIDFromRecordNum(int ID, bool bWhat);
};

struct [[offsetcomments]] TARGETRING
{
	FORCE_SYMBOLS;

/*0x00*/ DWORD         Gem;                      // the gem the spell below is memmed in... 0-11
/*0x04*/ PSPELL        thespell;
/*0x08*/ ItemGlobalIndex ItemLoc;
/*0x14*/ ItemSpellTypes SpellType;
/*0x18*/ float         SquaredRange;
/*0x1c*/ bool          bCursorVisible;
/*0x20*/
};
using PTARGETRING = TARGETRING*;

class JournalCategory;

class ConversationJournal
{
public:
	EQLIB_OBJECT ~ConversationJournal();
	EQLIB_OBJECT ConversationJournal();
	EQLIB_OBJECT JournalNPC* FindNPCByNameZone(char*, int);
	EQLIB_OBJECT JournalNPC* GetNPC(int);
	EQLIB_OBJECT int AddEntry(char*, int, long, float, float, float, char*, int);
	EQLIB_OBJECT int DeleteNPC(char*, int);
	EQLIB_OBJECT int Load(char*);
	EQLIB_OBJECT int Save(char*);
	EQLIB_OBJECT JournalCategory** GetCategoryList();
	EQLIB_OBJECT JournalCategory* AddCategory(char*, char*, int);
	EQLIB_OBJECT JournalCategory* AddCategory(int);
	EQLIB_OBJECT JournalCategory* GetCategory(char*);
	EQLIB_OBJECT JournalCategory* GetCategory(int);
	EQLIB_OBJECT void Clean();
	EQLIB_OBJECT void DeleteCategory(int);

	// protected
	EQLIB_OBJECT int FindFreeID();

	// private
	EQLIB_OBJECT JournalNPC* AddNPC(char*, int);
	EQLIB_OBJECT JournalNPC* ReadNPC(FILE*);
	EQLIB_OBJECT void AllocateCatArray();
	EQLIB_OBJECT void AllocateNPCArray();
	EQLIB_OBJECT void ReadCategory(FILE*);
};

struct RaidAddMember;
struct SCRaidMessage;
struct CreateRaidMessage;
struct RenameRaidMember;
struct RaidMember;

class CRaid
{
public:
	EQLIB_OBJECT bool IsInRaid();
	EQLIB_OBJECT bool IsInvited();
	EQLIB_OBJECT bool IsRaidGroupLeader();
	EQLIB_OBJECT bool IsRaidLeader();
	EQLIB_OBJECT bool IsRaidMember(char*);
	EQLIB_OBJECT int GetLootType();
	EQLIB_OBJECT int GetNumRaidMembers();
	EQLIB_OBJECT RaidMember* GetRaidMemberAt(int);
	EQLIB_OBJECT void AddRaidLooter();
	EQLIB_OBJECT void ClearInvitedState();
	EQLIB_OBJECT void CreateInviteRaid();
	EQLIB_OBJECT void HandleC2SRaidMessage(char*);
	EQLIB_OBJECT void HandleCreateInviteRaid(SCRaidMessage*);
	EQLIB_OBJECT void HandleS2CRaidMessage(char*);
	EQLIB_OBJECT void RemoveRaidLooter();
	EQLIB_OBJECT void RemoveRaidMember();
	EQLIB_OBJECT void ResetRaid();
	EQLIB_OBJECT void ResetWindow();
	EQLIB_OBJECT void SendInviteResponse(bool);
	EQLIB_OBJECT void SendLeadershipChange(char*);
	EQLIB_OBJECT void SendRaidChat(char*);
	EQLIB_OBJECT void SetLootType(char*);
	EQLIB_OBJECT void SetRaidLeader(char*);
	EQLIB_OBJECT void SetTargetRaidPlayer(char*);
	EQLIB_OBJECT void UpdateClassColor(int, unsigned long);
	EQLIB_OBJECT void UpdateOptionsWindow();

	// private
	EQLIB_OBJECT bool IsRaidLooter(char*);
	EQLIB_OBJECT int FindOpenIndex();
	EQLIB_OBJECT int FindPlayerIndex(char*);
	EQLIB_OBJECT int FindRaidGroupLeader(int);
	EQLIB_OBJECT void AddRaidMember(RaidAddMember*);
	EQLIB_OBJECT void ChangeLeadership(char*);
	EQLIB_OBJECT void DeleteRaidMember(SCRaidMessage*);
	EQLIB_OBJECT void DetermineRaidChanges(char*);
	EQLIB_OBJECT void HandleAddLooter(char*);
	EQLIB_OBJECT void HandlePositionChange(SCRaidMessage*);
	EQLIB_OBJECT void HandleRemoveLooter(char*);
	EQLIB_OBJECT void HandleSetLootType(int);
	EQLIB_OBJECT void InitializeRaid(char*);
	EQLIB_OBJECT void RaidCreated(CreateRaidMessage*);
	EQLIB_OBJECT void RaidGroupLeaderChange(SCRaidMessage*);
	EQLIB_OBJECT void RenameMember(RenameRaidMember*);
	EQLIB_OBJECT void SendRaidMsg(int, char*, char*, int);
	EQLIB_OBJECT void SetLootTypeResponse(SCRaidMessage*);
	EQLIB_OBJECT void UpdateLevelAverage();
};

struct ResolutionUpdateData
{
	int                Width;
	int                Height;
	int                BitsPerPixel;
	int                RefreshRate;
	bool               bFullscreen;

	void Set(int width, int height, int bitsPerPixel, int refreshRate, bool bfullscreen = false)
	{
		Width = width;
		Height = height;
		BitsPerPixel = bitsPerPixel;
		RefreshRate = refreshRate;
		bFullscreen = bfullscreen;
	}
};

struct SDeviceInfo
{
	char Name[0x80];
};

class CResolutionHandlerBase
{
public:
	EQLIB_OBJECT static bool IsFullscreenAvailable();
	EQLIB_OBJECT static int GetDesktopBitsPerPixel();
	EQLIB_OBJECT static int GetDesktopHeight();
	EQLIB_OBJECT static int GetDesktopRefreshRate();
	EQLIB_OBJECT static int GetDesktopWidth();
	EQLIB_OBJECT static int GetHeight();
	EQLIB_OBJECT static int GetWidth();
	EQLIB_OBJECT static int Init();
	EQLIB_OBJECT static void ChangeToResolution(int, int, int, int, int);
	EQLIB_OBJECT static void SaveSettings();
	EQLIB_OBJECT static void Shutdown();
	EQLIB_OBJECT static void ToggleScreenMode();
	EQLIB_OBJECT static void UpdateWindowPosition();

	DWORD              vfTable;
	bool               bIsFullscreen;
	int                FullscreenBitsPerPixel;
	int                FullscreenRefreshRate;
	int                FullscreenWidth;
	int                FullscreenHeight;
	int                WindowedWidth;
	int                WindowedHeight;
	int                WindowOffsetX;
	int                WindowOffsetY;
	int                RestoredWidth;
	int                RestoredHeight;
	int                RestoredOffsetX;
	int                RestoredOffsetY;
	SDeviceInfo        DeviceTable[0x10];
	int                DeviceCount;
	long               DeviceIndex;
	bool               bUseD3DTextureCompression;
	bool               bResizable;
	bool               bMaximized;
	bool               bAlwaysOnTop;
	bool               bActive;
	UINT               ActiveThreadID;
	HWND               ActiveWnd;
	bool               bChangingScreenResolutions;
};

class CResolutionHandler : public CResolutionHandlerBase
{
public:
	EQLIB_OBJECT void UpdateResolution(ResolutionUpdateData& data);
	EQLIB_OBJECT DWORD GetWindowedStyle() const;
};


class CTargetManager
{
public:
	EQLIB_OBJECT static CTargetManager* Get();
	EQLIB_OBJECT void Update();
};

class [[offsetcomments]] CTargetRing
{
public:
	EQLIB_OBJECT int Cast(const CVector3& pos);

/*0x00*/ DWORD         Gem;           // the gem the spell below is memmed in... 0-11
/*0x04*/ PSPELL        thespell;
/*0x08*/ ItemGlobalIndex ItemLoc;
/*0x14*/ ItemSpellTypes SpellType;
/*0x18*/ float         SquaredRange;
/*0x1c*/ bool          bCursorVisible;
/*0x20*/
};

enum TaskType
{
	cTaskTypeUnknown = -1,
	cTaskTypeNone = 0,
	cTaskTypeDeliver,
	cTaskTypeKill,
	cTaskTypeLoot,
	cTaskTypeHail,
	cTaskTypeExplore,
	cTaskTypeTradeskill,
	cTaskTypeFishing,
	cTaskTypeForaging,
	cTaskTypeCast,
	cTaskTypeUseSkill,
	cTaskTypeDZSwitch,
	cTaskTypeDestroyObject,
	cTaskTypeCollect,
	cTaskTypeDialogue,

	cTaskTypeCount,
};

enum TaskGroupType
{
	cTaskGroupTypeSolo,
	cTaskGroupTypeGroup,
	cTaskGroupTypeRaid,
};

enum TaskSystemType
{
	cTaskSystemTypeTask,
	cTaskSystemTypeSharedQuest,
	cTaskSystemTypeSoloQuest
};

struct [[offsetcomments]] CTaskElement
{
/*0x000*/ TaskType           Type;
/*0x004*/ char               TargetName[0x40];
/*0x044*/ char               ZoneID[0x40];
/*0x084*/ char               TargetZoneID[0x40];
/*0x0c4*/ int                RequiredCount;
/*0x0c8*/ bool               bOptional;
/*0x0cc*/ TaskGroupType      ElementGroup;
/*0x0d0*/ int                DZSwitchID;
/*0x0d4*/ char               ElementDescriptionOverride[0x80];
/*0x154*/ CXStr              ItemNameList;
/*0x158*/ CXStr              SkillIDList;
/*0x15c*/ CXStr              SpellIDList;
/*0x160*/ CXStr              TaskTitle;
/*0x164*/
};

const int MAX_TASK_ELEMENTS = 20;

struct [[offsetcomments]] CTaskEntry
{
/*0x0000*/ int               TaskID;
/*0x0004*/ float             RewardAdjustment;
/*0x0008*/ char              TaskTitle[0x40];
/*0x0048*/ int               DurationSeconds;
/*0x004c*/ char              StartText[0xFa0];
/*0x0fec*/ bool              bShowReward;
/*0x0ff0*/ int               RewardCash;
/*0x0ff4*/ int               RewardExp;
/*0x0ff8*/ int               RewardPoints;
/*0x0ffc*/ int               RewardFactionID;
/*0x1000*/ int               RewardFactionAmount;
/*0x1004*/ CXStr             RewardItemTag;
/*0x1008*/ CTaskElement      Elements[MAX_TASK_ELEMENTS];
/*0x2bd8*/ TaskSystemType    TaskSystem;
/*0x2bdc*/ int               PointType;
/*0x2be0*/ bool              StartTextCompiled;
/*0x2be1*/ char              RawStartText[0xFa0];
/*0x3b81*/ bool              bElementsReceived;
/*0x3b84*/ __time32_t        TimeCompleted;
/*0x3b88*/ ArrayClass<MonsterMissionTemplate> MonsterTemplates;
/*0x3b98*/ bool              bTemplateSelectionLocked;
/*0x3b99*/ bool              bHasRewardSet;
/*0x3b9c*/ int               Unknown1;
/*0x3ba0*/ int               Unknown2;
/*0x3ba4*/ int               Unknown3;
/*0x3ba8*/ int               Unknown4;
/*0x3bac*/
};

enum SharedTaskPlayerRole
{
	STPR_None,
	STPR_Leader
};

struct SharedTaskClientPlayerInfo
{
	char                               Name[0x40];
	int                                TemplateID;
	SharedTaskPlayerRole               m_role;
	SharedTaskClientPlayerInfo*        pNext;
};

constexpr int MAX_TASK_ENTRIES = 1;
constexpr int MAX_QUEST_ENTRIES = 29;
constexpr int MAX_UNKNOWN_ENTRIES = 12; // 29 + 12 = 41
constexpr int MAX_SHARED_TASK_ENTRIES = 1;
constexpr int MAX_QUEST_HISTORY_ENTRIES = 50;

class [[offsetcomments]] CTaskManager : public PopDialogHandler
{
public:
/*0x000004*/ CTaskEntry                TaskEntries[MAX_TASK_ENTRIES];
/*0x003bb0*/ CTaskEntry                QuestEntries[MAX_QUEST_ENTRIES];
/*0x06fe2c*/ CTaskEntry                SharedTaskEntries[MAX_SHARED_TASK_ENTRIES];
/*0x0739d8*/ CTaskEntry                UnkTaskEntries[MAX_UNKNOWN_ENTRIES];
/*0x0a05e8*/ CTaskEntry                QuestHistoryEntries[MAX_QUEST_HISTORY_ENTRIES];
/*0x15ad80*/ int                       AddPlayerID;
/*0x15ad84*/ bool                      bAddPlayerIsSwap;
/*0x15ad85*/ char                      AddPlayerSwapeeName[0x40];
/*0x15adc8*/ SharedTaskClientPlayerInfo* pFirstMember;
/*0x15adcc*/

	EQLIB_OBJECT CTaskManager(CXWnd*);

	// virtual
	EQLIB_OBJECT ~CTaskManager();
	EQLIB_OBJECT CTaskEntry* GetEntry(int Index, int System, bool bCheckEmpty = true);
	EQLIB_OBJECT PCTaskStatus* GetTaskStatus(PcClient* pMe, int Index, TaskSystemType System);
	EQLIB_OBJECT void GetElementDescription(const CTaskElement* pElement, char* Out);
};

class EmitterManager
{
public:
	EQLIB_OBJECT ~EmitterManager();
	EQLIB_OBJECT EmitterManager(SoundManager*);
	EQLIB_OBJECT float GetEffectsLevel();
	EQLIB_OBJECT float GetVolumeLevel();
	EQLIB_OBJECT void Add(SoundEmitter*);
	EQLIB_OBJECT void GetListenerLocation(float*, float*, float*, float*);
	EQLIB_OBJECT void GiveTime();
	EQLIB_OBJECT void Remove(SoundEmitter*);
	EQLIB_OBJECT void SetEffectsLevel(float);
	EQLIB_OBJECT void SetVolumeLevel(float);
};

class EQ_AltAbility
{
public:
	EQLIB_OBJECT EQ_AltAbility(int);
};

class CEQItemLocation;

class EQ_CharacterData
{
public:
	EQLIB_OBJECT void EQ_CharacterDataResetAllMembers();
};

class EQ_Container
{
public:
	EQLIB_OBJECT ~EQ_Container();
	EQLIB_OBJECT EQ_Container();
	EQLIB_OBJECT unsigned char Close();
	EQLIB_OBJECT unsigned char IsOpen();
	EQLIB_OBJECT unsigned char Open();
};

class EQ_Equipment
{
public:
	EQLIB_OBJECT EQ_Equipment();
	EQLIB_OBJECT int IsInstrument();
	EQLIB_OBJECT int IsWeapon();
	EQLIB_OBJECT void SendTextRequestMsg();
};

enum eAugFitRet
{
	AF_FITS,
	AF_RACE_MISMATCH,
	AF_CLASS_MISMATCH,
	AF_DEITY_MISMATCH,
	AF_LOC_MISMATCH,
	AF_SLOTFULL,
	AF_INVALIDSLOT,
	AF_AUG_MISMATCH,
	AF_SKIN_MISMATCH,
	AF_AUGCLASS,
	AF_ERR_DUPLICATE,
	AF_NOTRANSFER,
	AF_ITEMRANK_MISMATCH,
	AF_APPEARANCE_MISMATCH,
	AF_ERR_STACKABLE,
	AF_ERR_NOTANAUG,
	AF_ERR_NOEQUIPPEDLOC,
};

class EQ_LoadingS
{
public:
	EQLIB_OBJECT ~EQ_LoadingS();
	EQLIB_OBJECT EQ_LoadingS();
	EQLIB_OBJECT void draw();
	EQLIB_OBJECT void DrawBackground();
	EQLIB_OBJECT void SetProgressBar(int, const char*);
	EQLIB_OBJECT void WriteTextHD(char*, int, int, int);

	// virtual
	EQLIB_OBJECT void Activate();
	EQLIB_OBJECT void Deactivate();
	EQLIB_OBJECT void DefineImages();
};

class EQ_Note
{
public:
	EQLIB_OBJECT ~EQ_Note();
	EQLIB_OBJECT EQ_Note();
	EQLIB_OBJECT void SendTextRequestMsg();
};

class EQAnimation
{
public:
	EQLIB_OBJECT EQAnimation();
	EQLIB_OBJECT ~EQAnimation();
};

class EQEffect
{
public:
	static EQEffect* top;

	EQLIB_OBJECT ~EQEffect();
	EQLIB_OBJECT EQEffect(EQEffect*, char*, int, EQLOC*, PlayerZoneClient*, EQMissile*, EQRGB*, float, int, int, float, float);
};

class EqEmitterData
{
public:
	EQLIB_OBJECT EqEmitterData();
	EQLIB_OBJECT void SetLoadString(char*);
};

class EQItemList
{
public:
	static class EQItemList* top;

	EQLIB_OBJECT ~EQItemList();
	EQLIB_OBJECT EQItemList();
	EQLIB_OBJECT EQItemList* get_item(long);
	EQLIB_OBJECT EQItemList* is_item_actor(CActorInterface*);
};

class EQMissile
{
public:
	static EQMissile* top;

	EQLIB_OBJECT ~EQMissile();
	EQLIB_OBJECT EQMissile(EQ_Equipment*, PlayerZoneClient*, EQMissile*, char*, unsigned char, unsigned int);
	EQLIB_OBJECT EQMissile* is_missile_actor(CActorInterface*);
	EQLIB_OBJECT void CleanUpMyEffects();
	EQLIB_OBJECT void HitActor(CActorInterface*, bool);
	EQLIB_OBJECT void LeaveTrail();
	EQLIB_OBJECT void MissileAI();
	EQLIB_OBJECT void ProcessMissile();
};

class EqMobileEmitter
{
public:
	EQLIB_OBJECT ~EqMobileEmitter();
	EQLIB_OBJECT EqMobileEmitter(EqSoundManager*);
	EQLIB_OBJECT void Move(float, float, float);
	EQLIB_OBJECT void SetNpcHeight(float);
	EQLIB_OBJECT void SetWave(int, char*);
};

class EQMoneyList
{
public:
	EQLIB_OBJECT EQMoneyList();
	EQLIB_OBJECT ~EQMoneyList();
	EQLIB_OBJECT EQMoneyList* get_money(long);

	static EQMoneyList* top;
};

class EQObject
{
public:
	EQLIB_OBJECT EQObject(EQObject*, PlayerZoneClient*, char*, char*);
	EQLIB_OBJECT ~EQObject();

	static EQObject* top;
};

enum ePlacementType
{
	PLACEMENT_TYPE_FLOOR,
	PLACEMENT_TYPE_WALL,
	PLACEMENT_TYPE_CEILING,
};

class [[offsetcomments]] EQPlacedItem
{
public:
/*0x00*/ void*         vftable;
/*0x04*/ EQPlacedItem* pPrev;
/*0x08*/ EQPlacedItem* pNext;
/*0x0c*/ int           RecordNum;
/*0x10*/ EqItemGuid    ItemGuid;
/*0x24*/ int           RealEstateID;
/*0x28*/ int           RealEstateItemID;
/*0x2c*/ bool          bIsNPC;
/*0x30*/ unsigned int  PlacingItemNpcID;
/*0x34*/ CLightInterface* pLight;
/*0x38*/ CActorInterface* pActor;
/*0x3c*/ char          Name[0x40];
/*0x7c*/ int           Unknown0x7c;
/*0x80*/ int           Unknown0x80;
/*0x84*/ float         Scale;
/*0x88*/ float         Heading;
/*0x8c*/ float         Angle;
/*0x90*/ float         Roll;
/*0x94*/ float         Y;
/*0x98*/ float         X;
/*0x9c*/ float         Z;
/*0xa0*/ bool          bIgnoreCollisions;
/*0xa1*/ bool          bDisablePlacementRotation;
/*0xa2*/ bool          bDisableFreePlacement;
/*0xa4*/ ePlacementType PlacementType;
/*0xa8*/ float         ScaleRangeMin;
/*0xac*/ float         ScaleRangeMax;
/*0xb0*/ float         DefaultScale;
/*0xb4*/ float         DefaultHeading;
/*0xb8*/ float         DefaultAngle;
/*0xbc*/ float         DefaultRoll;
/*0xc0*/ int           LightType;
/*0xc4*/ float         NPCHeight;
/*0xc8*/
};

class EQPlacedItemManager
{
public:
	EQLIB_OBJECT static EQPlacedItemManager& Instance();
	EQLIB_OBJECT EQPlacedItem* GetItemByGuid(const EqItemGuid& ItemGuid);
	EQLIB_OBJECT EQPlacedItem* GetItemByRealEstateAndRealEstateItemIds(int RealEstateID, int RealEstateItemID);

	EQPlacedItem*      Top;
};

class [[offsetcomments]] RealEstateItemIds
{
public:
/*0x00*/ int                RealEstateID;
/*0x04*/ int                RealEstateItemID;
/*0x08*/
};

class [[offsetcomments]] RealEstateItemState
{
public:
/*0x00*/ bool               bPlaced;
/*0x04*/ __time32_t         UpkeepExpiredTime;
/*0x08*/
};

class [[offsetcomments]] RealEstateItemPosition
{
public:
/*0x00*/ float              Heading;
/*0x04*/ float              Pitch;
/*0x08*/ float              Roll;
/*0x0c*/ float              Scale;
/*0x10*/ float              X;
/*0x14*/ float              Y;
/*0x18*/ float              Z;
/*0x1c*/
};

class [[offsetcomments]] RealEstateItemOwnerInfo
{
public:
/*0x00*/ CXStr              OwnerName;
/*0x04*/ CXStr              OwnerHandle;
/*0x08*/ int                OwnerNameHashKey;
/*0x0c*/
};

class [[offsetcomments]] RealEstateItemObject
{
public:
/*0x00*/ ItemPtr pItemBase;
/*0x04*/
};

class [[offsetcomments]] RealEstateItem
{
public:
/*0x00*/ RealEstateItemState                State;
/*0x08*/ RealEstateItemPosition             Position;
/*0x24*/ RealEstateItemOwnerInfo            OwnerInfo;
/*0x30*/ RealEstateItemObject               Object;
/*0x34*/
};

class [[offsetcomments]] RealEstateItemClient : public RealEstateItem
{
public:
/*0x34*/ RealEstateItemIds IDs;
/*0x3c*/
};

enum eRealEstateType
{
	RET_None = 0,
	RET_Zone,
	RET_GuildHall,
	RET_PlayerHousing,
	RET_PlayerPlot,
	RET_Neighborhood,
	RET_Town,
	RET_MovingCrate,
	RET_GuildPlot,
	RET_Count,
	RET_Unknown,
	RET_Any
};

class [[offsetcomments]] RealEstateManagerClient
{
public:
/*0x00*/ void*         vftable;
/*0x04*/ BYTE          Stuff[0xb4];
/*0xb8*/ UINT          lastRefreshTime;
/*0xbc*/ int           ZoneRealEstateId;
/*0xc0*/ eRealEstateType ZoneRealEstateType;
/*0xc4*/ int           CurrentRealEstateID;
/*0xc8*/ int           CurrentYardID;
/*0xcc*/ int           CurrentHouseID;
/*0xd0*/ int           CurrentMovingCrateID;
/*0xd4*/ bool          bRequestPending;
/*0xd8*/ UINT          RequestTime;
/*0xdc*/ bool          bPrintRequestTimes;
/*0xe0*/

	EQLIB_OBJECT static RealEstateManagerClient& Instance();
	EQLIB_OBJECT const RealEstateItemClient* GetItemByRealEstateAndItemIds(int RealEstateID, int RealEstateItemID) const;
};

class [[offsetcomments]] FactionManagerClient
{
public:
/*0x00*/ void*         vftable;
/*0x04*/ // todo: map it

	EQLIB_OBJECT static FactionManagerClient& Instance();
	EQLIB_OBJECT void HandleFactionMessage(UINT MessageID, char* pData, unsigned int DataLength);
};

EQLIB_OBJECT char* build_token_string_PARAM(char* pBuffer, int token,
	const char* param0 = nullptr,
	const char* param1 = nullptr,
	const char* param2 = nullptr,
	const char* param3 = nullptr,
	const char* param4 = nullptr,
	const char* param5 = nullptr,
	const char* param6 = nullptr,
	const char* param7 = nullptr,
	const char* param8 = nullptr);


class EQPMInfo
{
public:
	EQLIB_OBJECT ~EQPMInfo();
	EQLIB_OBJECT EQPMInfo(char*);
	EQLIB_OBJECT void SetApplyGravity(bool);
};

enum SpeakerType
{
	SpeakerTypeNormal                  = 0, // AIL_3D_2_SPEAKER
	SpeakerTypeHeadphone               = 1, // AIL_3D_HEADPHONE
	SpeakerTypeSurround                = 2, // AIL_3D_SURROUND
	SpeakerTypeFour                    = 3, // AIL_3D_4_SPEAKER
	SpeakerTypeDolby51                 = 4, // AIL_3D_51_SPEAKER
	SpeakerTypeDolby71                 = 5, // AIL_3D_71_SPEAKER
};

class [[offsetcomments]] EqSoundManager
{
public:
	EQLIB_OBJECT ~EqSoundManager();
	EQLIB_OBJECT EqSoundManager(bool, bool, SpeakerType);
	EQLIB_OBJECT bool EmitterLoad(char*);
	EQLIB_OBJECT bool WaveIsPlaying(int);
	EQLIB_OBJECT SoundAsset* EqWaveGet(int);
	EQLIB_OBJECT EnvironmentType GetListenerEnvironment();
	EQLIB_OBJECT void EmitterAdd(EqEmitterData*);
	EQLIB_OBJECT void EmitterSetIndoors(bool);
	EQLIB_OBJECT void EmitterSetNight(bool);
	EQLIB_OBJECT void EmitterSetRaining(bool);
	EQLIB_OBJECT void EmitterSetUserDisabled(bool);
	EQLIB_OBJECT void EmitterSetWind(bool);
	EQLIB_OBJECT void GiveTime();
	EQLIB_OBJECT void SetCurrentZone(char*);
	EQLIB_OBJECT void SetEffectsLevel(float);
	EQLIB_OBJECT void SetListenerEnvironment(EnvironmentType);
	EQLIB_OBJECT void SetListenerEnvironmentHigh();
	EQLIB_OBJECT void SetListenerEnvironmentLow();
	EQLIB_OBJECT void SetListenerEnvironmentOutside();
	EQLIB_OBJECT void SetListenerLocation(float, float, float, float);
	EQLIB_OBJECT void SetMixAhead(int);
	EQLIB_OBJECT void SetMusicSelection(int, bool);
	EQLIB_OBJECT void SetMusicVolume(float);
	EQLIB_OBJECT void SetWaveVolume(float);
	EQLIB_OBJECT void WaveLoad(char*, int, bool);
	EQLIB_OBJECT void WavePlay(int, SoundControl*);
	EQLIB_OBJECT void WaveStop(int);

	// private
	EQLIB_OBJECT SoundAsset* GetAsset(char*);
	EQLIB_OBJECT SoundAsset* OldMp3GetSelection(int);
	EQLIB_OBJECT SoundEmitter* CreateOldEmitter(int, float, float, float, int, int, int, float, int, int, int);
	EQLIB_OBJECT int GetMusicId();
	EQLIB_OBJECT void LoadGlobalEmitters();
	EQLIB_OBJECT void LoadGlobalMusic();
	EQLIB_OBJECT void LoadGlobalWaves();
	EQLIB_OBJECT void LoadListOfWaveFiles(char**, int);
	EQLIB_OBJECT void LoadOldEmitters();
	EQLIB_OBJECT void OldMp3ClearSelections();
	EQLIB_OBJECT void OldMp3Init();
	EQLIB_OBJECT void OldMp3Terminate();
	EQLIB_OBJECT void PlayScriptMp3(char* Name, float Vol = 1.00f);
	EQLIB_OBJECT void ReleaseZoneSpecificEmitters();
	EQLIB_OBJECT void ReleaseZoneSpecificMidi();
	EQLIB_OBJECT void ReleaseZoneSpecificWaves();
	EQLIB_OBJECT void UpdateEmitterStates();

/*0x000*/ Mp3Manager*        pMp3Manager;
/*0x004*/ SoundManager*      pSoundManager;
/*0x008*/ EmitterManager*    pEmitterManager;
/*0x00c*/ MusicManager*      pMusicManager;
/*0x010*/ SoundAsset*        pGlobalMidiAsset;
/*0x014*/ SoundAsset*        pOpenerMidiAsset;
/*0x018*/ SoundAsset*        pOpenerMp3Asset;
/*0x01c*/ SoundAsset*        pDeathMp3Asset;
/*0x020*/ SoundAsset*        pCombatMp3Asset;
/*0x024*/ SoundAsset*        pMerchantMp3Asset;
/*0x028*/ SoundAsset*        pZoneMidiAsset;
/*0x02c*/ SoundAsset*        pScriptMp3Asset;
/*0x030*/ bool               bDisabled;
/*0x034*/ int                NextMusicID;
/*0x038*/ SoundEmitter*      pEmitters[1000];
/*0xfd8*/ int                EmittersCount;
/*0xfdc*/ SoundEmitter*      pRainEmitter;
/*0xfe0*/ SoundEmitter*      pWindEmitter;
/*0xfe4*/ int                EnvironmentHigh;
/*0xfe8*/ int                EnvironmentLow;
/*0xfec*/ int                EnvironmentOutside;
/*0xff0*/ float              fEffectsLevel;
/*0xff4*/ float              fWaveVolumeLevel;
/*0xff8*/ // more here but i only need volume for now so...
};

// Size is 0xe0 see 54933E in dec 13 2016 live - eqmule
// This is actually EQSwitch
class [[offsetcomments]] EQSwitch
{
public:
	//EQLIB_OBJECT EQSwitch(char*, bool);
	//EQLIB_OBJECT ~EQSwitch();

	EQLIB_OBJECT float GetCustomMoveDistance();
	EQLIB_OBJECT float TopSpeed(float*);
	EQLIB_OBJECT int GetSwitchDamage();
	EQLIB_OBJECT unsigned char SwitchIsNotUsable(int);
	EQLIB_OBJECT unsigned char SwitchWasOpened(int, int, PlayerClient*, bool*);
	EQLIB_OBJECT unsigned char SwitchWasOpenedActual(int, int, PlayerClient*, bool*);
	EQLIB_OBJECT unsigned int RepopFrequency();
	EQLIB_OBJECT void ChangeState(unsigned char, PlayerClient*, bool);
	EQLIB_OBJECT void LoadSwitchSounds(int);
	EQLIB_OBJECT void PostInit();
	EQLIB_OBJECT void PreInit();
	EQLIB_OBJECT void RepopSwitch();
	EQLIB_OBJECT void ResetSwitchState(unsigned char);
	EQLIB_OBJECT void UseSwitch(UINT SpawnID, int KeyID, int PickSkill, const CVector3* hitloc = 0);

/*0x00*/ void*         vtable;
/*0x04*/ BYTE          ObjType;                  // always 5
/*0x05*/ BYTE          ID;
/*0x06*/ char          Name[0x20];
/*0x26*/ BYTE          Type;
/*0x27*/ BYTE          State;                    // 0 = closed, 1 = open, 2 = opening, 3 = closing
/*0x28*/ float         DefaultY;
/*0x2c*/ float         DefaultX;
/*0x30*/ float         DefaultZ;
/*0x34*/ float         DefaultHeading;
/*0x38*/ float         DefaultDoorAngle;
/*0x3c*/ float         TopSpeed1;
/*0x40*/ float         TopSpeed2;
/*0x44*/ float         Y;
/*0x48*/ float         X;
/*0x4c*/ float         Z;
/*0x50*/ float         Heading;
/*0x54*/ float         DoorAngle;
/*0x58*/ BYTE          DefaultState;
/*0x59*/ BYTE          SelfActivated;
/*0x5a*/ BYTE          Dependent;
/*0x5b*/ bool          bTemplate;
/*0x5c*/ BYTE          Difficulty;               // pick/disarm...
/*0x5d*/ BYTE          AffectSlots[5];
/*0x62*/ BYTE          CurrentCombination[5];
/*0x67*/ BYTE          ReqCombination[5];
/*0x6c*/ BYTE          RandomCombo;
/*0x70*/ int           Key;
/*0x74*/ SHORT         ScaleFactor;              // divide by 100 to get scale multiplier
/*0x78*/ int           SpellID;
/*0x7c*/ BYTE          TargetID[0x5];
/*0x81*/ char          Script[0x20];
/*0xa4*/ PEQSWITCH     pSwitch;                  // (CActorInterface*)
/*0xa8*/ void*         particle;                 // (CParticleCloudInterface*)
/*0xac*/ DWORD         TimeStamp;                // last time UseSwitch
/*0xb0*/ float         Accel;
/*0xb4*/ BYTE          AlwaysActive;
/*0xb8*/ int           AdventureDoorID;
/*0xbc*/ float         ReturnY;
/*0xc0*/ float         ReturnX;
/*0xc4*/ float         ReturnZ;
/*0xc8*/ int           DynDoorID;
/*0xcc*/ bool          bHasScript;
/*0xd0*/ int           SomeID;
/*0xd4*/ bool          bUsable;
/*0xd5*/ bool          bRemainOpen;
/*0xd6*/ bool          bVisible;
/*0xd7*/ bool          bHeadingChanged;
/*0xd8*/ bool          bAllowCorpseDrag;
/*0xdc*/ int           RealEstateDoorID;
/*0xe0*/
};
using DOOR = EQSwitch;
using PDOOR = EQSwitch*;

struct SwitchGroupEntry;

// size: 0x840 @ 05-14-2021
class [[offsetcomments]] EqSwitchManager
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT EqSwitchManager();
	EQLIB_OBJECT ~EqSwitchManager();

	int GetCount() const { return NumEntries; }

	EQSwitch* GetSwitch(int index)
	{
		if (index >= 0 && index < NumEntries)
			return Switches[index];

		return nullptr;
	}

	EQSwitch* GetSwitchById(int id)
	{
		for (int i = 0; i < NumEntries; ++i)
		{
			if (Switches[i] && Switches[i]->ID == id)
				return Switches[i];
		}

		return nullptr;
	}

	EQSwitch* GetSwitchByActor(CActorInterface* pActor)
	{
		for (int i = 0; i < NumEntries; ++i)
		{
			if (Switches[i] && (CActorInterface*)Switches[i]->pSwitch == pActor)
				return Switches[i];
		}

		return nullptr;
	}

/*0x000*/ int          NumEntries;
/*0x004*/ EQSwitch*    Switches[512];
/*0x804*/
	inline EQSwitch** get_pDoor() { return Switches; }
	__declspec(property(get = get_pDoor)) EQSwitch** pDoor;
};
using DOORTABLE = EqSwitchManager;
using PDOORTABLE = EqSwitchManager*;

class EQUtil
{
public:
	EQLIB_OBJECT static char* FormatCharName(char*, char*, int);
};

extern char* szZoneExpansionName[];

constexpr int MAX_ZONES = 1000; // 0x3e8
constexpr int MAX_ZONE_SHORTNAME = 128;
constexpr int MAX_ZONE_LONGNAME = 256;

// Flags for EQZoneInfo
// 0x1 = MultiInstanceZone?
// 0x2 newbie zone
// 0x4 = ?
// 0x20 no bind
constexpr uint64_t EQZoneFlag_NoMount        = 0x00000200;
// 0x4000 = no air
// 0x8000 water/mountainzone?
// 0x100000 = HasMinLevel
// 0x400000 lostestingdisabled
// 0x800000 = gmzone?
// 0x1000000 = tutorialzone
// 0x2000000 = barterzone?
// 0x10000000 bazaarzone?
// 0x80000000 guildhallzone

// Size 0x1D8 see 867D39 in eqgame.exe live 21 apr 2016 - eqmule
class [[offsetcomments]] EQZoneInfo
{
	virtual ~EQZoneInfo();

public:
/*0x008*/ EQExpansion        EQExpansion;
/*0x00c*/ EQZoneIndex        Id;
/*0x010*/ char               ShortName[MAX_ZONE_SHORTNAME + 1];
/*0x091*/ char               LongName[MAX_ZONE_LONGNAME + 1];
/*0x198*/ uint64_t           ZoneFlags;
/*0x1a0*/ int                eqstrID;
/*0x1a4*/ uint8_t            AccessLevel;
/*0x1a8*/ int                MinLevel;
/*0x1ac*/ int                CurPlayerCount;
/*0x1b0*/ int                MaxPlayerCount;
/*0x1b4*/ uint16_t           NextInstanceID;
/*0x1b8*/ int                Cpu1;
/*0x1bc*/ int                Cpu2;
/*0x1c0*/ int                Memory;
/*0x1c4*/ int                MemLoad;
/*0x1c8*/ int                VirtMemLoad;
/*0x1cc*/ int                ActiveMercenaries;
/*0x1d0*/ int                SuspendedMercenaries;
/*0x1d4*/ int                Unknown0x1D4;
/*0x1d8*/
};

inline namespace deprecated {
	using ZONELIST DEPRECATE("Use EQZoneInfo instead of ZONELIST") = EQZoneInfo;
	using PZONELIST DEPRECATE("Use EQZoneInfo* instead of PZONELIST") = EQZoneInfo*;
}

// EQWorldData__EQWorldData_x
// Size 0xFC0 see 5721F1 in eqgame.exe live 21 apr 2016 - eqmule
class EQWorldData
{
public:
	EQWorldData();
	virtual ~EQWorldData();

	inline EQZoneInfo* GetZone(EQZoneIndex zoneId) const
	{
		zoneId = GetZoneBaseId(zoneId);

		if (zoneId >= 0 && zoneId < MAX_ZONES)
			return ZoneArray[zoneId];

		return nullptr;
	}

	// Dynamic zones share the lower 0x7fff bits with the base zone. This is also
	// called the geometry id but we'll just refer to it as the base zone id.
	static inline EQZoneIndex GetZoneBaseId(EQZoneIndex zoneId)
	{
		if (zoneId < MAX_ZONES)
			return zoneId;

		return zoneId & 0x7fff;
	}

	EQLIB_OBJECT bool IsFlagSet(EQZoneIndex, uint64_t flag) const;

	EQLIB_OBJECT bool GetGeometryNameFromIndex(EQZoneIndex, char*) const;
	EQLIB_OBJECT bool IsNewbieZone(EQZoneIndex) const;
	EQLIB_OBJECT bool IsNoAirZone(EQZoneIndex) const;
	EQLIB_OBJECT bool IsNoBindZone(EQZoneIndex) const;
	EQLIB_OBJECT bool const AddZone(EQExpansion, EQZoneIndex, const char*, const char*, int, unsigned long, int, int);
	EQLIB_OBJECT EQExpansion ExpansionZone(EQZoneIndex) const;
	EQLIB_OBJECT EQZoneIndex GetIndexFromZoneName(const char*);
	EQLIB_OBJECT int GetMinLevel(EQZoneIndex) const;
	EQLIB_OBJECT void AdvanceTime(unsigned int);
	EQLIB_OBJECT void CurrentGameTime(char*);
	EQLIB_OBJECT void GetFullZoneName(EQZoneIndex, char*);

/*0x004*/ uint8_t      Hour;
/*0x005*/ uint8_t      Minute;
/*0x006*/ uint8_t      Day;
/*0x007*/ uint8_t      Month;
/*0x008*/ int          Year;
/*0x00c*/ uint8_t      LastHour;
/*0x00d*/ uint8_t      LastMinute;
/*0x00e*/ uint8_t      LastDay;
/*0x00f*/ uint8_t      LastMonth;
/*0x010*/ int          LastYear;
/*0x014*/ uint32_t     LastAdvance;
/*0x018*/ uint32_t     LastTime;
/*0x01c*/ uint32_t     NextMercenaryId;
/*0x020*/ EQZoneInfo*  ZoneArray[MAX_ZONES];     // see 867D1B in eqgame.exe live 21 apr 2016
/*0xfc0*/
};

inline namespace deprecated {
	using WORLDDATA DEPRECATE("Use EQWorldData instead WORLDDATA") = EQWorldData;
	using PWORLDDATA DEPRECATE("Use EQWorldData* instead of PWORLDDATA") = EQWorldData*;
}

struct JournalEntry;

class JournalNPC
{
public:
	EQLIB_OBJECT ~JournalNPC();
	EQLIB_OBJECT JournalNPC();
	EQLIB_OBJECT int AddEntry(long, float, float, float, char*, int);
	EQLIB_OBJECT int AddEntry(long, float, float, float, int, int);
	EQLIB_OBJECT int DeleteEntryByHash(int);
	EQLIB_OBJECT int DeleteEntryByIndex(int);
	EQLIB_OBJECT int FindThisText(char*, bool, int);
	EQLIB_OBJECT int ReadEntry(FILE*);
	EQLIB_OBJECT static char* GetText(int);
	EQLIB_OBJECT JournalEntry* FindEntryByCategory(int, int);
	EQLIB_OBJECT JournalEntry* FindEntryByHash(int);
	EQLIB_OBJECT JournalEntry* GetEntry(int);
	EQLIB_OBJECT void ConvertCategory(int, int);

	// private
	EQLIB_OBJECT void AllocateArray();
	EQLIB_OBJECT void CleanEntries();
	EQLIB_OBJECT void ComputeLatestTime();
};

class [[offsetcomments]] KeypressHandler
{
public:
	static KeypressHandler& Get();

	EQLIB_OBJECT KeypressHandler();
	EQLIB_OBJECT ~KeypressHandler();
	EQLIB_OBJECT bool AttachAltKeyToEqCommand(const KeyCombo&, unsigned int);
	EQLIB_OBJECT bool AttachKeyToEqCommand(const KeyCombo&, unsigned int);
	EQLIB_OBJECT bool HandleKeyDown(const KeyCombo&);
	EQLIB_OBJECT bool HandleKeyUp(const KeyCombo&);
	EQLIB_OBJECT const KeyCombo& GetAltKeyAttachedToEqCommand(unsigned int) const;
	EQLIB_OBJECT const KeyCombo& GetKeyAttachedToEqCommand(unsigned int) const;
	EQLIB_OBJECT void ResetKeysToEqDefaults();

	// private
	EQLIB_OBJECT bool IsReservedKey(const KeyCombo&) const;
	EQLIB_OBJECT bool LoadAndConvertOldKeymappingFormat(unsigned int, int, KeyCombo*);
	EQLIB_OBJECT bool LoadKeymapping(unsigned int, int, KeyCombo*);
	EQLIB_OBJECT bool MapKeyToEqCommand(const KeyCombo&, int, unsigned int);
	EQLIB_OBJECT CXStr GetEqCommandSaveName(unsigned int, int) const;
	EQLIB_OBJECT void ClearCommandStateArray();
	EQLIB_OBJECT void LoadAndSetKeymappings();
	EQLIB_OBJECT void SaveKeymapping(unsigned int, const KeyCombo&, int);

/*0x0000*/ KeyCombo     NormalKey[nEQMappableCommands];
/*0x0888*/ KeyCombo     AltKey[nEQMappableCommands];
/*0x1110*/ char         CommandState[nEQMappableCommands];
/*0x1334*/
};

struct [[offsetcomments]] ItemFilterData
{
/*0x00*/ int           Types;
/*0x04*/ int           ID;
/*0x08*/ int           Icon;
/*0x0c*/ char          Name[0x40];
/*0x4c*/
};

class LootFiltersManager
{
public:
	EQLIB_OBJECT bool AddItemLootFilter(int ItemID, int IconID, const char* ItemName, int FilterTypes, bool bFromFile = false);
	EQLIB_OBJECT const ItemFilterData* GetItemFilterData(int ItemID);
	EQLIB_OBJECT bool RemoveItemLootFilter(int ItemID, int FilterTypes);
	EQLIB_OBJECT bool SetItemLootFilter(int ItemID, int IconID, const char* ItemName, int FilterTypes, bool bKeepRndSetting, bool bScrollToIt);
};

class [[offsetcomments]] MercenaryAbilityReq
{
public:
/*0x00*/ int           ReqGroupID;
/*0x04*/ int           ReqGroupRank;
/*0x08*/
};

class [[offsetcomments]] MercenaryAbilitiesData
{
public:
/*0x00*/ int           AbilityID;
/*0x04*/ int           nName;
/*0x08*/ int           nDesc;
/*0x0c*/ int           Cost;
/*0x10*/ int           GroupID;
/*0x14*/ int           GroupRank;
/*0x18*/ int           Type;
/*0x1c*/ int           MinPlayerLevel;           // min level to purchase...
/*0x20*/ int           RequirementAssociationID;
/*0x24*/ int           Refund;
/*0x28*/ int           BetaOnly;
/*0x2c*/ int           QuestAbility;
/*0x30*/ ArrayClass<MercenaryAbilityReq> AbilityReqs;
/*0x40*/
};

class [[offsetcomments]] MercenaryAlternateAdvancementManagerClient
{
public:
	EQLIB_OBJECT static MercenaryAlternateAdvancementManagerClient& Instance();

/*0x000*/ HashList<int, 5>                             MercenaryTypes;
/*0x02c*/ HashList<MercenaryAbilitiesData, 0x40>       MercenaryAbilities;
/*0x144*/ HashList<int, 0x40>                          MercenaryAbilitiesByGroupID;
/*0x25c*/ HashList<int, 0x40>                          MercenaryAbilitiesOwnedByGroupID;
/*0x374*/ HashList<HashList<int, 0x10>, 0x40>          MercenaryAbilityGroups;
/*0x48c*/
};

enum eSpellStringType
{
	SpellStringCastByMe,
	SpellStringCastByOther,
	SpellStringCastOnYou,
	SpellStringCastOnAnother,
	SpellStringWearOff,
};

class EQSpellStrings
{
public:
	EQLIB_OBJECT const char* GetString(int SpellID, int StrIndex);
};

enum InstanceType
{
	InstanceTypeWave,
	InstanceTypeWave3d,
	InstanceTypeMidi,
};

class MidiInstance
{
public:
	EQLIB_OBJECT MidiInstance(SoundManager*);
	EQLIB_OBJECT virtual ~MidiInstance();

	// virtual
	EQLIB_OBJECT bool GiveTime();
	EQLIB_OBJECT InstanceType GetType();
	EQLIB_OBJECT void AdjustVolume(float, int);
	EQLIB_OBJECT void GuaranteeStopped();
	EQLIB_OBJECT void Move(float, float, float);
	EQLIB_OBJECT void Play(SoundControl*);
};

enum StreamingStatus
{
	StreamingStatusDone,
	StreamingStatusPlaying,
	StreamingStatusStopped,
};

class Mp3Manager
{
public:
	class Entry
	{
	public:
		Entry(char*, char*, int, int);
		~Entry();
	};

	enum SortOrder
	{
		SortOrderNormal,
		SortOrderRandom,
	};

	EQLIB_OBJECT Mp3Manager(SoundManager*, MusicManager*);
	EQLIB_OBJECT ~Mp3Manager();

	EQLIB_OBJECT char* GetName(int);
	EQLIB_OBJECT SortOrder GetSort();
	EQLIB_OBJECT StreamingStatus Status();
	EQLIB_OBJECT float GetVolumeLevel();
	EQLIB_OBJECT int Add(char*);
	EQLIB_OBJECT int Count();
	EQLIB_OBJECT int GetPosition();
	EQLIB_OBJECT int GetSongLength();
	EQLIB_OBJECT int GetSongPosition();
	EQLIB_OBJECT void Back();
	EQLIB_OBJECT void Delete(int);
	EQLIB_OBJECT void DeleteAll();
	EQLIB_OBJECT void GiveTime();
	EQLIB_OBJECT void Next();
	EQLIB_OBJECT void Pause();
	EQLIB_OBJECT void Play();
	EQLIB_OBJECT void SaveList(char*);
	EQLIB_OBJECT void SetPosition(int);
	EQLIB_OBJECT void SetSongPosition(int);
	EQLIB_OBJECT void SetVolumeLevel(float);
	EQLIB_OBJECT void Sort(SortOrder);
	EQLIB_OBJECT void Stop();

	// private
	EQLIB_OBJECT int InternalAdd(char*, char*, int);
};

class MusicManager
{
public:
	class MusicEntry
	{
	public:
		EQLIB_OBJECT MusicEntry(int, SoundAsset*, int, float, int, int, int, int, int, int);
		EQLIB_OBJECT ~MusicEntry();

		EQLIB_OBJECT void AdjustVolume(float);
		EQLIB_OBJECT void FadeIn(float);
		EQLIB_OBJECT void FadeOut(bool);
	};

	EQLIB_OBJECT ~MusicManager();
	EQLIB_OBJECT MusicManager();
	EQLIB_OBJECT void Clear(SoundAsset*);
	EQLIB_OBJECT void Clear(int);
	EQLIB_OBJECT void Enable(bool);
	EQLIB_OBJECT void GiveTime();
	EQLIB_OBJECT void Play(int);
	EQLIB_OBJECT void Set(int, SoundAsset*, int, float, int, int, int, int, int, int);
	EQLIB_OBJECT void SetVolumeLevel(float);
	EQLIB_OBJECT void Stop(int);
};

enum AssetType
{
	cAssetTypeUnknown,
	cAssetTypeWave,
	cAssetTypeMp3,
	cAssetTypeOgg,
	cAssetTypeMidi
};

class [[offsetcomments]] SoundObject
{
public:
	SoundObject();
	virtual ~SoundObject();

	void AddRef();
	void Release();

/*0x04*/ int refCount = 1;
/*0x08*/
};

class [[offsetcomments]] SoundAsset : public SoundObject
{
public:
	EQLIB_OBJECT SoundAsset(SoundManager*, char*, char*, int);
	EQLIB_OBJECT bool IsPlaying();
	EQLIB_OBJECT char* GetName();
	EQLIB_OBJECT SoundInstance* Play(SoundControl*);

	EQLIB_OBJECT enum AssetType GetType();
	EQLIB_OBJECT void AdjustVolume(float, int);
	EQLIB_OBJECT void GiveTime();
	EQLIB_OBJECT void Stop();

	// protected
	EQLIB_OBJECT virtual ~SoundAsset();
	EQLIB_OBJECT void YourManagerDeleted();

/*0x008*/ char szName[512];
/*0x208*/ char* rawData;
/*0x20c*/ int rawDataLen;
/*0x210*/ AssetType assetType;
/*0x214*/ SoundManager* soundManager;
/*0x218*/ SoundInstance* soundInstance;
/*0x21c*/ SoundAsset* pNext;
/*0x220*/
};

struct [[offsetcomments]] SoundControl
{
/*0x00*/ float volumeLevel = 1.0f;
/*0x04*/ int fadeInTime = 0;
/*0x08*/ int loops = 1;
/*0x0c*/ int sequence = 0;
/*0x10*/ float x = 0.f;
/*0x14*/ float y = 0.f;
/*0x18*/ float z = 0.f;
/*0x1c*/ float minDistance = 0.f;
/*0x20*/ float maxDistance = 0.f;
/*0x24*/ float effectsLevel = 1.f;
/*0x28*/ int poolNumber = 0;
/*0x2c*/ bool fireOnce = true;
/*0x2d*/ bool startUp = false;
/*0x30*/
};

class SoundEmitter
{
public:
	EQLIB_OBJECT SoundEmitter(EmitterManager*, MusicManager*, int);
	EQLIB_OBJECT SoundEmitter(EmitterManager*, SoundAsset*, int);
	EQLIB_OBJECT void Enable(bool);
	EQLIB_OBJECT void GiveTime();
	EQLIB_OBJECT void Move(float, float, float);
	EQLIB_OBJECT void SetAsset(SoundAsset*);

	// protected
	EQLIB_OBJECT virtual ~SoundEmitter();
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void ReleaseLoopingSound();
	EQLIB_OBJECT void ResetTimer();
};

class SoundInstance : public SoundObject
{
public:
	EQLIB_OBJECT SoundInstance(SoundManager*);

	// virtual
	EQLIB_OBJECT void SetPoolNumber(int);
	EQLIB_OBJECT void SetSoundAsset(SoundAsset*);

	// protected
	EQLIB_OBJECT virtual ~SoundInstance();
	EQLIB_OBJECT void YourManagerDeleted();
};

class SoundManager
{
public:
	EQLIB_OBJECT ~SoundManager();
	// EQLIB_OBJECT SoundManager(int, int, bool, int, int, bool, enum SpeakerType);
	EQLIB_OBJECT SoundAsset* AssetGet(char*);
	// EQLIB_OBJECT SoundInstance* BorrowInstance(enum InstanceType, int);
	// EQLIB_OBJECT enum EnvironmentType GetListenerEnvironment();
	// EQLIB_OBJECT enum StreamingStatus StreamingStatus();
	EQLIB_OBJECT float StreamingGetVolumeLevel();
	EQLIB_OBJECT int StreamingGetSongLength();
	EQLIB_OBJECT int StreamingGetSongPosition();
	// EQLIB_OBJECT void AddPool(enum InstanceType, int, int);
	EQLIB_OBJECT void GetListenerLocation(float*, float*, float*, float*);
	EQLIB_OBJECT void GiveTime();
	EQLIB_OBJECT void ReturnInstance(SoundInstance*);
	// EQLIB_OBJECT void SetListenerEnvironment(enum EnvironmentType);
	EQLIB_OBJECT void SetListenerLocation(float, float, float, float);
	EQLIB_OBJECT void SetMixAhead(int);
	EQLIB_OBJECT void StreamingPause();
	EQLIB_OBJECT void StreamingPlay(char*);
	EQLIB_OBJECT void StreamingSetSongPosition(int);
	EQLIB_OBJECT void StreamingSetVolumeLevel(float);
	EQLIB_OBJECT void StreamingStop();

	// protected
	EQLIB_OBJECT void AssetAdd(SoundAsset*);
	EQLIB_OBJECT void AssetGiveTime();
	EQLIB_OBJECT void AssetRemove(SoundAsset*);
};

class StringTable
{
public:
	EQLIB_OBJECT const char* getString(uint32_t ID, bool* bFound = nullptr);
};

class Wave3dInstance : public SoundInstance
{
public:
	EQLIB_OBJECT Wave3dInstance(SoundManager*);

	// virtual
	EQLIB_OBJECT bool GiveTime();
	EQLIB_OBJECT enum InstanceType GetType();
	EQLIB_OBJECT void AdjustVolume(float, int);
	EQLIB_OBJECT void GuaranteeStopped();
	EQLIB_OBJECT void Move(float, float, float);
	EQLIB_OBJECT void Play(SoundControl*);

	// protected
	EQLIB_OBJECT virtual ~Wave3dInstance();
};

class WaveInstance : public SoundInstance
{
public:
	EQLIB_OBJECT WaveInstance(SoundManager*);

	// virtual
	EQLIB_OBJECT bool GiveTime();
	// enum InstanceType GetType();
	EQLIB_OBJECT void AdjustVolume(float, int);
	EQLIB_OBJECT void GuaranteeStopped();
	EQLIB_OBJECT void Move(float, float, float);
	EQLIB_OBJECT void Play(SoundControl*);

	// protected
	EQLIB_OBJECT virtual ~WaveInstance();
};

enum eDatabaseStringType
{
	eDefaultStringType = 0,
	eAltAbilityName = 1,
	eAltAbilityButton1 = 2,
	eAltAbilityButton2 = 3,
	eAltAbilityDescription = 4,
	eSpellCategory = 5,
	eSpellDescription = 6,

	eMercenarySubCategoryDescription = 23,
	eMercenaryStanceName = 24,

	eMercenaryAbilityName = 37,
};

class DatabaseStringTable
{
public:
	EQLIB_OBJECT const char* GetString(int id, eDatabaseStringType type, bool* found = nullptr);

	DEPRECATE("DatabaseStringTable::GetString: Use eDatabaseStringType enum for the 2nd parameter. GetString now returns const char*")
	char* GetString(int id, int type, bool* found = nullptr)
	{
		return (char*)GetString(id, static_cast<eDatabaseStringType>(type), found);
	}
};
using CDBStr = DatabaseStringTable;



class EQMisc
{
public:
	EQLIB_OBJECT int GetActiveFavorCost();
};

struct AUTOSKILL
{
	int Skill[CONCURRENT_SKILLS];
};
using PAUTOSKILL = AUTOSKILL*;


// actual size: 0x148 04-11-2017 test confirmed see 5F7150
enum eSkillCombatType
{
	SCT_NonCombat,
	SCT_Combat,
	SCT_Special
};

class [[offsetcomments]] EQ_Skill
{
public:
	EQLIB_OBJECT EQ_Skill(int);
	EQLIB_OBJECT ~EQ_Skill();

/*0x000*/ int               ImageNumber;
/*0x004*/ int               ImageDep;
/*0x008*/ DWORD             nName;
/*0x00c*/ DWORD             ReuseTimer;
/*0x010*/ DWORD             BaseDamage;
/*0x014*/ eSkillCombatType  SkillCombatType;
/*0x018*/ int               EnduranceCost;
/*0x01c*/ float             Force;
/*0x020*/ bool              Activated;
/*0x021*/ bool              LevelCappedSkill;
/*0x024*/ DWORD             MinLevel[MAX_CLASSES + 1];      // the level each class gains this skill
/*0x0b4*/ DWORD             Available[MAX_CLASSES + 1];     // FF=not available for that class (its actually how difficult it is to learn... low num easy, high hard...)
/*0x144*/ bool              bSkillupable;
/*0x148*/
};
using SKILL = EQ_Skill;
using PSKILL = EQ_Skill*;


// see SkillManager__IsValidSkillIndex_x (5C87C0) in eqgame dated 20140611
// SkillManager__SkillManager
// Actual Size: 0x2E9B2C see 571E37 in eqgame dated 20170411 test
class [[offsetcomments]] SkillManager
{
public:
	EQLIB_OBJECT int GetNameToken(int);
	EQLIB_OBJECT unsigned long GetSkillCap(PcZoneClient*, int, int, int, bool, bool, bool); // TODO: CharacterZoneClient or PcZoneClient ?
	EQLIB_OBJECT unsigned long SkillAvailableAtLevel(int, int);
	EQLIB_OBJECT bool IsActivatedSkill(int);
	EQLIB_OBJECT unsigned long GetBaseDamage(int);
	EQLIB_OBJECT unsigned long GetReuseTime(int);
	EQLIB_OBJECT bool IsAvailable(int);
	EQLIB_OBJECT bool IsCombatSkill(int);

/*0x000000*/ TSafeArrayStatic<EQ_Skill*, NUM_SKILLS> pSkill;
/*0x000190*/ int       SkillCaps[MAX_CLASSES + 1][NUM_SKILLS][MAX_PC_LEVEL + 1];
/*0x197e90*/ float     SkillMods[MAX_CLASSES + 1][NUM_SKILLS][MAX_PC_LEVEL + 1];
/*0x32fb90*/ char      SkillCapsFilename[MAX_PATH];
/*0x32fc94*/ uint32_t  Unknown0x32FC94[0x4];
/*0x32fca4*/ EQ_Skill* pSkill2[NUM_SKILLS]; // I'm absolutely not sure tha these are skills, but the struct fits here so... -eqmule
/*0x32fe34*/ UINT      SkillLastUsed[NUM_SKILLS];
/*0x32ffc4*/ UINT      SkillTimerDuration[NUM_SKILLS];
/*0x330154*/ UINT      CombatSkillLastUsed[CONCURRENT_SKILLS];
/*0x33015c*/ UINT      CombatSkillDuration[CONCURRENT_SKILLS];
/*0x330164*/ bool      bSkillCanUse[NUM_SKILLS];
/*0x3301c8*/ bool      bCombatSkillCanUse[CONCURRENT_SKILLS];
/*0x3301cc*/
};
using CSkillMgr = SkillManager;
using SKILLMGR = SkillManager;
using PSKILLMGR = SkillManager*;

// size 0x20 -- brainiac 11/14/2016
struct [[offsetcomments]] tp_coords
{
	FORCE_SYMBOLS;

/*0x00*/ int           Index;
/*0x04*/ float         Y;
/*0x08*/ float         X;
/*0x0c*/ float         Z;
/*0x10*/ float         Heading;
/*0x14*/ int           ZoneId;
/*0x18*/ int           FilterID;
/*0x1c*/ UINT          VehicleID;
/*0x20*/
};

} // namespace eqlib

#if __has_include("../private/EQClasses-private.h")
#include "../private/EQClasses-private.h"
#endif
