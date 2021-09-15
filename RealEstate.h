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

#pragma once

#include "Common.h"
#include "Containers.h"
#include "EQData.h" // for AccessGroup

#include <glm/vec3.hpp>
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

//============================================================================

enum RealEstateAccessCategories
{
	RealEstateAccessCategory_All = 0,
	RealEstateAccessCategory_Individuals,
	RealEstateAccessCategory_Groups,
	RealEstateAccessCategory_PermissionsGroupTotals,
	RealEstateAccessCategory_PermissionsGroup,

	NumRealEstateAccessCategories,
};

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

using RealEstateAccessGroup = AccessGroup<
	RealEstateAccessGroups, NumRealEstateAccessGroups, RealEstateAccess_Everyone,
	RealEstateCapabilities, NumRealEstateCapabilities>;

template <typename Group>
class [[offsetcomments]] RealEstateAccessGroupList : public AccessGroupList<Group>
{
public:
	// Special Groups:
	// _Fellowship
	// _Guild<RankNum>
};

using RealEstateAccessGroupListClient = RealEstateAccessGroupList<RealEstateAccessGroup>;

//============================================================================

struct [[offsetcomments]] RealEstateItemState
{
/*0x00*/ bool           placed;
/*0x04*/ __time32_t     upkeepExpiredTime;
/*0x08*/
};

struct [[offsetcomments]] RealEstateItemPosition
{
/*0x00*/ float          heading;
/*0x04*/ float          pitch;
/*0x08*/ float          roll;
/*0x0c*/ float          scale;
/*0x10*/ glm::vec3      pos;
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
	// State
	bool IsPlaced() const { return state.placed; }
	__time32_t GetUpkeepExpiredTime() const { return state.upkeepExpiredTime; }

	// Position
	const glm::vec3& GetPos() const { return position.pos; }
	float GetHeading() const { return position.heading; }
	float GetPitch() const { return position.pitch; }
	float GetRoll() const { return position.roll; }
	float GetX() const { return position.pos.x; }
	float GetY() const { return position.pos.y; }
	float GetZ() const { return position.pos.z; }

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
/*0x34*/
};

class [[offsetcomments]] RealEstateItemClient : public RealEstateItem
{
public:
	int GetRealEstateId() const { return ids.realEstateID; }
	int GetRealEstateItemId() const { return ids.realEstateItemID; }

private:
/*0x34*/ RealEstateItemIds ids;
/*0x3c*/
};

template <typename TRealEstateManager, typename TRealEstateItems, typename TRealEstateItem>
class [[offsetcomments]] RealEstateItems
{
public:
	RealEstateItems(TRealEstateManager& mgr) : manager(mgr) {}

	virtual int GetNumItems() const = 0;

	int GetId() const { return realEstateId; }
	int GetNumNonRealEstateItems() const { return nonRealEstateItemCount; }
	int GetNumNpcItems() const { return npcItemCount; }
	int GetNumUpkeepItems() const { return upkeepItemCount; }

public:
/*0x04*/ int realEstateId;
/*0x08*/ TRealEstateManager& manager;
/*0x0c*/ int nonRealEstateItemCount;
/*0x10*/ int npcItemCount;
/*0x14*/ int upkeepItemCount;
/*0x18*/
};

class [[offsetcomments]] RealEstateItemsClient : public RealEstateItems<RealEstateManagerClient, RealEstateItemsClient, RealEstateItemClient>
{
public:
	using RealEstateItemsContainer = HashTable<RealEstateItemClient*, int>;
	using IteratorType = RealEstateItemsContainer::iterator;
	using ConstIterator = RealEstateItemsContainer::const_iterator;

	using RealEstateItemType = RealEstateItemClient;

	virtual int GetNumItems() const { return realEstateItems.GetTotalEntries(); }

	IteratorType begin() { return realEstateItems.begin(); }
	IteratorType end() { return realEstateItems.end(); }

	RealEstateItemClient* GetItem(int realEstateItemId) const
	{
		RealEstateItemClient** item = realEstateItems.FindFirst(realEstateItemId);
		return item ? *item : nullptr;
	}

private:
/*0x18*/ RealEstateItemsContainer realEstateItems;
/*0x28*/ };

//============================================================================

class [[offsetcomments]] RealEstate
{
	FORCE_SYMBOLS

public:
	virtual ~RealEstate() {}

	/*0x04*/ std::map<int, double> escrowAccount;
	/*0x10*/ int id;
	/*0x14*/ int staticId;
	/*0x18*/ int parentId;
	/*0x1c*/ int definitionId;
	/*0x20*/ int guildId;
	/*0x24*/ int fellowshipId;
	/*0x28*/ CXStr primaryOwner;
	/*0x2c*/ CXStr primaryHandle;
	/*0x30*/ int defaultPermissionLevel;
	/*0x34*/ CXStr dynamicName;
	/*0x38*/ uint32_t defaultUpkeepId;
	/*0x3c*/ __time32_t upkeepExpiredTime;
	/*0x40*/ bool votingOptedOut;
	/*0x44*/ ArrayClass<int> childIds;
/*0x54*/ };

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
	FORCE_SYMBOLS

public:
	/*0x00*/ CXStr path;
	/*0x04*/ HashTable<RealEstateCostSchemeData, int> costs;
/*0x14*/ };

//============================================================================

struct RealEstateDefinition
{

};

class [[offsetcomments]] RealEstateDefinitionManager
{
public:
};

//============================================================================

class [[offsetcomments]] RealEstateItemGroupManager
{
public:
};

//============================================================================

class [[offsetcomments]] RealEstateManager
{
	FORCE_SYMBOLS

public:
	using RealEstateArray = ArrayClass<const RealEstate*>;

	virtual int GetRealEstatesByItemOwnerName(const CXStr& ownerName, RealEstateArray& realEstates) const { return 0; }

/*0x004*/ HashTable<RealEstate*, int>            realEstates;
/*0x014*/ HashTable<RealEstate*, int>            realEstatesByStaticId;
/*0x024*/ HashTable<RealEstate*, int>            realEstatesByDefinitionId;
/*0x034*/ HashTable<RealEstate*, CXStr>          realEstatesByOwnerName;
/*0x044*/ HashList<RealEstate*, 500>             guildPlotsByGuildId;
/*0x824*/ HashTable<RealEstateAccessGroupListClient*, int> realEstateAccessLists; // lookup by realEstateId
/*0x834*/ HashTable<RealEstateItemsClient*, int> realEstateItemLists;             // lookup by realEstateId
/*0x844*/ RealEstateDefinitionManager*           definitions;
/*0x848*/ RealEstateCostManager*                 costs;
/*0x84c*/ RealEstateItemGroupManager*            realEstateItemGroups;
/*0x850*/ };

class IUniqueIdCheck
{
public:
	virtual bool IdInUse(int id, int) const = 0;
};

template <typename T>
class UniqueIdGen
{
public:
	T a, b, c;
	IUniqueIdCheck* check;
};

class ItemPlacementUserInterface
{
public:
	virtual bool CanModifyPlacementItem() const { return true; }
	// more ...
};

class [[offsetcomments]] RealEstateManagerClient : public RealEstateManager,
	public IUniqueIdCheck,
	public ItemPlacementUserInterface
{
	FORCE_SYMBOLS

public:
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
EQLIB_OBJECT static RealEstateManagerClient& Instance();
EQLIB_OBJECT const RealEstateItemClient* GetItemByRealEstateAndItemIds(int RealEstateID, int RealEstateItemID) const;
};


//============================================================================

} // namespace eqlib
