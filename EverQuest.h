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
#include "EQData.h"
#include "Items.h"
#include "Spells.h"


namespace eqlib {

//============================================================================
// ZoneHeader
//============================================================================

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

// size of zoneHeader is the distance from this byte to the zoneHeader
// @sizeof(zoneHeader) == 0x2a4 :: 2022-04-14 (test) @ 0x1401A8E87
constexpr size_t zoneHeader_size = 0x2a4;

struct [[offsetcomments]] zoneHeader
{
/*0x000*/ char         ShortName[128];
/*0x080*/ char         LongName[128];
/*0x100*/ char         WeatherType[32];
/*0x120*/ char         WeatherTypeOverride[32];
/*0x140*/ char         SkyType[32];
/*0x160*/ char         SkyTypeOverride[32];
/*0x180*/ EOutDoor     OutDoor;
/*0x184*/ int          ZoneID;                    // unique "design" id for this zone
/*0x188*/ float        ZoneExpModifier;
/*0x18c*/ int          GroupLvlExpRelated;
/*0x190*/ int          FilterID;
/*0x194*/ int          Unknown1;
/*0x198*/ float        FogDensity;
/*0x19c*/ float        FogStart[4];
/*0x1ac*/ float        FogEnd[4];
/*0x1bc*/ uint8_t      FogRed[4];
/*0x1c0*/ uint8_t      FogGreen[4];
/*0x1c4*/ uint8_t      FogBlue[4];
/*0x1c8*/ uint8_t      RainChance[4];
/*0x1cc*/ uint8_t      RainDuration[4];
/*0x1d0*/ uint8_t      SnowPercentage[4];
/*0x1d4*/ uint8_t      SnowChance[4];
/*0x1d8*/ uint8_t      PrecipitationType;
/*0x1dc*/ float        BloomIntensity;
/*0x1e0*/ float        ZoneGravity;
/*0x1e4*/ int          LavaDamage;
/*0x1e8*/ int          MinLavaDamage;
/*0x1ec*/ int          TimeStringID;
/*0x1f0*/ int          Unknown3;
/*0x1f4*/ int          SkyLock;
/*0x1f8*/ int          SkyLockOverride;
/*0x1fc*/ float        SafeYLoc;
/*0x200*/ float        SafeXLoc;
/*0x204*/ float        SafeZLoc;
/*0x208*/ float        SafeHeading;
/*0x20c*/ float        Ceiling;
/*0x210*/ float        Floor;
/*0x214*/ float        MinClip;
/*0x218*/ float        MaxClip;
/*0x21c*/ int          FallThroughWorldTeleportID;
/*0x220*/ int          Unknown4;
/*0x224*/ int          ScriptIDHour;
/*0x228*/ int          ScriptIDMinute;
/*0x22c*/ int          ScriptIDTick;
/*0x230*/ int          ScriptIDOnPlayerDeath;
/*0x234*/ int          ScriptIDOnNPCDeath;
/*0x238*/ int          ScriptIDPlayerEnteringZone;
/*0x23c*/ int          ScriptIDOnZonePop;
/*0x240*/ int          ScriptIDNPCLoot;
/*0x244*/ int          Unknown4b;
/*0x248*/ int          ScriptIDOnFishing;
/*0x24c*/ int          ScriptIDOnForage;
/*0x250*/ int          Unknown4c;
/*0x254*/ int          NPCAgroMaxDist; //the distance needed for an npc to lose agro after an attack
/*0x258*/ int          ForageLow;
/*0x25c*/ int          ForageMedium;
/*0x260*/ int          ForageHigh;
/*0x264*/ int          ForageSpecial;
/*0x268*/ int          FishingLow;
/*0x26c*/ int          FishingMedium;
/*0x270*/ int          FishingHigh;
/*0x274*/ int          FishingRelated;
/*0x278*/ EPlace       CanPlaceCampsite;
/*0x27c*/ EPlace       CanPlaceGuildBanner;
/*0x280*/ int          Unknown4d;
/*0x284*/ int          FastRegenHP;
/*0x288*/ int          FastRegenMana;
/*0x28c*/ int          FastRegenEndurance;
/*0x290*/ bool         NewEngineZone;
/*0x291*/ bool         SkyEnabled;
/*0x292*/ bool         FogOnOff;
/*0x293*/ bool         ClimateType;
/*0x294*/ bool         bNoPlayerLight;
/*0x295*/ bool         bUnknown5;
/*0x296*/ bool         bNoAttack;
/*0x297*/ bool         bAllowPVP;
/*0x298*/ bool         bNoEncumber;
/*0x299*/ bool         bUnknowns6[2];
/*0x29b*/ bool         bNoLevitate;
/*0x29c*/ bool         bNoBuffExpiration;
/*0x29d*/ bool         bDisallowManaStone;
/*0x29e*/ bool         bNoBind;
/*0x29f*/ bool         bNoCallOfTheHero;
/*0x2a0*/ bool         bUnknown8;
/*0x2a1*/ bool         bNoFear;
/*0x2a2*/ bool         bUnknown9;
/*0x2a4*/

	// these need to be figured out:
// /*0x219*/ char         ZoneTimeZone;   //in hours from worldserver, can be negative
// /*0x268*/ uint32_t     GraveyardTimer; //minutes until corpse(s) pops to graveyard
// /*0x28c*/ int          ScriptIDAdventureFailed;
// /*0x290*/ int          CanExploreTasks;
// /*0x324*/ float        WeatherChangeTime;
// /*0x338*/ int          ScriptNPCReceivedanItem;
// /*0x33c*/ bool         bCheck;
// /*0x340*/ int          ScriptIDSomething;
// /*0x344*/ int          ScriptIDSomething2;
// /*0x348*/ int          ScriptIDSomething3;
// /*0x35c*/ bool         bNoFlux;
// /*0x380*/ bool         bNoMercenaries;
// /*0x3a8*/
};
using ZONEINFO = zoneHeader;
using PZONEINFO = ZONEINFO*;

SIZE_CHECK(zoneHeader, zoneHeader_size);

class _EverQuestinfo
{
public:
	void EQLIB_OBJECT SetAutoAttack(bool);
};

struct LfgGroupStatus;
struct LfgGroupQuery;
struct LfgPlayerStatus;
struct LfgPlayerQuery;
struct connection_t;

enum ZONE_REQ_STATUS {};
enum ZONE_REQ_REASON {};

struct [[offsetcomments]] UsingSkill
{
/*0x00*/ int       Skill;
/*0x08*/ void*     Target;
/*0x10*/
};
using USINGSKILL = UsingSkill;
using PUSINGSKILL = USINGSKILL*;


class [[offsetcomments]] FreeTargetTracker
{
public:
	EQLIB_OBJECT int CastSpell(const CVector3& pos);

/*0x00*/ int             slot;           // the gem the spell below is memmed in... 0-11
/*0x08*/ PSPELL          spell;
/*0x10*/ ItemGlobalIndex itemLocation;
/*0x1c*/ ItemSpellTypes  itemSpellType;
/*0x20*/ float           rangeSquared;
/*0x24*/ bool            cursorVisible;
/*0x28*/
};

using CTargetRing DEPRECATE("Use FreeTargetTracker instead of CTargetRing") = CTargetRing;


#pragma pack(push, 1)
// fixme x64
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
using pEQSuccessfulHit DEPRECATE("Use EQSuccessfulHit* instead of pEQSuccessfulHit") = EQSuccessfulHit*;

struct [[offsetcomments]] EQSuccessfulHeal
{
/*0x00*/ uint16_t      HealedID; // Spawn that was healed
/*0x02*/ uint16_t      HealerID; // Spawn who did the healing
/*0x04*/ int           SpellID;
/*0x08*/ int           ActualHeal; // Amount that was actually healed
/*0x0c*/ int           TotalHeal; // Amount that would have been healed if it didn't go over max HP
/*0x10*/ uint32_t      EffectBitmask;
/*0x14*/
};
using pEQSuccessfulHeal DEPRECATE("Use EQSuccessfulHeal* instead of pEQSuccessfulHeal") = EQSuccessfulHeal*;

//============================================================================
// EverQuestInfo
//============================================================================

enum eKeyboardMode
{
	Typing,
	KBM_Command,
};

struct [[offsetcomments]] EverQuestinfo
{
	FORCE_SYMBOLS

/*0x000*/ HWND              Wnd;
/*0x008*/ HINSTANCE         hInst;
/*0x010*/ int               Render_MinX;
/*0x014*/ int               Render_MinY;
/*0x018*/ int               Render_MaxX;
/*0x01c*/ int               Render_MaxY;
/*0x020*/ int               Render_XScale;
/*0x024*/ int               Render_YScale;
/*0x028*/ int               Render_WidthScale;
/*0x02c*/ int               Render_HeightScale;
/*0x030*/ bool              ReadyEnterWorld;
/*0x031*/ bool              InsideDoMainWhileLoop;
/*0x034*/ uint32_t          Command;
/*0x038*/ uint8_t           SoloMode;
/*0x03c*/ int               ScreenXRes;
/*0x040*/ int               ScreenYRes;
/*0x044*/ bool              FullscreenMode;
/*0x048*/ eKeyboardMode     KeyboardMode;
/*0x04c*/ uint8_t           Runmode;
/*0x04d*/ uint8_t           MouseCntrl;
/*0x04e*/ uint8_t           MouseActive;
/*0x04f*/ uint8_t           ForceCrouch;
/*0x050*/ UINT              ForceCrouchTimer;
/*0x054*/ float             friction;
/*0x058*/ float             afriction;
/*0x05c*/ int               MouseX;
/*0x060*/ int               MouseY;
/*0x064*/ int               MouseZ;
/*0x068*/ int               Lastmx;
/*0x06c*/ int               Lastmy;
/*0x070*/ bool              MouseInClientRect;
/*0x074*/ int               MXSensitivity;
/*0x078*/ int               MYSensitivity;
/*0x07c*/ int               MousePointerSpeedMod;
/*0x080*/ uint8_t           CurrentChan;
/*0x084*/ int               CurrentLang;
/*0x088*/ char              TellTarget[64];
/*0x0c8*/ uint32_t          LastMinute;
/*0x0cc*/ uint8_t           MInverse;
/*0x0cd*/ uint8_t           MouseLook;
/*0x0ce*/ bool              bDefaultMouseLook;
/*0x0cf*/ uint8_t           Strafe;
/*0x0d0*/ bool              bNetstat;
/*0x0d1*/ uint8_t           ModInventory;
/*0x0d4*/ uint32_t          LastHitter;
/*0x0d8*/ uint8_t           Harmless;
/*0x0d9*/ uint8_t           Silenced;
/*0x0dc*/ uint32_t          EventJump;
/*0x0e0*/ uint32_t          LastJump;
/*0x0e4*/ uint32_t          FrameTime;
/*0x0e8*/ int               AutoRun;
/*0x0ec*/ uint32_t          PoisonTimer;
/*0x0f0*/ ItemGlobalIndex   PoisonGI;
/*0x0fc*/ uint8_t           OldMouseButtons[8];
/*0x104*/ uint8_t           MouseButtons[8];
/*0x10c*/ bool              bIsMouseRightHanded;
/*0x10d*/ int8_t            EncumberStatus;
/*0x10e*/ char              PendingCharacterName[64];
/*0x14e*/ bool              TutorialMode;
/*0x150*/ uint32_t          RMouseDown;
/*0x154*/ uint32_t          LMouseDown;
/*0x158*/ char              Snooper[64];
/*0x198*/ uint32_t          DuelTarget;
/*0x19c*/ uint32_t          DuelMe;
/*0x1a0*/ uint8_t           DuelOn;
/*0x1a4*/ uint32_t          AutoHelp;
/*0x1a8*/ uint32_t          LastLocalUpdate;
/*0x1ac*/ int               SavedPC;
/*0x1b0*/ int               InfraRed;
/*0x1b4*/ int               InfraGreen;
/*0x1b8*/ int               InfraBlue;
/*0x1bc*/ int               UltraRed;
/*0x1c0*/ int               UltraGreen;
/*0x1c4*/ int               UltraBlue;
/*0x1c8*/ int               globalOffset;
/*0x1cc*/ uint32_t          ExitCounter;
/*0x1d0*/ uint32_t          ExitStart;
/*0x1d4*/ uint32_t          ForcedExitCounter;
/*0x1d8*/ uint32_t          OfflineModeRequestTime;
/*0x1dc*/ float             CampY;
/*0x1e0*/ float             CampX;
/*0x1e4*/ float             CampZ;
/*0x1e8*/ long              MyY;
/*0x1ec*/ long              MyX;
/*0x1f0*/ long              MyZ;
/*0x1f4*/ zoneHeader        ZoneInfo;
/*0x498*/ bool              ZDefined;
/*0x49c*/ int               TrackPlayers;
/*0x4a0*/ bool              bTrackMercs;
/*0x4a1*/ bool              bTrackPets;
/*0x4a4*/ int               iTrackSortType;
/*0x4a8*/ int               iTrackFilterType;
/*0x4b0*/ UsingSkill        UsingSkill;
/*0x4c0*/ int               LimboMoney[4];
/*0x4d0*/ uint32_t          LimboMoneyBonus;
/*0x4d4*/ uint8_t           ClickThroughMask;
/*0x4d5*/ bool              ReceivedWorldObjects;
/*0x4d6*/ bool              screenCapture;
/*0x4d7*/ bool              screenShare;
/*0x4d8*/ float             SavedViewPitch;
/*0x4dc*/ bool              SendPcReceived;
/*0x4e0*/ int               WeatherReceived;
/*0x4e4*/ bool              bIsPressedShift;
/*0x4e5*/ bool              bIsPressedLShift;
/*0x4e6*/ bool              bIsPressedRShift;
/*0x4e7*/ bool              bIsPressedControl;
/*0x4e8*/ bool              bIsPressedLControl;
/*0x4e9*/ bool              bIsPressedRControl;
/*0x4ea*/ bool              bIsPressedAlt;
/*0x4eb*/ bool              bIsPressedLAlt;
/*0x4ec*/ bool              bIsPressedRAlt;
/*0x4f0*/ int               Currkeypress;
/*0x4f4*/ int               Rateup;
/*0x4f8*/ int               Ratedown;
/*0x4fc*/ int               Rateleft;
/*0x500*/ int               Rateright;
/*0x504*/ int               RaceWar;
/*0x508*/ int               Ruleset;
/*0x50c*/ bool              bRpServer;
/*0x50d*/ bool              bAcceleratedServer;
/*0x50e*/ bool              bProgressionServer;
/*0x510*/ int               ProgressionOpenExpansions;             // EQExpansionOwned
/*0x514*/ bool              bHeroicCharacterFlag;
/*0x518*/ int               ProgressionLevelCap;                   // Level Cap for Vaniki server
/*0x51c*/ bool              bIsDevServer;
/*0x51d*/ bool              bIsBetaServer;
/*0x51e*/ bool              bIsTestServer;
/*0x51f*/ bool              bIsStageServer;
/*0x520*/ bool              bUseMailSystem;
/*0x521*/ bool              bIsEscapeServer;
/*0x522*/ bool              bIsTutorialEnabled;
/*0x523*/ bool              bHeroicCharacterRelated;               // not sure, but seems heroic character related
/*0x524*/ bool              bCanCreateHeadStartCharacter;
/*0x525*/ bool              bCanCreateHeroicCharacter;
/*0x528*/ int               nMonthlyClaim;                         // maybe, needs verification.
/*0x52c*/ bool              MarketPlaceRelated;                    // also maybe, related to marketplace
/*0x530*/ int               HeroicSlots;
/*0x534*/ bool              bAutoIdentify;
/*0x535*/ bool              bNameGen;
/*0x536*/ bool              bGibberish;
/*0x538*/ int               Locale;
/*0x53c*/ uint8_t           UpdateControlled;
/*0x53d*/ uint8_t           UpdateLocal;
/*0x53e*/ uint8_t           EnterZone;
/*0x53f*/ uint8_t           ExitGame;
/*0x540*/ int               EnterZoneReason;
/*0x544*/ bool              UseVoiceMacros;
/*0x548*/ float             StrafeRate;
/*0x54c*/ float             moveDownSpeed;
/*0x550*/ char              motd[1024]; // FIXME: Continue adjusting from here
/*0x950*/ int               hideAFK;
/*0x954*/ int               hideAFKPets;
/*0x958*/ int               hideAFKMercs;
/*0x95c*/ bool              bAutoAFKOn;
/*0x95d*/ bool              bAutoAFKOff;
/*0x95e*/ bool              bIgnoreNumLockState;
/*0x95f*/ bool              bAutoMercPassive;
/*0x960*/ bool              bDisplayMOTD;
/*0x964*/ uint32_t          bDoGuildMOTD;
/*0x968*/ uint8_t           bIgnorePR;
/*0x969*/ bool              bFastCamp;
/*0x96a*/ bool              bAdvLootGroupedByNPC;
/*0x96c*/
// theres still a lot more here
};
using EVERQUESTINFO = EverQuestinfo;
using PEVERQUESTINFO = EVERQUESTINFO*;

//============================================================================
// CEverQuest
//============================================================================

struct MQMouseInfo
{
	int X = 0;
	int Y = 0;
	char szLoginName[128]; // Don't ask
	int SpeedX = 0;
	int SpeedY = 0;
	int Scroll = 0;
};

inline namespace deprecated {
	using MOUSEINFO DEPRECATE("Use MQMouseInfo instead of MOUSEINFO") = MQMouseInfo;
	using PMOUSEINFO DEPRECATE("Use MQMouseInfo* instead PMOUSEINFO") = MQMouseInfo*;
}

class [[offsetcomments]] PickZoneTimerHandler
{
public:
	struct PickZoneRecord
	{
		CXStr  ZoneName;
		int    Time;
	};

/*0x00*/ SoeUtil::Array<PickZoneRecord> Records;
/*0x18*/
};

struct [[offsetcomments]] PetitionStatus
{
/*0x00*/ int           ID;
/*0x04*/ int           Priority;
/*0x08*/ int           State;
/*0x0c*/ DWORD         ArrivalTime;
/*0x10*/ char          User[0x20];
/*0x30*/ char          Player[0x40];
/*0x70*/ int           NumActive;
/*0x74*/ char          Player2[0x40];
/*0xb4*/ DWORD         TimeStamp;
/*0xb8*/
};

inline namespace deprecated {
	using PPETITIONSTATUS DEPRECATE("Use PetitionStatus* instead of PPETITIONSTATUS") = PetitionStatus*;
	using PETITIONSTATUS DEPRECATE("Use PetitionStatus instead of PETITIONSTATUS") = PetitionStatus;
}

struct [[offsetcomments]] CSINFO
{
	/*0x000*/ char         Name[0x40];
	/*0x040*/ int          Class;
	/*0x044*/ int          Race;
	/*0x048*/ BYTE         Level;
	/*0x04c*/ int          Class2;
	/*0x050*/ int          Race2;
	/*0x054*/ int          CurZoneID;
	/*0x058*/ BYTE         Sex;
	/*0x059*/ BYTE         Face;
	/*0x05c*/ ArmorProperties ArmProp[9];
	/*0x110*/ DWORD        Tint[9];
	/*0x134*/ char         TextureType;
	/*0x135*/ char         ArmorMaterial;
	/*0x136*/ char         ArmorVariation;
	/*0x137*/ char         HeadType;
	/*0x138*/ int          TattooIndex;
	/*0x13c*/ int          FacialAttachmentIndex;
	/*0x140*/ int          Deity;
	/*0x144*/ int          PrimActor;
	/*0x148*/ int          SecdActor;
	/*0x14c*/ BYTE         HairColor;
	/*0x14d*/ BYTE         BeardColor;
	/*0x14e*/ BYTE         LeftEye;
	/*0x14f*/ BYTE         RightEye;
	/*0x150*/ BYTE         Hair;
	/*0x151*/ BYTE         Beard;
	/*0x152*/ bool         bCanGoHome;
	/*0x153*/ bool         bCanTutorial;
	/*0x154*/ int          ParentId;
	/*0x158*/ bool         bTooHighLevel;
	/*0x159*/ bool         bPreFTP;
	/*0x15c*/ long         SomethingLogin;
	/*0x160*/ bool         bUseable;
	/*0x161*/ bool         bHeroicCharacter;
	/*0x162*/ bool         bShrouded;
	/*0x164*/ int          Unknown0x164;
	/*0x168*/ int          Unknown0x168;
	/*0x16c*/ int          Unknown0x16c;
	/*0x170*/
};

inline namespace deprecated {
	using PCSINFO DEPRECATE("Use CSINFO* instead of PCSINFO") = CSINFO*;
}

//============================================================================

class CEverQuestBase
{
public:
	virtual ~CEverQuestBase() {}
};


// @sizeof(CEverQuest) == 0x396F8 :: 2022-04-14 (test) @ 0x1402EA300
constexpr size_t CEverQuest_size = 0x396F8;

class [[offsetcomments]] CEverQuest : public CEverQuestBase, public UniversalChatProxyHandler, public PopDialogHandler
{
public:
	CEverQuest(HWND);
	~CEverQuest();

	EQLIB_OBJECT void CreateTargetIndicator(int Slot, EQ_Spell* pSpell, const ItemGlobalIndex& ItemLoc, ItemSpellTypes spelltype);
	EQLIB_OBJECT void DeleteTargetIndicator();

	EQLIB_OBJECT bool IsInTypingMode();
	EQLIB_OBJECT bool IsOkToTransact();
	EQLIB_OBJECT bool ReadClientINIBool(char*, char*, bool);
	EQLIB_OBJECT bool ReadUIINIBool(char*, char*, bool);
	EQLIB_OBJECT char* GetBodyTypeDesc(int);
	EQLIB_OBJECT const char* GetClassDesc(EQClass);
	EQLIB_OBJECT char* GetClassThreeLetterCode(EQClass);
	EQLIB_OBJECT char* GetDeityDesc(int);
	EQLIB_OBJECT char* GetInnateDesc(int);
	EQLIB_OBJECT char* GetItemClassDesc(int);
	EQLIB_OBJECT char* GetLangDesc(int);
	EQLIB_OBJECT const char* GetRaceDesc(EQRace);
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
	EQLIB_OBJECT void DoPercentConvert(char* line, bool bOutGoing);
	EQLIB_OBJECT void DoSplit(char*);
	EQLIB_OBJECT void DoTellWindow(char*, char*, char*, void*, int, bool);
	EQLIB_OBJECT void OutputTextToLog(const char* Text);
	EQLIB_OBJECT void doUnInvite(char*);
	EQLIB_OBJECT void DropHeldItemOnGround(int);
	EQLIB_OBJECT void DropHeldMoneyOnGround(int);
	EQLIB_OBJECT void DropItemOrMoneyOnPlayer(PlayerClient*);
	EQLIB_OBJECT void dsp_chat(const char*);
	EQLIB_OBJECT void dsp_chat(const char* line, int color = 273, bool bLogIsOk = true, bool bConvertPercent = true, char* SomeStr = NULL);
	EQLIB_OBJECT void dsp_chat(const char*, int, bool);
	EQLIB_OBJECT void Emote();
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


public:

/*0x00000*/ // CEverQuest::`vftable'{for `CEverQuestBase'}
/*0x00008*/ // CEverQuest::`vftable'{for `UniversalChatProxyHandler'}
/*0x00010*/ // CEverQuest::`vftable'{for `PopDialogHandler'}
/*0x00018*/ UniversalChatProxy*   currentChatServerApi;
/*0x00020*/ bool                  alreadyAutoJoined;
/*0x00028*/ int64_t               chatNotificationStamp;
/*0x00030*/ char                  ucpAddress[128];
/*0x000b0*/ int                   ucpPort;
/*0x000b4*/ char                  ucpPlayerName[256];
/*0x001b4*/ char                  ucpTicket[256];
/*0x002b8*/ UniversalChatProxy*   chatService;
/*0x002c0*/ int64_t               ucNotificationStamp;
/*0x002c8*/ bool                  ucNotificationEntering;
/*0x002c9*/ char                  ucNotificationPlayerName[256];
/*0x003c9*/ char                  ucNotificationChannelName[10][48];
/*0x005ac*/ DWORD                 ucNotificationChannelNumber[10];
/*0x005d4*/ int                   ucNotificationCount;
/*0x005d8*/ FreeTargetTracker*    freeTargetTracker;
/*0x005e0*/ int                   WorldState;                   // 0 everything is fine, 1 we are getting disconnected 2 player not released from zone
/*0x005e4*/ int                   GameState;
/*0x005e8*/ bool                  bStopAreaProcessing;
/*0x005e9*/ bool                  bRAFEnabled;
/*0x005ec*/ int                   ClientOutOfDate;
/*0x005f0*/ int64_t               ServerTimeSync;
/*0x005f8*/ int64_t               ServerTimeBase;
/*0x00600*/ int64_t               ServerTimeLastReported;
/*0x00608*/ bool                  bServerTimeHasWrapped;
/*0x0060c*/ float                 TargetCameraDistance;
/*0x00610*/ bool                  bUnknown0x5f0;
/*0x00614*/ int                   TotalCharacterSlots;
/*0x00618*/ int                   MarketplaceCharacterSlots;
/*0x0061c*/ bool                  Unknown0x604;
/*0x00620*/ int                   Unknown0x608;
/*0x00624*/ bool                  Unknown0x60c;
/*0x00628*/ CPopDialogWnd*        CampDialog;
/*0x00630*/ PickZoneTimerHandler  pickZoneTimerHandler;
/*0x00648*/ PetitionStatus        petitionStatus[0x200];
/*0x17648*/ int                   TotalQ;
/*0x1764c*/ int                   TotalClientPetitions;
/*0x17650*/ char                  ChatText[2112];
/*0x17e90*/ int                   TrimIdx;
/*0x17e94*/ char                  ChatChanged;
/*0x17e95*/ char                  Trim[64][2112];
/*0x38e98*/ int                   chat;
/*0x38e9c*/ int                   disconnected;
/*0x38ea0*/ int                   Red;
/*0x38ea4*/ int                   Green;
/*0x38ea8*/ int                   Blue;
/*0x38eb0*/ ArrayClass<CSINFO>    charSelectPlayerArray;
/*0x38ec8*/ char                  Filler[0x830]; // more data
/*0x396f8*/

	ALT_MEMBER_GETTER(UniversalChatProxy*, chatService, ChatService);
};

inline namespace deprecated {
	using _EVERQUEST DEPRECATE("Use EVERQUEST instead of _EVERQUEST") = CEverQuest;
	using PEVERQUEST DEPRECATE("Use EVERQUEST* instead of PEVERQUEST") = CEverQuest*;
}
using EVERQUEST = CEverQuest;

SIZE_CHECK(CEverQuest, CEverQuest_size);

} // namespace eqlib
