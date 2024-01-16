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

// EQLib Configuration
#include "Config.h"

// pull in offsets first
#include "eqgame.h"
#include "eqgraphics.h"
#include "eqmain.h"

// Common defines all the commonly used macros, tools, functions, etc
// that are used by pretty much everything else.
#include "Common.h"

// Globals that are used throughout the eqlib project
#include "Globals.h"

// Data structures and class definitions, broken up by topic. If any of these
// gets too large, or has too many unrelated components, they should probably
// be broken up into smaller chunks.

// general purpose utilities
#include "Allocator.h"
#include "Containers.h"
#include "CXStr.h"
#include "SoeUtil.h"

// data structures - old headers. Eventually these will be consolidated
#include "EQUIStructs.h"
#include "EQData.h"
#include "EQClasses.h"

// ui components
#include "ChatFilters.h"
#include "CXWnd.h"
#include "UI.h"
#include "XMLData.h"
#include "UITemplates.h"
#include "UITextures.h"

// game components
#include "EverQuest.h"
#include "Achievements.h"
#include "AltAbilities.h"
#include "Items.h"
#include "PlayerClient.h"
#include "PcClient.h"
#include "RealEstate.h"
#include "Spells.h"

// misc components
#include "GraphicsEngine.h"
#include "GraphicsResources.h"
#include "LoginFrontend.h"
#include "ItemLinks.h"

#if __has_include("../private/EQLib-private.h")
#include "../private/EQLib-private.h"
#endif
