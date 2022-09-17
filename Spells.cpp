/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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

EQ_Spell::EQ_Spell()
{
	for (int i = 0; i < MAX_SPELL_REAGENTS; ++i)
	{
		ReagentID[i] = 0;
		ReagentCount[i] = 0;
		NoExpendReagent[i] = 0;
	}

	for (int i = 0; i < MAX_CLASSES; ++i)
	{
		ClassLevel[i] = 0;
	}

	memset(Name, 0, sizeof(Name));
	memset(Extra, 0, sizeof(Extra));
}

int EQ_Spell::GetEffectAttrib(int index) const
{
	if (pSpellMgr
		&& index >= 0 && index < GetNumEffects())
	{
		if (SpellAffectData* affectData = pSpellMgr->GetSpellAffect(CalcIndex + index))
			return affectData->Attrib;
	}

	return 0;
}

int64_t EQ_Spell::GetEffectBase(int index) const
{
	if (pSpellMgr
		&& index >= 0 && index < GetNumEffects())
	{
		if (SpellAffectData* affectData = pSpellMgr->GetSpellAffect(CalcIndex + index))
			return affectData->Base;
	}

	return 0;
}

int64_t EQ_Spell::GetEffectBase2(int index) const
{
	if (pSpellMgr
		&& index >= 0 && index < GetNumEffects())
	{
		if (SpellAffectData* affectData = pSpellMgr->GetSpellAffect(CalcIndex + index))
			return affectData->Base2;
	}

	return 0;
}

int64_t EQ_Spell::GetEffectMax(int index) const
{
	if (pSpellMgr
		&& index >= 0 && index < GetNumEffects())
	{
		if (SpellAffectData* affectData = pSpellMgr->GetSpellAffect(CalcIndex + index))
			return affectData->Max;
}

	return 0;
}

int EQ_Spell::GetEffectCalc(int index) const
{
	if (pSpellMgr
		&& index >= 0 && index < GetNumEffects())
	{
		if (SpellAffectData* affectData = pSpellMgr->GetSpellAffect(CalcIndex + index))
			return affectData->Calc;
	}

	return 0;
}

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

//============================================================================
// ClientSpellManager
//============================================================================

bool ClientSpellManager::LoadSpells(const char* FileName, const char* AssocFilename, const char* StackingFileName) { return false; }
bool ClientSpellManager::LoadSpellStackingData(const char*) { return false; }
bool ClientSpellManager::DoesMeetRequirement(PlayerZoneClient*, int) { return false; }
void ClientSpellManager::PrintFailedRequirementString(int, int) {}
int ClientSpellManager::GetSpellStackingGroupID(int) { return 0; }
int ClientSpellManager::GetSpellStackingGroupRank(int) { return 0; }
ESpellStackingRules ClientSpellManager::GetSpellStackingGroupRule(int) { return ESSR_None; }
SpellAffectData* ClientSpellManager::GetSpellAffect(int) { return nullptr; }
EQ_Spell* ClientSpellManager::GetSpellByID(int) { return nullptr; }
SpellAffectData* ClientSpellManager::GetSpellAffectEmpty(bool) { return nullptr; }

//============================================================================
// Misc
//============================================================================

bool IsResEffectSpell(int spellID)
{
	return spellID == 756        // Resurrection Sickness
		|| spellID == 13087      // Revival Sickness
		|| spellID == 5249;      // Resurrection Sickness
}

} // namespace eqlib
