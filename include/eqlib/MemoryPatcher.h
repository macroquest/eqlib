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

#include "eqlib/Config.h"

#include <cstdint>

namespace eqlib {

/**
 * This macro defines a trampoline function in the form of a function pointer,
 * along with the machinery that defines a function to call it.
 * 
 * This macro is complex because it is defined to work in both the global scope
 * and class scope. In other words, if this macro is used inside a
 * class boedy, it will create a properly defined and usable pointer-to-member-
 * function variable.
 *
 * Usage:
 * 
 *     DETOUR_TRAMPOLINE_DEF(<return type>, <function name>, <parameter block>)
 *
 *
 * Example:
 * 
 *     If you want to define a trampoline for a detour on a function with the
 *     signature `bool ResetDevice(bool)`, then you would use the following:
 *
 *     DETOUR_TRAMPOLINE_DEF(bool, ResetDevice_Trampoline, (bool));
 *
 * Note: The choice of name for the trampoline is stylistic only.
 */
#if !defined COMMENT_UPDATER
#define DETOUR_TRAMPOLINE_DEF(ret, name, argtypes)                              \
	ret name##_Placeholder argtypes;                                            \
	using name##_Type = decltype(&name##_Placeholder);                          \
	inline static decltype(&name##_Placeholder) name##_Ptr = nullptr;           \
	template <typename... Args>                                                 \
	ret name(Args&&... args) {                                                  \
		if constexpr (std::is_member_function_pointer_v<name##_Type>)           \
			return (this->*name##_Ptr)(std::forward<Args>(args)...);            \
		else                                                                    \
			return (name##_Ptr)(std::forward<Args>(args)...);                   \
	}
#else
#define DETOUR_TRAMPOLINE_DEF(ret, name, argtypes)
#endif


/**
 * @brief Extract the function address from a function pointer.
 *
 * This is used to get the address of a function that is being pointed to
 * by any type of function pointer, including pointer-to-member functions,
 * which have a variable width depending on the type of class the member
 * belongs to.
 *
 * @tparam Fn The type of function pointer
 * @tparam width The byte width of the function pointer
 * @param fn The function pointer
 * @return The address of the function being pointed to by the function pointer.
 */
template <typename Fn, size_t width = sizeof(Fn)>
uintptr_t extract_fn_addr(Fn fn)
{
	static_assert(width == 4u || width == 8u || width == 12u);

	if constexpr (width == 4u || width == 8u)
		return reinterpret_cast<uintptr_t*>(&fn)[0];

	if constexpr (width == 12u)
		return reinterpret_cast<uintptr_t*>(&fn)[1];

	return 0;
}

/**
 * @brief Set the address of the function pointed to by a function pointer.
 *
 * This is used to set the address of a function pointer of any type. There
 * is no validity check to the address that is provided. This supports any
 * kind of function pointer, including poiter-to-member functions, which
 * have a variable width depending on the type of class the member belongs to.
 *
 * @tparam Fn The type of function pointer
 * @tparam width The width of the function pointer
 * @param fn The function pointer
 * @param ptr Address to the function that should be set to the function pointer
 */
template <typename Fn, size_t width = sizeof(Fn)>
void set_fn_ptr(Fn& fn, uintptr_t ptr)
{
	static_assert(width == 4u || width == 8u || width == 12u);

	if constexpr (width == 4u || width == 8u)
		reinterpret_cast<uintptr_t*>(&fn)[0] = ptr;
	else // width == 12u
		reinterpret_cast<uintptr_t*>(&fn)[1] = ptr;
}

namespace detail
{
	/**
	 * A helper trait that always evaluates to false. This works around an issue where a non-dependent template
	 * type in a static_assert would always fail, regardless of whether the template is instantiated.
	 *
	 * By making the trait dependent on the templated type, it will only evaluate to false if the template is
	 * instantiated, thereby avoiding the compilation failure.
	 */
	template<typename...>
	struct always_false : std::false_type {};
}

/**
 * The max number of bytes that a detour is assumed to modify. This is used
 * to approximate the number of bytes to store for memory checks.
 */
EQLIB_VAR const size_t DETOUR_BYTES_COUNT;

class MemoryPatcher;
class MemoryPatcherImpl;

/**
 * @brief A class that represents a patch to process memory.
 *
 * This class is used to create and manage patches in the game. It
 * provides methods for creating detours and modifying memory at runtime.
 *
 * Note: MemoryPatch constructors are private and should be constructed only
 * through the MemoryPatcher interface
 */
class MemoryPatch
{
	friend class MemoryPatcherImpl;

	struct constructor_key {};

public:
	/**
	 * Create a function detour.
	 */
	MemoryPatch(constructor_key, uintptr_t address, void** target, void* detour, std::string_view name = "");

	/**
	 * Create an opaque patch. The patch will not validate the original bytes nor modify the memory.
	 */
	MemoryPatch(constructor_key, uintptr_t address, size_t numBytes, std::string_view name = "");

	/**
	 * Create a patch that modifies the memory at the specified address. If expectedBytes is provided,
	 * the original bytes at the address will be validated against the expected bytes before applying the patch.
	 */
	MemoryPatch(constructor_key, uintptr_t address,const uint8_t* newBytes, size_t numBytes,
		const uint8_t* expectedBytes = nullptr, std::string_view name = "");

	~MemoryPatch();

	uintptr_t GetAddress() const { return m_address; }
	const std::string& GetName() const { return m_name; }

	const uint8_t* GetBytes() const { return m_bytes.data(); }
	size_t GetBytesSize() const { return m_bytes.size(); }

	bool IsAddressInRange(uintptr_t address, size_t width) const
	{
		return std::max(m_address, address) < std::min(m_address + m_bytes.size(), address + width);
	}

	bool IsAddressInRange(uintptr_t address) const
	{
		return address >= m_address && address < m_address + m_bytes.size();
	}

	const uint8_t* GetNewBytes() const { return m_newBytes.data(); }
	size_t GetNewBytesSize() const { return m_newBytes.size(); }

	uint64_t GetUserData() const { return m_userData; }

	uint8_t ReadOriginalByte(uintptr_t address) const
	{
		size_t offset = address - m_address;

		if (offset < m_bytes.size())
			return m_bytes[offset];

		return 0;
	}

	enum class Type
	{
		Detour = 0,
		Patch = 1,
	};
	Type GetType() const { return m_type; }

	bool IsApplied() const { return m_applied; }

protected:
	bool Apply();
	bool Unapply();
	std::string CheckName(std::string_view inName) const;

	const uintptr_t      m_address;            // Address of the patch
	Type                 m_type;               // Type of the patch (detour or patch)
	bool                 m_applied = false;    // True if the patch is currently applied
	bool                 m_validate = false;   // True if original bytes should be validated
	const std::string    m_name;               // Name of the patch assigned at creation
	std::vector<uint8_t> m_bytes;              // The original bytes at the patched memory location.

	void**               m_target = nullptr;   // For detours: The address of the target function
	void*                m_detour = nullptr;   // For detours: The address of the detour function

	std::vector<uint8_t> m_newBytes;           // The patched bytes
	uint64_t             m_userData = 0;       // User data stored with the patch for client use.
};

/**
 * Interface for patching memory at runtime. Provides methods for managing detours
 * and patches.
 */
class MemoryPatcher
{
public:
	virtual ~MemoryPatcher() {}

	/**
	 * Create a function detour from typed arguments.
	 *
	 * @param address Address to be detoured
	 * @param target The function that is to be detoured
	 * @param detour The detour
	 * @param name Name of the detour
	 * @return Pointer to a MemoryPatch object representing the patch at the address, if successful
	 */
	template <typename T, typename U>
	MemoryPatch* CreateDetour(uintptr_t address, T&& target, U&& detour, std::string_view name = "")
	{
		return CreateDetourInternal(address, std::forward<T>(target), std::forward<U>(detour), name);
	}

	/**
	 * Remove a detour. Alias of RemovePatch.
	 */
	bool RemoveDetour(uintptr_t address)
	{
		return RemovePatch(address);
	}

	/**
	 * Create a function detour patch from raw pointers.
	 * 
	 * @param address Address to be detoured
	 * @param target The function that is to be detoured
	 * @param detour The detour
	 * @param name Name of the detour.
	 * @return Pointer to a MemoryPatch object representing the patch at the address, if successful
	 */
	virtual MemoryPatch* CreatePatch(uintptr_t address, void** target, void* detour, std::string_view name = "") = 0;

	/**
	 * Mark a region of memory as patched.
	 *
	 * The original bytes at this location will be recorded but the memory will not be modified. Use this
	 * function if you intend to modify the memory yourself.
	 *
	 * @param address Address that was patched
	 * @param numBytes The number of bytes that were patched
	 * @param name Name of the address that was patched
	 * @return Pointer to a MemoryPatch object representing the patch at the address
	 */
	virtual MemoryPatch* CreatePatch(uintptr_t address, size_t numBytes, std::string_view name = "") = 0;

	/**
	 * Patch a region of memory.
	 *
	 * The original bytes at this location will be saved, and will be restored when the patch is removed. The
	 * bytes in `newBytes` will be written to the memory at the specified address. If `expectedBytes` is provided,
	 * the original bytes will be validated against the expected bytes before applying the patch. If the original bytes do not match
	 * then the patch will not be applied.
	 * 
	 * @param address Address to apply the patch
	 * @param newBytes Pointer to array of `numBytes` bytes to write to the memory at the specified address.
	 * @param numBytes Length of `newBytes` and `expectedBytes`
	 * @param expectedBytes Optional. The expected bytes at the address. If this is provided and the original bytes
	 * do not match `expectedBytes`, then the patch will not be applied
	 * @param name Name of the patch
	 * @return Pointer to a MemoryPatch object representing the patch at the address
	 */
	virtual MemoryPatch* CreatePatch(uintptr_t address, const uint8_t* newBytes, size_t numBytes,
		const uint8_t* expectedBytes = nullptr, std::string_view name = "") = 0;

	/**
	 * Remove a previously applied patch at the given address. If a patch was previously
	 * applied at this location, the patch will be removed and the original bytes will be restored.
	 * 
	 * @param address The address belonging to a previously applied patch.
	 */
	virtual bool RemovePatch(uintptr_t address) = 0;

	/**
	 * Removes all currently applied patches and restores the original bytes.
	 */
	virtual void RemoveAllPatches() = 0;

	/**
	 * Check if the given address range is actively patched.
	 * 
	 * @param address Memory address to check for patches
	 * @param width If non-zero, the search will span [address, address + width).
	 * @return True if the address is patched, false otherwise.
	 */
	virtual bool IsAddressPatched(uintptr_t address, size_t width = 0) = 0;

	/**
	 * Get list of patches that span the given range.
	 *
	 * If the return value exceeds the numItems parameter, then the caller will need to call this function again
	 * with a modified range to get the remaining items.
	 * 
	 * @param address Starting address to search
	 * @param width Number of bytes in the address range to search
	 * @param outList pointer to a MemoryPatch array that will be filled with the patches found in the range.
	 * @param numItems size of the MemoryPatch array in outList.
	 * @return The number of items that were found in the range.
	 */
	virtual uint32_t FindPatches(uintptr_t address, size_t width, MemoryPatch** outList, uint32_t numItems) = 0;

	/**
	 * Get a patch at the given memory address
	 *
	 * Will only return a patch that starts on the given address. use FindPatches to perform a range search.
	 *
	 * @param address The address of the patch
	 * @return The found patch
	 */
	virtual MemoryPatch* GetPatch(uintptr_t address) = 0;

	/**
	 * Set an opaque userdata value on a MemoryPatch.
	 */
	virtual void SetUserData(MemoryPatch* patch, uint64_t userData) = 0;

protected:
	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<!std::is_member_pointer_v<T>, MemoryPatch*>
		CreateDetourInternal(uintptr_t address, T& detour, T*& target, std::string_view name)
	{
		return CreatePatch(address, &(void*&)target, detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_member_pointer_v<T>, MemoryPatch*>
		CreateDetourInternal(uintptr_t address, T& detour, T* target, std::string_view name)
	{
		return CreatePatch(address, (void**)target, detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_member_pointer_v<T>, MemoryPatch*>
		CreateDetourInternal(uintptr_t address, T&& detour, T* target, std::string_view name)
	{
		return CreatePatch(address, (void**)target, *(void**)&detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_pointer_v<T>, MemoryPatch*>
		CreateDetourInternal(uintptr_t address, T&& detour, T* target, std::string_view name)
	{
		return CreatePatch(address, &(void*&)*target, detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 *
	 * This overload catches invalid cases where the function type of the detour and target do not match.
	 */
	template <typename T, typename U>
	std::enable_if_t<!std::is_same_v<T, U>, MemoryPatch*>
		CreateDetourInternal(uintptr_t address, T&& detour, U* target, std::string_view name)
	{
		static_assert(eqlib::detail::always_false<T>::value,
			"Detour and Trampoline types differ in their signatures!");

		return nullptr;
	}
};

} // namespace eqlib
