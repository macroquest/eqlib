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

using ItemArray = VeArray<ItemPtr>;

class ItemContainer
{
public:
	using iterator = ItemArray::iterator;
	using const_iterator = ItemArray::const_iterator;

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

enum eItemSpellType
{
	ItemSpellType_Clicky = 0,
	ItemSpellType_Proc,
	ItemSpellType_Worn,
	ItemSpellType_Focus,
	ItemSpellType_Scroll,
	ItemSpellType_Focus2,
	ItemSpellType_Mount,
	ItemSpellType_Illusion,
	ItemSpellType_Familiar,

	ItemSpellType_Max,
};

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

class ItemSpellData
{
public:
	struct SpellData
	{
		int                   SpellID;
		uint8_t               RequiredLevel;
		eItemEffectType       EffectType;
		int                   EffectiveCasterLevel;
		int                   MaxCharges;
		int                   CastTime;
		int                   RecastTime;
		int                   RecastType;
		int                   ProcRate;
		char                  OverrideName[64];            // name override
		int                   OverrideDesc;                // override description id

		EQLIB_OBJECT SpellData();
		EQLIB_OBJECT void Reset();

		inline int get_TimerID() const { return RecastTime; }
		__declspec(property(get = get_TimerID)) int TimerID;
	};

	SpellData Spells[ItemSpellType_Max];
	uint32_t  SkillMask[5];               // bit field for each skill required to use

	// Convenience accessors
	inline int GetSpellId(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].SpellID : 0; }
	inline uint8_t GetSpelllRequiredLevel(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].RequiredLevel : 0; }
	inline eItemEffectType GetSpellEffectType(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].EffectType : ItemEffectProc; }
	inline int GetSpellEffectiveCasterLevel(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].EffectiveCasterLevel : 0; }
	inline int GetSpellMaxCharges(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].MaxCharges : 0; }
	inline int GetSpellCastTime(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].CastTime : 0; }
	inline int GetSpellRecastTime(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].RecastTime : 0; }
	inline int GetSpellRecastType(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].RecastType : 0; }
	inline int GetSpellChanceProc(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].ProcRate : 0; }
	inline const char* GetOverrideName(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].OverrideName : ""; }
	inline int GetOverrideDesc(eItemSpellType type) const { return type < ItemSpellType_Max ? Spells[type].OverrideDesc : 0; }
	inline SpellData* GetSpellData(eItemSpellType type) { return type < ItemSpellType_Max ? &Spells[type] : nullptr; }

	EQLIB_OBJECT ItemSpellData();
	EQLIB_OBJECT void Reset();
};

//----------------------------------------------------------------------------

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

	inline void Reset()
	{
		for (auto& socket : Sockets)
		{
			socket.Type = 0;
			socket.bVisible = false;
			socket.bInfusible = false;
		}
	}
};

// ItemDefinition class
// to check this look at ItemBase__ResetItemInstance_x
// actual size: 0x704 Nov  6 2018 Test (see 63F00F)
// actual size: 0x70c Oct 31 2018 Beta (see 7291CC)
class [[offsetcomments]] ItemDefinition
{
public:
/*0x000*/ char                Name[ITEM_NAME_LEN];
/*0x040*/ char                LoreName[LORE_NAME_LEN];
/*0x090*/ char                AdvancedLoreName[32];
/*0x0b0*/ int                 IDFile;
/*0x0b4*/ int                 IDFile2;
/*0x0b8*/ int                 ItemNumber;                        // recordnum
/*0x0bc*/ int                 EquipSlots;                        // its position, where it can be equipped
/*0x0c0*/ int                 Cost;
/*0x0c4*/ int                 IconNumber;
/*0x0c8*/ uint8_t             eGMRequirement;                    // this is an unmapped enum
/*0x0c9*/ bool                bPoofOnDeath;
/*0x0cc*/ int                 Weight;
/*0x0d0*/ bool                NoRent;                            // 0=temp, 1=default
/*0x0d1*/ bool                NoDrop;                            // 0=no drop, 1=can drop
/*0x0d2*/ bool                Attuneable;
/*0x0d3*/ bool                Heirloom;
/*0x0d4*/ bool                Collectible;
/*0x0d5*/ bool                NoDestroy;
/*0x0d6*/ bool                bNoNPC;
/*0x0d7*/ bool                NoZone;
/*0x0d8*/ int                 MakerID;                           // 0-?? I did up to 12, I think it asks server for the name see 883655 in 11 jun 2018 test - eqmule
/*0x0dc*/ bool                NoGround;                          // 88607E 11 jun 2018 test
/*0x0dd*/ bool                bNoLoot;
/*0x0de*/ bool                MarketPlace;                       // 886F85 11 jun 2018 test
/*0x0df*/ bool                bFreeSlot;                         // 885565 11 jun 2018 test
/*0x0e0*/ bool                bAutoUse;                          // 885865 11 jun 2018 test
/*0x0e4*/ int                 Unknown0x0e4;
/*0x0e8*/ uint8_t             Size;                              // 884920 11 jun 2018 test
/*0x0e9*/ uint8_t             Type;                              // 884BA5 11 jun 2018 test
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
/*0x150*/ uint32_t            MaterialTintIndex;
/*0x154*/ bool                Magic;
/*0x155*/ uint8_t             Light;                      // 884045 jun 11 2018 test
/*0x156*/ uint8_t             Delay;
/*0x157*/ uint8_t             ElementalFlag;              // used to be called DmgBonusType;
/*0x158*/ uint8_t             ElementalDamage;            // used to be called DmgBonusVal
/*0x159*/ uint8_t             Range;
/*0x15c*/ int                 Damage;                     // BaseDamage
/*0x160*/ int                 BackstabDamage;
/*0x164*/ int                 HeroicSTR;
/*0x168*/ int                 HeroicINT;                  // 883A30 jun 11 2018 test
/*0x16c*/ int                 HeroicWIS;                  // 883A90 jun 11 2018 test
/*0x170*/ int                 HeroicAGI;                  // 8839D0 jun 11 2018 test
/*0x174*/ int                 HeroicDEX;
/*0x178*/ int                 HeroicSTA;                  // 883A50 jun 11 2018 test
/*0x17c*/ int                 HeroicCHA;                  // 8839F0 jun 11 2018 test
/*0x180*/ int                 HealAmount;                 // 883980 jun 11 2018 test
/*0x184*/ int                 SpellDamage;
/*0x188*/ int                 MinLuck;
/*0x18c*/ int                 MaxLuck;
/*0x190*/ int                 Prestige;                   // 884816 jun 11 2018 test
/*0x194*/ uint8_t             ItemClass;
/*0x198*/ ArmorProperties     ArmorProps;                 // size is 0x14
/*0x1ac*/ ItemSocketData      AugData;
/*0x1dc*/ int                 AugType;
/*0x1e0*/ uint32_t            AugSkinTypeMask;
/*0x1e4*/ int                 AugRestrictions;
/*0x1e8*/ int                 SolventItemID;              // ID# of Solvent (Augs only)
/*0x1ec*/ uint32_t            LDTheme;
/*0x1f0*/ int                 LDCost;
/*0x1f4*/ int                 LDType;
/*0x1f8*/ int                 PointBuyBackPercent;
/*0x1fc*/ int                 NeedAdventureCompleted;
/*0x200*/ char                CharmFile[32];
/*0x220*/ float               MerchantGreedMod;
/*0x224*/ ItemSpellData       SpellData;
/*0x5bc*/ int                 DmgBonusSkill;              // SkillMinDamageMod;
/*0x5c0*/ int                 DmgBonusValue;              // MinDamageMod;
/*0x5c4*/ int                 CharmFileID;
/*0x5c8*/ int                 FoodDuration;               // 0-5 snack 6-20 meal 21-30 hearty 31-40 banquet 41-50 feast 51-60 enduring 60- miraculous
/*0x5cc*/ uint8_t             Combine;                    // ContainerType
/*0x5cd*/ uint8_t             Slots;
/*0x5ce*/ uint8_t             SizeCapacity;
/*0x5cf*/ uint8_t             WeightReduction;
/*0x5d0*/ uint8_t             BookType;                   // 0=note, !0=book 884CF5 jun 11 2018 test
/*0x5d1*/ int8_t              BookLang;
/*0x5d2*/ char                BookFile[30];
/*0x5f0*/ int                 Favor;                      // Tribute Value
/*0x5f4*/ int                 GuildFavor;
/*0x5f8*/ bool                bIsFVNoDrop;
/*0x5fc*/ int                 Endurance;
/*0x600*/ int                 Attack;
/*0x604*/ int                 HPRegen;
/*0x608*/ int                 ManaRegen;
/*0x60c*/ int                 EnduranceRegen;
/*0x610*/ int                 Haste;
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
/*0x640*/ bool                QuestItem;
/*0x641*/ bool                Expendable;
/*0x644*/ int                 Clairvoyance;
/*0x648*/ int                 SubClass;
/*0x64c*/ bool                bLoginRegReqItem;
/*0x650*/ int                 Placeable;
/*0x654*/ bool                bPlaceableIgnoreCollisions;
/*0x658*/ int                 PlacementType;              // todo: this is an enum need to figure out.
/*0x65c*/ int                 RealEstateDefID;
/*0x660*/ float               PlaceableScaleRangeMin;
/*0x664*/ float               PlaceableScaleRangeMax;
/*0x668*/ int                 RealEstateUpkeepID;
/*0x66c*/ int                 MaxPerRealEstate;
/*0x670*/ char                HousepetFileName[32];
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
/*0x6b0*/ int                 SocketSubClass[10];
/*0x6d8*/

	EQLIB_OBJECT ItemDefinition();

	// This is actually the item *class* but we used to call it ItemType. Not to be confused with
	// Type in ItemClient.
	inline uint8_t get_ItemType() { return ItemClass; }
	__declspec(property(get = get_ItemType)) uint8_t ItemType;

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
	ITEMSPELLS_ACCESSOR(Mount);
	ITEMSPELLS_ACCESSOR(Illusion);
	ITEMSPELLS_ACCESSOR(Familiar);

#undef ITEMSPELLS_ACCESSOR

	inline uint32_t get_SkillMask(int idx) { return SpellData.SkillMask[idx]; }
	__declspec(property(get = get_SkillMask)) uint32_t SkillMask[];
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
/*0x18*/
};
using ItemEvolutionDataPtr = SoeUtil::SharedPtr<ItemEvolutionData>;

//============================================================================
// ItemBase
//============================================================================

class [[offsetcomments]] ItemBase : public VeBaseReferenceCount, public IChildItemContainer
{
public:
// @start: ItemBase Members
/*0x0c*/ CXStr                 SaveString;
/*0x10*/ int                   ID;
/*0x14*/ int                   ArmorType;
/*0x18*/ int                   Open;
/*0x1c*/ CXStr                 ActorTag1;
/*0x20*/ int                   Charges;
/*0x24*/ int                   Power;
/*0x28*/ int64_t               DontKnow;
/*0x30*/ bool                  bRankDisabled;
/*0x31*/ EqItemGuid            ItemGUID;
/*0x44*/ int                   ConvertItemID;
/*0x48*/ int                   ScriptIndex;
/*0x4c*/ unsigned int          LastCastTime;
/*0x50*/ bool                  bCollected;
/*0x54*/ CXStr                 ActorTag2;
/*0x58*/ int                   NoDropFlag;
/*0x60*/ int64_t               Price;
/*0x68*/ ITEMINFO*             Item1;
/*0x6c*/ ItemContainer         Contents;
/*0x88*/ int                   RealEstateID;
/*0x8c*/ int                   NoteStatus;
/*0x90*/ bool                  bConvertable;
/*0x94*/ unsigned int          Tint;
/*0x98*/ ItemEvolutionDataPtr  pEvolutionData;
/*0xa0*/ ArrayClass<uint32_t>  RealEstateArray;
/*0xb0*/ int                   OrnamentationIcon;
/*0xb8*/ int64_t               MerchantSlot;
/*0xc0*/ unsigned int          RespawnTime;
/*0xc4*/ bool                  bItemNeedsUpdate;
/*0xc8*/ int                   AugFlag;
/*0xcc*/ ItemGlobalIndex       GlobalIndex;
/*0xd8*/ CXStr                 ConvertItemName;
/*0xdc*/ unsigned int          NewArmorID;
/*0xe0*/ int                   MerchantQuantity;
/*0xe4*/ unsigned int          ItemHash;
/*0xe8*/ bool                  bDisableAugTexture;
/*0xe9*/ bool                  bRealEstateItemPlaceable;
/*0xec*/ int                   Luck;
/*0xf0*/ bool                  bCopied;
/*0xf4*/ int                   StackCount;
/*0xf8*/
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

	void UpdateItemDefinition();

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
	EQLIB_OBJECT ItemClient();
	EQLIB_OBJECT virtual ~ItemClient();

	virtual ItemDefinition* GetItemDefinition() const override;

/*0x0f8*/ ItemDefinitionPtr SharedItemDef;
/*0x100*/ CXStr             ClientString;
/*0x104*/ uint8_t           Filler0x010c[0x4];
/*0x108*/
};

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
		ItemGlobalIndex        from;
		ItemGlobalIndex        to;
		int                    count = 0;
		int                    flags = 0;
		MoveSearchOptions      searchOptions = MoveSearchOptionNone;
	};

	using MoveItemArray = ArrayClass2<MoveItem>;

	// Moves items between slots. Performs some validation. Other validations are
	// performed by the server so avoid calling this without being absolutely sure what you're doing.
	static EQLIB_OBJECT ErrorCodes ProcessMove(PcZoneClient* pPC, const MoveItemArray& moveItemList,
		bool sendMoves = true, bool clientInitiated = true);
};

} // namespace eqlib
