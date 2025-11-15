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

// Common defines all the commonly used macros, tools, functions, etc
// that are used by pretty much everything else.
#include "eqlib/Common.h"

// pull in offsets first
#include "eqlib/offsets/eqgame.h"
#include "eqlib/offsets/eqgraphics.h"
#include "eqlib/offsets/eqmain.h"

// Globals that are used throughout the eqlib project
#include "eqlib/game/Constants.h"
#include "eqlib/game/Globals.h"

// Data structures and class definitions, broken up by topic. If any of these
// gets too large, or has too many unrelated components, they should probably
// be broken up into smaller chunks.

// general purpose utilities
#include "eqlib/game/Allocator.h"
#include "eqlib/game/Color.h"
#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"
#include "eqlib/game/SoeUtil.h"
#include "eqlib/game/MathTypes.h"
#include "eqlib/game/Mutex.h"
#include "eqlib/game/SerializeBuffer.h"
#include "eqlib/game/Types.h"

// data structures - old headers. Eventually these will be consolidated
#include "eqlib/game/EQClasses.h"
#include "eqlib/game/EQData.h"

// ui components
#include "eqlib/game/ChatFilters.h"
#include "eqlib/game/CXWnd.h"
#include "eqlib/game/UI.h"
#include "eqlib/game/UITemplates.h"
#include "eqlib/game/UITextures.h"
#include "eqlib/game/UITypes.h"
#include "eqlib/game/XMLData.h"

// game components
#include "eqlib/game/Actors.h"
#include "eqlib/game/Achievements.h"
#include "eqlib/game/AltAbilities.h"
#include "eqlib/game/EQGuid.h"
#include "eqlib/game/EverQuest.h"
#include "eqlib/game/Items.h"
#include "eqlib/game/Objects.h"
#include "eqlib/game/PcClient.h"
#include "eqlib/game/PcProfile.h"
#include "eqlib/game/PlayerClient.h"
#include "eqlib/game/RealEstate.h"
#include "eqlib/game/Requirements.h"
#include "eqlib/game/Spells.h"
#include "eqlib/game/TaskSystem.h"

// misc components
#include "eqlib/game/Display.h"
#include "eqlib/game/ItemLinks.h"
#include "eqlib/game/KeyCombo.h"
#include "eqlib/game/LoginFrontend.h"

// graphics components
#include "eqlib/graphics/GraphicsEngine.h"
#include "eqlib/graphics/GraphicsResources.h"
#include "eqlib/graphics/ResourceManagerInterface.h"
#include "eqlib/graphics/Render.h"

// add private include
#if __has_include("../../../private/EQLib-private.h")
#include "../../../private/EQLib-private.h"
#endif
