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

#include "Globals.h"
#include "PlayerClient.h"
#include "EverQuest.h"

namespace eqlib {

//============================================================================
// PlayerClient
//============================================================================

const char* PlayerClient::GetClassString() const
{
	return pEverQuest->GetClassDesc(GetClass());
}

const char* PlayerClient::GetClassThreeLetterCode() const
{
	return pEverQuest->GetClassThreeLetterCode(GetClass());
}

const char* PlayerClient::GetRaceString() const
{
	return pEverQuest->GetRaceDesc(GetRace());
}

} // namespace eqlib
