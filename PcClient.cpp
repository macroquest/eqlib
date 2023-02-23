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

// This was previously defined incorrectly, we keep it for compatibility.
const char* GetXtargetType(DWORD type)
{
	if (!pLocalPC) return nullptr;

	return pLocalPC->pExtendedTargetList->ExtendedTargetRoleName(type);
}

//****************************************************************************
// BaseProfile
//****************************************************************************

//============================================================================
// CharacterZoneClient
//============================================================================

int CharacterZoneClient::GetFocusReuseMod(const EQ_Spell* pSpell, ItemPtr& pOutItem, bool evalOnly)
{
	UNUSED(evalOnly);

	return GetFocusReuseMod(pSpell, pOutItem);
}

int CharacterZoneClient::GetFocusDurationMod(const EQ_Spell* spell, ItemPtr& pItemOut, PlayerZoneClient* pCaster, int originalDuration, int* pOut1, int* pOut2)
{
	UNUSED(spell);
	UNUSED(pItemOut);
	UNUSED(pCaster);
	UNUSED(originalDuration);
	UNUSED(pOut1);
	UNUSED(pOut2);

	return 0;
}

//============================================================================
// PcClient
//============================================================================

EQ_Spell* PcClient::GetMeleeSpellFromSkillIndex(int index)
{
	if (index >= 0 && index < NUM_COMBAT_ABILITIES)
	{
		int meleeSpell = GetCombatAbility(index);

		if (meleeSpell > 0)
		{
			return pSpellMgr->GetSpellByID(meleeSpell);
		}
	}

	return nullptr;
}

//============================================================================
// PcZoneClient
//============================================================================

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

//----------------------------------------------------------------------------

//ItemContainer& PcBase::GetKeyRingItems(KeyRingType type)
//{
//	if (type == eMount)
//		return MountKeyRingItems;
//	if (type == eIllusion)
//		return IllusionKeyRingItems;
//	if (type == eFamiliar)
//		return FamiliarKeyRingItems;
//	if (type == eHeroForge)
//		return HeroForgeKeyRingItems;
//	if (type == eTeleportationItem)
//		return TeleportationKeyRingItems;
//
//	return MountKeyRingItems;
//}

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
