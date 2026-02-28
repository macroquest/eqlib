/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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

#include "eqlib/Common.h"
#include "eqlib/SizeChecks.h"

#include "eqlib/game/Constants.h"
#include "eqlib/game/Containers.h"
#include "eqlib/game/ForwardDecls.h"
#include "eqlib/game/MathTypes.h"
#include "eqlib/game/Types.h"

#include "eqlib/graphics/RenderInterface.h"

#include <limits>

namespace eqlib {

class CMemoryStream;

class PlayerClient;

//============================================================================
// Aggro Meter

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

struct AggroMeterListEntry
{
	virtual void Reset() {}

	uint16_t AggroPct;
};

using PAggroMeterListEntry DEPRECATE("Use AggroMeterListEntry* instead of PAggroMeterListEntry") = AggroMeterListEntry*;
using AGGRODATA DEPRECATE("Use AggroMeterListEntry instead of AGGRODATA") = AggroMeterListEntry;
using PAGGRODATA DEPRECATE("Use AggroMeterListEntry* instead of PAGGRODATA") = AggroMeterListEntry*;

constexpr int MAX_AGGRO_METER_SIZE = 30;

class [[offsetcomments]] AggroMeterManagerClient
{
public:
	static EQLIB_OBJECT AggroMeterManagerClient& Instance();

/*0x000*/ AggroMeterListEntry aggroData[MAX_AGGRO_METER_SIZE];
/*0x1e0*/ uint32_t AggroLockID;                     // this can be 0, I dont know what it is...
/*0x1e4*/ uint32_t AggroTargetID;                   // this is id of whoever we are fighting
/*0x1e8*/ uint32_t AggroSecondaryID;                // this is id of whoever the npc is fighting
/*0x1ec*/
};

using AGGROINFO DEPRECATE("Use AggroMeterManagerClient instead of AGGROINFO") = AggroMeterManagerClient;
using PAGGROINFO DEPRECATE("Use AggroMeterManagerClient* instead of PAGGROINFO") = AggroMeterManagerClient*;


// This is actually part of the LabelCache.
struct [[offsetcomments]] LabelCache_AggroData
{
	FORCE_SYMBOLS

/*0x000*/ int           AggroMostHatedName[64];
/*0x100*/ int           AggroHatePct[MAX_AGGRO_METER_SIZE];
/*0x178*/ int           AggroMyHatePct;
/*0x17c*/
};

struct [[offsetcomments]] LabelCache
{
/*0x000*/ char  Name[64];
/*0x040*/ char  LastName[64];
/*0x080*/ int   Level;
/*0x084*/ char  Class[64];
/*0x0c4*/ char  Title[64];
/*0x104*/ int   Deity;
/*0x108*/ int   Str;
/*0x10c*/ int   Sta;
/*0x110*/ int   Dex;
/*0x114*/ int   Agi;
/*0x118*/ int   Wis;
/*0x11c*/ int   Int;
/*0x120*/ int   Cha;
/*0x124*/ int   ResistPoison;
/*0x128*/ int   ResistDisease;
/*0x12c*/ int   ResistCorruption;
/*0x130*/ int   ResistFire;
/*0x134*/ int   ResistCold;
/*0x138*/ int   ResistMagic;
/*0x13c*/ int   BaseStr;
/*0x140*/ int   BaseSta;
/*0x144*/ int   BaseDex;
/*0x148*/ int   BaseAgi;
/*0x14c*/ int   BaseWis;
/*0x150*/ int   BaseInt;
/*0x154*/ int   BaseCha;
/*0x158*/ int   BaseResistPoison;
/*0x15c*/ int   BaseResistDisease;
/*0x160*/ int   BaseResistCorruption;
/*0x164*/ int   BaseResistFire;
/*0x168*/ int   BaseResistCold;
/*0x16c*/ int   BaseResistMagic;
/*0x170*/ int   HeroicStr;
/*0x174*/ int   HeroicSta;
/*0x178*/ int   HeroicDex;
/*0x17c*/ int   HeroicAgi;
/*0x180*/ int   HeroicWis;
/*0x184*/ int   HeroicInt;
/*0x188*/ int   HeroicCha;
/*0x18c*/ int   MaxStr;
/*0x190*/ int   MaxSta;
/*0x194*/ int   MaxDex;
/*0x198*/ int   MaxAgi;
/*0x19c*/ int   MaxWis;
/*0x1a0*/ int   MaxInt;
/*0x1a4*/ int   MaxCha;
/*0x1a8*/ int   MaxResistPoison;
/*0x1ac*/ int   MaxResistDisease;
/*0x1b0*/ int   MaxResistCorruption;
/*0x1b4*/ int   MaxResistFire;
/*0x1b8*/ int   MaxResistCold;
/*0x1bc*/ int   MaxResistMagic;
/*0x1c0*/ int   HP;
/*0x1c4*/ int   MaxHP;
/*0x1c8*/ float HPPct;
/*0x1cc*/ int   Mana;
/*0x1d0*/ int   MaxMana;
/*0x1d4*/ float ManaPct;
/*0x1d8*/ int   Endurance;
/*0x1dc*/ int   MaxEndurance;
/*0x1e0*/ float EndurancePct;
/*0x1e4*/ int   Mitigation;
/*0x1e8*/ int   Evasion;
/*0x1ec*/ int   Attack;
/*0x1f0*/ int   Accuracy;
/*0x1f4*/ int   Weight;
/*0x1f8*/ int   MaxWeight;
/*0x1fc*/ float ExpPct;
/*0x200*/ float AAExpPct;
/*0x204*/ int   AAPoints;
/*0x208*/ int   AASiphon;
/*0x20c*/ int   Haste;
/*0x210*/ int   HPRegen;
/*0x214*/ int   ManaRegen;
/*0x218*/ int   EnduranceRegen;
/*0x21c*/ int   SpellShield;
/*0x220*/ int   CombatEfficiency;
/*0x224*/ int   Shielding;
/*0x228*/ int   DmgShielding;
/*0x22c*/ int   DoTShielding;
/*0x230*/ int   DmgShieldMitigation;
/*0x234*/ int   Avoidance;
/*0x238*/ int   AccuracyBonus;
/*0x23c*/ int   StunResist;
/*0x240*/ int   StrikeThrough;
/*0x244*/ int   HealAmount;
/*0x248*/ int   SpellDamage;
/*0x24c*/ int   Clairvoyance;
/*0x250*/ int   SkillDmgBash;
/*0x254*/ int   SkillDmgBackstab;
/*0x258*/ int   SkillDmgDragonPunch;
/*0x25c*/ int   SkillDmgEagleStrike;
/*0x260*/ int   SkillDmgFlyingKick;
/*0x264*/ int   SkillDmgKick;
/*0x268*/ int   SkillDmgRoundKick;
/*0x26c*/ int   SkillDmgTigerClaw;
/*0x270*/ int   SkillDmgFrenzy;
/*0x274*/ int   Unused1;
/*0x278*/ int   LoyaltyTokens;
/*0x27c*/ int   ParcelCount;
/*0x280*/ int   CurrentLoyaltyVelocity;
/*0x284*/ int   OverflowCount;
/*0x288*/ int   Luck;
/*0x28c*/ char  TargetName[256];
/*0x38c*/ int   TargetHPPct;
/*0x390*/ char  PetName[128];
/*0x410*/ int   PetHPPct;
/*0x414*/ int   PetTargetHPPct;
/*0x418*/ char  GroupName[MAX_GROUP_SIZE - 1][64];
/*0x558*/ int   GroupHPPct[MAX_GROUP_SIZE - 1];
/*0x56c*/ int   GroupPetHPPct[MAX_GROUP_SIZE - 1];
/*0x580*/ int   GroupManaPct[MAX_GROUP_SIZE - 1];
/*0x594*/ int   GroupSTAPct[MAX_GROUP_SIZE - 1];
/*0x5a8*/ int   Buff[15];
/*0x5e4*/ int   BardBuff[6];
/*0x5fc*/ int   PetBuff[30];
/*0x674*/ int   Spell[10];
/*0x69c*/ char  SongTitle[512];                 // mp3 player
/*0x89c*/ int   SongDurationMin;
/*0x8a0*/ int   SongDurationSec;
/*0x8a4*/ int   SongCurrentMin;
/*0x8a8*/ int   SongCurrentSec;
/*0x8ac*/ int   GroupLeaderExpPct;             // no longer used
/*0x8b0*/ int   RaidLeaderExPct;               // no longer used
/*0x8b4*/ char  TargetOfTargetName[64];
/*0x8f4*/ int   ExtendedTargetHPPct[MAX_EXTENDED_TARGET_SIZE];
/*0x950*/ int   ExtendedTargetManaPct[MAX_EXTENDED_TARGET_SIZE];
/*0x9ac*/ int   ExtendedTargetEndurancePct[MAX_EXTENDED_TARGET_SIZE];
/*0xa08*/ char  AggroTargetName[64];
/*0xa48*/ char  AggroMostHatedName[64];
/*0xa88*/ char  AggroMostHatedNameNoLock[64];
/*0xac8*/ int   AggroHatePct[MAX_AGGRO_METER_SIZE];
/*0xb40*/ int   AggroMyHatePct;
/*0xb44*/ int   AggroMostHatedPct;
/*0xb48*/ float MercenaryAAExperiencePct;
/*0xb4c*/ int   MercenaryAAPoints;
/*0xb50*/ int   MercenaryAAPointsSpent;
/*0xb54*/ int   MercenaryHP;
/*0xb58*/ int   MercenaryMaxHP;
/*0xb5c*/ int   MercenaryMana;
/*0xb60*/ int   MercenaryMaxMana;
/*0xb64*/ int   MercenaryEndurance;
/*0xb68*/ int   MercenaryMaxEndurance;
/*0xb6c*/ int   MercenaryMitigation;
/*0xb70*/ int   MercenaryEvasion;
/*0xb74*/ int   MercenaryAttack;
/*0xb78*/ int   MercenaryAccuracy;
/*0xb7c*/ int   MercenaryHaste;
/*0xb80*/ int   MercenaryStr;
/*0xb84*/ int   MercenarySta;
/*0xb88*/ int   MercenaryInt;
/*0xb8c*/ int   MercenaryWis;
/*0xb90*/ int   MercenaryAgi;
/*0xb94*/ int   MercenaryDex;
/*0xb98*/ int   MercenaryCha;
/*0xb9c*/ int   MercenaryHeroicStr;
/*0xba0*/ int   MercenaryHeroicSta;
/*0xba4*/ int   MercenaryHeroicInt;
/*0xba8*/ int   MercenaryHeroicWis;
/*0xbac*/ int   MercenaryHeroicAgi;
/*0xbb0*/ int   MercenaryHeroicDex;
/*0xbb4*/ int   MercenaryHeroicCha;
/*0xbb8*/ int   MercenaryCombatHPRegen;
/*0xbbc*/ int   MercenaryCombatManaRegen;
/*0xbc0*/ int   MercenaryCombatEnduranceRegen;
/*0xbc4*/ int   MercenaryHealAmount;
/*0xbc8*/ int   MercenarySpellDamage;
/*0xbcc*/ char  PowerSourcePercent[8];
/*0xbd4*/ bool  HasMercenary;
/*0xbd8*/
};

//============================================================================
//============================================================================


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
/*0x08*/ bool               bBroadcastActive;
/*0x09*/ bool               bFadingOut;
/*0x0a*/ bool               bFadingIn;
/*0x0c*/ UINT               StartTime;
/*0x10*/ UINT               FadeInTime;
/*0x14*/ UINT               EndTime;
/*0x18*/ UINT               FadeOutTime;
/*0x1c*/ UINT               DisplayTime;
/*0x20*/ int                BroadcastColor;
/*0x24*/ int                CurrentPriority;
/*0x28*/ int                MaxAlpha;
/*0x2c*/
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
	static EQLIB_OBJECT CDistillerInfo& Instance();
	EQLIB_OBJECT int GetIDFromRecordNum(int ID, bool bWhat);
};

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

//============================================================================

#if HAS_FACTION_WINDOW

class [[offsetcomments]] FactionManagerClient
{
public:
/*0x00*/ void*         vftable;
/*0x08*/ // todo: map it

	EQLIB_OBJECT static FactionManagerClient& Instance();
	EQLIB_OBJECT void HandleFactionMessage(UINT MessageID, char* pData, unsigned int DataLength);
};

#endif

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

/*0x0000*/ Mp3Manager*        pMp3Manager;
/*0x0008*/ SoundManager*      pSoundManager;
/*0x0010*/ EmitterManager*    pEmitterManager;
/*0x0018*/ MusicManager*      pMusicManager;
/*0x0020*/ SoundAsset*        pGlobalMidiAsset;
/*0x0028*/ SoundAsset*        pOpenerMidiAsset;
/*0x0030*/ SoundAsset*        pOpenerMp3Asset;
/*0x0038*/ SoundAsset*        pDeathMp3Asset;
/*0x0040*/ SoundAsset*        pCombatMp3Asset;
/*0x0048*/ SoundAsset*        pMerchantMp3Asset;
/*0x0050*/ SoundAsset*        pZoneMidiAsset;
/*0x0058*/ SoundAsset*        pScriptMp3Asset;
/*0x0060*/ bool               bDisabled;
/*0x0064*/ int                NextMusicID;
/*0x0068*/ SoundEmitter*      pEmitters[1000];
/*0x1fa8*/ int                EmittersCount;
/*0x1fb0*/ SoundEmitter*      pRainEmitter;
/*0x1fb8*/ SoundEmitter*      pWindEmitter;
/*0x1fc0*/ int                EnvironmentHigh;
/*0x1fc4*/ int                EnvironmentLow;
/*0x1fc8*/ int                EnvironmentOutside;
/*0x1fcc*/ float              fEffectsLevel;
/*0x1fd0*/ float              fWaveVolumeLevel;
/*0x1fd4*/ // more here but i only need volume for now so...
};


namespace EQUtil
{
	EQLIB_OBJECT char* FormatCharName(char*, char*, int);
};

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

constexpr size_t EQWorldData_size = 0x1F88; // @sizeof(EQWorldData) :: 2026-02-05 (live) @ 0x14026CB26

class [[offsetcomments]] EQWorldData
{
	FORCE_SYMBOLS;

public:
	virtual ~EQWorldData() {}

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

/*0x0008*/ uint8_t                         Hour;
/*0x0009*/ uint8_t                         Minute;
/*0x000a*/ uint8_t                         Day;
/*0x000b*/ uint8_t                         Month;
/*0x000c*/ int                             Year;
/*0x0010*/ uint8_t                         LastHour;
/*0x0011*/ uint8_t                         LastMinute;
/*0x0012*/ uint8_t                         LastDay;
/*0x0013*/ uint8_t                         LastMonth;
/*0x0014*/ int                             LastYear;
/*0x0018*/ uint32_t                        LastAdvance;
/*0x0020*/ eqtime_t                        LastTime;
/*0x0028*/ uint32_t                        NextMercenaryId;
/*0x0030*/ EQZoneInfo*                     ZoneArray[MAX_ZONES];
/*0x1f70*/ HashTable<SoeUtil::String, int> ZoneNameHash;
/*0x1f88*/
};

SIZE_CHECK(EQWorldData, EQWorldData_size);

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

#if HAS_ADVANCED_LOOT

enum LootFilterOp
{
	LootFilterOp_Load = 0,
	LootFilterOp_Merge = 1,
	LootFilterOp_Replace = 2,
};

enum LootFilterType
{
	LootFilterType_AutoRoll = 0,
	LootFilterType_AlwaysNeed,
	LootFilterType_AlwaysGreed,
	LootFilterType_NeverLoot,

	LootFilterType_Max,
};

inline int LootFilterBit(LootFilterType type) { return 1 << type; }


struct [[offsetcomments]] ItemFilterData
{
/*0x00*/ int           Types;
/*0x04*/ int           ID;
/*0x08*/ int           Icon;
/*0x0c*/ char          Name[ITEM_NAME_LEN];
/*0x4c*/
};

class LootFiltersManager
{
public:
	EQLIB_OBJECT bool AddItemLootFilter(int ItemID, int IconID, const char* ItemName, int FilterTypes, bool bFromFile = false);
	EQLIB_OBJECT const ItemFilterData* GetItemFilterData(int ItemID);
	EQLIB_OBJECT bool RemoveItemLootFilter(int ItemID, int FilterTypes = 0);
	EQLIB_OBJECT bool SetItemLootFilter(int ItemID, int IconID, const char* ItemName, int FilterTypes, bool bKeepRndSetting = false, bool bScrollToIt = false);
};

#endif

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

/*0x08*/ int refCount = 1;
/*0x0c*/
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

/*0x010*/ char szName[512];
/*0x210*/ char* rawData;
/*0x218*/ int rawDataLen;
/*0x21c*/ AssetType assetType;
/*0x220*/ SoundManager* soundManager;
/*0x228*/ SoundInstance* soundInstance;
/*0x230*/ SoundAsset* pNext;
/*0x238*/
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
	eItemLoreGroup = 7,
	eRaceDescription = 8,
	eClassDescription = 9,
	eStatDescription = 10,
	eRaceName = 11,
	eRaceNamePlural = 12,
	eClassnamePlural = 13,
	eDeityDescription = 14,
	eStartingCityDescription = 15,
	eAugmentSlot = 16,
	eAltCurrencyName = 17,
	eAltCurrencyNamePlural = 18,
	eAltAbilityCategory = 19,
	eExpansionName = 20,
	eMercenaryCategory = 21,
	eMercenarySubCategory = 22,
	eMercenarySubCategoryDescription = 23,
	eMercenaryStanceName = 24,
	eMercenaryStanceDescriptionLong = 25,
	eMercenaryStanceDescriptionShort = 26,
	eSpellLineName = 27,
	eContextMenu = 28,
	// 29 does not exist
	eAlertName = 30,
	eAlertDescription = 31,

	eZoneBonusDescription = 34,
	// 35 does not exist
	eMercenaryAbilityType = 36,
	eMercenaryAbilityName = 37,
	eMercenaryAbilityDescription = 38,
	eSpellRestrictions = 39,
	eSpellStackingGroup = 40,
	eClaimFeatureDescription = 41,
	eDecal = 42,
	eClickDescription = 43,

	eFactionName = 45,
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



class CTribute
{
public:
	EQLIB_OBJECT int GetActiveFavorCost();
};
inline namespace deprecated {
	using EQMisc DEPRECATE("Use CTribute instead of EQMisc") = CTribute;
}

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


constexpr size_t SkillManager_size = 0x399C80; // @sizeof(SkillManager) :: 2026-02-05 (live) @ 0x14026CC66

class [[offsetcomments]] SkillManager
{
public:
	EQLIB_OBJECT int GetNameToken(int);
	EQLIB_OBJECT unsigned int GetSkillCap(PcZoneClient*, int level, EQClass, int skillNum, bool bIncludeItems, bool bIncludeAA, bool bIncludeBuffs);
	EQLIB_OBJECT unsigned int SkillAvailableAtLevel(int, int);
	EQLIB_OBJECT bool IsActivatedSkill(int);
	EQLIB_OBJECT unsigned int GetBaseDamage(int);
	EQLIB_OBJECT unsigned int GetReuseTime(int);
	EQLIB_OBJECT bool IsAvailable(int);
	EQLIB_OBJECT bool IsCombatSkill(int);
	EQLIB_OBJECT unsigned int GetSkillTimerDuration(int);
	EQLIB_OBJECT unsigned int GetSkillLastUsed(int);

/*0x000000*/ TSafeArrayStatic<EQ_Skill*, NUM_SKILLS> pSkill;
/*0x000320*/ int       SkillCaps[MAX_CLASSES + 1][NUM_SKILLS][MAX_PC_LEVEL + 1];
/*0x1ccbe0*/ float     SkillMods[MAX_CLASSES + 1][NUM_SKILLS][MAX_PC_LEVEL + 1];
/*0x3994a0*/ char      SkillCapsFilename[MAX_PATH];
/*0x3995a8*/ HashListSet<EQ_Skill, NUM_SKILLS> SkillHash;
/*0x3998e8*/ UINT      SkillLastUsed[NUM_SKILLS];
/*0x399a78*/ UINT      SkillTimerDuration[NUM_SKILLS];
/*0x399c08*/ UINT      CombatSkillLastUsed[CONCURRENT_SKILLS];
/*0x399c10*/ UINT      CombatSkillDuration[CONCURRENT_SKILLS];
/*0x399c18*/ bool      bSkillCanUse[NUM_SKILLS];
/*0x399c7c*/ bool      bCombatSkillCanUse[CONCURRENT_SKILLS];
/*0x399c80*/
};
using CSkillMgr = SkillManager;
using SKILLMGR = SkillManager;
using PSKILLMGR = SkillManager*;

SIZE_CHECK(SkillManager, SkillManager_size);

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


class CTargetIndicatorSettings;

struct [[offsetcomments]] CTargetIndicator
{
	FORCE_SYMBOLS;

	enum Markers
	{
		AssistMarker = 0,
		FirstMarker = 1,
		LastMarker = FirstMarker + 2,
		MarkerCount
	};

	enum ETargetType
	{
		eTrivialCon,
		eVeryEasyCon,
		eEasyCon,
		eFairlyEasyCon,
		eFairMatchCon,
		eDifficultCon,
		eDeadlyCon,
		eFreeTarget,
		eFreeTargetInvalid,
	};

/*0x00*/ bool                      bVisible;
/*0x01*/ bool                      bSettingsLoaded;
/*0x08*/ PlayerClient*             lasttarget;
/*0x10*/ PlayerClient*             MarkedTarget[MarkerCount];
/*0x30*/ bool                      IndicatorHidden;                // if this is 1 our mouse is over another window and not on the main one - shouldnt cast when this is 1
/*0x31*/ bool                      CanActivate;                    // if 0 the indicator is red if 1 its green, i.e. it can be activated.
/*0x38*/ CTargetIndicatorSettings* TargetIndicatorSettings;
/*0x40*/ CTargetIndicatorSettings* MarkerIndicatorSettings;
/*0x48*/ ETargetType               IndicatorType;
/*0x4c*/ float                     SegmentLength;
/*0x50*/ float                     ControlSegmentLength;
/*0x58*/ CThickLineInterface*      pTargetThickLine;
/*0x60*/ CThickLineInterface*      pFreeTargetThickLine;
/*0x68*/ CThickLineInterface*      pMarkerThickLine[MarkerCount];
/*0x88*/
};

using TARGETINDICATOR DEPRECATE("Use CTargetIndicator instead of TARGETINDICATOR") = CTargetIndicator;
using PTARGETINDICATOR DEPRECATE("Use CTargetIndicator* instead of PTARGETINDICATOR") = CTargetIndicator*;

struct [[offsetcomments]] STargetData
{
	FORCE_SYMBOLS;

/*0x00*/ PlayerClient* player;
/*0x08*/ float         distanceSquared;
/*0x0c*/ bool          visited;
/*0x10*/
};

// CTargetManager
class [[offsetcomments]] CTargetManager
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT static CTargetManager* Get();
	EQLIB_OBJECT void Update();

	enum { MaxTargetHistory = 10 };

/*0x000*/ STargetData  CycleNPCList[MaxTargetHistory];
/*0x0a0*/ STargetData  CyclePCList[MaxTargetHistory];
/*0x140*/ STargetData  CycleCorpseList[MaxTargetHistory];
/*0x1e0*/ uint32_t     LastTargetID;
/*0x1e4*/ uint32_t     TabTargetID;
/*0x1e8*/ uint32_t     AttackTargetID;
/*0x1ec*/ uint32_t     LastHoverUpdate;
/*0x1f0*/ uint32_t     HoverUpdateInterval;
/*0x1f4*/ uint32_t     LastFreeTargetUpdate;
/*0x1f8*/ uint32_t     FreeTargetUpdateInterval;
/*0x1fc*/ uint32_t     PreviousTargetID;
/*0x200*/ uint32_t     HoverTargetID;                    // id of the entity our cursor is over
/*0x204*/ bool         freeTargetingEnabled;
/*0x208*/ float        freeTargetingRangeSquared;
/*0x20c*/ CVector3     lastFreeTargetingPosition;
/*0x218*/ bool         lastFreeTargetingInRange;         // 0=red 1=green
/*0x21c*/
};

using TARGETMANAGER DEPRECATE("Use CTargetManager instead of TARGETMANAGER") = CTargetManager;
using PTARGETMANAGER DEPRECATE("Use CTargetManager instead of TARGETMANAGER") = CTargetManager*;


namespace UdpLibrary {

class [[offsetcomments]] UdpRefCount
{
public:
	virtual void AddRef();
	virtual void Release();
	virtual void NoRef();
	virtual int GetRefCount() const;

	virtual ~UdpRefCount();

/*0x08*/ int m_refCount;
/*0x0c*/ bool m_noRef;
/*0x10*/
};

struct UdpPlatformGuardData;

class [[offsetcomments]] UdpPlatformGuardObject
{
public:
	EQLIB_OBJECT void Enter() const;
	EQLIB_OBJECT void Leave() const;

/*0x00*/ UdpPlatformGuardData* m_data;
/*0x08*/
};

class [[offsetcomments]] UdpGuardedRefCount : public UdpRefCount
{
public:
/*0x10*/ UdpPlatformGuardObject m_guard;
/*0x18*/
};

class [[offsetcomments]] UdpGuard
{
public:
	UdpGuard(const UdpPlatformGuardObject* guard)
		: m_guard(guard)
	{
		m_guard->Enter();
	}

	~UdpGuard()
	{
		m_guard->Leave();
	}

	UdpGuard(const UdpGuard&) = delete;
	UdpGuard& operator=(const UdpGuard&) = delete;

private:
/*0x00*/ const UdpPlatformGuardObject* m_guard;
/*0x08*/
};

struct [[offsetcomments]] UdpConnectionStatistics
{
/*0x00*/ int64_t totalBytesSent;
/*0x08*/ int64_t totalBytesReceived;
/*0x10*/ int64_t totalPacketsSent;
/*0x18*/ int64_t totalPacketsReceived;
/*0x20*/ int64_t crcRejectedPackets;
/*0x28*/ int64_t orderRejectedPackets;
/*0x30*/ int64_t outOfOrderPacketsReceived;
/*0x38*/ int64_t duplicatePacketsReceived;
/*0x40*/ int64_t outOfRangePacketsReceived;
/*0x48*/ int64_t resentPacketsAccelerated;
/*0x50*/ int64_t resentPacketsTimedOut;
/*0x58*/ int64_t applicationPacketsSent;
/*0x60*/ int64_t applicationPacketsReceived;
/*0x68*/ int64_t iterations;
/*0x70*/ int64_t corruptPacketErrors;
/*0x78*/ int32_t masterPingAge;
/*0x7c*/ int32_t masterPingTime;
/*0x80*/ int32_t averagePingTime;
/*0x84*/ int32_t lowPingTime;
/*0x88*/ int32_t highPingTime;
/*0x8c*/ int32_t lastPingTime;
/*0x90*/ int32_t reliableAveragePing;
/*0x98*/ int64_t syncOurSent;
/*0xa0*/ int64_t syncOurReceived;
/*0xa8*/ int64_t syncTheirSent;
/*0xb0*/ int64_t syncTheirReceived;
/*0xb8*/ float percentSentSuccess;
/*0xbc*/ float percentReceivedSuccess;
/*0xc0*/
};

using UdpClockStamp = uint64_t;


class UdpMisc
{
public:
	static int ClockDiff(UdpClockStamp start, UdpClockStamp stop)
	{
		UdpClockStamp diff = stop - start;

		return diff > INT_MAX ? INT_MAX : static_cast<int>(diff);
	}
};

class [[offsetcomments]] UdpManager : public UdpGuardedRefCount
{
public:
	UdpClockStamp CachedClock() const
	{
		UdpGuard udpGuard(&m_cachedClockGuard);
		return m_cachedClock;
	}

	int CachedClockElapsed(UdpClockStamp start) const
	{
		return UdpMisc::ClockDiff(start, CachedClock());
	}

protected:
/*0x000*/ // vftable
/*0x018*/ uint8_t                    Unknown0x0000[0x2f8 - 0x18];
/*0x2f8*/ UdpClockStamp              m_cachedClock;
/*0x300*/ UdpPlatformGuardObject     m_cachedClockGuard;
/*0x308*/
};

enum UdpChannel
{
	cUdpChannelUnreliable,
	cUdpChannelUnreliableUnbuffered,
	cUdpChannelOrdered,
	cUdpChannelOrderedUnbuffered,
	cUdpChannelReliable1,
	cUdpChannelReliable2,
	cUdpChannelReliable3,
	cUdpChannelReliable4,
	cUdpChannelCount
};

class [[offsetcomments]] UdpConnection : public UdpGuardedRefCount
{
public:
	EQLIB_OBJECT void GetStats(UdpConnectionStatistics* stats);

	EQLIB_OBJECT bool Send(UdpChannel, const void* data, int dataLength);

	UdpClockStamp CachedClock() const
	{
		if (m_udpManager)
		{
			return m_udpManager->CachedClock();
		}

		return m_disconnectTime;
	}

	int CachedClockElapsed(UdpClockStamp start) const
	{
		return UdpMisc::ClockDiff(start, CachedClock());
	}

	int GetLastReceiveTime() const
	{
		UdpGuard udpGuard(&m_guard);

		return CachedClockElapsed(m_lastReceiveTime);
	}

	int GetAveragePing() const
	{
		UdpGuard udpGuard(&m_guard);

		return m_stats.averagePingTime;
	}

	float GetConnectionStrength() const
	{
		int f = std::max<int>(GetLastReceiveTime() - 500, 0);
		return 1.0f - static_cast<float>(f) / 180000;
	}

/*0x0000*/ // vftable
/*0x018*/ uint8_t                   Unknown[0xe0 - 0x18];
/*0x0e0*/ UdpManager*               m_udpManager;
/*0x0e8*/ uint8_t                   Unknown0x00e8[0x8];
/*0x0f0*/ UdpConnectionStatistics   m_stats;
/*0x1b0*/ uint8_t                   Unknown0x01b0[0x238 - 0x1b0];
/*0x238*/ UdpClockStamp             m_lastSendTime;
/*0x240*/ UdpClockStamp             m_lastReceiveTime;
/*0x248*/ uint8_t                   Unknown0x0248[0x18];
/*0x260*/ UdpClockStamp             m_disconnectTime;
/*0x268*/ uint8_t                   Unknown0x0268[0x2e0 - 0x268];
/*0x2e0*/ UdpPlatformGuardObject    m_guard;
/*0x2e8*/

	// compatibility shim
	__declspec(property(get = GetAveragePing)) int Last;
};

class UdpConnectionHandler
{
public:
	virtual ~UdpConnectionHandler() {}
	virtual void OnRoutePacket(UdpConnection* connection, uint8_t* data, uint32_t dataLength) {}
	virtual void OnConnectionComplete(UdpConnection* connection) {}
	virtual void OnTerminated(UdpConnection* connection) {}
	virtual void OnCrcReject(UdpConnection* connection, uint8_t* data, uint32_t dataLength) {}
	virtual void OnPacketCorrupt(UdpConnection* connection, uint8_t* data, uint32_t dataLength, int reason) {}
};


} // namespace UdpLibrary

inline namespace deprecated {
	using connection_t DEPRECATE("Use UdpLibrary::UdpConnection instead of connection_t") = UdpLibrary::UdpConnection;
}

//----------------------------------------------------------------------------

} // namespace eqlib

#if __has_include("../../../../private/EQClasses-private.h")
#include "../../../../private/EQClasses-private.h"
#endif
