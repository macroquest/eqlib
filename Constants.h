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

#include "BuildType.h"
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
	Magician = 13,
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
	GM_First = GM_Warrior,
	GM_Last = GM_Berserker,

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
	Class_RealEstateMerchant = 72,
	Class_LoyaltyMerchant = 73,
	Class_TributeMaster2 = 74,

	TotalPlayerClasses = Berserker,
	TotalClasses = TotalPlayerClasses + 1,

	// Special MQ-only values
	MQClass_CampFire = 253,
	MQClass_Banner = 254,
	MQClass_Aura = 255,
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

enum CharacterProperty
{
	CharacterProperty_None = 0,
	CharacterProperty_Humanoid = 1,
	CharacterProperty_Lycanthrope = 2, // Deprecated
	CharacterProperty_Undead = 3,
	CharacterProperty_Giant = 4,
	CharacterProperty_Construct = 5,
	CharacterProperty_Extraplanar = 6,
	CharacterProperty_Magical = 7,
	CharacterProperty_SummonedUndead = 8,  // now: Summoned Pet
	CharacterProperty_BaneGiant = 9, // Deprecated
	CharacterProperty_BaneColdain = 10, // Deprecated
	CharacterProperty_Untargetable = 11,
	CharacterProperty_Vampire = 12, // Deprecated
	CharacterProperty_AtenhaRa = 13, // Deprecated
	CharacterProperty_GreaterAkheva = 14,
	CharacterProperty_KhatiSha = 15, // Deprecated
	CharacterProperty_Seru = 16, // Deprecated
	CharacterProperty_Greig = 17, // Deprecated
	CharacterProperty_DrazNurakk = 18,
	CharacterProperty_Zek = 19,
	CharacterProperty_Luggald = 20, // Deprecated
	CharacterProperty_Animal = 21,
	CharacterProperty_Insect = 22, // Deprecated
	CharacterProperty_Monster = 23, // Deprecated
	CharacterProperty_Elemental = 24, // Deprecated
	CharacterProperty_Plant = 25,
	CharacterProperty_Dragon = 26,
	CharacterProperty_SummonedElemental = 27, // Deprecated
	CharacterProperty_SummonedCreature = 28, // Deprecated
	CharacterProperty_PuffDragon = 29,
	CharacterProperty_BaneDragon = 30, // Deprecated
	CharacterProperty_Familiar = 31,
	CharacterProperty_NoCorpse = 32,
	CharacterProperty_Cursed = 33,
	CharacterProperty_Muramite = 34, // Deprecated
	CharacterProperty_MonsterSummoning = 64,

	CharacterProperty_Utility = 100,
	CharacterProperty_Trap,
	CharacterProperty_Companion,
	CharacterProperty_Suicide,

	CharacterProperty_Last,
};


constexpr int MAX_LANGUAGES = 32;

// player types
constexpr int EQP_PC = 0;
constexpr int EQP_NPC = 1;
constexpr int EQP_CORPSE = 2;

// player races
constexpr int EQR_HUMAN                                = 1;
constexpr int EQR_BARBARIAN                            = 2;
constexpr int EQR_ERUDITE                              = 3;
constexpr int EQR_ELF                                  = 4;
constexpr int EQR_HIGH_ELF                             = 5;
constexpr int EQR_DARK_ELF                             = 6;
constexpr int EQR_HALF_ELF                             = 7;
constexpr int EQR_DWARF                                = 8;
constexpr int EQR_TROLL                                = 9;
constexpr int EQR_OGRE                                 = 10;
constexpr int EQR_HALFLING                             = 11;
constexpr int EQR_GNOME                                = 12;
constexpr int EQR_SKELETON                             = 60;
constexpr int EQR_INVISIBLE_MAN                        = 127;
constexpr int EQR_IKSAR                                = 128;
constexpr int EQR_VAHSHIR                              = 130;
constexpr int EQR_FROGLOCK                             = 330;
constexpr int EQR_SKELETON_NEW                         = 367;
constexpr int EQR_BANNER                               = 500;
constexpr int EQR_SPIKE_TRAP                           = 513;
constexpr int EQR_TOTEM                                = 514;
constexpr int EQR_DRAKKIN                              = 522;
constexpr int EQR_BANNER0                              = 553;
constexpr int EQR_BANNER1                              = 554;
constexpr int EQR_BANNER2                              = 555;
constexpr int EQR_BANNER3                              = 556;
constexpr int EQR_BANNER4                              = 557;

constexpr int EQR_CAMPSITE                             = 567;
constexpr int EQR_TCGBANNER                            = 586;
constexpr int EQR_OEQ_SKELETON                         = 802;
constexpr int EQR_SOL_SKELETON                         = 803;

// property types
enum PlayerProperty {
	PlayerProperty_None = 0,
	PlayerProperty_Humanoid = 1,

	PlayerProperty_Utility,
	PlayerProperty_Trap,
	PlayerProperty_Companion,

};

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

// UserColor values start with the first value at 256. These can have colors assigned by the user and filtered as well.
#define USERCOLOR_SAY                            256 // 1  - Say
#define USERCOLOR_TELL                           257 // 2  - Tell
#define USERCOLOR_GROUP                          258 // 3  - Group
#define USERCOLOR_GUILD                          259 // 4  - Guild
#define USERCOLOR_OOC                            260 // 5  - OOC
#define USERCOLOR_AUCTION                        261 // 6  - Auction
#define USERCOLOR_SHOUT                          262 // 7  - Shout
#define USERCOLOR_EMOTE                          263 // 8  - Emote
#define USERCOLOR_SPELLS                         264 // 9  - Spells (memming, scribing, casting, etc.)
#define USERCOLOR_YOU_HIT_OTHER                  265 // 10 - You hit other
#define USERCOLOR_OTHER_HIT_YOU                  266 // 11 - Other hits you
#define USERCOLOR_YOU_MISS_OTHER                 267 // 12 - You miss other
#define USERCOLOR_OTHER_MISS_YOU                 268 // 13 - Other misses you
#define USERCOLOR_DUELS                          269 // 14 - Broadcasts (duels, etc)
#define USERCOLOR_SKILLS                         270 // 15 - Skills (ups, non-combat use, etc.)
#define USERCOLOR_DISCIPLINES                    271 // 16 - Disciplines or special abilities
#define USERCOLOR_UNUSED001                      272 // 17 - Unused at this time
#define USERCOLOR_DEFAULT                        273 // 18 - Default text and stuff you type
#define USERCOLOR_FACTION                        274 // 19 - Faction Messages
#define USERCOLOR_MERCHANT_OFFER                 275 // 20 - Merchant Offer Price
#define USERCOLOR_MERCHANT_EXCHANGE              276 // 21 - Merchant Buy/Sell
#define USERCOLOR_YOUR_DEATH                     277 // 22 - Your death message
#define USERCOLOR_OTHER_DEATH                    278 // 23 - Others death message
#define USERCOLOR_OTHER_HIT_OTHER                279 // 24 - Other damage other
#define USERCOLOR_OTHER_MISS_OTHER               280 // 25 - Other miss other
#define USERCOLOR_WHO                            281 // 26 - /who command
#define USERCOLOR_YELL                           282 // 27 - yell for help
#define USERCOLOR_NON_MELEE                      283 // 28 - Spell Damage
#define USERCOLOR_SPELL_WORN_OFF                 284 // 29 - Spell worn off
#define USERCOLOR_MONEY_SPLIT                    285 // 30 - Money splits
#define USERCOLOR_LOOT                           286 // 31 - Loot message
#define USERCOLOR_RANDOM                         287 // 32 - Dice Roll (/random)
#define USERCOLOR_OTHERS_SPELLS                  288 // 33 - Others spells
#define USERCOLOR_SPELL_FAILURE                  289 // 34 - Spell Failures (resists, fizzles, missing component, bad target, etc.)
#define USERCOLOR_CHAT_CHANNEL                   290 // 35 - Chat Channel Messages
#define USERCOLOR_CHAT_1                         291 // 36 - Chat Channel 1
#define USERCOLOR_CHAT_2                         292 // 37 - Chat Channel 2
#define USERCOLOR_CHAT_3                         293 // 38 - Chat Channel 3
#define USERCOLOR_CHAT_4                         294 // 39 - Chat Channel 4
#define USERCOLOR_CHAT_5                         295 // 40 - Chat Channel 5
#define USERCOLOR_CHAT_6                         296 // 41 - Chat Channel 6
#define USERCOLOR_CHAT_7                         297 // 42 - Chat Channel 7
#define USERCOLOR_CHAT_8                         298 // 43 - Chat Channel 8
#define USERCOLOR_CHAT_9                         299 // 44 - Chat Channel 9
#define USERCOLOR_CHAT_10                        300 // 45 - Chat Channel 10
#define USERCOLOR_MELEE_CRIT                     301 // 46 - Melee Crits (Yours)
#define USERCOLOR_SPELL_CRIT                     302 // 47 - Spell & Dot Crits (Yours)
#define USERCOLOR_TOO_FAR_AWAY                   303 // 48 - Too far away (melee)
#define USERCOLOR_NPC_RAMPAGE                    304 // 49 - NPC Rampage
#define USERCOLOR_NPC_FLURRY                     305 // 50 - NPC Flurry
#define USERCOLOR_NPC_ENRAGE                     306 // 51 - NPC Enrage
#define USERCOLOR_ECHO_SAY                       307 // 52 - say echo
#define USERCOLOR_ECHO_TELL                      308 // 53 - tell echo
#define USERCOLOR_ECHO_GROUP                     309 // 54 - group echo
#define USERCOLOR_ECHO_GUILD                     310 // 55 - guild echo
#define USERCOLOR_ECHO_OOC                       311 // 56 - group echo
#define USERCOLOR_ECHO_AUCTION                   312 // 57 - auction echo
#define USERCOLOR_ECHO_SHOUT                     313 // 58 - shout echo
#define USERCOLOR_ECHO_EMOTE                     314 // 59 - emote echo
#define USERCOLOR_ECHO_CHAT_1                    315 // 60 - chat 1 echo
#define USERCOLOR_ECHO_CHAT_2                    316 // 61 - chat 2 echo
#define USERCOLOR_ECHO_CHAT_3                    317 // 62 - chat 3 echo
#define USERCOLOR_ECHO_CHAT_4                    318 // 63 - chat 4 echo
#define USERCOLOR_ECHO_CHAT_5                    319 // 64 - chat 5 echo
#define USERCOLOR_ECHO_CHAT_6                    320 // 65 - chat 6 echo
#define USERCOLOR_ECHO_CHAT_7                    321 // 66 - chat 7 echo
#define USERCOLOR_ECHO_CHAT_8                    322 // 67 - chat 8 echo
#define USERCOLOR_ECHO_CHAT_9                    323 // 68 - chat 9 echo
#define USERCOLOR_ECHO_CHAT_10                   324 // 69 - chat 10 echo
#define USERCOLOR_AVATAR_CMD                     325 // 70 - Avatar Command Output
#define USERCOLOR_LINK                           326 // 71 - Item Links
#define USERCOLOR_RAID                           327 // 72 - Raid Say
#define USERCOLOR_PET                            328 // 73 - My Pet Melee
#define USERCOLOR_DAMAGESHIELD                   329 // 74 - damage shield hits you
#define USERCOLOR_LEADER                         330 // 75 - Group / Raid Role messages
#define USERCOLOR_PETRAMPFLURRY                  331 // 76 - pet rampage/flurry
#define USERCOLOR_PETCRITS                       332 // 77 - pet's critical hits
#define USERCOLOR_FOCUS                          333 // 78 - focus item activation
#define USERCOLOR_XP                             334 // 79 - xp gain/loss
#define USERCOLOR_SYSTEM                         335 // 80 - system broadcasts etc
#define USERCOLOR_PET_SPELLS                     336 // 81 - pet spells
#define USERCOLOR_PET_RESPONSES                  337 // 82 - pet responses
#define USERCOLOR_ITEM_SPEECH                    338 // 83 - item speech
#define USERCOLOR_STRIKETHROUGH                  339 // 84 - strikethrough messages
#define USERCOLOR_STUN                           340 // 85 - stun messages
#define USERCOLOR_SWARM_PET_DEATH                341 // 86 - Swarm Pet Death
#define USERCOLOR_FELLOWSHIP                     342 // 87 - fellowship messages
#define USERCOLOR_NPC_SPEECH                     343 // 88 - npc dialogue
#define USERCOLOR_NPC_SPEECH_TO_YOU              344 // 89 - npc dialogue to you
#define USERCOLOR_GUILD_MSG                      345 // 90 - guild messages
#if IS_EXPANSION_LEVEL(EXPANSION_LEVEL_ROF + 1)
#define USERCOLOR_MERCENARY_GRP                  346 // 91 - mercenary tells group
#define USERCOLOR_ACHIEVEMENT                    347 // 92 - Achievement Links
#define USERCOLOR_ACHIEVEMENT_EMOTE              348 // 93 - Emote achievement messages
#define USERCOLOR_ACHIEVEMENT_GUILD              349 // 94 - Guild achievement messages
#define USERCOLOR_PVP                            350 // 95 - PvP Messages
#define USERCOLOR_HOTBUTTON_COOLDOWN             351 // 96 - Hotbutton Cooldown Overlay
#define USERCOLOR_AGGRO_LOW                      352 // 97 - Aggro Labels - Low
#define USERCOLOR_AGGRO_WARNING                  353 // 98 - Aggro Labels - Warning
#define USERCOLOR_AGGRO_MOST                     354 // 99 - Aggro Labels - Most
#define USERCOLOR_DIALOG_LINK                    355 // 100 - Dialog [Response] Links
#define USERCOLOR_FLURRY                         356 // 101 - Flurry (Self)
#define USERCOLOR_DEBUG                          357 // 102 - Debug Output
#define USERCOLOR_NPC_DEATH                      358 // 103 - Death Notification - NPCs
#define USERCOLOR_DICE_OTHER                     359 // 104 - Dice Roll (/random) - Others
#define USERCOLOR_DICE_GROUP                     360 // 105 - Dice Roll (/random) - Group / Raid
#define USERCOLOR_FALL_DAMAGE_SELF               361 // 106 - Environmental Damage (Yours)
#define USERCOLOR_FALL_DAMAGE_OTHER              362 // 107 - Environmental Damage (Others)
#define USERCOLOR_DAMAGESHIELD_SELF              363 // 108 - Damage Shield Self
#define USERCOLOR_DAMAGESHIELD_OTHER             364 // 109 - Damage Shield Other hit Other
#define USERCOLOR_EVENT                          365 // 110 - Event Messages
#define USERCOLOR_OVERWRITTEN_DET                366 // 111 - Spell Overwritten (Detrimental)
#define USERCOLOR_OVERWRITTEN_BENE               367 // 112 - Spell Overwritten (Beneficial)
#define USERCOLOR_CANT_USE_COMMAND               368 // 113 - Can't Use Command Warning
#define USERCOLOR_ABILITY_COOLDOWN               369 // 114 - Combat Ability Reuse - You can use [Ability Name] again in [Time till you can use it again]
#define USERCOLOR_AA_REUSE_TIMER                 370 // 115 - AA Reuse Timer failed
#define USERCOLOR_DESTROY_ITEM                   371 // 116 - Destroy Item Message
#define USERCOLOR_AURAS_YOU                      372 // 117 - Auras (You)
#define USERCOLOR_AURAS_OTHER                    373 // 118 - Auras (Others)
#define USERCOLOR_HEALS_YOU                      374 // 119 - Heals (You)
#define USERCOLOR_HEALS_OTHERS                   375 // 120 - Heals (Others)
#define USERCOLOR_DOTS_YOURS                     376 // 121 - DoTs (Yours)
#define USERCOLOR_DOTS_OTHERS                    377 // 122 - DoTs (Others)
#define USERCOLOR_BARD_SONG_PETS                 378 // 123 - Bard Songs on Pets
#define USERCOLOR_DIRECT_DAMAGE_OTHERS           379 // 124 - Direct Damage (Others)
#define USERCOLOR_SPELL_MESSAGES                 380 // 125 - Spell Emotes
#define USERCOLOR_FACTION_LINK                   381 // 126 - Faction Links
#define USERCOLOR_TAUNT_MESSAGES                 382 // 127 - Taunt Messages
#define USERCOLOR_DISCIPLINES_OTHER              383 // 128 - Combat Abilities / Disciplines (Others)
#define USERCOLOR_ITEM_STAT_POSITIVE             384 // 129 - Item Stat Positive
#define USERCOLOR_ITEM_STAT_NEGATIVE             385 // 130 - Item Stat Negative
#endif

constexpr int NUM_CHAT_FILTERS = 34;
constexpr int NUM_CHAT_COLORFILTERS = 143;

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
	eTeleportationItem = 4,

	eKeyRingTypeCount = 5,
	eKeyRingTypeFirst = eMount,
	eKeyRingTypeLast = eTeleportationItem,
};
enum UIType;

constexpr int CMD_MQ = 1;
constexpr int CMD_EQ = 2;

// Commonly used Keybind Commands. These can be found via FindMappableCommand.
enum KeybindCommand
{
	CMD_AUTORUN = 0,
	CMD_JUMP,
	CMD_FORWARD,
	CMD_BACK,
	CMD_RIGHT,
	CMD_LEFT,
	CMD_STRAFE_LEFT,
	CMD_STRAFE_RIGHT,

	CMD_DUCK = 12,
	CMD_RUN_WALK = 284,
};

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
constexpr int EQ_ACTOR_TAG                     = 64;

constexpr int NUM_REPLY_NAMES = 50;

constexpr int NUM_SOCIAL_PAGES = 10;
constexpr int SOCIALS_PER_PAGE = 12;
constexpr int SOCIAL_NAME_LEN = 16;
constexpr int SOCIAL_NUM_LINES = 5;
constexpr int SOCIAL_LINE_LEN = 256;

constexpr int NUM_HOTBUTTON_WINDOWS = 11;
constexpr int NUM_HOTBUTTON_PAGES = 10;
constexpr int HOTBUTTONS_PER_PAGE = 12;

// KeypressHandler__HandleKeyUp_x has this one
constexpr int nEQMappableCommands = 500;

// found using __BindList_x
constexpr int nNormalEQMappableCommands = nEQMappableCommands - 22;

constexpr int MAX_PC_LEVEL = 100;
constexpr int MAX_NPC_LEVEL = 200;
constexpr int MAX_SPELL_LEVEL = 255;
constexpr int NUM_SPELL_GEMS = 12;
constexpr int NUM_SPELL_SETS = 10;

constexpr int NUM_HOTBUTTON_SETS = 100;
constexpr int NUM_GROUP_ROLE_SETS = 10;
constexpr int NUM_XTARGET_SETS = 10;

constexpr int NUM_RACES = 17;
constexpr int NUM_BLOCKED_BUFFS = 30;

// The number of lbuffs that are displayable in the buffs window. Also used to
// hold these buffs in the profile.
constexpr int NUM_LONG_BUFFS = 42;
// ideally this is the number of short buffs but that name is already taken...
// This represents the number of short duration buffs that can display in the
// short duration buff window.
constexpr int NUM_SONG_BUFFS = 30;

// The maximum number of buff icons supported.
constexpr int MAX_BUFF_ICONS = 42;

// Number of temporary buffs stored in the profile.
// This is the number of songs + 1 (for active combat discipline)
constexpr int NUM_TEMP_BUFFS = 55;

// Old number for temp buffs included NPC buffs because of shared code.
constexpr int NUM_TEMP_BUFFS_NPC = NUM_TEMP_BUFFS;

// this is misnamed, the "Short buffs" in the profile is simply just all temporary buffs
// not necessary the short buffs window. You'll also note that its 55 instead of 30...
constexpr int NUM_SHORT_BUFFS = NUM_TEMP_BUFFS;

// This holds the total number of buffs stored in the profile, NOT the number of buffs
// displayable on the screen in the buffs+shortbuffs ui. NPCs can have more buffs/debuffs
// that players, that is where this total value comes from.
constexpr int MAX_TOTAL_BUFFS = NUM_LONG_BUFFS + NUM_TEMP_BUFFS;

// Holds the total number of buffs for an NPC (target / pet)
constexpr int MAX_TOTAL_BUFFS_NPC = MAX_TOTAL_BUFFS;

constexpr int NUM_BUFF_SLOTS = MAX_TOTAL_BUFFS;

constexpr int MAX_MEMORIZED_SPELLS = 16;

// need to find this one
constexpr int NUM_ALT_ABILITIES_ARRAY = 503;

constexpr int NUM_ALT_ABILITIES = 49999;

// these two will merge when i get a chance - ieatacid wrote this?
constexpr int AA_CHAR_MAX = 245;

// PcBase__GetAlternateAbilityId_x
// size is at 7EE7F8 in eqgame dated jun 13 2014
constexpr int AA_CHAR_MAX_REAL = 300;

// found in CSpellBookWnd__GetBookSlot_x
constexpr int NUM_BOOK_SLOTS = 720;
constexpr int NUM_COMBAT_ABILITIES = 300;
constexpr int NUM_COMBAT_ABILITY_TIMERS = 20;
constexpr int NUM_SKILLS = 100;
constexpr int NUM_INNATE = 25;
constexpr int CONCURRENT_SKILLS = 2;
constexpr int NUM_ITEM_SKILL_DMG_MOD = 9;  // the number of skill weapon mods


enum EQExpansion
{
	EQExpansionNone                 = EXPANSION_LEVEL_CLASSIC,
	EQExpansionKunark               = EXPANSION_LEVEL_ROK,
	EQExpansionVelious              = EXPANSION_LEVEL_SOV,
	EQExpansionLuclin               = EXPANSION_LEVEL_SOL,
	EQExpansionPOP                  = EXPANSION_LEVEL_POP,
	EQExpansionYkesha               = EXPANSION_LEVEL_LOY,
	EQExpansionLDON                 = EXPANSION_LEVEL_LDON,
	EQExpansionGates                = EXPANSION_LEVEL_GOD,
	EQExpansionOOW                  = EXPANSION_LEVEL_OOW,
	EQExpansionDON                  = EXPANSION_LEVEL_DON,
	EQExpansionDODH                 = EXPANSION_LEVEL_DODH,
	EQExpansionPOR                  = EXPANSION_LEVEL_POR,
	EQExpansionTSS                  = EXPANSION_LEVEL_TSS,
	EQExpansionTBS                  = EXPANSION_LEVEL_TBS,
	EQExpansionSOF                  = EXPANSION_LEVEL_SOF,
	EQExpansionSOD                  = EXPANSION_LEVEL_SOD,
	EQExpansionUF                   = EXPANSION_LEVEL_UF,
	EQExpansionHOT                  = EXPANSION_LEVEL_HOT,
	EQExpansionVOA                  = EXPANSION_LEVEL_VOA,
	EQExpansionROF                  = EXPANSION_LEVEL_ROF,
	EQExpansionCOTF                 = EXPANSION_LEVEL_COTF,
	EQExpansionTDS                  = EXPANSION_LEVEL_TDS,
	EQExpansionTBM                  = EXPANSION_LEVEL_TBM,
	EQExpansionEOK                  = EXPANSION_LEVEL_EOK,
	EQExpansionROS                  = EXPANSION_LEVEL_ROS,
	EQExpansionTBL                  = EXPANSION_LEVEL_TBL,
	EQExpansionTOV                  = EXPANSION_LEVEL_TOV,
	EQExpansionCOV                  = EXPANSION_LEVEL_COV,
	EQExpansionTOL                  = EXPANSION_LEVEL_TOL,
	EQExpansionNOS                  = EXPANSION_LEVEL_NOS,
};

#define EQ_EXPANSION(x)             (1 << (x - 1))

// These macros define the bit mask representing expansion flags, often used to determine
// expansion ownership or requirements
#define EXPANSION_RoK               EQ_EXPANSION(EXPANSION_LEVEL_ROK)
#define EXPANSION_SoV               EQ_EXPANSION(EXPANSION_LEVEL_SOV)
#define EXPANSION_SoL               EQ_EXPANSION(EXPANSION_LEVEL_SOL)
#define EXPANSION_PoP               EQ_EXPANSION(EXPANSION_LEVEL_POP)
#define EXPANSION_LoY               EQ_EXPANSION(EXPANSION_LEVEL_LOY)
#define EXPANSION_LDoN              EQ_EXPANSION(EXPANSION_LEVEL_LDON)
#define EXPANSION_GoD               EQ_EXPANSION(EXPANSION_LEVEL_GOD)
#define EXPANSION_OoW               EQ_EXPANSION(EXPANSION_LEVEL_OOW)
#define EXPANSION_DoN               EQ_EXPANSION(EXPANSION_LEVEL_DON)
#define EXPANSION_DoD               EQ_EXPANSION(EXPANSION_LEVEL_DODH)
#define EXPANSION_PoR               EQ_EXPANSION(EXPANSION_LEVEL_POR)
#define EXPANSION_TSS               EQ_EXPANSION(EXPANSION_LEVEL_TSS)
#define EXPANSION_TBS               EQ_EXPANSION(EXPANSION_LEVEL_TBS)
#define EXPANSION_SoF               EQ_EXPANSION(EXPANSION_LEVEL_SOF)
#define EXPANSION_SoD               EQ_EXPANSION(EXPANSION_LEVEL_SOD)
#define EXPANSION_UFT               EQ_EXPANSION(EXPANSION_LEVEL_UF)
#define EXPANSION_HoT               EQ_EXPANSION(EXPANSION_LEVEL_HOT)
#define EXPANSION_VoA               EQ_EXPANSION(EXPANSION_LEVEL_VOA)
#define EXPANSION_RoF               EQ_EXPANSION(EXPANSION_LEVEL_ROF)
#define EXPANSION_CotF              EQ_EXPANSION(EXPANSION_LEVEL_COTF)
#define EXPANSION_TDS               EQ_EXPANSION(EXPANSION_LEVEL_TDS)
#define EXPANSION_TBM               EQ_EXPANSION(EXPANSION_LEVEL_TBM)
#define EXPANSION_EoK               EQ_EXPANSION(EXPANSION_LEVEL_EOK)
#define EXPANSION_RoS               EQ_EXPANSION(EXPANSION_LEVEL_ROS)
#define EXPANSION_TBL               EQ_EXPANSION(EXPANSION_LEVEL_TBL)
#define EXPANSION_TOV               EQ_EXPANSION(EXPANSION_LEVEL_TOV)
#define EXPANSION_COV               EQ_EXPANSION(EXPANSION_LEVEL_COV)
#define EXPANSION_TOL               EQ_EXPANSION(EXPANSION_LEVEL_TOL)
#define EXPANSION_NOS               EQ_EXPANSION(EXPANSION_LEVEL_NOS)

// Enumeration defining expansion bit mask representing expansion flags. Often used to
// determine expansion ownership or requirements.
enum EQExpansionOwned
{
	EQExpansionNoneOwned            = 0,
	EQExpansionKunarkOwned          = EXPANSION_RoK,
	EQExpansionVeliousOwned         = EXPANSION_SoV,
	EQExpansionLuclinOwned          = EXPANSION_SoL,
	EQExpansionPOPOwned             = EXPANSION_PoP,
	EQExpansionYkeshaOwned          = EXPANSION_LoY,
	EQExpansionLDONOwned            = EXPANSION_LDoN,
	EQExpansionGatesOwned           = EXPANSION_GoD,
	EQExpansionOOWOwned             = EXPANSION_OoW,
	EQExpansionDONOwned             = EXPANSION_DoN,
	EQExpansionDODHOwned            = EXPANSION_DoD,
	EQExpansionPOROwned             = EXPANSION_PoR,
	EQExpansionTSSOwned             = EXPANSION_TBS,
	EQExpansionTBSOwned             = EXPANSION_TBS,
	EQExpansionSOFOwned             = EXPANSION_SoF,
	EQExpansionSODOwned             = EXPANSION_SoD,
	EQExpansionUFOwned              = EXPANSION_UFT,
	EQExpansionHOTOwned             = EXPANSION_HoT,
	EQExpansionVOAOwned             = EXPANSION_VoA,
	EQExpansionROFOwned             = EXPANSION_RoF,
	EQExpansionCOTFOwned            = EXPANSION_CotF,
	EQExpansionTDSOwned             = EXPANSION_TDS,
	EQExpansionTBMOwned             = EXPANSION_TBM,
	EQExpansionEOKOwned             = EXPANSION_EoK,
	EQExpansionROSOwned             = EXPANSION_RoS,
	EQExpansionTBLOwned             = EXPANSION_TBL,
	EQExpansionTOVOwned             = EXPANSION_TOV,
	EQExpansionCOVOwned             = EXPANSION_COV,
	EQExpansionTOLOwned             = EXPANSION_TOL,
	EQExpansionNOSOwned             = EXPANSION_NOS,

	// Mask representing all expansions
	EQExpansionHighestOwnedPlusOne_,
	EQExpansionAllOwned             = ((EQExpansionHighestOwnedPlusOne_ - 1) << 1) - 1,
};

constexpr int NUM_EXPANSIONS = MQ_EXPANSION_LEVEL;

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
#if HAS_MERCHANTS_PERK
	InvSlot_Bag11,
	InvSlot_Bag12,
#endif
	InvSlot_Held,

	InvSlot_Max,

	InvSlot_FirstWornItem = InvSlot_Charm,
	InvSlot_LastWornItem = InvSlot_Ammo,
	InvSlot_FirstBagSlot = InvSlot_Bag1,
	InvSlot_LastBagSlot = InvSlot_Bag10,
#if HAS_MERCHANTS_PERK
	InvSlot_LastBonusBagSlot = InvSlot_Bag12,
#else
	InvSlot_LastBonusBagSlot = InvSlot_Bag10,
#endif
	InvSlot_Cursor = InvSlot_Held,
	InvSlot_NumInvSlots = InvSlot_Held,      // held is not technically an item in the inventory (its the cursor)

	// Somebody typo'd this a long time ago.
	InvSlot_LastBagsLot DEPRECATE("Use InvSlot_LastBagSlot instead") = InvSlot_LastBagSlot,
};

constexpr int NUM_INV_SLOTS = InvSlot_NumInvSlots;
constexpr int BAG_SLOT_START = InvSlot_Bag1;

constexpr int NUM_BAG_SLOTS = InvSlot_LastBonusBagSlot - InvSlot_FirstBagSlot + 1;
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
	ALTCURRENCY_SCARLETMARKS = 53, // ToL
	ALTCURRENCY_MEDALSOFCONFLICT = 54, // ToL
	ALTCURRENCY_SHADEDSPECIE = 55, // NoS
	ALTCURRENCY_SPIRITUALMEDALLION = 56, // Nos
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



enum ePetCommandType
{
	PCT_ReportHealth,
	PCT_WhoLeader,
	PCT_Attack,
	PCT_QueueAttack,
	PCT_ToggleFollow,
	PCT_ToggleGuard,
	PCT_ToggleSit,
	//PCT_SitOn,
	//PCT_SitOff,
	PCT_ToggleStop,
	//PCT_StopOn,
	//PCT_StopOff,
	PCT_ToggleRegroup,
	PCT_ToggleTaunt,
	//PCT_TauntOn,
	//PCT_TauntOff,
	PCT_ToggleHold,
	//PCT_HoldOn,
	//PCT_HoldOff,
	PCT_ToggleGHold,
	//PCT_GHoldOn,
	//PCT_GHoldOff,
	PCT_ToggleSpellHold,
	//PCT_SpellHoldOn,
	//PCT_SpellHoldOff,
	PCT_ToggleFocus,
	//PCT_FocusOn,
	//PCT_FocusOff,
	PCT_FeignDeath,
	PCT_BackOff,
	PCT_GetLost,
	PCT_TargetPet,
	//PCT_RegroupOn,
	//PCT_RegroupOff,
	//PCT_Something,
	//PCT_Something2,
	NumPetCommands,
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
constexpr int EQ_MAX_CAMERAS = 9;

// Spell targeting types
constexpr int TT_PBAE = 4;
constexpr int TT_TARGETED_AE = 8;
constexpr int TT_AE_PC_V2 = 40;
constexpr int TT_DIRECTIONAL = 42;
constexpr int TT_SPLASH = 45;

// Mercs
constexpr int MERC_ALT_ABILITY_COUNT = 12;
constexpr int EQ_MAX_MERCENARIES = 10;

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

enum EnvironmentalLiquidType
{
	LiquidType_None = 0,
	LiquidType_Water = 5,
	LiquidType_Slime = 6,
	LiquidType_Lava = 7,
};

enum class ServerID : int {
	Test = 1,
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
	Vox = 158,
	Ragefire = 159,
	Phinigel = 161,
	Mayong = 163,
	Miragul = 168,
	Rizlona = 169,

	NumServers = 20,
	Invalid = -1,
};


// zones
constexpr int ZONE_COUNT = 768;

// Math

// Ratio for converting from degrees to eq heading. EQ uses 512 unit headings.
constexpr const float DEG_TO_HEADING_RATIO = 360.f / 512.f;

// Experience percentage ratio
constexpr const float EXP_TO_PCT_RATIO = 3.3f;

} // namespace eqlib
