/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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
#include "eqlib/Config.h"

// pull in offsets first
#include "eqlib/eqgame.h"
#include "eqlib/eqgraphics.h"
#include "eqlib/eqmain.h"

// Common defines all the commonly used macros, tools, functions, etc
// that are used by pretty much everything else.
#include "eqlib/Common.h"

// Globals that are used throughout the eqlib project
#include "eqlib/Globals.h"

// Data structures and class definitions, broken up by topic. If any of these
// gets too large, or has too many unrelated components, they should probably
// be broken up into smaller chunks.

// general purpose utilities
#include "eqlib/Allocator.h"
#include "eqlib/Containers.h"
#include "eqlib/CXStr.h"
#include "eqlib/SoeUtil.h"

// data structures - old headers. Eventually these will be consolidated
#include "eqlib/EQUIStructs.h"
#include "eqlib/EQData.h"
#include "eqlib/EQClasses.h"

// ui components
#include "eqlib/ChatFilters.h"
#include "eqlib/CXWnd.h"
#include "eqlib/UI.h"
#include "eqlib/XMLData.h"
#include "eqlib/UITemplates.h"
#include "eqlib/UITextures.h"

// game components
#include "eqlib/EverQuest.h"
#include "eqlib/Achievements.h"
#include "eqlib/AltAbilities.h"
#include "eqlib/Items.h"
#include "eqlib/PlayerClient.h"
#include "eqlib/PcClient.h"
#include "eqlib/RealEstate.h"
#include "eqlib/Spells.h"

// misc components
#include "eqlib/GraphicsEngine.h"
#include "eqlib/GraphicsResources.h"
#include "eqlib/LoginFrontend.h"
#include "eqlib/ItemLinks.h"

#if __has_include("../private/EQLib-private.h")
#include "../private/EQLib-private.h"
#endif
