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

#include "pch.h"
#include "GraphicsEngine.h"

#include "Globals.h"

namespace eqlib {


//============================================================================
// CDisplay
//============================================================================

int* CDisplay::cameraType = nullptr;

const ScreenWndManager::ScreenRecord* ScreenWndManager::FindScreenRecordByScreenName(const CXStr& name)
{
	int* value = screensHash.FindFirst(name);
	if (value)
	{
		return &screens[*value];
	}

	return nullptr;
}

} // namespace eqlib
