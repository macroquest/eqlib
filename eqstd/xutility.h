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
		typename allocator_traits<conditional_t<_Is_allocator<_Alloc>::value, _Alloc, allocator<int>>>::size_type;

#endif // _HAS_CXX17

	template <class _Ty>
	struct _Is_iterator : bool_constant<_Is_iterator_v<_Ty>> {};

	template <class _Ty, class... _Types>
	inline constexpr bool _Is_any_of_v = // true if and only if _Ty is in _Types
		disjunction_v<is_same<_Ty, _Types>...>;

	template <class _It, bool _RequiresMutable = false>
	inline constexpr bool _Is_vb_iterator = false;

} // namespace eqstd
