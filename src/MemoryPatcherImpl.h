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

class MemoryPatcherImpl : public MemoryPatcher
{
public:
	MemoryPatcherImpl();
	virtual ~MemoryPatcherImpl() override;

	virtual MemoryPatch* CreateDetour(uintptr_t address, void** target, void* detour, std::string_view name) override;

	virtual MemoryPatch* CreateDetour(uintptr_t address, size_t width, std::string_view name) override;

	virtual void RemoveDetour(uintptr_t address) override;

	virtual void RemoveAllDetours() override;

	virtual void SetExtraData(MemoryPatch* patch, uint64_t extraData) override;
};

#define EzDetour(address, detour, trampoline) \
	AddDetour(static_cast<uintptr_t>(address), detour, trampoline##_Ptr, STRINGIFY(address))

} // namespace eqlib
