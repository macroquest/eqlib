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

// @sizeof(zoneHeader) == 0x3a8 :: 2022-01-11 (test) @ 0x14021386E
constexpr size_t zoneHeader_size = 0x3a8;

struct [[offsetcomments]] zoneHeader
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
/*0x22c*/ float        SafeYLoc;
/*0x230*/ float        SafeXLoc;
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
/*0x268*/ uint32_t     GraveyardTimer; //minutes until corpse(s) pops to graveyard
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
/*0x294*/ int          NewEngineZone;
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
/*0x390*/ float        BloomIntensity;
/*0x394*/ bool         bNoPlayerLight;
/*0x398*/ int          GroupLvlExpRelated;
/*0x39c*/ BYTE         PrecipitationType;
/*0x3a0*/ uint32_t     Unknown0x3a0;
/*0x3a4*/ bool         bAllowPVP;
/*0x3a8*/
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
/*0x04*/ void*     Target;
/*0x08*/
};
using USINGSKILL = UsingSkill;
using PUSINGSKILL = USINGSKILL*;

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
/*0x03c*/ BYTE       SoloMode;
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
/*0x090*/ int        IsTrader;
/*0x094*/ BYTE       CurrentChan;
/*0x098*/ int        CurrentLang;
/*0x09c*/ char       TellTarget[0x40];
/*0x0dc*/ UINT       LastMinute;
/*0x0e0*/ UINT       LastLocal;
/*0x0e4*/ UINT       LastControlled;
/*0x0e8*/ BYTE       MInverse;
/*0x0e9*/ BYTE       Unknown0x000ed;
/*0x0ea*/ BYTE       MouseLook;
/*0x0eb*/ bool       bDefaultMouseLook;
/*0x0ec*/ BYTE       Strafe;
/*0x0ed*/ bool       bNetstat;
/*0x0ee*/ BYTE       ModInventory;
/*0x0f0*/ UINT       LastHitter;
/*0x0f4*/ BYTE       Harmless;
/*0x0f5*/ BYTE       Silenced;
/*0x0f8*/ UINT       JumpTimer;
/*0x0fc*/ UINT       EventJump;
/*0x100*/ UINT       LastJump;
/*0x104*/ UINT       FrameTime;
/*0x108*/ int        AutoRun;
/*0x10c*/ UINT       PoisonTimer;
/*0x110*/ ItemGlobalIndex PoisonGI;
/*0x11c*/ int        OldX;
/*0x120*/ int        OldY;
/*0x124*/ BYTE       OldMouseButtons[8];
/*0x12c*/ BYTE       MouseButtons[8];
/*0x134*/ bool       bIsMouseRightHanded;
/*0x138*/ int        Unknown0x0013c;
/*0x13c*/ int        CharStatePending;
/*0x140*/ char       PendingCharacterName[0x40];
/*0x180*/ int        TutorialMode;
/*0x184*/ int        RMouseSecond;               // __RMouseHeldTime
/*0x188*/ int        LMouseSecond;               // __LMouseHeldTime
/*0x18c*/ UINT       RMouseDown;
/*0x190*/ UINT       LMouseDown;
/*0x194*/ char       Unknown0x00198[0x40];
/*0x1d4*/ UINT       DuelTarget;
/*0x1d8*/ UINT       DuelMe;
/*0x1dc*/ BYTE       DuelOn;
/*0x1e0*/ UINT       AutoHelp;
/*0x1e4*/ BYTE       OldMouseLook;
/*0x1e8*/ UINT       LastLocalUpdate;
/*0x1ec*/ UINT       LastControlledUpdate;
/*0x1f0*/ UINT       DataRate;
/*0x1f4*/ int        SavedPC;
/*0x1f8*/ int        InfraRed;
/*0x1fc*/ int        InfraGreen;
/*0x200*/ int        InfraBlue;
/*0x204*/ int        UltraRed;
/*0x208*/ int        UltraGreen;
/*0x20c*/ int        UltraBlue;
/*0x210*/ int        Unknown0x00214;
/*0x214*/ int        IOLines;
/*0x218*/ int        IOLineSpacing;
/*0x21c*/ char       ObjTag[0x14];
/*0x230*/ long       NumObjects;
/*0x234*/ long       NumLights;
/*0x238*/ long       DecrTime[0xa];
/*0x260*/ long       DecrMsg[0xa];
/*0x288*/ long       DecrIndex;
/*0x28c*/ BYTE       AffectsOn;
/*0x28d*/ BYTE       InspectMode;
/*0x28e*/ BYTE       UpMouseAnim;
/*0x290*/ UINT       ExitCounter;
/*0x294*/ UINT       ExitStart;
/*0x298*/ UINT       ForcedExitCounter;
/*0x29c*/ UINT       OfflineModeRequestTime;
/*0x2a0*/ int        SwimJump;
/*0x2a4*/ BYTE       DisplayCamp;
/*0x2a8*/ int        PolysOff;
/*0x2ac*/ float      CampY;
/*0x2b0*/ float      CampX;
/*0x2b4*/ float      CampZ;
/*0x2b8*/ int        Hits;
/*0x2bc*/ int        Bandage;
/*0x2c0*/ UINT       BackSpace;
/*0x2c4*/ long       StartBandage;
/*0x2c8*/ long       MyY;
/*0x2cc*/ long       MyX;
/*0x2d0*/ long       MyZ;
/*0x2d4*/ long       TargetY;
/*0x2d8*/ long       TargetX;
/*0x2dc*/ long       TargetZ;
/*0x2e0*/ ZONEINFO   ZoneInfo;
/*0x688*/ BYTE       ZDefined;
/*0x68c*/ int        TrackTimer;
/*0x690*/ long       StartTrack;
/*0x694*/ int        bTrackPlayers;
/*0x698*/ bool       bTrackMercs;
/*0x699*/ bool       bTrackPets;
/*0x69c*/ int        iTrackSortType;
/*0x6a0*/ int        iTrackFilterType;
/*0x6a4*/ UINT       MouseTimer;
/*0x6a8*/ int        SoundUpdate;
/*0x6ac*/ bool       MouseOn;
/*0x6b0*/ USINGSKILL UsingSkill;
/*0x6b8*/ int        Unknown0x006bc[4];
/*0x6c8*/ uint32_t   Unknown0x006c8;
/*0x6cc*/ BYTE       ClickThroughMask;
/*0x6d0*/ int        ShowSpellDescriptions;
/*0x6d4*/ bool       ReceivedWorldObjects;
/*0x6d5*/ BYTE       Unknown0x006d5;
/*0x6d6*/ bool       Unknown0x006d6;
/*0x6d8*/ float      SavedViewPitch;
/*0x6dc*/ int        SendPcReceived;
/*0x6e0*/ int        WeatherReceived;
/*0x6e4*/ int        PixelInit;
/*0x6e8*/ bool       bIsPressedShift;
/*0x6e9*/ bool       bIsPressedControl;
/*0x6ea*/ bool       bIsPressedAlt;
/*0x6eb*/ bool       bIsPressedLShift;
/*0x6ec*/ bool       bIsPressedLControl;
/*0x6ed*/ bool       bIsPressedLAlt;
/*0x6ee*/ bool       bIsPressedRShift;
/*0x6ef*/ bool       bIsPressedRControl;
/*0x6f0*/ bool       bIsPressedRAlt;
/*0x6f4*/ int        Currkeypress;
/*0x6f8*/ int        Lastkeypress;
/*0x6fc*/ int        Rateup;
/*0x700*/ int        Ratedown;
/*0x704*/ int        Rateforward;
/*0x708*/ int        Rateback;
/*0x70c*/ int        Rateleft;
/*0x710*/ int        Rateright;
/*0x714*/ int        RaceWar;
/*0x718*/ int        Ruleset;
/*0x71c*/ bool       bRpServer;
/*0x71d*/ bool       bAcceleratedServer;
/*0x71e*/ bool       bProgressionServer;
/*0x720*/ int        ProgressionOpenExpansions; // EQExpansionOwned
/*0x724*/ bool       bIsDevServer;
/*0x725*/ bool       bIsBetaServer;
/*0x726*/ bool       bIsTestServer;
/*0x727*/ bool       bIsStageServer;
/*0x728*/ bool       bUseMailSystem;
/*0x729*/ bool       bIsEscapeServer;
/*0x72a*/ bool       bIsTutorialEnabled;
/*0x72b*/ bool       bCanCreateHeadStartCharacter;
/*0x72c*/ bool       bCanCreateHeroicCharacter;
/*0x730*/ int        HeroicSlots;
/*0x734*/ bool       bAutoIdentify;
/*0x735*/ bool       bNameGen;
/*0x736*/ bool       bGibberish;
/*0x738*/ int        Locale;
/*0x73c*/ BYTE       UpdateControlled;
/*0x73d*/ BYTE       UpdateLocal;
/*0x73e*/ BYTE       EnterZone;
/*0x73f*/ BYTE       ExitGame;
/*0x740*/ int        EnterZoneReason;
/*0x744*/ bool       UseVoiceMacros;
/*0x748*/ int        Deltax;
/*0x74c*/ int        Deltay;
/*0x750*/ int        OldRate1;
/*0x754*/ int        OldRate2;
/*0x758*/ float      StrafeRate;
/*0x75c*/ int        SaveIndex;
/*0x760*/ float      Unknown0x00760;
/*0x764*/ char       motd[1024];
/*0xb64*/ char       motd2[1024];
/*0xf64*/ int        hideAFK;
/*0xf68*/ int        hideAFKPets;
/*0xf6c*/ int        hideAFKMercs;
/*0xf70*/ bool       bAutoAFKOn;
/*0xf71*/ bool       bAutoAFKOff;
/*0xf72*/ bool       bIgnoreNumLockState;
/*0xf73*/ bool       bAutoMercPassive;
/*0xf74*/ bool       bDisplayMOTD;
/*0xf78*/ uint32_t   bDoGuildMOTD;
/*0xf7c*/ uint8_t    bIgnorePR;
/*0xf7d*/ bool       bFastCamp;
/*0xf7e*/ bool       bAdvLootGroupedByNPC;
/*0xf80*/ };
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
/*0x10*/
};

struct [[offsetcomments]] PetitionStatus
{
	/*0x00*/ int           ID;
	/*0x04*/ int           Priority;                 // todo: check
	/*0x08*/ int           State;                    // todo: figure out.
	/*0x0c*/ DWORD         ArrivalTime;
	/*0x10*/ char          User[0x20];
	/*0x30*/ char          Player[0x40];
	/*0x70*/ int           NumActive;
	/*0x74*/ char          Player2[0x40];
	/*0xb4*/ DWORD         TimeStamp;                // not sure what its for
	/*0xb8*/
};

inline namespace deprecated {
	using PPETITIONSTATUS DEPRECATE("Use PetitionStatus* instead of PPETITIONSTATUS") = PetitionStatus*;
	using PETITIONSTATUS DEPRECATE("Use PetitionStatus instead of PETITIONSTATUS") = PetitionStatus;
}

// size is 0x170 see 4467A5 in Sep 18 2017 Live
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
	/*0x05c*/ ArmorProperties ArmProp[9];            // size /*0x14*/ * 9 = 0xB4
	/*0x110*/ DWORD        Tint[9];                  // size 0x24
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

// @sizeof(CEverQuest) == 0x39708 :: 2022-01-11 (test) @ 0x140377055
constexpr size_t CEverQuest_size = 0x39708;

class CEverQuest
{
public:
	EQLIB_OBJECT ~CEverQuest();
	EQLIB_OBJECT CEverQuest(HWND);
	EQLIB_OBJECT void CreateTargetIndicator(int Slot, EQ_Spell* pSpell, const ItemGlobalIndex& ItemLoc, ItemSpellTypes spelltype);
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

public:
/*0x00000*/ BYTE             Unknown[0x2a4];
/*0x002a4*/ UniversalChatProxy* ChatService;
/*0x002a8*/ BYTE             Unknown0x2a8[0x8];
/*0x002b0*/ bool             bJoinedChannel;
/*0x002b1*/ char             ChannelPlayerName[0x100];
/*0x003b1*/ char             ChannelName[0xa][0x30];
/*0x00591*/ BYTE             Unknown0x591[0x3];
/*0x00594*/ DWORD            ChannelNumber[0xa];
/*0x005bc*/ int              ChannelQty;
/*0x005c0*/ void*            pFreeTargetRing;              // PTARGETRING
/*0x005c4*/ DWORD            WorldState;                   // 0 everything is fine, 1 we are getting disconnected 2 player not released from zone
/*0x005c8*/ int              GameState;
/*0x005cc*/ bool             bStopAreaProcessing;
/*0x005cd*/ bool             bRAFEnabled;
/*0x005d0*/ int              ClientOutOfDate;              // I think string ID of popupdialog text (4BAD8A), is client out of date? this func checks it: 4ACD10 see May 12 2020 test exe
/*0x005d8*/ int64_t          ServerTimeSync;
/*0x005e0*/ int64_t          ServerTimeBase;
/*0x005e8*/ int64_t          ServerTimeLastReported;
/*0x005f0*/ bool             bServerTimeHasWrapped;
/*0x005f4*/ float            TargetCameraDistance;
/*0x005f8*/ bool             bUnknown0x5f0;
/*0x005fc*/ int              TotalCharacterSlots;
/*0x00600*/ int              MarketplaceCharacterSlots;
/*0x00604*/ bool             Unknown0x604;
/*0x00608*/ int              Unknown0x608;
/*0x0060c*/ bool             Unknown0x60c;
/*0x00610*/ CPopDialogWnd*   CampDialog;
/*0x0060c*/ PickZoneTimerHandler pickZoneTimerHandler;
/*0x0061c*/ USINGSKILL       UsingSkill;
/*0x0062C*/ PetitionStatus   PetitionStatus[0x200];
/*0x1762C*/ int              TotalQ;
/*0x17628*/ int              TotalClientPetitions;
/*0x1762c*/ char             ChatText[0x840];
/*0x17e6c*/ int              TrimIdx;
/*0x17e70*/ char             ChatChanged;
/*0x17e71*/ char             Trim[0x40][0x840];
/*0x38e74*/ BOOL             chat;
/*0x38e78*/ BOOL             disconnected;
/*0x38E84*/ int              Red;
/*0x38e88*/ int              Green;
/*0x38e8c*/ int              Blue;
/*0x38e90*/ ArrayClass<CSINFO> pCharSelectPlayerArray;
/*0x38ea0*/ char             Filler[0x7a0]; // more data
/*0x39640*/
};

inline namespace deprecated {
	using _EVERQUEST DEPRECATE("Use EVERQUEST instead of _EVERQUEST") = CEverQuest;
	using PEVERQUEST DEPRECATE("Use EVERQUEST* instead of PEVERQUEST") = CEverQuest*;
}
using EVERQUEST = CEverQuest;

SIZE_CHECK(CEverQuest, CEverQuest_size);

} // namespace eqlib
