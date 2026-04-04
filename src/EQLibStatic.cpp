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

#include "eqlib/EQLibStatic.h"

// Include all cpp files from the project to produce a single static lib.
#include "EQLibImpl.cpp"
#include "MemoryPatcherImpl.cpp"
#include "Offsets.cpp"

#include "game/CXStr.cpp"
#include "game/CXWnd.cpp"
#include "game/Display.cpp"
#include "game/EQClasses.cpp"
#include "game/EverQuest.cpp"
#include "game/FunctionDefs.cpp"
#include "game/Globals.cpp"
#include "game/ItemLinks.cpp"
#include "game/Items.cpp"
#include "game/PcClient.cpp"
#include "game/PcProfile.cpp"
#include "game/PlayerClient.cpp"
#include "game/Spells.cpp"
#include "game/UI.cpp"
#include "game/UITemplates.cpp"
#include "game/UITextures.cpp"
#include "game/XMLData.cpp"

#include "graphics/GraphicsEngine.cpp"
