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
#include "PcClient.h"

#include "Globals.h"
#include "UI.h"

namespace eqlib {

//============================================================================
// CGroupMemberBase
//============================================================================

CGroupMemberBase::CGroupMemberBase()
	: Type(0)
	, Level(0)
	, bIsOffline(false)
	, OnlineTimestamp(0)
	, UniquePlayerID(0)
{
	ClearRoles();
}

CGroupMemberBase::~CGroupMemberBase()
{
}

void CGroupMemberBase::ClearRoles()
{
	CurrentRoleBits = 0;
	for (int i = 0; i < MaxGroupRoles; ++i)
		bRoleStates[i] = false;
}

CGroupMember::CGroupMember()
	: pCharacter(nullptr)
	, pPlayer(nullptr)
	, GroupIndex(-1)
{
}

CGroupMember::~CGroupMember()
{
}

//============================================================================

CGroupBase::CGroupBase()
	: m_id(0)
	, m_groupLeader(nullptr)
{
	for (auto& member : m_groupMembers)
		member = nullptr;
}

CGroupBase::~CGroupBase()
{
}

CGroupMember* CGroup::GetMercenary(std::string_view ownerName) const
{
	for (CGroupMember* member : m_groupMembers)
	{
		if (member != nullptr
			&& mq::ci_equals(ownerName, member->GetOwnerName()))
		{
			return member;
		}
	}

	return nullptr;
}

CGroupMember* CGroup::GetGroupMember(std::string_view name) const
{
	for (CGroupMember* member : m_groupMembers)
	{
		if (member != nullptr
			&& mq::ci_equals(name, member->GetName()))
		{
			return member;
		}
	}

	return nullptr;
}

CGroupMember* CGroupBase::GetGroupMember(int index) const
{
	if (index >= 0 && index < MAX_GROUP_SIZE)
		return m_groupMembers[index];

	return nullptr;
}

CGroupMember* CGroup::GetGroupMember(PlayerClient* pPlayer) const
{
	for (CGroupMember* member : m_groupMembers)
	{
		if (member != nullptr && member->GetPlayer() == pPlayer)
		{
			return member;
		}
	}

	return nullptr;
}

CGroupMember* CGroup::GetGroupMemberByRole(eGroupRoles role) const
{
	for (CGroupMember* member : m_groupMembers)
	{
		if (member != nullptr && member->GetRole(role))
		{
			return member;
		}
	}

	return nullptr;
}

CGroupMember* CGroup::GetNthGroupMember(int position) const
{
	if (position < 0 || position >= MAX_GROUP_SIZE)
		return nullptr;

	for (int index = 0; index < MAX_GROUP_SIZE; ++index)
	{
		CGroupMember* pMember = m_groupMembers[index];

		if (pMember)
		{
			if (position == 0)
				return pMember;

			position--;
		}
	}

	return nullptr;
}

uint32_t CGroup::GetNumberOfMembers(bool includeOffline /*= true*/) const
{
	uint32_t count = 0;

	for (CGroupMember* member : m_groupMembers)
	{
		if (member != nullptr && (includeOffline || !member->IsOffline()))
			count++;
	}

	// If you're by yourself, then return no members (no group).
	if (count == 1)
		return 0;

	return count;
}

uint32_t CGroup::GetNumberOfMembersExcludingSelf(bool includeOffline /*= true*/) const
{
	uint32_t count = 0;

	for (int index = 1; index < MAX_GROUP_SIZE; ++index)
	{
		CGroupMember* member = m_groupMembers[index];

		if (member != nullptr && (includeOffline || !member->IsOffline()))
			count++;
	}

	return count;
}

uint32_t CGroup::GetNumberOfPlayerMembers(bool includeOffline /*= true*/) const
{
	uint32_t count = 0;

	for (CGroupMember* member : m_groupMembers)
	{
		if (member != nullptr
			&& (includeOffline || !member->IsOffline())
			&& (std::string_view{ member->GetOwnerName() }.empty()))
		{
			count++;
		}
	}

	return count;
}

int CGroup::GetGroupMemberIndex(CGroupMember* pMember) const
{
	if (!pMember) return -1;

	for (int index = 0; index < MAX_GROUP_SIZE; ++index)
	{
		if (m_groupMembers[index] == pMember)
			return index;
	}

	return -1;
}

int CGroup::GetGroupMemberVisualIndex(CGroupMember* pMember) const
{
	if (!pMember) return -1;

	int slot = -1;

	for (int index = 0; index < MAX_GROUP_SIZE; ++index)
	{
		if (m_groupMembers[index])
		{
			++slot;
			if (m_groupMembers[index] == pMember)
				return slot;
		}
	}

	return -1;
}

bool CGroup::IsGroupMember(PlayerClient* pPlayer) const
{
	if (!pPlayer) return false;

	for (CGroupMember* member : m_groupMembers)
	{
		if (member && member->GetPlayer() == pPlayer)
			return true;
	}

	return false;
}

bool CGroup::IsGroupLeader(PlayerClient* pPlayer) const
{
	if (!pPlayer) return false;

	if (m_groupLeader)
	{
		return m_groupLeader->GetPlayer() == pPlayer;
	}

	return false;
}

//============================================================================
// ExtendedTargetList
//============================================================================

ExtendedTargetSlot* ExtendedTargetList::GetSlot(int slot)
{
	if (slot >= 0 && slot < m_targetSlots.GetLength())
	{
		return &m_targetSlots[slot];
	}

	return nullptr;
}

#ifdef __GetXTargetType_x
FUNCTION_AT_ADDRESS(const char*, ExtendedTargetList::ExtendedTargetRoleName(uint32_t), __GetXTargetType);
#endif

// This was previously defined incorrectly, we keep it for compatibility.
const char* GetXtargetType(DWORD type)
{
	if (!pLocalPC) return nullptr;

	return pLocalPC->pExtendedTargetList->ExtendedTargetRoleName(type);
}

//============================================================================
// BaseProfile
//============================================================================


//============================================================================
// CharacterBase
//============================================================================

#ifdef CharacterBase__IsExpansionFlag_x
FUNCTION_AT_ADDRESS(int, CharacterBase::IsExpansionFlag(int), CharacterBase__IsExpansionFlag);
#endif

//============================================================================
// CharacterZoneClient
//============================================================================

#ifdef CharacterZoneClient__FindAffectSlot_x
FUNCTION_AT_ADDRESS(EQ_Affect*, CharacterZoneClient::FindAffectSlot(int, PlayerClient*, int*, bool, int, EQ_Affect*, int), CharacterZoneClient__FindAffectSlot);
#endif
#ifdef CharacterZoneClient__GetMaxEffects_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::GetMaxEffects() const, CharacterZoneClient__GetMaxEffects);
#endif
#ifdef CharacterZoneClient__GetOpenEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetOpenEffectSlot(bool, bool, int), CharacterZoneClient__GetOpenEffectSlot);
#endif
#ifdef CharacterZoneClient__GetFirstEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFirstEffectSlot(bool, bool), CharacterZoneClient__GetFirstEffectSlot);
#endif
#ifdef CharacterZoneClient__GetLastEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetLastEffectSlot(bool, bool, bool), CharacterZoneClient__GetLastEffectSlot);
#endif
#ifdef CharacterZoneClient__HasSkill_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::HasSkill(int), CharacterZoneClient__HasSkill);
#endif
#ifdef CharacterZoneClient__MakeMeVisible_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::MakeMeVisible(int, bool), CharacterZoneClient__MakeMeVisible);
#endif
#ifdef CharacterZoneClient__GetItemCountWorn_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetItemCountWorn(int), CharacterZoneClient__GetItemCountWorn);
#endif
#ifdef CharacterZoneClient__GetItemCountInInventory_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetItemCountInInventory(int, bool skipCheck), CharacterZoneClient__GetItemCountInInventory);
#endif
#ifdef CharacterZoneClient__GetCursorItemCount_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetCursorItemCount(int), CharacterZoneClient__GetCursorItemCount);
#endif
#ifdef CharacterZoneClient__ApplyDamage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ApplyDamage(int, int, int, int, int, int), CharacterZoneClient__ApplyDamage);
#endif
#ifdef CharacterZoneClient__BardCastBard_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::BardCastBard(const EQ_Spell*, signed int) const, CharacterZoneClient__BardCastBard);
#endif
#ifdef CharacterZoneClient__CalcAffectChange_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CalcAffectChange(const EQ_Spell* spell, BYTE, BYTE, const EQ_Affect*, int, PlayerZoneClient*, bool, int, bool), CharacterZoneClient__CalcAffectChange);
#endif
#ifdef CharacterZoneClient__CalcAffectChangeGeneric_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CalcAffectChangeGeneric(const EQ_Spell* spell, BYTE, BYTE, const EQ_Affect*, int, bool), CharacterZoneClient__CalcAffectChangeGeneric);
#endif
#ifdef CharacterZoneClient__IsStackBlocked_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::IsStackBlocked(const EQ_Spell*, PlayerClient*, EQ_Affect*, int, bool), CharacterZoneClient__IsStackBlocked);
#endif
#ifdef CharacterZoneClient__CanUseMemorizedSpellSlot_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::CanUseMemorizedSpellSlot(int), CharacterZoneClient__CanUseMemorizedSpellSlot);
#endif
#ifdef CharacterZoneClient__Max_Endurance_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Max_Endurance(bool), CharacterZoneClient__Max_Endurance);
#endif
#ifdef CharacterZoneClient__Max_Mana_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Max_Mana(bool), CharacterZoneClient__Max_Mana);
#endif
#ifdef CharacterZoneClient__Max_HP_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Max_HP(int, bool), CharacterZoneClient__Max_HP);
#endif
#ifdef CharacterZoneClient__CharacterZoneClientResetAllMembers_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::CharacterZoneClientResetAllMembers(), CharacterZoneClient__CharacterZoneClientResetAllMembers);
#endif
#ifdef CharacterZoneClient__ModifyCurHP_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ModifyCurHP(int32_t modification, PlayerZoneClient* resposibleplayer, int skilltype), CharacterZoneClient__ModifyCurHP);
#endif
#ifdef CharacterZoneClient__IsSpellcaster_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::IsSpellcaster(), CharacterZoneClient__IsSpellcaster);
#endif
#ifdef CharacterZoneClient__DoLight_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoLight(unsigned char), CharacterZoneClient__DoLight);
#endif
#ifdef CharacterZoneClient__Skill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Skill(int), CharacterZoneClient__Skill);
#endif
#ifdef CharacterZoneClient__HasSpell_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::HasSpell(int), CharacterZoneClient__HasSpell);
#endif
#ifdef CharacterZoneClient__ResetCur_HP_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ResetCur_HP(int), CharacterZoneClient__ResetCur_HP);
#endif
#ifdef CharacterZoneClient__GetEnduranceRegen_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetEnduranceRegen(bool bIncItemsAndBuffs, bool bCombat), CharacterZoneClient__GetEnduranceRegen);
#endif
#ifdef CharacterZoneClient__GetHPRegen_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetHPRegen(bool bIncItemsAndBuffs, bool* bIsBleeding, bool bCombat), CharacterZoneClient__GetHPRegen);
#endif
#ifdef CharacterZoneClient__GetManaRegen_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetManaRegen(bool bincItemsAndBuffs, bool bCombat), CharacterZoneClient__GetManaRegen);
#endif
#ifdef CharacterZoneClient__Cur_HP_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Cur_HP(int SpawnType, bool bCapAtMax), CharacterZoneClient__Cur_HP);
#endif
#ifdef CharacterZoneClient__GetHPFromStamina_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetHPFromStamina(int), CharacterZoneClient__GetHPFromStamina);
#endif
#ifdef CharacterZoneClient__Cur_Mana_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Cur_Mana(bool bCapAtMax), CharacterZoneClient__Cur_Mana);
#endif
#ifdef CharacterZoneClient__IsMage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::IsMage(), CharacterZoneClient__IsMage);
#endif
#ifdef CharacterZoneClient__GetClassACBonus_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetClassACBonus(int), CharacterZoneClient__GetClassACBonus);
#endif
#ifdef CharacterZoneClient__ac_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ac(bool), CharacterZoneClient__ac);
#endif
#ifdef CharacterZoneClient__compute_tohit_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::compute_tohit(unsigned char), CharacterZoneClient__compute_tohit);
#endif
#ifdef CharacterZoneClient__defense_agility_bonus_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::defense_agility_bonus(), CharacterZoneClient__defense_agility_bonus);
#endif
#ifdef CharacterZoneClient__compute_defense_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::compute_defense(), CharacterZoneClient__compute_defense);
#endif
#ifdef CharacterZoneClient__offense_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::offense(unsigned char), CharacterZoneClient__offense);
#endif
#ifdef CharacterZoneClient__HasSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::HasSkill(unsigned char), CharacterZoneClient__HasSkill);
#endif
#ifdef CharacterZoneClient__HasInnateSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::HasInnateSkill(unsigned char, int), CharacterZoneClient__HasInnateSkill);
#endif
#ifdef CharacterZoneClient__InitMyLanguages_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::InitMyLanguages(), CharacterZoneClient__InitMyLanguages);
#endif
#ifdef CharacterZoneClient__BaneDamage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::BaneDamage(EQ_Equipment*), CharacterZoneClient__BaneDamage);
#endif
#ifdef CharacterZoneClient__ElementResistDmg_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ElementResistDmg(EQ_Equipment*, int), CharacterZoneClient__ElementResistDmg);
#endif
#ifdef CharacterZoneClient__save_bash_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_bash(int), CharacterZoneClient__save_bash);
#endif
#ifdef CharacterZoneClient__CapStat_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CapStat(int, int), CharacterZoneClient__CapStat);
#endif
#ifdef CharacterZoneClient__CalcFoodDrinkBonus_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::CalcFoodDrinkBonus(int), CharacterZoneClient__CalcFoodDrinkBonus);
#endif
#ifdef CharacterZoneClient__basesave_magic_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_magic(), CharacterZoneClient__basesave_magic);
#endif
#ifdef CharacterZoneClient__save_magic_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_magic(), CharacterZoneClient__save_magic);
#endif
#ifdef CharacterZoneClient__basesave_fire_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_fire(), CharacterZoneClient__basesave_fire);
#endif
#ifdef CharacterZoneClient__save_fire_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_fire(), CharacterZoneClient__save_fire);
#endif
#ifdef CharacterZoneClient__basesave_cold_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_cold(), CharacterZoneClient__basesave_cold);
#endif
#ifdef CharacterZoneClient__save_cold_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_cold(), CharacterZoneClient__save_cold);
#endif
#ifdef CharacterZoneClient__basesave_disease_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_disease(), CharacterZoneClient__basesave_disease);
#endif
#ifdef CharacterZoneClient__save_disease_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_disease(), CharacterZoneClient__save_disease);
#endif
#ifdef CharacterZoneClient__basesave_poison_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_poison(), CharacterZoneClient__basesave_poison);
#endif
#ifdef CharacterZoneClient__save_poison_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_poison(), CharacterZoneClient__save_poison);
#endif
#ifdef CharacterZoneClient__Str_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Str(), CharacterZoneClient__Str);
#endif
#ifdef CharacterZoneClient__Sta_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Sta(), CharacterZoneClient__Sta);
#endif
#ifdef CharacterZoneClient__Cha_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Cha(), CharacterZoneClient__Cha);
#endif
#ifdef CharacterZoneClient__Dex_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Dex(), CharacterZoneClient__Dex);
#endif
#ifdef CharacterZoneClient__Int_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Int(), CharacterZoneClient__Int);
#endif
#ifdef CharacterZoneClient__Agi_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Agi(), CharacterZoneClient__Agi);
#endif
#ifdef CharacterZoneClient__Wis_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Wis(), CharacterZoneClient__Wis);
#endif
#ifdef CharacterZoneClient__ApplyFatigue_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ApplyFatigue(int), CharacterZoneClient__ApplyFatigue);
#endif
#ifdef CharacterZoneClient__max_encumbrance_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::max_encumbrance(), CharacterZoneClient__max_encumbrance);
#endif
#ifdef CharacterZoneClient__CanUseItem_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::CanUseItem(const ItemPtr& pItem, bool, bool), CharacterZoneClient__CanUseItem);
#endif
#ifdef CharacterZoneClient__encum_factor_x
FUNCTION_AT_ADDRESS(float, CharacterZoneClient::encum_factor(), CharacterZoneClient__encum_factor);
#endif
#ifdef CharacterZoneClient__cur_encumbrance_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::cur_encumbrance(), CharacterZoneClient__cur_encumbrance);
#endif
#ifdef CharacterZoneClient__Race_x
FUNCTION_AT_ADDRESS(char*, CharacterZoneClient::Race(int), CharacterZoneClient__Race);
#endif
#ifdef CharacterZoneClient__Class_x
FUNCTION_AT_ADDRESS(char*, CharacterZoneClient::Class(int), CharacterZoneClient__Class);
#endif
#ifdef CharacterZoneClient__KunarkClass_x
FUNCTION_AT_ADDRESS(char*, CharacterZoneClient::KunarkClass(int, int, int, bool), CharacterZoneClient__KunarkClass);
#endif
#ifdef CharacterZoneClient__ClassMin_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::ClassMin(int, int, unsigned char), CharacterZoneClient__ClassMin);
#endif
#ifdef CharacterZoneClient__CheckClass_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CheckClass(int, int), CharacterZoneClient__CheckClass);
#endif
#ifdef CharacterZoneClient__CanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanWorship(int, int, unsigned char), CharacterZoneClient__CanWorship);
#endif
#ifdef CharacterZoneClient__HumanCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::HumanCanWorship(unsigned char, unsigned char), CharacterZoneClient__HumanCanWorship);
#endif
#ifdef CharacterZoneClient__BarbarianCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::BarbarianCanWorship(unsigned char, unsigned char), CharacterZoneClient__BarbarianCanWorship);
#endif
#ifdef CharacterZoneClient__EruditeCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::EruditeCanWorship(unsigned char, unsigned char), CharacterZoneClient__EruditeCanWorship);
#endif
#ifdef CharacterZoneClient__ElfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::ElfCanWorship(unsigned char, unsigned char), CharacterZoneClient__ElfCanWorship);
#endif
#ifdef CharacterZoneClient__HighElfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::HighElfCanWorship(unsigned char, unsigned char), CharacterZoneClient__HighElfCanWorship);
#endif
#ifdef CharacterZoneClient__DarkElfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::DarkElfCanWorship(unsigned char, unsigned char), CharacterZoneClient__DarkElfCanWorship);
#endif
#ifdef CharacterZoneClient__HalfElfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::HalfElfCanWorship(unsigned char, unsigned char), CharacterZoneClient__HalfElfCanWorship);
#endif
#ifdef CharacterZoneClient__DwarfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::DwarfCanWorship(unsigned char, unsigned char), CharacterZoneClient__DwarfCanWorship);
#endif
#ifdef CharacterZoneClient__TrollCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::TrollCanWorship(unsigned char, unsigned char), CharacterZoneClient__TrollCanWorship);
#endif
#ifdef CharacterZoneClient__OgreCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::OgreCanWorship(unsigned char, unsigned char), CharacterZoneClient__OgreCanWorship);
#endif
#ifdef CharacterZoneClient__HalflingCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::HalflingCanWorship(unsigned char, unsigned char), CharacterZoneClient__HalflingCanWorship);
#endif
#ifdef CharacterZoneClient__GnomeCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::GnomeCanWorship(unsigned char, unsigned char), CharacterZoneClient__GnomeCanWorship);
#endif
#ifdef CharacterZoneClient__IksarCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::IksarCanWorship(unsigned char, unsigned char), CharacterZoneClient__IksarCanWorship);
#endif
#ifdef CharacterZoneClient__VahShirCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::VahShirCanWorship(unsigned char, unsigned char), CharacterZoneClient__VahShirCanWorship);
#endif
#ifdef CharacterZoneClient__FroglockCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::FroglockCanWorship(unsigned char, unsigned char), CharacterZoneClient__FroglockCanWorship);
#endif
#ifdef CharacterZoneClient__CityCanStart_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CityCanStart(int, int, int, int), CharacterZoneClient__CityCanStart);
#endif
#ifdef CharacterZoneClient__BaseAttr_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::BaseAttr(int, unsigned char), CharacterZoneClient__BaseAttr);
#endif
#ifdef CharacterZoneClient__InitSkills_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::InitSkills(unsigned char, unsigned int), CharacterZoneClient__InitSkills);
#endif
#ifdef CharacterZoneClient__InitInnates_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::InitInnates(unsigned int, unsigned int), CharacterZoneClient__InitInnates);
#endif
#ifdef CharacterZoneClient__IsSpecialBazaarSpot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::IsSpecialBazaarSpot(EQPlayer*), CharacterZoneClient__IsSpecialBazaarSpot);
#endif
#ifdef CharacterZoneClient__CanSecondaryAttack_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanSecondaryAttack(EQPlayer*), CharacterZoneClient__CanSecondaryAttack);
#endif
#ifdef CharacterZoneClient__CanDoubleAttack_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanDoubleAttack(EQPlayer*, unsigned char), CharacterZoneClient__CanDoubleAttack);
#endif
#ifdef CharacterZoneClient__AntiTwinkAdj_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::AntiTwinkAdj(EQ_Equipment*, int, int), CharacterZoneClient__AntiTwinkAdj);
#endif
#ifdef CharacterZoneClient__GetSkillBaseDamage_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::GetSkillBaseDamage(unsigned char, EQPlayer*), CharacterZoneClient__GetSkillBaseDamage);
#endif
#ifdef CharacterZoneClient__UseSkill_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::UseSkill(unsigned char skill, PlayerZoneClient* target, bool), CharacterZoneClient__UseSkill);
#endif
#ifdef CharacterZoneClient__DoIntimidationEvent_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoIntimidationEvent(), CharacterZoneClient__DoIntimidationEvent);
#endif
#ifdef CharacterZoneClient__DoFishingEvent_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoFishingEvent(), CharacterZoneClient__DoFishingEvent);
#endif
#ifdef CharacterZoneClient__FindClosest_x
FUNCTION_AT_ADDRESS(EQPlayer*, CharacterZoneClient::FindClosest(int, int, int, int, int), CharacterZoneClient__FindClosest);
#endif
#ifdef CharacterZoneClient__IAmDead_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::IAmDead(struct _EQMissileHitinfo*, int), CharacterZoneClient__IAmDead);
#endif
#ifdef CharacterZoneClient__TotalOnPerson_x
FUNCTION_AT_ADDRESS(long, CharacterZoneClient::TotalOnPerson(), CharacterZoneClient__TotalOnPerson);
#endif
#ifdef CharacterZoneClient__ItemSold_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ItemSold(long), CharacterZoneClient__ItemSold);
#endif
#ifdef CharacterZoneClient__TakeFallDamage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::TakeFallDamage(float), CharacterZoneClient__TakeFallDamage);
#endif
#ifdef CharacterZoneClient__IHaveSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::IHaveSkill(unsigned char), CharacterZoneClient__IHaveSkill);
#endif
#ifdef CharacterZoneClient__NoMezMe_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::NoMezMe(int, EQPlayer*, EQ_Spell*), CharacterZoneClient__NoMezMe);
#endif
#ifdef CharacterZoneClient__NoBashMe_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::NoBashMe(int), CharacterZoneClient__NoBashMe);
#endif
#ifdef CharacterZoneClient__StunMe_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::StunMe(unsigned int, bool, bool, bool), CharacterZoneClient__StunMe);
#endif
#ifdef CharacterZoneClient__UnStunMe_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::UnStunMe(), CharacterZoneClient__UnStunMe);
#endif
#ifdef CharacterZoneClient__ApplyDamage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ApplyDamage(int, struct _EQMissileHitinfo*, bool, HateListEntry*, bool), CharacterZoneClient__ApplyDamage);
#endif
#ifdef CharacterZoneClient__NotifyPCAffectChange_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::NotifyPCAffectChange(int, int), CharacterZoneClient__NotifyPCAffectChange);
#endif
#ifdef CharacterZoneClient__UpdateMyVisibleStatus_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::UpdateMyVisibleStatus(), CharacterZoneClient__UpdateMyVisibleStatus);
#endif
#ifdef CharacterZoneClient__CanISeeInvis_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanISeeInvis(), CharacterZoneClient__CanISeeInvis);
#endif
#ifdef CharacterZoneClient__CanIBreathe_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanIBreathe(), CharacterZoneClient__CanIBreathe);
#endif
#ifdef CharacterZoneClient__ProcessEnvironment_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ProcessEnvironment(), CharacterZoneClient__ProcessEnvironment);
#endif
#ifdef CharacterZoneClient__ProcessHungerandThirst_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ProcessHungerandThirst(unsigned int), CharacterZoneClient__ProcessHungerandThirst);
#endif
#ifdef CharacterZoneClient__ItemSpellAffects_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ItemSpellAffects(int), CharacterZoneClient__ItemSpellAffects);
#endif
#ifdef CharacterZoneClient__ProcessAllStats_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ProcessAllStats(), CharacterZoneClient__ProcessAllStats);
#endif
#ifdef CharacterZoneClient__DoPassageOfTime_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoPassageOfTime(), CharacterZoneClient__DoPassageOfTime);
#endif
#ifdef CharacterZoneClient__FindItemByClass_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::FindItemByClass(int, int*, int*), CharacterZoneClient__FindItemByClass);
#endif
#ifdef CharacterZoneClient__FindItemQty_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::FindItemQty(int, int), CharacterZoneClient__FindItemQty);
#endif
#ifdef CharacterZoneClient__CanMedOnHorse_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanMedOnHorse(), CharacterZoneClient__CanMedOnHorse);
#endif
#ifdef CharacterZoneClient__ExpendItemCharge_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::ExpendItemCharge(int, int), CharacterZoneClient__ExpendItemCharge);
#endif
#ifdef CharacterZoneClient__AutoEat_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::AutoEat(unsigned char), CharacterZoneClient__AutoEat);
#endif
#ifdef CharacterZoneClient__CheckFoodAndWater_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CheckFoodAndWater(), CharacterZoneClient__CheckFoodAndWater);
#endif
#ifdef CharacterZoneClient__DoMeditation_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoMeditation(), CharacterZoneClient__DoMeditation);
#endif
#ifdef CharacterZoneClient__SetLocalVar_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::SetLocalVar(char*, int), CharacterZoneClient__SetLocalVar);
#endif
#ifdef CharacterZoneClient__GetIndexSkillMinDamageMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetIndexSkillMinDamageMod(int), CharacterZoneClient__GetIndexSkillMinDamageMod);
#endif
#ifdef CharacterZoneClient__GetFocusConserveRegChance_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFocusConserveRegChance(EQ_Spell const*, EQ_Equipment**), CharacterZoneClient__GetFocusConserveRegChance);
#endif
#ifdef CharacterZoneClient__GetFocusCastingTimeModifier_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFocusCastingTimeModifier(const EQ_Spell* pSpell, ItemPtr& pItemOut, bool bEvalOnly), CharacterZoneClient__GetFocusCastingTimeModifier);
#endif
#ifdef CharacterZoneClient__GetFocusDurationMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFocusDurationMod(const EQ_Spell* spell, ItemPtr& pItemOut, PlayerZoneClient* pCaster, int originalDuration, int* pOut1, int* pOut2), CharacterZoneClient__GetFocusDurationMod);
#endif
#ifdef CharacterZoneClient__GetFocusItem_x
FUNCTION_AT_ADDRESS(EQ_Equipment*, CharacterZoneClient::GetFocusItem(EQ_Spell const*, int), CharacterZoneClient__GetFocusItem);
#endif
#ifdef CharacterZoneClient__GetFocusEffect_x
FUNCTION_AT_ADDRESS(EQ_Spell*, CharacterZoneClient::GetFocusEffect(EQ_Spell const*, int), CharacterZoneClient__GetFocusEffect);
#endif
#ifdef CharacterZoneClient__DoesSpellMatchFocusFilters_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::DoesSpellMatchFocusFilters(EQ_Spell const*, EQ_Spell const*), CharacterZoneClient__DoesSpellMatchFocusFilters);
#endif
#ifdef CharacterZoneClient__GetMyPetPlayer_x
FUNCTION_AT_ADDRESS(EQPlayer*, CharacterZoneClient::GetMyPetPlayer(), CharacterZoneClient__GetMyPetPlayer);
#endif
#ifdef CharacterZoneClient__SetEffectId_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::SetEffectId(unsigned char, unsigned int), CharacterZoneClient__SetEffectId);
#endif
#ifdef CharacterZoneClient__CastSpell_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CastSpell(unsigned char gemid, int spellid, const ItemPtr& ppItem, const ItemGlobalIndex&, enum ItemSpellTypes slot, unsigned char spell_loc, int arg7, int arg8, int arg9, bool arg10), CharacterZoneClient__CastSpell);
#endif
#ifdef CharacterZoneClient__GetBardInstrumentMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetBardInstrumentMod(int), CharacterZoneClient__GetBardInstrumentMod);
#endif
#ifdef CharacterZoneClient__CalculateBardSongMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CalculateBardSongMod(int), CharacterZoneClient__CalculateBardSongMod);
#endif
#ifdef CharacterZoneClient__CastingRequirementsMet_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CastingRequirementsMet(int), CharacterZoneClient__CastingRequirementsMet);
#endif
#ifdef CharacterZoneClient__GetCastingTimeModifier_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetCastingTimeModifier(const EQ_Spell*), CharacterZoneClient__GetCastingTimeModifier);
#endif
#ifdef CharacterZoneClient__IsValidAffect_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::IsValidAffect(int), CharacterZoneClient__IsValidAffect);
#endif
#ifdef CharacterZoneClient__HandleSpecialPCAffects_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::HandleSpecialPCAffects(int), CharacterZoneClient__HandleSpecialPCAffects);
#endif
#ifdef CharacterZoneClient__GetPCSpellAffect_x
FUNCTION_AT_ADDRESS(EQ_Affect*, CharacterZoneClient::GetPCSpellAffect(int theaffect, int* slotnum, int* spaslot) const, CharacterZoneClient__GetPCSpellAffect);
#endif
#ifdef CharacterZoneClient__TotalSpellAffects_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::TotalSpellAffects(unsigned char, bool, int*), CharacterZoneClient__TotalSpellAffects);
#endif
#ifdef CharacterZoneClient__IsSpellAffectingPC_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::IsSpellAffectingPC(int, int), CharacterZoneClient__IsSpellAffectingPC);
#endif
#ifdef CharacterZoneClient__SpellFizzled_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::SpellFizzled(unsigned char, EQ_Spell*), CharacterZoneClient__SpellFizzled);
#endif
#ifdef CharacterZoneClient__ProcessAffects_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ProcessAffects(), CharacterZoneClient__ProcessAffects);
#endif
#ifdef CharacterZoneClient__GetOpenEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetOpenEffectSlot(bool, int), CharacterZoneClient__GetOpenEffectSlot);
#endif
#ifdef CharacterZoneClient__GetFirstEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFirstEffectSlot(bool), CharacterZoneClient__GetFirstEffectSlot);
#endif
#ifdef CharacterZoneClient__GetLastEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetLastEffectSlot(bool), CharacterZoneClient__GetLastEffectSlot);
#endif
#ifdef CharacterZoneClient__IsSpellTooPowerfull_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::IsSpellTooPowerfull(EQ_Spell*, CharacterZoneClient*), CharacterZoneClient__IsSpellTooPowerfull);
#endif
#ifdef CharacterZoneClient__HitBySpell_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::HitBySpell(struct _EQMissileHitinfo*), CharacterZoneClient__HitBySpell);
#endif
#ifdef CharacterZoneClient__EQSPA_Feign_Death_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::EQSPA_Feign_Death(int), CharacterZoneClient__EQSPA_Feign_Death);
#endif
#ifdef CharacterZoneClient__SpellDuration_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::SpellDuration(EQ_Spell const*, uint8_t, uint8_t), CharacterZoneClient__SpellDuration);
#endif
#ifdef CharacterZoneClient__eqspa_change_form_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::eqspa_change_form(EQ_Spell*, int, int, EQ_Affect*), CharacterZoneClient__eqspa_change_form);
#endif
#ifdef CharacterZoneClient__eqspa_movement_rate_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::eqspa_movement_rate(int), CharacterZoneClient__eqspa_movement_rate);
#endif
#ifdef CharacterZoneClient__eqspa_levitation_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::eqspa_levitation(), CharacterZoneClient__eqspa_levitation);
#endif
#ifdef CharacterZoneClient__eqspa_hp_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::eqspa_hp(unsigned int, EQ_Affect*, int, EQ_Spell*), CharacterZoneClient__eqspa_hp);
#endif
#ifdef CharacterZoneClient__eqspa_locate_corpse_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::eqspa_locate_corpse(), CharacterZoneClient__eqspa_locate_corpse);
#endif
#ifdef CharacterZoneClient__InSpecialBindSpot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::InSpecialBindSpot(EQPlayer*), CharacterZoneClient__InSpecialBindSpot);
#endif
#ifdef CharacterZoneClient__RemovePCAffect_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::RemovePCAffect(EQ_Affect*), CharacterZoneClient__RemovePCAffect);
#endif
#ifdef CharacterZoneClient__RemovePCAffectex_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::RemovePCAffectex(EQ_Affect*, bool, ArrayClass<LaunchSpellData*>&, int, int, int), CharacterZoneClient__RemovePCAffectex);
#endif
#ifdef CharacterZoneClient__StopSpellCast_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::StopSpellCast(unsigned char), CharacterZoneClient__StopSpellCast);
#endif
#ifdef CharacterZoneClient__StopSpellCast1_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::StopSpellCast(unsigned char, int), CharacterZoneClient__StopSpellCast1);
#endif
#ifdef CharacterZoneClient__ReCachSpellEffects_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ReCachSpellEffects(), CharacterZoneClient__ReCachSpellEffects);
#endif
#ifdef CharacterZoneClient__ReCachItemEffects_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ReCachItemEffects(), CharacterZoneClient__ReCachItemEffects);
#endif
#ifdef CharacterZoneClient__GetCachEQSPA_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetCachEQSPA(int), CharacterZoneClient__GetCachEQSPA);
#endif
#ifdef PcClient__GetConLevel_x
FUNCTION_AT_ADDRESS(unsigned long, PcClient::GetConLevel(const PlayerClient*), PcClient__GetConLevel);
#endif
#ifdef CharacterZoneClient__TotalEffect_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::TotalEffect(int, bool, int, bool, bool) const, CharacterZoneClient__TotalEffect);
#endif
#ifdef CharacterZoneClient__GetAdjustedSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetAdjustedSkill(int), CharacterZoneClient__GetAdjustedSkill);
#endif
#ifdef CharacterZoneClient__GetBaseSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetBaseSkill(int), CharacterZoneClient__GetBaseSkill);
#endif
#ifdef CharacterZoneClient__GetCurrentMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetCurrentMod(int index), CharacterZoneClient__GetCurrentMod);
#endif
#ifdef CharacterZoneClient__GetModCap_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetModCap(int index, bool bToggle), CharacterZoneClient__GetModCap);
#endif

FUNCTION_AT_ADDRESS(void, CharacterZoneClient::GetPctModAndMin(const EQ_Spell* pSpell, int spa, ItemPtr& pOutItem, int& outPctMod, int& outMin, bool wMins, bool evalOnly, bool all, CharacterZoneClient* caster), CharacterZoneClient__GetPctModAndMin);

FUNCTION_AT_VIRTUAL_ADDRESS(int, CharacterZoneClient::CalculateInvisLevel(InvisibleTypes, bool bIncludeSos), 0x40);

int CharacterZoneClient::GetFocusReuseMod(const EQ_Spell* pSpell, ItemPtr& pOutItem, bool evalOnly)
{
	int pctMod = 0;
	int minVal = 0;

	GetPctModAndMin(pSpell, SPA_FOCUS_REUSE_TIMER, pOutItem, pctMod, minVal, false, evalOnly);

	return std::min<int>(minVal, (int)pSpell->RecastTime);
}

int CharacterZoneClient::GetFocusRangeModifier(const EQ_Spell* pSpell, ItemPtr& pOutItem)
{
	int pctMod = 0;
	int minVal = 0;

	GetPctModAndMin(pSpell, SPA_FOCUS_RANGE_MOD, pOutItem, pctMod, minVal, false);

	return static_cast<int>(pSpell->Range * static_cast<float>(minVal) / 100);
}

//============================================================================
// PcClient
//============================================================================

#ifdef PcClient__GetMeleeSpellFromSkillIndex_x
FUNCTION_AT_ADDRESS(EQ_Spell*, PcClient::GetMeleeSpellFromSkillIndex(int), PcClient__GetMeleeSpellFromSkillIndex);
#endif

//============================================================================
// PcZoneClient
//============================================================================

#ifdef PcZoneClient__GetPcSkillLimit_x
FUNCTION_AT_ADDRESS(int, PcZoneClient::GetPcSkillLimit(int, bool), PcZoneClient__GetPcSkillLimit);
#endif
#ifdef PcZoneClient__HasCombatAbility_x
FUNCTION_AT_ADDRESS(bool, PcZoneClient::HasCombatAbility(int), PcZoneClient__HasCombatAbility);
#endif
#ifdef PcZoneClient__RemovePetEffect_x
FUNCTION_AT_ADDRESS(void, PcZoneClient::RemovePetEffect(int), PcZoneClient__RemovePetEffect);
#endif
#ifdef PcZoneClient__HasAlternateAbility_x
FUNCTION_AT_ADDRESS(bool, PcZoneClient::HasAlternateAbility(int aaindex, int*, bool, bool), PcZoneClient__HasAlternateAbility);
#endif
#ifdef PcZoneClient__CanEquipItem_x
FUNCTION_AT_ADDRESS(bool, PcZoneClient::CanEquipItem(const ItemPtr& pItem, int slotid, bool bOutputDebug, bool bUseRequiredLevel), PcZoneClient__CanEquipItem);
#endif
#ifdef PcZoneClient__RemoveBuffEffect_x
FUNCTION_AT_ADDRESS(void, PcZoneClient::RemoveBuffEffect(int Index, int SpawnID), PcZoneClient__RemoveBuffEffect);
#endif
#ifdef PcZoneClient__BandolierSwap_x
FUNCTION_AT_ADDRESS(void, PcZoneClient::BandolierSwap(int index), PcZoneClient__BandolierSwap);
#endif
#ifdef PcZoneClient__GetLinkedSpellReuseTimer_x
FUNCTION_AT_ADDRESS(uint32_t, PcZoneClient::GetLinkedSpellReuseTimer(int index), PcZoneClient__GetLinkedSpellReuseTimer);
#endif
#ifdef PcZoneClient__doCombatAbility_x
FUNCTION_AT_ADDRESS(bool, PcZoneClient::DoCombatAbility(int spellID, bool allowLowerRank), PcZoneClient__doCombatAbility);
#endif
#ifdef PcZoneClient__DestroyHeldItemOrMoney_x
FUNCTION_AT_ADDRESS(void, PcZoneClient::DestroyHeldItemOrMoney(), PcZoneClient__DestroyHeldItemOrMoney);
#endif

// TODO: Handle new range checks
ItemPtr PcZoneClient::GetItemByItemClass(int itemClass, ItemIndex* index)
{
	ItemIndex itemIndex = GetItemPosessions().FindItem(
		[&](const ItemPtr& item, const ItemIndex& index) { return item->GetItemClass() == itemClass; });
	if (itemIndex.IsValid() && index)
	{
		*index = itemIndex;
		return GetItemPossession(itemIndex);
	}
	return ItemPtr();
}


// TODO: Rename defines
#ifdef EQ_PC__EQ_PC_x
FUNCTION_AT_ADDRESS(PcClient::PcZoneClient(PcZoneClient*), EQ_PC__EQ_PC);
#endif
#ifdef EQ_PC__dEQ_PC_x
FUNCTION_AT_ADDRESS(PcClient::~PcZoneClient(), EQ_PC__dEQ_PC);
#endif
#ifdef EQ_PC__ClearSharedVault_x
FUNCTION_AT_ADDRESS(void, PcClient::ClearSharedVault(), EQ_PC__ClearSharedVault);
#endif
#ifdef EQ_PC__IsAGroupMember_x
FUNCTION_AT_ADDRESS(int, PcClient::IsAGroupMember(char*), EQ_PC__IsAGroupMember);
#endif
#ifdef EQ_PC__CheckForGroupChanges_x
FUNCTION_AT_ADDRESS(void, PcClient::CheckForGroupChanges(), EQ_PC__CheckForGroupChanges);
#endif
#ifdef EQ_PC__UnpackMyNetPC_x
FUNCTION_AT_ADDRESS(void, PcClient::UnpackMyNetPC(char*, int), EQ_PC__UnpackMyNetPC);
#endif
#ifdef PcClient__AlertInventoryChanged_x
FUNCTION_AT_ADDRESS(void, PcClient::AlertInventoryChanged(), PcClient__AlertInventoryChanged);
#endif
#ifdef EQ_PC__InitPlayerStart_x
FUNCTION_AT_ADDRESS(void, PcClient::InitPlayerStart(unsigned int, unsigned char, int), EQ_PC__InitPlayerStart);
#endif
#ifdef EQ_PC__EmptyPossessionSlots_x
FUNCTION_AT_ADDRESS(void, PcClient::EmptyPossessionSlots(), EQ_PC__EmptyPossessionSlots);
#endif
#ifdef EQ_PC__RefreshMe_x
FUNCTION_AT_ADDRESS(void, PcClient::RefreshMe(int), EQ_PC__RefreshMe);
#endif
#ifdef EQ_PC__PrepareForRepop_x
FUNCTION_AT_ADDRESS(void, PcClient::PrepareForRepop(int), EQ_PC__PrepareForRepop);
#endif
#ifdef EQ_PC__RefitNewbieEQ_x
FUNCTION_AT_ADDRESS(void, PcClient::RefitNewbieEQ(), EQ_PC__RefitNewbieEQ);
#endif
#ifdef PcZoneClient__RemoveMyAffect_x
FUNCTION_AT_ADDRESS(unsigned char, PcClient::RemoveMyAffect(int), PcZoneClient__RemoveMyAffect);
#endif
#ifdef EQ_PC__ProcessFatigue_x
FUNCTION_AT_ADDRESS(void, PcClient::ProcessFatigue(), EQ_PC__ProcessFatigue);
#endif
#ifdef EQ_PC__CheckDupLoreItems_x
FUNCTION_AT_ADDRESS(int, PcClient::CheckDupLoreItems(), EQ_PC__CheckDupLoreItems);
#endif
#ifdef EQ_PC__CostToTrain_x
FUNCTION_AT_ADDRESS(int, PcClient::CostToTrain(int, float, int), EQ_PC__CostToTrain);
#endif
#ifdef EQ_PC__checkLang_x
FUNCTION_AT_ADDRESS(int, PcClient::checkLang(int), EQ_PC__checkLang);
#endif
#ifdef EQ_PC__HandleMoney_x
FUNCTION_AT_ADDRESS(int, PcClient::HandleMoney(long), EQ_PC__HandleMoney);
#endif
#ifdef EQ_PC__DetermineQuestExpGained_x
FUNCTION_AT_ADDRESS(void, PcClient::DetermineQuestExpGained(int), EQ_PC__DetermineQuestExpGained);
#endif
#ifdef EQ_PC__ProcessAirSupply_x
FUNCTION_AT_ADDRESS(void, PcClient::ProcessAirSupply(), EQ_PC__ProcessAirSupply);
#endif
#ifdef EQ_PC__MaxAirSupply_x
FUNCTION_AT_ADDRESS(int, PcClient::MaxAirSupply(), EQ_PC__MaxAirSupply);
#endif
#ifdef EQ_PC__SetFatigue_x
FUNCTION_AT_ADDRESS(void, PcClient::SetFatigue(int), EQ_PC__SetFatigue);
#endif
#ifdef EQ_PC__numInParty_x
FUNCTION_AT_ADDRESS(int, PcClient::numInParty(), EQ_PC__numInParty);
#endif
#ifdef EQ_PC__AtSkillLimit_x
FUNCTION_AT_ADDRESS(unsigned char, PcClient::AtSkillLimit(int), EQ_PC__AtSkillLimit);
#endif
#ifdef PcZoneClient__GetItemRecastTimer_x
FUNCTION_AT_ADDRESS(uint32_t, PcZoneClient::GetItemRecastTimer(const ItemPtr& item, ItemSpellTypes etype), PcZoneClient__GetItemRecastTimer);
#endif
#ifdef PcBase__GetAlternateAbilityId_x
FUNCTION_AT_ADDRESS(int, PcClient::GetAlternateAbilityId(int), PcBase__GetAlternateAbilityId);
#endif
#ifdef PcBase__GetCombatAbility_x
FUNCTION_AT_ADDRESS(int, PcClient::GetCombatAbility(int), PcBase__GetCombatAbility);
#endif
#ifdef PcBase__GetCombatAbilityTimer_x
FUNCTION_AT_ADDRESS(uint32_t, PcClient::GetCombatAbilityTimer(int, int), PcBase__GetCombatAbilityTimer);
#endif
#ifdef PcClient__HasLoreItem_x
FUNCTION_AT_ADDRESS(bool, PcClient::HasLoreItem(const ItemPtr&, bool, bool, bool, bool), PcClient__HasLoreItem);
#endif
#ifdef PcBase__GetItemContainedRealEstateIds_x
FUNCTION_AT_ADDRESS(void, PcClient::GetItemContainedRealEstateIds(ArrayClass<ItemContainingRealEstate>&, bool, bool, bool), PcBase__GetItemContainedRealEstateIds);
#endif
#ifdef PcBase__GetNonArchivedOwnedRealEstates_x
FUNCTION_AT_ADDRESS(void, PcClient::GetNonArchivedOwnedRealEstates(ArrayClass<int>&), PcBase__GetNonArchivedOwnedRealEstates);
#endif
#ifdef EQ_PC__CheckForLanguageImprovement_x
FUNCTION_AT_ADDRESS(void, PcClient::CheckForLanguageImprovement(unsigned char, unsigned char), EQ_PC__CheckForLanguageImprovement);
#endif
#ifdef EQ_PC__CheckSkillImprove_x
FUNCTION_AT_ADDRESS(void, PcClient::CheckSkillImprove(int, float), EQ_PC__CheckSkillImprove);
#endif
#ifdef EQ_PC__GetBodyTint_x
FUNCTION_AT_ADDRESS(unsigned long, PcClient::GetBodyTint(int), EQ_PC__GetBodyTint);
#endif
#ifdef EQ_PC__SetAltAbilityIndex_x
FUNCTION_AT_ADDRESS(void, PcClient::SetAltAbilityIndex(int, int), EQ_PC__SetAltAbilityIndex);
#endif
#ifdef EQ_PC__GetArmorTint_x
FUNCTION_AT_ADDRESS(unsigned long, PcClient::GetArmorTint(int), EQ_PC__GetArmorTint);
#endif
#ifdef EQ_PC__SetArmorTint_x
FUNCTION_AT_ADDRESS(void, PcClient::SetArmorTint(int, unsigned long), EQ_PC__SetArmorTint);
#endif
#ifdef EQ_PC__GetArmorType_x
FUNCTION_AT_ADDRESS(int, PcClient::GetArmorType(int), EQ_PC__GetArmorType);
#endif
#ifdef EQ_PC__SetArmorType_x
FUNCTION_AT_ADDRESS(void, PcClient::SetArmorType(int, int), EQ_PC__SetArmorType);
#endif
#ifdef EQ_PC__InitializeNewPCVariables_x
FUNCTION_AT_ADDRESS(void, PcClient::InitializeNewPCVariables(int), EQ_PC__InitializeNewPCVariables);
#endif

//----------------------------------------------------------------------------

ItemContainer& PcBase::GetKeyRingItems(KeyRingType type)
{
	if (type == eMount)
		return MountKeyRingItems;
	if (type == eIllusion)
		return IllusionKeyRingItems;
	if (type == eFamiliar)
		return FamiliarKeyRingItems;
	if (type == eHeroForge)
		return HeroForgeKeyRingItems;
	if (type == eTeleportationItem)
		return TeleportationKeyRingItems;

	return MountKeyRingItems;
}

const MercenaryAbilityInfo* PcBase::GetMercenaryAbilityInfo(int abilityId) const
{
	for (const MercenaryAbilityInfo* info : MercenaryAbilities)
	{
		if (info->Index == abilityId)
			return info;
	}

	return nullptr;
}

int PcZoneClient::GetMaxAirSupply() const
{
	int race = GetRace();
	if (race == EQR_IKSAR)
		return 127;

	if (race == EQR_FROGLOCK)
		return 256;

	int stam = GetStamina() - 30;
	int bonus = TotalEffect(SPA_INCREASE_AIR_SUPPLY);
	if (bonus <= 0)
		bonus = 100;
	int air = bonus * stam;

	return std::clamp(air / 100, 10, bonus);
}

} // namespace eqlib
