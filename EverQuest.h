/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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
#include "Globals.h"
#include "Items.h"
#include "Spells.h"


namespace eqlib {

class ChatBufferEntry;
class EQCamera;


enum ChatFilterValues
{
	ChatFilterValue_Invalid = -1,
	ChatFilterValue_Show = 0,
	ChatFilterValue_Hide = 1,
	ChatFilterValue_Me = 2,
	ChatFilterValue_Group = 3,

	ChatFilterValue_Max,
};

class ChatFilterData
{
public:
	ChatFilterValues      chatFilters[NUM_CHAT_FILTERS];
};


//============================================================================
// ZoneHeader
//============================================================================

enum EOutDoor : uint8_t
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
// @sizeof(zoneHeader) == 0x2a4 :: 2022-10-12 (test) @ 0x140b7ce48
constexpr size_t zoneHeader_size = 0x2a4;

struct [[offsetcomments]] zoneHeader
{
/*0x000*/ char         ShortName[128];
/*0x080*/ char         LongName[128];
/*0x100*/ char         WeatherType[32];
/*0x120*/ char         WeatherTypeOverride[32];
/*0x140*/ char         SkyType[32];
/*0x160*/ char         SkyTypeOverride[32];
/*0x180*/ EOutDoor     ZoneType;
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
/*0x1d0*/ uint8_t      SnowChance[4];
/*0x1d4*/ uint8_t      SnowDuration[4];
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
// /*0x000*/ int WaterMidi, DayMidi, NightMidi;
// /*0x000*/ bool bAdjustGamma
// /*0x3a8*/

	inline bool IsIndoor() {
		return ZoneType == IndoorDungeon || ZoneType == DungeonCity || ZoneType == IndoorCity;
	}
	inline bool IsOutdoor() {
		return ZoneType == Outdoor || ZoneType == OutdoorCity || ZoneType == OutdoorDungeon;
	}
	inline bool IsBindable() {
		return ZoneType == OutdoorCity || ZoneType == DungeonCity || ZoneType == IndoorCity;
	}

	ALT_MEMBER_ALIAS_DEPRECATED(EOutDoor, ZoneType, OutDoor, "Use ZoneType instead of OutDoor");
};
using ZONEINFO = zoneHeader;
using PZONEINFO = ZONEINFO*;

SIZE_CHECK(zoneHeader, zoneHeader_size);

struct LfgGroupStatus;
struct LfgGroupQuery;
struct LfgPlayerStatus;
struct LfgPlayerQuery;
struct connection_t;

enum ZONE_REQ_STATUS {};
enum ZONE_REQ_REASON {};

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
	KeyboardMode_Typing,
	KeyboardMode_Command,
};

// left, right, mid, aux1-5
constexpr int NUM_MOUSE_BUTTONS = 8;

struct [[offsetcomments]] EQCameraOptions
{
/*0x00*/ float             distance;
/*0x04*/ float             dirHeading;
/*0x08*/ float             height;
/*0x0c*/ float             heading;
/*0x10*/ float             pitch;
/*0x14*/ float             zoom;
/*0x18*/ bool              changeable;
/*0x1c*/
};

struct [[offsetcomments]] EQGameOptions
{
/*0x00*/ float             gamma;
/*0x04*/ int               anonymous;
/*0x08*/ int               trade;
/*0x0c*/ bool              guildInvites;
/*0x10*/ int               sky;
/*0x14*/ bool              lod;
/*0x15*/ bool              pcNames;
/*0x16*/ bool              npcNames;
/*0x17*/ bool              petNames;
/*0x18*/ bool              mercNames;
/*0x19*/ bool              targetHealth;
/*0x1a*/ bool              petOwnerNames;
/*0x1b*/ bool              mercOwnerNames;
/*0x1c*/ bool              itemPalcementHideUI;
/*0x1d*/ bool              itemPlacementDefaultModeCursor;
/*0x1e*/ bool              randomCharacterSelectMusic;
/*0x20*/ int               music;
/*0x24*/ int               sound;
/*0x28*/ int               realism;
/*0x2c*/ int               xMouseSensitivity;
/*0x30*/ int               yMouseSensitivity;
/*0x34*/ int               inverseMouse;
/*0x38*/ bool              lookSpring;
/*0x39*/ bool              mouseActive;
/*0x3a*/ bool              destroy;
/*0x3b*/ bool              mipMapping;
/*0x3c*/ int               clipPlane;
/*0x40*/ EQCameraOptions   cameras[2];
/*0x78*/ bool              aaNoConfirm;
/*0x79*/ bool              pointMerchantNoConfirm;
/*0x7a*/ bool              mouseWheelZoom;
/*0x7b*/ bool              mouseTurnZoom;
/*0x7c*/ bool              bTargetIndicatorVisible;
/*0x80*/ int               maxFPS;
/*0x84*/ int               maxBGFPS;
/*0x88*/ int               nLODBias;
/*0x8c*/ bool              lootAllConfirm;
/*0x8d*/ bool              dismissMercenaryConfirm;
/*0x8e*/ bool              raidInviteConfirm;
/*0x8f*/ bool              offlineModeConfirm;
/*0x90*/ bool              bagSellConfirm;
/*0x91*/ bool              bagSellContentsConfirm;
/*0x92*/ bool              tributeAutoOff;
/*0x93*/ bool              trophyTributeAutoOff;
/*0x94*/ bool              parcelLimitLogoutConfirm;
/*0x95*/ bool              saveSetConfirm;
/*0x96*/ bool              blinkActiveChatWindow;
/*0x97*/ bool              tradeskillLoreEquippedWarning;
/*0x98*/ int               loadScreenMode;
/*0x9c*/ bool              noSafeDrop;
/*0x9d*/ bool              lootNoDrop;
/*0xa0*/
};


// size of EverQuestinfo is the distance from this byte to the beginning of the struct
// @sizeof(EverQuestinfo) == 0x6b158 :: 2022-10-12 (test) @ 0x140be7b08
constexpr size_t EverQuestinfo_size = 0x6b158;

struct [[offsetcomments]] EverQuestinfo
{
/*0x00000*/ HWND              Wnd;
/*0x00008*/ HINSTANCE         hInst;
/*0x00010*/ int               Render_MinX;
/*0x00014*/ int               Render_MinY;
/*0x00018*/ int               Render_MaxX;
/*0x0001c*/ int               Render_MaxY;
/*0x00020*/ int               Render_XScale;
/*0x00024*/ int               Render_YScale;
/*0x00028*/ int               Render_WidthScale;
/*0x0002c*/ int               Render_HeightScale;
/*0x00030*/ bool              ReadyEnterWorld;
/*0x00031*/ bool              InsideDoMainWhileLoop;
/*0x00034*/ uint32_t          Command;
/*0x00038*/ uint8_t           SoloMode;
/*0x0003c*/ int               ScreenXRes;
/*0x00040*/ int               ScreenYRes;
/*0x00044*/ bool              FullscreenMode;
/*0x00048*/ eKeyboardMode     KeyboardMode;
/*0x0004c*/ uint8_t           RunMode;
/*0x0004d*/ uint8_t           MouseCntrl;
/*0x0004e*/ uint8_t           MouseActive;
/*0x0004f*/ uint8_t           ForceCrouch;
/*0x00050*/ UINT              ForceCrouchTimer;
/*0x00054*/ float             Friction;
/*0x00058*/ float             AFriction;
/*0x0005c*/ int               MouseX;
/*0x00060*/ int               MouseY;
/*0x00064*/ int               MouseZ;
/*0x00068*/ int               LastMX;
/*0x0006c*/ int               LastMY;
/*0x00070*/ bool              MouseInClientRect;
/*0x00074*/ int               MXSensitivity;
/*0x00078*/ int               MYSensitivity;
/*0x0007c*/ int               MousePointerSpeedMod;
/*0x00080*/ uint8_t           CurrentChan;
/*0x00084*/ int               CurrentLang;
/*0x00088*/ char              TellTarget[64];
/*0x000c8*/ uint32_t          LastMinute;
/*0x000cc*/ uint8_t           MInverse;
/*0x000cd*/ uint8_t           MouseLook;
/*0x000ce*/ bool              bDefaultMouseLook;
/*0x000cf*/ uint8_t           Strafe;
/*0x000d0*/ bool              bNetstat;
/*0x000d1*/ uint8_t           ModInventory;
/*0x000d4*/ uint32_t          LastHitter;
/*0x000d8*/ uint8_t           Harmless;
/*0x000d9*/ uint8_t           Silenced;
/*0x000dc*/ uint32_t          EventJump;
/*0x000e0*/ uint32_t          LastJump;
/*0x000e4*/ uint32_t          FrameTime;
/*0x000e8*/ int               AutoRun;
/*0x000ec*/ uint32_t          PoisonTimer;
/*0x000f0*/ ItemGlobalIndex   PoisonGI;
/*0x000fc*/ uint8_t           OldMouseButtons[NUM_MOUSE_BUTTONS];
/*0x00104*/ uint8_t           MouseButtons[NUM_MOUSE_BUTTONS];
/*0x0010c*/ bool              bIsMouseRightHanded;
/*0x0010d*/ int8_t            EncumberStatus;
/*0x0010e*/ char              PendingCharacterName[64];
/*0x0014e*/ bool              TutorialMode;
/*0x00150*/ uint32_t          RMouseDown;
/*0x00154*/ uint32_t          LMouseDown;
/*0x00158*/ char              Snooper[64];
/*0x00198*/ uint32_t          DuelTarget;
/*0x0019c*/ uint32_t          DuelMe;
/*0x001a0*/ uint8_t           DuelOn;
/*0x001a4*/ uint32_t          AutoHelp;
/*0x001a8*/ uint32_t          LastLocalUpdate;
/*0x001ac*/ int               SavedPC;
/*0x001b0*/ int               InfraRed;
/*0x001b4*/ int               InfraGreen;
/*0x001b8*/ int               InfraBlue;
/*0x001bc*/ int               UltraRed;
/*0x001c0*/ int               UltraGreen;
/*0x001c4*/ int               UltraBlue;
/*0x001c8*/ int               globalOffset;
/*0x001cc*/ uint32_t          ExitCounter;
/*0x001d0*/ uint32_t          ExitStart;
/*0x001d4*/ uint32_t          ForcedExitCounter;
/*0x001d8*/ uint32_t          OfflineModeRequestTime;
/*0x001dc*/ float             CampY;
/*0x001e0*/ float             CampX;
/*0x001e4*/ float             CampZ;
/*0x001e8*/ long              MyY;
/*0x001ec*/ long              MyX;
/*0x001f0*/ long              MyZ;
/*0x001f4*/ zoneHeader        ZoneInfo;
/*0x00498*/ bool              ZDefined;
/*0x0049c*/ int               TrackPlayers;
/*0x004a0*/ bool              bTrackMercs;
/*0x004a1*/ bool              bTrackPets;
/*0x004a4*/ int               iTrackSortType;
/*0x004a8*/ int               iTrackFilterType;
/*0x004ac*/ int               UsingSkill;
/*0x004b0*/ void*             UsingSkillTarget;
/*0x004b8*/ int               LimboMoney[4];
/*0x004c8*/ uint32_t          LimboMoneyBonus;
/*0x004cc*/ uint8_t           ClickThroughMask;
/*0x004cd*/ bool              ReceivedWorldObjects;
/*0x004ce*/ bool              ScreenCapture;
/*0x004cf*/ bool              ScreenShare;
/*0x004d0*/ float             SavedViewPitch;
/*0x004d4*/ bool              SendPcReceived;
/*0x004d5*/ bool              WeatherReceived;
/*0x004d6*/ bool              bIsPressedShift;
/*0x004d7*/ bool              bIsPressedLShift;
/*0x004d8*/ bool              bIsPressedRShift;
/*0x004d9*/ bool              bIsPressedControl;
/*0x004da*/ bool              bIsPressedLControl;
/*0x004db*/ bool              bIsPressedRControl;
/*0x004dc*/ bool              bIsPressedAlt;
/*0x004dd*/ bool              bIsPressedLAlt;
/*0x004de*/ bool              bIsPressedRAlt;
/*0x004e0*/ int               Currkeypress;
/*0x004e4*/ int               RateUp;
/*0x004e8*/ int               RateDown;
/*0x004ec*/ int               RateLeft;
/*0x004f0*/ int               RateRight;
/*0x004f4*/ int               RaceWar;
/*0x004f8*/ int               Ruleset;
/*0x004fc*/ bool              bRpServer;
/*0x004fd*/ bool              bAcceleratedServer;
/*0x004fe*/ bool              bProgressionServer;
/*0x00500*/ int               ProgressionOpenExpansions;             // EQExpansionOwned
/*0x00504*/ bool              bHeroicCharacterFlag;
/*0x00508*/ int               ProgressionLevelCap;                   // Level Cap for Vaniki server
/*0x0050c*/ bool              bIsDevServer;
/*0x0050d*/ bool              bIsBetaServer;
/*0x0050e*/ bool              bIsTestServer;
/*0x0050f*/ bool              bIsStageServer;
/*0x00510*/ bool              bUseMailSystem;
/*0x00511*/ bool              bIsEscapeServer;
/*0x00512*/ bool              bIsTutorialEnabled;
/*0x00514*/ uint16_t          bHeroicCharacterRelated;               // not sure, but seems heroic character related
/*0x00516*/ bool              bCanCreateHeadStartCharacter;
/*0x00517*/ bool              bCanCreateHeroicCharacter;
/*0x00518*/ int               nMonthlyClaim;                         // maybe, needs verification.
/*0x0051c*/ bool              MarketPlaceRelated;                    // also maybe, related to marketplace
/*0x00520*/ int               Heroic85Slots;
/*0x00524*/ int               Heroic100Slots;
/*0x00528*/ bool              bAutoIdentify;
/*0x00529*/ bool              bNameGen;
/*0x0052a*/ bool              bGibberish;
/*0x0052c*/ int               Locale;
/*0x00530*/ uint8_t           UpdateControlled;
/*0x00531*/ uint8_t           UpdateLocal;
/*0x00532*/ uint8_t           EnterZone;
/*0x00533*/ uint8_t           ExitGame;
/*0x00534*/ int               EnterZoneReason;
/*0x00538*/ bool              UseVoiceMacros;
/*0x0053c*/ float             StrafeRate;
/*0x00540*/ float             MoveDownSpeed;
/*0x00544*/ char              Motd[1024];
/*0x00944*/ EQZoneIndex       ZoneID;
/*0x00948*/ bool              PrimaryAttackReady;
/*0x00949*/ bool              SecondaryAttackReady;
/*0x0094c*/ uint32_t          AutosaveCounter;
/*0x00950*/ uint32_t          StartAFK;
/*0x00954*/ uint8_t           MyVehicleFound;
/*0x00955*/ uint8_t           ZoneFindingVehicle;
/*0x00956*/ uint8_t           ForceSendVehicleUpdate;
/*0x00958*/ ZONE_REQ_STATUS   GotSafeCoords;
/*0x0095c*/ int               ZoningTo;
/*0x00960*/ char              AFKMessage[256];
/*0x00a60*/ bool              bLogging;
/*0x00a61*/ char              LogFile[50];
/*0x00a94*/ uint16_t          LogInterval;
/*0x00a96*/ uint8_t           Controlled;
/*0x00a98*/ uint32_t          ExpansionsFlagBitmask;                 // EQExpansionOwned
/*0x00a9c*/ bool              NoNameApprove;
/*0x00a9d*/ bool              AttackOnAssist;
/*0x00a9e*/ bool              LoadedArmor[7];
/*0x00aa5*/ bool              bShowDynamicLights;
/*0x00aa8*/ int               iChatFontSize;
/*0x00aac*/ bool              bShowGrass;
/*0x00aad*/ bool              bInspectOthers;
/*0x00aae*/ bool              bShowSpellEffects;
/*0x00ab0*/ float             TimeScale;
/*0x00ab4*/ int               iShowNamesLevel;
/*0x00ab8*/ bool              bCombatMusic;
/*0x00abc*/ int               iSoundMixAhead;
/*0x00ac0*/ bool              bDisableDrakkinTattoos;
/*0x00ac4*/ int               UnknownAC0[12];
/*0x00af4*/ int               bHideAFK;
/*0x00af8*/ int               bHideAFKPets;
/*0x00afc*/ int               bHideAFKMercs;
/*0x00b00*/ bool              bAutoAFKOn;
/*0x00b01*/ bool              bAutoAFKOff;
/*0x00b02*/ bool              bIgnoreNumLockState;
/*0x00b03*/ bool              bAutoMercPassive;
/*0x00b04*/ bool              bAutoAddToTaskOverlay;
/*0x00b05*/ bool              bShowOnlyOpenSteps;
/*0x00b06*/ bool              bAddMostRecentToTop;
/*0x00b07*/ bool              bDisplayMOTD;
/*0x00b08*/ bool              bDisplayFellowshipMOTD;
/*0x00b09*/ bool              bIgnorePR;
/*0x00b0a*/ bool              bFastCamp;
/*0x00b0b*/ bool              bAdvLootGroupedByNPC;
/*0x00b0c*/ int               AutoSkills[CONCURRENT_SKILLS];
/*0x00b14*/ ChatFilterData    ChatFilters;
/*0x00c00*/ EQGameOptions     gOpt;
/*0x00ca0*/ bool              bEnvSounds;
/*0x00ca1*/ bool              bAllowContextMenus;
/*0x00ca2*/ bool              bShowHelpOnLeftClickTarget;
/*0x00ca3*/ bool              bUseTellWindows;
/*0x00ca4*/ bool              bCtrlBypassesTradeskill;
/*0x00ca5*/ bool              bAllowAutoDuck;
/*0x00ca6*/ bool              bAllowAutoStand;
/*0x00ca7*/ bool              bAutojoinHelpChannels;
/*0x00ca8*/ bool              bAcceptKickRequests;
/*0x00ca9*/ bool              bSuppressFirstUseAlerts;
/*0x00caa*/ bool              bResetUIToDefault;
/*0x00cab*/ bool              bAutoShowRewardsWindow;
/*0x00cac*/ bool              bAllowPreLuclinMountRiders;
/*0x00cb0*/ EQCamera*         cameras[EQ_MAX_CAMERAS];
/*0x00cf8*/ bool              keyDown[nEQMappableCommands];
/*0x00f1a*/ char              LastTellFromList[NUM_REPLY_NAMES][EQ_MAX_NAME];
/*0x01b9c*/ int               LastTellFromIndex;
/*0x01ba0*/ char              LockPassword[64];
/*0x01be0*/ bool              bLoadFriendsList;
/*0x01be4*/ int               Unknown0x001;
/*0x01be8*/ int               Unknown0x002;
/*0x01bec*/ bool              Unknown0x003[2];
/*0x01bee*/ bool              bDisableFocusEffects;
/*0x01bf0*/ ClaimDataCollection ClaimPrizeData;
/*0x01c08*/ ArrayClass<ChatBufferEntry*> chatBuffer;
/*0x01c20*/ char              WorldServerShortname[64];
/*0x01c60*/ int               combatSkill[4];
/*0x01c70*/ int               abilities[6];
/*0x01c88*/ int               combatAbilities[8];
/*0x01ca8*/ bool              bSocialChanged[NUM_SOCIAL_PAGES][SOCIALS_PER_PAGE];
/*0x01d20*/ EQSocial          socials[NUM_SOCIAL_PAGES][SOCIALS_PER_PAGE];
/*0x28240*/ int8_t            socialIndex;
/*0x28241*/ bool              bHotButtonChanged[NUM_HOTBUTTON_WINDOWS][NUM_HOTBUTTON_PAGES][HOTBUTTONS_PER_PAGE];
/*0x28769*/ int8_t            hotBank[NUM_HOTBUTTON_WINDOWS];
/*0x28778*/ HotButtonData     hotButtons[NUM_HOTBUTTON_WINDOWS][NUM_HOTBUTTON_PAGES][HOTBUTTONS_PER_PAGE]; // +3b4c0
/*0x63c38*/ SpellLoadout      spellLoadouts[NUM_SPELL_SETS];
/*0x64610*/ HotButtonLoadout  hotbuttonLoadouts[NUM_HOTBUTTON_SETS];
/*0x65420*/ GroupRoleLoadout  groupRoleLoadouts[NUM_GROUP_ROLE_SETS];
/*0x67428*/ TargetSetLoadout  targetSetLoadouts[NUM_XTARGET_SETS];
/*0x6afce*/ char              InspectText[256];
/*0x6b0ce*/ bool              bInviteOn;
/*0x6b0d0*/ float             fSpellParticleDensity;
/*0x6b0d4*/ float             fSpellParticleOpacity;
/*0x6b0d8*/ float             fSpellParticleNearClipPlane;
/*0x6b0dc*/ int               nSpellParticleCastFilters;
/*0x6b0e0*/ float             fEnvironmentParticleDensity;
/*0x6b0e4*/ float             fEnvironmentParticleOpacity;
/*0x6b0e8*/ float             fEnvironmentParticleNearClipPlane;
/*0x6b0ec*/ float             fActorParticleDensity;
/*0x6b0f0*/ float             fActorPartircleOpacity;
/*0x6b0f4*/ float             fActorParticleNearClipPlane;
/*0x6b0f8*/ int               nActorParticleCastFilters;
/*0x6b0fc*/ int               nActorNewArmorFilters;
/*0x6b100*/ bool              bCreateGroupRequested;
/*0x6b104*/ int               GroupRequestId;
/*0x6b108*/ char              Inviter[EQ_MAX_NAME];
/*0x6b148*/ bool              FirstTime;
/*0x6b149*/ bool              FirstTimePreMainLoop;
/*0x6b14a*/ bool              bUseArrowCam;
/*0x6b14b*/ bool              bAutoAttack;
/*0x6b14c*/ bool              bAutoRangeAttack;
/*0x6b150*/ int               ItemPending;
/*0x6b154*/ int               RequestPending;
/*0x6b158*/
};
using EVERQUESTINFO = EverQuestinfo;
using PEVERQUESTINFO = EVERQUESTINFO*;

SIZE_CHECK(EverQuestinfo, EverQuestinfo_size);

inline const char* GetServerShortName() { return pEverQuestInfo->WorldServerShortname; }


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

struct [[offsetcomments]] CharSelectInfo
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
	using CSINFO DEPRECATE("Use CharSelectInfo instead of CSINFO") = CharSelectInfo;
	using PCSINFO DEPRECATE("Use CharSelectInfo* instead of PCSINFO") = CharSelectInfo*;
}

//============================================================================

class CEverQuestBase
{
public:
	virtual ~CEverQuestBase() {}
};


// @sizeof(CEverQuest) == 0x396f8 :: 2022-10-12 (test) @ 0x1402ea5b0
constexpr size_t CEverQuest_size = 0x396f8;

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
/*0x38eb0*/ ArrayClass<CharSelectInfo> charSelectPlayerArray;
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
