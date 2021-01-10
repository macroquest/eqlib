/*
 * MacroQuest2: The extension platform for EverQuest
 * Copyright (C) 2002-2019 MacroQuest Authors
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
#include "CXStr.h"
#include "SoeUtil.h"

#include "common/StringUtils.h"

namespace eqlib {

class ItemClient;
using ItemPtr = VePointer<ItemClient>;

// Other names that have been used for an item, but we don't need them.
using ItemClientPtr = ItemPtr;
using ItemBasePtr = ItemPtr;

// CONTENTS is now an alias of ItemClient
using CONTENTS = ItemClient;
using PCONTENTS = ItemClient*;

class CUnSerializeBuffer;

enum ItemContainerInstance
{
	eItemContainerInvalid                        = -1,
	eItemContainerPossessions                    = 0,
	eItemContainerBank                           = 1,
	eItemContainerSharedBank                     = 2,
	eItemContainerTrade                          = 3,
	eItemContainerWorld                          = 4,
	eItemContainerLimbo                          = 5,
	eItemContainerTribute                        = 6,
	eItemContainerTrophyTribute                  = 7,
	eItemContainerGuildTribute                   = 8,
	eItemContainerMerchant                       = 9,
	eItemContainerDeleted                        = 10,
	eItemContainerCorpse                         = 11,
	eItemContainerBazaar                         = 12,
	eItemContainerInspect                        = 13,
	eItemContainerRealEstate                     = 14,
	eItemContainerViewModPC                      = 15,
	eItemContainerViewModBank                    = 16,
	eItemContainerViewModSharedBank              = 17,
	eItemContainerViewModLimbo                   = 18,
	eItemContainerAltStorage                     = 19,
	eItemContainerArchived                       = 20,
	eItemContainerMail                           = 21,
	eItemContainerGuildTrophyTribute             = 22,
	eItemContainerKrono                          = 23,
	eItemContainerOther                          = 24,
	eItemContainerMercenaryItems                 = 25,
	eItemContainerViewModMercenaryItems          = 26,
	eItemContainerMountKeyRingItems              = 27,
	eItemContainerViewModMountKeyRingItems       = 28,
	eItemContainerIllusionKeyRingItems           = 29,
	eItemContainerViewModIllusionKeyRingItems    = 30,
	eItemContainerFamiliarKeyRingItems           = 31,
	eItemContainerViewModFamiliarKeyRingItems    = 32,
	eItemContainerHeroForgeKeyRingItems          = 33,
	eItemContainerViewModHeroForgeKeyRingItems   = 34,
	eItemContainerOverflow                       = 35,
	eItemContainerDragonHoard                    = 36,

	eNumItemContainers                           = 37,
};

EQLIB_API const char* GetNameForContainerInstance(ItemContainerInstance container);

inline namespace deprecated
{
	// BAD - DO NOT USE
	struct ITEMBASEARRAY
	{
		CONTENTS* Item[1];
	};
	using PITEMBASEARRAY [[deprecated]] = ITEMBASEARRAY*;

	class [[offsetcomments]] ItemArray
	{
	public:
	/*0x00*/ ITEMBASEARRAY* pItems;
	/*0x04*/ size_t         Size;
	/*0x08*/ unsigned int   Capacity;
	/*0x0c*/
	};
}

class [[offsetcomments]] ItemIndex
{
public:
	enum { MAX_INVENTORY_DEPTH = 3 };

/*0x00*/ short m_slots[MAX_INVENTORY_DEPTH];
/*0x08*/

	EQLIB_OBJECT ItemIndex()
	{
		memset(m_slots, -1, sizeof(m_slots));
	}

	EQLIB_OBJECT ItemIndex(const ItemIndex& other)
	{
		memcpy(m_slots, &other.m_slots, sizeof(m_slots));
	}

	EQLIB_OBJECT explicit ItemIndex(short slot1, short slot2 = -1, short slot3 = -1)
	{
		m_slots[0] = slot1;
		m_slots[1] = slot2;
		m_slots[2] = slot3;
	}

	inline ItemIndex& operator=(const ItemIndex& other)
	{
		memcpy(m_slots, &other.m_slots, sizeof(m_slots));
		return *this;
	}

	inline short GetTopSlot() const { return m_slots[0]; }

	inline void SetSlot(int depth, short value)
	{
		if (depth < MAX_INVENTORY_DEPTH)
			m_slots[depth] = value;
	}

	inline short GetSlot(int depth) const
	{
		if (depth < MAX_INVENTORY_DEPTH)
			return m_slots[depth];

		return -1;
	}

	inline short GetDeepestSlot() const
	{
		for (int i = MAX_INVENTORY_DEPTH - 1; i >= 0; --i)
		{
			if (m_slots[i] != -1)
				return m_slots[i];
		}

		return -1;
	}

	inline short& operator[](int slot) { return m_slots[slot]; }

	inline bool IsValid() const { return m_slots[0] != -1; }
	inline bool IsBase() const { return m_slots[0] != -1 && m_slots[1] == -1; }
	inline bool IsInContainer() const { return m_slots[0] != -1 && m_slots[1] != -1; }

	// Remove one depth to get index representing whatever the parent is.
	inline ItemIndex GetParentIndex() const
	{
		ItemIndex copy = *this;

		for (int i = MAX_INVENTORY_DEPTH - 1; i >= 0; --i)
		{
			if (copy.m_slots[i] != -1)
			{
				copy.m_slots[i] = -1;
				return copy;
			}
		}

		return copy;
	}

	EQLIB_OBJECT char* FormatItemIndex(char* dest, size_t len) const;

	// alias for existing bad code
	__declspec(property(get = getSlot1, put = setSlot1)) int Slot1;
	__declspec(property(get = getSlot2, put = setSlot2)) int Slot2;
	__declspec(property(get = getSlot3, put = setSlot3)) int Slot3;

	[[deprecated]] inline int getSlot1() const { return m_slots[0]; }
	[[deprecated]] inline void setSlot1(int v) { m_slots[0] = v; }
	[[deprecated]] inline int getSlot2() const { return m_slots[1]; }
	[[deprecated]] inline void setSlot2(int v) { m_slots[1] = v; }
	[[deprecated]] inline int getSlot3() const { return m_slots[2]; }
	[[deprecated]] inline void setSlot3(int v) { m_slots[2] = v; }
};


inline bool operator==(const ItemIndex& lhs, const ItemIndex& rhs)
{
	return lhs.m_slots[0] == rhs.m_slots[0]
		&& lhs.m_slots[1] == rhs.m_slots[1]
		&& lhs.m_slots[2] == rhs.m_slots[2];
}

inline bool operator!=(const ItemIndex& lhs, const ItemIndex& rhs)
{
	return !(lhs == rhs);
}

class [[offsetcomments]] ItemGlobalIndex
{
public:
/*0x00*/ ItemContainerInstance Location = eItemContainerInvalid;
/*0x04*/ ItemIndex Index;
/*0x0c*/

	EQLIB_OBJECT ItemGlobalIndex() = default;

	inline ItemGlobalIndex(const ItemGlobalIndex& other)
		: Location(other.Location)
		, Index(other.Index)
	{}

	inline ItemGlobalIndex(ItemContainerInstance location, const ItemIndex& index)
		: Location(location)
		, Index(index)
	{}

	inline ItemGlobalIndex(ItemContainerInstance location, int slot1, int slot2 = -1, int slot3 = -1)
		: Location(Location)
		, Index(slot1, slot2, slot3)
	{}

	inline void SetLocation(ItemContainerInstance location) { Location = location; }
	inline ItemContainerInstance GetLocation() const { return Location; }

	inline void SetIndex(const ItemIndex& index) { Index = index; }
	inline ItemIndex& GetIndex() { return Index; }
	inline const ItemIndex& GetIndex() const { return Index; }

	inline short GetTopSlot() const { return GetIndex().GetTopSlot(); }

	inline ItemGlobalIndex GetParent() const
	{
		ItemGlobalIndex copy = *this;

		copy.Index = copy.Index.GetParentIndex();
		return copy;
	}

	inline bool IsKeyRingLocation() const
	{
		return Location == eItemContainerMountKeyRingItems
			|| Location == eItemContainerIllusionKeyRingItems
			|| Location == eItemContainerFamiliarKeyRingItems;
	}

	inline bool IsEquippedLocation() const
	{
		return Location == eItemContainerPossessions
			&& Index.IsBase()
			&& Index.GetTopSlot() <= InvSlot_LastWornItem;
	}

	inline bool IsValidIndex() const
	{
		return IsValidLocation() && Index.IsValid();
	}

	inline bool IsValidLocation() const
	{
		return Location >= 0 && Location < eNumItemContainers;
	}
};

inline bool operator==(const ItemGlobalIndex& lhs, const ItemGlobalIndex& rhs)
{
	return lhs.GetLocation() == rhs.GetLocation()
		&& lhs.GetIndex() == rhs.GetIndex();
}

inline bool operator!=(const ItemGlobalIndex& lhs, const ItemGlobalIndex& rhs)
{
	return !(lhs == rhs);
}

//----------------------------------------------------------------------------

class ItemContainer
{
public:
	using ItemArray = VeArray<ItemPtr>;

	using iterator = typename ItemArray::iterator;
	using const_iterator = typename ItemArray::const_iterator;

	enum CheckDepthOptions { eCheckDepthBagOrBase, eCheckDepthSocket };

	ItemContainer(int size, ItemContainerInstance instance, bool dynamic = false)
		: m_size(size)
		, m_type(instance)
		, m_bDynamic(dynamic)
	{}

	inline iterator begin() { return Items.begin(); }
	inline const_iterator begin() const { return m_items.begin(); }
	inline const_iterator cbegin() const { return m_items.cbegin(); }
	inline iterator end() { return Items.end(); }
	inline const_iterator end() const { return m_items.end(); }
	inline const_iterator cend() const { return m_items.cend(); }

	bool IsValidRange(const_iterator a, const_iterator b) const;

	EQLIB_OBJECT ItemIndex CreateItemIndex(int slot0, int slot1 = -1, int slot2 = -1) const;
	inline ItemGlobalIndex CreateItemGlobalIndex(ItemContainerInstance location, int slot0, int slot1 = -1, int slot2 = -1) const
	{
		return ItemGlobalIndex(location, CreateItemIndex(slot0, slot1, slot2));
	}

	inline ItemContainerInstance GetContainerType() const { return m_type; }
	inline int GetAtDepth() const { return m_atDepth; } // depth of this container within a parent container

	EQLIB_OBJECT bool IsEmpty() const;
	EQLIB_OBJECT bool IsFull() const;
	EQLIB_OBJECT bool IsValidIndex(const ItemIndex& index) const;
	bool IsValidIndex(int index) const { return static_cast<uint32_t>(index) < m_size; }

	//
	// functions used for visiting items in the container
	//

	// Visitor functions take the form of: void Visitor(const ItemPtr&, const ItemIndex& location)

	// Visit a specified range and depth
	template <typename Visitor>
	Visitor VisitItems(int beginSlot, int endSlot, int depth, Visitor visitor) const
	{
		ItemIndex cursor = CreateItemIndex(std::max(0, beginSlot));
		return VisitItemsImpl(beginSlot, endSlot, depth, cursor, visitor);
	}

	// Visit to a specified depth
	template <typename Visitor>
	Visitor VisitItems(int depth, Visitor visitor) const
	{
		ItemIndex cursor = CreateItemIndex(0);
		return VisitItemsImpl(-1, -1, depth, cursor, visitor);
	}

	// Visit Everything
	template <typename Visitor>
	Visitor VisitItems(Visitor visitor) const
	{
		ItemIndex cursor = CreateItemIndex(0);
		return VisitItemsImpl(-1, -1, -1, cursor, visitor);
	}

private:
	template <typename Visitor>
	Visitor& VisitItemsImpl(int beginSlot, int endSlot, int depth, ItemIndex& cursor, Visitor& visitor) const
	{
		// Create our range
		auto iter = GetStartIterator(beginSlot), endIter = GetEndIterator(endSlot);
		if (!IsValidRange(iter, endIter))
			return visitor;

		int slot = std::max(0, beginSlot);
		while (iter != endIter)
		{
			// Update the cursor
			cursor.SetSlot(m_atDepth, slot);
			const ItemPtr& ptr = *iter;

			if (ptr != nullptr)
			{
				// Found an item. Visit it.
				visitor(ptr, cursor);

				// If we have depth, recurse.
				if (depth != 0)
				{
					if (auto container = ptr->GetChildItemContainer())
					{
						ItemIndex tempIndex = cursor;
						container->VisitItemsImpl(-1, -1, depth - 1, cursor, visitor);
						cursor = tempIndex;
					}
				}
			}

			++iter;
			++slot;
		}

		return visitor;
	}

public:
	//
	// functions for visiting containers and items (does not visit placed augments)
	//

	// Visitor functions take the form of: void Visitor(const ItemPtr& item, const ItemIndex& location)

	// Visit a specific range and depth
	template <typename Visitor>
	Visitor VisitContainers(int beginSlot, int endSlot, int depth, Visitor visitor) const
	{
		ItemIndex cursor = CreateItemIndex(std::max(0, beginSlot));
		return VisitContainersImpl(beginSlot, endSlot, depth, visitor);
	}

	// Visit to a specified depth
	template <typename Visitor>
	Visitor VisitContainers(int depth, Visitor visitor) const
	{
		ItemIndex cursor = CreateItemIndex(0);
		return VisitItemsImpl(-1, -1, depth, cursor, visitor);
	}

	// Visit Everything
	template <typename Visitor>
	Visitor VisitContainers(Visitor visitor) const
	{
		ItemIndex cursor = CreateItemIndex(0);
		return VisitItemsImpl(-1, -1, -1, cursor, visitor);
	}

private:
	template <typename Visitor>
	Visitor& VisitContainersImpl(int beginSlot, int endSlot, int depth, ItemIndex& cursor, Visitor& visitor) const
	{
		// Create our range
		auto iter = GetStartIterator(beginSlot), endIter = GetEndIterator(endSlot);
		if (!IsValidRange(iter, endIter))
			return visitor;

		int slot = std::max(0, beginSlot);
		while (iter != endIter)
		{
			// Update the cursor
			cursor.SetSlot(m_atDepth, slot);
			const ItemPtr& ptr = *iter;

			if (ptr != nullptr)
			{
				// Found an item. Visit it.
				visitor(ptr, cursor);

				// If we have depth, recurse into a container.
				if (depth != 0 && ptr->IsContainer())
				{
					if (auto container = ptr->GetChildItemContainer())
					{
						ItemIndex tempIndex = cursor;
						container->VisitContainersImpl(-1, -1, depth - 1, cursor, visitor);
						cursor = tempIndex;
					}
				}
			}

			++iter;
			++slot;
		}

		return visitor;
	}

public:
	//
	// functions used for search for a single item
	//

	// Predicate functions take the form of: bool Predicate(const ItemPtr&, const ItemIndex& location)
	// for convenience, some predicates are provided below the definition of ItemContainer

	// Find a specified range and depth
	template <typename Predicate>
	ItemIndex FindItem(int beginSlot, int endSlot, int depth, Predicate visitor) const
	{
		ItemIndex cursor = CreateItemIndex(std::max(0, beginSlot));
		return FindItemImpl(beginSlot, endSlot, depth, cursor, visitor);
	}

	// Find to a specified depth
	template <typename Predicate>
	ItemIndex FindItem(int depth, Predicate visitor) const
	{
		ItemIndex cursor = CreateItemIndex(0);
		return FindItemImpl(-1, -1, depth, cursor, visitor);
	}

	// Find in everything
	template <typename Predicate>
	ItemIndex FindItem(Predicate visitor) const
	{
		ItemIndex cursor = CreateItemIndex(0);
		return FindItemImpl(-1, -1, -1, cursor, visitor);
	}

private:
	template <typename Predicate>
	ItemIndex FindItemImpl(int beginSlot, int endSlot, int depth, ItemIndex& cursor, Predicate& predicate) const
	{
		// Create our range
		auto iter = GetStartIterator(beginSlot), endIter = GetEndIterator(endSlot);
		if (!IsValidRange(iter, endIter))
			return ItemIndex();

		int slot = std::max(0, beginSlot);
		while (iter != endIter)
		{
			// Update the cursor
			cursor.SetSlot(m_atDepth, slot);
			const ItemPtr& ptr = *iter;

			if (ptr != nullptr)
			{

				// Found an item. Visit it.
				if (predicate(ptr, cursor))
				{
					return cursor;
				}

				// If we have depth, recurse.
				if (depth != 0)
				{
					if (auto container = ptr->GetChildItemContainer())
					{
						ItemIndex tempIndex = cursor;

						ItemIndex foundIndex = container->FindItemImpl(-1, -1, depth - 1, cursor, predicate);
						if (foundIndex.IsValid())
							return foundIndex;

						cursor = tempIndex;
					}
				}
			}

			++iter;
			++slot;
		}

		return ItemIndex();
	}

public:
	//
	// functions used for search for a single empty slot
	//

	// Predicate functions take the form of: bool Predicate(const ItemPtr&, const ItemIndex& location)
	// this predicate will check if a container meets the requirements of the empty slot since the slot information
	// is stored on the container

	// Find a specified range and depth
	template <typename Predicate>
	ItemIndex FindEmptySlot(int beginSlot, int endSlot, int depth, Predicate visitor) const
	{
		ItemIndex cursor = CreateItemIndex(std::max(0, beginSlot));
		return FindEmptySlotImpl(beginSlot, endSlot, depth, cursor, visitor);
	}

	// Find to a specified depth
	template <typename Predicate>
	ItemIndex FindEmptySlot(int depth, Predicate visitor) const
	{
		ItemIndex cursor = CreateItemIndex(0);
		return FindEmptySlotImpl(-1, -1, depth, cursor, visitor);
	}

	// Find in everything
	template <typename Predicate>
	ItemIndex FindEmptySlot(Predicate visitor) const
	{
		ItemIndex cursor = CreateItemIndex(0);
		return FindEmptySlotImpl(-1, -1, -1, cursor, visitor);
	}

private:
	template <typename Predicate>
	ItemIndex FindEmptySlotImpl(int beginSlot, int endSlot, int depth, ItemIndex& cursor, Predicate& predicate) const
	{
		// Create our range
		auto iter = GetStartIterator(beginSlot), endIter = GetEndIterator(endSlot);
		if (!IsValidRange(iter, endIter))
			return ItemIndex();

		// first loop the top-level slots of the container. assume if one of these is empty, that's what the user wants
		// ie, this is breadth-first
		int slot = std::max(0, beginSlot);
		while (iter != endIter)
		{
			cursor.SetSlot(m_atDepth, slot);
			if (*iter == nullptr)
			{
				return cursor;
			}

			++iter;
			++slot;
		}

		// no top-level slots are empty so search the containers, contingent on the predicates
		// only do this if we have a depth
		if (depth != 0)
		{
			iter = GetStartIterator(beginSlot);
			slot = std::max(0, beginSlot);
			while (iter != endIter)
			{
				cursor.SetSlot(m_atDepth, slot);
				const ItemPtr& ptr = *iter;

				if (ptr != nullptr && predicate(ptr, cursor))
				{
					if (auto container = ptr->GetChildItemContainer())
					{
						if (!container->IsFull())
						{
							ItemIndex tempIndex = cursor;

							ItemIndex foundIndex = container->FindEmptySlotImpl(-1, -1, depth - 1, cursor, predicate);
							if (foundIndex.IsValid())
								return foundIndex;

							cursor = tempIndex;
						}
					}
				}

				++iter;
				++slot;
			}
		}

		return ItemIndex();
	}

public:
	// Retrieve an item at a specific index in this container
	EQLIB_OBJECT ItemPtr GetItem(int index) const;

	// Retrieve an item with its item index
	EQLIB_OBJECT ItemPtr GetItem(const ItemIndex& index) const;

	// A visitor to count the number of items.
	struct ItemCountVisitor
	{
		void operator() (const ItemPtr&, const ItemIndex&) { ++m_count;  }
		uint32_t GetCount() const { return m_count; }

	private:
		uint32_t m_count = 0;
	};

	// Retrieves the size of the container. Not every slot may have an item in it.
	inline int GetSize(int depth = 0) const { return m_size; }
	EQLIB_OBJECT int GetRecursiveSize(int depth) const;

	// Retrieves the number of items in the container.
	inline uint32_t GetCount(int beginSlot, int endSlot, int depth) const
	{
		ItemContainer* container = const_cast<ItemContainer*>(this);
		return container->VisitItems(beginSlot, endSlot, depth, ItemCountVisitor()).GetCount();
	}

	inline uint32_t GetCount(int depth = 0) const
	{
		return GetCount(-1, -1, depth);
	}

	EQLIB_OBJECT bool IsItemInBagOrBase(const ItemIndex& index) const;
	EQLIB_OBJECT bool IsItemInSocket(const ItemIndex& index) const;

private:
	// Helper function for evaluating indexes in this container
	EQLIB_OBJECT bool GetIndex(const ItemIndex& index, ItemContainer*& outContainer, short& outSlot) const;

protected:
	// Helper functions for traversing the container
	iterator GetStartIterator(int slot);
	const_iterator GetStartIterator(int slot) const;
	iterator GetEndIterator(int slot);
	const_iterator GetEndIterator(int slot) const;

protected:
/*0x00*/ uint32_t                m_size;
/*0x04*/ ItemContainerInstance   m_type;
/*0x08*/ ItemArray               m_items;
/*0x0c*/ uint8_t                 m_atDepth;
/*0x10*/ short                   m_slots[ItemIndex::MAX_INVENTORY_DEPTH - 1];
/*0x14*/ bool                    m_bDynamic;
/*0x18*/

public:
	ALT_MEMBER_GETTER(uint32_t, m_size, Size);
	ALT_MEMBER_GETTER(ItemContainerInstance, m_type, Spec);
	ALT_MEMBER_GETTER(ItemArray, m_items, Items);

	// deprecated accessors
	ALT_MEMBER_GETTER_DEPRECATED(uint32_t, m_size, ContentSize, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(int, m_type, ItemLocation, "Use GetContainerType() instead");
	ALT_MEMBER_GETTER_DEPRECATED(eqlib::deprecated::ItemArray, m_items, ContainedItems, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(short, m_slots[0], ItemSlot, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(short, m_slots[1], ItemSlot2, "Use the helpers in ItemContainer instead of directly accessing the item storage");
};

// Technically all of these are polymorphic ItemBaseContainers, but we don't need to distinguish between two different
// types, because in practice, all ItemBaseContainers are also ItemContainers.
using ItemBaseContainer = ItemContainer;

// This type is deprecated. All implementations should just use ItemContainer instead.
using ItemBaseContainer2 DEPRECATE("Use ItemContainer instead") = ItemContainer;

inline ItemContainer::iterator ItemContainer::GetStartIterator(int slot)
{
	return slot >= 0 ? begin() + slot : begin();
}

inline ItemContainer::const_iterator ItemContainer::GetStartIterator(int slot) const
{
	return slot >= 0 ? cbegin() + slot : cbegin();
}

inline ItemContainer::iterator ItemContainer::GetEndIterator(int slot)
{
	return slot >= 0 ? begin() + slot + 1 : end();
}

inline ItemContainer::const_iterator ItemContainer::GetEndIterator(int slot) const
{
	return slot >= 0 ? cbegin() + slot + 1 : cend();
}

inline bool ItemContainer::IsValidRange(const_iterator a, const_iterator b) const
{
	// make sure the range is valid -- a comes before b, and both come before end.
	// based on thel ogic of the previous helper functions, we shouldn't ever be
	// before begin, so no use checking for it.
	return a < b && a <= end() && b <= end();
}

//----------------------------------------------------------------------------

// An Item is also a container. This is an interface to get that container.
class IChildItemContainer
{
public:
	virtual ItemContainer* GetChildItemContainer() = 0;
	virtual const ItemContainer* GetChildItemContainer() const = 0;
	virtual ItemPtr CreateCopy() const = 0;
	virtual void SetItemLocation(ItemContainerInstance container, const ItemIndex& index) = 0;
};

//----------------------------------------------------------------------------

//============================================================================

enum eItemEffectType : uint8_t
{
	ItemEffectProc = 0,
	ItemEffectClicky,
	ItemEffectWorn,
	ItemEffectConsumable,
	ItemEffectClickyWorn,
	ItemEffectClickyRestricted,
	ItemEffectFocus,
	ItemEffectSpell,
	ItemEffectFocus2,
	ItemEffectMount,
	ItemEffectIllusion,
	ItemEffectFamiliar
};

// size is 0x64 02-16-2007
struct [[offsetcomments]] ITEMSPELLS
{
/*0x00*/ int   SpellID;
/*0x04*/ BYTE  RequiredLevel;
/*0x05*/ BYTE  EffectType;                       // bIsActivated
/*0x08*/ int   EffectiveCasterLevel;
/*0x0c*/ int   MaxCharges;
/*0x10*/ int   CastTime;
/*0x14*/ int   TimerID;                          // RecastTime
/*0x18*/ int   RecastType;
/*0x1c*/ int   ProcRate;                         // chance to proc
/*0x20*/ char  OtherName[0x40];                  // some kind of override
/*0x60*/ int   OtherID;                          // Description ID
/*0x64*/

	// Currently necessary because of MQ2DataTypes
	ITEMSPELLS() { ZeroMemory(this, sizeof(ITEMSPELLS)); }
};
using PITEMSPELLS = ITEMSPELLS*;

class [[offsetcomments]] ArmorProperties
{
public:
/*0x00*/ unsigned int Type;
/*0x04*/ unsigned int Variation;
/*0x08*/ unsigned int Material;
/*0x0c*/ unsigned int NewArmorID;
/*0x10*/ unsigned int NewArmorType;
/*0x14*/
};

struct ItemAugmentationSocket
{
	int Type;
	bool bVisible;
	bool bInfusible;
};

class ItemSocketData
{
public:
	ItemAugmentationSocket Sockets[MAX_AUG_SOCKETS];

	inline bool IsSocketValid(int socket) const { return Sockets[socket].Type != 0; }
	inline int GetSocketType(int socket) const { return Sockets[socket].Type; }
	inline int IsSocketVisible(int socket) const { return Sockets[socket].bVisible; }
	inline int IsSocketInfusable(int socket) const { return Sockets[socket].bInfusible; }
};


// ItemDefinition class
// to check this look at ItemBase__ResetItemInstance_x
// actual size: 0x704 Nov  6 2018 Test (see 63F00F)
// actual size: 0x70c Oct 31 2018 Beta (see 7291CC)
struct [[offsetcomments]] ItemDefinition
{
/*0x000*/ char                Name[ITEM_NAME_LEN];
/*0x040*/ char                LoreName[LORE_NAME_LEN];
/*0x090*/ char                AdvancedLoreName[0x20];
/*0x0b0*/ int                 IDFile;
/*0x0b4*/ int                 IDFile2;
/*0x0b8*/ int                 ItemNumber;                        // recordnum
/*0x0bc*/ int                 EquipSlots;                        // its position, where it can be equipped
/*0x0c0*/ int                 Cost;
/*0x0c4*/ DWORD               IconNumber;
/*0x0c8*/ BYTE                eGMRequirement;                    // todo figure out this enum
/*0x0c9*/ bool                bPoofOnDeath;
/*0x0cc*/ DWORD               Weight;
/*0x0d0*/ bool                NoRent;                            // 0=temp, 1=default
/*0x0d1*/ bool                NoDrop;                            // 0=no drop, 1=can drop
/*0x0d2*/ bool                Attuneable;
/*0x0d3*/ bool                Heirloom;
/*0x0d4*/ bool                Collectible;
/*0x0d5*/ bool                NoDestroy;
/*0x0d6*/ bool                bNoNPC;
/*0x0d7*/ bool                NoZone;
/*0x0d8*/ DWORD               MakerID;                           // 0-?? I did up to 12, I think it asks server for the name see 883655 in 11 jun 2018 test - eqmule
/*0x0dc*/ bool                NoGround;                          // 88607E 11 jun 2018 test
/*0x0dd*/ bool                bNoLoot;
/*0x0de*/ bool                MarketPlace;                       // 886F85 11 jun 2018 test
/*0x0df*/ bool                bFreeSlot;                         // 885565 11 jun 2018 test
/*0x0e0*/ bool                bAutoUse;                          // 885865 11 jun 2018 test
/*0x0e4*/ int                 Unknown0x0118;
/*0x0e8*/ BYTE                Size;                              // 884920 11 jun 2018 test
/*0x0e9*/ BYTE                Type;                              // 884BA5 11 jun 2018 test
/*0x0ea*/ bool                TradeSkills;                       // 886EC5 11 jun 2018 test
/*0x0ec*/ int                 Lore;                              // -1=Lore 0=Not Lore >=1=Lore Group see 885EE1 in 11 jun 2018 test
/*0x0f0*/ int                 LoreEquipped;                      // just guessing todo: check
/*0x0f4*/ bool                Artifact;
/*0x0f5*/ bool                Summoned;
/*0x0f6*/ char                SvCold;
/*0x0f7*/ char                SvFire;                            // 8848B0 jun 11 2018 test
/*0x0f8*/ char                SvMagic;
/*0x0f9*/ char                SvDisease;
/*0x0fa*/ char                SvPoison;
/*0x0fb*/ char                SvCorruption;
/*0x0fc*/ char                STR;
/*0x0fd*/ char                STA;                               // 884B20 jun 11 2018 test
/*0x0fe*/ char                AGI;
/*0x0ff*/ char                DEX;
/*0x100*/ char                CHA;                               // 883E20 jun 11 2018 test
/*0x101*/ char                INT;
/*0x102*/ char                WIS;
/*0x104*/ int                 HP;                                // 884010 jun 11 2018 test
/*0x108*/ int                 Mana;
/*0x10c*/ int                 AC;
/*0x110*/ int                 RequiredLevel;
/*0x114*/ int                 RecommendedLevel;
/*0x118*/ int                 RecommendedSkill;
/*0x11c*/ int                 SkillModType;
/*0x120*/ int                 SkillModValue;
/*0x124*/ int                 SkillModMax;
/*0x128*/ int                 SkillModBonus;
/*0x12c*/ int                 BaneDMGRace;
/*0x130*/ int                 BaneDMGBodyType;
/*0x134*/ int                 BaneDMGBodyTypeValue;
/*0x138*/ int                 BaneDMGRaceValue;
/*0x13c*/ int                 InstrumentType;
/*0x140*/ int                 InstrumentMod;
/*0x144*/ int                 Classes;
/*0x148*/ int                 Races;
/*0x14c*/ int                 Diety;
/*0x150*/ UINT                MaterialTintIndex;
/*0x154*/ bool                Magic;
/*0x155*/ BYTE                Light;                      // 884045 jun 11 2018 test
/*0x156*/ BYTE                Delay;
/*0x157*/ BYTE                ElementalFlag;              // used to be called DmgBonusType;
/*0x158*/ BYTE                ElementalDamage;            // used to be called DmgBonusVal
/*0x159*/ BYTE                Range;
/*0x15c*/ DWORD               Damage;                     // BaseDamage
/*0x160*/ DWORD               BackstabDamage;
/*0x164*/ DWORD               HeroicSTR;
/*0x168*/ DWORD               HeroicINT;                  // 883A30 jun 11 2018 test
/*0x16c*/ DWORD               HeroicWIS;                  // 883A90 jun 11 2018 test
/*0x170*/ DWORD               HeroicAGI;                  // 8839D0 jun 11 2018 test
/*0x174*/ DWORD               HeroicDEX;
/*0x178*/ DWORD               HeroicSTA;                  // 883A50 jun 11 2018 test
/*0x17c*/ DWORD               HeroicCHA;                  // 8839F0 jun 11 2018 test
/*0x180*/ DWORD               HealAmount;                 // 883980 jun 11 2018 test
/*0x184*/ DWORD               SpellDamage;
/*0x188*/ int                 MinLuck;
/*0x18c*/ int                 MaxLuck;
/*0x190*/ int                 Prestige;                   // 884816 jun 11 2018 test
/*0x194*/ uint8_t             ItemClass;
/*0x198*/ ArmorProperties     ArmorProps;                 // size is 0x14
/*0x1ac*/ ItemSocketData      AugData;
/*0x1dc*/ DWORD               AugType;
/*0x1e0*/ DWORD               AugSkinTypeMask;
/*0x1e4*/ DWORD               AugRestrictions;
/*0x1e8*/ DWORD               SolventItemID;              // ID# of Solvent (Augs only)
/*0x1ec*/ DWORD               LDTheme;
/*0x1f0*/ DWORD               LDCost;
/*0x1f4*/ DWORD               LDType;
/*0x1f8*/ int                 Unknown0x022c;
/*0x1fc*/ int                 Unknown0x0230;
/*0x200*/ char                CharmFile[0x20];
/*0x220*/ float               Unknown0x0254;
/*0x224*/ ITEMSPELLS          Clicky;                     // size 0x64
/*0x288*/ ITEMSPELLS          Proc;
/*0x2ec*/ ITEMSPELLS          Worn;
/*0x350*/ ITEMSPELLS          Focus;
/*0x3b4*/ ITEMSPELLS          Scroll;
/*0x418*/ ITEMSPELLS          Focus2;
/*0x47c*/ ITEMSPELLS          Mount;
/*0x4e0*/ ITEMSPELLS          Illusion;
/*0x544*/ ITEMSPELLS          Familiar;
/*0x5a8*/ DWORD               SkillMask[5];               // this is just an array but I dont have time to figure it out for now.
/*0x5bc*/ DWORD               DmgBonusSkill;              // SkillMinDamageMod;
/*0x5c0*/ DWORD               DmgBonusValue;              // MinDamageMod;
/*0x5c4*/ DWORD               CharmFileID;
/*0x5c8*/ DWORD               FoodDuration;               // 0-5 snack 6-20 meal 21-30 hearty 31-40 banquet 41-50 feast 51-60 enduring 60- miraculous
/*0x5cc*/ uint8_t             Combine;
/*0x5cd*/ BYTE                Slots;
/*0x5ce*/ BYTE                SizeCapacity;
/*0x5cf*/ BYTE                WeightReduction;
/*0x5d0*/ BYTE                BookType;                   // 0=note, !0=book 884CF5 jun 11 2018 test
/*0x5d1*/ BYTE                BookLang;
/*0x5d2*/ char                BookFile[0x1e];
/*0x5f0*/ DWORD               Favor;                      // Tribute Value
/*0x5f4*/ DWORD               GuildFavor;
/*0x5f8*/ bool                bIsFVNoDrop;
/*0x5fc*/ DWORD               Endurance;
/*0x600*/ DWORD               Attack;
/*0x604*/ DWORD               HPRegen;
/*0x608*/ DWORD               ManaRegen;
/*0x60c*/ DWORD               EnduranceRegen;
/*0x610*/ DWORD               Haste;
/*0x614*/ int                 AnimationOverride;
/*0x618*/ int                 PaletteTintIndex;
/*0x61c*/ bool                bNoPetGive;
/*0x61d*/ bool                bSomeProfile;
/*0x620*/ int                 SomeIDFlag;
/*0x624*/ int                 StackSize;
/*0x628*/ bool                bNoStorage;
/*0x62c*/ int                 MaxPower;
/*0x630*/ int                 Purity;
/*0x634*/ bool                bIsEpic;
/*0x638*/ int                 RightClickScriptID;
/*0x63c*/ int                 ItemLaunchScriptID;
/*0x640*/ BYTE                QuestItem;
/*0x641*/ BYTE                Expendable;
/*0x644*/ DWORD               Clairvoyance;
/*0x648*/ int                 SubClass;
/*0x64c*/ bool                bLoginRegReqItem;
/*0x650*/ DWORD               Placeable;
/*0x654*/ bool                bPlaceableIgnoreCollisions;
/*0x658*/ int                 PlacementType;              // todo: this is an enum need to figure out.
/*0x65c*/ int                 RealEstateDefID;
/*0x660*/ float               PlaceableScaleRangeMin;
/*0x664*/ float               PlaceableScaleRangeMax;
/*0x668*/ int                 RealEstateUpkeepID;
/*0x66c*/ int                 MaxPerRealEstate;
/*0x670*/ char                HousepetFileName[0x20];
/*0x690*/ int                 TrophyBenefitID;
/*0x694*/ bool                bDisablePlacementRotation;
/*0x695*/ bool                bDisableFreePlacement;
/*0x698*/ int                 NpcRespawnInterval;
/*0x69c*/ float               PlaceableDefScale;
/*0x6a0*/ float               PlaceableDefHeading;
/*0x6a4*/ float               PlaceableDefPitch;
/*0x6a8*/ float               PlaceableDefRoll;
/*0x6ac*/ bool                bInteractiveObject;
/*0x6ad*/ uint8_t             SocketSubClassCount;
/*0x6b0*/ int                 SocketSubClass[0xa];
/*0x6d8*/

	// This is actually the item *class* but we used to call it ItemType. Not to be confused with
	// Type in ItemClient.
	inline uint8_t get_ItemType() { return ItemClass; }
	__declspec(property(get = get_ItemType)) uint8_t ItemType;
};
using ITEMINFO = ItemDefinition;
using PITEMINFO = ItemDefinition*;

using ItemDefinitionPtr = SoeUtil::SharedPtr<ItemDefinition>;

class EqItemGuid
{
public:
	enum { GUID_LENGTH = 18 };

	EqItemGuid()
	{
		memset(guid, 0, sizeof(guid));
	}

	char guid[GUID_LENGTH];

	EQLIB_OBJECT void UnSerialize(CUnSerializeBuffer& buffer);
};

struct [[offsetcomments]] ItemEvolutionData
{
/*0x00*/ int    GroupID;
/*0x04*/ int    EvolvingCurrentLevel;
/*0x08*/ double EvolvingExpPct;
/*0x10*/ int    EvolvingMaxLevel;
/*0x14*/ int    LastEquipped;
/*0x18*/ };
using ItemEvolutionDataPtr = SoeUtil::SharedPtr<ItemEvolutionData>;

//============================================================================
// ItemBase
//============================================================================

class [[offsetcomments]] ItemBase : public VeBaseReferenceCount, public IChildItemContainer
{
public:
// @start: ItemBase Members
/*0x0c*/ int                   ScriptIndex;
/*0x10*/ bool                  bCollected;
/*0x14*/ ItemGlobalIndex       GlobalIndex;
/*0x20*/ bool                  bRankDisabled;
/*0x21*/ bool                  bDisableAugTexture;
/*0x24*/ ArrayClass<uint32_t>  RealEstateArray;
/*0x34*/ CXStr                 ActorTag2;
/*0x38*/ CXStr                 SaveString;
/*0x3c*/ int                   Luck;
/*0x40*/ int                   ID;
/*0x44*/ unsigned int          RespawnTime;
/*0x48*/ int64_t               MerchantSlot;
/*0x50*/ int                   ConvertItemID;
/*0x54*/ CXStr                 ActorTag1;
/*0x58*/ CXStr                 ConvertItemName;
/*0x5c*/ bool                  bCopied;
/*0x60*/ ItemContainer         Contents;
/*0x80*/ int64_t               DontKnow;
/*0x88*/ int                   NoDropFlag;
/*0x8c*/ ItemDefinition*       Item1;
/*0x90*/ unsigned int          LastCastTime;
/*0x94*/ int                   Power;
/*0x98*/ unsigned int          ItemHash;
/*0x9c*/ bool                  bRealEstateItemPlaceable;
/*0xa0*/ int                   StackCount;
/*0xa4*/ int                   OrnamentationIcon;
/*0xa8*/ int                   MerchantQuantity;
/*0xac*/ bool                  bItemNeedsUpdate;
/*0xb0*/ int64_t               Price;
/*0xb8*/ int                   Open;
/*0xbc*/ int                   NoteStatus;
/*0xc0*/ bool                  bConvertable;
/*0xc1*/ EqItemGuid            ItemGUID;
/*0xd4*/ unsigned int          Tint;
/*0xd8*/ int                   ArmorType;
/*0xdc*/ int                   AugFlag;
/*0xe0*/ ItemEvolutionDataPtr  pEvolutionData;
/*0xe8*/ unsigned int          NewArmorID;
/*0xec*/ int                   RealEstateID;
/*0xf0*/ int                   Charges;
/*0xf4*/
// @end: ItemBase Members

	// Constructor is technically for ItemClient. Make sure the size
	// of the class matches.
	EQLIB_OBJECT ItemBase();

	// ItemClient::`vftable'{for `VeBaseReferenceCount'}
	virtual ~ItemBase() {}
	virtual ITEMINFO* GetItemDefinition() const { return nullptr; }
	virtual void SetItemDefinition(const ITEMINFO* item) {}
	// ... more

	// ItemClient::`vftable'{for `IChildItemContainer<class ItemBase>'}
	virtual ItemContainer* GetChildItemContainer() override { return (ItemContainer*)&Contents; }
	virtual const ItemContainer* GetChildItemContainer() const override { return (const ItemContainer*)&Contents; }
	virtual ItemPtr CreateCopy() const override { return nullptr; }
	virtual void SetItemLocation(ItemContainerInstance container, const ItemIndex& index) override {};

	// Common accessors
	inline int GetID() const { return GetItemDefinition()->ItemNumber; }
	inline uint8_t GetType() const { return GetItemDefinition()->Type; }
	inline uint8_t GetItemClass() const { return GetItemDefinition()->ItemClass; }
	inline const char* GetName() const { return GetItemDefinition()->Name; }
	inline bool IsContainer() const { return GetType() == ITEMTYPE_PACK; }

	// current and max item counts (number in the stack)
	inline int GetMaxItemCount() const { return GetItemDefinition()->StackSize; }
	inline int GetItemCount() const { return StackCount; }
	inline bool IsStackable() const { return GetItemDefinition()->StackSize > 1; }

	inline ItemPtr GetHeldItem(int index) const { return Contents.GetItem(index); }
	inline ItemPtr GetHeldItem(const ItemIndex& index) const { return Contents.GetItem(index); }
	inline ItemContainer& GetHeldItems() { return Contents; }
	inline const ItemContainer& GetHeldItems() const { return Contents; }
	inline const ItemGlobalIndex& GetItemLocation() const { return GlobalIndex; }
	inline bool IsEmpty() const { return Contents.IsEmpty(); }
	inline ItemClient* GetContent(int index) { return GetHeldItem(index).get(); }

	EQLIB_OBJECT bool IsLore(bool bIncludeSockets = false) const;
	EQLIB_OBJECT bool IsLoreEquipped(bool bIncludeSockets = false) const;

	EQLIB_OBJECT char* CreateItemTagString(char*, int, bool bFlag = true); // SwiftyMUSE 11-09-2018
	EQLIB_OBJECT ItemPtr CreateItemClient(CUnSerializeBuffer& buffer);
	EQLIB_OBJECT bool CanDrop(bool bDisplayText = false, bool bIncludeContainedItems = true, bool bAllowOverrideNoDropCheck = false, bool bCantDropIfContainingRealEstate = true) const;
	EQLIB_OBJECT int GetImageNum() const;
	EQLIB_OBJECT int GetItemValue(bool) const;
	EQLIB_OBJECT bool IsKeyRingItem(KeyRingType type) const;
	EQLIB_OBJECT bool CanGoInBag(const ItemPtr& pItem, int unused = 0, bool mustbefalse = false) const;
	EQLIB_OBJECT int GetAugmentFitBySlot(const ItemPtr& Aug, int Slot, bool bCheckSlot = true, bool bCheckDup = true) const;
	EQLIB_OBJECT int ValueSellMerchant(float, int) const;

	inline bool IsSocketValid(int index)
	{
		if (index >= 0 && index < MAX_AUG_SOCKETS)
		{
			return GetItemDefinition()->AugData.IsSocketValid(index);
		}

		return false;
	}

	//----------------------------------------------------------------------------
	// DEPRECATED METHODS

	DEPRECATE("Use GetItemLocation instead of GetGlobalIndex")
	inline const ItemGlobalIndex& GetGlobalIndex() const { return GlobalIndex; }

	// Compatibility properties for ItemEvolutionData
	DEPRECATE("Use pEvolutionData->GroupID instead of EvolvingGroupID")
	inline int get_EvolvingGroupID() { return pEvolutionData ? pEvolutionData->GroupID : 0; }
	__declspec(property(get = get_EvolvingGroupID)) int GroupID;

	DEPRECATE("Use pEvolutionData->EvolvingCurrentLevel instead of EvolvingCurrentLevel")
	inline int get_EvolvingCurrentLevel() { return pEvolutionData ? pEvolutionData->EvolvingCurrentLevel : 0; }
	__declspec(property(get = get_EvolvingCurrentLevel)) int EvolvingCurrentLevel;

	DEPRECATE("Use pEvolutionData->EvolvingExpPct instead of EvolvingExpPct")
	inline double get_EvolvingExpPct() { return pEvolutionData ? pEvolutionData->EvolvingExpPct : 0.0; }
	__declspec(property(get = get_EvolvingExpPct)) double EvolvingExpPct;

	DEPRECATE("Use pEvolutionData->EvolvingMaxLevel instead of EvolvingMaxLevel")
	inline int get_EvolvingMaxLevel() { return pEvolutionData ? pEvolutionData->EvolvingMaxLevel : 0; }
	__declspec(property(get = get_EvolvingMaxLevel)) int EvolvingMaxLevel;

	DEPRECATE("Use pEvolutionData->LastEquipped instead of LastEquipped")
	inline int get_LastEquipped() { return pEvolutionData ? pEvolutionData->LastEquipped : 0; }
	__declspec(property(get = get_LastEquipped)) int LastEquipped;

	DEPRECATE("Use GetItemDefinition() instead of accessing Item2 directly")
	inline ItemDefinition* get_Item2() { return GetItemDefinition(); }
	__declspec(property(get = get_Item2)) ItemDefinition* Item2;
};

// Actual Size: 0x108 (see 0x75AD9E in eqgame.exe dated Jul 13 2020)
class [[offsetcomments]] ItemClient : public ItemBase
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT ItemClient() = default;

/*0x0f8*/ ItemDefinitionPtr SharedItemDef;
/*0x100*/ CXStr             ClientString;
/*0x104*/ uint8_t           Filler0x010c[0x4];
/*0x108*/
};

using EQ_Item DEPRECATE("Use ItemClient instead (or make sure the conversion is even necessary)") = ItemClient;

//----------------------------------------------------------------------------

// 20101012 - ieatacid
struct [[offsetcomments]] INVENTORY
{
/*0x00*/ CONTENTS* Charm;
/*0x04*/ CONTENTS* LeftEar;
/*0x08*/ CONTENTS* Head;
/*0x0c*/ CONTENTS* Face;
/*0x10*/ CONTENTS* RightEar;
/*0x14*/ CONTENTS* Neck;
/*0x18*/ CONTENTS* Shoulders;
/*0x1c*/ CONTENTS* Arms;
/*0x20*/ CONTENTS* Back;
/*0x24*/ CONTENTS* LeftWrist;
/*0x28*/ CONTENTS* RightWrist;
/*0x2c*/ CONTENTS* Range;
/*0x30*/ CONTENTS* Hands;
/*0x34*/ CONTENTS* Primary;
/*0x38*/ CONTENTS* Secondary;
/*0x3c*/ CONTENTS* LeftFinger;
/*0x40*/ CONTENTS* RightFinger;
/*0x44*/ CONTENTS* Chest;
/*0x48*/ CONTENTS* Legs;
/*0x4c*/ CONTENTS* Feet;
/*0x50*/ CONTENTS* Waist;
/*0x54*/ CONTENTS* PowerSource;
/*0x58*/ CONTENTS* Ammo;
/*0x5c*/ CONTENTS* Pack[NUM_BAG_SLOTS];
/*0x84*/ CONTENTS* Cursor;
/*0x88*/
};
using PINVENTORY [[deprecated]] = INVENTORY;

struct INVENTORYARRAY
{
#pragma warning(disable: 4996) // Disable ability for these definitions to trigger their own deprecation notices

	DEPRECATE("Instead of accessing Inventory slots directly, use ItemContainer::GetItem or GetInventorySlot().\n"
		"  For example, do: pObj->ItemContainer.GetItem(InvSlot_Cursor)\n"
		"       instead of: pObj->pInventoryArray->Inventory.Cursor\n"
		"    if using PcProfile, you can do: pProfile->GetInventorySlot(InvSlot_Cursor) too.")
	inline INVENTORY& get_Inventory() { return *(INVENTORY*)&InventoryArray[0]; }
	__declspec(property(get = get_Inventory)) INVENTORY Inventory;

	DEPRECATE("Instead of accessing InventoryArray directly, use ItemContainer::GetItem or GetInventorySlot().\n"
		"  For example, do: pObj->ItemContainer.GetItem(InvSlot_Head)\n"
		"       instead of: pObj->pInventoryArray->InventoryArray[InvSlot_Head]\n"
		"    if using PcProfile, you can do: pProfile->GetInventorySlot(InvSlot_Cursor) too.")
	CONTENTS* InventoryArray[InvSlot_Max];

#pragma warning(default: 4996)
};
using PINVENTORYARRAY DEPRECATE("Use INVENTORYARRAY* Instead of PINVENTORYARRAY") = INVENTORYARRAY*;

// offsets are relative to their position in LAUNCHSPELLDATA
struct [[offsetcomments]] ITEMLOCATION
{
/*0x00*/ ItemContainerInstance Location [[deprecated("Use ItemGlobalIndex")]] ;
/*0x04*/ short InvSlot [[deprecated("Use ItemGlobalIndex")]] ;
/*0x06*/ short BagSlot [[deprecated("Use ItemGlobalIndex")]] ;
/*0x08*/ short AugSlot [[deprecated("Use ItemGlobalIndex")]] ;
/*0x0c*/
};
using PITEMLOCATION [[deprecated("Use ItemGlobalIndex")]] = ITEMLOCATION*;

//----------------------------------------------------------------------------
// item find predicates.

// Find an item by its name. We treat name lookups as case insensitive.
struct FindItemByNamePred
{
	FindItemByNamePred(std::string_view sv, bool exact = true)
		: sv(sv), exact(exact) {}

	bool operator()(const ItemPtr& item, const ItemIndex&)
	{
		return mq::ci_equals(item->GetItemDefinition()->Name, sv, exact);
	}

private:
	bool exact = true;
	std::string_view sv;
};

// Find an item by its id. If multiples exists, it will only find the first.
struct FindItemByIdPred
{
	FindItemByIdPred(int itemId) : itemId(itemId) {}

	bool operator()(const ItemPtr& item, const ItemIndex&)
	{
		return item->GetItemDefinition()->ItemNumber == itemId;
	}

private:
	int itemId;
};


} // namespace eqlib
