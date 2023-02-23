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

// @sizeof(zoneHeader) == 0x3b4 :: 2013-05-10 (emu) @ 0x4C9ED7
constexpr size_t zoneHeader_size = 0x3b4;

struct [[offsetcomments]] zoneHeader
{
/*0x000*/ char         CharacterName[EQ_MAX_NAME];
/*0x040*/ char         ShortName[128];
/*0x0c0*/ char         LongName[128];
/*0x140*/ char         ZoneDesc[5][30];
/*0x1d6*/ bool         FogOnOff;
/*0x1d7*/ uint8_t      FogRed[4];
/*0x1db*/ uint8_t      FogGreen[4];
/*0x1df*/ uint8_t      FogBlue[4];
/*0x1e4*/ float        FogStart[4];
/*0x1f4*/ float        FogEnd[4];
/*0x204*/ float        ZoneGravity;
/*0x208*/ EOutDoor     ZoneType;
/*0x209*/ uint8_t      RainChance[4];
/*0x20d*/ uint8_t      RainDuration[4];
/*0x211*/ uint8_t      SnowChance[4];
/*0x215*/ uint8_t      SnowDuration[4];
/*0x219*/ char         ZoneTimeZone;   // in hours from worldserver, can be negative
/*0x21a*/ bool         SkyEnabled;
/*0x21c*/ int          WaterMidi;
/*0x220*/ int          DayMidi;
/*0x224*/ int          NightMidi;
/*0x228*/ float        ZoneExpModifier;
/*0x22c*/ float        SafeYLoc;
/*0x230*/ float        SafeXLoc;
/*0x234*/ float        SafeZLoc;
/*0x238*/ float        SafeHeading;
/*0x23c*/ float        Ceiling;
/*0x240*/ float        Floor;
/*0x244*/ float        MinClip;
/*0x248*/ float        MaxClip;
/*0x24c*/ int          ForageLow;
/*0x250*/ int          ForageMedium;
/*0x254*/ int          ForageHigh;
/*0x258*/ int          FishingLow;
/*0x25c*/ int          FishingMedium;
/*0x260*/ int          FishingHigh;
/*0x264*/ int          SkyLock;
/*0x268*/ uint32_t     GraveyardTimer;            // minutes until corpse pops to graveyard
/*0x26c*/ int          Unknowns[8];
/*0x28c*/ int          ScriptIDHour;
/*0x290*/ int          ScriptIDMinute;
/*0x294*/ int          ScriptIDTick;
/*0x298*/ int          ScriptIDOnPlayerDeath;
/*0x29c*/ int          ScriptIDOnNPCDeath;
/*0x2a0*/ int          ScriptIDPlayerEnteringZone;
/*0x2a4*/ int          ScriptIDOnZonePop;
/*0x2a8*/ int          ScriptIDNPCLoot;
/*0x2ac*/ int          ScriptIDAdventureFailed;
/*0x2b0*/ int          CanExploreTasks;
/*0x2b4*/ int          NewEngineZone;
/*0x2b8*/ int          ScriptIDOnFishing;
/*0x2bc*/ int          ScriptIDOnForage;
/*0x2c0*/ char         SkyType[32];
/*0x2e0*/ char         WeatherType[32];
/*0x300*/ char         SkyTypeOverride[32];
/*0x320*/ int          SkyLockOverride;
/*0x324*/ char         WeatherTypeOverride[32];  // 324
/*0x344*/ float        WeatherChangeTime;
/*0x348*/ bool         ClimateType;
/*0x34c*/ int          NPCAgroMaxDist;            // the distance needed for an npc to lose agro after an attack
/*0x350*/ int          FilterID;
/*0x354*/ int          ZoneID;                    // unique "design" id for this zone
/*0x358*/ int          ScriptNPCReceivedItem;
/*0x35c*/ bool         bValidateZoneIns;
/*0x360*/ int          RespawnLocationGroupId;
/*0x364*/ int          FallThroughWorldTeleportID;
/*0x368*/ int          FallThroughWorldScriptID;
/*0x36c*/ bool         bNoBuffExpiration;
/*0x370*/ int          LavaDamage;
/*0x374*/ int          MinLavaDamage;
/*0x378*/ bool         bDisallowManaStone;
/*0x379*/ bool         bNoBind;
/*0x37a*/ bool         bNoAttack;
/*0x37b*/ bool         bNoCallOfTheHero;
/*0x37c*/ bool         bNoFlux;
/*0x37d*/ bool         bNoFear;
/*0x37e*/ bool         bNoEncumber;
/*0x380*/ int          FastRegenHP;
/*0x384*/ int          FastRegenMana;
/*0x388*/ int          FastRegenEndurance;
/*0x38c*/ EPlace       CanPlaceCampsite;
/*0x390*/ EPlace       CanPlaceGuildBanner;
/*0x394*/ float        FogDensity;
/*0x398*/ bool         bAdjustGamma;
/*0x39c*/ int          TimeStringID;
/*0x3a0*/ bool         bNoMercenaries;
/*0x3a4*/ int          FishingRelated;
/*0x3a8*/ int          ForageSpecial;
/*0x3ac*/ bool         bNoLevitate;
/*0x3b0*/ float        BloomIntensity;
/*0x3b4*/

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

	bool get_bNoPlayerLight() const { return false; }
	__declspec(property(get = get_bNoPlayerLight)) bool bNoPlayerLight;
	int get_GroupLvlExpRelated() const { return 0; }
	__declspec(property(get = get_GroupLvlExpRelated)) int GroupLevelExpRelated;
	uint8_t get_PrecipitationType() const { return 0; }
	__declspec(property(get = get_PrecipitationType)) uint8_t PrecipitationType;
	bool get_bAllowPVP() const { return false; }
	__declspec(property(get = get_bAllowPVP)) bool bAllowPVP;
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
/*0x04*/ PSPELL          spell;
/*0x08*/ ItemGlobalIndex itemLocation;
/*0x14*/ ItemSpellTypes  itemSpellType;
/*0x18*/ float           rangeSquared;
/*0x1c*/ bool            cursorVisible;
/*0x20*/
};

using CTargetRing DEPRECATE("Use FreeTargetTracker instead of CTargetRing") = CTargetRing;


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
/*0x000*/ float             gamma;
/*0x004*/ float             gammaScale;
/*0x008*/ int               anonymous;
/*0x00c*/ int               autoHelp;
/*0x010*/ int               trade;
/*0x014*/ int               guildInvites;
/*0x018*/ int               sky;
/*0x01c*/ bool              lod;
/*0x020*/ int               videoMode;
/*0x024*/ int               sameRes;
/*0x028*/ int               pcNames;
/*0x02c*/ int               npcNames;
/*0x030*/ bool              petNames;
/*0x031*/ bool              mercNames;
/*0x032*/ bool              targetHealth;
/*0x033*/ bool              petOwnerNames;
/*0x034*/ bool              mercOwnerNames;
/*0x035*/ bool              itemPalcementHideUI;
/*0x036*/ bool              itemPlacementDefaultModeCursor;
/*0x037*/ bool              randomCharacterSelectMusic;
/*0x038*/ int               music;
/*0x03c*/ int               sound;
/*0x040*/ int               realism;
/*0x044*/ int               xMouseSensitivity;
/*0x048*/ int               yMouseSensitivity;
/*0x04c*/ int               inverseMouse;
/*0x050*/ int               lookSpring;
/*0x054*/ int               mouseActive;
/*0x058*/ int               destroy;
/*0x05c*/ int               mipMapping;
/*0x060*/ int               filterOff;
/*0x064*/ int               clipPlane;
/*0x068*/ int               keyboard[50];
/*0x130*/ EQCameraOptions   cameras[2];
/*0x168*/ int               aaNoConfirm;
/*0x16c*/ int               pointMerchantNoConfirm;
/*0x170*/ int               mouseWheelZoom;
/*0x174*/ int               mouseTurnZoom;
/*0x178*/ int               bTargetIndicatorVisible;
/*0x17c*/ int               maxFPS;
/*0x180*/ int               maxBGFPS;
/*0x184*/ int               nLODBias;
/*0x188*/ int               lootAllConfirm;
/*0x18c*/ bool              dismissMercenaryConfirm;
/*0x18d*/ bool              raidInviteConfirm;
/*0x18e*/ bool              offlineModeConfirm;
/*0x18f*/ bool              bagSellConfirm;
/*0x190*/ bool              bagSellContentsConfirm;
/*0x191*/ bool              tributeAutoOff;
/*0x192*/ bool              trophyTributeAutoOff;
/*0x193*/ bool              parcelLimitLogoutConfirm;
/*0x194*/ bool              saveSetConfirm;
/*0x198*/
};

struct [[offsetcomments]] EQGameOptions2
{
/*0x00*/ float             UserFogScaler;
/*0x04*/ int               VoiceRecOn;
/*0x08*/ int               VRDelay;
/*0x0c*/ bool              noSafeDrop;
/*0x0d*/ bool              lootNoDrop;
/*0x10*/ int               ReverseSoundChannels;
/*0x14*/ int               temp10;
/*0x18*/
};

// size of EverQuestinfo is the distance from this byte to the beginning of the struct
// @sizeof(EverQuestinfo) == 0x83f9c :: 2013-05-10 (emu) @ 0xE635B4
constexpr size_t EverQuestinfo_size = 0x83f9c;

struct [[offsetcomments]] EverQuestinfo
{
/*0x00000*/ HWND              Wnd;
/*0x00004*/ HINSTANCE         hInst;
/*0x00008*/ int               Render_MinX;
/*0x0000c*/ int               Render_MinY;
/*0x00010*/ int               Render_MaxX;
/*0x00014*/ int               Render_MaxY;
/*0x00018*/ int               Render_XScale;
/*0x0001c*/ int               Render_YScale;
/*0x00020*/ int               Render_WidthScale;
/*0x00024*/ int               Render_HeightScale;
/*0x00028*/ int               ReadyEnterWorld;
/*0x0002c*/ bool              InsideDoMainWhileLoop;
/*0x00030*/ int               Hidden;
/*0x00034*/ uint32_t          DisplayFlags;
/*0x00038*/ uint32_t          Command;
/*0x0003c*/ uint8_t           Unknown0x0003c;
/*0x00040*/ int               ScreenXRes;
/*0x00044*/ int               ScreenYRes;
/*0x00048*/ int               WindowXOffset;
/*0x0004c*/ int               WindowYOffset;
/*0x00050*/ bool              FullscreenMode;
/*0x00054*/ eKeyboardMode     KeyboardMode;
/*0x00058*/ uint8_t           RunMode;
/*0x00059*/ uint8_t           MoveCollisions;
/*0x0005a*/ uint8_t           DisplayCollVolume;
/*0x0005b*/ uint8_t           MouseCntrl;
/*0x0005c*/ uint8_t           MouseActive;
/*0x0005d*/ uint8_t           ForceCrouch;
/*0x00060*/ uint32_t          ForceCrouchTimer;
/*0x00064*/ float             Friction;
/*0x00068*/ float             AFriction;
/*0x0006c*/ int               MouseX;
/*0x00070*/ int               MouseY;
/*0x00074*/ int               MouseZ;
/*0x00078*/ int               LastMX;
/*0x0007c*/ int               LastMY;
/*0x00080*/ bool              MouseInClientRect;
/*0x00084*/ int               MouseSensitivity;
/*0x00088*/ int               MousePointerSpeedMod;
/*0x0008c*/ bool              ServerFilter;
/*0x00090*/ int               IsTrader;
/*0x00094*/ uint8_t           CurrentChan;
/*0x00098*/ int               CurrentLang;
/*0x0009c*/ char              TellTarget[64];
/*0x000dc*/ uint32_t          LastMinute;
/*0x000e0*/ uint32_t          LastLocal;
/*0x000e4*/ uint32_t          LastControlled;
/*0x000e8*/ uint8_t           MInverse;
/*0x000e9*/ uint8_t           Unknown0x000ed;
/*0x000ea*/ uint8_t           MouseLook;
/*0x000eb*/ bool              bDefaultMouseLook;
/*0x000ec*/ uint8_t           Strafe;
/*0x000ed*/ bool              bNetstat;
/*0x000ee*/ uint8_t           ModInventory;
/*0x000f0*/ uint32_t          LastHitter;
/*0x000f4*/ uint8_t           Harmless;
/*0x000f5*/ uint8_t           Silenced;
/*0x000f8*/ uint32_t          JumpTimer;
/*0x000fc*/ uint32_t          EventJump;
/*0x00100*/ uint32_t          LastJump;
/*0x00104*/ uint32_t          FrameTime;
/*0x00108*/ int               AutoRun;
/*0x0010c*/ uint32_t          PoisonTimer;
/*0x00110*/ int32_t           PoisonGI;
/*0x00114*/ int               OldX;
/*0x00118*/ int               OldY;
/*0x0011c*/ uint8_t           OldMouseButtons[NUM_MOUSE_BUTTONS];
/*0x00124*/ uint8_t           MouseButtons[NUM_MOUSE_BUTTONS];
/*0x0012c*/ bool              bIsMouseRightHanded;
/*0x00130*/ int               EncumberStatus;
/*0x00134*/ int               PendingCharState;
/*0x00138*/ char              PendingCharacterName[64];
/*0x00178*/ int               TutorialMode;
/*0x0017c*/ int               RMouseSecond;
/*0x00180*/ int               LMouseSecond;
/*0x00184*/ uint32_t          RMouseDown;
/*0x00188*/ uint32_t          LMouseDown;
/*0x0018c*/ char              Snooper[64];
/*0x001cc*/ uint32_t          DuelTarget;
/*0x001d0*/ uint32_t          DuelMe;
/*0x001d4*/ uint8_t           DuelOn;
/*0x001d8*/ uint32_t          AutoHelp;
/*0x001dc*/ uint8_t           OldMouseLook;
/*0x001e0*/ uint32_t          LastLocalUpdate;
/*0x001e4*/ uint32_t          LastControlledUpdate;
/*0x001e8*/ uint32_t          DataRate;
/*0x001ec*/ int               SavedPC;
/*0x001f0*/ int               InfraRed;
/*0x001f4*/ int               InfraGreen;
/*0x001f8*/ int               InfraBlue;
/*0x001fc*/ int               UltraRed;
/*0x00200*/ int               UltraGreen;
/*0x00204*/ int               UltraBlue;
/*0x00208*/ int               globalOffset;
/*0x0020c*/ int               IOLines;
/*0x00210*/ int               IOLineSpacing;
/*0x00214*/ char              ObjectTag[20];
/*0x00228*/ int               NumObjects;
/*0x0022c*/ int               NumLights;
/*0x00230*/ int               DecrTime[10];
/*0x00258*/ int               DecrMsg[10];
/*0x00280*/ int               DecrIndex;
/*0x00284*/ uint8_t           AffectsOn;
/*0x00285*/ uint8_t           InspectMode;
/*0x00286*/ uint8_t           UpMouseAnim;
/*0x00288*/ uint32_t          ExitCounter;
/*0x0028c*/ uint32_t          ExitStart;
/*0x00290*/ uint32_t          ForcedExitCounter;
/*0x00294*/ uint32_t          OfflineModeRequestTime;
/*0x00298*/ int               SwimJump;
/*0x0029c*/ uint8_t           DisplayCamp;
/*0x002a0*/ int               PolysOff;
/*0x002a4*/ float             CampY;
/*0x002a8*/ float             CampX;
/*0x002ac*/ float             CampZ;
/*0x002b0*/ int               Hits;
/*0x002b4*/ int               Bbandage;
/*0x002b8*/ uint32_t          BackSpace;
/*0x002bc*/ int               StartBandage;
/*0x002c0*/ int               MyY;
/*0x002c4*/ int               MyX;
/*0x002c8*/ int               MyZ;
/*0x002cc*/ int               TargetX;
/*0x002d0*/ int               TargetY;
/*0x002d4*/ int               TargetZ;
/*0x002d8*/ zoneHeader        ZoneInfo;
/*0x0068c*/ bool              ZDefined;
/*0x00690*/ int               TrackTimer;
/*0x00694*/ int               StartTrack;
/*0x00698*/ int               TrackPlayers;
/*0x0069c*/ bool              bTrackMercs;
/*0x0069d*/ bool              bTrackPets;
/*0x006a0*/ int               iTrackSortType;
/*0x006a4*/ int               iTrackFilterType;
/*0x006a8*/ uint32_t          MouseTimer;
/*0x006ac*/ int               SoundUpdate;
/*0x006b0*/ uint32_t          MouseOn;
/*0x006b4*/ int               UsingSkill;
/*0x006b8*/ void*             UsingSkillTarget;
/*0x006bc*/ int               LimboMoney[4];
/*0x006cc*/ uint8_t           ClickThroughMask;
/*0x006d0*/ int               ShowSpellDescriptions;
/*0x006d4*/ bool              ReceivedWorldObjects;
/*0x006d5*/ bool              ScreenCapture;
/*0x006d6*/ bool              ScreenShare;
/*0x006d8*/ float             SavedViewPitch;
/*0x006dc*/ int               SendPcReceived;
/*0x006e0*/ int               WeatherReceived;
/*0x006e4*/ int               PixelInit;
/*0x006e8*/ bool              bIsPressedShift;
/*0x006e9*/ bool              bIsPressedControl;
/*0x006ea*/ bool              bIsPressedAlt;
/*0x006eb*/ bool              bIsPressedLShift;
/*0x006ec*/ bool              bIsPressedLControl;
/*0x006ed*/ bool              bIsPressedLAlt;
/*0x006ee*/ bool              bIsPressedRShift;
/*0x006ef*/ bool              bIsPressedRControl;
/*0x006f0*/ bool              bIsPressedRAlt;
/*0x006f4*/ int               Currkeypress;
/*0x006f8*/ int               Lastkeypress;
/*0x006fc*/ int               RateUp;
/*0x00700*/ int               RateDown;
/*0x00704*/ int               Rateforward;
/*0x00708*/ int               Rateback;
/*0x0070c*/ int               RateLeft;
/*0x00710*/ int               RateRight;
/*0x00714*/ int               RaceWar;
/*0x00718*/ int               Ruleset;
/*0x0071c*/ bool              bRpServer;
/*0x0071d*/ bool              bAcceleratedServer;
/*0x0071e*/ bool              bProgressionServer;
/*0x00720*/ int               ProgressionOpenExpansions;             // EQExpansionOwned
/*0x00724*/ int               bIsBetaServer;
/*0x00728*/ bool              bIsTestServer;
/*0x00729*/ bool              bUseMailSystem;
/*0x0072a*/ bool              bIsEscapeServer;
/*0x0072b*/ bool              bIsTutorialEnabled;
/*0x0072c*/ bool              bCanCreateHeroicCharacter; // or head start?
/*0x00730*/ int               HeroicSlots;
///*0x00734*/ bool              bAutoIdentify;
/*0x00734*/ int               bNameGen;
/*0x00738*/ int               bGibberish;
/*0x0073c*/ int               Locale;
/*0x00740*/ uint8_t           UpdateControlled;
/*0x00741*/ uint8_t           UpdateLocal;
/*0x00742*/ uint8_t           EnterZone;
/*0x00743*/ uint8_t           ExitGame;
///*0x0073c*/ int               EnterZoneReason;
/*0x00744*/ bool              UseVoiceMacros;
/*0x00748*/ int               DeltaX;
/*0x0074c*/ int               DeltaY;
/*0x00750*/ int               OldRate1;
/*0x00754*/ int               OldRate2;
/*0x00758*/ float             StrafeRate;
/*0x0075c*/ int               SaveIndex;
/*0x00760*/ float             MoveDownSpeed;
/*0x00764*/ char              Motd[1024];
/*0x00b64*/ char              Motd2[1024];
///*0x00f64*/ int               bHideAFK;
///*0x00f68*/ int               bHideAFKPets;
///*0x00f6c*/ int               bHideAFKMercs;
///*0x00f70*/ bool              bAutoAFKOn;
///*0x00f71*/ bool              bAutoAFKOff;
///*0x00f72*/ bool              bIgnoreNumLockState;
///*0x00f73*/ bool              bAutoMercPassive;
/*0x00f64*/ bool              bDisplayMOTD;
/*0x00f68*/ int               bDoGuildMOTD;
/*0x00f6c*/ bool              bIgnorePR;
///*0x00f7d*/ bool              bFastCamp;
///*0x00f7e*/ bool              bAdvLootGroupedByNPC; // no adv loot
/*0x00f6d*/ char              WordList[512];
/*0x01170*/ char*             Display[25];
/*0x011d4*/ int*              DColor[25];
/*0x01238*/ int               LineNo;
/*0x0123c*/ int               DoingSpellAnim;
/*0x01240*/ EQZoneIndex       ZoneID;
/*0x01244*/ int               CommandIndex;
/*0x01248*/ int               MaxLines;
/*0x0124c*/ bool              PrimaryAttackReady; // 124c
/*0x0124d*/ bool              SecondaryAttackReady;
/*0x01250*/ uint32_t          AutosaveCounter;
/*0x01254*/ uint32_t          StartAFK;
/*0x01258*/ uint8_t           AllPlayerCollisions;
/*0x01259*/ uint8_t           MyVehicleFound;
/*0x0125a*/ uint8_t           ZoneFindingVehicle;
/*0x0125b*/ uint8_t           ForceSendVehicleUpdate;
/*0x0125c*/ ZONE_REQ_STATUS   GotSafeCoords;
/*0x01260*/ int               ZoningTo;
/*0x01264*/ uint8_t           NpcPhysics;
/*0x01268*/ int               BeneficialSpellCast;
/*0x0126c*/ char              AFKMessage[256]; //126c
/*0x0136c*/ int               bLogging;
/*0x01370*/ char              LogFile[50];
///*0x013a0*/ uint16_t          LogInterval;
/*0x013a2*/ uint8_t           LogSeconds;
/*0x013a4*/ int               Controlled;
/*0x013a8*/ bool              KunarkApproved;
/*0x013a9*/ bool              VeliousApproved;
/*0x013aa*/ bool              LuclinApproved;
/*0x013ab*/ bool              PopApproved;
/*0x013ac*/ bool              YkeshaApproved;
/*0x013ad*/ bool              LdonApproved;
/*0x013ae*/ bool              GatesApproved;
/*0x013af*/ bool              OmensApproved;
/*0x013b0*/ bool              DonApproved;
/*0x013b1*/ bool              DarkhollowApproved;
/*0x013b2*/ bool              ProphecyApproved;
/*0x013b3*/ bool              SerpentApproved;
/*0x013b4*/ bool              BuriedSeaApproved;
/*0x013b5*/ bool              SecretsOfFaydwerApproved;
/*0x013b6*/ bool              SeedsOfDestructionApproved;
/*0x013b7*/ bool              UnderfootApproved;
/*0x013b8*/ bool              HouseOfThuleApproved;
/*0x013b9*/ bool              VeilOfAlarisApproved;
/*0x013ba*/ bool              RainOfFearApproved;
/*0x013bc*/ uint32_t          ExpansionsFlagBitmask;                 // EQExpansionOwned
/*0x013c0*/ int               NoNameApprove;
/*0x013c4*/ int               AttackOnAssist;
/*0x013c8*/ int               Unknown0x13c8;
/*0x013cc*/ int               bInvWinLabels;
/*0x013d0*/ int               LoadedArmor[7];
/*0x013ec*/ int               bLockWindows;
/*0x013f0*/ int               bHidePlayerWin;
/*0x013f4*/ int               bHidePartyWin;
/*0x013f8*/ int               bHideTargetWin;
/*0x013fc*/ int               bHideSpellsWin;
/*0x01400*/ int               bHideHotboxWin;
/*0x01404*/ int               bHideChatWin;
/*0x01408*/ int               bHideMainWin;
/*0x0140c*/ int               bHideAltAdvWin;
/*0x01410*/ int               bUnknown0x1410;
/*0x01414*/ int               bUnknown0x1414;
/*0x01418*/ int               bShowDynamicLights;
/*0x0141c*/ int               iChatFontSize;
/*0x01420*/ int               VideoMode;
/*0x01424*/ bool              bShowGrass;
/*0x01428*/ char*             RawTextBuffer;
/*0x0142c*/ int               RawTextBufferSize;
/*0x01430*/ char*             RawTextBufferEnd;
/*0x01434*/ char*             RawTextFirstLine;
/*0x01438*/ char*             RawTextLastLine;
/*0x0143c*/ char*             RawTextNewPos;
/*0x01440*/ int               bInspectOthers;
/*0x01444*/ int               bShowSpellEffects;
/*0x01448*/ uint32_t          NextKeyRepeatTime;
/*0x0144c*/ uint32_t          KeyRepeatDelay;
/*0x01450*/ float             TimeScale;
/*0x01454*/ int               BeTheMonsterAllowed;
/*0x01458*/ int               iShowNamesLevel;
/*0x0145c*/ int               MyHitsMode;
/*0x01460*/ int               MyHitsX;
/*0x01464*/ int               MyHitsY;
/*0x01468*/ int               MyHitsCount;
/*0x0146c*/ int               MyHitsFontSize;
/*0x01470*/ int               MyHitsShowHeader;
/*0x01474*/ int               MyHitsShowBG;
/*0x01478*/ int               MyHitsBGWidth;
/*0x0147c*/ int               MyHitsAlwaysDraw;
/*0x01480*/ int               OtherHitsMeMode;
/*0x01484*/ int               OtherHitsMeX;
/*0x01488*/ int               OtherHitsMeY;
/*0x0148c*/ int               OtherHitsMeCount;
/*0x01490*/ int               OtherHitsMeFontSize;
/*0x01494*/ int               OtherHitsMeShowHeader;
/*0x01498*/ int               OtherHitsMeShowBG;
/*0x0149c*/ int               OtherHitsMeBGWidth;
/*0x014a0*/ int               OtherHitsMeAlwaysDraw;
/*0x014a4*/ int               OtherHitsOtherMode;
/*0x014a8*/ int               OtherHitsOtherX;
/*0x014ac*/ int               OtherHitsOtherY;
/*0x014b0*/ int               OtherHitsOtherCount;
/*0x014b4*/ int               OtherHitsOtherFontSize;
/*0x014b8*/ int               OtherHitsOtherShowHeader;
/*0x014bc*/ int               OtherHitsOtherShowBG;
/*0x014c0*/ int               OtherHitsOtherBGWidth;
/*0x014c4*/ int               OtherHitsOtherAlwaysDraw;
/*0x014c8*/ int               bCombatMusic;
/*0x014cc*/ int               iSoundMixAhead;
/*0x014d0*/ bool              bDisableDrakkinTattoos;
/*0x014d4*/ float             fFizzleMinSuccess;
/*0x014d8*/ float             fFizzleMaxSuccess;
/*0x014dc*/ float             fFizzleMinSuccessBard;
/*0x014e0*/ float             fFizzleMaxSuccessBard;
/*0x014e4*/ float             fFizzleMaxSuccessDefault;
/*0x014e8*/ float             fFizzleMaxSuccessSpecialized;
/*0x014ec*/ float             fFizzleManaCostMin;
/*0x014f0*/ float             fFizzleManaCostMax;
/*0x014f4*/ int               iActivityCheckInterval;
/*0x014f8*/ int               iActivityThreshhold;
/*0x014fc*/ int               iActivityScriptId;
/*0x01500*/ ChatFilterData    ChatFilters;
/*0x01588*/ EQGameOptions     gOpt;
/*0x01720*/ EQGameOptions2    gOpt2;
/*0x01738*/ bool              bEnvSounds;
/*0x01739*/ bool              bAllowContextMenus;
/*0x0173a*/ bool              bShowHelpOnLeftClickTarget;
/*0x0173c*/ int               iClaimingPrize;
/*0x01740*/ bool              bUseTellWindows;
/*0x01741*/ bool              bCtrlBypassesTradeskill;
/*0x01742*/ bool              bAllowAutoDuck;
/*0x01743*/ bool              bAllowAutoStand;
/*0x01744*/ bool              bAutojoinHelpChannels;
/*0x01745*/ bool              bStreamItemTextures;
/*0x01746*/ bool              bIgnoreLONChallenges;
/*0x01747*/ bool              bAcceptKickRequests;
/*0x01748*/ bool              bSuppressFirstUseAlerts;
/*0x01749*/ bool              bUseArrowCamera;
/*0x0174c*/ EQCamera*         cameras[EQ_MAX_CAMERAS];
/*0x01770*/ int               keyDown[nEQMappableCommands];
/*0x01f40*/ char              LastTellFromList[NUM_REPLY_NAMES][EQ_MAX_NAME];
/*0x02bc0*/ int               LastTellFromIndex;
/*0x02bc4*/ int               bcolor[500];
/*0x03394*/ char              buffer[500][256];
/*0x22794*/ char              commandList[40][2048];
/*0x36794*/ char              LockPassword[64];
/*0x367d4*/ bool              bLoadFriendsList;
/*0x367d8*/ ClaimDataCollection ClaimPrizeData;
/*0x367e8*/ ArrayClass<ChatBufferEntry*> chatBuffer;
/*0x367f8*/ char              WorldServerShortname[64]; // 367F8
/*0x36838*/ int               combatSkill[4];
/*0x36848*/ int               abilities[6];
/*0x36860*/ int               combatAbilities[8];
/*0x36880*/ int               Unknown0x36880[6];
/*0x36898*/ bool              bSocialChanged[NUM_SOCIAL_PAGES][SOCIALS_PER_PAGE];
/*0x36910*/ EQSocial          socials[NUM_SOCIAL_PAGES][SOCIALS_PER_PAGE];
/*0x5ce30*/ EQSocial          tempSocial;
/*0x5d34c*/ int8_t            socialIndex;
/*0x5d34d*/ char              selSlot;
// these need to be mapped out
///*0x5d34e*/ bool              bHotButtonChanged[NUM_HOTBUTTON_WINDOWS][NUM_HOTBUTTON_PAGES][HOTBUTTONS_PER_PAGE];
///*0x5d85e*/ int8_t            hotBank[NUM_HOTBUTTON_WINDOWS];
///*0x5d878*/ HotButtonData     hotButtons[NUM_HOTBUTTON_WINDOWS][NUM_HOTBUTTON_PAGES][HOTBUTTONS_PER_PAGE]; // +3b4c0
///*0x7b2d8*/ HotButtonData     dragButton
/*0x5d34e*/ char              temp[0x1ff4e];
/*0x7d29c*/ SpellLoadout      spellLoadouts[NUM_SPELL_SETS]; // +7D29C
/*0x7d594*/ HotButtonLoadout  hotbuttonLoadouts[NUM_HOTBUTTON_SETS]; // +7D594
/*0x7e214*/ GroupRoleLoadout  groupRoleLoadouts[NUM_GROUP_ROLE_SETS];
/*0x8021c*/ TargetSetLoadout  targetSetLoadouts[NUM_XTARGET_SETS];
/*0x83dc4*/ int               InspectLines;
/*0x83dc8*/ char              InspectText[256];
/*0x83ec8*/ bool              bInviteOn;
/*0x83ecc*/ uint32_t          LastInspectTime;
/*0x83ed0*/ float             fSpellParticleDensity;
/*0x83ed4*/ float             fSpellParticleOpacity;
/*0x83ed8*/ float             fSpellParticleNearClipPlane;
/*0x83edc*/ int               nSpellParticleCastFilters;
/*0x83ee0*/ float             fEnvironmentParticleDensity;
/*0x83ee4*/ float             fEnvironmentParticleOpacity;
/*0x83ee8*/ float             fEnvironmentParticleNearClipPlane;
/*0x83eec*/ int               nEnvironmentParticleCastFilters;
/*0x83ef0*/ float             fActorParticleDensity;
/*0x83ef4*/ float             fActorParticleOpacity;
/*0x83ef8*/ float             fActorParticleNearClipPlane;
/*0x83efc*/ int               nActorParticleCastFilters;
/*0x83f00*/ int               nActorNewArmorFilters;
/*0x83f04*/ eqtime_t          timeWhenKicked;
/*0x83f08*/ bool              bCreateGroupRequested;
/*0x83f0c*/ int               GroupRequestId;
/*0x83f10*/ char              Inviter[EQ_MAX_NAME];
/*0x83f50*/ char              party[EQ_MAX_NAME];
/*0x83f90*/ bool              FirstTime;
/*0x83f91*/ bool              FirstTimePreMainLoop;
///*0x827b2*/ bool              bUseArrowCam;
/*0x83f92*/ bool              bAutoAttack;
/*0x83f93*/ bool              bAutoRangeAttack;
/*0x83f94*/ int               ItemPending;
/*0x83f98*/ int               RequestPending;
/*0x83f9c*/

	int get_MouseSensitivity() const { return MouseSensitivity; }
	__declspec(property(get = get_MouseSensitivity)) int MXSensitivity;
	__declspec(property(get = get_MouseSensitivity)) int MYSensitivity;
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
/*0x10*/
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
/*0x048*/ uint8_t      Level;
/*0x049*/ uint8_t      Class2;
/*0x04c*/ int          Race2;
/*0x050*/ int          CurZoneID;
/*0x054*/ uint8_t      Sex;
/*0x055*/ uint8_t      Face;
/*0x058*/ ArmorProperties ArmProp[9];
/*0x10c*/ DWORD        Tint[9];
/*0x130*/ char         TextureType;
/*0x131*/ char         ArmorMaterial;
/*0x132*/ char         ArmorVariation;
/*0x133*/ char         HeadType;
/*0x134*/ int          TattooIndex;
/*0x138*/ int          FacialAttachmentIndex;
/*0x13c*/ int          Deity;
/*0x140*/ int          PrimActor;
/*0x144*/ int          SecdActor;
/*0x148*/ uint8_t      HairColor;
/*0x149*/ uint8_t      BeardColor;
/*0x14a*/ uint8_t      LeftEye;
/*0x14b*/ uint8_t      RightEye;
/*0x14c*/ uint8_t      Hair;
/*0x14d*/ uint8_t      Beard;
/*0x14e*/ bool         bCanGoHome;
/*0x14f*/ bool         bCanTutorial;
/*0x150*/ int          ParentId;
/*0x154*/ bool         bTooHighLevel;
/*0x155*/ bool         bPreFTP;
/*0x158*/ long         SomethingLogin;
/*0x15c*/ bool         bUseable;
/*0x15d*/ bool         bHeroicCharacter;
/*0x15e*/ bool         bShrouded;
/*0x160*/
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


// @sizeof(CEverQuest) == 0x395c8 :: 2013-05-10 (emu) @ 0x5ff0b6
constexpr size_t CEverQuest_size = 0x395c8;

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
	EQLIB_OBJECT int Follow();
	inline int Follow(int) { return Follow(); }
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
	EQLIB_OBJECT void IssuePetCommand(ePetCommandType, int TargetID, bool bQuiet);
	inline void IssuePetCommand(ePetCommandType cmd, int targetId, bool quiet, bool) { IssuePetCommand(cmd, targetId, quiet); }
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
/*0x0000c*/ UniversalChatProxy*   currentChatServerApi;
/*0x00010*/ bool                  alreadyAutoJoined;
/*0x00018*/ int64_t               chatNotificationStamp;
/*0x00020*/ char                  ucpAddress[128];
/*0x000a0*/ int                   ucpPort;
/*0x000a4*/ char                  ucpPlayerName[256];
/*0x001a4*/ char                  ucpTicket[256];
/*0x002a4*/ UniversalChatProxy*   chatService; // 2a4
/*0x002a8*/ int64_t               ucNotificationStamp;
/*0x002b0*/ bool                  ucNotificationEntering; // bJoinedChannel
/*0x002b1*/ char                  ucNotificationPlayerName[256];
/*0x003b1*/ char                  ucNotificationChannelName[10][48];
/*0x00594*/ DWORD                 ucNotificationChannelNumber[10];
/*0x005bc*/ int                   ucNotificationCount; // ChannelQty
/*0x005c0*/ FreeTargetTracker*    freeTargetTracker;
/*0x005c4*/ int                   WorldState;                   // 0 everything is fine, 1 we are getting disconnected 2 player not released from zone
/*0x005c8*/ int                   GameState;
/*0x005cc*/ bool                  bStopAreaProcessing;
/*0x005cd*/ bool                  bRAFEnabled;
/*0x005d0*/ int64_t               ServerTimeSync; // 5d0
/*0x005d8*/ int64_t               ServerTimeBase;
/*0x005e0*/ int64_t               ServerTimeLastReported;
/*0x005e8*/ bool                  bServerTimeHasWrapped;
/*0x005ec*/ float                 TargetCameraDistance;
/*0x005f0*/ bool                  bUnknown0x5f0;
/*0x005f4*/ int                   TotalCharacterSlots;
/*0x005f8*/ int                   MarketplaceCharacterSlots;
/*0x005fc*/ int                   Unknown0x608;
/*0x00600*/ int                   UsingSkill;
/*0x00604*/ void*                 UsingSkillTarget;
/*0x00608*/ PetitionStatus        petitionStatus[0x200];
/*0x17608*/ int                   TotalQ;
/*0x1760c*/ int                   TotalClientPetitions;
/*0x17610*/ char                  ChatText[2112];
/*0x17e50*/ int                   TrimIdx;
/*0x17e54*/ char                  ChatChanged;
/*0x17e55*/ char                  Trim[64][2112];
/*0x38e58*/ int                   chat;
/*0x38e5c*/ int                   disconnected;
/*0x38e60*/ int                   Red;
/*0x38e64*/ int                   Green;
/*0x38e68*/ int                   Blue;
/*0x38e6c*/ ArrayClass<CharSelectInfo> charSelectPlayerArray;
/*0x38e7c*/ char                  Filler[0x830]; // more data
/*0x396ac*/
	
	ALT_MEMBER_GETTER(UniversalChatProxy*, chatService, ChatService);
};

inline namespace deprecated {
	using _EVERQUEST DEPRECATE("Use EVERQUEST instead of _EVERQUEST") = CEverQuest;
	using PEVERQUEST DEPRECATE("Use EVERQUEST* instead of PEVERQUEST") = CEverQuest*;
}
using EVERQUEST = CEverQuest;

//SIZE_CHECK(CEverQuest, CEverQuest_size);

} // namespace eqlib
