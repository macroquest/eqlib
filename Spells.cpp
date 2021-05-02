/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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
#include "Spells.h"

namespace eqlib {


//============================================================================
// EQ_Affect
//============================================================================

void EQ_Affect::Reset()
{
	CasterGuid = EqGuid();
	for (eqlib::SlotData& data : this->SlotData)
	{
		data.Slot = -1;
		data.Value = 0;
	}
	Flags = 0;
	SpellID = 0;
	Duration = 0;
	InitialDuration = 0;
	HitCount = 0;
	ViralTimer = 0;
	Modifier = 1.0f;
	Y = 0;
	X = 0;
	Z = 0;
	Type = 0;
	Level = 0;
	ChargesRemaining = 0;
	Activatable = 0;
	Unknown0x64 = 0;
}

int EQ_Affect::GetAffectData(int slot) const
{
	for (const eqlib::SlotData& data : this->SlotData)
	{
		if (data.Slot == slot)
			return data.Value;
		if (data.Slot == -1)
			break;
	}
	return 0;
}

void EQ_Affect::SetAffectData(int slot, int value)
{
	for (eqlib::SlotData& data : this->SlotData)
	{
		if (data.Slot == slot)
		{
			data.Value = value;
			return;
		}

		if (data.Slot == -1)
			break;
	}
}

void EQ_Affect::PopulateFromSpell(const EQ_Spell* pSpell)
{
	Duration = pSpell->DurationCap;
	InitialDuration = pSpell->DurationCap;
	SpellID = pSpell->ID;

	int dataIndex = 0;

	// We need to fill in the affect slot data fields. There is a max of NUM_SLOTDATA per buff.
	// slot data contains things like the amount of absorb left on a rune or the number of counters
	// remaining on a debuff.
	for (int index = 0; index < pSpell->NumEffects && dataIndex < NUM_SLOTDATA; ++index)
	{
		auto affect = pSpell->GetSpellAffectByIndex(index); // this cannot be null if we are < NumEffects
		if (affect->Max != 0)
		{
			SlotData[dataIndex].Slot = affect->Slot;
			SlotData[dataIndex].Value = affect->Max;
			dataIndex++;
		}
	}

	for (int slot = dataIndex; slot < NUM_SLOTDATA; ++slot)
	{
		SlotData[slot].Slot = -1;
		SlotData[slot].Value = 0;
	}
}


} // namespace eqlib
