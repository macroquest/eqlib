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

#include "EQLib.h"
#include "Spells.h"

#include <unordered_map>

namespace eqlib {

//============================================================================
// EQ_Spell
//============================================================================

EQ_Spell::EQ_Spell()
{
	for (int i = 0; i < MAX_EFFECT_SLOTS; ++i)
	{
		Base[i] = 0;
		Base2[i] = 0;
		Max[i] = 0;
		Calc[i] = 0;
		Attrib[i] = 0;
	}

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
	memset(Target, 0, sizeof(Target));
	memset(Extra, 0, sizeof(Extra));
	memset(CastByMe, 0, sizeof(CastByMe));
	memset(CastByOther, 0, sizeof(CastByOther));
	memset(CastOnYou, 0, sizeof(CastOnYou));
	memset(CastOnAnother, 0, sizeof(CastOnAnother));
	memset(WearOff, 0, sizeof(WearOff));
}

const SpellAffectData* EQ_Spell::GetSpellAffectByIndex(int index) const
{
	if (index < 0 || index >= MAX_EFFECT_SLOTS)
		return pSpellMgr->GetSpellAffectEmpty(index == 0 && ID == 0);

	return pSpellMgr->GetSpellAffect(this, index);
}

int EQ_Spell::GetEffectAttrib(int index) const
{
	if (index >= 0 && index < MAX_EFFECT_SLOTS)
		return Attrib[index];
	return 0;
}

int64_t EQ_Spell::GetEffectBase(int index) const
{
	if (index >= 0 && index < MAX_EFFECT_SLOTS)
		return Base[index];
	return 0;
}

int64_t EQ_Spell::GetEffectBase2(int index) const
{
	if (index >= 0 && index < MAX_EFFECT_SLOTS)
		return Base2[index];
	return 0;
}

int64_t EQ_Spell::GetEffectMax(int index) const
{
	if (index >= 0 && index < MAX_EFFECT_SLOTS)
		return Max[index];
	return 0;
}

int EQ_Spell::GetEffectCalc(int index) const
{
	if (index >= 0 && index < MAX_EFFECT_SLOTS)
		return Calc[index];
	return 0;
}

//============================================================================
// EQ_Affect
//============================================================================

void EQ_Affect::Reset()
{
	CasterID = 0;
	for (eqlib::SlotData& data : this->SlotData)
	{
		data.Slot = -1;
		data.Value = 0;
	}
	Flags = 0;
	SpellID = 0;
	Duration = 0;
	HitCount = 0;
	Modifier = 1.0f;
	Y = 0;
	X = 0;
	Z = 0;
	Type = 0;
	Level = 0;
	ChargesRemaining = 0;
	Activatable = 0;
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
			data.Value = static_cast<int32_t>(value);
			return;
		}

		if (data.Slot == -1)
			break;
	}
}

void EQ_Affect::PopulateFromSpell(const EQ_Spell* pSpell)
{
	Duration = pSpell->DurationCap;
	SpellID = pSpell->ID;

	int dataIndex = 0;

	// We need to fill in the affect slot data fields. There is a max of NUM_SLOTDATA per buff.
	// slot data contains things like the amount of absorb left on a rune or the number of counters
	// remaining on a debuff.
	for (int index = 0; index < pSpell->NumEffects && dataIndex < NUM_SLOTDATA; ++index)
	{
		if (pSpell->Max[index] != 0)
		{
			SlotData[dataIndex].Slot = index;
			SlotData[dataIndex].Value = pSpell->Max[index];
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

template <class T>
inline void hash_combine(std::size_t& seed, const T& v)
{
	std::hash<T> hasher;
	seed ^= hasher(v) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

struct pair_hash
{
	template <class T1, class T2>
	std::size_t operator () (const std::pair<T1, T2>& p) const
	{
		size_t hash = 0;
		hash_combine(hash, std::hash<T1>{}(p.first));
		hash_combine(hash, std::hash<T2>{}(p.second));

		return hash;
	}
};

static std::unordered_map<std::pair<const EQ_Spell*, int>, SpellAffectData, pair_hash> s_affectDataMap;
static SpellAffectData s_emptyAffectData;
static SpellAffectData s_emptyAffectDataAC = { 0, 0, 0, 0, 0, 1 };

int ClientSpellManager::GetSpellAttrib(EQ_Spell* pSpell, int index) const
{
	if (index < 0)
		index = 0;

	if (pSpell)
	{
		if (index < pSpell->GetNumEffects())
		{
			return pSpell->Attrib[index];
		}
	}

	return 0;
}

SpellAffectData* ClientSpellManager::GetSpellAffect(const EQ_Spell* pSpell, int slot)
{
	if (!pSpell || slot < 0 || slot >= pSpell->GetNumEffects())
		return &s_emptyAffectData;

	auto key = std::make_pair(pSpell, slot);

	auto iter = s_affectDataMap.find(key);
	if (iter == s_affectDataMap.end())
	{
		SpellAffectData& data = s_affectDataMap[key];
		data.Slot = slot;
		data.Base = pSpell->Base[slot];
		data.Base2 = pSpell->Base2[slot];
		data.Max = pSpell->Max[slot];
		data.Calc = pSpell->Calc[slot];
		data.Attrib = pSpell->Attrib[slot];

		return &data;
	}

	return &iter->second;
}

SpellAffectData* ClientSpellManager::GetSpellAffectEmpty(bool ac)
{
	return ac ? &s_emptyAffectDataAC : &s_emptyAffectData;
}

bool ClientSpellManager::LoadSpells(const char* FileName, const char* AssocFilename, const char* StackingFileName) { return false; }
bool ClientSpellManager::LoadSpellStackingData(const char*) { return false; }
bool ClientSpellManager::DoesMeetRequirement(PlayerZoneClient*, int) { return false; }
void ClientSpellManager::PrintFailedRequirementString(int, int) {}
int ClientSpellManager::GetSpellStackingGroupID(int) { return 0; }
int ClientSpellManager::GetSpellStackingGroupRank(int) { return 0; }
ESpellStackingRules ClientSpellManager::GetSpellStackingGroupRule(int) { return ESSR_None; }
EQ_Spell* ClientSpellManager::GetSpellByID(int) { return nullptr; }

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
