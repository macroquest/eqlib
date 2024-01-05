// xutility internal header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// Adapted for use with eqlib

#pragma once

#include "eqlib/eqstd/type_traits.h"
#include "eqlib/eqstd/utility.h"
#include "eqlib/eqstd/xmemory.h"

#include <utility>

namespace eqstd {

	using std::bool_constant;
	using std::remove_const;
	using std::remove_const_t;
	using std::iterator_traits;
	using std::add_const;
	using std::add_const_t;
	using std::pointer_traits;
	using std::allocator_traits;


	template <class _Ty>
	struct _Is_character : std::false_type {}; // by default, not a character type

	template <>
	struct _Is_character<char> : std::true_type {}; // chars are characters

	template <>
	struct _Is_character<signed char> : std::true_type {}; // signed chars are also characters

	template <>
	struct _Is_character<unsigned char> : std::true_type {}; // unsigned chars are also characters

#ifdef __cpp_char8_t
	template <>
	struct _Is_character<char8_t> : std::true_type {}; // UTF-8 code units are sort-of characters
#endif // __cpp_char8_t

	template <class _Iter>
	using _Iter_ref_t = typename iterator_traits<_Iter>::reference;

	template <class _Iter>
	using _Iter_value_t = typename iterator_traits<_Iter>::value_type;

	template <class _Iter>
	using _Iter_diff_t = typename iterator_traits<_Iter>::difference_type;

	template <class _Iter>
	using _Iter_cat_t = typename iterator_traits<_Iter>::iterator_category;

	template <class _Ty, class = void>
	inline constexpr bool _Is_iterator_v = false;

	template <class _Ty>
	inline constexpr bool _Is_iterator_v<_Ty, void_t<_Iter_cat_t<_Ty>>> = true;

#if _HAS_CXX17
	template <class _Ty, class = void>
	struct _Is_allocator : false_type {}; // selected when _Ty can't possibly be an allocator

	template <class _Ty>
	struct _Is_allocator < _Ty, void_t<typename _Ty::value_type, decltype(_STD declval<_Ty&>().deallocate(
		std::declval<_Ty&>().allocate(size_t{ 1 }), size_t{ 1 })) >>
		: true_type {}; // selected when _Ty resembles an allocator, N4687 26.2.1 [container.requirements.general]/17

	// deduction guide utilities (N4892 [associative.general]/2)
	template <class _Iter>
	using _Guide_key_t = remove_const_t<typename iterator_traits<_Iter>::value_type::first_type>;

	template <class _Iter>
	using _Guide_val_t = typename iterator_traits<_Iter>::value_type::second_type;

	template <class _Iter>
	using _Guide_pair_t = pair<add_const_t<typename iterator_traits<_Iter>::value_type::first_type>,
		typename iterator_traits<_Iter>::value_type::second_type>;

	template <class _Ty>
		struct is_execution_policy : false_type {};

	template <class _Ty>
		inline constexpr bool is_execution_policy_v = is_execution_policy<_Ty>::value;

	// See N4892 [unord.map.overview]/4
	template <class _Alloc>
	using _Guide_size_type_t =
		typename allocator_traits<conditional_t<_Is_allocator<_Alloc>::value, _Alloc, eqlib::everquest_allocator<int>>>::size_type;

#endif // _HAS_CXX17

	template <class _Ty>
	struct _Is_iterator : bool_constant<_Is_iterator_v<_Ty>> {};

	template <class _Ty, class... _Types>
	inline constexpr bool _Is_any_of_v = // true if and only if _Ty is in _Types
		disjunction_v<is_same<_Ty, _Types>...>;

	template <class _It, bool _RequiresMutable = false>
	inline constexpr bool _Is_vb_iterator = false;

	template <class _Iter>
	inline constexpr bool _Is_cpp17_fwd_iter_v = is_convertible_v<_Iter_cat_t<_Iter>, std::forward_iterator_tag>;

	template <class _Iter>
	inline constexpr bool _Iterator_is_contiguous = is_pointer_v<_Iter>;

	template <class _Iter1, class _Iter2>
	inline constexpr bool _Iterators_are_contiguous =
		_Iterator_is_contiguous<_Iter1> && _Iterator_is_contiguous<_Iter2>;

	template <class _Iter>
	inline constexpr bool _Iterator_is_volatile = std::is_volatile_v<remove_reference_t<_Iter_ref_t<_Iter>>>;

	template <class _Source, class _Dest>
	inline constexpr bool _Is_pointer_address_convertible = is_void_v<_Source>
		|| is_void_v<_Dest>
		// NOTE: is_same_v is required for function pointers to work
		|| is_same_v<remove_cv_t<_Source>, remove_cv_t<_Dest>>
#ifdef __cpp_lib_is_pointer_interconvertible
		|| std::is_pointer_interconvertible_base_of_v<_Dest, _Source>
#endif // defined(__cpp_lib_is_pointer_interconvertible)
		;

	template <class _Elem, bool _Is_enum = std::is_enum_v<_Elem>>
	struct _Unwrap_enum { // if _Elem is an enum, gets its underlying type; otherwise leaves _Elem unchanged
		using type = std::underlying_type_t<_Elem>;
	};

	template <class _Elem>
	struct _Unwrap_enum<_Elem, false> { // passthrough non-enum type
		using type = _Elem;
	};

	template <class _Elem>
	using _Unwrap_enum_t = typename _Unwrap_enum<_Elem>::type;

	template <class _Source, class _Dest, class _SourceRef, class _DestRef>
	struct _Trivial_cat {
		using _USource = _Unwrap_enum_t<_Source>;
		using _UDest = _Unwrap_enum_t<_Dest>;

		static constexpr bool _Same_size_and_compatible =
			sizeof(_Source) == sizeof(_Dest)
			// If _UDest is bool, _USource also needs to be bool
			// Conversion from non-bool => non-bool | bool => bool | bool => non-bool is fine.
			// Conversion from non-bool => bool is not fine.
			&& is_same_v<bool, _USource> >= is_same_v<bool, _UDest>
			&& (is_same_v<_USource, _UDest> || (std::is_integral_v<_USource> && std::is_integral_v<_UDest>)
				|| (std::is_floating_point_v<_USource> && std::is_floating_point_v<_UDest>));

		static constexpr bool _Bitcopy_constructible =
			_Same_size_and_compatible && std::is_trivially_constructible_v<_Dest, _SourceRef>;

		static constexpr bool _Bitcopy_assignable =
			_Same_size_and_compatible && std::is_trivially_assignable_v<_DestRef, _SourceRef>;
	};

	template <class _Source, class _Dest, class _SourceRef, class _DestRef>
	struct _Trivial_cat<_Source*, _Dest*, _SourceRef, _DestRef> {
		static constexpr bool _Bitcopy_constructible =
			_Is_pointer_address_convertible<_Source, _Dest>&& std::is_trivially_constructible_v<_Dest*, _SourceRef>;

		static constexpr bool _Bitcopy_assignable =
			_Is_pointer_address_convertible<_Source, _Dest>&& std::is_trivially_assignable_v<_DestRef, _SourceRef>;
	};

	struct _False_trivial_cat {
		static constexpr bool _Bitcopy_constructible = false;
		static constexpr bool _Bitcopy_assignable = false;
	};

	template <class _SourceIt, class _DestIt,
		bool _Are_contiguous = _Iterators_are_contiguous<_SourceIt, _DestIt> && !_Iterator_is_volatile<_SourceIt>
		&& !_Iterator_is_volatile<_DestIt>>
		struct _Iter_move_cat : _Trivial_cat<_Iter_value_t<_SourceIt>, _Iter_value_t<_DestIt>,
		remove_reference_t<_Iter_ref_t<_SourceIt>>&&, _Iter_ref_t<_DestIt>> {};

	template <class _SourceIt, class _DestIt>
	struct _Iter_move_cat<_SourceIt, _DestIt, false> : _False_trivial_cat {};

	template <class _SourceIt, class _DestIt>
	struct _Iter_move_cat<std::move_iterator<_SourceIt>, _DestIt, false> : _Iter_move_cat<_SourceIt, _DestIt> {};

	template <class _SourceIt, class _DestIt,
		bool _Are_contiguous = _Iterators_are_contiguous<_SourceIt, _DestIt> && !_Iterator_is_volatile<_SourceIt>
		&& !_Iterator_is_volatile<_DestIt>>
		struct _Iter_copy_cat
		: _Trivial_cat<_Iter_value_t<_SourceIt>, _Iter_value_t<_DestIt>, _Iter_ref_t<_SourceIt>, _Iter_ref_t<_DestIt>> {};

	template <class _SourceIt, class _DestIt>
	struct _Iter_copy_cat<_SourceIt, _DestIt, false> : _False_trivial_cat {};

	template <class _SourceIt, class _DestIt>
	struct _Iter_copy_cat<std::move_iterator<_SourceIt>, _DestIt, false> : _Iter_move_cat<_SourceIt, _DestIt> {};

	// __msvc_bit_utils.hp

	template <class _UInt>
	inline constexpr int _Unsigned_integer_digits = sizeof(_UInt) * CHAR_BIT;

	template <class _Ty>
	inline constexpr bool _Is_standard_unsigned_integer =
		_Is_any_of_v<remove_cv_t<_Ty>, unsigned char, unsigned short, unsigned int, unsigned long, unsigned long long>;

	// Implementation of countl_zero without using specialized CPU instructions.
	// Used at compile time and when said instructions are not supported.
	// see "Hacker's Delight" section 5-3
	template <class _Ty>
	[[nodiscard]] constexpr int _Countl_zero_fallback(_Ty _Val) noexcept {
		_Ty _Yx = 0;

		unsigned int _Nx = _Unsigned_integer_digits<_Ty>;
		unsigned int _Cx = _Unsigned_integer_digits<_Ty> / 2;
		do {
			_Yx = static_cast<_Ty>(_Val >> _Cx);
			if (_Yx != 0) {
				_Nx -= _Cx;
				_Val = _Yx;
			}
			_Cx >>= 1;
		} while (_Cx != 0);
		return static_cast<int>(_Nx) - static_cast<int>(_Val);
	}

	// Implementation of countr_zero without using specialized CPU instructions.
	// Used at compile time and when said instructions are not supported.
	// see "Hacker's Delight" section 5-4
	template <class _Ty>
	[[nodiscard]] constexpr int _Countr_zero_fallback(const _Ty _Val) noexcept {
		constexpr int _Digits = _Unsigned_integer_digits<_Ty>;
		return _Digits - _Countl_zero_fallback(static_cast<_Ty>(static_cast<_Ty>(~_Val) & static_cast<_Ty>(_Val - 1)));
	}

	template <class _Ty, enable_if_t<_Is_standard_unsigned_integer<_Ty>, int> = 0>
	[[nodiscard]] _CONSTEXPR20 int _Countr_zero(const _Ty _Val) noexcept {
#if _HAS_TZCNT_BSF_INTRINSICS
#if _HAS_CXX20
		if (!std::is_constant_evaluated())
#endif // _HAS_CXX20
		{
			return _Checked_x86_x64_countr_zero(_Val);
		}
#endif // _HAS_TZCNT_BSF_INTRINSICS
		return _Countr_zero_fallback(_Val);
	}

} // namespace eqstd

extern "C++" [[noreturn]] _CRTIMP2_PURE void __CLRCALL_PURE_OR_CDECL _Xbad_alloc();
extern "C++" [[noreturn]] _CRTIMP2_PURE void __CLRCALL_PURE_OR_CDECL _Xinvalid_argument(_In_z_ const char*);
extern "C++" [[noreturn]] _CRTIMP2_PURE void __CLRCALL_PURE_OR_CDECL _Xlength_error(_In_z_ const char*);
extern "C++" [[noreturn]] _CRTIMP2_PURE void __CLRCALL_PURE_OR_CDECL _Xout_of_range(_In_z_ const char*);
extern "C++" [[noreturn]] _CRTIMP2_PURE void __CLRCALL_PURE_OR_CDECL _Xoverflow_error(_In_z_ const char*);
extern "C++" [[noreturn]] _CRTIMP2_PURE void __CLRCALL_PURE_OR_CDECL _Xruntime_error(_In_z_ const char*);
extern "C++" [[noreturn]] _CRTIMP2_PURE void __CLRCALL_PURE_OR_CDECL _XGetLastError();
