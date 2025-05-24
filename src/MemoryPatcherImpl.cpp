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

#include <detours/detours.h>

namespace eqlib {

//============================================================================

#if defined(_M_AMD64)
constexpr uint32_t DETOUR_BYTES_COUNT = 20;
#else
constexpr uint32_t DETOUR_BYTES_COUNT = 12;
#endif


static bool PatchMemory(void* dest, const void* src, size_t length)
{
	HANDLE hProcess = GetCurrentProcess();
	DWORD oldPerms = 0;

	if (!FlushInstructionCache(hProcess, dest, length))
	{
		SPDLOG_ERROR("Failed to flush instruction cache for address: 0x{:X}, error={}", reinterpret_cast<uintptr_t>(dest),
			GetLastError());

		return false;
	}

	if (!VirtualProtectEx(hProcess, dest, length, PAGE_EXECUTE_READWRITE, &oldPerms))
	{
		SPDLOG_ERROR("Failed to change memory protection for address: 0x{:X}, error={}", reinterpret_cast<uintptr_t>(dest),
			GetLastError());
	
		return false;
	}

	bool success = WriteProcessMemory(hProcess, dest, src, length, nullptr);
	if (!success)
	{
		SPDLOG_ERROR("Failed to write process memory for address: 0x{:X}, error={}", reinterpret_cast<uintptr_t>(dest),
			GetLastError());
	}

	if (!VirtualProtectEx(hProcess, dest, length, oldPerms, &oldPerms))
	{
		SPDLOG_WARN("Failed to restore memory protection for address: 0x{:X}, error={}", reinterpret_cast<uintptr_t>(dest),
			GetLastError());
	}

	return success;
}

// Detour constructor
MemoryPatch::MemoryPatch(uintptr_t address, void** target, void* detour, std::string_view name)
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
MemoryPatch::MemoryPatch(uintptr_t address, size_t numBytes, std::string_view name)
	: m_address(address)
	, m_type(Type::Patch)
	, m_name(CheckName(name))
{
	m_bytes.resize(numBytes);
	memcpy(m_bytes.data(), reinterpret_cast<uint8_t*>(address), numBytes);
}

// Patch with new bytes
MemoryPatch::MemoryPatch(uintptr_t address, const uint8_t* newBytes, size_t numBytes, std::string_view name)
	: m_address(address)
	, m_type(Type::Patch)
	, m_name(CheckName(name))
{
	m_bytes.resize(numBytes);
	memcpy(m_bytes.data(), reinterpret_cast<uint8_t*>(address), numBytes);

	m_newBytes.resize(numBytes);
	memcpy(m_newBytes.data(), newBytes, numBytes);
}

// Patch with new bytes and expected bytes
MemoryPatch::MemoryPatch(uintptr_t address, const uint8_t* expectedBytes, const uint8_t* newBytes, size_t numBytes, std::string_view name)
	: m_address(address)
	, m_type(Type::Patch)
	, m_validate(true)
	, m_name(CheckName(name))
{
	// We can substitute expected bytes for actual bytes, because we expect them to match.
	m_bytes.resize(numBytes);
	memcpy(m_bytes.data(), expectedBytes, numBytes);

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
			SPDLOG_ERROR("Failed to commit detour: name={} result={}", m_name, result);
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
				SPDLOG_ERROR("Bytes at memory address do not match expected: name={}", m_name);
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
}

MemoryPatch* MemoryPatcherImpl::CreateDetour(uintptr_t address, void** target, void* detour, std::string_view name) override
{
	return nullptr;
}

MemoryPatch* MemoryPatcherImpl::CreateDetour(uintptr_t address, size_t width, std::string_view name) override
{
	return nullptr;
}

void MemoryPatcherImpl::RemoveDetour(uintptr_t address) override
{

}

void MemoryPatcherImpl::RemoveAllDetours() override
{
}

void MemoryPatcherImpl::SetExtraData(MemoryPatch* patch, uint64_t extraData) override
{
}


} // namespace eqlib
