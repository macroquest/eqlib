/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2024 MacroQuest Authors
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

#include "Config.h"
#include "mq/base/Color.h"

namespace eqlib {

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

constexpr int NUM_USER_COLORS = 99;

// s_aDefaultUserDefinedColor
EQLIB_VAR mq::MQColor gDefaultUserDefinedColors[NUM_USER_COLORS];

enum eHitModeCategories
{
	HITMODE_YOUR_HITS,
	HITMODE_YOUR_MISSES,
	HITMODE_YOU_BEING_HIT,
	HITMODE_YOU_BEING_MISSED,
	HITMODE_OTHERS_HITS,
	HITMODE_OTHERS_MISSES,
	HITMODE_PET_HITS,
	HITMODE_PET_MISSES,

	MAX_HITMODES,
};

enum eHitModes
{
	HITMODE_NORMAL,
	HITMODE_ABBREVIATED,
	HITMODE_NUMBER_ONLY,
};

enum eChatFilters
{
	FILTER_NONE = -1,
	FILTER_GUILDCHAT,
	FILTER_SOCIALS,
	FILTER_GROUP_CHAT,
	FILTER_SHOUTS,
	FILTER_AUCTION_CHAT,
	FILTER_OOC_CHAT,
	FILTER_BADWORD,
	FILTER_PC_SPELLS,
	FILTER_NPC_SPELLS,
	FILTER_BARD_SONGS,
	FILTER_SPELL_CRITS,
	FILTER_MELEE_CRITS,
	FILTER_SPELL_DAMAGE,
	FILTER_MY_MISSES,
	FILTER_OTHER_MISSES,
	FILTER_OTHER_HITS,
	FILTER_MISSED_ME,
	FILTER_DAMAGE_SHIELDS,
	FILTER_DOT_DAMAGE,
	FILTER_PET_HITS,
	FILTER_PET_MISSES,
	FILTER_FOCUS_EFFECTS,
	FILTER_PET_SPELLS,
	FILTER_HOT_SPELLS,
	FILTER_ITEM_SPEECH,
	FILTER_STRIKE_THROUGH,
	FILTER_STUN,
	FILTER_BARD_SONGS_ON_PETS,
	FILTER_SWARM_PET_DEATH,
	FILTER_FELLOWSHIP_CHAT,
	FILTER_MERCENARY_MESSAGES,
	FILTER_SPAM,
	FILTER_ACHIEVEMENTS,
	FILTER_PVP_MESSAGES,

	NUM_CHAT_FILTERS,
};

enum eChatChannel
{
	CHAT_CHANNEL_SAY,
	CHAT_CHANNEL_TELL,
	CHAT_CHANNEL_GROUP,
	CHAT_CHANNEL_RAID,
	CHAT_CHANNEL_GUILD,
	CHAT_CHANNEL_OOC,
	CHAT_CHANNEL_AUCTION,
	CHAT_CHANNEL_SHOUT,
	CHAT_CHANNEL_EMOTE,
	CHAT_CHANNEL_MELEE_YOUR_HITS,
	CHAT_CHANNEL_SPELLS_MINE,
	CHAT_CHANNEL_SKILLS,
	CHAT_CHANNEL_CHAT1,
	CHAT_CHANNEL_CHAT2,
	CHAT_CHANNEL_CHAT3,
	CHAT_CHANNEL_CHAT4,
	CHAT_CHANNEL_CHAT5,
	CHAT_CHANNEL_CHAT6,
	CHAT_CHANNEL_CHAT7,
	CHAT_CHANNEL_CHAT8,
	CHAT_CHANNEL_CHAT9,
	CHAT_CHANNEL_CHAT10,
	CHAT_CHANNEL_OTHER,
	CHAT_CHANNEL_MELEE_YOUR_MISSES,
	CHAT_CHANNEL_MELEE_YOU_BEING_HIT,
	CHAT_CHANNEL_MELEE_YOU_BEING_MISSED,
	CHAT_CHANNEL_MELEE_OTHERS_HITS,
	CHAT_CHANNEL_MELEE_OTHERS_MISSES,
	CHAT_CHANNEL_MELEE_MY_DEATH,
	CHAT_CHANNEL_MELEE_OTHER_PC_DEATH,
	CHAT_CHANNEL_MELEE_CRITICAL_HITS,
	CHAT_CHANNEL_MELEE_DISCIPLINES,
	CHAT_CHANNEL_MELEE_WARNINGS,
	CHAT_CHANNEL_MELEE_NPC_RAMPAGE,
	CHAT_CHANNEL_MELEE_NPC_FLURRY,
	CHAT_CHANNEL_MELEE_NPC_ENRAGE,
	CHAT_CHANNEL_SPELLS_OTHERS,
	CHAT_CHANNEL_SPELLS_FAILURES,
	CHAT_CHANNEL_SPELLS_CRITICALS,
	CHAT_CHANNEL_SPELLS_WORN_OFF,
	CHAT_CHANNEL_SPELLS_DD_YOURS,
	CHAT_CHANNEL_FOCUS_EFFECTS,
	CHAT_CHANNEL_RANDOM_YOUR_ROLLS,
	CHAT_CHANNEL_PET_MESSAGES,
	CHAT_CHANNEL_PET_RAMPAGE_FLURRY,
	CHAT_CHANNEL_PET_CRITICALS,
	CHAT_CHANNEL_DAMAGE_SHIELDS_YOU_ATTACKING,
	CHAT_CHANNEL_EXPERIENCE_MESSAGES,
	CHAT_CHANNEL_NPC_EMOTES,
	CHAT_CHANNEL_SYSTEM_MESSAGES,
	CHAT_CHANNEL_WHO,
	CHAT_CHANNEL_PET_SPELLS,
	CHAT_CHANNEL_PET_RESPONSES,
	CHAT_CHANNEL_ITEM_SPEECH,
	CHAT_CHANNEL_FELLOWSHIP_MESSAGES,
	CHAT_CHANNEL_MERCENARY_MESSAGES,
	CHAT_CHANNEL_PVP_MESSAGES,

	NUM_CHAT_CHANNELS = 57,
};

enum eChatFilterValues
{
	FILTER_VALUE_INVALID = -1,
	FILTER_VALUE_SHOW,
	FILTER_VALUE_HIDE,
	FILTER_VALUE_ME,
	FILTER_VALUE_GROUP,

	FILTER_VALUE_COUNT,
};

enum eChatFilterOptions
{
	FILTER_OPT_NONE  = 0,
	FILTER_OPT_HIDE  = 0x01,
	FILTER_OPT_SHOW  = 0x02,
	FILTER_OPT_ME    = 0x04,
	FILTER_OPT_GROUP = 0x08,
};


// ChatColorFilterData ChatFilterDefs
struct [[offsetcomments]] ChatColorFilterData
{
/*0x00*/ eChatFilters       ChatFilterID;
/*0x04*/ int                ChatColorID;
/*0x08*/ eChatFilterOptions ChatFilterOptions;
/*0x0c*/ eChatFilterValues  ChatFilterDefault;
/*0x10*/ int                NameToken;
/*0x18*/ const char*        IniName;
/*0x20*/ int                ChatFilterCategories;
};

// gpChatFilterDefs is an array of this many elements.
constexpr int CHAT_COLORFILTER_COUNT = 145;

EQLIB_VAR ChatColorFilterData* gpChatFilterDefs;

// Saved chat filters
class ChatFilterData
{
public:
	eChatFilterValues     chatFilters[NUM_CHAT_FILTERS];
};

} // namespace eqlib
