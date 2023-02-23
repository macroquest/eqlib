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
#include "CXStr.h"
#include "GraphicsEngine.h"
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
	eItemContainerMountKeyRingItems              = 27, // FIXME: Emulator
	eItemContainerViewModMountKeyRingItems       = 28,
	eItemContainerIllusionKeyRingItems           = 29,
	eItemContainerViewModIllusionKeyRingItems    = 30,
	eItemContainerFamiliarKeyRingItems           = 31,
	eItemContainerViewModFamiliarKeyRingItems    = 32,
	eItemContainerHeroForgeKeyRingItems          = 33,
	eItemContainerViewModHeroForgeKeyRingItems   = 34,
	eItemContainerTeleportationKeyRingItems      = 35,
	eItemContainerViewModTeleportationKeyRingItems = 36,
	eItemContainerOverflow                       = 37,
	eItemContainerDragonHoard                    = 38,
	eItemContainerTradeskillDepot                = 39,
	eItemContainerGuildTradeskillDepot           = 40,

	eNumItemContainers,
};

EQLIB_API const char* GetNameForContainerInstance(ItemContainerInstance container);

inline namespace deprecated
{
	// BAD - DO NOT USE
	struct ITEMBASEARRAY
	{
		ItemClient* Item[1];
	};
	using PITEMBASEARRAY DEPRECATE("Use ITEMBASEARRAY* instead of PITEMBASEARRAY") = ITEMBASEARRAY*;

	class [[offsetcomments]] ITEMARRAY
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

	DEPRECATE("Use GetSlot(0) instead of Slot1")
	inline int getSlot1() const { return m_slots[0]; }
	DEPRECATE("Use SetSlot(0) instead of Slot1")
	inline void setSlot1(int v) { m_slots[0] = v; }
	DEPRECATE("Use GetSlot(1) instead of Slot2")
	inline int getSlot2() const { return m_slots[1]; }
	DEPRECATE("Use SetSlot(1) instead of Slot2")
	inline void setSlot2(int v) { m_slots[1] = v; }
	DEPRECATE("Use GetSlot(2) instead of Slot3")
	inline int getSlot3() const { return m_slots[2]; }
	DEPRECATE("Use SetSlot(2) instead of Slot3")
	inline void setSlot3(int v) { m_slots[2] = v; }
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
		: Location(location)
		, Index(slot1, slot2, slot3)
	{}

	inline void SetLocation(ItemContainerInstance location) { Location = location; }
	inline ItemContainerInstance GetLocation() const { return Location; }

	inline void SetIndex(const ItemIndex& index) { Index = index; }
	inline ItemIndex& GetIndex() { return Index; }
	inline const ItemIndex& GetIndex() const { return Index; }

	inline short GetTopSlot() const { return GetIndex().GetTopSlot(); }
	inline short GetSlot(int depth) const { return GetIndex().GetSlot(depth); }

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
			|| Location == eItemContainerFamiliarKeyRingItems
			|| Location == eItemContainerTeleportationKeyRingItems;
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

using ItemArray = VeArray<ItemPtr>;

class [[offsetcomments]] ItemContainer
{
public:
	using iterator = ItemArray::iterator;
	using const_iterator = ItemArray::const_iterator;

	enum CheckDepthOptions { eCheckDepthBagOrBase, eCheckDepthSocket };

	ItemContainer(int size, ItemContainerInstance instance, bool dynamic = false)
		: m_size(size)
		, m_type(instance)
		, m_bDynamic(dynamic)
	{
		memset(m_slots, -1, sizeof(m_slots));
	}

	inline iterator begin() { return Items.begin(); }
	inline const_iterator begin() const { return m_items.begin(); }
	inline const_iterator cbegin() const { return m_items.cbegin(); }
	inline iterator end() { return Items.end(); }
	inline const_iterator end() const { return m_items.end(); }
	inline const_iterator cend() const { return m_items.cend(); }

	bool IsValidRange(const_iterator a, const_iterator b) const;

	bool IsDynamic() const { return m_bDynamic; }

	// Retrieves a range that is iterable using range based for.
	auto GetRange(int beginSlot, int endSlot) const
	{
		struct IteratorRange {
			const_iterator a, b;
			const_iterator begin() const { return a; }
			const_iterator end() const { return b; }

			IteratorRange(const IteratorRange&) = delete;
			IteratorRange& operator=(const IteratorRange&) = delete;
		};

		auto iter = GetStartIterator(beginSlot), endIter = GetEndIterator(endSlot);
		return IteratorRange{ iter, endIter };
	}

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

	EQLIB_OBJECT void SetSize(int size);

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
/*0x14*/ uint8_t                 m_atDepth = 0;
/*0x16*/ short                   m_slots[ItemIndex::MAX_INVENTORY_DEPTH - 1];
/*0x1a*/ bool                    m_bDynamic;
/*0x1c*/ uint32_t                Uknown0xc0[7];
/*0x38*/
public:
	ALT_MEMBER_GETTER(uint32_t, m_size, Size);
	ALT_MEMBER_GETTER(ItemContainerInstance, m_type, Spec);
	ALT_MEMBER_GETTER(ItemArray, m_items, Items);

	// deprecated accessors
	ALT_MEMBER_GETTER_DEPRECATED(uint32_t, m_size, ContentSize, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(int, m_type, ItemLocation, "Use GetContainerType() instead");
	ALT_MEMBER_GETTER_DEPRECATED(eqlib::deprecated::ITEMARRAY, m_items, ContainedItems, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(short, m_slots[0], ItemSlot, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(short, m_slots[1], ItemSlot2, "Use the helpers in ItemContainer instead of directly accessing the item storage");
};

// Technically all of these are polymorphic ItemBaseContainers, but we don't need to distinguish between two different
// types, because in practice, all ItemBaseContainers are also ItemContainers.
using ItemBaseContainer = ItemContainer;

inline namespace deprecated {
	// This type is deprecated. All implementations should just use ItemContainer instead.
	using ItemBaseContainer2 DEPRECATE("Use ItemContainer instead") = ItemContainer;
}

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

enum ItemSpellTypes
{
	ItemSpellType_Clicky = 0,
	ItemSpellType_Proc,
	ItemSpellType_Worn,
	ItemSpellType_Focus,
	ItemSpellType_Scroll,
	ItemSpellType_Focus2,
	ItemSpellType_Max,

	// Map these other clickable effects to clicky since they don't exist in this version
	ItemSpellType_Mount = ItemSpellType_Clicky,
	ItemSpellType_Illusion = ItemSpellType_Clicky,
	ItemSpellType_Familiar = ItemSpellType_Clicky,
	ItemSpellType_Blessing = ItemSpellType_Clicky,

	// Renamed to Blessing.
	ItemSpellType_Keyring DEPRECATE("Use ItemSpellType_Blessing instead of ItemSpellType_Keyring") = ItemSpellType_Blessing,

	// Two names for the same thing...
	eActivatableSpell = ItemSpellType_Clicky,
	eProcSpell = ItemSpellType_Proc,
	eWornSpell = ItemSpellType_Worn,
	eFocusSpell = ItemSpellType_Focus,
	eScrollSpell = ItemSpellType_Scroll,
	eFocus2Spell = ItemSpellType_Focus2,
	eMountSpell = ItemSpellType_Mount,
	eIllusionSpell = ItemSpellType_Illusion,
	eFamiliarSpell = ItemSpellType_Familiar,
};
using eItemSpellType = ItemSpellTypes;

inline namespace deprecated
{
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
}

//----------------------------------------------------------------------------

class [[offsetcomments]] ItemSpellData
{
public:
	struct [[offsetcomments]] SpellData
	{
	/*0x00*/ int                   SpellID;
	/*0x04*/ uint8_t               RequiredLevel;
	/*0x05*/ eItemEffectType       EffectType;
	/*0x08*/ int                   EffectiveCasterLevel;
	/*0x0c*/ int                   MaxCharges;
	/*0x10*/ int                   CastTime;
	/*0x14*/ int                   RecastTime;
	/*0x18*/ int                   RecastType;
	/*0x1c*/ int                   ProcRate;
	/*0x20*/ char                  OverrideName[64];            // name override
	/*0x60*/ int                   OverrideDesc;                // override description id
	/*0x64*/

		EQLIB_OBJECT SpellData();
		EQLIB_OBJECT void Reset();

		inline int get_TimerID() const { return RecastTime; }
		__declspec(property(get = get_TimerID)) int TimerID;
	};

/*0x000*/ SpellData Spells[ItemSpellType_Max];
/*0x258*/ uint32_t  SkillMask[5];               // bit field for each skill required to use
/*0x26c*/

	// Convenience accessors
	inline int GetSpellId(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].SpellID : 0; }
	inline uint8_t GetSpelllRequiredLevel(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].RequiredLevel : 0; }
	inline eItemEffectType GetSpellEffectType(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].EffectType : ItemEffectProc; }
	inline int GetSpellEffectiveCasterLevel(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].EffectiveCasterLevel : 0; }
	inline int GetSpellMaxCharges(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].MaxCharges : 0; }
	inline int GetSpellCastTime(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].CastTime : 0; }
	inline int GetSpellRecastTime(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].RecastTime : 0; }
	inline int GetSpellRecastType(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].RecastType : 0; }
	inline int GetSpellChanceProc(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].ProcRate : 0; }
	inline const char* GetOverrideName(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].OverrideName : ""; }
	inline int GetOverrideDesc(ItemSpellTypes type) const { return type < ItemSpellType_Max ? Spells[type].OverrideDesc : 0; }
	inline SpellData* GetSpellData(ItemSpellTypes type) { return type < ItemSpellType_Max ? &Spells[type] : nullptr; }

	EQLIB_OBJECT ItemSpellData();
	EQLIB_OBJECT void Reset();
};

//----------------------------------------------------------------------------

struct ItemAugmentationSocket
{
/*0x00*/ int Type;
/*0x04*/ bool bVisible;
/*0x05*/ bool bInfusible;
/*0x06*/
};

class ItemSocketData
{
public:
	ItemAugmentationSocket Sockets[MAX_AUG_SOCKETS];

	inline bool IsSocketValid(int socket) const { return Sockets[socket].Type != 0; }
	inline int GetSocketType(int socket) const { return Sockets[socket].Type; }
	inline int IsSocketVisible(int socket) const { return Sockets[socket].bVisible; }
	inline int IsSocketInfusable(int socket) const { return Sockets[socket].bInfusible; }

	inline void Reset()
	{
		for (auto& socket : Sockets)
		{
			socket.Type = 0;
			socket.bVisible = true;
			socket.bInfusible = false;
		}
	}
};

// @sizeof(ItemDefinition) == 0x634 :: 2013-05-10 (emu) @ 0x68FC67
constexpr size_t ItemDefinition_size = 0x634;

class [[offsetcomments]] ItemDefinition
{
public:
/*0x000*/ char                Name[ITEM_NAME_LEN];
/*0x040*/ char                LoreName[LORE_NAME_LEN];
/*0x090*/ char                AdvancedLoreName[32];
/*0x0b0*/ char                IDFile[30];
/*0x0ce*/ char                IDFile2[30];
/*0x0ec*/ int                 ItemNumber;                        // recordnum
/*0x0f0*/ int                 EquipSlots;                        // its position, where it can be equipped
/*0x0f4*/ int                 Cost;
/*0x0f8*/ int                 IconNumber;
/*0x0fc*/ uint8_t             eGMRequirement;                    // this is an unmapped enum
/*0x0fd*/ bool                bPoofOnDeath;
/*0x100*/ int                 Unknown0x0100;
/*0x104*/ int                 Unknown0x0104;
/*0x108*/ int                 Weight;
/*0x10c*/ bool                NoRent;                            // 0=temp, 1=default
/*0x10d*/ bool                IsDroppable;                       // 0=no drop, 1=can drop
/*0x10e*/ bool                Attuneable;
/*0x10f*/ bool                Heirloom;
/*0x110*/ bool                Collectible;
/*0x111*/ bool                NoDestroy;
/*0x112*/ bool                MarketPlace;
/*0x113*/ bool                NoZone;
/*0x114*/ int                 MakerID;
/*0x118*/ bool                NoGround;
/*0x119*/ uint8_t             Size;
/*0x11a*/ uint8_t             Type;
/*0x11b*/ bool                TradeSkills;
/*0x11c*/ int                 Lore;                              // -1=Lore 0=Not Lore >=1=Lore Group
/*0x120*/ bool                Artifact;
/*0x121*/ bool                Summoned;
/*0x122*/ char                SvCold;
/*0x123*/ char                SvFire;
/*0x124*/ char                SvMagic;
/*0x125*/ char                SvDisease;
/*0x126*/ char                SvPoison;
/*0x127*/ char                SvCorruption;
/*0x128*/ char                STR;
/*0x129*/ char                STA;
/*0x12a*/ char                AGI;
/*0x12b*/ char                DEX;
/*0x12c*/ char                CHA;
/*0x12d*/ char                INT;
/*0x12e*/ char                WIS;
/*0x130*/ int                 HP;
/*0x134*/ int                 Mana;
/*0x138*/ int                 AC;
/*0x13c*/ int                 RequiredLevel;
/*0x140*/ int                 RecommendedLevel;
/*0x144*/ int                 RecommendedSkill;
/*0x148*/ int                 SkillModType;
/*0x14c*/ int                 SkillModValue;
/*0x150*/ int                 SkillModMax;
/*0x154*/ int                 SkillModBonus;
/*0x158*/ int                 BaneDMGRace;
/*0x15c*/ int                 BaneDMGBodyType;
/*0x160*/ int                 BaneDMGBodyTypeValue;
/*0x164*/ int                 BaneDMGRaceValue;
/*0x168*/ int                 InstrumentType;
/*0x16c*/ int                 InstrumentMod;
/*0x170*/ int                 Classes;
/*0x174*/ int                 Races;
/*0x178*/ int                 Deity;
/*0x17c*/ uint32_t            MaterialTintIndex;
/*0x180*/ bool                Magic;
/*0x181*/ uint8_t             Light;
/*0x182*/ uint8_t             Delay;
/*0x183*/ uint8_t             ElementalFlag;              // used to be called DmgBonusType;
/*0x184*/ uint8_t             ElementalDamage;            // used to be called DmgBonusVal
/*0x185*/ uint8_t             Range;
/*0x188*/ int                 Damage;                     // BaseDamage
/*0x18c*/ int                 BackstabDamage;
/*0x190*/ int                 DamageShieldMitigation;
/*0x194*/ int                 HeroicSTR;
/*0x198*/ int                 HeroicINT;
/*0x19c*/ int                 HeroicWIS;
/*0x1a0*/ int                 HeroicAGI;
/*0x1a4*/ int                 HeroicDEX;
/*0x1a8*/ int                 HeroicSTA;
/*0x1ac*/ int                 HeroicCHA;
/*0x1b0*/ int                 HeroicSvMagic;
/*0x1b4*/ int                 HeroicSvFire;
/*0x1b8*/ int                 HeroicSvCold;
/*0x1bc*/ int                 HeroicSvDisease;
/*0x1c0*/ int                 HeroicSvPoison;
/*0x1c4*/ int                 HeroicSvCorruption;
/*0x1c8*/ int                 HealAmount;
/*0x1cc*/ int                 SpellDamage;
/*0x1d0*/ int                 Prestige;
/*0x1d4*/ uint8_t             ItemClass;                  // eItemClass
/*0x1d8*/ ArmorProperties     ArmorProps;
/*0x1ec*/ ItemSocketData      AugData;
/*0x21c*/ int                 AugType;
/*0x220*/ uint32_t            AugSkinTypeMask;
/*0x224*/ int                 AugRestrictions;
/*0x228*/ int                 SolventItemID;              // ID# of Solvent (Augs only)
/*0x22c*/ uint32_t            LDTheme;
/*0x230*/ int                 LDCost;
/*0x234*/ int                 LDType;
/*0x238*/ int                 Unknown0x0238;
/*0x23c*/ int                 Unknown0x023c;
/*0x240*/ int                 FactionModType[0x4];
/*0x250*/ int                 FactionModValue[0x4];
/*0x260*/ char                CharmFile[32];
/*0x280*/ float               MerchantGreedMod;
/*0x284*/ ItemSpellData       SpellData;
/*0x4f0*/ int                 CombatEffects;
/*0x4f4*/ int                 Shielding;
/*0x4f8*/ int                 StunResist;
/*0x4fc*/ int                 DoTShielding;
/*0x500*/ int                 StrikeThrough;
/*0x504*/ int                 DmgBonusSkill;              // SkillMinDamageMod;
/*0x508*/ int                 DmgBonusValue;              // MinDamageMod;
/*0x50c*/ int                 SpellShield;
/*0x510*/ int                 Avoidance;
/*0x514*/ int                 Accuracy;
/*0x518*/ int                 CharmFileID;
/*0x51c*/ int                 FoodDuration;               // 0-5 snack 6-20 meal 21-30 hearty 31-40 banquet 41-50 feast 51-60 enduring 60- miraculous
/*0x520*/ uint8_t             ContainerType;
/*0x521*/ uint8_t             Slots;
/*0x522*/ uint8_t             SizeCapacity;
/*0x523*/ uint8_t             WeightReduction;
/*0x524*/ uint8_t             BookType;                   // 0=note, !0=book
/*0x525*/ int8_t              BookLang;
/*0x526*/ char                BookFile[30];
/*0x544*/ int                 Favor;                      // Tribute Value
/*0x548*/ int                 GuildFavor;
/*0x54c*/ bool                bIsFVNoDrop;
/*0x550*/ int                 Endurance;
/*0x554*/ int                 Attack;
/*0x558*/ int                 HPRegen;
/*0x55c*/ int                 ManaRegen;
/*0x560*/ int                 EnduranceRegen;
/*0x564*/ int                 Haste;
/*0x568*/ int                 DamShield;
/*0x56c*/ int                 AnimationOverride;
/*0x570*/ int                 PaletteTintIndex;
/*0x574*/ bool                bNoPetGive;
/*0x575*/ bool                bSomeProfile;
/*0x576*/ bool                bPotionBeltAllowed;
/*0x578*/ int                 NumPotionSlots;
/*0x57c*/ int                 SomeIDFlag;
/*0x580*/ int                 StackSize;
/*0x584*/ bool                bNoStorage;
/*0x588*/ int                 MaxPower;
/*0x58c*/ int                 Purity;
/*0x590*/ bool                bIsEpic;
/*0x594*/ int                 RightClickScriptID;
/*0x598*/ int                 ItemLaunchScriptID;
/*0x59c*/ bool                QuestItem;
/*0x59d*/ bool                Expendable;
/*0x5a0*/ int                 Clairvoyance;
/*0x5a4*/ int                 SubClass;
/*0x5a8*/ bool                bLoginRegReqItem;
/*0x5ac*/ int                 Placeable;
/*0x5b0*/ bool                bPlaceableIgnoreCollisions;
/*0x5b4*/ int                 PlacementType;              // todo: this is an enum need to figure out.
/*0x5b8*/ int                 RealEstateDefID;
/*0x5bc*/ float               PlaceableScaleRangeMin;
/*0x5c0*/ float               PlaceableScaleRangeMax;
/*0x5c4*/ int                 RealEstateUpkeepID;
/*0x5c8*/ int                 MaxPerRealEstate;
/*0x5cc*/ char                HousepetFileName[32];
/*0x5ec*/ int                 TrophyBenefitID;
/*0x5f0*/ bool                bDisablePlacementRotation;
/*0x5f1*/ bool                bDisableFreePlacement;
/*0x5f4*/ int                 NpcRespawnInterval;
/*0x5f8*/ float               PlaceableDefScale;
/*0x5fc*/ float               PlaceableDefHeading;
/*0x600*/ float               PlaceableDefPitch;
/*0x604*/ float               PlaceableDefRoll;
/*0x608*/ bool                bInteractiveObject;
/*0x609*/ uint8_t             SocketSubClassCount;
/*0x60c*/ int                 SocketSubClass[10];
/*0x634*/

	EQLIB_OBJECT ItemDefinition();

	// This is actually the item *class* but we used to call it ItemType. Not to be confused with
	// Type in ItemClient.
	inline uint8_t get_ItemType() { return ItemClass; }
	__declspec(property(get = get_ItemType)) uint8_t ItemType;

	inline int GetMinLuck() const { return 0; }
	inline int GetMaxLuck() const { return 0; }

	ItemSpellData::SpellData* GetSpellData(ItemSpellTypes type) { return SpellData.GetSpellData(type); }

	// Moved ITEMSPELLS into ItemSpellData, this provides access to the original members
#define ITEMSPELLS_ACCESSOR(Name) \
	inline ITEMSPELLS& get_##Name() { return *reinterpret_cast<ITEMSPELLS*>(SpellData.GetSpellData(ItemSpellType_ ##Name)); } \
	__declspec(property(get = get_##Name)) ITEMSPELLS Name;

	// Creates something like: ITEMSPELLS Clicky;
	ITEMSPELLS_ACCESSOR(Clicky);
	ITEMSPELLS_ACCESSOR(Proc);
	ITEMSPELLS_ACCESSOR(Worn);
	ITEMSPELLS_ACCESSOR(Focus);
	ITEMSPELLS_ACCESSOR(Scroll);
	ITEMSPELLS_ACCESSOR(Focus2);
	ITEMSPELLS_ACCESSOR(Blessing);

#undef ITEMSPELLS_ACCESSOR

	// No longer have individual keyring effects. But we have code that expects it so just map Keyring to the three old slots.
	inline ITEMSPELLS& get_Mount() { return *reinterpret_cast<ITEMSPELLS*>(SpellData.GetSpellData(ItemSpellType_Blessing)); }
		__declspec(property(get = get_Mount)) ITEMSPELLS Mount;
	inline ITEMSPELLS& get_Illusion() { return *reinterpret_cast<ITEMSPELLS*>(SpellData.GetSpellData(ItemSpellType_Blessing)); }
		__declspec(property(get = get_Illusion)) ITEMSPELLS Illusion;
	inline ITEMSPELLS& get_Familiar() { return *reinterpret_cast<ITEMSPELLS*>(SpellData.GetSpellData(ItemSpellType_Blessing)); }
		__declspec(property(get = get_Familiar)) ITEMSPELLS Familiar;
	inline ITEMSPELLS& get_Keyring() { return *reinterpret_cast<ITEMSPELLS*>(SpellData.GetSpellData(ItemSpellType_Blessing)); }
		__declspec(property(get = get_Familiar)) ITEMSPELLS Keyring;

	inline uint32_t get_SkillMask(int idx) { return SpellData.SkillMask[idx]; }
	__declspec(property(get = get_SkillMask)) uint32_t SkillMask[];

	inline bool IsMagic() const { return Magic; }

	ALT_MEMBER_GETTER_DEPRECATED(bool, IsDroppable, NoDrop, "ItemDefinition.NoDrop is deprecated. Use IsDroppable instead.");
	ALT_MEMBER_GETTER(uint8_t, ContainerType, Combine);

	ALT_MEMBER_ALIAS_DEPRECATED(int, Deity, Diety, "Diety is misspelled, use Deity instead.")
};

SIZE_CHECK(ItemDefinition, ItemDefinition_size);

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

	bool operator==(const EqItemGuid& other) const
	{
		return memcmp(guid, other.guid, GUID_LENGTH - 1) == 0;
	}

	bool operator!=(const EqItemGuid& other) const
	{
		return memcmp(guid, other.guid, GUID_LENGTH - 1) != 0;
	}

	char guid[GUID_LENGTH];

	EQLIB_OBJECT void UnSerialize(CUnSerializeBuffer& buffer);
};

struct ItemEvolutionData;
using ItemEvolutionDataPtr = ItemEvolutionData;

//============================================================================
// ItemBase
//============================================================================

class [[offsetcomments]] ItemBase : public VeBaseReferenceCount, public IChildItemContainer
{
public:
// @start: ItemBase Members
/*0x00c*/ int                   AugFlag;
/*0x010*/ CXStr                 SaveString;
/*0x014*/ int                   Open;
/*0x018*/ unsigned int          ItemHash;
/*0x01c*/ bool                  bCopied;
/*0x020*/ double                EvolvingExpPct;
/*0x028*/ int                   Price;
/*0x02c*/ int                   EvolvingMaxLevel;
/*0x030*/ bool                  bItemNeedsUpdate;
/*0x034*/ unsigned int          LastCastTime;
/*0x038*/ ItemGlobalIndex       GlobalIndex;
/*0x044*/ int                   Charges;
/*0x048*/ unsigned int          NewArmorID;
/*0x04c*/ char                  ActorTag1[30];
/*0x06c*/ int                   NoteStatus;
/*0x070*/ int                   ScriptIndex;
/*0x074*/ bool                  bRealEstateItemPlaceable;
/*0x078*/ uint32_t              RespawnTime;
/*0x07c*/ int                   RealEstateID;
/*0x080*/ int                   NoDropFlag;
/*0x084*/ int                   OrnamentationIcon;
/*0x088*/ ArrayClass<uint32_t>  RealEstateArray;
/*0x098*/ int                   StackCount;
/*0x09c*/ ItemDefinition*       Item1;
/*0x0a0*/ ItemContainer         Contents;
/*0x0d8*/ EqItemGuid            ItemGUID;
/*0x0ec*/ int                   GroupID;
/*0x0f0*/ int                   ArmorType;
/*0x0f4*/ int                   LastEquipped;
/*0x0f8*/ int64_t               MerchantSlot;
/*0x100*/ bool                  bDisableAugTexture;
/*0x101*/ bool                  bRankDisabled;
/*0x104*/ int                   MerchantQuantity;
/*0x108*/ int                   EvolvingCurrentLevel;
/*0x10c*/ bool                  IsEvolvingItem;
/*0x110*/ int                   Power;
/*0x114*/ char                  ActorTag2[30];
/*0x132*/ bool                  EvolvingExpOn;
/*0x134*/ int                   ItemColor;
/*0x138*/ unsigned int          Tint;
/*0x13c*/ int                   ID;
/*0x140*/
// @end: ItemBase Members

	EQLIB_OBJECT ItemBase();

	// ItemClient::`vftable'{for `VeBaseReferenceCount'}
	virtual ~ItemBase() {}
	virtual ItemDefinition* GetItemDefinition() const;
	virtual void SetItemDefinition(ItemDefinition* item);
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
	inline int GetIconID() const { return GetItemDefinition()->IconNumber; }

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
	inline bool IsLoreEquipped(bool bIncludeSockets = false) const { return false; }
	inline int GetLoreGroup() const { return GetItemDefinition()->Lore; }

	inline int GetMoneyValue() const { return GetItemDefinition()->Cost; }
	inline int GetTributeValue() const { return GetItemDefinition()->Favor; }
	inline int GetGuildTributeValue() const { return GetItemDefinition()->GuildFavor; }
	inline int GetPointTheme() const { return GetItemDefinition()->LDTheme; }
	inline int GetPointCost() const { return GetItemDefinition()->LDCost; }
	inline int GetPointType() const { return GetItemDefinition()->LDType; }

	inline int GetDelay() const { return GetItemDefinition()->Delay; }
	inline int GetDamage() const { return GetItemDefinition()->Damage; }
	inline bool CanWear(int slot) const { return (GetItemDefinition()->EquipSlots & (1 << slot)) != 0; }
	inline bool IsWearable() const { return GetItemDefinition()->EquipSlots != 0; }

	EQLIB_OBJECT char* CreateItemTagString(char*, int, bool bFlag);
	EQLIB_OBJECT char* CreateItemTagString(char*, int);

	EQLIB_OBJECT ItemPtr CreateItemClient(CUnSerializeBuffer& buffer);
	EQLIB_OBJECT bool CanDrop(bool bDisplayText = false, bool bIncludeContainedItems = true, bool bAllowOverrideNoDropCheck = false, bool bCantDropIfContainingRealEstate = true) const;
	EQLIB_OBJECT int GetImageNum() const;
	EQLIB_OBJECT int GetItemValue(bool) const;
	EQLIB_OBJECT bool IsKeyRingItem(KeyRingType type) const;
	EQLIB_OBJECT bool CanGoInBag(const ItemPtr& pItem, int unused = 0, bool mustbefalse = false) const;
	EQLIB_OBJECT int CanGemFitInSlot(const ItemPtr& Aug, int Slot, bool bCheckSlot = true, bool bCheckDup = true) const;
	EQLIB_OBJECT int ValueSellMerchant(float, int) const;

	inline bool IsSocketValid(int index)
	{
		if (index >= 0 && index < MAX_AUG_SOCKETS)
		{
			return GetItemDefinition()->AugData.IsSocketValid(index);
		}

		return false;
	}

	// Old modifiers - in the live client these are all now focus/spell effects or heroic stats instead.
	inline int GetAccuracy() const { return GetItemDefinition()->Accuracy; }
	inline int GetAvoidance() const { return GetItemDefinition()->Avoidance; }
	inline int GetCombatEffects() const { return GetItemDefinition()->CombatEffects; }
	inline int GetDamageShieldMitigation() const { return GetItemDefinition()->DamageShieldMitigation; }
	inline int GetDamShield() const { return GetItemDefinition()->DamShield; }
	inline int GetDoTShielding() const { return GetItemDefinition()->DoTShielding; }
	inline int GetShielding() const { return GetItemDefinition()->Shielding; }
	inline int GetSpellShield() const { return GetItemDefinition()->SpellShield; }
	inline int GetStrikeThrough() const { return GetItemDefinition()->StrikeThrough; }
	inline int GetStunResist() const { return GetItemDefinition()->StunResist; }

	// Heroic resists - in the live client these no longer exist
	inline int GetHeroicSvMagic() const { return GetItemDefinition()->HeroicSvMagic; }
	inline int GetHeroicSvFire() const { return GetItemDefinition()->HeroicSvFire; }
	inline int GetHeroicSvCold() const { return GetItemDefinition()->HeroicSvCold; }
	inline int GetHeroicSvDisease() const { return GetItemDefinition()->HeroicSvDisease; }
	inline int GetHeroicSvPoison() const { return GetItemDefinition()->HeroicSvPoison; }
	inline int GetHeroicSvCorruption() const { return GetItemDefinition()->HeroicSvCorruption; }

	// Convertible Item and Collection fields
	inline bool IsCollected() const { return false; }
	inline bool IsConvertible() const { return false; }
	inline int GetConvertItemID() const { return 0; }
	inline CXStr GetConvertItemName() const { return CXStr(); }

	// Luck Accessors
	inline int GetLuck() const { return 0; }
	inline int GetMinLuck() const { return GetItemDefinition()->GetMinLuck(); }
	inline int GetMaxLuck() const { return GetItemDefinition()->GetMaxLuck(); }

	// Helpers for item spells
	ItemSpellData::SpellData* GetSpellData(ItemSpellTypes spellType) { return GetItemDefinition()->GetSpellData(spellType); }
	int GetSpellID(ItemSpellTypes spellType) const { return GetItemDefinition()->GetSpellData(spellType)->SpellID; }
	int GetSpellRecastTime(ItemSpellTypes spellType) const { return GetItemDefinition()->GetSpellData(spellType)->RecastTime;  }

	void UpdateItemDefinition();

	// Compatibility for evolving item data.
	// Exposes the properties as if they are part of an ItemEvolutionData object
	ItemEvolutionData GetEvolvingItemData() const;
	__declspec(property(get = GetEvolvingItemData)) ItemEvolutionDataPtr pEvolutionData;

	// Create ItemEvolutionData. Intended for use with MQ2LinkDB, to create an item that can be used
	// to create an item link from.
	EQLIB_OBJECT void PopulateItemEvolutionData(int maxLevel, int currentLevel, int groupId, int lastEquipped, double expPct);
	EQLIB_OBJECT void ResetItemEvolutionData();

	//----------------------------------------------------------------------------
	// DEPRECATED METHODS

	DEPRECATE("Use GetItemLocation instead of GetGlobalIndex")
	inline const ItemGlobalIndex& GetGlobalIndex() const { return GlobalIndex; }

	DEPRECATE("Use GetItemDefinition() instead of accessing Item2 directly")
	inline ItemDefinition* get_Item2() { return GetItemDefinition(); }
	__declspec(property(get = get_Item2)) ItemDefinition* Item2;
};

// @sizeof(ItemClient) == 0x150 :: 2013-05-10 (emu) @ 0x5559BE
constexpr size_t ItemClient_size = 0x150;

class [[offsetcomments]] ItemClient : public ItemBase
{
	FORCE_SYMBOLS;

public:
	EQLIB_OBJECT ItemClient();
	EQLIB_OBJECT virtual ~ItemClient();

	virtual ItemDefinition* GetItemDefinition() const override;

	EQLIB_OBJECT static ItemPtr Create();

/*0x140*/ int               Padding0x140;
/*0x144*/ ItemDefinitionPtr SharedItemDef;
/*0x14c*/ CXStr             ClientString;
/*0x150*/
};

SIZE_CHECK(ItemClient, ItemClient_size);

//----------------------------------------------------------------------------

// this struct is a shim that simulates an ItemEvolutionData struct as it appears
// in a more modern client.
struct ItemEvolutionData
{
	ItemEvolutionData(const ItemPtr& item)
		: m_item(item) {}

	ItemEvolutionData* operator->() { return this; }
	const ItemEvolutionData* operator->() const { return this; }

	explicit operator bool() const { return m_item != nullptr; }
	bool operator==(nullptr_t) { return m_item == nullptr; }
	bool operator!=(nullptr_t) { return m_item != nullptr; }

	// int GroupID
	inline int get_EvolvingGroupID() { return m_item ? m_item->GroupID : 0; }
	__declspec(property(get = get_EvolvingGroupID)) int GroupID;

	// int EvolvingCurrentLevel
	inline int get_EvolvingCurrentLevel() { return m_item ? m_item->EvolvingCurrentLevel : 0; }
	__declspec(property(get = get_EvolvingCurrentLevel)) int EvolvingCurrentLevel;

	// double EvolvingExpPct
	inline double get_EvolvingExpPct() { return m_item ? m_item->EvolvingExpPct : 0.0; }
	__declspec(property(get = get_EvolvingExpPct)) double EvolvingExpPct;

	// int EvolvingMaxLevel
	inline int get_EvolvingMaxLevel() { return m_item ? m_item->EvolvingMaxLevel : 0; }
	__declspec(property(get = get_EvolvingMaxLevel)) int EvolvingMaxLevel;

	// int LastEquipped
	inline int get_LastEquipped() { return m_item ? m_item->LastEquipped : 0; }
	__declspec(property(get = get_LastEquipped)) int LastEquipped;

private:
/*0x00*/ ItemPtr m_item;
/*0x04*/
};

inline ItemEvolutionData ItemBase::GetEvolvingItemData() const
{
	return ItemEvolutionData{ ItemPtr((ItemClient*)this) };
}

//----------------------------------------------------------------------------

inline namespace deprecated {

using EQ_Item DEPRECATE("Use ItemClient instead (or make sure the conversion is even necessary)") = ItemClient;

// 20101012 - ieatacid
struct [[offsetcomments]] INVENTORY
{
/*0x00*/ ItemClient* Charm;
/*0x04*/ ItemClient* LeftEar;
/*0x08*/ ItemClient* Head;
/*0x0c*/ ItemClient* Face;
/*0x10*/ ItemClient* RightEar;
/*0x14*/ ItemClient* Neck;
/*0x18*/ ItemClient* Shoulders;
/*0x1c*/ ItemClient* Arms;
/*0x20*/ ItemClient* Back;
/*0x24*/ ItemClient* LeftWrist;
/*0x28*/ ItemClient* RightWrist;
/*0x2c*/ ItemClient* Range;
/*0x30*/ ItemClient* Hands;
/*0x34*/ ItemClient* Primary;
/*0x38*/ ItemClient* Secondary;
/*0x3c*/ ItemClient* LeftFinger;
/*0x40*/ ItemClient* RightFinger;
/*0x44*/ ItemClient* Chest;
/*0x48*/ ItemClient* Legs;
/*0x4c*/ ItemClient* Feet;
/*0x50*/ ItemClient* Waist;
/*0x54*/ ItemClient* PowerSource;
/*0x58*/ ItemClient* Ammo;
/*0x5c*/ ItemClient* Pack[NUM_BAG_SLOTS];
/*0x84*/ ItemClient* Cursor;
/*0x88*/
};

using PINVENTORY DEPRECATE("Use INVENTORY* instead of PINVENTORY") = INVENTORY*;

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
		ItemClient* InventoryArray[InvSlot_Max];

#pragma warning(default: 4996)
};
using PINVENTORYARRAY DEPRECATE("Use INVENTORYARRAY* Instead of PINVENTORYARRAY") = INVENTORYARRAY*;

// offsets are relative to their position in LAUNCHSPELLDATA
struct [[offsetcomments]] ITEMLOCATION
{
	FORCE_SYMBOLS

	/*0x00*/ ItemContainerInstance Location DEPRECATE("Use ItemGlobalIndex");
	/*0x04*/ short InvSlot DEPRECATE("Use ItemGlobalIndex");
	/*0x06*/ short BagSlot DEPRECATE("Use ItemGlobalIndex");
	/*0x08*/ short AugSlot DEPRECATE("Use ItemGlobalIndex");
	/*0x0c*/
};
using PITEMLOCATION DEPRECATE("Use ItemGlobalIndex instead of ITEMLOCATION") = ITEMLOCATION*;

} // end inline namespace deprecated

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

//============================================================================

class MultipleItemMoveManager
{
public:
	enum ErrorCodes
	{
		ErrorOk                                  = 0,
	};

	enum MoveItemFlags
	{
		MoveItemFlagNone               = 0x00,
		MoveItemFlagSwapEnabled        = 0x01,        // allow item swapping when moving items
	};

	enum MoveSearchOptions
	{
		MoveSearchOptionNone,          // don't try to find an item slot
	};

	struct MoveItem
	{
	/*0x00*/ ItemGlobalIndex        from;
	/*0x0c*/ ItemGlobalIndex        to;
	/*0x18*/ int                    count = 0;
	/*0x1c*/ int                    flags = 0;
	/*0x20*/ MoveSearchOptions      searchOptions = MoveSearchOptionNone;
	/*0x24*/
	};

	using MoveItemArray = ArrayClass2<MoveItem>;

	// Moves items between slots. Performs some validation. Other validations are
	// performed by the server so avoid calling this without being absolutely sure what you're doing.
	static EQLIB_OBJECT ErrorCodes ProcessMove(PcZoneClient* pPC, const MoveItemArray& moveItemList,
		bool sendMoves = true, bool clientInitiated = true);
};

} // namespace eqlib
