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

namespace eqlib {

enum PlayerClass
{
	Unknown = 0,
	Warrior = 1,
	Cleric = 2,
	Paladin = 3,
	Ranger = 4,
	Shadowknight = 5,
	Druid = 6,
	Monk = 7,
	Bard = 8,
	Rogue = 9,
	Shaman = 10,
	Necromancer = 11,
	Wizard = 12,
	Mage = 13,
	Enchanter = 14,
	Beastlord = 15,
	Berserker = 16,

	Mercenary = 17,

	GM_Warrior = 20,
	GM_Cleric = 21,
	GM_Paladin = 22,
	GM_Ranger = 23,
	GM_Shadowknight = 24,
	GM_Druid = 25,
	GM_Monk = 26,
	GM_Bard = 27,
	GM_Rogue = 28,
	GM_Shaman = 29,
	GM_Necromancer = 30,
	GM_Wizard = 31,
	GM_Magician = 32,
	GM_Enchanter = 33,
	GM_Beastlord = 34,
	GM_Berserker = 35,

	Class_Banker = 40,
	Class_Merchant = 41,
	Class_TaskMerchant = 58,
	Class_PvPMerchant = 59,
	Class_Adventure = 60,
	Class_AdventureMerchant = 61,
	Class_Object = 62,
	Class_TributeMaster = 63,
	Class_GuildTributeMaster = 64,

	Class_GuildBanker = 66,
	Class_GoodPointMerchant = 67,
	Class_EvilPointMerchant = 68,
	Class_FellowshipMaster = 69,
	Class_PointMerchant = 70,
	Class_MercenaryMerchant = 71,
	Class_RealEstateMrchant = 72,
	Class_LoyaltyMerchant = 73,

	TotalPlayerClasses = Berserker,
	TotalClasses = TotalPlayerClasses + 1,
};

constexpr int MAX_PLAYER_CLASSES = Berserker;
constexpr int MAX_CLASSES = GM_Berserker;

#define AllClassesMASK                           0xffff
#define WarriorMASK                              0x0001
#define ClericMASK                               0x0002
#define RogueMASK                                0x0100
#define WizardMASK                               0x0400


#define BI_TARGETABLE                            1
#define BI_TRIGGER                               2
#define BI_TRAP                                  4
#define BI_TIMER                                 8

constexpr int MAX_LANGUAGES = 32;

// player types
constexpr int EQP_PC = 0;
constexpr int EQP_NPC = 1;
constexpr int EQP_CORPSE = 2;

// player races
constexpr int EQR_HUMAN = 1;
constexpr int EQR_BARBARIAN = 2;
constexpr int EQR_ERUDITE = 3;
constexpr int EQR_ELF = 4;
constexpr int EQR_HIGH_ELF = 5;
constexpr int EQR_DARK_ELF = 6;
constexpr int EQR_HALF_ELF = 7;
constexpr int EQR_DWARF = 8;
constexpr int EQR_TROLL = 9;
constexpr int EQR_OGRE = 10;
constexpr int EQR_HALFLING = 11;
constexpr int EQR_GNOME = 12;
constexpr int EQR_SKELETON = 60;
constexpr int EQR_IKSAR = 128;
constexpr int EQR_VAHSHIR = 130;
constexpr int EQR_FROGLOCK = 330;
constexpr int EQR_SKELETON_NEW = 367;
constexpr int EQR_DRAKKIN = 522;
constexpr int EQR_OEQ_SKELETON = 802;
constexpr int EQR_SOL_SKELETON = 803;

// door types
#define EQSWITCH_STANDARD                        0
#define EQSWITCH_STANDARD_METAL                  1
#define EQSWITCH_STANDARD_STONE	                 2
#define EQSWITCH_STANDARD_CLOCKWISE	             5
#define EQSWITCH_STANDARD_CLOCKWISE_METAL        6
#define EQSWITCH_STANDARD_CLOCKWISE_STONE        7
#define EQSWITCH_STANDARD_STONE_COLLIDING        8

#define EQSWITCH_SMALL_SLIDING                   10
#define EQSWITCH_SMALL_SLIDING_METAL             11
#define EQSWITCH_SMALL_SLIDING_STONE             12
#define EQSWITCH_MEDIUM_SLIDING	                 15
#define EQSWITCH_MEDIUM_SLIDING_METAL            16
#define EQSWITCH_MEDIUM_SLIDING_STONE            17
#define EQSWITCH_LARGE_SLIDING                   20
#define EQSWITCH_LARGE_SLIDING_METAL             21
#define EQSWITCH_LARGE_SLIDING_STONE             22
#define EQSWITCH_GIANT_SLIDING                   25
#define EQSWITCH_GIANT_SLIDING_METAL             26
#define EQSWITCH_GIANT_SLIDING_STONE             27
#define EQSWITCH_DRAWBRIDGE                      30
#define	EQSWITCH_TRAP                            35
#define	EQSWITCH_PULLTRAP                        36
#define EQSWITCH_LEVER                           40
#define	EQSWITCH_TOGGLE_BUTTON                   45
#define EQSWITCH_PRESSURE_PLATE                  50 // if u step or touch this it keep the door open, move away and it closes.
#define EQSWITCH_DAMAGE_PLATE                    51 // if you stand on this it damages you.

#define EQSWITCH_GUILD_CHEST                     56
#define EQSWITCH_TELEPORTER                      57
#define EQSWITCH_KEY_TELEPORTER                  58
#define EQSWITCH_ELEVATOR                        59
#define EQSWITCH_SMALL_SLIDE_UPWARDS             60
#define EQSWITCH_SMALL_SLIDE_UPWARDS_METAL       61
#define EQSWITCH_SMALL_SLIDE_UPWARDS_STONE       62
#define EQSWITCH_MEDIUM_SLIDE_UPWARDS            65
#define EQSWITCH_MEDIUM_SLIDE_UPWARDS_METAL      66
#define EQSWITCH_MEDIUM_SLIDE_UPWARDS_STONE      67

#define EQSWITCH_LARGE_SLIDE_UPWARDS             70
#define EQSWITCH_LARGE_SLIDE_UPWARDS_METAL       71
#define EQSWITCH_LARGE_SLIDE_UPWARDS_STONE       72
#define EQSWITCH_GIANT_SLIDE_UPWARDS             75
#define EQSWITCH_GIANT_SLIDE_UPWARDS_METAL       76
#define EQSWITCH_GIANT_SLIDE_UPWARDS_STONE       77
#define EQSWITCH_DIAGONAL_UP_RIGHT               78
#define EQSWITCH_DIAGONAL_UP_LEFT                79
#define EQSWITCH_DIAGONAL_DOWN_RIGHT             80
#define EQSWITCH_DIAGONAL_DOWN_LEFT              81
#define EQSWITCH_GIANT_UP_OR_DOWN                82
#define EQSWITCH_GIANT_UP_OR_DOWN_METAL          83
#define EQSWITCH_GIANT_UP_OR_DOWN_STONE          84

#define EQSWITCH_BUTTON                          109

#define EQSWITCH_TRADER_PLATFORM                 153
#define EQSWITCH_BARTER_PLATFORM                 154
#define EQSWITCH_BARTER_TRADER_PLATFORM          155

#define EQSWITCH_BOOK                            158 // opens bookwindow
#define EQSWITCH_REALESTATE_NEIGHBORHOOD         159
#define EQSWITCH_REALESTATE_PLOT                 160
#define EQSWITCH_REALESTATE_EXIT                 161

#define SPAWN_PLAYER                             0
#define SPAWN_NPC                                1
#define SPAWN_CORPSE                             2
//#define SPAWN_ANY                                3
//#define SPAWN_PET                                4

#define SKILL_PICKLOCK                           35

constexpr int ITEM_NAME_LEN = 64;
constexpr int LORE_NAME_LEN = 80;

#define ITEM_NORMAL1                             0x0031
#define ITEM_NORMAL2                             0x0036
#define ITEM_NORMAL3                             0x315f
#define ITEM_NORMAL4                             0x3336
#define ITEM_NORMAL5                             0x0032
#define ITEM_NORMAL6                             0x0033
#define ITEM_NORMAL7                             0x0034
#define ITEM_NORMAL8                             0x0039
#define ITEM_CONTAINER                           0x7900
#define ITEM_CONTAINER_PLAIN                     0x7953
#define ITEM_BOOK                                0x7379

#define ITEMEFFECTTYPE_COMBAT                    0x00
#define ITEMEFFECTTYPE_INVENTORY1                0x01 // Bards need to stop sing to cast
#define ITEMEFFECTTYPE_WORN                      0x02
#define ITEMEFFECTTYPE_INVENTORY2                0x03
#define ITEMEFFECTTYPE_MUSTEQUIP                 0x04 // Bards need to stop sing to cast
#define ITEMEFFECTTYPE_INVENTORY3                0x05

#define SKILLMINDAMAGEMOD_BASH                   0x00
#define SKILLMINDAMAGEMOD_BACKSTAB               0x01
#define SKILLMINDAMAGEMOD_DRAGONPUNCH            0x02
#define SKILLMINDAMAGEMOD_EAGLESTRIKE            0x03
#define SKILLMINDAMAGEMOD_FLYINGKICK             0x04
#define SKILLMINDAMAGEMOD_KICK                   0x05
#define SKILLMINDAMAGEMOD_ROUNDKICK              0x06
#define SKILLMINDAMAGEMOD_TIGERCLAW              0x07
#define SKILLMINDAMAGEMOD_FRENZY                 0x08

// Heroic Mods
#define HEROIC_MOD_SPELL_SHIELDING               0x4
#define HEROIC_MOD_COMBAT_EFFECTS                0x5
#define HEROIC_MOD_MELEE_SHIELDING               0x6
#define HEROIC_MOD_DAMAGE_SHIELDING              0x7
#define HEROIC_MOD_DOT_SHIELDING                 0x8
#define HEROIC_MOD_DAMAGE_SHIELD_MITIG           0x9
#define HEROIC_MOD_AVOIDANCE                     0xa
#define HEROIC_MOD_ACCURACY                      0xb
#define HEROIC_MOD_STUN_RESIST                   0xc
#define HEROIC_MOD_STRIKETHROUGH                 0xd

#define COLOR_DEFAULT                            0x00
#define COLOR_DARKGREY                           0x01
#define COLOR_DARKGREEN                          0x02
#define COLOR_DARKBLUE                           0x03
#define COLOR_PURPLE                             0x05
#define COLOR_LIGHTGREY                          0x06

#define CONCOLOR_GREY                            0x06
#define CONCOLOR_GREEN                           0x02
#define CONCOLOR_LIGHTBLUE                       0x12
#define CONCOLOR_BLUE                            0x04
#define CONCOLOR_BLACK                           0x14
#define CONCOLOR_WHITE                           0x0a
#define CONCOLOR_YELLOW                          0x0f
#define CONCOLOR_RED                             0x0d

#define USERCOLOR_SAY                            0xFF +   1 //  1  - Say
#define USERCOLOR_TELL                           0xFF +   2 //  2  - Tell
#define USERCOLOR_GROUP                          0xFF +   3 //  3  - Group
#define USERCOLOR_GUILD                          0xFF +   4 //  4  - Guild
#define USERCOLOR_OOC                            0xFF +   5 //  5  - OOC
#define USERCOLOR_AUCTION                        0xFF +   6 //  6  - Auction
#define USERCOLOR_SHOUT                          0xFF +   7 //  7  - Shout
#define USERCOLOR_EMOTE                          0xFF +   8 //  8  - Emote
#define USERCOLOR_SPELLS                         0xFF +   9 //  9  - Spells (meming, scribing, casting, etc.)
#define USERCOLOR_YOU_HIT_OTHER                  0xFF +  10 //  10 - You hit other
#define USERCOLOR_OTHER_HIT_YOU                  0xFF +  11 //  11 - Other hits you
#define USERCOLOR_YOU_MISS_OTHER                 0xFF +  12 //  12 - You miss other
#define USERCOLOR_OTHER_MISS_YOU                 0xFF +  13 //  13 - Other misses you
#define USERCOLOR_DUELS                          0xFF +  14 //  14 - Some broadcasts (duels)
#define USERCOLOR_SKILLS                         0xFF +  15 //  15 - Skills (ups, non-combat use, etc.)
#define USERCOLOR_DISCIPLINES                    0xFF +  16 //  16 - Disciplines or special abilities
#define USERCOLOR_UNUSED001                      0xFF +  17 //  17 - Unused at this time
#define USERCOLOR_DEFAULT                        0xFF +  18 //  18 - Default text and stuff you type
#define USERCOLOR_UNUSED002                      0xFF +  19 //  19 - Unused at this time
#define USERCOLOR_MERCHANT_OFFER                 0xFF +  20 //  20 - Merchant Offer Price
#define USERCOLOR_MERCHANT_EXCHANGE              0xFF +  21 //  21 - Merchant Buy/Sell
#define USERCOLOR_YOUR_DEATH                     0xFF +  22 //  22 - Your death message
#define USERCOLOR_OTHER_DEATH                    0xFF +  23 //  23 - Others death message
#define USERCOLOR_OTHER_HIT_OTHER                0xFF +  24 //  24 - Other damage other
#define USERCOLOR_OTHER_MISS_OTHER               0xFF +  25 //  25 - Other miss other
#define USERCOLOR_WHO                            0xFF +  26 //  26 - /who command
#define USERCOLOR_YELL                           0xFF +  27 //  27 - yell for help
#define USERCOLOR_NON_MELEE                      0xFF +  28 //  28 - Hit for non-melee
#define USERCOLOR_SPELL_WORN_OFF                 0xFF +  29 //  29 - Spell worn off
#define USERCOLOR_MONEY_SPLIT                    0xFF +  30 //  30 - Money splits
#define USERCOLOR_LOOT                           0xFF +  31 //  31 - Loot message
#define USERCOLOR_RANDOM                         0xFF +  32 //  32 - Dice Roll (/random)
#define USERCOLOR_OTHERS_SPELLS                  0xFF +  33 //  33 - Others spells
#define USERCOLOR_SPELL_FAILURE                  0xFF +  34 //  34 - Spell Failures (resists, fizzles, missing component, bad target, etc.)
#define USERCOLOR_CHAT_CHANNEL                   0xFF +  35 //  35 - Chat Channel Messages
#define USERCOLOR_CHAT_1                         0xFF +  36 //  36 - Chat Channel 1
#define USERCOLOR_CHAT_2                         0xFF +  37 //  37 - Chat Channel 2
#define USERCOLOR_CHAT_3                         0xFF +  38 //  38 - Chat Channel 3
#define USERCOLOR_CHAT_4                         0xFF +  39 //  39 - Chat Channel 4
#define USERCOLOR_CHAT_5                         0xFF +  40 //  40 - Chat Channel 5
#define USERCOLOR_CHAT_6                         0xFF +  41 //  41 - Chat Channel 6
#define USERCOLOR_CHAT_7                         0xFF +  42 //  42 - Chat Channel 7
#define USERCOLOR_CHAT_8                         0xFF +  43 //  43 - Chat Channel 8
#define USERCOLOR_CHAT_9                         0xFF +  44 //  44 - Chat Channel 9
#define USERCOLOR_CHAT_10                        0xFF +  45 //  45 - Chat Channel 10
#define USERCOLOR_MELEE_CRIT                     0xFF +  46 //  46 - Melee Crits
#define USERCOLOR_SPELL_CRIT                     0xFF +  47 //  47 - Spell Crits
#define USERCOLOR_TOO_FAR_AWAY                   0xFF +  48 //  48 - Too far away (melee)
#define USERCOLOR_NPC_RAMPAGE                    0xFF +  49 //  49 - NPC Rampage
#define USERCOLOR_NPC_FLURRY                     0xFF +  50 //  50 - NPC Furry
#define USERCOLOR_NPC_ENRAGE                     0xFF +  51 //  51 - NPC Enrage
#define USERCOLOR_ECHO_SAY                       0xFF +  52 //  52 - say echo
#define USERCOLOR_ECHO_TELL                      0xFF +  53 //  53 - tell echo
#define USERCOLOR_ECHO_GROUP                     0xFF +  54 //  54 - group echo
#define USERCOLOR_ECHO_GUILD                     0xFF +  55 //  55 - guild echo
#define USERCOLOR_ECHO_OOC                       0xFF +  56 //  56 - group echo
#define USERCOLOR_ECHO_AUCTION                   0xFF +  57 //  57 - auction echo
#define USERCOLOR_ECHO_SHOUT                     0xFF +  58 //  58 - shout echo
#define USERCOLOR_ECHO_EMOTE                     0xFF +  59 //  59 - emote echo
#define USERCOLOR_ECHO_CHAT_1                    0xFF +  60 //  60 - chat 1 echo
#define USERCOLOR_ECHO_CHAT_2                    0xFF +  61 //  61 - chat 2 echo
#define USERCOLOR_ECHO_CHAT_3                    0xFF +  62 //  62 - chat 3 echo
#define USERCOLOR_ECHO_CHAT_4                    0xFF +  63 //  63 - chat 4 echo
#define USERCOLOR_ECHO_CHAT_5                    0xFF +  64 //  64 - chat 5 echo
#define USERCOLOR_ECHO_CHAT_6                    0xFF +  65 //  65 - chat 6 echo
#define USERCOLOR_ECHO_CHAT_7                    0xFF +  66 //  66 - chat 7 echo
#define USERCOLOR_ECHO_CHAT_8                    0xFF +  67 //  67 - chat 8 echo
#define USERCOLOR_ECHO_CHAT_9                    0xFF +  68 //  68 - chat 9 echo
#define USERCOLOR_ECHO_CHAT_10                   0xFF +  69 //  69 - chat 10 echo
#define USERCOLOR_RESERVED                       0xFF +  70 //  70 - "unused at this time"
#define USERCOLOR_LINK                           0xFF +  71 //  71 - item links
#define USERCOLOR_RAID                           0xFF +  72 //  72 - raid
#define USERCOLOR_PET                            0xFF +  73 //  73 - my pet
#define USERCOLOR_DAMAGESHIELD                   0xFF +  74 //  74 - damage shields
#define USERCOLOR_LEADER                         0xFF +  75 //  75 - LAA-related messages
#define USERCOLOR_PETRAMPFLURRY                  0xFF +  76 //  76 - pet rampage/flurry
#define USERCOLOR_PETCRITS                       0xFF +  77 //  77 - pet's critical hits
#define USERCOLOR_FOCUS                          0xFF +  78 //  78 - focus item activation
#define USERCOLOR_XP                             0xFF +  79 //  79 - xp gain/loss
#define USERCOLOR_SYSTEM                         0xFF +  80 //  80 - system broadcasts etc
#define USERCOLOR_PET_SPELLS                     0xFF +  81 //  81 - pet spells
#define USERCOLOR_PET_RESPONSES                  0xFF +  82 //  82 - pet responses
#define USERCOLOR_ITEM_SPEECH                    0xFF +  83 //  83 - item speech
#define USERCOLOR_STRIKETHROUGH                  0xFF +  84 //  84 - strikethrough messages
#define USERCOLOR_STUN                           0XFF +  85 //  85 - stun messages
#define USERCOLOR_RESERVED2                      0xFF +  86 //  86 - "unused at this time" (or unknown!?)
#define USERCOLOR_FELLOWSHIP                     0xFF +  87 //  87 - fellowship messages
#define USERCOLOR_NPC_SPEECH                     0xFF +  88 //  88 - npc dialogue
#define USERCOLOR_NPC_SPEECH_TO_YOU              0xFF +  89 //  89 - npc dialogue to you
#define USERCOLOR_GUILD_MSG                      0xFF +  90 //  90 - guild messages

#define DEITY_Bertoxxulous                       201
#define DEITY_BrellSerilis                       202
#define DEITY_CazicThule                         203
#define DEITY_ErollisiMarr                       204
#define DEITY_Bristlebane                        205
#define DEITY_Innoruuk                           206
#define DEITY_Karana                             207
#define DEITY_MithanielMarr                      208
#define DEITY_Prexus                             209
#define DEITY_Quellious                          210
#define DEITY_RallosZek                          211
#define DEITY_RodcetNife                         212
#define DEITY_SolusekRo                          213
#define DEITY_TheTribunal                        214
#define DEITY_Tunare                             215
#define DEITY_Veeshan                            216
#define NUM_DEITIES                              16

enum KeyRingType
{
	eMount = 0,
	eIllusion = 1,
	eFamiliar = 2,
	eHeroForge = 3,

	eKeyRingTypeCount = 4,
	eKeyRingTypeFirst = eMount,
	eKeyRingTypeLast = eHeroForge,
};
enum UIType;

constexpr int CMD_MQ = 1;
constexpr int CMD_EQ = 2;

#define LASTFIND_NOTFOUND                        96
#define LASTFIND_PRIMARY                         97

#define EVENT_CHAT                               0
#define EVENT_TIMER                              1
#define EVENT_CUSTOM                             2
#define EVENT_EVAL                               3
#define EVENT_EXEC                               4
#define EVENT_PULSE                              5
#define EVENT_SHUTDOWN                           6
#define EVENT_BREAK                              7
#define NUM_EVENTS                               8

constexpr int CHAT_SAY                         = 0x0001;
constexpr int CHAT_TELL                        = 0x0002;
constexpr int CHAT_OOC                         = 0x0004;
constexpr int CHAT_SHOUT                       = 0x0008;
constexpr int CHAT_AUC                         = 0x0010;
constexpr int CHAT_GUILD                       = 0x0020;
constexpr int CHAT_GROUP                       = 0x0040;
constexpr int CHAT_RAID                        = 0x0080;
constexpr int CHAT_CHAT                        = 0x0100;
#define CHATEVENT(x)                             (gEventChat & x)

constexpr int EQ_MAX_NAME                      = 64;
constexpr int EQ_MAX_LASTNAME                  = 32;
constexpr int EQ_MAX_STATION_ID                = 32;

// KeypressHandler__HandleKeyUp_x has this one
constexpr int nEQMappableCommands = 546;

// found using __BindList_x
constexpr int nNormalEQMappableCommands = nEQMappableCommands - 22;

constexpr int MAX_PC_LEVEL = 115;
constexpr int MAX_NPC_LEVEL = 200;
constexpr int MAX_SPELL_LEVEL = 255;
constexpr int NUM_SPELL_GEMS = 14;
constexpr int NUM_SPELL_SETS = 30;
constexpr int NUM_BUFF_SLOTS = 97;
constexpr int NUM_LONG_BUFFS = 42;
constexpr int NUM_SHORT_BUFFS = 55;
constexpr int NUM_RACES = 17;
constexpr int NUM_BLOCKED_BUFFS = 40;

constexpr int MAX_MEMORIZED_SPELLS = 18;

// need to find this one
constexpr int NUM_ALT_ABILITIES_ARRAY = 503;

// see 4FBD46 in eqgame.exe dated oct 29 2013 test
constexpr int NUM_ALT_ABILITIES = 49999;

// these two will merge when i get a chance - ieatacid wrote this?
constexpr int AA_CHAR_MAX = 245;

// EQ_PC__GetAlternateAbilityId_x
// size is at 7EE7F8 in eqgame dated jun 13 2014
constexpr int AA_CHAR_MAX_REAL = 300;

// found in CSpellBookWnd__GetBookSlot_x (see 7A7DD7 in Nov 29 2017 Beta)
// Find by searching for A1 ? ? ? ? 53 83 CB FF 85 C0 in IDA
constexpr int NUM_BOOK_SLOTS = 960;
constexpr int NUM_COMBAT_ABILITIES = 300;
constexpr int NUM_SKILLS = 100;
constexpr int NUM_INNATE = 25;
constexpr int CONCURRENT_SKILLS = 2;
constexpr int NUM_ITEM_SKILL_DMG_MOD = 9;  // the number of skill weapon mods


enum EQExpansion
{
	EQExpansionNone = 0,
	EQExpansionKunark = 1,
	EQExpansionVelious = 2,
	EQExpansionLuclin = 3,
	EQExpansionPOP = 4,
	EQExpansionYkesha = 5,
	EQExpansionLDON = 6,
	EQExpansionGates = 7,
	EQExpansionOOW = 8,
	EQExpansionDON = 9,
	EQExpansionDODH = 10,
	EQExpansionPOR = 11,
	EQExpansionTSS = 12,
	EQExpansionTBS = 13,
	EQExpansionSOF = 14,
	EQExpansionSOD = 15,
	EQExpansionUF = 16,
	EQExpansionHOT = 17,
	EQExpansionVOA = 18,
	EQExpansionROF = 19,
	EQExpansionCOTF = 20,
	EQExpansionTDS = 21,
	EQExpansionTBM = 22,
	EQExpansionEOK = 23,
	EQExpansionROS = 24,
	EQExpansionTBL = 25,
	EQExpansionTOV = 26,
	EQExpansionCOV = 27,
};

enum EQExpansionOwned
{
	EQExpansionNoneOwned = 0x00000000,
	EQExpansionKunarkOwned = 0x00000001,
	EQExpansionVeliousOwned = 0x00000002,
	EQExpansionLuclinOwned = 0x00000004,
	EQExpansionPOPOwned = 0x00000008,
	EQExpansionYkeshaOwned = 0x00000010,
	EQExpansionLDONOwned = 0x00000020,
	EQExpansionGatesOwned = 0x00000040,
	EQExpansionOOWOwned = 0x00000080,
	EQExpansionDONOwned = 0x00000100,
	EQExpansionDODHOwned = 0x00000200,
	EQExpansionPOROwned = 0x00000400,
	EQExpansionTSSOwned = 0x00000800,
	EQExpansionTBSOwned = 0x00001000,
	EQExpansionSOFOwned = 0x00002000,
	EQExpansionSODOwned = 0x00004000,
	EQExpansionUFOwned = 0x00008000,
	EQExpansionHOTOwned = 0x00010000,
	EQExpansionVOAOwned = 0x00020000,
	EQExpansionROFOwned = 0x00040000,
	EQExpansionCOTFOwned = 0x00080000,
	EQExpansionTDSOwned = 0x00100000,
	EQExpansionTBMOwned = 0x00200000,
	EQExpansionEOKOwned = 0x00400000,
	EQExpansionROSOwned = 0x00800000,
	EQExpansionTBLOwned = 0x01000000,
	EQExpansionTOVOwned = 0x02000000,
	EQExpansionCOVOwned = 0x04000000,

	EQExpansionAllOwned = 0x01ffffff,
};

#define EQ_EXPANSION(x)                          (1 << (x - 1))
#define EXPANSION_RoK                            EQ_EXPANSION(1)
#define EXPANSION_SoV                            EQ_EXPANSION(2)
#define EXPANSION_SoL                            EQ_EXPANSION(3)
#define EXPANSION_PoP                            EQ_EXPANSION(4)
#define EXPANSION_LoY                            EQ_EXPANSION(5)
#define EXPANSION_LDoN                           EQ_EXPANSION(6)
#define EXPANSION_GoD                            EQ_EXPANSION(7)
#define EXPANSION_OoW                            EQ_EXPANSION(8)
#define EXPANSION_DoN                            EQ_EXPANSION(9)
#define EXPANSION_DoD                            EQ_EXPANSION(10)
#define EXPANSION_PoR                            EQ_EXPANSION(11)
#define EXPANSION_TSS                            EQ_EXPANSION(12)
#define EXPANSION_TBS                            EQ_EXPANSION(13)
#define EXPANSION_SoF                            EQ_EXPANSION(14)
#define EXPANSION_SoD                            EQ_EXPANSION(15)
#define EXPANSION_UFT                            EQ_EXPANSION(16)
#define EXPANSION_HoT                            EQ_EXPANSION(17)
#define EXPANSION_VoA                            EQ_EXPANSION(18)
#define EXPANSION_RoF                            EQ_EXPANSION(19)
#define EXPANSION_CotF                           EQ_EXPANSION(20)
#define EXPANSION_TDS                            EQ_EXPANSION(21)
#define EXPANSION_TBM                            EQ_EXPANSION(22)
#define EXPANSION_EoK                            EQ_EXPANSION(23)
#define EXPANSION_RoS                            EQ_EXPANSION(24)
#define EXPANSION_TBL                            EQ_EXPANSION(25)
#define EXPANSION_TOV                            EQ_EXPANSION(26)
#define EXPANSION_COV                            EQ_EXPANSION(27)
constexpr int NUM_EXPANSIONS = 27;

// LDON Dungeon themes. This is a bitmask.
constexpr int LDON_None = 0;
constexpr int LDON_DG = 1;      // deepest guk
constexpr int LDON_MIR = 2;      // miragul's menagerie
constexpr int LDON_MIS = 4;      // Mistmoore catacombs
constexpr int LDON_RUJ = 8;      // rujarkian hills
constexpr int LDON_TAK = 16;     // takish-hiz


enum eFilterSkill
{
	FILTERSKILL_ALL = 0,
	FILTERSKILL_INCREASE = 1,
	FILTERSKILL_NONE = 2,
};

enum eFilterMacro
{
	FILTERMACRO_ALL = 0,
	FILTERMACRO_ENHANCED = 1,
	FILTERMACRO_NONE = 2,
	FILTERMACRO_MACROENDED = 3,

	FILTERMACRO_MAX,
};

// Inventory Slots
enum eInventorySlot
{
	InvSlot_Charm = 0,
	InvSlot_LeftEar,
	InvSlot_Head,
	InvSlot_Face,
	InvSlot_RightEar,
	InvSlot_Neck,
	InvSlot_Shoulders,
	InvSlot_Arms,
	InvSlot_Back,
	InvSlot_LeftWrist,
	InvSlot_RightWrist,
	InvSlot_Range,
	InvSlot_Hands,
	InvSlot_Primary,
	InvSlot_Secondary,
	InvSlot_LeftFingers,
	InvSlot_RightFingers,
	InvSlot_Chest,
	InvSlot_Legs,
	InvSlot_Feet,
	InvSlot_Waist,
	InvSlot_PowerSource,
	InvSlot_Ammo,
	InvSlot_Bag1,
	InvSlot_Bag2,
	InvSlot_Bag3,
	InvSlot_Bag4,
	InvSlot_Bag5,
	InvSlot_Bag6,
	InvSlot_Bag7,
	InvSlot_Bag8,
	InvSlot_Bag9,
	InvSlot_Bag10,
	InvSlot_Held,

	InvSlot_Max,

	InvSlot_FirstWornItem = InvSlot_Charm,
	InvSlot_LastWornItem = InvSlot_Ammo,
	InvSlot_FirstBagSlot = InvSlot_Bag1,
	InvSlot_LastBagSlot = InvSlot_Bag10,
	InvSlot_Cursor = InvSlot_Held,
	InvSlot_NumInvSlots = InvSlot_Held,      // held is not technically an item in the inventory (its the cursor)

	// Somebody typeo'd this a long time ago.
	InvSlot_LastBagsLot DEPRECATE("Use InvSlot_LastBagSlot instead") = InvSlot_LastBagSlot,
};

constexpr int NUM_INV_SLOTS = InvSlot_NumInvSlots;
constexpr int BAG_SLOT_START = InvSlot_Bag1;

constexpr int NUM_BAG_SLOTS = InvSlot_LastBagSlot - InvSlot_FirstBagSlot + 1;
constexpr int NUM_WORN_ITEMS = InvSlot_LastWornItem - InvSlot_FirstWornItem + 1;

static_assert(InvSlot_LastWornItem < 32,
              "InvSlot_LastWornItem is >= 32. This is problematic for EquipSlots on ItemDefinition!");

constexpr int NUM_SHAREDBANK_SLOTS = 6;

constexpr int NUM_BANK_SLOTS = 24;
constexpr int MAX_GIVE_SLOTS = 4;
constexpr int MAX_TRADE_SLOTS = 16;

constexpr int ITEMTYPE_NORMAL = 0;
constexpr int ITEMTYPE_PACK = 1;
constexpr int ITEMTYPE_BOOK = 2;

constexpr int MAX_AUG_SOCKETS = 6;

enum eItemSize
{
	ItemSize_Tiny = 0,
	ItemSize_Small = 1,
	ItemSize_Medium = 2,
	ItemSize_Large = 3,
	ItemSize_Giant = 4,
};

enum eItemClass : uint8_t
{
	ItemClass_1HSlashing           = 0,
	ItemClass_2HSlashing           = 1,
	ItemClass_Piercing             = 2,
	ItemClass_1HBlunt              = 3,
	ItemClass_2HBlunt              = 4,
	ItemClass_Bow                  = 5,
	ItemClass_Thrown               = 7,
	ItemClass_Shield               = 8,
	ItemClass_Armor                = 10,
	ItemClass_Misc                 = 11,
	ItemClass_LockPicks            = 12,
	ItemClass_Food                 = 14,
	ItemClass_Drink                = 15,
	ItemClass_LightSource          = 16,
	ItemClass_Combinable           = 17,
	ItemClass_Bandages             = 18,
	ItemClass_Ammo                 = 19,
	ItemClass_Spell                = 20,
	ItemClass_Potion               = 21,
	ItemClass_WindInstrument       = 23,
	ItemClass_StringInstrument     = 24,
	ItemClass_BrassInstrument      = 25,
	ItemClass_PercussionInstrument = 26,
	ItemClass_Arrow                = 27,
	ItemClass_Jewelry              = 29,
	ItemClass_Skull                = 30,
	ItemClass_Book                 = 31,
	ItemClass_Note                 = 32,
	ItemClass_Key                  = 33,
	ItemClass_Coin                 = 34,
	ItemClass_2HPiercing           = 35,
	ItemClass_FishingPole          = 36,
	ItemClass_FishingBait          = 37,
	ItemClass_Alcohol              = 38,
	ItemClass_KeyV2                = 39,
	ItemClass_Compass              = 40,
	ItemClass_Poison               = 42,
	ItemClass_Martial              = 45,
	ItemClass_Charm                = 52,
	ItemClass_ArmorDye             = 53,
	ItemClass_Augmentation         = 54,
	ItemClass_AugSolvent           = 55,
	ItemClass_AugDistiller         = 56,
	ItemClass_Banner               = 58,
	ItemClass_RecipeBook           = 60,
	ItemClass_AltCurrency          = 63,
	ItemClass_PerfectedDistiller   = 64,
	ItemClass_Mount                = 68,
	ItemClass_Illusion             = 69,
	ItemClass_Familiar             = 70,

	ItemClass_None                 = 255,
};

inline namespace deprecated {
	constexpr int ITEMITEMTYPE_FOOD DEPRECATE("Use ItemClass_Food instead of ITEMITEMTYPE_FOOD") = ItemClass_Food;
	constexpr int ITEMITEMTYPE_WATER DEPRECATE("Use ItemClass_Drink instead of ITEMITEMTYPE_WATER") = ItemClass_Drink;
	constexpr int ITEMITEMTYPE_SCROLL DEPRECATE("Use ItemClass_Spell instead of ITEMITEMTYPE_SCROLL") = ItemClass_Spell;
	constexpr int ITEMITEMTYPE_ALCOHOL DEPRECATE("Use ItemClass_Alcohol instead of ITEMITEMTYPE_ALCOHOL") = ItemClass_Alcohol;
	constexpr int ITEMITEMTYPE_POISON DEPRECATE("Use ItemClass_Poison instead of ITEMITEMTYPE_POISON") = ItemClass_Poison;
	constexpr int ITEMITEMTYPE_AUGUMENT DEPRECATE("Use ItemClass_Augmentation instead of ITEMITEMTYPE_AUGUMENT") = ItemClass_Augmentation;
}

enum eBandolierSlot
{
	BandolierSlot_Primary = 0,
	BandolierSlot_Secondary,
	BandolierSlot_Ranged,
	BandolierSlot_Ammo,

	BandolierSlot_Max,
};

constexpr int MAX_BANDOLIER_ITEMS = 20;
constexpr int MAX_BANDOLIER_SLOTS = BandolierSlot_Max;

enum eContainerType
{
	ContainerType_Quiver = 2,
};

// AltCurrency values
enum ALTCURRENCY
{
	ALTCURRENCY_DOUBLOONS = 10, // TBS
	ALTCURRENCY_ORUX = 11, // TBS
	ALTCURRENCY_PHOSPHENES = 12, // TBS
	ALTCURRENCY_PHOSPHITES = 13, // TBS
	ALTCURRENCY_FAYCITES = 14, // SoF
	ALTCURRENCY_CHRONOBINES = 15, // SoD
	ALTCURRENCY_SILVERTOKENS = 16, // UF
	ALTCURRENCY_GOLDTOKENS = 17, // UF
	ALTCURRENCY_MCKENZIE = 18, // SoD
	ALTCURRENCY_BAYLE = 19, // SoD
	ALTCURRENCY_RECLAMATION = 20, // EQ
	ALTCURRENCY_BRELLIUM = 21, // UF
	ALTCURRENCY_MOTES = 22, // HoT
	ALTCURRENCY_REBELLIONCHITS = 23, // VoA
	ALTCURRENCY_DIAMONDCOINS = 24, // VoA
	ALTCURRENCY_BRONZEFIATS = 25, // VoA
	ALTCURRENCY_VOUCHER = 26, // TDS
	ALTCURRENCY_VELIUMSHARDS = 27, // RoF
	ALTCURRENCY_CRYSTALLIZEDFEAR = 28, // RoF
	ALTCURRENCY_SHADOWSTONES = 29, // RoF
	ALTCURRENCY_DREADSTONES = 30, // RoF
	ALTCURRENCY_MARKSOFVALOR = 31, // CoTF
	ALTCURRENCY_MEDALSOFHEROISM = 32, // CoTF
	ALTCURRENCY_COMMEMORATIVE_COINS = 33, // VoA
	ALTCURRENCY_FISTSOFBAYLE = 34, // CoTF
	ALTCURRENCY_NOBLES = 35, // EQ
	ALTCURRENCY_ENERGYCRYSTALS = 36, // TDS
	ALTCURRENCY_PIECESOFEIGHT = 37, // TDS
	ALTCURRENCY_REMNANTSOFTRANQUILITY = 38, // TBM
	ALTCURRENCY_BIFURCATEDCOIN = 39, // TBM
	ALTCURRENCY_ADOPTIVE = 40, // EQ
	ALTCURRENCY_SATHIRSTRADEGEMS = 41, // EoK
	ALTCURRENCY_ANCIENTSEBILISIANCOINS = 42, // EoK
	ALTCURRENCY_BATHEZIDTRADEGEMS = 43, // RoS
	ALTCURRENCY_ANCIENTDRACONICCOIN = 44, // RoS
	ALTCURRENCY_FETTERREDIFRITCOINS = 45, // TBL
	ALTCURRENCY_ENTWINEDDJINNCOINS = 46, // TBL
	ALTCURRENCY_CRYSTALLIZEDLUCK = 47, // TBL
	ALTCURRENCY_FROSTSTONEDUCAT = 48, // ToV Group
	ALTCURRENCY_WARLORDSSYMBOL = 49, // ToV Raid
	ALTCURRENCY_OVERSEERTETRADRACHM = 50, // Overseer
	ALTCURRENCY_RESTLESSMARK = 51, // CoV
	ALTCURRENCY_WARFORGEDEMBLEM = 52, // CoV
};

enum ETargetRelationship
{
	eTargetNone = 0,
	eTargetSelf,
	eTargetPet,
	eTargetMyPet,
	eTargetMyMercenary,
	eTargetGroup,
	eTargetOtherPC,
	eTargetOtherMercenary,
	eTargetOtherNPC
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

enum ePetCommandType
{
	PCT_ReportHealth,
	PCT_WhoLeader,
	PCT_Attack,
	PCT_QueueAttack,
	PCT_ToggleFollow,
	PCT_ToggleGuard,
	PCT_ToggleSit,
	PCT_SitOn,
	PCT_SitOff,
	PCT_ToggleStop,
	PCT_StopOn,
	PCT_StopOff,
	PCT_ToggleTaunt,
	PCT_TauntOn,
	PCT_TauntOff,
	PCT_ToggleHold,
	PCT_HoldOn,
	PCT_HoldOff,
	PCT_ToggleGHold,
	PCT_GHoldOn,
	PCT_GHoldOff,
	PCT_ToggleSpellHold,
	PCT_SpellHoldOn,
	PCT_SpellHoldOff,
	PCT_ToggleFocus,
	PCT_FocusOn,
	PCT_FocusOff,
	PCT_FeignDeath,
	PCT_BackOff,
	PCT_GetLost,
	PCT_TargetPet,
	PCT_ToggleRegroup,
	PCT_RegroupOn,
	PCT_RegroupOff,
	PCT_Something,
	PCT_Something2,
	PCT_DoNothing
};

enum eMembershipLevel
{
	MembershipFreeToPlay = 0,
	MembershipSilver,
	MembershipGold
};

// Camera modes
constexpr int EQ_FIRST_PERSON_CAM = 0;
constexpr int EQ_OVERHEAD_CAM = 1;
constexpr int EQ_CHASE_CAM = 2;
constexpr int EQ_USER_CAM_1 = 3;
constexpr int EQ_USER_CAM_2 = 4;

// Spell targeting types
constexpr int TT_PBAE = 4;
constexpr int TT_TARGETED_AE = 8;
constexpr int TT_AE_PC_V2 = 40;
constexpr int TT_DIRECTIONAL = 42;
constexpr int TT_SPLASH = 45;

// Mercs
constexpr int MERC_ALT_ABILITY_COUNT = 12;
constexpr int EQ_MAX_MERCENARIES = 11;

// Groups
constexpr int MAX_GROUP_SIZE = 6;
constexpr int MAX_GROUP_ASSISTS = 1;
constexpr int MAX_GROUP_MARK_TARGETS = 3;

// Raids
constexpr int MAX_RAID_NOTE = 64;
constexpr int MAX_RAID_LOOTERS = 19;
constexpr int MAX_RAID_SIZE = 72;
constexpr int MAX_RAID_MOTD = 1024;
constexpr int MAX_RAID_ASSISTS = 3;
constexpr int MAX_RAID_MARK_TARGETS = 3;
constexpr int MAX_RAID_MARKERS = 3;

constexpr int MAX_MOVEMENT_STATS = 20;

// misc
enum eParcelStatus
{
	eParcelStatusNoParcels = 0,
	eParcelStatusHasParcels,
	eParcelStatusOverfilled,

	// Use the ones above instead...
	ePS_NoParcels = eParcelStatusNoParcels,
	ePS_HasParcels = eParcelStatusHasParcels,
	ePS_OverParcelsLimit = eParcelStatusOverfilled,
};

enum class ServerID : int {
	Antonius = 100,
	Bertox = 102,
	Bristle = 104,
	Cazic = 105,
	Drinal = 106,
	Erollisi = 109,
	Firiona = 111,
	Luclin = 116,
	Povar = 123,
	Rathe = 127,
	Tunare = 140,
	Xegony = 144,
	Zek = 147,
	Trakanon = 155,
	Fippy = 156,
	Vulak = 157,
	Vox = 158,
	Ragefire = 159,
	Lockjaw = 160,
	Brekt = 162,
	Mayong = 163,
	Rizlona = 169,

	NumServers = 22,
	Invalid = -1,
};


// zones
constexpr int ZONE_COUNT = 843;

} // namespace eqlib
