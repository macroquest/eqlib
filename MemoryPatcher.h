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
 * The max number of bytes that a detour is assumed to modify. This is used
 * to determine if two detoured addresses could potentially overlap.
 */
#if defined(_M_AMD64)
constexpr uint32_t DETOUR_BYTES_COUNT = 20;
#else
constexpr uint32_t DETOUR_BYTES_COUNT = 12;
#endif

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
 * DETOUR_TRAMPOLINE_EMPTY is no longer supported and should be replaced with
 * the DETOUR_TRAMPOLINE_DEF macro. This can be performed simply by adding a comma
 * after the return type and another after the name.
 */
#define DETOUR_TRAMPOLINE_EMPTY(...) \
	static_assert(false, "DETOUR_TRAMPOLINE_EMPTY is no longer supported. Use DETOUR_TRAMPOLINE_DEF and the new Detours API instead.");

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

class MemoryPatch
{
public:
	MemoryPatch(uint32_t address, void** target, void* detour, std::string_view name);
	MemoryPatch(uint32_t address, size_t width, std::string_view name);
	MemoryPatch(uint32_t address, const uint8_t* newBytes, size_t numBytes);
	MemoryPatch(uint32_t address, const uint8_t* expectedBytes, const uint8_t* newBytes, size_t numBytes);

	virtual ~MemoryPatch();

private:
	const uintptr_t      m_address;            // Address of the memory patch
	const std::string    m_name;               // Name of the memory patch assigned at creation
	std::vector<uint8_t> m_bytes;              // The original bytes at the patched memory location.
	size_t               m_width;              // Number of bytes modified by the patch

	void**               m_target = nullptr;   // For detours: The address of the target function
	void*                m_detour = nullptr;   // For detours: The address of the detour function

	std::vector<uint8_t> m_newBytes;           // The patched bytes
};

/**
 * Interface for patching memory at runtime. Provides methods for managing detours
 * and memory patches.
 */
class MemoryPatcherInterface
{
public:
	~MemoryPatcherInterface() {}

	/**
	 * Add a detour
	 *
	 * @param address Address to be detoured
	 * @param target The target of the detour
	 * @param detour The detour
	 * @param name Name of thhe detour
	 * @return True if the address was detoured
	 */
	template <typename T, typename U>
	bool AddDetour(uintptr_t address, T&& target, U&& detour, std::string_view name)
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
	bool AddDetourBytes(uintptr_t address, std::string_view name)
	{
		return CreateDetour(address, DETOUR_BYTES_COUNT, name);
	}

	virtual void RemoveDetour(uintptr_t address) = 0;

	virtual void RemoveAllDetours() = 0;

protected:
	/**
	 * This is an internal function used to create the raw function detour. It should not be
	 * called directly.
	 */
	virtual bool CreateDetour(uintptr_t address, void** target, void* detour, std::string_view name) = 0;

	/**
	 * This is an internal function used to create the raw function detour. It should not be
	 * called directly.
	 */
	virtual bool CreateDetour(uintptr_t address, size_t width, std::string_view name) = 0;

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<!std::is_member_pointer_v<T>, bool> AddDetourInternal(uintptr_t address, T& detour, T*& target, std::string_view name)
	{
		return CreateDetour(address, &(void*&)target, detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_member_pointer_v<T>, bool> AddDetourInternal(uintptr_t address, T& detour, T* target, std::string_view name)
	{
		return CreateDetour(address, (void**)target, detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_member_pointer_v<T>, bool> AddDetourInternal(uintptr_t address, T&& detour, T* target, std::string_view name)
	{
		return CreateDetour(address, (void**)target, *(void**)&detour, name);
	}

	/**
	 * This is an internal helper function to properly format the function arguments for a detour.
	 * It should not be called directly.
	 */
	template <typename T>
	std::enable_if_t<std::is_pointer_v<T>, bool> AddDetourInternal(uintptr_t address, T&& detour, T* target, std::string_view name)
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
	std::enable_if_t<!std::is_same_v<T, U>, bool> AddDetourInternal(uintptr_t address, T&& detour, U* target, std::string_view name)
	{
		static_assert(eqlib::detail::always_false<T>::value,
			"Detour and Trampoline types differ in their signatures!");

		return false;
	}
};



} // namespace eqlib
