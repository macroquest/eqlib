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

//----------------------------------------------------------------------------
// Defines the EverQuest build type (LIVE, TEST, etc)
//----------------------------------------------------------------------------

#define EMULATOR


//----------------------------------------------------------------------------
#if !defined(RC_INVOKED)

#include "Expansions.h"
#include "eqgame.h"

// Defines the expansion level of this build.
#define MQ_EXPANSION_LEVEL EXPANSION_LEVEL_ROF


#define IS_EXPANSION_LEVEL(x) (MQ_EXPANSION_LEVEL >= x)
#define IS_CLIENT_DATE(x) (__ClientDate >= x)

//----------------------------------------------------------------------------
// EverQuest Feature Flags
//----------------------------------------------------------------------------

// AdvancedLoot was released on March 25, 2015
#define HAS_ADVANCED_LOOT IS_CLIENT_DATE(20150325)

// Autoskills was added April 19, 2017
#define HAS_AUTOSKILLS IS_CLIENT_DATE(20170419)

// Dragon Hoard was added with the Claws of Veeshan Expansion
#define HAS_DRAGON_HOARD IS_EXPANSION_LEVEL(EXPANSION_LEVEL_COV)

// Faction window was added in The Burning Lands expansion
#define HAS_FACTION_WINDOW IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TBL)

// Find Item window was added September 20, 2017, which was just before the
// Ring of Scale expansion.
#define HAS_FIND_ITEM_WINDOW IS_CLIENT_DATE(20170920)

// Item effects for mount, illusion, familiar, etc were combined into "Blessing" effects
// on September 7, 2021.
#define HAS_ITEM_BLESSING_EFFECT IS_CLIENT_DATE(20210907)

// Not sure when the Item Convert button was added to the Item Display window,
// but the RoF client does not have it
#define HAS_ITEM_CONVERT_BUTTON IS_EXPANSION_LEVEL(EXPANSION_LEVEL_COTF)

// "Collected" flag was added to the ItemDisplayWnd on April 20, 2016.
#define HAS_ITEM_WINDOW_COLLECTED IS_CLIENT_DATE(20160420)

// "Scribed" flag was added to the ItemDisplayWnd on November 16, 2016.
#define HAS_ITEM_WINDOW_SCRIBED IS_CLIENT_DATE(20161116)

// The initial key ring was added with TBM, which included the Illusion items.
#define HAS_KEYRING_WINDOW IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TBM)

// Group Leadership Experience was introduced in Gates of Discord and removed Feb 19, 2014.
#define HAS_LEADERSHIP_EXPERIENCE (IS_EXPANSION_LEVEL(EXPANSION_LEVEL_GOD) && !IS_CLIENT_DATE(20140219))

// Lore Equipped is a flag that was added in the TBL expansion
#define HAS_LORE_EQUIPPED IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TBL)

// Luck stat was added in the TBL Expansion
#define HAS_LUCK_STAT IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TBL)

// Mercenary AA was added with the Call of the Forsaken expansion.
#define HAS_MERCENARY_AA IS_EXPANSION_LEVEL(EXPANSION_LEVEL_COTF)

// Mercenary Inventory added with the Call of the Forsaken expansion.
#define HAS_MERCENARY_INVENTORY IS_EXPANSION_LEVEL(EXPANSION_LEVEL_COTF)

// Merchants Perk adds two extra inventory slots. This came out right before
// Torment of Luclin.
#define HAS_MERCHANTS_PERK IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TOL)

// Emu client technically supports this, but the server does not. Just gate it on a live expansion.
#define HAS_MULTIPLE_ITEM_MOVE_MANAGER IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TOL)

// Tabbed chat was added on March 13, 2019
#define HAS_TABBED_CHAT IS_CLIENT_DATE(20190313)

// Teleportation Keyring added with Terror of Luclin expansion
#define HAS_TELEPORTATION_KEYRING IS_EXPANSION_LEVEL(EXPANSION_LEVEL_TOL)

// Tradeskill Depot was added with Night of Shadows expansion
#define HAS_TRADESKILL_DEPOT IS_EXPANSION_LEVEL(EXPANSION_LEVEL_NOS)

//----------------------------------------------------------------------------
// Legacy Defines

// If this expansion level is only up to ROF, then flag this as an ROF2EMU build
#if !IS_EXPANSION_LEVEL(EXPANSION_LEVEL_COTF) && IS_EXPANSION_LEVEL(EXPANSION_LEVEL_ROF)
#define ROF2EMU
#endif

//----------------------------------------------------------------------------
#endif // !RC_INVOKED
