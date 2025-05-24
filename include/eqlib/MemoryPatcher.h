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
#define DETOUR_TRAMPOLINE_DEF(ret, name, argtypes)                              \
	ret name##_Placeholder##argtypes;                                           \
	using name##_Type = decltype(&name##_Placeholder);                          \
	inline static decltype(&name##_Placeholder) name##_Ptr = nullptr;           \
	template <typename... Args>                                                 \
	ret name(Args&&... args) {                                                  \
		if constexpr (std::is_member_function_pointer_v<name##_Type>)           \
			return (this->*name##_Ptr)(std::forward<Args>(args)...);            \
		else                                                                    \
			return (name##_Ptr)(std::forward<Args>(args)...);                   \
	}


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
extern const uint32_t DETOUR_BYTES_COUNT;

class MemoryPatcher;

/**
 * @brief A class that represents a memory patch.
 *
 * This class is used to create and manage memory patches in the game. It
 * provides methods for creating detours and modifying memory at runtime.
 */
class MemoryPatch
{
	friend class MemoryPatcher;

	MemoryPatch(uintptr_t address, void** target, void* detour, std::string_view name = "");
	MemoryPatch(uintptr_t address, size_t numBytes, std::string_view name = "");
	MemoryPatch(uintptr_t address, const uint8_t* newBytes, size_t numBytes, std::string_view name = "");
	MemoryPatch(uintptr_t address, const uint8_t* expectedBytes, const uint8_t* newBytes, size_t numBytes, std::string_view name = "");

	~MemoryPatch();

public:
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

	uint64_t GetExtratData() const { return m_extraData; }

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

	const uintptr_t      m_address;            // Address of the memory patch
	Type                 m_type;               // Type of the memory patch (detour or patch)
	bool                 m_applied = false;    // True if the patch is currently applied
	bool                 m_validate = false;   // True if original bytes should be validated
	const std::string    m_name;               // Name of the memory patch assigned at creation
	std::vector<uint8_t> m_bytes;              // The original bytes at the patched memory location.

	void**               m_target = nullptr;   // For detours: The address of the target function
	void*                m_detour = nullptr;   // For detours: The address of the detour function

	std::vector<uint8_t> m_newBytes;           // The patched bytes
	uint64_t             m_extraData = 0;      // Extra data stored with the patch for client use.
};

/**
 * Interface for patching memory at runtime. Provides methods for managing detours
 * and memory patches.
 */
class MemoryPatcher
{
public:
	virtual ~MemoryPatcher() {}

	/**
	 * Add a detour
	 *
	 * @param address Address to be detoured
	 * @param target The function that is to be detoured.
	 * @param detour The detour function.
	 * @param name Name of thhe detour
	 * @return Pointer to a MemoryPatch object representing the detour if the address was detoured
	 */
	template <typename T, typename U>
	MemoryPatch* AddDetour(uintptr_t address, T&& target, U&& detour, std::string_view name)
	{
		return AddDetourInternal(address, std::forward<T>(target), std::forward<U>(detour), name);
	}

	/**
	 * Mark an address as patched
	 *
	 * @param address Address that was patched.
	 * @param name Name of the address that was patched.
	 * @return True if the address was successfully marked.
	 */
	MemoryPatch* AddDetourBytes(uintptr_t address, std::string_view name)
	{
		return CreateDetour(address, DETOUR_BYTES_COUNT, name);
	}

	virtual void RemoveDetour(uintptr_t address) = 0;

	virtual void RemoveAllDetours() = 0;

	virtual void SetExtraData(MemoryPatch* patch, uint64_t extraData) = 0;

protected:
	/**
	 * This is an internal function used to create the raw function detour. It should not be
	 * called directly.
	 */
	virtual MemoryPatch* CreateDetour(uintptr_t address, void** target, void* detour, std::string_view name) = 0;

	/**
	 * This is an internal function used to create the raw function detour. It should not be
	 * called directly.
	 */
	virtual MemoryPatch* CreateDetour(uintptr_t address, size_t width, std::string_view name) = 0;

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<!std::is_member_pointer_v<T>, MemoryPatch*>
		AddDetourInternal(uintptr_t address, T& detour, T*& target, std::string_view name)
	{
		return CreateDetour(address, &(void*&)target, detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_member_pointer_v<T>, MemoryPatch*>
		AddDetourInternal(uintptr_t address, T& detour, T* target, std::string_view name)
	{
		return CreateDetour(address, (void**)target, detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_member_pointer_v<T>, MemoryPatch*>
		AddDetourInternal(uintptr_t address, T&& detour, T* target, std::string_view name)
	{
		return CreateDetour(address, (void**)target, *(void**)&detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_pointer_v<T>, MemoryPatch*>
		AddDetourInternal(uintptr_t address, T&& detour, T* target, std::string_view name)
	{
		return CreateDetour(address, &(void*&)*target, detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 *
	 * This overload catches invalid cases where the function type of the detour and target do not match.
	 */
	template <typename T, typename U>
	std::enable_if_t<!std::is_same_v<T, U>, MemoryPatch*>
		AddDetourInternal(uintptr_t address, T&& detour, U* target, std::string_view name)
	{
		static_assert(eqlib::detail::always_false<T>::value,
			"Detour and Trampoline types differ in their signatures!");

		return nullptr;
	}
};



} // namespace eqlib
