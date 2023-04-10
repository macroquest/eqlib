// xmemory internal header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// Adapted for use with eqlib

#pragma once

#include "eqlib/Allocator.h"
#include "eqlib/eqstd/type_traits.h"
#include "eqlib/eqstd/utility.h"

#include <xmemory>
#include <limits>

namespace eqstd
{
	using std::allocator_traits;
	using std::pointer_traits;

	using std::_Destroy_in_place;
	using std::_Destroy_range;
	using std::_Construct_in_place;

	template <class _Alloc, class _Value_type>
	using _Rebind_alloc_t = typename allocator_traits<_Alloc>::template rebind_alloc<_Value_type>;

	template <class _Ptr, class _Ty>
	using _Rebind_pointer_t = typename pointer_traits<_Ptr>::template rebind<_Ty>;

	// STRUCT TEMPLATE _Simple_types
	template <class _Value_type>
	struct _Simple_types { // wraps types from allocators with simple addressing for use in iterators
						   // and other SCARY machinery
		using value_type = _Value_type;
		using size_type = size_t;
		using difference_type = ptrdiff_t;
		using pointer = value_type*;
		using const_pointer = const value_type*;
	};

	// ALIAS TEMPLATE _Alloc_ptr_t
	template <class _Alloc>
	using _Alloc_ptr_t = typename allocator_traits<_Alloc>::pointer;

	// STRUCT TEMPLATE _Alloc_construct_ptr
	template <class _Alloc>
	struct _Alloc_construct_ptr { // pointer used to help construct 1 _Alloc::value_type without EH
		using pointer = _Alloc_ptr_t<_Alloc>;
		_Alloc& _Al;
		pointer _Ptr;

		inline explicit _Alloc_construct_ptr(_Alloc& _Al_) : _Al(_Al_), _Ptr(nullptr) {}

		[[nodiscard]] inline pointer _Release() noexcept { // disengage *this and return contained pointer
			return std::exchange(_Ptr, nullptr);
		}

		inline void _Allocate() { // disengage *this, then allocate a new memory block
			_Ptr = nullptr; // if allocate throws, prevents double-free
			_Ptr = _Al.allocate(1);
		}

		inline ~_Alloc_construct_ptr() { // if this instance is engaged, deallocate storage
			if (_Ptr) {
				_Al.deallocate(_Ptr, 1);
			}
		}

		_Alloc_construct_ptr(const _Alloc_construct_ptr&) = delete;
		_Alloc_construct_ptr& operator=(const _Alloc_construct_ptr&) = delete;
	};

	struct _Equal_allocators {}; // usually allows contents to be stolen (e.g. with swap)
	using _Propagate_allocators = std::true_type; // usually allows the allocator to be propagated, and then contents stolen
	using _No_propagate_allocators = std::false_type; // usually turns moves into copies

	// VARIABLE TEMPLATE _Is_simple_alloc_v
	template <class _Alloc> // tests if allocator has simple addressing
	inline constexpr bool _Is_simple_alloc_v = is_same_v<typename allocator_traits<_Alloc>::size_type, size_t > &&
		is_same_v<typename allocator_traits<_Alloc>::difference_type, ptrdiff_t> &&
		is_same_v<typename allocator_traits<_Alloc>::pointer, typename _Alloc::value_type*> &&
		is_same_v<typename allocator_traits<_Alloc>::const_pointer, const typename _Alloc::value_type*>;

	// CLASS TEMPLATE _Compressed_pair
	struct _Zero_then_variadic_args_t {
		explicit _Zero_then_variadic_args_t() = default;
	}; // tag type for value-initializing first, constructing second from remaining args

	struct _One_then_variadic_args_t {
		explicit _One_then_variadic_args_t() = default;
	}; // tag type for constructing first from one arg, constructing second from remaining args

	template <class _Ty1, class _Ty2, bool = is_empty_v<_Ty1> && !is_final_v<_Ty1>>
	class _Compressed_pair final : private _Ty1 { // store a pair of values, deriving from empty first
	public:
		_Ty2 _Myval2;

		using _Mybase = _Ty1; // for visualization

		template <class... _Other2>
		constexpr explicit _Compressed_pair(_Zero_then_variadic_args_t, _Other2&&... _Val2) noexcept(
			conjunction_v<is_nothrow_default_constructible<_Ty1>, is_nothrow_constructible<_Ty2, _Other2...>>)
			: _Ty1(), _Myval2(std::forward<_Other2>(_Val2)...) {}

		template <class _Other1, class... _Other2>
		constexpr _Compressed_pair(_One_then_variadic_args_t, _Other1&& _Val1, _Other2&&... _Val2) noexcept(
			conjunction_v<is_nothrow_constructible<_Ty1, _Other1>, is_nothrow_constructible<_Ty2, _Other2...>>)
			: _Ty1(std::forward<_Other1>(_Val1)), _Myval2(std::forward<_Other2>(_Val2)...) {}

		constexpr _Ty1& _Get_first() noexcept {
			return *this;
		}

		constexpr const _Ty1& _Get_first() const noexcept {
			return *this;
		}
	};

	template <class _Ty1, class _Ty2>
	class _Compressed_pair<_Ty1, _Ty2, false> final { // store a pair of values, not deriving from first
	public:
		_Ty1 _Myval1;
		_Ty2 _Myval2;

		template <class... _Other2>
		constexpr explicit _Compressed_pair(_Zero_then_variadic_args_t, _Other2&&... _Val2) noexcept(
			conjunction_v<is_nothrow_default_constructible<_Ty1>, is_nothrow_constructible<_Ty2, _Other2...>>)
			: _Myval1(), _Myval2(std::forward<_Other2>(_Val2)...) {}

		template <class _Other1, class... _Other2>
		constexpr _Compressed_pair(_One_then_variadic_args_t, _Other1&& _Val1, _Other2&&... _Val2) noexcept(
			conjunction_v<is_nothrow_constructible<_Ty1, _Other1>, is_nothrow_constructible<_Ty2, _Other2...>>)
			: _Myval1(std::forward<_Other1>(_Val1)), _Myval2(std::forward<_Other2>(_Val2)...) {}

		constexpr _Ty1& _Get_first() noexcept {
			return _Myval1;
		}

		constexpr const _Ty1& _Get_first() const noexcept {
			return _Myval1;
		}
	};

	// VARIABLE TEMPLATE _Nothrow_compare
	template <class _Keycmp, class _Lhs, class _Rhs>
	inline constexpr bool _Nothrow_compare = noexcept(
		static_cast<bool>(std::declval<const _Keycmp&>()(std::declval<const _Lhs&>(), std::declval<const _Rhs&>())));

	template <class _Alloc>
	using _Choose_pocma = conditional_t<allocator_traits<_Alloc>::is_always_equal::value, _Equal_allocators,
		typename allocator_traits<_Alloc>::propagate_on_container_move_assignment::type>;

	// CLASSES _Container_base*, _Iterator_base*
	struct _Fake_allocator {};
	inline constexpr _Fake_allocator _Fake_alloc{};

	struct _Container_base0 {
		inline void _Orphan_all() noexcept {}
		inline void _Swap_proxy_and_iterators(_Container_base0&) noexcept {}
		inline void _Alloc_proxy(const _Fake_allocator&) noexcept {}
		inline void _Reload_proxy(const _Fake_allocator&, const _Fake_allocator&) noexcept {}
	};

	struct _Iterator_base0 {
		inline void _Adopt(const void*) noexcept {}
		inline const _Container_base0* _Getcont() const noexcept {
			return nullptr;
		}

		static constexpr bool _Unwrap_when_unverified = true;
	};

	using _Container_base = _Container_base0;
	using _Iterator_base = _Iterator_base0;

	// ALIAS TEMPLATE _Container_proxy_ptr AND SUPPORTING MACHINERY
	struct _Leave_proxy_unbound {
		explicit _Leave_proxy_unbound() = default;
	}; // tag to indicate that a proxy is being allocated before it is safe to bind to a _Container_base12

	struct _Fake_proxy_ptr_impl { // fake replacement for a container proxy smart pointer when no container proxy is in use
		_Fake_proxy_ptr_impl(const _Fake_proxy_ptr_impl&) = delete;
		_Fake_proxy_ptr_impl& operator=(const _Fake_proxy_ptr_impl&) = delete;
		inline _Fake_proxy_ptr_impl(const _Fake_allocator&, _Leave_proxy_unbound) noexcept {}
		inline _Fake_proxy_ptr_impl(const _Fake_allocator&, const _Container_base0&) noexcept {}

		inline void _Bind(const _Fake_allocator&, _Container_base0*) noexcept {}
		inline void _Release() noexcept {}
	};

	template <class _Alloc>
	using _Container_proxy_ptr = _Fake_proxy_ptr_impl;

#pragma warning(push)
#pragma warning(disable : 4624) // '%s': destructor was implicitly defined as deleted
	template <class _Ty>
	struct _Wrap {
		_Ty _Value; // workaround for "T^ is not allowed in a union"
	};
#pragma warning(pop)

	template <typename T>
	using allocator = eqlib::everquest_allocator<T>;

	template <class _Ty>
	struct _NODISCARD _Tidy_guard { // class with destructor that calls _Tidy
		_Ty* _Target;
		_CONSTEXPR20 ~_Tidy_guard() {
			if (_Target) {
				_Target->_Tidy();
			}
		}
	};

	template <class _Ty>
	struct _NODISCARD _Tidy_deallocate_guard { // class with destructor that calls _Tidy_deallocate
		_Ty* _Target;
		_CONSTEXPR20 ~_Tidy_deallocate_guard() {
			if (_Target) {
				_Target->_Tidy_deallocate();
			}
		}
	};

	enum class _Pocma_values {
		_Equal_allocators, // usually allows contents to be stolen (e.g. with swap)
		_Propagate_allocators, // usually allows the allocator to be propagated, and then contents stolen
		_No_propagate_allocators, // usually turns moves into copies
	};

	template <class _Alloc>
	inline constexpr _Pocma_values _Choose_pocma_v =
		allocator_traits<_Alloc>::is_always_equal::value
		? _Pocma_values::_Equal_allocators
		: (allocator_traits<_Alloc>::propagate_on_container_move_assignment::value
			? _Pocma_values::_Propagate_allocators
			: _Pocma_values::_No_propagate_allocators);


	// assumes _Args have already been _Remove_cvref_t'd
	template <class _Key, class... _Args>
	struct _In_place_key_extract_set {
		// by default we can't extract the key in the emplace family and must construct a node we might not use
		static constexpr bool _Extractable = false;
	};

	template <class _Key>
	struct _In_place_key_extract_set<_Key, _Key> {
		// we can extract the key in emplace if the emplaced type is identical to the key type
		static constexpr bool _Extractable = true;
		static const _Key& _Extract(const _Key& _Val) noexcept {
			return _Val;
		}
	};

	// assumes _Args have already been _Remove_cvref_t'd
	template <class _Key, class... _Args>
	struct _In_place_key_extract_map {
		// by default we can't extract the key in the emplace family and must construct a node we might not use
		static constexpr bool _Extractable = false;
	};

	template <class _Key, class _Second>
	struct _In_place_key_extract_map<_Key, _Key, _Second> {
		// if we would call the pair(key, value) constructor family, we can use the first parameter as the key
		static constexpr bool _Extractable = true;
		static const _Key& _Extract(const _Key& _Val, const _Second&) noexcept {
			return _Val;
		}
	};

	template <class _Key, class _First, class _Second>
	struct _In_place_key_extract_map<_Key, pair<_First, _Second>> {
		// if we would call the pair(pair<other, other>) constructor family, we can use the pair.first member as the key
		static constexpr bool _Extractable = is_same_v<_Key, _Remove_cvref_t<_First>>;
		static const _Key& _Extract(const pair<_First, _Second>& _Val) {
			return _Val.first;
		}
	};

	template <class _Size_type, class _Unsigned_type>
	_NODISCARD constexpr _Size_type _Convert_size(const _Unsigned_type _Len) noexcept(
		sizeof(_Unsigned_type) <= sizeof(_Size_type)) {
		// convert _Unsigned_type to _Size_type, avoiding truncation
		_STL_INTERNAL_STATIC_ASSERT(_Unsigned_type(-1) > 0);
		_STL_INTERNAL_STATIC_ASSERT(_Size_type(-1) > 0);

		if constexpr (sizeof(_Unsigned_type) > sizeof(_Size_type)) {
			if (_Len > (std::numeric_limits<_Size_type>::max)()) {
				_Xlength_error("size is too long for _Size_type");
			}
		}

		return static_cast<_Size_type>(_Len);
	}

	template <class _Ptrty>
	_NODISCARD constexpr auto _Unfancy(_Ptrty _Ptr) noexcept { // converts from a fancy pointer to a plain pointer
		return _STD addressof(*_Ptr);
	}
}
