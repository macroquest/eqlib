// map standard header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// Adapted for use with eqlib

#pragma once

#include "eqlib/Allocator.h"

#include "eqlib/eqstd/utility.h"
#include "eqlib/eqstd/xmemory.h"
#include "eqlib/eqstd/xtree.h"

#include <type_traits>

namespace eqstd
{
	template <class _Kty, // key type
		class _Ty, // mapped type
		class _Pr, // comparator predicate type
		class _Alloc, // actual allocator type (should be value allocator)
		bool _Mfl> // true if multiple equivalent keys are permitted
		class _Tmap_traits { // traits required to make _Tree behave like a map
	public:
		using key_type = _Kty;
		using value_type = pair<const _Kty, _Ty>;
		using key_compare = _Pr;
		using allocator_type = _Alloc;

		static constexpr bool _Multi = _Mfl;

		class value_compare {
		public:
			[[nodiscard]] bool operator()(const value_type& _Left, const value_type& _Right) const {
				// test if _Left precedes _Right by comparing just keys
				return comp(_Left.first, _Right.first);
			}

		protected:
			friend _Tree<_Tmap_traits>;

			value_compare(key_compare _Pred) : comp(_Pred) {}

			key_compare comp;
		};

		template <class _Ty1, class _Ty2>
		static const _Kty& _Kfn(const pair<_Ty1, _Ty2>& _Val) { // extract key from element value
			return _Val.first;
		}
	};

	// CLASS TEMPLATE map
	template <class _Kty, class _Ty, class _Pr = std::less<_Kty>, class _Alloc = allocator<pair<const _Kty, _Ty>>>
	class map : public _Tree<_Tmap_traits<_Kty, _Ty, _Pr, _Alloc, false>> {
		// ordered red-black tree of {key, mapped} values, unique keys
	public:
		using _Mybase = _Tree<_Tmap_traits<_Kty, _Ty, _Pr, _Alloc, false>>;
		using _Nodeptr = typename _Mybase::_Nodeptr;
		using key_type = _Kty;
		using mapped_type = _Ty;
		using key_compare = _Pr;
		using value_compare = typename _Mybase::value_compare;
		using value_type = pair<const _Kty, _Ty>;
		using allocator_type = typename _Mybase::allocator_type;
		using size_type = typename _Mybase::size_type;
		using difference_type = typename _Mybase::difference_type;
		using pointer = typename _Mybase::pointer;
		using const_pointer = typename _Mybase::const_pointer;
		using reference = value_type&;
		using const_reference = const value_type&;
		using iterator = typename _Mybase::iterator;
		using const_iterator = typename _Mybase::const_iterator;
		using reverse_iterator = typename _Mybase::reverse_iterator;
		using const_reverse_iterator = typename _Mybase::const_reverse_iterator;

		using _Alnode = typename _Mybase::_Alnode;
		using _Alnode_traits = typename _Mybase::_Alnode_traits;

		map() : _Mybase(key_compare()) {}

		explicit map(const allocator_type& _Al) : _Mybase(key_compare(), _Al) {}

		map(const map& _Right) : _Mybase(_Right, _Alnode_traits::select_on_container_copy_construction(_Right._Getal())) {}

		map(const map& _Right, const allocator_type& _Al) : _Mybase(_Right, _Al) {}

		explicit map(const key_compare& _Pred) : _Mybase(_Pred) {}

		map(const key_compare& _Pred, const allocator_type& _Al) : _Mybase(_Pred, _Al) {}

		template <class _Iter>
		map(_Iter _First, _Iter _Last) : _Mybase(key_compare()) {
			insert(_First, _Last);
		}

		template <class _Iter>
		map(_Iter _First, _Iter _Last, const key_compare& _Pred) : _Mybase(_Pred) {
			insert(_First, _Last);
		}

		template <class _Iter>
		map(_Iter _First, _Iter _Last, const allocator_type& _Al) : _Mybase(key_compare(), _Al) {
			insert(_First, _Last);
		}

		template <class _Iter>
		map(_Iter _First, _Iter _Last, const key_compare& _Pred, const allocator_type& _Al) : _Mybase(_Pred, _Al) {
			insert(_First, _Last);
		}

		map& operator=(const map& _Right) {
			_Mybase::operator=(_Right);
			return *this;
		}

		map(map&& _Right) : _Mybase(std::move(_Right)) {}

		map(map&& _Right, const allocator_type& _Al) : _Mybase(std::move(_Right), _Al) {}

		map& operator=(map&& _Right) noexcept(_Alnode_traits::is_always_equal::value && std::is_nothrow_move_assignable_v<_Pr>) {
			_Mybase::operator=(std::move(_Right));
			return *this;
		}

		mapped_type& operator[](key_type&& _Keyval) { // find element matching _Keyval or insert value-initialized value
			return _Try_emplace(std::move(_Keyval)).first->_Myval.second;
		}

		void swap(map& _Right) noexcept(noexcept(_Mybase::swap(_Right))) {
			_Mybase::swap(_Right);
		}

		using _Mybase::insert;

		template <class _Valty, std::enable_if_t<std::is_constructible_v<value_type, _Valty>, int> = 0>
		pair<iterator, bool> insert(_Valty&& _Val) {
			return this->emplace(std::forward<_Valty>(_Val));
		}

		template <class _Valty, std::enable_if_t<std::is_constructible_v<value_type, _Valty>, int> = 0>
		iterator insert(const_iterator _Where, _Valty&& _Val) {
			return this->emplace_hint(_Where, std::forward<_Valty>(_Val));
		}

	private:
		template <class _Keyty, class... _Mappedty>
		pair<_Nodeptr, bool> _Try_emplace(_Keyty&& _Keyval, _Mappedty&&... _Mapval) {
			const auto _Loc = _Mybase::_Find_lower_bound(_Keyval);
			if (_Mybase::_Lower_bound_duplicate(_Loc._Bound, _Keyval)) {
				return { _Loc._Bound, false };
			}

			_Mybase::_Check_grow_by_1();

			const auto _Scary = _Mybase::_Get_scary();
			const auto _Inserted = _Tree_temp_node<_Alnode>(_Mybase::_Getal(), _Scary->_Myhead, std::piecewise_construct,
				std::forward_as_tuple(std::forward<_Keyty>(_Keyval)),
				std::forward_as_tuple(std::forward<_Mappedty>(_Mapval)...))
				._Release();

			// nothrow hereafter
			return { _Scary->_Insert_node(_Loc._Location, _Inserted), true };
		}

		template <class _Keyty, class... _Mappedty>
		_Nodeptr _Try_emplace_hint(const _Nodeptr _Hint, _Keyty&& _Keyval, _Mappedty&&... _Mapval) {
			const auto _Loc = _Mybase::_Find_hint(_Hint, _Keyval);
			if (_Loc._Duplicate) {
				return _Loc._Location._Parent;
			}

			_Mybase::_Check_grow_by_1();

			const auto _Scary = _Mybase::_Get_scary();
			const auto _Inserted = _Tree_temp_node<_Alnode>(_Mybase::_Getal(), _Scary->_Myhead, std::piecewise_construct,
				std::forward_as_tuple(std::forward<_Keyty>(_Keyval)),
				std::forward_as_tuple(std::forward<_Mappedty>(_Mapval)...))
				._Release();

			// nothrow hereafter
			return _Scary->_Insert_node(_Loc._Location, _Inserted);
		}

	public:
		template <class... _Mappedty>
		pair<iterator, bool> try_emplace(const key_type& _Keyval, _Mappedty&&... _Mapval) {
			const auto _Result = _Try_emplace(_Keyval, std::forward<_Mappedty>(_Mapval)...);
			return { iterator(_Result.first, _Mybase::_Get_scary()), _Result.second };
		}

		template <class... _Mappedty>
		iterator try_emplace(const const_iterator _Hint, const key_type& _Keyval, _Mappedty&&... _Mapval) {
			return iterator(
				_Try_emplace_hint(_Hint._Ptr, _Keyval, std::forward<_Mappedty>(_Mapval)...), _Mybase::_Get_scary());
		}

		template <class... _Mappedty>
		pair<iterator, bool> try_emplace(key_type&& _Keyval, _Mappedty&&... _Mapval) {
			const auto _Result = _Try_emplace(std::move(_Keyval), std::forward<_Mappedty>(_Mapval)...);
			return { iterator(_Result.first, _Mybase::_Get_scary()), _Result.second };
		}

		template <class... _Mappedty>
		iterator try_emplace(const const_iterator _Hint, key_type&& _Keyval, _Mappedty&&... _Mapval) {
			return iterator(_Try_emplace_hint(_Hint._Ptr, std::move(_Keyval), std::forward<_Mappedty>(_Mapval)...),
				_Mybase::_Get_scary());
		}

	private:
		template <class _Keyty, class _Mappedty>
		pair<_Nodeptr, bool> _Insert_or_assign(_Keyty&& _Keyval, _Mappedty&& _Mapval) {
			const auto _Loc = _Mybase::_Find_lower_bound(_Keyval);
			if (_Mybase::_Lower_bound_duplicate(_Loc._Bound, _Keyval)) {
				_Loc._Bound->_Myval.second = std::forward<_Mappedty>(_Mapval);
				return { _Loc._Bound, false };
			}

			_Mybase::_Check_grow_by_1();

			const auto _Scary = _Mybase::_Get_scary();
			const auto _Inserted = _Tree_temp_node<_Alnode>(
				_Mybase::_Getal(), _Scary->_Myhead, std::forward<_Keyty>(_Keyval), std::forward<_Mappedty>(_Mapval))
				._Release();

			// nothrow hereafter
			return { _Scary->_Insert_node(_Loc._Location, _Inserted), true };
		}

		template <class _Keyty, class _Mappedty>
		_Nodeptr _Insert_or_assign_hint(const _Nodeptr _Hint, _Keyty&& _Keyval, _Mappedty&& _Mapval) {
			const auto _Loc = _Mybase::_Find_hint(_Hint, _Keyval);
			if (_Loc._Duplicate) {
				_Loc._Location._Parent->_Myval.second = std::forward<_Mappedty>(_Mapval);
				return _Loc._Location._Parent;
			}

			_Mybase::_Check_grow_by_1();

			const auto _Scary = _Mybase::_Get_scary();
			const auto _Inserted = _Tree_temp_node<_Alnode>(
				_Mybase::_Getal(), _Scary->_Myhead, std::forward<_Keyty>(_Keyval), std::forward<_Mappedty>(_Mapval))
				._Release();

			// nothrow hereafter
			return _Scary->_Insert_node(_Loc._Location, _Inserted);
		}

	public:
		template <class _Mappedty>
		pair<iterator, bool> insert_or_assign(const key_type& _Keyval, _Mappedty&& _Mapval) {
			const auto _Result = _Insert_or_assign(_Keyval, std::forward<_Mappedty>(_Mapval));
			return { iterator(_Result.first, _Mybase::_Get_scary()), _Result.second };
		}

		template <class _Mappedty>
		iterator insert_or_assign(const const_iterator _Hint, const key_type& _Keyval, _Mappedty&& _Mapval) {
			return iterator(
				_Insert_or_assign_hint(_Hint._Ptr, _Keyval, std::forward<_Mappedty>(_Mapval)), _Mybase::_Get_scary());
		}

		template <class _Mappedty>
		pair<iterator, bool> insert_or_assign(key_type&& _Keyval, _Mappedty&& _Mapval) {
			const auto _Result = _Insert_or_assign(std::move(_Keyval), std::forward<_Mappedty>(_Mapval));
			return { iterator(_Result.first, _Mybase::_Get_scary()), _Result.second };
		}

		template <class _Mappedty>
		iterator insert_or_assign(const const_iterator _Hint, key_type&& _Keyval, _Mappedty&& _Mapval) {
			return iterator(_Insert_or_assign_hint(_Hint._Ptr, std::move(_Keyval), std::forward<_Mappedty>(_Mapval)),
				_Mybase::_Get_scary());
		}

		map(std::initializer_list<value_type> _Ilist) : _Mybase(key_compare()) {
			insert(_Ilist);
		}

		map(std::initializer_list<value_type> _Ilist, const key_compare& _Pred) : _Mybase(_Pred) {
			insert(_Ilist);
		}

		map(std::initializer_list<value_type> _Ilist, const allocator_type& _Al) : _Mybase(key_compare(), _Al) {
			insert(_Ilist);
		}

		map(std::initializer_list<value_type> _Ilist, const key_compare& _Pred, const allocator_type& _Al)
			: _Mybase(_Pred, _Al) {
			insert(_Ilist);
		}

		map& operator=(std::initializer_list<value_type> _Ilist) {
			_Mybase::clear();
			insert(_Ilist);
			return *this;
		}

		mapped_type& operator[](const key_type& _Keyval) {
			return _Try_emplace(_Keyval).first->_Myval.second;
		}

		[[nodiscard]] mapped_type& at(const key_type& _Keyval) {
			const auto _Loc = _Mybase::_Find_lower_bound(_Keyval);
			if (!_Mybase::_Lower_bound_duplicate(_Loc._Bound, _Keyval)) {
				_Xout_of_range("invalid map<K, T> key");
			}

			return _Loc._Bound->_Myval.second;
		}

		[[nodiscard]] const mapped_type& at(const key_type& _Keyval) const {
			const auto _Loc = _Mybase::_Find_lower_bound(_Keyval);
			if (!_Mybase::_Lower_bound_duplicate(_Loc._Bound, _Keyval)) {
				_Xout_of_range("invalid map<K, T> key");
			}

			return _Loc._Bound->_Myval.second;
		}

		using _Mybase::_Unchecked_begin;
		using _Mybase::_Unchecked_end;
	};
}
