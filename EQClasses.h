/*
 * MacroQuest2: The extension platform for EverQuest
 * Copyright (C) 2002-2019 MacroQuest Authors
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
using PTargetBuff DEPRECATE("Use TargetBuff* Instead") = TargetBuff*;

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

enum ZONE_REQ_STATUS {};
enum ZONE_REQ_REASON {};

class _EverQuestinfo
{
public:
	void EQLIB_OBJECT SetAutoAttack(bool);
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

// we call this _AURAINFO
class [[offsetcomments]] AssociatedSOIData
{
public:
/*0x00*/ char         Name[0x40];
/*0x40*/ uint32_t     SpawnID;
/*0x44*/ int          Cost;
/*0x48*/ int          IconnID;
/*0x4c*/
};

// we call this _AURAMGR
class ClientSOIManager
{
public:
	ArrayClass2<AssociatedSOIData> Auras;

	static EQLIB_OBJECT ClientSOIManager* GetSingleton();
};

// actual size 0x80 20101012 - ieatacid
class [[offsetcomments]] EQGroundItem
{
public:
/*0x00*/ EQGroundItem* pPrev;
/*0x04*/ EQGroundItem* pNext;
/*0x08*/ ItemPtr       pContents;
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

	DEPRECATE("Use pContents instead") inline ItemPtr get_ID() const { return pContents; }
	DEPRECATE("Use pContents instead") inline void set_ID(ItemPtr ptr) { pContents = ptr; }
	__declspec(property(get = get_ID, put = set_ID)) ItemPtr ID;
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
using CTextOverlay DEPRECATE("Use CBroadcast instead") = CBroadcast;

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

class UniversalChatProxy
{
public:
	EQLIB_OBJECT char* GetChannelName(int channelNumber);
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

#pragma pack(push, 1)
struct [[offsetcomments]] EQSuccessfulHit
{
/*0x00*/ uint16_t      DamagedID;                // Spawn that was hit
/*0x02*/ uint16_t      AttackerID;               // Spawn who did the hit
/*0x04*/ uint8_t       Skill;                    // 1 HS etc...
/*0x05*/ int           SpellID;
/*0x09*/ int           DamageCaused;
/*0x0d*/ float         Force;
/*0x11*/ float         HitHeading;
/*0x15*/ float         HitPitch;
/*0x19*/ bool          bSecondary;
/*0x1a*/ uint8_t       Unknown0x1A[6];
/*0x20*/
};
#pragma pack(pop)
using pEQSuccessfulHit = EQSuccessfulHit*;

struct [[offsetcomments]] EQSuccessfulHeal
{
/*0x00*/ WORD   HealedID; // Spawn that was healed
/*0x02*/ WORD   HealerID; // Spawn who did the healing
/*0x04*/ int    SpellID;
/*0x08*/ int    ActualHeal; // Amount that was actually healed
/*0x0c*/ int    TotalHeal; // Amount that would have been healed if it didn't go over max HP
/*0x10*/ DWORD  EffectBitmask;
/*0x14*/
};
using pEQSuccessfulHeal = EQSuccessfulHeal*;

struct LfgGroupStatus;
struct LfgGroupQuery;
struct LfgPlayerStatus;
struct LfgPlayerQuery;
struct connection_t;

class CEverQuest
{
public:
	EQLIB_OBJECT ~CEverQuest();
	EQLIB_OBJECT CEverQuest(HWND);
	EQLIB_OBJECT void CreateTargetIndicator(int Slot, PSPELL pSpell, const ItemGlobalIndex& ItemLoc, ItemSpellTypes spelltype);
	EQLIB_OBJECT int DeleteTargetIndicator();
	EQLIB_OBJECT bool IsInTypingMode();
	EQLIB_OBJECT bool IsOkToTransact();
	EQLIB_OBJECT bool ReadClientINIBool(char*, char*, bool);
	EQLIB_OBJECT bool ReadUIINIBool(char*, char*, bool);
	EQLIB_OBJECT char* GetBodyTypeDesc(int);
	EQLIB_OBJECT const char* GetClassDesc(int);
	EQLIB_OBJECT char* GetClassThreeLetterCode(int);
	EQLIB_OBJECT char* GetDeityDesc(int);
	EQLIB_OBJECT char* GetInnateDesc(int);
	EQLIB_OBJECT char* GetItemClassDesc(int);
	EQLIB_OBJECT char* GetLangDesc(int);
	EQLIB_OBJECT const char* GetRaceDesc(int);
	EQLIB_OBJECT char* GetSingleMessage(uint32_t, int, int*, char*);
	EQLIB_OBJECT char* GrabFirstWord(char*, char*);
	EQLIB_OBJECT char* GrabFirstWord2(char*, char*, int);
	EQLIB_OBJECT char* ReadClientINIString(char*, char*, char*, char*, int);
	EQLIB_OBJECT char* ReadUIINIString(char*, char*, char*, char*, int);
	EQLIB_OBJECT char* stripName(char*);
	EQLIB_OBJECT char* StripShipName(char*, char*);
	EQLIB_OBJECT char* trimName(char*);
	EQLIB_OBJECT PlayerClient* ClickedPlayer(int, int);
	EQLIB_OBJECT EQSwitch* ClickedSwitch(int, int);
	EQLIB_OBJECT ZONE_REQ_STATUS IsZoneAvailable(char*, EQZoneIndex, ZONE_REQ_REASON);
	EQLIB_OBJECT float GetMaxLightRadius();
	EQLIB_OBJECT float ReadClientINIFloat(char*, char*, float);
	EQLIB_OBJECT int BeingIgnored(char*);
	EQLIB_OBJECT int DoLogin(HWND, HINSTANCE);
	EQLIB_OBJECT int GetCombatSound(PlayerClient*, PlayerClient*);
	EQLIB_OBJECT int GetCurrentLanguage() const;
	EQLIB_OBJECT int HandleItems(void*, int);
	EQLIB_OBJECT int IsFriend(const char*);
	EQLIB_OBJECT int IsValidName(char*);
	EQLIB_OBJECT int LootCorpse(PlayerClient*, int);
	EQLIB_OBJECT int MoveMoney(int, int, int, int, int, bool);
	EQLIB_OBJECT int msgStartIcon(void*);
	EQLIB_OBJECT int msgStartIeq(void*);
	EQLIB_OBJECT int msgStartInotes(void*);
	EQLIB_OBJECT int ProcessMBox();
	EQLIB_OBJECT int ReadClientINIInt(char*, char*, int);
	EQLIB_OBJECT int ReadUIINIInt(char*, char*, int);
	EQLIB_OBJECT int TypingMode();
	EQLIB_OBJECT unsigned char HandleWorldMessage(connection_t*, uint32_t, char*, uint32_t);
	EQLIB_OBJECT unsigned char IFoundMyVehicle();
	EQLIB_OBJECT void DoLoadScreenProgressBar(int, const char*, ...);
	EQLIB_OBJECT void ApplyPoison(unsigned long);
	EQLIB_OBJECT void Camp();
	EQLIB_OBJECT void CancelSneakHide();
	EQLIB_OBJECT void ChatServerConnect(char*, int, char*, char*);
	EQLIB_OBJECT void ChatServerDisconnect();
	EQLIB_OBJECT void ChatServerGiveTime();
	EQLIB_OBJECT void ChatServerMessage(char*);
	EQLIB_OBJECT void ChatServerNotificationAdd(bool, char*, char*, int);
	EQLIB_OBJECT void ChatServerNotificationFlush();
	EQLIB_OBJECT void CleanupBadFiles();
	EQLIB_OBJECT void clr_chat_input();
	EQLIB_OBJECT void Consider(PlayerClient*, void*);
	EQLIB_OBJECT void CopyFirstWord(char*, char*);
	EQLIB_OBJECT void CreateDataSubdirectories();
	EQLIB_OBJECT void CreateFilenameServerCode(char*);
	EQLIB_OBJECT void CreateIniFilenames();
	EQLIB_OBJECT void CreateInitialActors();
	EQLIB_OBJECT void DeacSpellScreen();
	EQLIB_OBJECT void Disband();
	EQLIB_OBJECT void DisplayScreen(char*);
	EQLIB_OBJECT void DoCharacterSelection();
	EQLIB_OBJECT void doInspect(PlayerClient*);
	EQLIB_OBJECT void doInvite(uint32_t, char*);
	EQLIB_OBJECT void DoLoadScreen(int);
	EQLIB_OBJECT void doLoot();
	EQLIB_OBJECT void DoMainLoop(HWND);
	EQLIB_OBJECT void DoNewCharacterCreation();
	EQLIB_OBJECT void DoPercentConvert(char*line, bool bOutGoing);
	EQLIB_OBJECT void DoSplit(char*);
	EQLIB_OBJECT void DoTellWindow(char*, char*, char*, void*, int, bool);
	EQLIB_OBJECT void OutputTextToLog(const char*Text);
	EQLIB_OBJECT void doUnInvite(char*);
	EQLIB_OBJECT void DropHeldItemOnGround(int);
	EQLIB_OBJECT void DropHeldMoneyOnGround(int);
	EQLIB_OBJECT void DropItemOrMoneyOnPlayer(PlayerClient*);
	EQLIB_OBJECT void dsp_chat(const char*);
	EQLIB_OBJECT void dsp_chat(const char* line, int color = 273, bool bLogIsOk = true, bool bConvertPercent = true, char* SomeStr = NULL);
	EQLIB_OBJECT void dsp_chat(const char*, int, bool);
	EQLIB_OBJECT void Emote();
	EQLIB_OBJECT void EnterZone(HWND);
	EQLIB_OBJECT int Follow(int);
	EQLIB_OBJECT void FreeSwitches();
	EQLIB_OBJECT void GetSndDriver();
	EQLIB_OBJECT void GetZoneInfoFromNetwork(char*);
	EQLIB_OBJECT void GuildDelete();
	EQLIB_OBJECT void GuildInvite(char*, char*);
	EQLIB_OBJECT void GuildLeader(char*);
	EQLIB_OBJECT void GuildPeace(char*);
	EQLIB_OBJECT void GuildRemove(char*);
	EQLIB_OBJECT void GuildSay(char*);
	EQLIB_OBJECT void GuildStatus(char*);
	EQLIB_OBJECT void GuildWar(char*, int);
	EQLIB_OBJECT void InitCommands();
	EQLIB_OBJECT void initCustom();
	EQLIB_OBJECT void InterpretCmd(PlayerClient*, char*);
	EQLIB_OBJECT void Invite(int);
	EQLIB_OBJECT void InviteOk(char*);
	EQLIB_OBJECT void IssueLfgGroupQuery(LfgGroupQuery*);
	EQLIB_OBJECT void IssueLfgPlayerQuery(LfgPlayerQuery*);
	EQLIB_OBJECT void IssuePetCommand(ePetCommandType, int TargetID, bool bQuiet, bool bsomethingelse = 1);
	EQLIB_OBJECT void Kill(char*, char*);
	EQLIB_OBJECT void LeaveBankMode(bool);
	EQLIB_OBJECT void LeaveGuildMaster();
	EQLIB_OBJECT void LeftClickedOnPlayer(PlayerClient*);
	EQLIB_OBJECT void LMouseDown(int, int);
	EQLIB_OBJECT void LMouseUp(int, int);
	EQLIB_OBJECT void loadCustom();
	EQLIB_OBJECT void loadCustomFromINI(char*);
	EQLIB_OBJECT void loadOptions();
	EQLIB_OBJECT void loadSoundsGame();
	EQLIB_OBJECT void LoadStringTables();
	EQLIB_OBJECT void LoadSwitchesNonAvatar(EQZoneIndex);
	EQLIB_OBJECT void LocalDeath(EQPlayerDeath*, unsigned char);
	EQLIB_OBJECT void MouseWheelScrolled(int);
	EQLIB_OBJECT void MoveToZone(int, char*, int, int, float, float, float, int);
	EQLIB_OBJECT void MoveToZone(char*, char*, int, ZONE_REQ_REASON);
	EQLIB_OBJECT void MoveToZone(EQZoneIndex, char*, int, ZONE_REQ_REASON);
	EQLIB_OBJECT void PrepareLocalPCForRepop();
	EQLIB_OBJECT void ProcessControls();
	EQLIB_OBJECT void ProcessGame(HWND, HINSTANCE);
	EQLIB_OBJECT void ProcessLocalPCIni(int);
	EQLIB_OBJECT void procMouse(int);
	EQLIB_OBJECT void RemoveCharacterOptionFile(char*);
	EQLIB_OBJECT void ReportDeath(EQPlayerDeath*);
	EQLIB_OBJECT int ReportSuccessfulHeal(EQSuccessfulHeal*);
	EQLIB_OBJECT bool ReportSuccessfulHit(EQSuccessfulHit*, bool, int);
	EQLIB_OBJECT void reqChannel();
	EQLIB_OBJECT void ResetVisionRGBs();
	EQLIB_OBJECT void RightClickedOnPlayer(PlayerClient*, int);
	EQLIB_OBJECT void RMouseDown(int, int);
	EQLIB_OBJECT void RMouseUp(int, int);
	EQLIB_OBJECT void SaveCamerasToINI();
	EQLIB_OBJECT void saveCustom();
	EQLIB_OBJECT void saveOptions();
	EQLIB_OBJECT void saveOptions2();
	EQLIB_OBJECT void SavePC(int, int, unsigned char);
	EQLIB_OBJECT void SavePCForce(int);
	EQLIB_OBJECT void send_auction();
	EQLIB_OBJECT void send_broadcast();
	EQLIB_OBJECT void send_chat();
	EQLIB_OBJECT void send_gsay();
	EQLIB_OBJECT void send_ooc();
	EQLIB_OBJECT void send_petition();
	EQLIB_OBJECT void send_private();
	EQLIB_OBJECT void send_shout();
	EQLIB_OBJECT void send_social(int, char*, char*);
	EQLIB_OBJECT void send_tell(char*, char*);
	EQLIB_OBJECT void send_update_filters();
	EQLIB_OBJECT void SendLightInfo(PlayerClient*, unsigned char);
	EQLIB_OBJECT void SendNewText(int, char*, char*);
	EQLIB_OBJECT void SetDefaultDamageDescByRace(char*, int, unsigned char);
	EQLIB_OBJECT void SetDefaultGameValues();
	EQLIB_OBJECT void SetGameState(int);
	EQLIB_OBJECT void SetLfgGroupStatus(LfgGroupStatus*);
	EQLIB_OBJECT void SetLfgPlayerStatus(LfgPlayerStatus*);
	EQLIB_OBJECT void SetPlayerAppearanceFromPInfo(PlayerClient*, int, bool);
	EQLIB_OBJECT void SetTimedFog(int);
	EQLIB_OBJECT void SetupCharSelectCamera();
	EQLIB_OBJECT void Sit();
	EQLIB_OBJECT void SortSpellLoadouts();
	EQLIB_OBJECT void StartCasting(void*);
	EQLIB_OBJECT void StartNetworkGame(HWND, HINSTANCE, char*);
	EQLIB_OBJECT void Surname(char*);
	EQLIB_OBJECT void ToggleAutoSplit();
	EQLIB_OBJECT void UpdateMyAppearance();
	EQLIB_OBJECT void UseCharge(unsigned long);
	EQLIB_OBJECT void WhatTimeIsIt();
	EQLIB_OBJECT void Who(char*);
	EQLIB_OBJECT void WriteBoolToClientINI(bool, char*, char*);
	EQLIB_OBJECT void WriteBoolToUIINI(bool, char*, char*);
	EQLIB_OBJECT void WriteFloatToClientINI(float, char*, char*);
	EQLIB_OBJECT void WriteIntToClientINI(int, char*, char*);
	EQLIB_OBJECT void WriteIntToUIINI(int, char*, char*);
	EQLIB_OBJECT void WriteStringToClientINI(char*, char*, char*);
	EQLIB_OBJECT void WriteStringToUIINI(char*, char*, char*);

	// virtual
	EQLIB_OBJECT void CshOnBuddyStatusChange(char*, int BuddyStatus);
	EQLIB_OBJECT void CshOnChannelListChange();
	EQLIB_OBJECT void CshOnMessage(char*, char*, int, char*, bool);
	EQLIB_OBJECT void CshOnPlayerEntering(char*, int, char*);
	EQLIB_OBJECT void CshOnPlayerLeaving(char*, int, char*);
};

struct connection_t;

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

class [[offsetcomments]] CXMLData
{
public:
	EQLIB_OBJECT CXMLData();
	EQLIB_OBJECT CXMLData& operator=(const CXMLData&);

	// virtual
	EQLIB_OBJECT ~CXMLData();
	EQLIB_OBJECT bool ReadFromXMLSOM(CXMLSOMDocument&);
	EQLIB_OBJECT bool WriteToXMLSOM(CXMLSOMDocument&);
	EQLIB_OBJECT int GetStreamSize();
	EQLIB_OBJECT void ReadFromStream(CMemoryStream&);
	EQLIB_OBJECT void WriteToStream(CMemoryStream&);

/*0x00*/ void*         pvfTable;
/*0x04*/ DWORD         Unknown0x04;             // always 8
/*0x08*/ UIType        Type;
/*0x0c*/ DWORD         Unknown0x0C;             // no idea yet, some number but not unique
/*0x10*/ DWORD         Unknown0x10;             // always -1
/*0x14*/ CXStr         TypeName;                // "Screen" (control type)
/*0x18*/ CXStr         Name;                    // "ChatWindow"  control name (used only for Screen)
/*0x1c*/ DWORD         Unknown0x1C;             // always null
/*0x20*/ CXStr         ScreenID;                // ScreenID (used only within Screen)
/*0x24*/
};

class CXMLDataClass
{
public:
	EQLIB_OBJECT ~CXMLDataClass();
	EQLIB_OBJECT CXMLDataClass();
	EQLIB_OBJECT int GetNumLeaf();
	EQLIB_OBJECT int GetStreamSize();
	EQLIB_OBJECT void ReadFromStream(CMemoryStream&, CXMLDataManager&);
	EQLIB_OBJECT void WriteToStream(CMemoryStream&);
};

class CXMLDataPtr
{
public:
	EQLIB_OBJECT CXMLDataPtr();
	EQLIB_OBJECT CXMLDataPtr& operator=(const CXMLDataPtr&);
	EQLIB_OBJECT void SetNewPtr(CXMLData*);

	// virtual
	EQLIB_OBJECT ~CXMLDataPtr();

	// protected
	EQLIB_OBJECT CXMLData* AllocPtr(CXMLDataPtr&, int, const CXMLData*);
	EQLIB_OBJECT void Free();
};

class CXMLEnumInfo
{
public:
	CXStr enumTypeName;
	ArrayClass2<CXStr> enumValue;

	EQLIB_OBJECT int GetStreamSize();
	EQLIB_OBJECT void ReadFromStream(CMemoryStream&);
	EQLIB_OBJECT void WriteToStream(CMemoryStream&);
};

class CXMLSOMAttribute
{
public:
	CXStr name;
	CXStr value;
};

class CXMLSOMAttributeType
{
public:
	CXStr attributeName;
	CXStr typeRef;
	CXStr typeNameC;
	CXStr fieldNameC;
	CXStr streamNameC;
};

class CXMLSOMDocumentBase
{
public:
	EQLIB_OBJECT bool CursorFieldFind(const CXStr&);
	EQLIB_OBJECT bool CursorFind(const CXStr&);
	EQLIB_OBJECT bool CursorNextInOrder();
	EQLIB_OBJECT bool CursorNextSibling();
	EQLIB_OBJECT bool CursorPop();
	EQLIB_OBJECT bool CursorPush();
	EQLIB_OBJECT bool FieldParseClassItem(const CXStr&, CXStr&, CXStr&);
	EQLIB_OBJECT bool FieldParseItemOfClass(const CXStr&, const CXStr&, int32_t&, int32_t&);
	EQLIB_OBJECT bool GetAttrValueInt(const CXStr&, int32_t &);
	EQLIB_OBJECT bool GetAttrValueStr(const CXStr&, CXStr&);
	EQLIB_OBJECT bool GetValue(const CXStr&, int32_t &);
	EQLIB_OBJECT bool GetValue(const CXStr&, bool &);
	EQLIB_OBJECT bool GetValue(const CXStr&, CXStr&);
	EQLIB_OBJECT bool SetValue(const CXStr&, int32_t);
	EQLIB_OBJECT bool SetValue(const CXStr&, bool);
	EQLIB_OBJECT bool SetValue(const CXStr&, const CXStr&);
	EQLIB_OBJECT bool ValidateData();
	EQLIB_OBJECT bool ValidateSchema();
	EQLIB_OBJECT bool XMLMerge(CXMLSOMDocumentBase&);
	EQLIB_OBJECT bool XMLRead(const CXStr&, const CXStr&, const CXStr&);
	EQLIB_OBJECT CXStr GetAttrValueStr(const CXStr&);
	EQLIB_OBJECT CXStr GetErrorMsg() const;
	EQLIB_OBJECT int XMLReadNoValidate(const CXStr&, const CXStr&, const CXStr&);
	EQLIB_OBJECT void CursorInit();
	EQLIB_OBJECT void CursorNewChild();
	EQLIB_OBJECT void CursorNewSibling();
	EQLIB_OBJECT void CursorSetPtr(CXMLSOMNodePtr);
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void SetErrorMsg(const CXStr&);
	EQLIB_OBJECT void SetErrorMsgAtCursor(const CXStr&);
	EQLIB_OBJECT void SetErrorMsgAtLine(const CXStr&, int, const CXStr&);

	// virtual
	EQLIB_OBJECT ~CXMLSOMDocumentBase();

	// protected
	EQLIB_OBJECT bool ValidateDataElements(CXMLSOMElementType&);
	EQLIB_OBJECT bool ValidateSchemaCategories();
	EQLIB_OBJECT bool ValidateSchemaDefinition();
	EQLIB_OBJECT bool ValidateSchemaElementType();
	EQLIB_OBJECT bool ValidateSchemaSimpleType();
	EQLIB_OBJECT bool ValidateSchemaSimpleTypeNode(CXMLSOMSimpleType&);
	EQLIB_OBJECT bool ValidateSchemaTypeRefs();
	EQLIB_OBJECT bool XMLProcessComposite(const CXStr&, const CXStr&);
};

class CXMLSOMDocument : public CXMLSOMDocumentBase
{
public:
	EQLIB_OBJECT bool FieldParseItemOfClass(CXStr, CXStr, uint32_t&);
	EQLIB_OBJECT bool GetValueObjectId(CXStr, CXStr, uint32_t&);
	EQLIB_OBJECT bool SetValueObjectId(CXStr, CXStr, uint32_t);

	// virtual
	EQLIB_OBJECT ~CXMLSOMDocument();
};


class [[offsetcomments]] CXMLSOMElement
{
public:
/*0x00*/ CXStr elementName;
/*0x04*/ CXStr typeRef;
/*0x08*/ CXStr typeRefClassName;
/*0x0c*/ CXStr typeRefItemName;
/*0x10*/ int minOccurs;
/*0x14*/ int maxOccurs;
/*0x18*/ CXStr defaultValue;
/*0x1c*/ bool internal;

/*0x1d*/ bool isArrayC;
/*0x1e*/ bool isEnumC;
/*0x20*/ CXStr typeNameC;
/*0x24*/ CXStr fieldNameC;
/*0x28*/ CXStr streamNameC;
/*0x2c*/
};

class [[offsetcomments]] CXMLSOMElementType
{
public:
	EQLIB_OBJECT int GetItemIdx(const CXStr& itemName)
	{
		for (int i = 0; i < itemList.GetLength(); ++i)
		{
			if (itemList[i] == itemName)
				return i;
		}

		return -1;
	}

/*0x00*/ CXStr typeName;
/*0x04*/ CXStr superType;
/*0x08*/ ArrayClass2<CXMLSOMAttributeType> attributeTypes;
/*0x20*/ ArrayClass2<CXMLSOMElement> elements;
/*0x38*/ ArrayClass2<CXStr> itemList;

/*0x50*/ CXStr classNameC;
/*0x54*/ CXStr baseClassNameC;

/*0x58*/ CXStr jsName;

/*0x5c*/ CXStr sourceFile;
/*0x60*/ int sourceLine;
/*0x64*/
};

enum EXMLSOMNodeType
{
	XMLSOMNode,
	XMLSOMComment,
	XMLSOMProcess,
};

class [[offsetcomments]] CXMLSOMNode
{
public:
/*0x00*/ EXMLSOMNodeType nodeType;
/*0x04*/ CXStr nodeName;
/*0x08*/ CXStr nodeValue;
/*0x0c*/ ArrayClass2<CXMLSOMAttribute> attributeList;
/*0x24*/ ArrayClass2<CXMLSOMNodePtr> nodeList;
/*0x3c*/ CXStr sourceFile;
/*0x40*/ int sourceLine;
/*0x44*/ int refCount;
/*0x48*/
};

// this is an intrusive reference counted pointer of CXMLSOMNode
class CXMLSOMNodePtr
{
public:
	CXMLSOMNode* pNode;
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

enum eParcelStatus
{
	ePS_NoParcels,
	ePS_HasParcels,
	ePS_OverParcelsLimit,
};

class [[offsetcomments]] CGroupMemberBase
{
public:
/*0x00*/ void*         vftable;
/*0x04*/ CXStr         Name;
/*0x08*/ short         Type;
/*0x0c*/ CXStr         OwnerName;
/*0x10*/ int           Level;
/*0x14*/ bool          bIsOffline;
/*0x18*/ UINT          UniquePlayerID;
/*0x1c*/ bool          bRoleStates[6];
/*0x24*/ UINT          CurrentRoleBits;
/*0x28*/ UINT          OnlineTimestamp;
/*0x2c*/
};

class [[offsetcomments]] CGroupMemberClient : public CGroupMemberBase
{
	FORCE_SYMBOLS;

public:
/*0x2c*/ CharacterZoneClient* pCharacter;
/*0x30*/ SPAWNINFO*           pSpawn;
/*0x34*/ int                  GroupIndex;
/*0x38*/
};

class [[offsetcomments]] CGroupBase
{
	FORCE_SYMBOLS;

public:
/*0x00*/ void*         vftable;
/*0x04*/ CGroupMemberClient* pMembers[6];
/*0x1c*/ CGroupMemberClient* pGroupLeader;
/*0x20*/ uint32_t      ID;
/*0x24*/
};

class [[offsetcomments]] CGroupClient : public CGroupBase
{
	FORCE_SYMBOLS;

public:
/*0x24*/ int          GroupSelectID;
/*0x28*/
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

struct EQClientSwitch;
struct OldDiskSwitch;


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

	// Currently necessary because of MQ2DataTypes

	// FIXME: DO NOT DO THIS
	EQSwitch() { ZeroMemory(this, sizeof(EQSwitch)); }
};
using DOOR = EQSwitch;
using PDOOR = EQSwitch*;

class [[offsetcomments]] EqSwitchManager
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT EqSwitchManager();
	EQLIB_OBJECT ~EqSwitchManager();

	EQLIB_OBJECT EQSwitch* GetSwitch(int);
	EQLIB_OBJECT EQSwitch* GetSwitchByActor(CActorInterface*);
	EQLIB_OBJECT EQSwitch* GetSwitchById(int, bool);
	EQLIB_OBJECT int GetCount();
	EQLIB_OBJECT void AddSwitch(EQSwitch*);
	EQLIB_OBJECT void DeleteAll();

/*0x000*/ int          NumEntries;
/*0x004*/ EQSwitch*    Switches[0xFF];
/*0x400*/
	// There is more that has not been mapped yet ...

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
using ZONELIST DEPRECATE("Use EQZoneInfo instead") = EQZoneInfo;
using PZONELIST DEPRECATE("Use EQZoneInfo* instead") = EQZoneInfo*;

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
	inline EQZoneIndex GetZoneBaseId(EQZoneIndex zoneId) const
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
using WORLDDATA DEPRECATE("Use EQWorldData instead") = EQWorldData;
using PWORLDDATA DEPRECATE("Use EQWorldData* instead") = EQWorldData*;

enum EOutDoor : BYTE
{
	IndoorDungeon,                               // Zones without sky SolB for example.
	Outdoor,                                     // Zones with sky like Commonlands for example.
	OutdoorCity,                                 // A Player City with sky Plane of Knowledge for example.
	DungeonCity,                                 // A Player City without sky Ak'anon for example.
	IndoorCity,                                  // A Player City without sky Erudin for example.
	OutdoorDungeon,                              // Dungeons with sky like Blackburrow for example.
};

enum EPlace
{
	CannotPlace,
	CanOnlyPlace,
	CanPlaceAndGoto,
};

// this is zoneHeader
// Size 0x3a8 see F17224-F16E7C in eqgame.exe live 17 Jan 2017 - eqmule
struct [[offsetcomments]] ZONEINFO
{
/*0x000*/ char         CharacterName[0x40];
/*0x040*/ char         ShortName[0x80];
/*0x0c0*/ char         LongName[0x80];
/*0x140*/ char         ZoneDesc[0x5][0x1e];  //zone description strings
/*0x1d6*/ BYTE         FogOnOff; // (usually FF)
/*0x1d8*/ ARGBCOLOR    FogRed;
/*0x1dc*/ ARGBCOLOR    FogGreen;
/*0x1e0*/ ARGBCOLOR    FogBlue;
/*0x1e4*/ float        FogStart[0x4]; //fog distance
/*0x1f4*/ float        FogEnd[0x4];
/*0x204*/ float        ZoneGravity;
/*0x208*/ EOutDoor     OutDoor;//this is what we want instead of ZoneType, see the enum
/*0x209*/ BYTE         RainChance[0x4];//no u cant change these to dwords cause then u screw up 4 byte padding
/*0x20d*/ BYTE         RainDuration[0x4];
/*0x211*/ BYTE         SnowChance[0x4];
/*0x215*/ BYTE         SnowDuration[0x4];
/*0x219*/ char         ZoneTimeZone;   //in hours from worldserver, can be negative
/*0x21a*/ BYTE         SkyType;   //1 means active
/*0x21c*/ int          WaterMidi;   //which midi to play while underwater
/*0x220*/ int          DayMidi;
/*0x224*/ int          NightMidi;
/*0x228*/ float        ZoneExpModifier;    //This has been nerfed ..now reads 1.0 for all zones
/*0x22c*/ float        SafeXLoc;
/*0x230*/ float        SafeYLoc;
/*0x234*/ float        SafeZLoc;
/*0x238*/ float        SafeHeading;
/*0x23c*/ float        Ceiling;
/*0x240*/ float        Floor;
/*0x244*/ float        MinClip;
/*0x248*/ float        MaxClip;
/*0x24c*/ int          ForageLow; //Forage skill level needed to get stuff
/*0x250*/ int          ForageMedium;
/*0x254*/ int          ForageHigh;
/*0x258*/ int          FishingLow; //Fishing skill level needed to get stuff
/*0x25c*/ int          FishingMedium;
/*0x260*/ int          FishingHigh;
/*0x264*/ int          SkyRelated; //0-24 i think
/*0x268*/ UINT         GraveyardTimer; //minutes until corpse(s) pops to graveyard
/*0x26c*/ int          ScriptIDHour;
/*0x270*/ int          ScriptIDMinute;
/*0x274*/ int          ScriptIDTick;
/*0x278*/ int          ScriptIDOnPlayerDeath;
/*0x27c*/ int          ScriptIDOnNPCDeath;
/*0x280*/ int          ScriptIDPlayerEnteringZone;
/*0x284*/ int          ScriptIDOnZonePop;
/*0x288*/ int          ScriptIDNPCLoot;
/*0x28c*/ int          ScriptIDAdventureFailed;
/*0x290*/ int          CanExploreTasks;
/*0x294*/ int          UnknownFlag;
/*0x298*/ int          ScriptIDOnFishing;
/*0x29c*/ int          ScriptIDOnForage;
/*0x2a0*/ char         SkyString[0x20]; //if empty no sky, ive only seen this as the zone name
/*0x2c0*/ char         WeatherString[0x20]; //if empty no weather
/*0x2e0*/ char         SkyString2[0x20]; //if SkyString is empty this is checked
/*0x300*/ int          SkyRelated2; //0-24
/*0x304*/ char         WeatherString2[0x20]; //if empty no weather
/*0x324*/ float        WeatherChangeTime;
/*0x328*/ int          Climate;
/*0x32c*/ int          NPCAgroMaxDist; //the distance needed for an npc to lose agro after an attack
/*0x330*/ int          FilterID; //found in the teleport table
/*0x334*/ int          ZoneID;
/*0x338*/ int          ScriptNPCReceivedanItem;
/*0x33c*/ bool         bCheck;
/*0x340*/ int          ScriptIDSomething;
/*0x344*/ int          ScriptIDSomething2;
/*0x348*/ int          ScriptIDSomething3;
/*0x34c*/ bool         bNoBuffExpiration;//this is checked serverside so no, u cant and shouldn't set this if u value your account
/*0x350*/ int          LavaDamage; //before resists
/*0x354*/ int          MinLavaDamage; //after resists
/*0x358*/ bool         bDisallowManaStone; //can a manastone be used here?
/*0x359*/ bool         bNoBind;
/*0x35a*/ bool         bNoAttack;
/*0x35b*/ bool         bNoCallOfHero;
/*0x35c*/ bool         bNoFlux;
/*0x35d*/ bool         bNoFear;
/*0x35e*/ bool         bNoEncumber;
/*0x360*/ int          FastRegenHP;//not exactly sure how these work but ome zones have these set
/*0x364*/ int          FastRegenMana;
/*0x368*/ int          FastRegenEndurance;
/*0x36c*/ EPlace       CanPlaceCampsite;
/*0x370*/ EPlace       CanPlaceGuildBanner;
/*0x374*/ float        FogDensity;
/*0x378*/ bool         bAdjustGamma;
/*0x37c*/ int          TimeStringID;
/*0x380*/ bool         bNoMercenaries;
/*0x384*/ int          FishingRelated;
/*0x388*/ int          ForageRelated;
/*0x38c*/ bool         bNoLevitate;
/*0x390*/ float        Blooming;
/*0x394*/ bool         bNoPlayerLight;
/*0x398*/ int          GroupLvlExpRelated;
/*0x39c*/ BYTE         PrecipitationType;
/*0x39d*/ bool         bAllowPVP;
/*0x3a0*/
};
using PZONEINFO = ZONEINFO*;


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

	DEPRECATE("Use eDatabaseStringType enum") const char* GetString(int id, int type)
	{
		return GetString(id, static_cast<eDatabaseStringType>(type), nullptr);
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

class CChatService
{
public:
	EQLIB_OBJECT int GetNumberOfFriends();
	EQLIB_OBJECT const char* GetFriendName(int);

	// TODO: Merge with _CHATSERVICE
};

enum eKeyboardMode
{
	Typing,
	KBM_Command,
};

#pragma pack(push)
#pragma pack(4)

struct [[offsetcomments]] EVERQUESTINFO
{
/*0x000*/ HWND       Wnd;
/*0x004*/ HINSTANCE  hInst;
/*0x008*/ int        Render_MinX;
/*0x00c*/ int        Render_MinY;
/*0x010*/ int        Render_MaxX;
/*0x014*/ int        Render_MaxY;
/*0x018*/ int        Render_XScale;
/*0x01c*/ int        Render_YScale;
/*0x020*/ int        Render_WidthScale;
/*0x024*/ int        Render_HeightScale;
/*0x028*/ int        ReadyEnterWorld;
/*0x02c*/ bool       InsideDoMainWhileLoop;
/*0x030*/ int        Hidden;
/*0x034*/ DWORD      Displayflags;
/*0x038*/ DWORD      Command;
/*0x03c*/ BYTE       Unknown0x0003c;
/*0x040*/ int        ScreenXRes;
/*0x044*/ int        ScreenYRes;
/*0x048*/ int        WindowXOffset;
/*0x04c*/ int        WindowYOffset;
/*0x050*/ bool       FullscreenMode;
/*0x054*/ eKeyboardMode KeyboardMode;
/*0x058*/ BYTE       Runmode;                  // dont EVER set this to something > 1 unless you WANT to get banned.
/*0x059*/ BYTE       Unknown0x00059;
/*0x05a*/ BYTE       Unknown0x0005a;
/*0x05b*/ BYTE       MouseCntrl;
/*0x05c*/ BYTE       MouseActive;
/*0x05d*/ BYTE       ForceCrouch;
/*0x060*/ UINT       ForceCrouchTimer;
/*0x064*/ float      Unknown0x00064;
/*0x068*/ float      Unknown0x00068;
/*0x06c*/ int        MouseX;
/*0x070*/ int        MouseY;
/*0x074*/ int        MouseZ;
/*0x078*/ int        Lastmx;
/*0x07c*/ int        Lastmy;
/*0x080*/ bool       MouseInClientRect;
/*0x084*/ int        MXSensitivity;
/*0x088*/ int        MYSensitivity;
/*0x08c*/ int        MousePointerSpeedMod;
/*0x090*/ bool       ServerFilter;
/*0x094*/ int        IsTrader;
/*0x098*/ BYTE       CurrentChan;
/*0x09c*/ int        CurrentLang;
/*0x0a0*/ char       TellTarget[0x40];
/*0x0e0*/ UINT       LastMinute;
/*0x0e4*/ UINT       LastLocal;
/*0x0e8*/ UINT       LastControlled;
/*0x0ec*/ BYTE       MInverse;
/*0x0ed*/ BYTE       Unknown0x000ed;
/*0x0ee*/ BYTE       MouseLook;
/*0x0ef*/ bool       bDefaultMouseLook;
/*0x0f0*/ BYTE       Strafe;
/*0x0f1*/ bool       bNetstat;
/*0x0f2*/ BYTE       ModInventory;
/*0x0f4*/ UINT       LastHitter;
/*0x0f8*/ BYTE       Harmless;
/*0x0f9*/ BYTE       Silenced;
/*0x0fc*/ UINT       JumpTimer;
/*0x100*/ UINT       EventJump;
/*0x104*/ UINT       LastJump;
/*0x108*/ UINT       FrameTime;
/*0x10c*/ int        AutoRun;
/*0x110*/ UINT       PoisonTimer;
/*0x114*/ ItemGlobalIndex PoisonGI;
/*0x120*/ int        OldX;
/*0x124*/ int        OldY;
/*0x128*/ BYTE       OldMouseButtons[8];
/*0x130*/ BYTE       MouseButtons[8];
/*0x138*/ bool       bIsMouseRightHanded;
/*0x13c*/ int        Unknown0x0013c;
/*0x140*/ int        CharStatePending;
/*0x144*/ char       PendingCharacterName[0x40];
/*0x184*/ int        TutorialMode;
/*0x188*/ int        RMouseSecond;
/*0x18c*/ int        LMouseSecond;
/*0x190*/ UINT       RMouseDown;
/*0x194*/ UINT       LMouseDown;
/*0x198*/ char       Unknown0x00198[0x40];
/*0x1d8*/ UINT       DuelTarget;
/*0x1dc*/ UINT       DuelMe;
/*0x1e0*/ BYTE       DuelOn;
/*0x1e4*/ UINT       AutoHelp;
/*0x1e8*/ BYTE       OldMouseLook;
/*0x1ec*/ UINT       LastLocalUpdate;
/*0x1f0*/ UINT       LastControlledUpdate;
/*0x1f4*/ UINT       DataRate;
/*0x1f8*/ int        SavedPC;
/*0x1fc*/ int        InfraRed;
/*0x200*/ int        InfraGreen;
/*0x204*/ int        InfraBlue;
/*0x208*/ int        UltraRed;
/*0x20c*/ int        UltraGreen;
/*0x210*/ int        UltraBlue;
/*0x214*/ int        Unknown0x00214;
/*0x218*/ int        IOLines;
/*0x21c*/ int        IOLineSpacing;
/*0x220*/ char       ObjTag[0x14];
/*0x234*/ long       NumObjects;
/*0x238*/ long       NumLights;
/*0x23c*/ long       DecrTime[0xa];
/*0x264*/ long       DecrMsg[0xa];
/*0x28c*/ long       DecrIndex;
/*0x290*/ BYTE       AffectsOn;
/*0x291*/ BYTE       InspectMode;
/*0x292*/ BYTE       UpMouseAnim;
/*0x294*/ UINT       ExitCounter;
/*0x298*/ UINT       ExitStart;
/*0x29c*/ UINT       ForcedExitCounter;
/*0x2a0*/ UINT       OfflineModeRequestTime;
/*0x2a4*/ int        SwimJump;
/*0x2a8*/ BYTE       DisplayCamp;
/*0x2ac*/ int        PolysOff;
/*0x2b0*/ float      CampY;
/*0x2b4*/ float      CampX;
/*0x2b8*/ float         CampZ;
/*0x2bc*/ int        Hits;
/*0x2c0*/ int        Bandage;
/*0x2c4*/ UINT       BackSpace;
/*0x2c8*/ long       StartBandage;
/*0x2cc*/ long       MyY;
/*0x2d0*/ long       MyX;
/*0x2d4*/ long       MyZ;
/*0x2d8*/ long       TargetY;
/*0x2dc*/ long       TargetX;
/*0x2e0*/ long       TargetZ;
/*0x2e4*/ ZONEINFO   ZoneInfo;
/*0x684*/ BYTE       ZDefined;
/*0x688*/ int        TrackTimer;
/*0x68c*/ long       StartTrack;
/*0x690*/ int        bTrackPlayers;
/*0x694*/ bool       bTrackMercs;
/*0x695*/ bool       bTrackPets;
/*0x698*/ int        iTrackSortType;
/*0x69c*/ int        iTrackFilterType;
/*0x6a0*/ UINT       MouseTimer;
/*0x6a4*/ int        SoundUpdate;
/*0x6a8*/ bool       MouseOn;
/*0x6ac*/ USINGSKILL UsingSkill;
/*0x6b4*/ int        Unknown0x006bc[4];
/*0x6c4*/ BYTE       ClickThroughMask;
/*0x6c8*/ int        ShowSpellDescriptions;
/*0x6cc*/ bool       ReceivedWorldObjects;
/*0x6cd*/ BYTE       Unknown0x006d5;
/*0x6ce*/ bool       Unknown0x006d6;
/*0x6d0*/ float      SavedViewPitch;
/*0x6d4*/ int        SendPcReceived;
/*0x6d8*/ int        WeatherReceived;
/*0x6dc*/ int        PixelInit;
/*0x6e0*/ bool       bIsPressedShift;
/*0x6e1*/ bool       bIsPressedControl;
/*0x6e2*/ bool       bIsPressedAlt;
/*0x6e3*/ bool       bIsPressedLShift;
/*0x6e4*/ bool       bIsPressedLControl;
/*0x6e5*/ bool       bIsPressedLAlt;
/*0x6e6*/ bool       bIsPressedRShift;
/*0x6e7*/ bool       bIsPressedRControl;
/*0x6e8*/ bool       bIsPressedRAlt;
/*0x6ec*/ int        Currkeypress;
/*0x6f0*/ int        Lastkeypress;
/*0x6f4*/ int        Rateup;
/*0x6f8*/ int        Ratedown;
/*0x6fc*/ int        Rateforward;
/*0x700*/ int        Rateback;
/*0x704*/ int        Rateleft;
/*0x708*/ int        Rateright;
/*0x70c*/ int        RaceWar;
/*0x710*/ int        Ruleset;
/*0x714*/ bool       bRpServer;
/*0x715*/ bool       bAcceleratedServer;
/*0x716*/ bool       bProgressionServer;
/*0x718*/ int        ProgressionOpenExpansions;
/*0x71c*/ bool       bIsDevServer;
/*0x71d*/ bool       bIsBetaServer;
/*0x71e*/ bool       bIsTestServer;
/*0x71f*/ bool       bIsStageServer;
/*0x720*/ bool       bUseMailSystem;
/*0x721*/ bool       bIsEscapeServer;
/*0x722*/ bool       bIsTutorialEnabled;
/*0x723*/ bool       bCanCreateHeadStartCharacter;
/*0x724*/ bool       bCanCreateHeroicCharacter;
/*0x728*/ int        HeroicSlots;
/*0x72c*/ bool       bAutoIdentify;
/*0x72d*/ bool       bNameGen;
/*0x72e*/ bool       bGibberish;
/*0x730*/ int        Locale;
/*0x734*/ BYTE       UpdateControlled;
/*0x735*/ BYTE       UpdateLocal;
/*0x736*/ BYTE       EnterZone;
/*0x737*/ BYTE       ExitGame;
/*0x738*/ int        EnterZoneReason;
/*0x73c*/ bool       UseVoiceMacros;
/*0x740*/ int        Deltax;
/*0x744*/ int        Deltay;
/*0x748*/ int        OldRate1;
/*0x74c*/ int        OldRate2;
/*0x750*/ float      StrafeRate;
/*0x754*/ int        SaveIndex;
/*0x758*/ float      Unknown0x00760;
/*0x75c*/ // plus more ...
};
#pragma pack(pop)
using PEVERQUESTINFO = EVERQUESTINFO*;

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
