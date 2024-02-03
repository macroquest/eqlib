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
/*0x08*/ eqtime_t       upkeepExpiredTime;
/*0x10*/
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
/*0x08*/ CXStr          ownerHandle;
/*0x10*/ int            ownerNameHashKey;
/*0x14*/
};

struct [[offsetcomments]] RealEstateItemObject
{
/*0x00*/ ItemPtr        item;
/*0x10*/
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
/*0x10*/ RealEstateItemPosition   position;
/*0x30*/ RealEstateItemOwnerInfo  ownerInfo;
/*0x48*/ RealEstateItemObject     object;
/*0x58*/ RealEstateItemIds        ids;
/*0x60*/
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
/*0x08*/ int                      realEstateId;
/*0x10*/ RealEstateManagerClient& manager;
/*0x18*/ int                      nonRealEstateItemCount;
/*0x1c*/ int                      npcItemCount;
/*0x20*/ int                      upkeepItemCount;
/*0x28*/ RealEstateItemsContainer realEstateItems;
/*0x40*/
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
/*0x18*/ int                 id;
/*0x20*/ uint64_t            unused;
/*0x28*/ int                 staticId;
/*0x30*/ EqGuid              parentId;
/*0x38*/ int                 definitionId;
/*0x40*/ EqGuid              guildId;
/*0x48*/ EqGuid              fellowshipId;
/*0x50*/ CXStr               primaryOwner;
/*0x58*/ CXStr               primaryHandle;
/*0x60*/ int                 defaultPermissionLevel;
/*0x68*/ CXStr               dynamicName;
/*0x70*/ uint32_t            defaultUpkeepId;
/*0x78*/ eqtime_t            upkeepExpiredTime;
/*0x80*/ bool                votingOptedOut;
/*0x88*/ ArrayClass<EqGuid>  childIds;
/*0xa0*/
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
/*0x08*/ RealEstateCostSubComponentArray subComponents;
/*0x20*/
};
using RealEstateCostComponentArray = ArrayClass<RealEstateCostComponent>;

struct [[offsetcomments]] RealEstateCostSchemeData
{
/*0x00*/ int costId;
/*0x08*/ RealEstateCostComponentArray costComponents;
/*0x20*/
};

class [[offsetcomments]] RealEstateCostManager
{
public:
	const RealEstateCostSchemeData* GetCost(uint32_t costId) const {
		return costs.FindFirst(costId);
	}

/*0x00*/ CXStr path;
/*0x08*/ HashTable<RealEstateCostSchemeData, int> costs;
/*0x20*/
};

//============================================================================

struct [[offsetcomments]] RealEstateDefinition
{
/*0x00*/ uint32_t             id;
/*0x08*/ CXStr                name;
/*0x10*/ CXStr                description;
/*0x18*/ CXStr                address;
/*0x20*/ CVector3             zoneInCoords;
/*0x2c*/ uint32_t             areaId;
/*0x30*/ uint32_t             costDefinition;
/*0x34*/ uint32_t             upkeepDefinition;
/*0x38*/ uint32_t             maxItems;
/*0x3c*/ uint32_t             maxNonRealEstateItems;
/*0x40*/ uint32_t             maxChildren;
/*0x44*/ uint32_t             zoneId;
/*0x48*/ uint32_t             dzId;
/*0x4c*/ RealEstateType       type;
/*0x50*/ int                  groupId;
/*0x54*/ uint32_t             icon;
/*0x58*/ int                  maxNpcItems;
/*0x5c*/ CVector3             switchCoords;
/*0x68*/ float                switchHeading;
/*0x70*/ ArrayClass<uint32_t> childDefinitions;
/*0x88*/
};

class [[offsetcomments]] RealEstateDefinitionManager
{
public:
	const RealEstateDefinition* GetDefinition(uint32_t definitionId) const {
		return definitions.FindFirst(definitionId);
	}

/*0x00*/ CXStr path;
/*0x08*/ HashTable<RealEstateDefinition, int> definitions;
/*0x20*/
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
/*0x08*/ HashTable<RealEstateItemGroup, int> itemGroups;
/*0x20*/
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

/*0x0008*/ HashTable<RealEstate*, int>            realEstates;
/*0x0020*/ HashTable<RealEstate*, int>            realEstatesByStaticId;
/*0x0038*/ HashTable<RealEstate*, int>            realEstatesByDefinitionId;
/*0x0050*/ HashTable<RealEstate*, CXStr>          realEstatesByOwnerName;
/*0x0068*/ HashListMap<EqGuid, RealEstateHolder, 500>  guildPlotsByGuildId;
/*0x1028*/ HashTable<RealEstateAccess*, int>      accessLists;
/*0x1040*/ HashTable<RealEstateItems*, int>       itemLists;
/*0x1058*/ RealEstateDefinitionManager*           definitions;
/*0x1060*/ RealEstateCostManager*                 costs;
/*0x1068*/ RealEstateItemGroupManager*            itemGroups;       // appears to always be empty
/*0x1070*/
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


/*0x1080*/ uint32_t           lastRefreshTime;
/*0x1084*/ int                zoneRealEstateId;
/*0x1088*/ RealEstateType     zoneRealEstateType;
/*0x108c*/ int                currentRealEstateId;
/*0x1090*/ int                currentYardId;
/*0x1094*/ int                currentHouseId;
/*0x1098*/ int                currentMovingCrateId;
/*0x109c*/ bool               requestPending;
/*0x10a0*/ uint32_t           requestTime;
/*0x10a4*/ bool               printRequestTimes;
/*0x10a8*/ UniqueIdGen<int>*  idGen;
/*0x10b0*/
};

using RealEstateItemClient = RealEstateItem;

//============================================================================

} // namespace eqlib
