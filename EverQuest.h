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
/*0x18c*/ int          FilterID;
/*0x18c*/ int          Unknown1;
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
/*0x2a1*/ bool         bUnknown9;
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
/*0x000*/ HWND       Wnd;
/*0x008*/ HINSTANCE  hInst;
/*0x010*/ int        Render_MinX;
/*0x014*/ int        Render_MinY;
/*0x018*/ int        Render_MaxX;
/*0x01c*/ int        Render_MaxY;
/*0x020*/ int        Render_XScale;
/*0x024*/ int        Render_YScale;
/*0x028*/ int        Render_WidthScale;
/*0x02c*/ int        Render_HeightScale;
/*0x030*/ int        ReadyEnterWorld;
/*0x034*/ bool       InsideDoMainWhileLoop;
/*0x038*/ int        Hidden;
/*0x03c*/ DWORD      Displayflags;
/*0x040*/ DWORD      Command;
/*0x044*/ BYTE       SoloMode;
/*0x048*/ int        ScreenXRes;
/*0x04c*/ int        ScreenYRes;
/*0x050*/ int        WindowXOffset;
/*0x054*/ int        WindowYOffset;
/*0x058*/ bool       FullscreenMode;
/*0x05c*/ eKeyboardMode KeyboardMode;
/*0x060*/ BYTE       Runmode;                  // dont EVER set this to something > 1 unless you WANT to get banned.
/*0x061*/ BYTE       Unknown0x00059;
/*0x062*/ BYTE       Unknown0x0005a;
/*0x063*/ BYTE       MouseCntrl;
/*0x064*/ BYTE       MouseActive;
/*0x065*/ BYTE       ForceCrouch;
/*0x068*/ UINT       ForceCrouchTimer;
/*0x06c*/ float      Unknown0x00064;
/*0x070*/ float      Unknown0x00068;
/*0x074*/ int        MouseX;
/*0x078*/ int        MouseY;
/*0x07c*/ int        MouseZ;
/*0x080*/ int        Lastmx;
/*0x084*/ int        Lastmy;
/*0x088*/ bool       MouseInClientRect;
/*0x08c*/ int        MXSensitivity;
/*0x090*/ int        MYSensitivity;
/*0x094*/ int        MousePointerSpeedMod;
/*0x098*/ int        IsTrader;
/*0x09c*/ BYTE       CurrentChan;
/*0x0a0*/ int        CurrentLang;
/*0x0a4*/ char       TellTarget[0x40];
/*0x0e4*/ UINT       LastMinute;
/*0x0e8*/ UINT       LastLocal;
/*0x0ec*/ UINT       LastControlled;
/*0x0f0*/ BYTE       MInverse;
/*0x0f1*/ BYTE       Unknown0x000ed;
/*0x0f2*/ BYTE       MouseLook;
/*0x0f3*/ bool       bDefaultMouseLook;
/*0x0f4*/ BYTE       Strafe;
/*0x0f5*/ bool       bNetstat;
/*0x0f6*/ BYTE       ModInventory;
/*0x0f8*/ UINT       LastHitter;
/*0x0fc*/ BYTE       Harmless;
/*0x0fd*/ BYTE       Silenced;
/*0x100*/ UINT       JumpTimer;
/*0x104*/ UINT       EventJump;
/*0x108*/ UINT       LastJump;
/*0x10c*/ UINT       FrameTime;
/*0x110*/ int        AutoRun;
/*0x114*/ UINT       PoisonTimer;
/*0x118*/ ItemGlobalIndex PoisonGI;
/*0x124*/ int        OldX;
/*0x128*/ int        OldY;
/*0x12c*/ BYTE       OldMouseButtons[8];
/*0x134*/ BYTE       MouseButtons[8];
/*0x13c*/ bool       bIsMouseRightHanded;
/*0x140*/ int        Unknown0x0013c;
/*0x144*/ int        CharStatePending;
/*0x148*/ char       PendingCharacterName[0x40];
/*0x188*/ int        TutorialMode;
///*0x18c*/ int        RMouseSecond;               // __RMouseHeldTime
///*0x190*/ int        LMouseSecond;               // __LMouseHeldTime
/*0x194*/ UINT       RMouseDown;
/*0x198*/ UINT       LMouseDown;
/*0x19c*/ char       Unknown0x00198[0x40]; // fixme x64
/*0x1dc*/ UINT       DuelTarget;
/*0x1e0*/ UINT       DuelMe;
/*0x1e4*/ BYTE       DuelOn;
/*0x1e8*/ UINT       AutoHelp;
/*0x1ec*/ BYTE       OldMouseLook;
/*0x1f0*/ UINT       LastLocalUpdate;
/*0x1f4*/ UINT       LastControlledUpdate;
/*0x1f8*/ UINT       DataRate;
/*0x1fc*/ int        SavedPC;
/*0x200*/ int        InfraRed;
/*0x204*/ int        InfraGreen;
/*0x208*/ int        InfraBlue;
/*0x20c*/ int        UltraRed;
/*0x210*/ int        UltraGreen;
/*0x214*/ int        UltraBlue;
/*0x218*/ int        Unknown0x00214;
/*0x21c*/ int        IOLines;
/*0x220*/ int        IOLineSpacing;
/*0x224*/ char       ObjTag[0x14];
/*0x238*/ long       NumObjects;
/*0x23c*/ long       NumLights;
/*0x240*/ long       DecrTime[0xa];
/*0x268*/ long       DecrMsg[0xa];
/*0x290*/ long       DecrIndex;
/*0x294*/ BYTE       AffectsOn;
/*0x295*/ BYTE       InspectMode;
/*0x296*/ BYTE       UpMouseAnim;
/*0x298*/ UINT       ExitCounter;
/*0x29c*/ UINT       ExitStart;
/*0x2a0*/ UINT       ForcedExitCounter;
/*0x2a4*/ UINT       OfflineModeRequestTime;
/*0x2a8*/ int        SwimJump;
/*0x2ac*/ BYTE       DisplayCamp;
/*0x2b0*/ int        PolysOff;
/*0x2b4*/ float      CampY;
/*0x2b8*/ float      CampX;
/*0x2bc*/ float      CampZ;
/*0x2c0*/ int        Hits;
/*0x2c4*/ int        Bandage;
/*0x2c8*/ UINT       BackSpace;
/*0x2cc*/ long       StartBandage;
/*0x2d0*/ long       MyY;
/*0x2d4*/ long       MyX;
/*0x2d8*/ long       MyZ;
/*0x2dc*/ long       TargetY;
/*0x2e0*/ long       TargetX;
/*0x2e4*/ long       TargetZ;
/*0x2e8*/ zoneHeader ZoneInfo;
/*0x690*/ BYTE       ZDefined;
/*0x694*/ int        TrackTimer;
/*0x698*/ long       StartTrack;
/*0x69c*/ int        bTrackPlayers;
/*0x6a0*/ bool       bTrackMercs;
/*0x6a1*/ bool       bTrackPets;
/*0x6a4*/ int        iTrackSortType;
/*0x6a8*/ int        iTrackFilterType;
/*0x6ac*/ UINT       MouseTimer;
/*0x6b0*/ int        SoundUpdate;
/*0x6b4*/ bool       MouseOn;
/*0x6b8*/ USINGSKILL UsingSkill;
/*0x6c8*/ int        Unknown0x006bc[4]; // fixme x64
/*0x6d8*/ uint32_t   Unknown0x006c8;
/*0x6dc*/ BYTE       ClickThroughMask;
/*0x6e0*/ int        ShowSpellDescriptions;
/*0x6e4*/ bool       ReceivedWorldObjects;
/*0x6e5*/ BYTE       Unknown0x006d5;
/*0x6e6*/ bool       Unknown0x006d6;
/*0x6e8*/ float      SavedViewPitch;
/*0x6ec*/ int        SendPcReceived;
/*0x6f0*/ int        WeatherReceived;
/*0x6f4*/ int        PixelInit;
/*0x6f8*/ bool       bIsPressedShift;
/*0x6f9*/ bool       bIsPressedControl;
/*0x6fa*/ bool       bIsPressedAlt;
/*0x6fb*/ bool       bIsPressedLShift;
/*0x6fc*/ bool       bIsPressedLControl;
/*0x6fd*/ bool       bIsPressedLAlt;
/*0x6fe*/ bool       bIsPressedRShift;
/*0x6ff*/ bool       bIsPressedRControl;
/*0x700*/ bool       bIsPressedRAlt;
/*0x704*/ int        Currkeypress;
/*0x708*/ int        Lastkeypress;
/*0x70c*/ int        Rateup;
/*0x710*/ int        Ratedown;
/*0x714*/ int        Rateforward;
/*0x718*/ int        Rateback;
/*0x71c*/ int        Rateleft;
/*0x720*/ int        Rateright;
/*0x724*/ int        RaceWar;
/*0x728*/ int        Ruleset;
/*0x72c*/ bool       bRpServer;
/*0x72d*/ bool       bAcceleratedServer;
/*0x72e*/ bool       bProgressionServer;
/*0x730*/ int        ProgressionOpenExpansions; // EQExpansionOwned

/*0x000*/ bool       bHeroicCharacterFlag;

/*0x734*/ bool       bIsDevServer;
/*0x735*/ bool       bIsBetaServer;
/*0x736*/ bool       bIsTestServer;
/*0x737*/ bool       bIsStageServer;
/*0x738*/ bool       bUseMailSystem;
/*0x739*/ bool       bIsEscapeServer;
/*0x73a*/ bool       bIsTutorialEnabled;

/*0x000*/ bool       bHeroicCharacterRelated;

/*0x73b*/ bool       bCanCreateHeadStartCharacter;
/*0x73c*/ bool       bCanCreateHeroicCharacter;

/*0x000*/ int        nMonthlyClaim; // maybe
/*0x000*/ int        MarketPlaceRelated; // maybe

/*0x740*/ int        HeroicSlots;
/*0x744*/ bool       bAutoIdentify;
/*0x745*/ bool       bNameGen;
/*0x746*/ bool       bGibberish;
/*0x748*/ int        Locale;
/*0x74c*/ BYTE       UpdateControlled;
/*0x74d*/ BYTE       UpdateLocal;
/*0x74e*/ BYTE       EnterZone;
/*0x74f*/ BYTE       ExitGame;
/*0x750*/ int        EnterZoneReason;
/*0x754*/ bool       UseVoiceMacros;
/*0x758*/ int        Deltax;
/*0x75c*/ int        Deltay;
/*0x760*/ int        OldRate1;
/*0x764*/ int        OldRate2;
/*0x768*/ float      StrafeRate;
/*0x76c*/ int        SaveIndex;
/*0x770*/ float      moveDownSpeed;
/*0x774*/ char       motd[1024];

/*0xf74*/ int        hideAFK;
/*0xf78*/ int        hideAFKPets;
/*0xf7c*/ int        hideAFKMercs;
/*0xf80*/ bool       bAutoAFKOn;
/*0xf81*/ bool       bAutoAFKOff;
/*0xf82*/ bool       bIgnoreNumLockState;
/*0xf83*/ bool       bAutoMercPassive;
/*0xf84*/ bool       bDisplayMOTD;
/*0xf88*/ uint32_t   bDoGuildMOTD;
/*0xf8c*/ uint8_t    bIgnorePR;
/*0xf8d*/ bool       bFastCamp;
/*0xf8e*/ bool       bAdvLootGroupedByNPC;
/*0xf90*/
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
