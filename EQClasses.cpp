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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include "pch.h"
#include "EQClasses.h"
#include "Globals.h"

#include "AltAbilities.h"
#include "RealEstate.h"

#pragma warning(push)
#pragma warning(disable:4740) // warning C4740: flow in or out of inline asm code suppresses global optimization
#pragma warning(disable:4530) // warning C4530: c++ exception handler used, but unwind semantics are not enabled. Specify /EHsc

namespace eqlib {

//============================================================================
// AchievementManager
//============================================================================

int AchievementManager::GetAchievementCategoryIndexByName(std::string_view name) const
{
	if (name.empty())
		return -1;

	for (int index = 0; index < categories.GetLength(); ++index)
	{
		const AchievementCategory& category = categories[index];

		if (category.parentId == -1 && mq::ci_equals(category.name, name))
			return index;
	}

	return -1;
}

int AchievementManager::GetAchievementIndexByName(std::string_view name) const
{
	if (name.empty())
		return -1;

	for (int index = 0; index < achievements.GetLength(); ++index)
	{
		const Achievement& achievement = achievements[index];

		if (mq::ci_equals(achievement.name, name))
			return index;
	}

	return -1;
}

bool AchievementManager::FillAchievementComponentInfoWithCounts(
	SingleAchievementAndComponentsInfoWithCounts& outInfo, int achievementIndex) const
{
	const SingleAchievementAndComponentsInfo* clientInfo = GetAchievementClientInfoByIndex(achievementIndex);
	if (!clientInfo)
		return false;

	const Achievement* achievement = GetAchievementByIndex(achievementIndex);
	if (!achievement)
		return false;

	outInfo.achievementState = clientInfo->achievementState;
	outInfo.completionTimestamp = clientInfo->completionTimestamp;

	outInfo.completionComponentStatusBitField = clientInfo->completionComponentStatusBitField;
	outInfo.completionComponentCounts.SetLength(outInfo.completionComponentStatusBitField.GetNumBits());
	for (int index = 0; index < achievement->componentsByType[AchievementComponentCompletion].GetLength(); ++index)
	{
		const AchievementComponent& component = achievement->componentsByType[AchievementComponentCompletion][index];
		outInfo.completionComponentCounts[index] = component.count;
	}

	outInfo.indirectComponentStatusBitField = clientInfo->indirectComponentStatusBitField;
	outInfo.indirectComponentCounts.SetLength(outInfo.indirectComponentStatusBitField.GetNumBits());
	for (int index = 0; index < achievement->componentsByType[AchievementComponentIndirect].GetLength(); ++index)
	{
		const AchievementComponent& component = achievement->componentsByType[AchievementComponentIndirect][index];
		outInfo.indirectComponentCounts[index] = component.count;
	}

	outInfo.unlockedComponentStatusBitField = clientInfo->unlockedComponentStatusBitField;
	outInfo.unlockedComponentCounts.SetLength(outInfo.unlockedComponentStatusBitField.GetNumBits());
	for (int index = 0; index < achievement->componentsByType[AchievementComponentUnlock].GetLength(); ++index)
	{
		const AchievementComponent& component = achievement->componentsByType[AchievementComponentUnlock][index];
		outInfo.unlockedComponentCounts[index] = component.count;
	}

	return true;
}

//============================================================================
// CAltAbilityData
//============================================================================

const char* CAltAbilityData::GetNameString() const
{
	return pDBStr->GetString(nName, eAltAbilityName);
}

const char* CAltAbilityData::GetDescriptionString() const
{
	return pDBStr->GetString(nDesc, eAltAbilityDescription);
}

const char* CAltAbilityData::GetCategoryString() const
{
	if (DisplayCategory != -1)
	{
		return pDBStr->GetString(DisplayCategory, eAltAbilityCategory);
	}

	return pDBStr->GetString(Expansion, eExpansionName);
}

const char* CAltAbilityData::GetExpansionString() const
{
	return pDBStr->GetString(Expansion, eExpansionName);
}

const char* CAltAbilityData::GetShortName1() const
{
	if (nShortName == -1)
		return "";

	return pDBStr->GetString(nShortName, eAltAbilityButton1);
}

const char* CAltAbilityData::GetShortName2() const
{
	if (nShortName2 == -1)
		return "";

	return pDBStr->GetString(nShortName2, eAltAbilityButton2);
}

//============================================================================
// EQItemList
//============================================================================

#ifdef EQItemList__EQItemList_x
CONSTRUCTOR_AT_ADDRESS(EQItemList::EQItemList(), EQItemList__EQItemList);
#endif

//============================================================================
// EQWorldData
//============================================================================

bool EQWorldData::IsFlagSet(EQZoneIndex zoneId, uint64_t flag) const
{
	EQZoneInfo* zoneInfo = GetZone(zoneId);

	if (!zoneInfo)
		return false;

	return (zoneInfo->ZoneFlags & flag) != 0;;
}

//============================================================================
// MercenaryAlternateAdvancementManagerClient
//============================================================================

#if HAS_MERCENARY_AA

const char* MercenaryAbilitiesData::GetNameString() const
{
	return pDBStr->GetString(nName, eMercenaryAbilityName);
}

const char* MercenaryAbilitiesData::GetDescriptionString() const
{
	return pDBStr->GetString(nDesc, eMercenaryAbilityDescription);
}

const char* MercenaryAbilitiesData::GetTypeString() const
{
	return pDBStr->GetString(Type, eMercenaryAbilityType);
}

bool MercenaryAbilitiesData::IsRequirementsMet() const
{
	if (!pLocalPC)
		return false;

	auto& mgr = MercenaryAlternateAdvancementManagerClient::Instance();

	for (int i = 0; i < AbilityReqs.GetCount(); ++i)
	{
		const MercenaryAbilityReq& req = AbilityReqs[i];

		if (!IsRequirementMet(req))
			return false;
	}

	return true;
}

bool MercenaryAbilitiesData::IsRequirementMet(const MercenaryAbilityReq& req) const
{
	if (!pLocalPC)
		return false;

	auto& mgr = MercenaryAlternateAdvancementManagerClient::Instance();

	const int* entry = mgr.GetFirstMercenaryAbilityIdByGroupId(req.ReqGroupID);
	while (entry)
	{
		const MercenaryAbilitiesData* mercAbility = mgr.GetMercenaryAbility(*entry);
		// is this an ability that satisfies the requirement?
		if (mercAbility && mercAbility->GroupRank >= req.ReqGroupRank)
		{
			// do we own this ability?
			if (pLocalPC->GetMercenaryAbilityInfo(mercAbility->AbilityID) != nullptr)
				return true;
		}

		entry = mgr.GetNextMercenaryAbilityIdByGroupId(entry);
	}

	// if we didn't find anything then the requirements aren't met.
	return false;
}

//----------------------------------------------------------------------------
const MercenaryAbilitiesData* MercenaryAlternateAdvancementManagerClient::GetMercenaryAbility(int abilityId) const
{
	return MercenaryAbilities.FindFirst(abilityId);
}

const int* MercenaryAlternateAdvancementManagerClient::GetFirstMercenaryAbilityIdByGroupId(int groupId) const
{
	return MercenaryAbilitiesByGroupID.FindFirst(groupId);
}

const int* MercenaryAlternateAdvancementManagerClient::GetNextMercenaryAbilityIdByGroupId(const int* abilityId) const
{
	return MercenaryAbilitiesByGroupID.FindNext(abilityId);
}

int MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank(int abilityId) const
{
	if (MercenaryAbilitiesData* data = MercenaryAbilities.FindFirst(abilityId))
	{
		if (MercenaryAbilityGroup* group = MercenaryAbilityGroups.FindFirst(data->GroupID))
		{
			return (int)group->size();
		}
	}

	return 0;
}

int MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank(int abilityId) const
{
	if (MercenaryAbilitiesData* data = MercenaryAbilities.FindFirst(abilityId))
	{
		if (int* ownedAbilityId = MercenaryAbilitiesOwnedByGroupID.FindFirst(data->GroupID))
		{
			if (MercenaryAbilitiesData* ownedData = MercenaryAbilities.FindFirst(*ownedAbilityId))
			{
				return ownedData->GroupRank;
			}
		}
	}

	return 0;
}

int MercenaryAlternateAdvancementManagerClient::GetMercenaryNextGroupAbility(int abilityId) const
{
	if (MercenaryAbilitiesData* ability = MercenaryAbilities.FindFirst(abilityId))
	{
		if (MercenaryAbilityGroup* group = MercenaryAbilityGroups.FindFirst(ability->GroupID))
		{
			if (int* nextAbility = group->FindFirst(ability->GroupRank + 1))
				return *nextAbility;
		}
	}

	return 0;
}

const MercenaryAbilitiesData* MercenaryAlternateAdvancementManagerClient::GetFirstUnownedAbilityByGroupId(int groupId) const
{
	MercenaryAbilityGroup* group = MercenaryAbilityGroups.FindFirst(groupId);
	if (!group)
		return nullptr;

	const MercenaryAbilitiesData* ownedAbility = nullptr;
	const MercenaryAbilitiesData* unOwnedAbility = nullptr;

	int maxRanks = (int)group->size();
	int curRank = 0;

	if (int* ownedAbilityId = MercenaryAbilitiesOwnedByGroupID.FindFirst(groupId))
	{
		if (ownedAbility = GetMercenaryAbility(*ownedAbilityId))
			curRank = ownedAbility->GroupRank;
	}

	if (!ownedAbility)
	{
		// no owned ability. Need to find the first one.
		const int* pAbilityId = group->GetFirst();
		while (pAbilityId)
		{
			if (const MercenaryAbilitiesData* pAbility = GetMercenaryAbility(*pAbilityId))
			{
				if (pAbility->GroupRank == 1)
				{
					unOwnedAbility = pAbility;
					break;
				}
			}

			pAbilityId = group->GetNext(pAbilityId);
		}
	}
	else if (curRank < maxRanks)
	{
		// we own an ability. the next one is unowned.
		if (int unownedAbilityId = GetMercenaryNextGroupAbility(ownedAbility->AbilityID))
			unOwnedAbility = GetMercenaryAbility(unownedAbilityId);
	}

	return unOwnedAbility;
}

bool MercenaryAlternateAdvancementManagerClient::CanTrainAbility(int abilityId) const
{
	if (pLocalPC == nullptr)
		return false;
	// already purchased?
	if (pLocalPC->GetMercenaryAbilityInfo(abilityId) != nullptr)
		return false;

	if (const MercenaryAbilitiesData* pAbility = GetMercenaryAbility(abilityId))
	{
		// Player requirements met?
		if (pLocalPC->MercAAPoints >= pAbility->Cost
			&& pLocalPC->GetCurrentPcProfile()->Level >= pAbility->MinPlayerLevel)
		{
			// Ability requirements met?
			if (pAbility->IsRequirementsMet())
				return true;
		}
	}

	return false;
}

#endif // HAS_MERCENARY_AA

//============================================================================
// RealEstateManagerClient
//============================================================================

const char* RealEstateTypeToString(RealEstateType type)
{
	switch (type)
	{
	case RealEstateType_None: return "None";
	case RealEstateType_Zone: return "Zone";
	case RealEstateType_GuildHall: return "GuildHall";
	case RealEstateType_PlayerHousing: return "PlayerHousing";
	case RealEstateType_PlayerPlot: return "PlayerPlot";
	case RealEstateType_Neighborhood: return "Neighborhood";
	case RealEstateType_Town: return "Town";
	case RealEstateType_MovingCrate: return "MovingCrate";
	case RealEstateType_GuildPlot: return "GuildPlot";
	case RealEstateType_Any: return "Any";

	case RealEstateType_Unknown:
	default:
		return "Unknown";
	}
}

const char* RealEstateSuperTypeToString(RealEstateSuperType type)
{
	switch (type)
	{
	case RealEstateSuperType_None: return "None";
	case RealEstateSuperType_Zone: return "Zone";
	case RealEstateSuperType_House: return "House";
	case RealEstateSuperType_Plot: return "Plot";
	case RealEstateSuperType_Neighborhood: return "Neighborhood";
	case RealEstateSuperType_Town: return "Town";
	case RealEstateSuperType_MovingCrate: return "MovingCrate";
	case RealEstateSuperType_Any: return "Any";

	case RealEstateSuperType_Unknown:
	default:
		return "Unknown";
	}
}

RealEstateSuperType RealEstateTypeToSuperType(RealEstateType type)
{
	switch (type)
	{
	case RealEstateType_GuildHall:
	case RealEstateType_PlayerHousing:
		return RealEstateSuperType_House;

	case RealEstateType_PlayerPlot:
	case RealEstateType_GuildPlot:
		return RealEstateSuperType_Plot;

	case RealEstateType_Zone: return RealEstateSuperType_Zone;
	case RealEstateType_Neighborhood: return RealEstateSuperType_Neighborhood;
	case RealEstateType_Town: return RealEstateSuperType_Town;
	case RealEstateType_MovingCrate: return RealEstateSuperType_MovingCrate;
	case RealEstateType_Unknown: return RealEstateSuperType_Unknown;
	case RealEstateType_Any: return RealEstateSuperType_Any;
	default: return RealEstateSuperType_None;
	}
}

RealEstateTypeFlag RealEstateTypeToFlags(RealEstateType type)
{
	switch (type)
	{
	case RealEstateType_None: return RealEstateTypeFlag_None;
	case RealEstateType_Zone: return RealEstateTypeFlag_Zone;
	case RealEstateType_GuildHall: return RealEstateTypeFlag_GuildHall;
	case RealEstateType_PlayerHousing: return RealEstateTypeFlag_PlayerHousing;
	case RealEstateType_PlayerPlot: return RealEstateTypeFlag_PlayerPlot;
	case RealEstateType_Neighborhood: return RealEstateTypeFlag_Neighborhood;
	case RealEstateType_Town: return RealEstateTypeFlag_Town;
	case RealEstateType_MovingCrate: return RealEstateTypeFlag_MovingCrate;
	case RealEstateType_GuildPlot: return RealEstateTypeFlag_GuildPlot;
	case RealEstateType_Unknown: return RealEstateTypeFlag_Unknown;
	case RealEstateType_Any: return RealEstateTypeFlag_Any;
	default: return RealEstateTypeFlag_None;
	}
}

RealEstateTypeFlag RealEstateSuperTypeToFlags(RealEstateSuperType type)
{
	switch (type)
	{
	case RealEstateSuperType_None: return RealEstateTypeFlag_None;
	case RealEstateSuperType_Zone: return RealEstateTypeFlag_Zone;
	case RealEstateSuperType_House: return static_cast<RealEstateTypeFlag>(RealEstateTypeFlag_GuildHall | RealEstateTypeFlag_PlayerHousing);
	case RealEstateSuperType_Plot: return static_cast<RealEstateTypeFlag>(RealEstateTypeFlag_PlayerPlot | RealEstateTypeFlag_GuildPlot);
	case RealEstateSuperType_Neighborhood: return RealEstateTypeFlag_Neighborhood;
	case RealEstateSuperType_Town: return RealEstateTypeFlag_Town;
	case RealEstateSuperType_MovingCrate: return RealEstateTypeFlag_MovingCrate;
	case RealEstateSuperType_Unknown: return RealEstateTypeFlag_Unknown;
	case RealEstateSuperType_Any: return RealEstateTypeFlag_Any;
	default: return RealEstateTypeFlag_None;
	}
}

const char* RealEstateAccessCategoryToString(RealEstateAccessCategories category)
{
	switch (category)
	{
	case RealEstateAccessCategory_All: return "All";
	case RealEstateAccessCategory_Individuals: return "Individuals";
	case RealEstateAccessCategory_Groups: return "Groups";
	case RealEstateAccessCategory_PermissionsGroupTotals: return "PermissionsGroupTotals";
	case RealEstateAccessCategory_PermissionsGroup: return "PermissionsGroup";
	default: return "Unknown";
	}
}

const char* RealEstateAccessGroupToString(RealEstateAccessGroups group)
{
	switch (group)
	{
	case RealEstateAccess_Everyone: return "Everyone";
	case RealEstateAccess_Visitor: return "Visitor";
	case RealEstateAccess_Acquaintance: return "Acquaintance";
	case RealEstateAccess_Friend: return "Friend";
	case RealEstateAccess_Trustee: return "Trustee";
	case RealEstateAccess_CoOwner: return "Co-Owner";
	case RealEstateAccess_Owner: return "Owner";
	default: return "Unknown";
	}
}

const char* RealEstateCapabilityToString(RealEstateCapabilities capability)
{
	switch (capability)
	{
	case RealEstateCapability_ReceiveBuffs: return "ReceiveBuffs";
	case RealEstateCapability_Enter: return "Enter";
	case RealEstateCapability_WithdrawUpkeep: return "WithdrawUpkeep";
	case RealEstateCapability_RemoveCrate: return "RemoveCrate";
	case RealEstateCapability_AddCrate: return "AddCrate";
	case RealEstateCapability_RemoveHouse: return "RemoveHouse";
	case RealEstateCapability_AddHouse: return "AddHouse";
	case RealEstateCapability_MailItem: return "MailItem";
	case RealEstateCapability_RemoveItem: return "RemoveItem";
	case RealEstateCapability_AddItem: return "AddItem";
	case RealEstateCapability_MoveItem: return "MoveItem";
	case RealEstateCapability_InteractItem: return "InteractItem";
	case RealEstateCapability_Manage: return "Manage";
	default: return "Unknown";
	}
}

//----------------------------------------------------------------------------

const RealEstate* RealEstateManager::GetRealEstate(int realEstateId) const
{
	RealEstate** realEstate = realEstates.FindFirst(realEstateId);
	return realEstate ? *realEstate : nullptr;
}

const RealEstateAccess* RealEstateManager::GetRealEstateAccess(int realEstateId) const
{
	RealEstateAccess** access = accessLists.FindFirst(realEstateId);
	return access ? *access : nullptr;
}

const RealEstateItems* RealEstateManager::GetRealEstateItems(int realEstateId) const
{
	RealEstateItems** items = itemLists.FindFirst(realEstateId);
	return items ? *items : nullptr;
}

const RealEstateItem* RealEstateManagerClient::GetItemByRealEstateAndItemIds(int realEstateID, int realEstateItemID) const
{
	if (const RealEstateItems* items = GetRealEstateItems(realEstateID))
	{
		return items->GetItem(realEstateItemID);
	}

	return nullptr;
}

#pragma warning(pop)

} // namespace eqlib

#if __has_include("../private/EQClasses-private.cpp")
#include "../private/EQClasses-private.cpp"
#endif
