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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include "pch.h"
#include "Globals.h"
#include "Items.h"

#include "EQClasses.h"

namespace eqlib {

//============================================================================

const char* szContainerInstanceNames[] = {
	"Inventory",
	"Bank",
	"Shared Bank",
	"Trade",
	"World Container",
	"Limbo",
	"Tribute",
	"Trophy Tribute",
	"Guild Tribute",
	"Merchant",
	"Deleted Items",
	"Corpse",
	"Bazaar",
	"Inspect",
	"Real Estate",
	"Unknown(15)",
	"Unknown(16)",
	"Unknown(17)",
	"Unknown(18)",
	"Alt Storage",
	"Archived Deleted Items",
	"Mail",
	"Guild Trophy Tribute",
	"Krono",
	"Other",
	"Mercenary",
	"Unknown(26)",
	"Mount Keyring",
	"Unknown(28)",
	"Illusion Keyring",
	"Unknown(30)",
	"Familiar Keyring",
	"Unknown(32)",
	"Hero Forge Keyring",
	"Unknown(34)",
	"Overflow",
	"Dragon Hoard",

	// Some extra in case of expansion in the future
	"Unknown(37)",
	"Unknown(38)",
	"Unknown(39)",
	"Unknown(40)",
};

const char* GetNameForContainerInstance(ItemContainerInstance container)
{
	if (container == eItemContainerInvalid)
		return "Invalid";

	if (container < static_cast<int>(lengthof(szContainerInstanceNames)) && container >= eItemContainerPossessions)
		return szContainerInstanceNames[container];

	return "Unknown";
}

//============================================================================
// ItemBase / ItemClient
//============================================================================

ItemBase::ItemBase()
	: Contents(0, eItemContainerOther)
	, ScriptIndex(0)
	, bCollected(false)
	, bRankDisabled(false)
	, bDisableAugTexture(false)
	, Luck(0)
	, ID(0)
	, RespawnTime(0)
	, MerchantSlot(0)
	, ConvertItemID(0)
	, bCopied(false)
	, DontKnow(0)
	, NoDropFlag(0)
	, LastCastTime(0)
	, Power(0)
	, ItemHash(0)
	, bRealEstateItemPlaceable(false)
	, StackCount(1)
	, OrnamentationIcon(-1)
	, MerchantQuantity(1)
	, bItemNeedsUpdate(false)
	, Price(0)
	, Open(0)
	, NoteStatus(0)
	, bConvertable(false)
	, Tint(0)
	, ArmorType(0)
	, AugFlag(0)
	, NewArmorID(0)
	, RealEstateID(-1)
	, Charges(0)
{
}

#ifdef EQ_Item__CreateItemTagString_x
FUNCTION_AT_ADDRESS(char* ItemBase::CreateItemTagString(char*, int, bool), EQ_Item__CreateItemTagString);
#endif
#ifdef EQ_Item__GetImageNum_x
FUNCTION_AT_ADDRESS(int ItemBase::GetImageNum() const, EQ_Item__GetImageNum);
#endif
#ifdef EQ_Item__CreateItemClient_x
FUNCTION_AT_ADDRESS(ItemPtr ItemBase::CreateItemClient(CUnSerializeBuffer& buffer), EQ_Item__CreateItemClient);
#endif
#ifdef EQ_Item__CanDrop_x
FUNCTION_AT_ADDRESS(bool ItemBase::CanDrop(bool, bool, bool, bool) const, EQ_Item__CanDrop);
#endif
#ifdef EQ_Item__GetItemValue_x
FUNCTION_AT_ADDRESS(int ItemBase::GetItemValue(bool) const, EQ_Item__GetItemValue);
#endif
#ifdef EQ_Item__IsKeyRingItem_x
FUNCTION_AT_ADDRESS(bool ItemBase::IsKeyRingItem(KeyRingType) const, EQ_Item__IsKeyRingItem);
#endif
#ifdef EQ_Item__CanGoInBag_x
FUNCTION_AT_ADDRESS(bool ItemBase::CanGoInBag(const ItemPtr& pItem, int unused, bool mustbefalse) const, EQ_Item__CanGoInBag);
#endif
#ifdef EQ_Item__ValueSellMerchant_x
FUNCTION_AT_ADDRESS(int ItemBase::ValueSellMerchant(float, int) const, EQ_Item__ValueSellMerchant);
#endif
#ifdef EQ_Item__GetAugmentFitBySlot_x
FUNCTION_AT_ADDRESS(int ItemBase::GetAugmentFitBySlot(const ItemPtr& pItem, int, bool, bool index) const, EQ_Item__GetAugmentFitBySlot);
#endif
//#ifdef EQ_Item__IsStackable_x
//FUNCTION_AT_ADDRESS(bool ItemBase::IsStackable() const, EQ_Item__IsStackable);
//#endif

char* ItemIndex::FormatItemIndex(char* dest, size_t len) const
{
	if (m_slots[0] == -1)
	{
		strcpy_s(dest, len, "[invalid]");
		return dest;
	}

	strcpy_s(dest, len, "[");

	char szTemp[10];
	for (int i = 0; i < ItemIndex::MAX_INVENTORY_DEPTH; ++i)
	{
		if (m_slots[i] != -1)
		{
			if (i > 0)
				sprintf_s(szTemp, ", %d", m_slots[i]);
			else
				sprintf_s(szTemp, "%d", m_slots[i]);

			strcat_s(dest, len, szTemp);
		}
	}

	strcat_s(dest, len, "]");
	return dest;
}

//----------------------------------------------------------------------------
// ItemContainer

ItemPtr ItemContainer::GetItem(int index) const
{
	if (index >= 0 && index < (int)m_items.size() && index < (int)m_size)
		return m_items[index];

	return ItemPtr();
}

ItemPtr ItemContainer::GetItem(const ItemIndex& index) const
{
	ItemContainer* container = nullptr;
	short slot = -1;

	if (GetIndex(index, container, slot))
	{
		return container->GetItem(slot);
	}

	return ItemPtr();
}

ItemIndex ItemContainer::CreateItemIndex(int slot0, int slot1 /* = -1 */, int slot2 /* = -1 */) const
{
	ItemIndex itemIndex;
	int i = 0;

	// pre-populate with the built-in slots
	for (i = 0; i < m_atDepth; ++i)
		itemIndex[i] = m_slots[i];

	// assign additional slots as available
	int slots[3] = { slot0, slot1, slot2 };

	for (int slot : slots)
	{
		if (slot != -1 && i < ItemIndex::MAX_INVENTORY_DEPTH)
			itemIndex[i++] = slot;
	}

	return itemIndex;
}

bool ItemContainer::IsEmpty() const
{
	for (const auto& item : *this)
	{
		if (item != nullptr)
			return false;
	}

	return true;
}

bool ItemContainer::IsFull() const
{
	for (const auto& item : *this)
	{
		if (item == nullptr)
			return false;
	}

	return true;
}

bool ItemContainer::IsValidIndex(const ItemIndex& index) const
{
	ItemContainer* container = const_cast<ItemContainer*>(this);
	short slot = -1;

	return GetIndex(index, container, slot);
}

bool ItemContainer::GetIndex(const ItemIndex& index, ItemContainer*& outContainer, short& outSlot) const
{
	if (!index.IsValid())
		return false;

	const ItemContainer* container = this;
	uint8_t depth = 0;

	// Assumes that -1 was passed in at the start
	outSlot = index.GetSlot(depth++);
	while (outSlot != -1 && container != nullptr)
	{
		short nextSlot = index.GetSlot(depth++);

		if (nextSlot == -1)
		{
			outContainer = const_cast<ItemContainer*>(container);
			return true;
		}

		ItemPtr item = container->GetItem(outSlot);

		container = item ? item->GetChildItemContainer() : nullptr;
		outSlot = nextSlot;
	}

	return false;
}

int ItemContainer::GetRecursiveSize(int depth) const
{
	int size = static_cast<int>(m_size);

	if (depth > 0)
	{
		// recurse over children
		for (const ItemPtr& ptr : *this)
		{
			const ItemContainer* container = ptr ? ptr->GetChildItemContainer() : nullptr;
			if (container)
			{
				size += container->GetSize(depth - 1);
			}
		}
	}

	return size;
}

bool ItemContainer::IsItemInBagOrBase(const ItemIndex& index) const
{
	if (ItemPtr parent = GetItem(index.GetParentIndex()))
	{
		return parent->IsContainer();
	}

	return true;
}

bool ItemContainer::IsItemInSocket(const ItemIndex& index) const
{
	if (ItemPtr parent = GetItem(index.GetParentIndex()))
	{
		return parent->IsSocketValid(index.GetDeepestSlot());
	}

	return false;
}

//----------------------------------------------------------------------------
// EqItemGuid

void EqItemGuid::UnSerialize(CUnSerializeBuffer& buffer)
{
	char temp[GUID_LENGTH - 1];

	buffer.ReadString(temp, lengthof(temp));
	strcpy_s(this->guid, temp);
}

} // namespace eqlib
