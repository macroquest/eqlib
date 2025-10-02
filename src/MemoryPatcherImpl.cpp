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

#include "pch.h"
#include "MemoryPatcherImpl.h"
#include "Logging.h"

#include <detours/detours.h>

#pragma comment(lib, "detours.lib")

namespace eqlib {

//============================================================================

#if defined(_M_AMD64)
const size_t DETOUR_BYTES_COUNT = 20;
#else
const size_t DETOUR_BYTES_COUNT = 12;
#endif


static bool PatchMemory(void* dest, const void* src, size_t length)
{
	HANDLE hProcess = GetCurrentProcess();
	DWORD oldPerms = 0;

	if (!FlushInstructionCache(hProcess, dest, length))
	{
		LOG_ERROR("Failed to flush instruction cache for address: 0x{:X}, error={}", reinterpret_cast<uintptr_t>(dest),
			GetLastError());

		return false;
	}

	if (!VirtualProtectEx(hProcess, dest, length, PAGE_EXECUTE_READWRITE, &oldPerms))
	{
		LOG_ERROR("Failed to change memory protection for address: 0x{:X}, error={}", reinterpret_cast<uintptr_t>(dest),
			GetLastError());
	
		return false;
	}

	bool success = WriteProcessMemory(hProcess, dest, src, length, nullptr);
	if (!success)
	{
		LOG_ERROR("Failed to write process memory for address: 0x{:X}, error={}", reinterpret_cast<uintptr_t>(dest),
			GetLastError());
	}

	if (!VirtualProtectEx(hProcess, dest, length, oldPerms, &oldPerms))
	{
		LOG_WARN("Failed to restore memory protection for address: 0x{:X}, error={}", reinterpret_cast<uintptr_t>(dest),
			GetLastError());
	}

	return success;
}

static bool ValidateReadableMemory(uintptr_t address, size_t count)
{
	// Validate that the entire range [address, address + count) is readable
	uintptr_t current = address;
	uintptr_t end = address + count;

	// It is highly unlikely that this will ever need to iterate more than once,
	// but it will handle a case where we have a range that spans a region boundary somehow.
	while (current < end)
	{
		MEMORY_BASIC_INFORMATION mbi = {};
		if (VirtualQuery((const void*)current, &mbi, sizeof(mbi)) == 0
			|| mbi.State != MEM_COMMIT
			|| (mbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)))
		{
			return false;
		}

		current = reinterpret_cast<uintptr_t>(mbi.BaseAddress) + mbi.RegionSize;
	}

	return true;
}

// Detour constructor
MemoryPatch::MemoryPatch(constructor_key, uintptr_t address, void** target, void* detour, std::string_view name)
	: m_address(address)
	, m_type(Type::Detour)
	, m_name(CheckName(name))
	, m_target(target)
	, m_detour(detour)
{
	m_bytes.resize(DETOUR_BYTES_COUNT);
	memcpy(m_bytes.data(), reinterpret_cast<uint8_t*>(address), DETOUR_BYTES_COUNT);

	*m_target = reinterpret_cast<void*>(address);
}

// Patch with no expected bytes and no new bytes
MemoryPatch::MemoryPatch(constructor_key, uintptr_t address, size_t numBytes, std::string_view name)
	: m_address(address)
	, m_type(Type::Patch)
	, m_name(CheckName(name))
{
	m_bytes.resize(numBytes);
	memcpy(m_bytes.data(), reinterpret_cast<uint8_t*>(address), numBytes);
}

// Patch with new bytes and expected bytes
MemoryPatch::MemoryPatch(constructor_key, uintptr_t address,const uint8_t* newBytes, size_t numBytes,
	const uint8_t* expectedBytes, std::string_view name)
	: m_address(address)
	, m_type(Type::Patch)
	, m_name(CheckName(name))
{
	if (expectedBytes != nullptr)
	{
		m_validate = true;

		// We can substitute expected bytes for actual bytes, because we expect them to match.
		m_bytes.resize(numBytes);
		memcpy(m_bytes.data(), expectedBytes, numBytes);
	}
	else
	{
		m_bytes.resize(numBytes);
		memcpy(m_bytes.data(), reinterpret_cast<uint8_t*>(address), numBytes);
	}
	

	m_newBytes.resize(numBytes);
	memcpy(m_newBytes.data(), newBytes, numBytes);
}

MemoryPatch::~MemoryPatch()
{
}

std::string MemoryPatch::CheckName(std::string_view inName) const
{
	if (!inName.empty())
		return std::string(inName);

	// No name provided, generate one based on the memory address
	return fmt::format("{} 0x{:X}",
		m_type == Type::Detour ? "Detour" : "Patch",
		m_address);
}

bool MemoryPatch::Apply()
{
	if (m_applied)
		return true;

	if (m_type == Type::Detour)
	{
		DetourTransactionBegin();
		DetourAttach(m_target, m_detour);

		LONG result = DetourTransactionCommit();
		if (result != NO_ERROR)
		{
			LOG_ERROR("Failed to commit detour with name \"{}\": At address 0x{:X}, result={}", m_name, m_address, result);
			return false;
		}

		m_applied = true;
	}
	else if (m_type == Type::Patch)
	{
		if (m_validate)
		{
			// Validate the original bytes before applying the patch
			uint8_t* originalBytes = reinterpret_cast<uint8_t*>(m_address);

			if (memcmp(originalBytes, m_bytes.data(), m_bytes.size()) != 0)
			{
				LOG_ERROR("Failed to apply patch with name \"{}\": The memory at address 0x{:X} does not match the expected values",
					m_name, m_address);
				return false;
			}
		}

		if (!m_newBytes.empty())
		{
			m_applied = PatchMemory(reinterpret_cast<void*>(m_address), m_newBytes.data(), m_newBytes.size());
		}
		else
		{
			m_applied = true;
		}
	}

	return m_applied;
}

bool MemoryPatch::Unapply()
{
	if (!m_applied)
		return false;

	bool success = false;

	if (m_type == Type::Detour)
	{
		DetourTransactionBegin();
		DetourDetach(m_target, m_detour);
		DetourTransactionCommit();

		m_applied = false;
		success = true;
	}
	else if (m_type == Type::Patch)
	{
		// Check if the current bytes match the original bytes. If not, patch the original bytes back in.
		uint8_t* currentBytes = reinterpret_cast<uint8_t*>(m_address);

		if (memcmp(currentBytes, m_bytes.data(), m_bytes.size()) != 0)
		{
			success = PatchMemory(currentBytes, m_bytes.data(), m_bytes.size());
		}
		else
		{
			success = true;
		}

		m_applied = false;
	}

	return success;
}

//============================================================================

MemoryPatcherImpl::MemoryPatcherImpl()
{
}

MemoryPatcherImpl::~MemoryPatcherImpl()
{
	RemoveAllPatches();
}

MemoryPatch* MemoryPatcherImpl::CreatePatch(uintptr_t address, void** target, void* detour, std::string_view name)
{
	if (!ValidateReadableMemory(address, DETOUR_BYTES_COUNT))
	{
		LOG_ERROR("Failed to create patch with name \"{}\": Address 0x{:X} is not a valid memory address",
			name, address);

		return nullptr;
	}

	std::unique_ptr<MemoryPatch> patch = std::make_unique<MemoryPatch>(
		MemoryPatch::constructor_key{}, address, target, detour, name);

	MemoryPatch* patchPtr = AddPatchToList(std::move(patch));

	return patchPtr;
}

MemoryPatch* MemoryPatcherImpl::CreatePatch(uintptr_t address, size_t numBytes, std::string_view name)
{
	if (!ValidateReadableMemory(address, numBytes))
	{
		LOG_ERROR("Failed to create patch with name \"{}\": Address 0x{:X} is not a valid memory address",
			name, address);

		return nullptr;
	}

	std::unique_ptr<MemoryPatch> patch = std::make_unique<MemoryPatch>(
		MemoryPatch::constructor_key{}, address, numBytes, name);

	MemoryPatch* patchPtr = AddPatchToList(std::move(patch));

	return patchPtr;
}

MemoryPatch* MemoryPatcherImpl::CreatePatch(uintptr_t address, const uint8_t* newBytes, size_t numBytes,
	const uint8_t* expectedBytes, std::string_view name)
{
	if (!ValidateReadableMemory(address, numBytes))
	{
		LOG_ERROR("Failed to create patch with name \"{}\": Address 0x{:X} is not a valid memory address",
			name, address);

		return nullptr;
	}

	std::unique_ptr<MemoryPatch> patch = std::make_unique<MemoryPatch>(
		MemoryPatch::constructor_key{}, address, newBytes, numBytes, expectedBytes, name);

	MemoryPatch* patchPtr = AddPatchToList(std::move(patch));

	return patchPtr;
}

bool MemoryPatcherImpl::RemovePatch(uintptr_t address)
{
	auto it = std::lower_bound(m_patches.begin(), m_patches.end(), address,
		[](const std::unique_ptr<MemoryPatch>& patch, uintptr_t addr)
		{ return patch->GetAddress() < addr; });

	if (it != m_patches.end() && (*it)->GetAddress() == address)
	{
		std::unique_ptr<MemoryPatch> patch = std::move(*it);
		m_patches.erase(it);

		return patch->Unapply();
	}

	return false;
}

void MemoryPatcherImpl::RemoveAllPatches()
{
	for (auto& patch : m_patches)
	{
		patch->Unapply();
	}

	m_patches.clear();
}

bool MemoryPatcherImpl::IsAddressPatched(uintptr_t address, size_t width)
{
	auto it = std::lower_bound(m_patches.begin(), m_patches.end(), address,
		[](const std::unique_ptr<MemoryPatch>& patch, uintptr_t addr)
		{ return patch->GetAddress() < addr; });

	return it != m_patches.end() && (*it)->IsAddressInRange(address, width);
}

uint32_t MemoryPatcherImpl::FindPatches(uintptr_t address, size_t width, MemoryPatch** outList, uint32_t numItems)
{
	uint32_t count = 0;
	uintptr_t endAddress = address + width;

	// Find the first patch that could overlap
	auto it = std::lower_bound(m_patches.begin(), m_patches.end(), address,
		[](const std::unique_ptr<MemoryPatch>& patch, uintptr_t addr)
		{ return patch->GetAddress() + patch->GetBytesSize() <= addr; });

	for (; it != m_patches.end(); ++it)
	{
		uintptr_t patchAddr = (*it)->GetAddress();

		// If the patch starts at or after the end of the search range, we can break early.
		if (patchAddr >= endAddress)
			break;

		if (count < numItems)
		{
			outList[count] = it->get();
		}
		count++;
	}

	return count;
}

MemoryPatch* MemoryPatcherImpl::GetPatch(uintptr_t address)
{
	auto it = std::lower_bound(m_patches.begin(), m_patches.end(), address,
		[](const std::unique_ptr<MemoryPatch>& patch, uintptr_t addr)
		{ return patch->GetAddress() < addr; });

	if (it != m_patches.end() && (*it)->GetAddress() == address)
	{
		return it->get();
	}

	return nullptr;
}

void MemoryPatcherImpl::SetUserData(MemoryPatch* patch, uint64_t userData)
{
	patch->m_userData = userData;
}

MemoryPatch* MemoryPatcherImpl::AddPatchToList(std::unique_ptr<MemoryPatch> patch)
{
	// Insert patch into the list. Keeps the list sorted by address.
	// Check that the address does not overlap another patch with the same range.

	auto it = std::lower_bound(m_patches.begin(), m_patches.end(), patch,
		[](const std::unique_ptr<MemoryPatch>& a, const std::unique_ptr<MemoryPatch>& b)
		{ return a->GetAddress() < b->GetAddress(); });

	// Check that the address does not overlap with an existing patch
	if (it != m_patches.end() && (*it)->IsAddressInRange(patch->GetAddress(), patch->GetBytesSize()))
	{
		LOG_ERROR("Failed to add patch with name \"{}\": Address 0x{:X} overlaps with existing patch at 0x{:X}",
			patch->GetName(), patch->GetAddress(), (*it)->GetAddress());
		return nullptr;
	}

	// If this isn't at the beginning of the list, check if the previous item overlaps.
	if (it != m_patches.begin())
	{
		auto prevIt = std::prev(it);
		if ((*prevIt)->IsAddressInRange(patch->GetAddress(), patch->GetBytesSize()))
		{
			LOG_ERROR("Failed to add patch with name \"{}\": Address 0x{:X} overlaps with existing patch at 0x{:X}",
				patch->GetName(), patch->GetAddress(), (*prevIt)->GetAddress());
			return nullptr;
		}
	}

	// Try to apply thet patch.
	if (!patch->Apply())
	{
		return nullptr;
	}

	it = m_patches.insert(it, std::move(patch));
	return it->get();
}

} // namespace eqlib
