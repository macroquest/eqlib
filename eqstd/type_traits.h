// type_traits standard header (core)

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// Adapted for use with eqlib

#pragma once

#include <type_traits>

namespace eqstd {
	using std::false_type;
	using std::true_type;
	using std::enable_if;
	using std::enable_if_t;
	using std::is_convertible;
	using std::conjunction_v;
	using std::conditional_t;
	using std::is_array_v;
	using std::is_move_constructible;
	using std::void_t;
	using std::is_void;
	using std::remove_cv_t;
	using std::remove_extent_t;
	using std::is_empty_v;
	using std::is_final_v;
	using std::disjunction_v;
	using std::is_array;
	using std::is_same_v;
	using std::remove_reference_t;
	using std::is_convertible_v;
	using std::is_pointer;
	using std::negation;
	using std::is_default_constructible;
	using std::is_constructible;
	using std::is_constructible_v;
	using std::is_reference;
	using std::is_reference_v;
	using std::is_move_constructible_v;
	using std::is_same;
	using std::is_move_assignable_v;
	using std::is_assignable;
	using std::add_lvalue_reference_t;
	using std::is_pointer_v;
	using std::remove_pointer_t;
	using std::is_volatile;
	using std::is_nothrow_constructible;
	using std::is_nothrow_constructible_v;
	using std::is_trivial_v;
	using std::is_standard_layout_v;
	using std::is_unsigned_v;
	using std::is_nothrow_default_constructible;
	using std::is_nothrow_default_constructible_v;
	using std::is_void_v;
	using std::disjunction;
	using std::is_integral;
	using std::is_nothrow_move_assignable_v;
	using std::is_nothrow_move_assignable;
	using std::is_nothrow_move_constructible;
	using std::is_nothrow_move_constructible_v;
	using std::is_nothrow_copy_constructible;
	using std::is_nothrow_copy_constructible_v;
	using std::is_copy_constructible;
	using std::is_copy_constructible_v;
	using std::index_sequence;
	using std::make_index_sequence;
	using std::index_sequence_for;
	using std::is_nothrow_copy_assignable;
	using std::is_nothrow_copy_assignable_v;
	using std::is_nothrow_assignable_v;
	using std::decay;
	using std::decay_t;

	template <class _Ty>
	using _Remove_cvref_t = remove_cv_t<remove_reference_t<_Ty>>;

	template <class _Type, template <class...> class _Template>
	inline constexpr bool _Is_specialization_v = false; // true if and only if _Type is a specialization of _Template
	template <template <class...> class _Template, class... _Types>
	inline constexpr bool _Is_specialization_v<_Template<_Types...>, _Template> = true;

	template <class _Type, template <class...> class _Template>
	struct _Is_specialization : std::bool_constant<_Is_specialization_v<_Type, _Template>> {};

	using std::_Is_nothrow_convertible_v;

	// These FNV-1a utility functions are extremely performance sensitive,
	// check examples like that in VSO-653642 before making changes.
#if defined(_WIN64)
	_INLINE_VAR constexpr size_t _FNV_offset_basis = 14695981039346656037ULL;
	_INLINE_VAR constexpr size_t _FNV_prime = 1099511628211ULL;
#else // defined(_WIN64)
	_INLINE_VAR constexpr size_t _FNV_offset_basis = 2166136261U;
	_INLINE_VAR constexpr size_t _FNV_prime = 16777619U;
#endif // defined(_WIN64)

	_NODISCARD inline size_t _Fnv1a_append_bytes(size_t _Val, const unsigned char* const _First,
		const size_t _Count) noexcept { // accumulate range [_First, _First + _Count) into partial FNV-1a hash _Val
		for (size_t _Idx = 0; _Idx < _Count; ++_Idx) {
			_Val ^= static_cast<size_t>(_First[_Idx]);
			_Val *= _FNV_prime;
		}

		return _Val;
	}

	template <class _Ty>
	_NODISCARD size_t _Fnv1a_append_range(const size_t _Val, const _Ty* const _First,
		const _Ty* const _Last) noexcept { // accumulate range [_First, _Last) into partial FNV-1a hash _Val
		static_assert(is_trivial_v<_Ty>, "Only trivial types can be directly hashed.");
		const auto _Firstb = reinterpret_cast<const unsigned char*>(_First);
		const auto _Lastb = reinterpret_cast<const unsigned char*>(_Last);
		return _Fnv1a_append_bytes(_Val, _Firstb, static_cast<size_t>(_Lastb - _Firstb));
	}

	template <class _Kty>
	_NODISCARD size_t _Fnv1a_append_value(
		const size_t _Val, const _Kty& _Keyval) noexcept { // accumulate _Keyval into partial FNV-1a hash _Val
		static_assert(is_trivial_v<_Kty>, "Only trivial types can be directly hashed.");
		return _Fnv1a_append_bytes(_Val, &reinterpret_cast<const unsigned char&>(_Keyval), sizeof(_Kty));
	}

	template <class _Kty>
	_NODISCARD size_t _Hash_representation(const _Kty& _Keyval) noexcept { // bitwise hashes the representation of a key
		return _Fnv1a_append_value(_FNV_offset_basis, _Keyval);
	}

	template <class _Kty>
	_NODISCARD size_t _Hash_array_representation(
		const _Kty* const _First, const size_t _Count) noexcept { // bitwise hashes the representation of an array
		static_assert(is_trivial_v<_Kty>, "Only trivial types can be directly hashed.");
		return _Fnv1a_append_bytes(
			_FNV_offset_basis, reinterpret_cast<const unsigned char*>(_First), _Count * sizeof(_Kty));
	}

	using std::_Identity_t;
	using std::_Aligned_storage;
	using std::_Aligned_storage_t;
	using std::_Is_copy_assignable_no_precondition_check;
	using std::_Is_move_assignable_no_precondition_check;
	using std::_Is_swappable;
	using std::_Is_nothrow_swappable;

	template <class _Ty>
	_Ty _Returns_exactly() noexcept; // not defined

}
