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

#pragma once

#include "Common.h"
#include "Containers.h"
#include "EQData.h" // for AccessGroup

#include "eqstd/map.h"

#include <map>

namespace eqlib {

//============================================================================

class RealEstateManagerClient;

enum RealEstateType
{
	RealEstateType_None = 0,
	RealEstateType_Zone,
	RealEstateType_GuildHall,
	RealEstateType_PlayerHousing,
	RealEstateType_PlayerPlot,
	RealEstateType_Neighborhood,
	RealEstateType_Town,
	RealEstateType_MovingCrate,
	RealEstateType_GuildPlot,

	RealEstateType_Count,
	RealEstateType_Unknown,
	RealEstateType_Any,
};
EQLIB_API const char* RealEstateTypeToString(RealEstateType type);

enum RealEstateSuperType
{
	RealEstateSuperType_None = 0,
	RealEstateSuperType_Zone,
	RealEstateSuperType_House,
	RealEstateSuperType_Plot,
	RealEstateSuperType_Neighborhood,
	RealEstateSuperType_Town,
	RealEstateSuperType_MovingCrate,

	RealEstateSuperType_Count,
	RealEstateSuperType_Unknown,
	RealEstateSuperType_Any,
};
EQLIB_API const char* RealEstateSuperTypeToString(RealEstateSuperType type);
EQLIB_API RealEstateSuperType RealEstateTypeToSuperType(RealEstateType type);

enum RealEstateTypeFlag
{
	RealEstateTypeFlag_None          = 0,
	RealEstateTypeFlag_Zone          = 0x01,
	RealEstateTypeFlag_GuildHall     = 0x02,
	RealEstateTypeFlag_PlayerHousing = 0x04,
	RealEstateTypeFlag_PlayerPlot    = 0x08,
	RealEstateTypeFlag_Neighborhood  = 0x10,
	RealEstateTypeFlag_Town          = 0x20,
	RealEstateTypeFlag_MovingCrate   = 0x40,
	RealEstateTypeFlag_GuildPlot     = 0x80,
	RealEstateTypeFlag_Unknown       = 0x100,
	RealEstateTypeFlag_Any           = 0xffffffff,
};
EQLIB_API RealEstateTypeFlag RealEstateTypeToFlags(RealEstateType type);
EQLIB_API RealEstateTypeFlag RealEstateSuperTypeToFlags(RealEstateSuperType type);

enum RealEstateAccessCategories
{
	RealEstateAccessCategory_All = 0,
	RealEstateAccessCategory_Individuals,
	RealEstateAccessCategory_Groups,
	RealEstateAccessCategory_PermissionsGroupTotals,
	RealEstateAccessCategory_PermissionsGroup,

	NumRealEstateAccessCategories,
};
EQLIB_API const char* RealEstateAccessCategoryToString(RealEstateAccessCategories category);

enum RealEstateAccessGroups
{
	RealEstateAccess_Everyone = 0,
	RealEstateAccess_Visitor,
	RealEstateAccess_Acquaintance,
	RealEstateAccess_Friend,
	RealEstateAccess_Trustee,
	RealEstateAccess_CoOwner,
	RealEstateAccess_Owner,

	NumRealEstateAccessGroups,
};
EQLIB_API const char* RealEstateAccessGroupToString(RealEstateAccessGroups group);

enum RealEstateCapabilities
{
	RealEstateCapability_ReceiveBuffs = 0,
	RealEstateCapability_Enter,
	RealEstateCapability_WithdrawUpkeep,
	RealEstateCapability_RemoveCrate,
	RealEstateCapability_AddCrate,
	RealEstateCapability_RemoveHouse,
	RealEstateCapability_AddHouse,
	RealEstateCapability_MailItem,
	RealEstateCapability_RemoveItem,
	RealEstateCapability_AddItem,
	RealEstateCapability_MoveItem,
	RealEstateCapability_InteractItem,
	RealEstateCapability_Manage,

	NumRealEstateCapabilities,
};
EQLIB_API const char* RealEstateCapabilityToString(RealEstateCapabilities capability);

using RealEstateAccessGroup = AccessGroup<
	RealEstateAccessGroups, NumRealEstateAccessGroups, RealEstateAccess_Everyone,
	RealEstateCapabilities, NumRealEstateCapabilities>;

class [[offsetcomments]] RealEstateAccessGroupList : public AccessGroupList<RealEstateAccessGroup>
{
public:
	// Special Groups:
	// _Fellowship
	// _Guild<RankNum>
};

using RealEstateAccess = RealEstateAccessGroupList;

//============================================================================

struct [[offsetcomments]] RealEstateItemState
{
/*0x00*/ bool           placed;
/*0x04*/ eqtime_t       upkeepExpiredTime;
/*0x08*/
};

struct [[offsetcomments]] RealEstateItemPosition
{
/*0x00*/ float          heading;
/*0x04*/ float          pitch;
/*0x08*/ float          roll;
/*0x0c*/ float          scale;
/*0x10*/ CVector3       pos;
/*0x1c*/
};

struct [[offsetcomments]] RealEstateItemOwnerInfo
{
/*0x00*/ CXStr          ownerName;
/*0x04*/ CXStr          ownerHandle;
/*0x08*/ int            ownerNameHashKey;
/*0x0c*/
};

struct [[offsetcomments]] RealEstateItemObject
{
/*0x00*/ ItemPtr        item;
/*0x04*/
};

struct [[offsetcomments]] RealEstateItemIds
{
/*0x00*/ int            realEstateID;
/*0x04*/ int            realEstateItemID;
/*0x08*/
};

class [[offsetcomments]] RealEstateItem
{
public:
	int GetRealEstateId() const { return ids.realEstateID; }
	int GetRealEstateItemId() const { return ids.realEstateItemID; }

	// State
	bool IsPlaced() const { return state.placed; }
	eqtime_t GetUpkeepExpiredTime() const { return state.upkeepExpiredTime; }

	// Position
	const CVector3& GetPos() const { return position.pos; }
	float GetHeading() const { return position.heading; }
	float GetPitch() const { return position.pitch; }
	float GetRoll() const { return position.roll; }
	float GetX() const { return position.pos.X; }
	float GetY() const { return position.pos.Y; }
	float GetZ() const { return position.pos.Z; }

	// Owner Info
	const CXStr& GetOwnerName() const { return ownerInfo.ownerName; }
	const CXStr& GetOwnerHandle() const { return ownerInfo.ownerHandle; }
	int GetOwnerNameHashKey() const { return ownerInfo.ownerNameHashKey; }

	// Object
	ItemPtr GetItem() const { return object.item; }

private:
/*0x00*/ RealEstateItemState      state;
/*0x08*/ RealEstateItemPosition   position;
/*0x24*/ RealEstateItemOwnerInfo  ownerInfo;
/*0x30*/ RealEstateItemObject     object;
/*0x34*/ RealEstateItemIds        ids;
/*0x3c*/
};

class [[offsetcomments]] RealEstateItems
{
public:
	using RealEstateItemsContainer = HashTable<RealEstateItem*, int>;
	using Iterator = RealEstateItemsContainer::iterator;
	using ConstIterator = RealEstateItemsContainer::const_iterator;

	RealEstateItems(RealEstateManagerClient& mgr) : manager(mgr) {}

	virtual int GetNumItems() const { return realEstateItems.GetTotalEntries(); }

	int GetId() const { return realEstateId; }
	int GetNumNonRealEstateItems() const { return nonRealEstateItemCount; }
	int GetNumNpcItems() const { return npcItemCount; }
	int GetNumUpkeepItems() const { return upkeepItemCount; }

	ConstIterator begin() const { return realEstateItems.begin(); }
	Iterator begin() { return realEstateItems.begin(); }
	ConstIterator end() const { return realEstateItems.end(); }
	Iterator end() { return realEstateItems.end(); }

	RealEstateItem* GetItem(int realEstateItemId) const
	{
		RealEstateItem** item = realEstateItems.FindFirst(realEstateItemId);
		return item ? *item : nullptr;
	}

public:
/*0x04*/ int                      realEstateId;
/*0x08*/ RealEstateManagerClient& manager;
/*0x0c*/ int                      nonRealEstateItemCount;
/*0x10*/ int                      npcItemCount;
/*0x14*/ int                      upkeepItemCount;
/*0x18*/ RealEstateItemsContainer realEstateItems;
/*0x28*/
};

//============================================================================

class [[offsetcomments]] RealEstate
{
public:
	virtual ~RealEstate() {}

	int GetId() const { return id; }
	int GetStaticId() const { return staticId; }
	int GetParentId() const { return parentId.UniqueEntityID; }

/*0x08*/ eqstd::map<int, double> escrowAccount;
	static_assert(sizeof(escrowAccount) == sizeof(uintptr_t) * 2, "escrowAccount is the wrong size");
/*0x10*/ int                 id;
/*0x18*/ uint64_t            unused;
/*0x20*/ int                 staticId;
/*0x28*/ EqGuid              parentId;
/*0x30*/ int                 definitionId;
/*0x38*/ EqGuid              guildId;
/*0x40*/ EqGuid              fellowshipId;
/*0x48*/ CXStr               primaryOwner;
/*0x4c*/ CXStr               primaryHandle;
/*0x50*/ int                 defaultPermissionLevel;
/*0x54*/ CXStr               dynamicName;
/*0x58*/ uint32_t            defaultUpkeepId;
/*0x5c*/ eqtime_t            upkeepExpiredTime;
/*0x60*/ bool                votingOptedOut;
/*0x64*/ ArrayClass<EqGuid>  childIds;
/*0x74*/
};

//============================================================================

struct [[offsetcomments]] RealEstateCostSubComponent
{
/*0x00*/ int typeId;
/*0x04*/ int typeSubId;
/*0x08*/ int64_t cost;
/*0x10*/
};
using RealEstateCostSubComponentArray = ArrayClass<RealEstateCostSubComponent>;

struct [[offsetcomments]] RealEstateCostComponent
{
/*0x00*/ int id;
/*0x04*/ RealEstateCostSubComponentArray subComponents;
/*0x14*/
};
using RealEstateCostComponentArray = ArrayClass<RealEstateCostComponent>;

struct [[offsetcomments]] RealEstateCostSchemeData
{
/*0x00*/ int costId;
/*0x04*/ RealEstateCostComponentArray costComponents;
/*0x14*/
};

class [[offsetcomments]] RealEstateCostManager
{
public:
	const RealEstateCostSchemeData* GetCost(uint32_t costId) const {
		return costs.FindFirst(costId);
	}

/*0x00*/ CXStr path;
/*0x04*/ HashTable<RealEstateCostSchemeData, int> costs;
/*0x14*/
};

//============================================================================

struct [[offsetcomments]] RealEstateDefinition
{
/*0x00*/ uint32_t             id;
/*0x04*/ CXStr                name;
/*0x08*/ CXStr                description;
/*0x0c*/ CXStr                address;
/*0x10*/ CVector3             zoneInCoords;
/*0x1c*/ uint32_t             areaId;
/*0x20*/ uint32_t             costDefinition;
/*0x24*/ uint32_t             upkeepDefinition;
/*0x28*/ uint32_t             maxItems;
/*0x2c*/ uint32_t             maxNonRealEstateItems;
/*0x30*/ uint32_t             maxChildren;
/*0x34*/ uint32_t             zoneId;
/*0x38*/ uint32_t             dzId;
/*0x3c*/ RealEstateType       type;
/*0x40*/ int                  groupId;
/*0x44*/ uint32_t             icon;
/*0x48*/ int                  maxNpcItems;
/*0x4c*/ CVector3             switchCoords;
/*0x58*/ float                switchHeading;
/*0x5c*/ ArrayClass<uint32_t> childDefinitions;
/*0x6c*/
};

class [[offsetcomments]] RealEstateDefinitionManager
{
public:
	const RealEstateDefinition* GetDefinition(uint32_t definitionId) const {
		return definitions.FindFirst(definitionId);
	}

/*0x00*/ CXStr path;
/*0x04*/ HashTable<RealEstateDefinition, int> definitions;
/*0x14*/
};

//============================================================================

struct RealEstateItemGroup
{
/*0x00*/ uint32_t itemId;
/*0x04*/ uint32_t groupId;
/*0x08*/ bool     placeable;
/*0x0c*/
};

class [[offsetcomments]] RealEstateItemGroupManager
{
public:
	const RealEstateItemGroup* GetItemGroup(uint32_t groupId, uint32_t itemId) const {
		const RealEstateItemGroup* grp = itemGroups.FindFirst(itemId);
		while (grp != nullptr) {
			if (grp->groupId == groupId)
				return grp;
			grp = itemGroups.FindNext(grp);
		}
		return nullptr;
	}

/*0x00*/ CXStr path;
/*0x04*/ HashTable<RealEstateItemGroup, int> itemGroups;
/*0x14*/
};

//============================================================================

class ItemPlacementUserInterface
{
public:
	virtual bool CanModifyPlacementItem() const { return true; }
	// more ...
};

class [[offsetcomments]] RealEstateManager
{
public:
	using RealEstateArray = ArrayClass<const RealEstate*>;

	EQLIB_OBJECT const RealEstate* GetRealEstate(int realEstateId) const;
	EQLIB_OBJECT const RealEstateAccess* GetRealEstateAccess(int realEstateId) const;
	EQLIB_OBJECT const RealEstateItems* GetRealEstateItems(int realEstateId) const;

	const RealEstateDefinition* GetRealEstateDefinition(int definitionId) const { return definitions->GetDefinition(definitionId); }
	const RealEstateCostSchemeData* GetRealEstateCostById(int costId) const { costs->GetCost(costId); }

	virtual int GetRealEstatesByItemOwnerName(const CXStr& ownerName, RealEstateArray& realEstates) const { return 0; }

	// TODO: Identify what this unknown value is.
	struct RealEstateHolder { RealEstate* realEstate; uint32_t unknown; };

/*0x004*/ HashTable<RealEstate*, int>            realEstates;
/*0x014*/ HashTable<RealEstate*, int>            realEstatesByStaticId;
/*0x024*/ HashTable<RealEstate*, int>            realEstatesByDefinitionId;
/*0x034*/ HashTable<RealEstate*, CXStr>          realEstatesByOwnerName;
/*0x044*/ HashListMap<EqGuid, RealEstateHolder, 500>  guildPlotsByGuildId;
/*0x824*/ HashTable<RealEstateAccess*, int>      accessLists;
/*0x834*/ HashTable<RealEstateItems*, int>       itemLists;
/*0x844*/ RealEstateDefinitionManager*           definitions;
/*0x848*/ RealEstateCostManager*                 costs;
/*0x84c*/ RealEstateItemGroupManager*            itemGroups;       // appears to always be empty
/*0x850*/
};

class [[offsetcomments]] RealEstateManagerClient : public RealEstateManager,
	public IUniqueIdCheck,
	public ItemPlacementUserInterface
{
public:
	EQLIB_OBJECT static RealEstateManagerClient& Instance();

	EQLIB_OBJECT const RealEstateItem* GetItemByRealEstateAndItemIds(int RealEstateID, int RealEstateItemID) const;

	int GetZoneRealEstateId() const { return zoneRealEstateId; }
	RealEstateType GetZoneRealEstateType() const { return zoneRealEstateType; }
	int GetCurrentRealEstateId() const { return currentRealEstateId; }
	int GetCurrentYardId() const { return currentYardId; }
	int GetCurrentHouseId() const { return currentHouseId; }
	int GetCurrentMovingCrateId() const { return currentMovingCrateId; }


/*0x858*/ uint32_t           lastRefreshTime;
/*0x85c*/ int                zoneRealEstateId;
/*0x860*/ RealEstateType     zoneRealEstateType;
/*0x864*/ int                currentRealEstateId;
/*0x868*/ int                currentYardId;
/*0x86c*/ int                currentHouseId;
/*0x870*/ int                currentMovingCrateId;
/*0x874*/ bool               requestPending;
/*0x878*/ uint32_t           requestTime;
/*0x87c*/ bool               printRequestTimes;
/*0x880*/ UniqueIdGen<int>*  idGen;
/*0x884*/
};

using RealEstateItemClient = RealEstateItem;

//============================================================================

} // namespace eqlib
