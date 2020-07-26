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
#include "Items.h"

#include "EQClasses.h"

namespace eqlib {

//============================================================================
// new form
//============================================================================

ItemClient* ItemClient::GetContent(uint32_t index)
{
	if (Contents.ContainedItems.pItems && Contents.ContainedItems.Capacity)
	{
		if (index < Contents.ContainedItems.Capacity)
		{
			// TODO: Convert CONTENTS to ItemClient
			return (ItemClient*)Contents.ContainedItems.pItems->Item[index];
		}
	}

	return nullptr;
}

ItemGlobalIndex ItemClient::GetGlobalIndex() const
{
	return this->GlobalIndex;
}

//============================================================================
// old form
//============================================================================

CONTENTS* CONTENTS::GetContent(unsigned int index)
{
	if (Contents.ContainedItems.pItems && Contents.ContainedItems.Capacity)
	{
		if (index < Contents.ContainedItems.Capacity)
		{
			return Contents.ContainedItems.pItems->Item[index];
		}
	}

	return nullptr;
}

ItemGlobalIndex CONTENTS::GetGlobalIndex() const
{
	return this->GlobalIndex;
}

//----------------------------------------------------------------------------
// ItemBaseContainer

ItemContainer::ItemPointer ItemContainer::GetItem(int index) const
{
	if (index >= 0 && index < (int)m_items.size() && index < (int)m_size)
		return m_items[index];

	return ItemPointer();
}

ItemContainer::ItemPointer ItemContainer::GetItem(const ItemIndex& index) const
{
	ItemContainer* container = nullptr;
	short slot = -1;

	if (GetIndex(index, container, slot))
	{
		return container->GetItem(slot);
	}

	return ItemPointer();
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
		else
		{
			ItemPointer item = container->GetItem(outSlot);

			container = item ? item->GetChildItemContainer() : nullptr;
			outSlot = nextSlot;
		}
	}

	return false;
}

uint32_t ItemContainer::GetSize(int depth /* = 0 */) const
{
	if (depth == 0)
		return m_size;

	uint32_t size = m_size;

	// recurse over children
	for (const ItemContainer::ItemPointer& ptr : *this)
	{
		const ItemContainer* container = ptr ? ptr->GetChildItemContainer() : nullptr;
		if (container)
		{
			size += container->GetSize(depth - 1);
		}
	}

	return size;
}

//----------------------------------------------------------------------------
// EqItemGuid

void EqItemGuid::UnSerialize(CUnSerializeBuffer& buffer)
{
	char temp[GUID - 1];

	buffer.ReadString(temp, lengthof(temp));
	strcpy_s(this->guid, temp);
}


} // namespace eqlib
