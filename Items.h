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

constexpr int ITEM_NAME_LEN = 64;
constexpr int LORE_NAME_LEN = 80;

constexpr int NUM_INV_SLOTS = 33;
constexpr int NUM_BANK_SLOTS = 24;
constexpr int NUM_BAG_SLOTS = 10;
constexpr int NUM_WORN_ITEMS = 21;
constexpr int NUM_SHAREDBANK_SLOTS = 6;
constexpr int MAX_KEYRINGITEMS = 27; // not really sure need to confirm this

#if 0 // to be enabled when compatible
class ItemClient;
using CONTENTS = ItemClient;
using CONTENTS* = ItemClient *;
#endif

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
	eItemContainerCursor                         = 33,

	eNumItemContainers                           = 34,
};

enum ItemClass
{
	eItemClass_Mount                             = 68,
	eItemClass_Illusion                          = 69,
	eItemClass_Familiar                          = 70,
};

// BAD - DO NOT USE
struct ITEMBASEARRAY;

class [[offsetcomments]] ItemArray
{
public:
/*0x00*/ ITEMBASEARRAY* pItems;
/*0x04*/ size_t         Size;
/*0x08*/ unsigned int   Capacity;
/*0x0c*/
};

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

	EQLIB_OBJECT ItemIndex& operator=(const ItemIndex& other)
	{
		memcpy(m_slots, &other.m_slots, sizeof(m_slots));
		return *this;
	}

	EQLIB_OBJECT bool operator==(const ItemIndex& other) const
	{
		return m_slots[0] == other.m_slots[0]
			&& m_slots[1] == other.m_slots[1]
			&& m_slots[2] == other.m_slots[2];
	}

	EQLIB_OBJECT short GetTopSlot() const { return m_slots[0]; }

	EQLIB_OBJECT void SetSlot(int depth, short value)
	{
		if (depth < MAX_INVENTORY_DEPTH)
			m_slots[depth] = value;
	}

	EQLIB_OBJECT short GetSlot(int depth) const
	{
		if (depth < MAX_INVENTORY_DEPTH)
			return m_slots[depth];

		return -1;
	}

	EQLIB_OBJECT short& operator[](int slot) { return m_slots[slot]; }

	EQLIB_OBJECT bool IsValid() const { return m_slots[0] != -1; }
	EQLIB_OBJECT bool IsBase() const { return m_slots[0] != -1 && m_slots[1] == -1; }
	EQLIB_OBJECT bool IsInContainer() const { return m_slots[0] != -1 && m_slots[1] != -1; }

	// Remote one depth to get index representing whatever the parent is.
	EQLIB_OBJECT ItemIndex GetParentIndex() const
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

	// alias for existing bad code
	__declspec(property(get = getSlot1, put = setSlot1)) int Slot1;
	__declspec(property(get = getSlot2, put = setSlot2)) int Slot2;
	__declspec(property(get = getSlot3, put = setSlot3)) int Slot3;

	[[deprecated]] EQLIB_OBJECT int getSlot1() const { return m_slots[0]; }
	[[deprecated]] EQLIB_OBJECT void setSlot1(int v) { m_slots[0] = v; }
	[[deprecated]] EQLIB_OBJECT int getSlot2() const { return m_slots[1]; }
	[[deprecated]] EQLIB_OBJECT void setSlot2(int v) { m_slots[1] = v; }
	[[deprecated]] EQLIB_OBJECT int getSlot3() const { return m_slots[2]; }
	[[deprecated]] EQLIB_OBJECT void setSlot3(int v) { m_slots[2] = v; }
};

class [[offsetcomments]] ItemGlobalIndex
{
public:
/*0x00*/ ItemContainerInstance Location = eItemContainerInvalid;
/*0x04*/ ItemIndex Index;
/*0x0c*/

	EQLIB_OBJECT ItemGlobalIndex() = default;
	EQLIB_OBJECT ItemGlobalIndex(const ItemGlobalIndex& other)
		: Location(other.Location)
		, Index(other.Index)
	{}

	EQLIB_OBJECT bool operator==(const ItemGlobalIndex& other)
	{
		return Location == other.Location && Index == other.Index;
	}

	EQLIB_OBJECT void SetLocation(ItemContainerInstance location) { Location = location; }
	EQLIB_OBJECT ItemContainerInstance GetLocation() const { return Location; }

	EQLIB_OBJECT void SetIndex(const ItemIndex& index) { Index = index; }
	EQLIB_OBJECT ItemIndex& GetIndex() { return Index; }
	EQLIB_OBJECT const ItemIndex& GetIndex() const { return Index; }

	EQLIB_OBJECT short GetTopSlot() const { return GetIndex().GetTopSlot(); }

	EQLIB_OBJECT ItemGlobalIndex GetParent() const
	{
		ItemGlobalIndex copy = *this;

		copy.Index = copy.Index.GetParentIndex();
		return copy;
	}

	EQLIB_OBJECT bool IsKeyRingLocation() const
	{
		return Location == eItemContainerMountKeyRingItems
			|| Location == eItemContainerIllusionKeyRingItems
			|| Location == eItemContainerFamiliarKeyRingItems;
	}

	EQLIB_OBJECT bool IsEquippedLocation() const
	{
		return Location == eItemContainerPossessions
			&& Index.IsBase()
			&& Index.GetTopSlot() <= 22;
	}

	EQLIB_OBJECT bool IsValidIndex() const
	{
		return IsValidLocation() && Index.IsValid();
	}

	EQLIB_OBJECT bool IsValidLocation() const
	{
		return Location >= 0 && Location < eNumItemContainers;
	}
};

//----------------------------------------------------------------------------

class ItemContainer
{
public:
	using ItemPointer = VePointer<CONTENTS>;
	using ItemArray = VeArray<ItemPointer>;

	using iterator = typename ItemArray::iterator;
	using const_iterator = typename ItemArray::const_iterator;

	inline iterator begin() { return Items.begin(); }
	inline const_iterator begin() const { return m_items.begin(); }
	inline const_iterator cbegin() const { return m_items.cbegin(); }
	inline iterator end() { return Items.end(); }
	inline const_iterator end() const { return m_items.end(); }
	inline const_iterator cend() const { return m_items.cend(); }

	bool IsValidRange(const_iterator a, const_iterator b);

	EQLIB_OBJECT ItemIndex CreateItemIndex(int slot0, int slot1 = -1, int slot2 = -1) const;

	inline ItemContainerInstance GetContainerType() const { return m_type; }
	inline int GetAtDepth() const { return m_atDepth; } // depth of this container within a parent container

	EQLIB_OBJECT bool IsEmpty() const;
	EQLIB_OBJECT bool IsValidIndex(const ItemIndex& index) const;

	//
	// functions used for visiting items in the container
	//

	// Visitor functions take the form of: void Visitor(const VePointer<ItemClient>&, const ItemIndex& location)

	// Visit a specified range and depth
	template <typename Visitor>
	Visitor VisitItems(int beginSlot, int endSlot, int depth, Visitor visitor)
	{
		ItemIndex cursor = CreateItemIndex(std::max(0, beginSlot));
		return VisitItemsImpl(beginSlot, endSlot, depth, cursor, visitor);
	}

	// Visit to a specified depth
	template <typename Visitor>
	Visitor VisitItems(int depth, Visitor visitor)
	{
		ItemIndex cursor = CreateItemIndex(0);
		return VisitItemsImpl(-1, -1, depth, cursor, visitor);
	}

	// Visit Everything
	template <typename Visitor>
	Visitor VisitItems(Visitor visitor)
	{
		ItemIndex cursor = CreateItemIndex(0);
		return VisitItemsImpl(-1, -1, -1, cursor, visitor);
	}

private:
	template <typename Visitor>
	Visitor& VisitItemsImpl(int beginSlot, int endSlot, int depth, ItemIndex& cursor, Visitor& visitor)
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
			const ItemPointer& ptr = *iter;

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
	// functions used for search for a single item
	//

	// Predicate functions take the form of: bool Predicate(const VePointer<ItemClient>&, const ItemIndex& location)
	// for convenience, some predicates are provided below the definition of ItemContainer

	// Find a specified range and depth
	template <typename Predicate>
	ItemIndex FindItem(int beginSlot, int endSlot, int depth, Predicate visitor)
	{
		ItemIndex cursor = CreateItemIndex(std::max(0, beginSlot));
		return FindItemImpl(beginSlot, endSlot, depth, cursor, visitor);
	}

	// Find to a specified depth
	template <typename Predicate>
	ItemIndex FindItem(int depth, Predicate visitor)
	{
		ItemIndex cursor = CreateItemIndex(0);
		return FindItemImpl(-1, -1, depth, cursor, visitor);
	}

	// Find in everything
	template <typename Predicate>
	ItemIndex FindItem(Predicate visitor)
	{
		ItemIndex cursor = CreateItemIndex(0);
		return FindItemImpl(-1, -1, -1, cursor, visitor);
	}

private:
	template <typename Predicate>
	ItemIndex FindItemImpl(int beginSlot, int endSlot, int depth, ItemIndex& cursor, Predicate& predicate)
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
			const ItemPointer& ptr = *iter;

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
	// Retrieve an item at a specific index in this container
	EQLIB_OBJECT ItemPointer GetItem(int index) const;

	// Retrieve an item with its item index
	EQLIB_OBJECT ItemPointer GetItem(const ItemIndex& index) const;

	// A visitor to count the number of items.
	struct ItemCountVisitor
	{
		void operator() (const ItemPointer&, const ItemIndex&) { ++m_count;  }
		uint32_t GetCount() const { return m_count; }

	private:
		uint32_t m_count = 0;
	};

	// Retrieves the size of the container. Not every slot may have an item in it.
	EQLIB_OBJECT uint32_t GetSize(int depth = 0) const;

	// Retrieves the number of items in the container.
	inline uint32_t GetCount(int depth = 0) const
	{
		ItemContainer* container = const_cast<ItemContainer*>(this);
		return container->VisitItems(depth, ItemCountVisitor()).GetCount();
	}

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
};

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

inline bool ItemContainer::IsValidRange(const_iterator a, const_iterator b)
{
	// make sure the range is valid -- a comes before b, and both come before end.
	// based on thel ogic of the previous helper functions, we shouldn't ever be
	// before begin, so no use checking for it.
	return a < b && a <= end() && b <= end();
}

//----------------------------------------------------------------------------

class IChildItemContainer
{
public:
	virtual ItemContainer* GetChildItemContainer() = 0;
	virtual const ItemContainer* GetChildItemContainer() const = 0;
	virtual VePointer<CONTENTS> CreateCopy() const = 0;
	virtual void SetItemLocation(ItemContainerInstance container, const ItemIndex& index) = 0;
};

//----------------------------------------------------------------------------

class ItemBaseContainer : public ItemContainer
{
public:

	// deprecated accessors
	ALT_MEMBER_GETTER_DEPRECATED(uint32_t, m_size, ContentSize, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(int, m_type, ItemLocation, "Use GetContainerType() instead");
	ALT_MEMBER_GETTER_DEPRECATED(eqlib::ItemArray, m_items, ContainedItems, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(short, m_slots[0], ItemSlot, "Use the helpers in ItemContainer instead of directly accessing the item storage");
	ALT_MEMBER_GETTER_DEPRECATED(short, m_slots[1], ItemSlot2, "Use the helpers in ItemContainer instead of directly accessing the item storage");
};

using ItemBaseContainer2 DEPRECATE("Use ItemBaseContainer instead") = ItemBaseContainer;

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
/*0x00*/ DWORD SpellID;
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

struct [[offsetcomments]] AugSocket
{
/*0x00*/ int Type;
/*0x04*/ bool bVisible;
/*0x05*/ bool bInfusible;
/*0x08*/
};

#define MAX_AUG_SOCKETS 6

class ItemSocketData
{
public:
	AugSocket Sockets[MAX_AUG_SOCKETS];
};


// ItemDefinition class
// to check this look at ItemBase__ResetItemInstance_x
// actual size: 0x704 Nov  6 2018 Test (see 63F00F)
// actual size: 0x70c Oct 31 2018 Beta (see 7291CC)
struct [[offsetcomments]] ITEMINFO
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
/*0x194*/ BYTE                ItemType;
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
/*0x5cc*/ BYTE                Combine;
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
};
using PITEMINFO = ITEMINFO*;

class EqItemGuid
{
public:
	enum { GUID = 18 };

	EqItemGuid()
	{
		memset(guid, 0, sizeof(guid));
	}

	char guid[GUID];

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

class [[offsetcomments]] ItemBase
{
public:
/*0x00*/ void* vtable;

	// base class member - reference count
/*0x04*/ mutable int  RefCount;
	// base class vftable
/*0x08*/ void* punknown;

// @start: ItemBase Members
/*0x0c*/ bool               bRankDisabled;
/*0x10*/ CXStr              ActorTag2;
/*0x14*/ int                ID;
/*0x18*/ bool               bCollected;
/*0x1c*/ int                RealEstateID;
/*0x20*/ bool               bCopied;
/*0x24*/ CXStr              ActorTag1;
/*0x28*/ ItemEvolutionDataPtr pEvolutionData;
/*0x30*/ int64_t            DontKnow;
/*0x38*/ unsigned int       NewArmorID;
/*0x40*/ int64_t            Price;
/*0x48*/ int                NoteStatus;
/*0x4c*/ int                StackCount;
/*0x50*/ int                Power;
/*0x54*/ ItemBaseContainer  Contents;                    // Size is 0x1c
/*0x70*/ bool               bDisableAugTexture;
/*0x71*/ bool               bRealEstateItemPlaceable;
/*0x72*/ bool               bConvertable;
/*0x74*/ unsigned int       ItemHash;
/*0x78*/ EqItemGuid         ItemGUID;
/*0x8c*/ unsigned int       Tint;
/*0x90*/ ITEMINFO*          Item1;
/*0x94*/ int                MerchantQuantity;
/*0x98*/ bool               bItemNeedsUpdate;
/*0x9c*/ unsigned int       LastCastTime;
/*0xa0*/ int                AugFlag;
/*0xa4*/ int                ArmorType;
/*0xa8*/ ArrayClass<uint32_t> RealEstateArray;
/*0xb8*/ int                Charges;
/*0xbc*/ int                ScriptIndex;
/*0xc0*/ int                ConvertItemID;
/*0xc8*/ int64_t            MerchantSlot;
/*0xd0*/ int                NoDropFlag;
/*0xd4*/ int                OrnamentationIcon;
/*0xd8*/ CXStr              SaveString;
/*0xdc*/ int                Open;
/*0xe0*/ unsigned int       RespawnTime;
/*0xe4*/ int                Luck;
/*0xe8*/ ItemGlobalIndex    GlobalIndex;                 // Size is 0xa (0xc)
/*0xf4*/ CXStr              ConvertItemName;
/*0xf8*/
// @end: ItemBase Members

	EQLIB_OBJECT bool IsLore(bool bIncludeSockets = false) const;
	EQLIB_OBJECT bool IsLoreEquipped(bool bIncludeSockets = false) const;
};

// Actual Size: 0x158 (see 0x611DAC in eqgame.exe Test dated Jun 10 2019)
class [[offsetcomments]] ItemClient : public ItemBase
{
	FORCE_SYMBOLS;

public:
	// Reference counted pointer to ItemDefinition
/*0x0f8*/ DWORD        Item2RefCnt;
/*0x0fc*/ ITEMINFO*    Item2;
/*0x100*/ CXStr        ClientString;
/*0x104*/

	EQLIB_OBJECT ItemClient* GetContent(uint32_t index);
	EQLIB_OBJECT ItemGlobalIndex GetGlobalIndex() const;
};

//============================================================================
// CONTENTS
// This is ItemClient/ItemBase
//============================================================================

// Actual Size: 0x160 (see 0x62856C in eqgame.exe Live dated Dec 19 2019)
struct [[offsetcomments]] CONTENTS : public VeBaseReferenceCount, public IChildItemContainer
{
// @start: ItemBase Members
/*0x00c*/ bool               bRankDisabled;
/*0x010*/ CXStr              ActorTag2;
/*0x014*/ int                ID;
/*0x018*/ bool               bCollected;
/*0x01c*/ int                RealEstateID;
/*0x020*/ bool               bCopied;
/*0x024*/ CXStr              ActorTag1;
/*0x028*/ ItemEvolutionDataPtr pEvolutionData;
/*0x030*/ int64_t            DontKnow;
/*0x038*/ unsigned int       NewArmorID;
/*0x040*/ int64_t            Price;
/*0x048*/ int                NoteStatus;
/*0x04c*/ int                StackCount;
/*0x050*/ int                Power;
/*0x054*/ ItemBaseContainer  Contents;
/*0x070*/ bool               bDisableAugTexture;
/*0x071*/ bool               bRealEstateItemPlaceable;
/*0x072*/ bool               bConvertable;
/*0x074*/ unsigned int       ItemHash;
/*0x078*/ EqItemGuid         ItemGUID;
/*0x08c*/ unsigned int       Tint;
/*0x090*/ ITEMINFO*          Item1;
/*0x094*/ int                MerchantQuantity;
/*0x098*/ bool               bItemNeedsUpdate;
/*0x09c*/ unsigned int       LastCastTime;
/*0x0a0*/ int                AugFlag;
/*0x0a4*/ int                ArmorType;
/*0x0a8*/ ArrayClass<uint32_t> RealEstateArray;
/*0x0b8*/ int                Charges;
/*0x0bc*/ int                ScriptIndex;
/*0x0c0*/ int                ConvertItemID;
/*0x0c8*/ int64_t            MerchantSlot;
/*0x0d0*/ int                NoDropFlag;
/*0x0d4*/ int                OrnamentationIcon;
/*0x0d8*/ CXStr              SaveString;
/*0x0dc*/ int                Open;
/*0x0e0*/ unsigned int       RespawnTime;
/*0x0e4*/ int                Luck;
/*0x0e8*/ ItemGlobalIndex    GlobalIndex;                 // Size is 0xa (0xc)
/*0x0f4*/ CXStr              ConvertItemName;

// @end: ItemBase Members

	// start of ItemClient
/*0x0f8*/ uint32_t          Item2RefCnt;
/*0x0fc*/ ITEMINFO*         Item2;
/*0x100*/ CXStr             ClientString;
/*0x104*/ uint8_t           Filler0x0154[0x4];
/*0x108*/

	// Constructor is technically for ItemClient. Make sure the size
	// of the class matches.
	CONTENTS();

	// ItemClient::`vftable'{for `VeBaseReferenceCount'}
	virtual ~CONTENTS();
	virtual ITEMINFO* GetItemDefinition() { return nullptr; }
	virtual void SetItemDefinition(const ITEMINFO* item) {}
	// ... more


	// ItemClient::`vftable'{for `IChildItemContainer<class ItemBase>'}
	virtual ItemContainer* GetChildItemContainer() override { return (ItemContainer*)&Contents; }
	virtual const ItemContainer* GetChildItemContainer() const override { return (const ItemContainer*) & Contents; }
	virtual VePointer<CONTENTS> CreateCopy() const override { return nullptr; }
	virtual void SetItemLocation(ItemContainerInstance container, const ItemIndex& index) override {};

	EQLIB_OBJECT CONTENTS* GetContent(unsigned int index);
	EQLIB_OBJECT ItemGlobalIndex GetGlobalIndex() const;

	// Compatibility properties for ItemEvolutionData
	[[deprecated("Use pEvolutionData->GroupID instead")]]
	inline int get_EvolvingGroupID() { return pEvolutionData ? pEvolutionData->GroupID : 0; }
	__declspec(property(get = get_EvolvingGroupID)) int GroupID;

	[[deprecated("Use pEvolutionData->EvolvingCurrentLevel instead")]]
	inline int get_EvolvingCurrentLevel() { return pEvolutionData ? pEvolutionData->EvolvingCurrentLevel : 0; }
	__declspec(property(get = get_EvolvingCurrentLevel)) int EvolvingCurrentLevel;

	[[deprecated("Use pEvolutionData->EvolvingExpPct instead")]]
	inline double get_EvolvingExpPct() { return pEvolutionData ? pEvolutionData->EvolvingExpPct : 0.0; }
	__declspec(property(get = get_EvolvingExpPct)) double EvolvingExpPct;

	[[deprecated("Use pEvolutionData->EvolvingMaxLevel instead")]]
	inline int get_EvolvingMaxLevel() { return pEvolutionData ? pEvolutionData->EvolvingMaxLevel : 0; }
	__declspec(property(get = get_EvolvingMaxLevel)) int EvolvingMaxLevel;

	[[deprecated("Use pEvolutionData->LastEquipped instead")]]
	inline int get_LastEquipped() { return pEvolutionData ? pEvolutionData->LastEquipped : 0; }
	__declspec(property(get = get_LastEquipped)) int LastEquipped;
};
using PCONTENTS = CONTENTS*;

using ItemClientPtr = VePointer<CONTENTS>;

//----------------------------------------------------------------------------

struct ITEMBASEARRAY
{
	CONTENTS* Item[1];
};
using PITEMBASEARRAY [[deprecated]] = ITEMBASEARRAY *;

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
	union
	{
	/*0x00*/ INVENTORY Inventory;
	/*0x00*/ CONTENTS* InventoryArray[NUM_INV_SLOTS];
	};
};
using PINVENTORYARRAY [[deprecated]] = INVENTORYARRAY*;

struct BANKARRAY
{
/*0x00*/ CONTENTS* Bank[NUM_BANK_SLOTS];
/*0x60*/
};
using PBANKARRAY [[deprecated]] = BANKARRAY *;

struct SHAREDBANKARRAY
{
/*0x00*/ CONTENTS* SharedBank[NUM_SHAREDBANK_SLOTS];
/*0x10*/
};
using PSHAREDBANKARRAY [[deprecated]] = SHAREDBANKARRAY*;

struct MERCEQUIPMENT
{
/*0x00*/ CONTENTS* MercEquipment[4];
/*0x68*/
};
using PMERCEQUIPMENT [[deprecated]] = MERCEQUIPMENT*;

struct KEYRINGARRAY
{
	union
	{
	/*0x00*/ CONTENTS* Mounts[MAX_KEYRINGITEMS];
	/*0x00*/ CONTENTS* Illusions[MAX_KEYRINGITEMS];
	/*0x00*/ CONTENTS* Familiars[MAX_KEYRINGITEMS];
	};
	/*0x28*/
};
using PKEYRINGARRAY [[deprecated]] = KEYRINGARRAY*;

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

	bool operator()(const ItemContainer::ItemPointer& item, const ItemIndex&)
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

	bool operator()(const ItemContainer::ItemPointer& item, const ItemIndex&)
	{
		return item->GetItemDefinition()->ItemNumber == itemId;
	}

private:
	int itemId;
};

} // namespace eqlib
