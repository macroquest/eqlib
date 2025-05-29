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

#include "eqlib/MemoryPatcher.h"

#include "mq/base/Base.h"

namespace eqlib {

class MemoryPatcherImpl final : public MemoryPatcher
{
public:
	MemoryPatcherImpl();
	virtual ~MemoryPatcherImpl() override;

	using MemoryPatcher::CreateDetour;

	virtual MemoryPatch* CreatePatch(uintptr_t address, void** target, void* detour, std::string_view name) override;

	virtual MemoryPatch* CreatePatch(uintptr_t address, size_t numBytes, std::string_view name) override;

	virtual MemoryPatch* CreatePatch(uintptr_t address, const uint8_t* newBytes, size_t numBytes,
		const uint8_t* expectedBytes = nullptr, std::string_view name = "") override;

	virtual bool RemovePatch(uintptr_t address) override;

	virtual void RemoveAllPatches() override;

	virtual bool IsAddressPatched(uintptr_t address, size_t width) override;

	virtual uint32_t FindPatches(uintptr_t address, size_t width, MemoryPatch** outList, uint32_t numItems) override;

	virtual MemoryPatch* GetPatch(uintptr_t address) override;

	virtual void SetUserData(MemoryPatch* patch, uint64_t extraData) override;

private:
	MemoryPatch* AddPatchToList(std::unique_ptr<MemoryPatch> patch);

	// List of all patches, kept in sorted order.
	std::vector<std::unique_ptr<MemoryPatch>> m_patches;
};

#define EzDetour(address, detour, trampoline) \
	CreateDetour(static_cast<uintptr_t>(address), detour, trampoline##_Ptr, STRINGIFY(address))

} // namespace eqlib
