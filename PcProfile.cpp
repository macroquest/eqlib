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

#include "pch.h"
#include "PcProfile.h"

#include "Globals.h"
#include "PcClient.h"

namespace eqlib {

int BaseProfile::get_Platinum() const
{
	return pLocalPC->GetPlatinum();
}

int BaseProfile::get_Gold() const
{
	return pLocalPC->GetGold();
}

int BaseProfile::get_Silver() const
{
	return pLocalPC->GetSilver();
}

int BaseProfile::get_Copper() const
{
	return pLocalPC->GetCopper();
}


} // namespace eqlib
