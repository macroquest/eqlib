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

#include "EQLib.h"
#include "Spells.h"

namespace eqlib {

	
//============================================================================
// EQ_Spell
//============================================================================

#ifdef EQ_Spell__IsStackableDot_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsStackableDot() const, EQ_Spell__IsStackableDot);
#endif
#ifdef EQ_Spell__IsStackable_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsStackable() const, EQ_Spell__IsStackable);
#endif
#ifdef EQ_Spell__GetSpellAffectBySlot_x
FUNCTION_AT_ADDRESS(const SpellAffectData*, EQ_Spell::GetSpellAffectBySlot(int) const, EQ_Spell__GetSpellAffectBySlot);
#endif
#ifdef EQ_Spell__GetSpellAffectByIndex_x
FUNCTION_AT_ADDRESS(const SpellAffectData*, EQ_Spell::GetSpellAffectByIndex(int) const, EQ_Spell__GetSpellAffectByIndex);
#endif
#ifdef EQ_Spell__IsSPAStacking_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsSPAStacking(int) , EQ_Spell__IsSPAStacking);
#endif
#ifdef EQ_Spell__IsSPAIgnoredByStacking_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsSPAIgnoredByStacking(int) , EQ_Spell__IsSPAIgnoredByStacking);
#endif
#ifdef EQ_Spell__IsNoRemove_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsNoRemove() const, EQ_Spell__IsNoRemove);
#endif
#ifdef EQ_Spell__IsDegeneratingLevelMod_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsDegeneratingLevelMod(int) , EQ_Spell__IsDegeneratingLevelMod);
#endif
#ifdef EQ_Spell__SpellUsesDragonBreathEffect_x
FUNCTION_AT_ADDRESS(int, EQ_Spell::SpellUsesDragonBreathEffect(), EQ_Spell__SpellUsesDragonBreathEffect);
#endif
#ifdef EQ_Spell__EQ_Spell_x
FUNCTION_AT_ADDRESS(EQ_Spell::EQ_Spell(char*), EQ_Spell__EQ_Spell);
#endif
#ifdef EQ_Spell__dEQ_Spell_x
FUNCTION_AT_ADDRESS(EQ_Spell::~EQ_Spell(), EQ_Spell__dEQ_Spell);
#endif
#ifdef EQ_Spell__SpellAffects_x
FUNCTION_AT_ADDRESS(unsigned char, EQ_Spell::SpellAffects(int) const, EQ_Spell__SpellAffects);
#endif
#ifdef EQ_Spell__IsPermIllusionSpell_x
FUNCTION_AT_ADDRESS(int, EQ_Spell::IsPermIllusionSpell() const, EQ_Spell__IsPermIllusionSpell);
#endif
#ifdef EQ_Spell__GetSpellLevelNeeded_x
FUNCTION_AT_ADDRESS(unsigned char, EQ_Spell::GetSpellLevelNeeded(EQClass) const, EQ_Spell__GetSpellLevelNeeded);
#endif
#ifdef EQ_Spell__SpellAffectBase_x
FUNCTION_AT_ADDRESS(int, EQ_Spell::SpellAffectBase(int) const, EQ_Spell__SpellAffectBase);
#endif

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

int64_t EQ_Affect::GetAffectData(int slot) const
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

void EQ_Affect::SetAffectData(int slot, int64_t value)
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
