// xtree internal header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

// Adapted for use with eqlib

#pragma once

#include "eqlib/eqstd/utility.h"
#include "eqlib/eqstd/xmemory.h"

namespace eqstd
{
	struct _Default_sentinel {}; // empty struct to serve as the end of a range

	// CLASS TEMPLATE _Tree_unchecked_const_iterator
	template <class _Mytree>
	class _Tree_unchecked_const_iterator : public _Iterator_base0 {
	public:
		using iterator_category = std::bidirectional_iterator_tag;

		using _Base = _Iterator_base0;
		using _Nodeptr = typename _Mytree::_Nodeptr;
		using value_type = typename _Mytree::value_type;
		using difference_type = typename _Mytree::difference_type;
		using pointer = typename _Mytree::const_pointer;
		using reference = const value_type&;

		_Tree_unchecked_const_iterator() noexcept : _Ptr() {}

		_Tree_unchecked_const_iterator(_Nodeptr _Pnode, const _Mytree* _Plist) noexcept : _Ptr(_Pnode) {
			this->_Adopt(_Plist);
		}

		[[nodiscard]] reference operator*() const noexcept {
			return _Ptr->_Myval;
		}

		[[nodiscard]] pointer operator->() const noexcept {
			return pointer_traits<pointer>::pointer_to(**this);
		}

		_Tree_unchecked_const_iterator& operator++() noexcept {
			if (_Ptr->_Right->_Isnil) { // climb looking for right subtree
				_Nodeptr _Pnode;
				while (!(_Pnode = _Ptr->_Parent)->_Isnil && _Ptr == _Pnode->_Right) {
					_Ptr = _Pnode; // ==> parent while right subtree
				}

				_Ptr = _Pnode; // ==> parent (head if end())
			}
			else {
				_Ptr = _Mytree::_Min(_Ptr->_Right); // ==> smallest of right subtree
			}

			return *this;
		}

		_Tree_unchecked_const_iterator operator++(int) noexcept {
			_Tree_unchecked_const_iterator _Tmp = *this;
			++* this;
			return _Tmp;
		}

		_Tree_unchecked_const_iterator& operator--() noexcept {
			if (_Ptr->_Isnil) {
				_Ptr = _Ptr->_Right; // end() ==> rightmost
			}
			else if (_Ptr->_Left->_Isnil) { // climb looking for left subtree
				_Nodeptr _Pnode;
				while (!(_Pnode = _Ptr->_Parent)->_Isnil && _Ptr == _Pnode->_Left) {
					_Ptr = _Pnode; // ==> parent while left subtree
				}

				if (!_Ptr->_Isnil) { // decrement non-begin()
					_Ptr = _Pnode; // ==> parent if not head
				}
			}
			else {
				_Ptr = _Mytree::_Max(_Ptr->_Left); // ==> largest of left subtree
			}

			return *this;
		}

		_Tree_unchecked_const_iterator operator--(int) noexcept {
			_Tree_unchecked_const_iterator _Tmp = *this;
			--* this;
			return _Tmp;
		}

		[[nodiscard]] bool operator==(const _Tree_unchecked_const_iterator& _Right) const noexcept {
			return _Ptr == _Right._Ptr;
		}

		[[nodiscard]] bool operator!=(const _Tree_unchecked_const_iterator& _Right) const noexcept {
			return !(*this == _Right);
		}

		[[nodiscard]] bool operator==(_Default_sentinel) const noexcept {
			return !!_Ptr->_Isnil; // TRANSITION, avoid warning C4800:
								   // "Implicit conversion from 'char' to bool. Possible information loss" (/Wall)
		}

		[[nodiscard]] bool operator!=(_Default_sentinel) const noexcept {
			return !_Ptr->_Isnil;
		}

		_Nodeptr _Ptr; // pointer to node
	};

	// CLASS TEMPLATE _Tree_unchecked_iterator
	template <class _Mytree>
	class _Tree_unchecked_iterator : public _Tree_unchecked_const_iterator<_Mytree> {
	public:
		using _Mybase = _Tree_unchecked_const_iterator<_Mytree>;
		using iterator_category = std::bidirectional_iterator_tag;

		using _Nodeptr = typename _Mytree::_Nodeptr;
		using value_type = typename _Mytree::value_type;
		using difference_type = typename _Mytree::difference_type;
		using pointer = typename _Mytree::pointer;
		using reference = value_type&;

		using _Mybase::_Mybase;

		[[nodiscard]] reference operator*() const noexcept {
			return const_cast<reference>(_Mybase::operator*());
		}

		[[nodiscard]] pointer operator->() const noexcept {
			return pointer_traits<pointer>::pointer_to(**this);
		}

		_Tree_unchecked_iterator& operator++() noexcept {
			_Mybase::operator++();
			return *this;
		}

		_Tree_unchecked_iterator operator++(int) noexcept {
			_Tree_unchecked_iterator _Tmp = *this;
			_Mybase::operator++();
			return _Tmp;
		}

		_Tree_unchecked_iterator& operator--() noexcept {
			_Mybase::operator--();
			return *this;
		}

		_Tree_unchecked_iterator operator--(int) noexcept {
			_Tree_unchecked_iterator _Tmp = *this;
			_Mybase::operator--();
			return _Tmp;
		}
	};

	// CLASS TEMPLATE _Tree_const_iterator
	template <class _Mytree>
	class _Tree_const_iterator : public _Tree_unchecked_const_iterator<_Mytree> {
	public:
		using _Mybase = _Tree_unchecked_const_iterator<_Mytree>;
		using iterator_category = std::bidirectional_iterator_tag;

		using _Nodeptr = typename _Mytree::_Nodeptr;
		using value_type = typename _Mytree::value_type;
		using difference_type = typename _Mytree::difference_type;
		using pointer = typename _Mytree::const_pointer;
		using reference = const value_type&;

		using _Mybase::_Mybase;

		[[nodiscard]] reference operator*() const noexcept {
			return this->_Ptr->_Myval;
		}

		[[nodiscard]] pointer operator->() const noexcept {
			return pointer_traits<pointer>::pointer_to(**this);
		}

		_Tree_const_iterator& operator++() noexcept {
			_Mybase::operator++();
			return *this;
		}

		_Tree_const_iterator operator++(int) noexcept {
			_Tree_const_iterator _Tmp = *this;
			++* this;
			return _Tmp;
		}

		_Tree_const_iterator& operator--() noexcept {
			_Mybase::operator--();
			return *this;
		}

		_Tree_const_iterator operator--(int) noexcept {
			_Tree_const_iterator _Tmp = *this;
			--* this;
			return _Tmp;
		}

		[[nodiscard]] bool operator==(const _Tree_const_iterator& _Right) const noexcept {
			return this->_Ptr == _Right._Ptr;
		}

		[[nodiscard]] bool operator!=(const _Tree_const_iterator& _Right) const noexcept {
			return !(*this == _Right);
		}

		using _Prevent_inheriting_unwrap = _Tree_const_iterator;

		[[nodiscard]] _Tree_unchecked_const_iterator<_Mytree> _Unwrapped() const noexcept {
			return _Tree_unchecked_const_iterator<_Mytree>(this->_Ptr, static_cast<const _Mytree*>(this->_Getcont()));
		}

		void _Seek_to(const _Tree_unchecked_const_iterator<_Mytree> _It) noexcept {
			this->_Ptr = _It._Ptr;
		}
	};

	// CLASS TEMPLATE _Tree_iterator
	template <class _Mytree>
	class _Tree_iterator : public _Tree_const_iterator<_Mytree> {
	public:
		using _Mybase = _Tree_const_iterator<_Mytree>;
		using iterator_category = std::bidirectional_iterator_tag;

		using _Nodeptr = typename _Mytree::_Nodeptr;
		using value_type = typename _Mytree::value_type;
		using difference_type = typename _Mytree::difference_type;

		using pointer = typename _Mytree::pointer;
		using reference = value_type&;

		using _Mybase::_Mybase;

		[[nodiscard]] reference operator*() const noexcept {
			return const_cast<reference>(_Mybase::operator*());
		}

		[[nodiscard]] pointer operator->() const noexcept {
			return pointer_traits<pointer>::pointer_to(**this);
		}

		_Tree_iterator& operator++() noexcept {
			_Mybase::operator++();
			return *this;
		}

		_Tree_iterator operator++(int) noexcept {
			_Tree_iterator _Tmp = *this;
			_Mybase::operator++();
			return _Tmp;
		}

		_Tree_iterator& operator--() noexcept {
			_Mybase::operator--();
			return *this;
		}

		_Tree_iterator operator--(int) noexcept {
			_Tree_iterator _Tmp = *this;
			_Mybase::operator--();
			return _Tmp;
		}

		using _Prevent_inheriting_unwrap = _Tree_iterator;

		[[nodiscard]] _Tree_unchecked_iterator<_Mytree> _Unwrapped() const noexcept {
			return _Tree_unchecked_iterator<_Mytree>(this->_Ptr, static_cast<const _Mytree*>(this->_Getcont()));
		}
	};

	// tree TYPE WRAPPERS
	template <class _Value_type, class _Size_type, class _Difference_type, class _Pointer, class _Const_pointer,
		class _Reference, class _Const_reference, class _Nodeptr_type>
		struct _Tree_iter_types {
		using value_type = _Value_type;
		using size_type = _Size_type;
		using difference_type = _Difference_type;
		using pointer = _Pointer;
		using const_pointer = _Const_pointer;
		using _Nodeptr = _Nodeptr_type;
	};

	template <class _Value_type, class _Voidptr>
	struct _Tree_node {
		using _Nodeptr = _Rebind_pointer_t<_Voidptr, _Tree_node>;
		using value_type = _Value_type;
		_Nodeptr _Left; // left subtree, or smallest element if head
		_Nodeptr _Parent; // parent, or root of tree if head
		_Nodeptr _Right; // right subtree, or largest element if head
		char _Color; // _Red or _Black, _Black if head
		char _Isnil; // true only if head (also nil) node; TRANSITION, should be bool
		value_type _Myval; // the stored value, unused if head

		enum _Redbl { // colors for link to parent
			_Red,
			_Black
		};

		_Tree_node(const _Tree_node&) = delete;
		_Tree_node& operator=(const _Tree_node&) = delete;

		template <class _Alloc>
		static _Nodeptr _Buyheadnode(_Alloc& _Al) {
			static_assert(is_same_v<typename _Alloc::value_type, _Tree_node>, "Bad _Buyheadnode call");
			const auto _Pnode = _Al.allocate(1);
			_Construct_in_place(_Pnode->_Left, _Pnode);
			_Construct_in_place(_Pnode->_Parent, _Pnode);
			_Construct_in_place(_Pnode->_Right, _Pnode);
			_Pnode->_Color = _Black;
			_Pnode->_Isnil = true;
			return _Pnode;
		}

		template <class _Alloc, class... _Valty>
		static _Nodeptr _Buynode(_Alloc& _Al, _Nodeptr _Myhead, _Valty&&... _Val) {
			// allocate a node with defaults and set links and value
			static_assert(is_same_v<typename _Alloc::value_type, _Tree_node>, "Bad _Buynode call");
			_Alloc_construct_ptr<_Alloc> _Newnode(_Al);
			_Newnode._Allocate();
			std::allocator_traits<_Alloc>::construct(_Al, std::addressof(_Newnode._Ptr->_Myval), std::forward<_Valty>(_Val)...);
			_Construct_in_place(_Newnode._Ptr->_Left, _Myhead);
			_Construct_in_place(_Newnode._Ptr->_Parent, _Myhead);
			_Construct_in_place(_Newnode._Ptr->_Right, _Myhead);
			_Newnode._Ptr->_Color = _Red;
			_Newnode._Ptr->_Isnil = false;
			return _Newnode._Release();
		}

		template <class _Alloc>
		static void _Freenode0(_Alloc& _Al, _Nodeptr _Ptr) noexcept {
			static_assert(std::is_same_v<typename _Alloc::value_type, _Tree_node>, "Bad _Freenode0 call");
			_Destroy_in_place(_Ptr->_Left);
			_Destroy_in_place(_Ptr->_Parent);
			_Destroy_in_place(_Ptr->_Right);
			std::allocator_traits<_Alloc>::deallocate(_Al, _Ptr, 1);
		}

		template <class _Alloc>
		static void _Freenode(_Alloc& _Al, _Nodeptr _Ptr) noexcept {
			static_assert(std::is_same_v<typename _Alloc::value_type, _Tree_node>, "Bad _Freenode call");
			std::allocator_traits<_Alloc>::destroy(_Al, std::addressof(_Ptr->_Myval));
			_Freenode0(_Al, _Ptr);
		}
	};

	template <class _Ty>
	struct _Tree_simple_types : _Simple_types<_Ty> {
		using _Node = _Tree_node<_Ty, void*>;
		using _Nodeptr = _Node*;
	};

	enum class _Tree_child {
		_Right, // perf note: compare with _Right rather than _Left where possible for comparison with zero
		_Left,
		_Unused // indicates that tree child should never be used for insertion
	};

	template <class _Nodeptr>
	struct _Tree_id {
		_Nodeptr _Parent; // the leaf node under which a new node should be inserted
		_Tree_child _Child;
	};

	template <class _Nodeptr>
	struct _Tree_find_result {
		_Tree_id<_Nodeptr> _Location;
		_Nodeptr _Bound;
	};

	template <class _Nodeptr>
	struct _Tree_find_hint_result {
		_Tree_id<_Nodeptr> _Location;
		bool _Duplicate;
	};

	[[noreturn]] inline void _Throw_tree_length_error() {
		std::_Xlength_error("map/set too long");
	}

	// CLASS TEMPLATE _Tree_val
	template <class _Val_types>
	class _Tree_val : public _Container_base {
	public:
		using _Nodeptr = typename _Val_types::_Nodeptr;

		using value_type = typename _Val_types::value_type;
		using size_type = typename _Val_types::size_type;
		using difference_type = typename _Val_types::difference_type;
		using pointer = typename _Val_types::pointer;
		using const_pointer = typename _Val_types::const_pointer;
		using reference = value_type&;
		using const_reference = const value_type&;

		using _Unchecked_const_iterator = _Tree_unchecked_const_iterator<_Tree_val>;
		using const_iterator = _Tree_const_iterator<_Tree_val>;

		_Tree_val() noexcept : _Myhead(), _Mysize(0) {}

		enum _Redbl { // colors for link to parent
			_Red,
			_Black
		};

		static _Nodeptr _Max(_Nodeptr _Pnode) noexcept { // return rightmost node in subtree at _Pnode
			while (!_Pnode->_Right->_Isnil) {
				_Pnode = _Pnode->_Right;
			}

			return _Pnode;
		}

		static _Nodeptr _Min(_Nodeptr _Pnode) noexcept { // return leftmost node in subtree at _Pnode
			while (!_Pnode->_Left->_Isnil) {
				_Pnode = _Pnode->_Left;
			}

			return _Pnode;
		}

		void _Lrotate(_Nodeptr _Wherenode) noexcept { // promote right node to root of subtree
			_Nodeptr _Pnode = _Wherenode->_Right;
			_Wherenode->_Right = _Pnode->_Left;

			if (!_Pnode->_Left->_Isnil) {
				_Pnode->_Left->_Parent = _Wherenode;
			}

			_Pnode->_Parent = _Wherenode->_Parent;

			if (_Wherenode == _Myhead->_Parent) {
				_Myhead->_Parent = _Pnode;
			}
			else if (_Wherenode == _Wherenode->_Parent->_Left) {
				_Wherenode->_Parent->_Left = _Pnode;
			}
			else {
				_Wherenode->_Parent->_Right = _Pnode;
			}

			_Pnode->_Left = _Wherenode;
			_Wherenode->_Parent = _Pnode;
		}

		void _Rrotate(_Nodeptr _Wherenode) noexcept { // promote left node to root of subtree
			_Nodeptr _Pnode = _Wherenode->_Left;
			_Wherenode->_Left = _Pnode->_Right;

			if (!_Pnode->_Right->_Isnil) {
				_Pnode->_Right->_Parent = _Wherenode;
			}

			_Pnode->_Parent = _Wherenode->_Parent;

			if (_Wherenode == _Myhead->_Parent) {
				_Myhead->_Parent = _Pnode;
			}
			else if (_Wherenode == _Wherenode->_Parent->_Right) {
				_Wherenode->_Parent->_Right = _Pnode;
			}
			else {
				_Wherenode->_Parent->_Left = _Pnode;
			}

			_Pnode->_Right = _Wherenode;
			_Wherenode->_Parent = _Pnode;
		}

		_Nodeptr _Extract(_Unchecked_const_iterator _Where) noexcept {
			_Nodeptr _Erasednode = _Where._Ptr; // node to erase
			++_Where; // save successor iterator for return

			_Nodeptr _Fixnode; // the node to recolor as needed
			_Nodeptr _Fixnodeparent; // parent of _Fixnode (which may be nil)
			_Nodeptr _Pnode = _Erasednode;

			if (_Pnode->_Left->_Isnil) {
				_Fixnode = _Pnode->_Right; // stitch up right subtree
			}
			else if (_Pnode->_Right->_Isnil) {
				_Fixnode = _Pnode->_Left; // stitch up left subtree
			}
			else { // two subtrees, must lift successor node to replace erased
				_Pnode = _Where._Ptr; // _Pnode is successor node
				_Fixnode = _Pnode->_Right; // _Fixnode is only subtree
			}

			if (_Pnode == _Erasednode) { // at most one subtree, relink it
				_Fixnodeparent = _Erasednode->_Parent;
				if (!_Fixnode->_Isnil) {
					_Fixnode->_Parent = _Fixnodeparent; // link up
				}

				if (_Myhead->_Parent == _Erasednode) {
					_Myhead->_Parent = _Fixnode; // link down from root
				}
				else if (_Fixnodeparent->_Left == _Erasednode) {
					_Fixnodeparent->_Left = _Fixnode; // link down to left
				}
				else {
					_Fixnodeparent->_Right = _Fixnode; // link down to right
				}

				if (_Myhead->_Left == _Erasednode) {
					_Myhead->_Left = _Fixnode->_Isnil ? _Fixnodeparent // smallest is parent of erased node
						: _Min(_Fixnode); // smallest in relinked subtree
				}

				if (_Myhead->_Right == _Erasednode) {
					_Myhead->_Right = _Fixnode->_Isnil ? _Fixnodeparent // largest is parent of erased node
						: _Max(_Fixnode); // largest in relinked subtree
				}
			}
			else { // erased has two subtrees, _Pnode is successor to erased
				_Erasednode->_Left->_Parent = _Pnode; // link left up
				_Pnode->_Left = _Erasednode->_Left; // link successor down

				if (_Pnode == _Erasednode->_Right) {
					_Fixnodeparent = _Pnode; // successor is next to erased
				}
				else { // successor further down, link in place of erased
					_Fixnodeparent = _Pnode->_Parent; // parent is successor's
					if (!_Fixnode->_Isnil) {
						_Fixnode->_Parent = _Fixnodeparent; // link fix up
					}

					_Fixnodeparent->_Left = _Fixnode; // link fix down
					_Pnode->_Right = _Erasednode->_Right; // link next down
					_Erasednode->_Right->_Parent = _Pnode; // right up
				}

				if (_Myhead->_Parent == _Erasednode) {
					_Myhead->_Parent = _Pnode; // link down from root
				}
				else if (_Erasednode->_Parent->_Left == _Erasednode) {
					_Erasednode->_Parent->_Left = _Pnode; // link down to left
				}
				else {
					_Erasednode->_Parent->_Right = _Pnode; // link down to right
				}

				_Pnode->_Parent = _Erasednode->_Parent; // link successor up
				std::swap(_Pnode->_Color, _Erasednode->_Color); // recolor it
			}

			if (_Erasednode->_Color == _Black) { // erasing black link, must recolor/rebalance tree
				for (; _Fixnode != _Myhead->_Parent && _Fixnode->_Color == _Black; _Fixnodeparent = _Fixnode->_Parent) {
					if (_Fixnode == _Fixnodeparent->_Left) { // fixup left subtree
						_Pnode = _Fixnodeparent->_Right;
						if (_Pnode->_Color == _Red) { // rotate red up from right subtree
							_Pnode->_Color = _Black;
							_Fixnodeparent->_Color = _Red;
							_Lrotate(_Fixnodeparent);
							_Pnode = _Fixnodeparent->_Right;
						}

						if (_Pnode->_Isnil) {
							_Fixnode = _Fixnodeparent; // shouldn't happen
						}
						else if (_Pnode->_Left->_Color == _Black
							&& _Pnode->_Right->_Color == _Black) { // redden right subtree with black children
							_Pnode->_Color = _Red;
							_Fixnode = _Fixnodeparent;
						}
						else { // must rearrange right subtree
							if (_Pnode->_Right->_Color == _Black) { // rotate red up from left sub-subtree
								_Pnode->_Left->_Color = _Black;
								_Pnode->_Color = _Red;
								_Rrotate(_Pnode);
								_Pnode = _Fixnodeparent->_Right;
							}

							_Pnode->_Color = _Fixnodeparent->_Color;
							_Fixnodeparent->_Color = _Black;
							_Pnode->_Right->_Color = _Black;
							_Lrotate(_Fixnodeparent);
							break; // tree now recolored/rebalanced
						}
					}
					else { // fixup right subtree
						_Pnode = _Fixnodeparent->_Left;
						if (_Pnode->_Color == _Red) { // rotate red up from left subtree
							_Pnode->_Color = _Black;
							_Fixnodeparent->_Color = _Red;
							_Rrotate(_Fixnodeparent);
							_Pnode = _Fixnodeparent->_Left;
						}

						if (_Pnode->_Isnil) {
							_Fixnode = _Fixnodeparent; // shouldn't happen
						}
						else if (_Pnode->_Right->_Color == _Black
							&& _Pnode->_Left->_Color == _Black) { // redden left subtree with black children
							_Pnode->_Color = _Red;
							_Fixnode = _Fixnodeparent;
						}
						else { // must rearrange left subtree
							if (_Pnode->_Left->_Color == _Black) { // rotate red up from right sub-subtree
								_Pnode->_Right->_Color = _Black;
								_Pnode->_Color = _Red;
								_Lrotate(_Pnode);
								_Pnode = _Fixnodeparent->_Left;
							}

							_Pnode->_Color = _Fixnodeparent->_Color;
							_Fixnodeparent->_Color = _Black;
							_Pnode->_Left->_Color = _Black;
							_Rrotate(_Fixnodeparent);
							break; // tree now recolored/rebalanced
						}
					}
				}

				_Fixnode->_Color = _Black; // stopping node is black
			}

			if (0 < _Mysize) {
				--_Mysize;
			}

			return _Erasednode;
		}

		_Nodeptr _Insert_node(const _Tree_id<_Nodeptr> _Loc, const _Nodeptr _Newnode) noexcept {
			++_Mysize;
			const auto _Head = _Myhead;
			_Newnode->_Parent = _Loc._Parent;
			if (_Loc._Parent == _Head) { // first node in tree, just set head values
				_Head->_Left = _Newnode;
				_Head->_Parent = _Newnode;
				_Head->_Right = _Newnode;
				_Newnode->_Color = _Black; // the root is black
				return _Newnode;
			}

			if (_Loc._Child == _Tree_child::_Right) { // add to right of _Loc._Parent
				_Loc._Parent->_Right = _Newnode;
				if (_Loc._Parent == _Head->_Right) { // remember rightmost node
					_Head->_Right = _Newnode;
				}
			}
			else { // add to left of _Loc._Parent
				_Loc._Parent->_Left = _Newnode;
				if (_Loc._Parent == _Head->_Left) { // remember leftmost node
					_Head->_Left = _Newnode;
				}
			}

			for (_Nodeptr _Pnode = _Newnode; _Pnode->_Parent->_Color == _Red;) {
				if (_Pnode->_Parent == _Pnode->_Parent->_Parent->_Left) { // fixup red-red in left subtree
					const auto _Parent_sibling = _Pnode->_Parent->_Parent->_Right;
					if (_Parent_sibling->_Color == _Red) { // parent's sibling has two red children, blacken both
						_Pnode->_Parent->_Color = _Black;
						_Parent_sibling->_Color = _Black;
						_Pnode->_Parent->_Parent->_Color = _Red;
						_Pnode = _Pnode->_Parent->_Parent;
					}
					else { // parent's sibling has red and black children
						if (_Pnode == _Pnode->_Parent->_Right) { // rotate right child to left
							_Pnode = _Pnode->_Parent;
							_Lrotate(_Pnode);
						}

						_Pnode->_Parent->_Color = _Black; // propagate red up
						_Pnode->_Parent->_Parent->_Color = _Red;
						_Rrotate(_Pnode->_Parent->_Parent);
					}
				}
				else { // fixup red-red in right subtree
					const auto _Parent_sibling = _Pnode->_Parent->_Parent->_Left;
					if (_Parent_sibling->_Color == _Red) { // parent's sibling has two red children, blacken both
						_Pnode->_Parent->_Color = _Black;
						_Parent_sibling->_Color = _Black;
						_Pnode->_Parent->_Parent->_Color = _Red;
						_Pnode = _Pnode->_Parent->_Parent;
					}
					else { // parent's sibling has red and black children
						if (_Pnode == _Pnode->_Parent->_Left) { // rotate left child to right
							_Pnode = _Pnode->_Parent;
							_Rrotate(_Pnode);
						}

						_Pnode->_Parent->_Color = _Black; // propagate red up
						_Pnode->_Parent->_Parent->_Color = _Red;
						_Lrotate(_Pnode->_Parent->_Parent);
					}
				}
			}

			_Head->_Parent->_Color = _Black; // root is always black
			return _Newnode;
		}

		void _Orphan_ptr(const _Nodeptr _Ptr) noexcept {
			(void)_Ptr;
		}

		template <class _Alnode>
		void _Erase_tree_and_orphan(_Alnode& _Al, _Nodeptr _Rootnode) noexcept {
			while (!_Rootnode->_Isnil) { // free subtrees, then node
				_Erase_tree_and_orphan(_Al, _Rootnode->_Right);
				auto _To_delete = std::exchange(_Rootnode, _Rootnode->_Left);
				_Orphan_ptr(_To_delete);
				_Alnode::value_type::_Freenode(_Al, _To_delete);
			}
		}

		template <class _Alnode>
		void _Erase_tree(_Alnode& _Al, _Nodeptr _Rootnode) noexcept {
			while (!_Rootnode->_Isnil) { // free subtrees, then node
				_Erase_tree(_Al, _Rootnode->_Right);
				_Alnode::value_type::_Freenode(_Al, std::exchange(_Rootnode, _Rootnode->_Left));
			}
		}

		template <class _Alnode>
		void _Erase_head(_Alnode& _Al) noexcept {
			this->_Orphan_all();
			_Erase_tree(_Al, _Myhead->_Parent);
			_Alnode::value_type::_Freenode0(_Al, _Myhead);
		}

		_Nodeptr _Myhead; // pointer to head node
		size_type _Mysize; // number of elements
	};

	// STRUCT TEMPLATE _Tree_head_scoped_ptr
	template <class _Alnode, class _Scary_val>
	struct _Tree_head_scoped_ptr { // temporary storage for allocated node pointers to ensure exception safety
		_Alnode& _Al;
		_Scary_val* _Mycont;

		_Tree_head_scoped_ptr(_Alnode& _Al_, _Scary_val& _Mycont_) : _Al(_Al_), _Mycont(std::addressof(_Mycont_)) {
			_Mycont->_Myhead = _Alnode::value_type::_Buyheadnode(_Al);
		}

		void _Release() noexcept {
			_Mycont = nullptr;
		}

		~_Tree_head_scoped_ptr() {
			if (_Mycont) {
				_Mycont->_Erase_head(_Al);
			}
		}
	};

	template <class _Alnode>
	struct _Tree_temp_node_alloc : _Alloc_construct_ptr<_Alnode> {
		// EH helper for _Tree_temp_node
		explicit _Tree_temp_node_alloc(_Alnode& _Al_) : _Alloc_construct_ptr<_Alnode>(_Al_) {
			_Alloc_construct_ptr<_Alnode>::_Allocate();
		}

		_Tree_temp_node_alloc(const _Tree_temp_node_alloc&) = delete;
		_Tree_temp_node_alloc& operator=(const _Tree_temp_node_alloc&) = delete;
	};

	template <class _Alnode>
	struct _Tree_temp_node : _Tree_temp_node_alloc<_Alnode> {
		// temporarily stores a constructed tree node
		using _Alnode_traits = std::allocator_traits<_Alnode>;
		using _Nodeptr = typename _Alnode_traits::pointer;

		enum _Redbl { // colors for link to parent
			_Red,
			_Black
		};

		template <class... _Valtys>
		explicit _Tree_temp_node(_Alnode& _Al_, _Nodeptr _Myhead, _Valtys&&... _Vals)
			: _Tree_temp_node_alloc<_Alnode>(_Al_) {
			_Alnode_traits::construct(this->_Al, std::addressof(this->_Ptr->_Myval), std::forward<_Valtys>(_Vals)...);
			_Construct_in_place(this->_Ptr->_Left, _Myhead);
			_Construct_in_place(this->_Ptr->_Parent, _Myhead);
			_Construct_in_place(this->_Ptr->_Right, _Myhead);
			this->_Ptr->_Color = _Red;
			this->_Ptr->_Isnil = false;
		}

		_Tree_temp_node(const _Tree_temp_node&) = delete;
		_Tree_temp_node& operator=(const _Tree_temp_node&) = delete;

		~_Tree_temp_node() {
			if (this->_Ptr) {
				_Destroy_in_place(this->_Ptr->_Left);
				_Destroy_in_place(this->_Ptr->_Parent);
				_Destroy_in_place(this->_Ptr->_Right);
				_Alnode_traits::destroy(this->_Al, std::addressof(this->_Ptr->_Myval));
			}
		}
	};

	// CLASS TEMPLATE _Tree
	template <class _Traits>
	class _Tree { // ordered red-black tree for map/multimap/set/multiset
	public:
		using value_type = typename _Traits::value_type;
		using allocator_type = typename _Traits::allocator_type;

	protected:
		using _Alty = _Rebind_alloc_t<allocator_type, value_type>;
		using _Alty_traits = std::allocator_traits<_Alty>;
		using _Node = _Tree_node<value_type, typename _Alty_traits::void_pointer>;
		using _Alnode = _Rebind_alloc_t<allocator_type, _Node>;
		using _Alnode_traits = std::allocator_traits<_Alnode>;
		using _Nodeptr = typename _Alnode_traits::pointer;

		using _Scary_val = _Tree_val<std::conditional_t<_Is_simple_alloc_v<_Alnode>, _Tree_simple_types<value_type>,
			_Tree_iter_types<value_type, typename _Alty_traits::size_type, typename _Alty_traits::difference_type,
			typename _Alty_traits::pointer, typename _Alty_traits::const_pointer, value_type&, const value_type&,
			_Nodeptr>>>;

		static constexpr bool _Multi = _Traits::_Multi;

		enum _Redbl { // colors for link to parent
			_Red,
			_Black
		};

	public:
		using key_type = typename _Traits::key_type;
		using value_compare = typename _Traits::value_compare;

		using key_compare = typename _Traits::key_compare;

		using size_type = typename _Alty_traits::size_type;
		using difference_type = typename _Alty_traits::difference_type;
		using pointer = typename _Alty_traits::pointer;
		using const_pointer = typename _Alty_traits::const_pointer;
		using reference = value_type&;
		using const_reference = const value_type&;

		using iterator =
			std::conditional_t<std::is_same_v<key_type, value_type>, _Tree_const_iterator<_Scary_val>, _Tree_iterator<_Scary_val>>;
		using const_iterator = _Tree_const_iterator<_Scary_val>;
		using _Unchecked_iterator = std::conditional_t<std::is_same_v<key_type, value_type>,
			_Tree_unchecked_const_iterator<_Scary_val>, _Tree_unchecked_iterator<_Scary_val>>;
		using _Unchecked_const_iterator = _Tree_unchecked_const_iterator<_Scary_val>;

		using reverse_iterator = std::reverse_iterator<iterator>;
		using const_reverse_iterator = std::reverse_iterator<const_iterator>;

		struct _Copy_tag {
			explicit _Copy_tag() = default;
		};

		struct _Move_tag {
			explicit _Move_tag() = default;
		};

		_Tree(const key_compare& _Parg) : _Mypair(_One_then_variadic_args_t{}, _Parg, _Zero_then_variadic_args_t{}) {
			_Alloc_sentinel_and_proxy();
		}

		_Tree(const key_compare& _Parg, const allocator_type& _Al)
			: _Mypair(_One_then_variadic_args_t{}, _Parg, _One_then_variadic_args_t{}, _Al) {
			_Alloc_sentinel_and_proxy();
		}

		template <class _Any_alloc>
		_Tree(const _Tree& _Right, _Any_alloc&& _Al)
			: _Mypair(_One_then_variadic_args_t{}, _Right.key_comp(), _One_then_variadic_args_t{},
				std::forward<_Any_alloc>(_Al)) {
			auto&& _Alproxy = _Fake_alloc;
			const auto _Scary = _Get_scary();
			_Container_proxy_ptr<_Alty> _Proxy(_Alproxy, *_Scary);
			_Tree_head_scoped_ptr<_Alnode, _Scary_val> _Sentinel(_Getal(), *_Scary);
			_Copy(_Right, _Copy_tag{});
			_Sentinel._Release();
			_Proxy._Release();
		}

		_Tree(_Tree&& _Right)
			: _Mypair(_One_then_variadic_args_t{}, _Right.key_comp(), // intentionally copy comparator, see LWG-2227
				_One_then_variadic_args_t{}, std::move(_Right._Getal())) {
			_Alloc_sentinel_and_proxy();
			_Swap_val_excluding_comp(_Right);
		}

	private:
		void _Different_allocator_move_construct(_Tree&& _Right) {
			// TRANSITION, VSO-761321 (inline into only caller when that is fixed)
			auto&& _Alproxy = _Fake_alloc;
			const auto _Scary = _Get_scary();
			_Container_proxy_ptr<_Alty> _Proxy(_Alproxy, *_Scary);
			_Tree_head_scoped_ptr<_Alnode, _Scary_val> _Sentinel(_Getal(), *_Scary);
			_Copy(_Right, _Move_tag{});
			_Sentinel._Release();
			_Proxy._Release();
		}

	public:
		_Tree(_Tree&& _Right, const allocator_type& _Al)
			: _Mypair(_One_then_variadic_args_t{}, _Right.key_comp(), // intentionally copy comparator, see LWG-2227
				_One_then_variadic_args_t{}, _Al) {
			if constexpr (!_Alnode_traits::is_always_equal::value) {
				if (_Getal() != _Right._Getal()) {
					_Different_allocator_move_construct(std::move(_Right));
					return;
				}
			}

			_Alloc_sentinel_and_proxy();
			_Swap_val_excluding_comp(_Right);
		}

	private:
		void _Move_assign(_Tree& _Right, _Equal_allocators) noexcept(std::is_nothrow_move_assignable_v<key_compare>) {
			clear();
			_Getcomp() = _Right._Getcomp(); // intentionally copy comparator, see LWG-2227
			_Pocma(_Getal(), _Right._Getal());
			_Swap_val_excluding_comp(_Right);
		}

		void _Move_assign(_Tree& _Right, _Propagate_allocators) {
			if (_Getal() == _Right._Getal()) {
				_Move_assign(_Right, _Equal_allocators{});
			}
			else {
				clear();
				_Getcomp() = _Right._Getcomp(); // intentionally copy comparator, see LWG-2227
				auto&& _Alproxy = _Fake_alloc;
				auto&& _Right_alproxy = _Fake_alloc;
				_Container_proxy_ptr<_Alty> _Proxy(_Right_alproxy, _Leave_proxy_unbound{});
				const auto _Scary = _Get_scary();
				const auto _Right_scary = _Right._Get_scary();
				const auto _Newhead = std::exchange(_Right_scary->_Myhead, _Node::_Buyheadnode(_Right._Getal()));
				const auto _Newsize = std::exchange(_Right_scary->_Mysize, size_type{ 0 });
				_Scary->_Erase_head(_Getal());
				_Pocma(_Getal(), _Right._Getal());
				_Scary->_Myhead = _Newhead;
				_Scary->_Mysize = _Newsize;
				_Proxy._Bind(_Alproxy, _Scary);
				_Scary->_Swap_proxy_and_iterators(*_Right_scary);
			}
		}

		void _Move_assign(_Tree& _Right, _No_propagate_allocators) {
			if (_Getal() == _Right._Getal()) {
				_Move_assign(_Right, _Equal_allocators{});
			}
			else {
				clear();
				_Getcomp() = _Right._Getcomp(); // intentionally copy comparator, see LWG-2227
				_Copy(_Right, _Move_tag{});
			}
		}

	public:
		_Tree& operator=(_Tree&& _Right) noexcept(noexcept(_Move_assign(_Right, _Choose_pocma<_Alnode>{}))) {
			if (this != std::addressof(_Right)) {
				_Move_assign(_Right, _Choose_pocma<_Alnode>{});
			}

			return *this;
		}

	private:
		void _Swap_val_excluding_comp(_Tree& _Right) { // swap contents (except comparator) with _Right, equal allocators
			const auto _Scary = _Get_scary();
			const auto _Right_scary = _Right._Get_scary();
			_Scary->_Swap_proxy_and_iterators(*_Right_scary);
			_Swap_adl(_Scary->_Myhead, _Right_scary->_Myhead);
			std::swap(_Scary->_Mysize, _Right_scary->_Mysize);
		}

	protected:
		template <class... _Valtys>
		pair<_Nodeptr, bool> _Emplace(_Valtys&&... _Vals) {
			using _In_place_key_extractor = typename _Traits::template _In_place_key_extractor<_Remove_cvref_t<_Valtys>...>;
			const auto _Scary = _Get_scary();
			_Tree_find_result<_Nodeptr> _Loc;
			_Nodeptr _Inserted;
			if constexpr (!_Multi && _In_place_key_extractor::_Extractable) {
				const auto& _Keyval = _In_place_key_extractor::_Extract(_Vals...);
				_Loc = _Find_lower_bound(_Keyval);
				if (_Lower_bound_duplicate(_Loc._Bound, _Keyval)) {
					return { _Loc._Bound, false };
				}

				_Check_grow_by_1();
				_Inserted = _Tree_temp_node<_Alnode>(_Getal(), _Scary->_Myhead, std::forward<_Valtys>(_Vals)...)._Release();
				// nothrow hereafter
			}
			else {
				_Tree_temp_node<_Alnode> _Newnode(_Getal(), _Scary->_Myhead, std::forward<_Valtys>(_Vals)...);
				const auto& _Keyval = _Traits::_Kfn(_Newnode._Ptr->_Myval);
				if constexpr (_Multi) { // duplicate check if unique
					_Loc = _Find_upper_bound(_Keyval);
				}
				else {
					_Loc = _Find_lower_bound(_Keyval);
					if (_Lower_bound_duplicate(_Loc._Bound, _Keyval)) {
						return { _Loc._Bound, false };
					}
				}

				_Check_grow_by_1();
				// nothrow hereafter
				_Inserted = _Newnode._Release();
			}

			return { _Scary->_Insert_node(_Loc._Location, _Inserted), true };
		}

	public:
		template <class... _Valtys>
		pair<iterator, bool> emplace(_Valtys&&... _Vals) {
			const auto _Result = _Emplace(std::forward<_Valtys>(_Vals)...);
			return { iterator(_Result.first, _Get_scary()), _Result.second };
		}

	protected:
		template <class... _Valtys>
		_Nodeptr _Emplace_hint(const _Nodeptr _Hint, _Valtys&&... _Vals) {
			using _In_place_key_extractor = typename _Traits::template _In_place_key_extractor<_Remove_cvref_t<_Valtys>...>;
			const auto _Scary = _Get_scary();
			_Tree_find_hint_result<_Nodeptr> _Loc;
			_Nodeptr _Inserted;
			if constexpr (!_Multi && _In_place_key_extractor::_Extractable) {
				_Loc = _Find_hint(_Hint, _In_place_key_extractor::_Extract(_Vals...));
				if (_Loc._Duplicate) {
					return _Loc._Location._Parent;
				}

				_Check_grow_by_1();
				_Inserted = _Tree_temp_node<_Alnode>(_Getal(), _Scary->_Myhead, std::forward<_Valtys>(_Vals)...)._Release();
				// nothrow hereafter
			}
			else {
				_Tree_temp_node<_Alnode> _Newnode(_Getal(), _Scary->_Myhead, std::forward<_Valtys>(_Vals)...);
				_Loc = _Find_hint(_Hint, _Traits::_Kfn(_Newnode._Ptr->_Myval));
				if constexpr (!_Multi) {
					if (_Loc._Duplicate) {
						return _Loc._Location._Parent;
					}
				}

				_Check_grow_by_1();
				// nothrow hereafter
				_Inserted = _Newnode._Release();
			}

			return _Scary->_Insert_node(_Loc._Location, _Inserted);
		}

	public:
		template <class... _Valtys>
		iterator emplace_hint(const_iterator _Where, _Valtys&&... _Vals) { // insert value_type(_Val...) at _Where
			const auto _Scary = _Get_scary();
			return iterator(_Emplace_hint(_Where._Ptr, std::forward<_Valtys>(_Vals)...), _Scary);
		}

		~_Tree() noexcept {
			const auto _Scary = _Get_scary();
			_Scary->_Erase_head(_Getal());
		}

	private:
		void _Copy_assign(const _Tree& _Right, std::false_type) {
			clear();
			_Getcomp() = _Right._Getcomp();
			_Pocca(_Getal(), _Right._Getal());
			_Copy(_Right, _Copy_tag{});
		}

		void _Copy_assign(const _Tree& _Right, std::true_type) {
			if (_Getal() == _Right._Getal()) {
				_Copy_assign(_Right, std::false_type{});
			}
			else {
				clear();
				const auto _Scary = _Get_scary();
				_Scary->_Orphan_all();
				auto& _Al = _Getal();
				auto&& _Alproxy = _Fake_alloc;
				const auto& _Right_al = _Right._Getal();
				auto&& _Right_alproxy = _Fake_alloc;
				_Container_proxy_ptr<_Alty> _Proxy(_Right_alproxy, _Leave_proxy_unbound{});
				auto _Right_al_non_const = _Right_al;
				auto _Newhead = _Node::_Buyheadnode(_Right_al_non_const);
				_Node::_Freenode0(_Al, _Scary->_Myhead);
				_Pocca(_Al, _Right_al);
				_Scary->_Myhead = _Newhead;
				_Proxy._Bind(_Alproxy, _Scary);
				_Getcomp() = _Right._Getcomp();
				_Copy(_Right, _Copy_tag{});
			}
		}

	public:
		_Tree& operator=(const _Tree& _Right) {
			if (this != std::addressof(_Right)) {
				_Copy_assign(_Right, _Choose_pocca<_Alnode>{});
			}

			return *this;
		}

		[[nodiscard]] iterator begin() noexcept {
			const auto _Scary = _Get_scary();
			return iterator(_Scary->_Myhead->_Left, _Scary);
		}

		[[nodiscard]] const_iterator begin() const noexcept {
			const auto _Scary = _Get_scary();
			return const_iterator(_Scary->_Myhead->_Left, _Scary);
		}

		[[nodiscard]] iterator end() noexcept {
			const auto _Scary = _Get_scary();
			return iterator(_Scary->_Myhead, _Scary);
		}

		[[nodiscard]] const_iterator end() const noexcept {
			const auto _Scary = _Get_scary();
			return const_iterator(_Scary->_Myhead, _Scary);
		}

		_Unchecked_iterator _Unchecked_begin() noexcept {
			return _Unchecked_iterator(_Get_scary()->_Myhead->_Left, nullptr);
		}

		_Unchecked_const_iterator _Unchecked_begin() const noexcept {
			return _Unchecked_const_iterator(_Get_scary()->_Myhead->_Left, nullptr);
		}

		_Default_sentinel _Unchecked_end() const noexcept {
			return {};
		}

		_Unchecked_const_iterator _Unchecked_end_iter() const noexcept {
			return _Unchecked_const_iterator(_Get_scary()->_Myhead, nullptr);
		}

		[[nodiscard]] reverse_iterator rbegin() noexcept {
			return reverse_iterator(end());
		}

		[[nodiscard]] const_reverse_iterator rbegin() const noexcept {
			return const_reverse_iterator(end());
		}

		[[nodiscard]] reverse_iterator rend() noexcept {
			return reverse_iterator(begin());
		}

		[[nodiscard]] const_reverse_iterator rend() const noexcept {
			return const_reverse_iterator(begin());
		}

		[[nodiscard]] const_iterator cbegin() const noexcept {
			return begin();
		}

		[[nodiscard]] const_iterator cend() const noexcept {
			return end();
		}

		[[nodiscard]] const_reverse_iterator crbegin() const noexcept {
			return rbegin();
		}

		[[nodiscard]] const_reverse_iterator crend() const noexcept {
			return rend();
		}

		[[nodiscard]] size_type size() const noexcept {
			return _Get_scary()->_Mysize;
		}

		[[nodiscard]] size_type max_size() const noexcept {
			return (std::min)(
				static_cast<size_type>((numeric_limits<difference_type>::max)()), _Alnode_traits::max_size(_Getal()));
		}

		[[nodiscard]] bool empty() const noexcept {
			return size() == 0;
		}

		[[nodiscard]] allocator_type get_allocator() const noexcept {
			return static_cast<allocator_type>(_Getal());
		}

		[[nodiscard]] key_compare key_comp() const {
			return _Getcomp();
		}

		[[nodiscard]] value_compare value_comp() const {
			return value_compare(key_comp());
		}

		template <bool _Multi2 = _Multi, std::enable_if_t<!_Multi2, int> = 0>
		pair<iterator, bool> insert(const value_type& _Val) {
			const auto _Result = _Emplace(_Val);
			return { iterator(_Result.first, _Get_scary()), _Result.second };
		}

		template <bool _Multi2 = _Multi, std::enable_if_t<_Multi2, int> = 0>
		iterator insert(const value_type& _Val) {
			return iterator(_Emplace(_Val).first, _Get_scary());
		}

		template <bool _Multi2 = _Multi, std::enable_if_t<!_Multi2, int> = 0>
		pair<iterator, bool> insert(value_type&& _Val) {
			const auto _Result = _Emplace(std::move(_Val));
			return { iterator(_Result.first, _Get_scary()), _Result.second };
		}

		template <bool _Multi2 = _Multi, std::enable_if_t<_Multi2, int> = 0>
		iterator insert(value_type&& _Val) {
			return iterator(_Emplace(std::move(_Val)).first, _Get_scary());
		}

		iterator insert(const_iterator _Where, const value_type& _Val) {
			const auto _Scary = _Get_scary();
			return iterator(_Emplace_hint(_Where._Ptr, _Val), _Scary);
		}

		iterator insert(const_iterator _Where, value_type&& _Val) {
			const auto _Scary = _Get_scary();
			return iterator(_Emplace_hint(_Where._Ptr, std::move(_Val)), _Scary);
		}

		template <class _Iter>
		void insert(_Iter _First, _Iter _Last) {
			_Adl_verify_range(_First, _Last);
			auto _UFirst = _Get_unwrapped(_First);
			const auto _ULast = _Get_unwrapped(_Last);
			const auto _Myhead = _Get_scary()->_Myhead;
			for (; _UFirst != _ULast; ++_UFirst) {
				_Emplace_hint(_Myhead, *_UFirst);
			}
		}

		void insert(std::initializer_list<value_type> _Ilist) {
			insert(_Ilist.begin(), _Ilist.end());
		}

	private:
		_Nodeptr _Erase_unchecked(_Unchecked_const_iterator _Where) noexcept {
			const auto _Scary = _Get_scary();
			_Unchecked_const_iterator _Successor = _Where;
			++_Successor; // save successor iterator for return
			_Nodeptr _Erasednode = _Scary->_Extract(_Where); // node to erase
			_Scary->_Orphan_ptr(_Erasednode);
			_Node::_Freenode(_Getal(), _Erasednode); // delete erased node
			return _Successor._Ptr; // return successor nodeptr
		}

		_Nodeptr _Erase_unchecked(_Unchecked_const_iterator _First, _Unchecked_const_iterator _Last) noexcept {
			const auto _Begin = _Unchecked_begin();
			if (_First == _Begin && _Last._Ptr->_Isnil) {
				// erase all
				clear();
				return _Last._Ptr;
			}

			// partial erase, one at a time
			while (_First != _Last) {
				_Erase_unchecked(_First++);
			}

			return _Last._Ptr;
		}

	public:
		template <class _Iter = iterator, std::enable_if_t<!std::is_same_v<_Iter, const_iterator>, int> = 0>
		iterator erase(iterator _Where) noexcept /* strengthened */ {
			const auto _Scary = _Get_scary();
			return iterator(_Erase_unchecked(_Where._Unwrapped()), _Scary);
		}

		iterator erase(const_iterator _Where) noexcept /* strengthened */ {
			const auto _Scary = _Get_scary();
			return iterator(_Erase_unchecked(_Where._Unwrapped()), _Scary);
		}

		iterator erase(const_iterator _First, const_iterator _Last) noexcept /* strengthened */ {
			return iterator(_Erase_unchecked(_First._Unwrapped(), _Last._Unwrapped()), _Get_scary());
		}

		size_type erase(const key_type& _Keyval) noexcept(noexcept(_Eqrange(_Keyval))) /* strengthened */ {
			const auto _Where = _Eqrange(_Keyval);
			const _Unchecked_const_iterator _First(_Where.first, nullptr);
			const _Unchecked_const_iterator _Last(_Where.second, nullptr);
			const auto _Num = static_cast<size_type>(std::distance(_First, _Last));
			_Erase_unchecked(_First, _Last);
			return _Num;
		}

		void clear() noexcept {
			const auto _Scary = _Get_scary();
			_Scary->_Orphan_ptr(nullptr);
			auto _Head = _Scary->_Myhead;
			_Scary->_Erase_tree(_Getal(), _Head->_Parent);
			_Head->_Parent = _Head;
			_Head->_Left = _Head;
			_Head->_Right = _Head;
			_Scary->_Mysize = 0;
		}

	private:
		template <class _Other>
		[[nodiscard]] _Nodeptr _Find(const _Other& _Keyval) const {
			const _Tree_find_result<_Nodeptr> _Loc = _Find_lower_bound(_Keyval);
			if (_Lower_bound_duplicate(_Loc._Bound, _Keyval)) {
				return _Loc._Bound;
			}

			return _Get_scary()->_Myhead;
		}

	public:
		[[nodiscard]] iterator find(const key_type& _Keyval) {
			return iterator(_Find(_Keyval), _Get_scary());
		}

		[[nodiscard]] const_iterator find(const key_type& _Keyval) const {
			return const_iterator(_Find(_Keyval), _Get_scary());
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] iterator find(const _Other& _Keyval) {
			return iterator(_Find(_Keyval), _Get_scary());
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] const_iterator find(const _Other& _Keyval) const {
			return const_iterator(_Find(_Keyval), _Get_scary());
		}

		[[nodiscard]] size_type count(const key_type& _Keyval) const {
			if constexpr (_Multi) {
				const auto _Ans = _Eqrange(_Keyval);
				return static_cast<size_type>(std::distance(
					_Unchecked_const_iterator(_Ans.first, nullptr), _Unchecked_const_iterator(_Ans.second, nullptr)));
			}
			else {
				return _Lower_bound_duplicate(_Find_lower_bound(_Keyval)._Bound, _Keyval);
			}
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] size_type count(const _Other& _Keyval) const {
			const auto _Ans = _Eqrange(_Keyval);
			return static_cast<size_type>(std::distance(
				_Unchecked_const_iterator(_Ans.first, nullptr), _Unchecked_const_iterator(_Ans.second, nullptr)));
		}

		[[nodiscard]] iterator lower_bound(const key_type& _Keyval) {
			return iterator(_Find_lower_bound(_Keyval)._Bound, _Get_scary());
		}

		[[nodiscard]] const_iterator lower_bound(const key_type& _Keyval) const {
			return const_iterator(_Find_lower_bound(_Keyval)._Bound, _Get_scary());
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] iterator lower_bound(const _Other& _Keyval) {
			return iterator(_Find_lower_bound(_Keyval)._Bound, _Get_scary());
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] const_iterator lower_bound(const _Other& _Keyval) const {
			return const_iterator(_Find_lower_bound(_Keyval)._Bound, _Get_scary());
		}

		[[nodiscard]] iterator upper_bound(const key_type& _Keyval) {
			return iterator(_Find_upper_bound(_Keyval)._Bound, _Get_scary());
		}

		[[nodiscard]] const_iterator upper_bound(const key_type& _Keyval) const {
			return const_iterator(_Find_upper_bound(_Keyval)._Bound, _Get_scary());
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] iterator upper_bound(const _Other& _Keyval) {
			return iterator(_Find_upper_bound(_Keyval)._Bound, _Get_scary());
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] const_iterator upper_bound(const _Other& _Keyval) const {
			return const_iterator(_Find_upper_bound(_Keyval)._Bound, _Get_scary());
		}

		[[nodiscard]] pair<iterator, iterator> equal_range(const key_type& _Keyval) {
			const auto _Result = _Eqrange(_Keyval);
			const auto _Scary = _Get_scary();
			return { iterator(_Result.first, _Scary), iterator(_Result.second, _Scary) };
		}

		[[nodiscard]] pair<const_iterator, const_iterator> equal_range(const key_type& _Keyval) const {
			const auto _Result = _Eqrange(_Keyval);
			const auto _Scary = _Get_scary();
			return { const_iterator(_Result.first, _Scary), const_iterator(_Result.second, _Scary) };
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] pair<iterator, iterator> equal_range(const _Other& _Keyval) {
			const auto _Result = _Eqrange(_Keyval);
			const auto _Scary = _Get_scary();
			return { iterator(_Result.first, _Scary), iterator(_Result.second, _Scary) };
		}

		template <class _Other, class _Mycomp = key_compare, class = typename _Mycomp::is_transparent>
		[[nodiscard]] pair<const_iterator, const_iterator> equal_range(const _Other& _Keyval) const {
			const auto _Result = _Eqrange(_Keyval);
			const auto _Scary = _Get_scary();
			return { const_iterator(_Result.first, _Scary), const_iterator(_Result.second, _Scary) };
		}

		void swap(_Tree& _Right) noexcept(std::_Is_nothrow_swappable<key_compare>::value) /* strengthened */ {
			if (this != std::addressof(_Right)) {
				_Pocs(_Getal(), _Right._Getal());
				_Swap_val_excluding_comp(_Right);
				_Swap_adl(_Getcomp(), _Right._Getcomp());
			}
		}

	protected:
		template <class _Keyty>
		_Tree_find_hint_result<_Nodeptr> _Find_hint(const _Nodeptr _Hint, const _Keyty& _Keyval) const {
			const auto& _Comp = _Getcomp();
			const auto _Head = _Get_scary()->_Myhead;
			if constexpr (_Multi) { // insert even if duplicate
				if (_Hint->_Isnil) {
					// insert at end if greater than or equal to last element
					if (_Head->_Parent->_Isnil || !static_cast<bool>(_Comp(_Keyval, _Traits::_Kfn(_Head->_Right->_Myval)))) {
						return { {_Head->_Right, _Tree_child::_Right}, false };
					}

					// _Hint is end(); it must be closer to the end of equivalents
					return { _Find_upper_bound(_Keyval)._Location, false };
				}

				if (_Hint == _Head->_Left) {
					// insert at beginning if less than or equal to first element
					if (!static_cast<bool>(_Comp(_Traits::_Kfn(_Hint->_Myval), _Keyval))) {
						return { {_Hint, _Tree_child::_Left}, false };
					}

					// _Hint is begin(); it must be closer to the beginning of equivalents
					return { _Find_lower_bound(_Keyval)._Location, false };
				}

				if (!static_cast<bool>(_Comp(_Traits::_Kfn(_Hint->_Myval), _Keyval))) {
					// _Val <= *_Hint
					const auto _Prev = (--(_Unchecked_const_iterator(_Hint, nullptr)))._Ptr;
					if (!static_cast<bool>(_Comp(_Keyval, _Traits::_Kfn(_Prev->_Myval)))) {
						// _Val <= *_Hint and _Val >= *prev(_Hint); insert here
						if (_Prev->_Right->_Isnil) {
							return { {_Prev, _Tree_child::_Right}, false };
						}
						else {
							return { {_Hint, _Tree_child::_Left}, false };
						}
					}

					// _Val goes before *_Hint; _Hint must be closer to the end of equivalents
					return { _Find_upper_bound(_Keyval)._Location, false };
				}

				// _Val goes after *_Hint; _Hint must be closer to the beginning of equivalents
				return { _Find_lower_bound(_Keyval)._Location, false };
			}
			else { // insert only if unique
				if (_Hint->_Isnil) { // insert at end if after last element
					// insert at end if greater than last element
					if (_Head->_Parent->_Isnil || static_cast<bool>(_Comp(_Traits::_Kfn(_Head->_Right->_Myval), _Keyval))) {
						return { {_Head->_Right, _Tree_child::_Right}, false };
					}
				}
				else if (_Hint == _Head->_Left) {
					// insert at beginning if less than first element
					if (static_cast<bool>(_Comp(_Keyval, _Traits::_Kfn(_Hint->_Myval)))) {
						return { {_Hint, _Tree_child::_Left}, false };
					}
				}
				else if (static_cast<bool>(_Comp(_Keyval, _Traits::_Kfn(_Hint->_Myval)))) {
					// _Val < *_Hint
					const auto _Prev = (--(_Unchecked_const_iterator(_Hint, nullptr)))._Ptr;
					if (static_cast<bool>(_Comp(_Traits::_Kfn(_Prev->_Myval), _Keyval))) {
						// _Val < *_Hint and _Val > *prev(_Hint); insert here
						if (_Prev->_Right->_Isnil) {
							return { {_Prev, _Tree_child::_Right}, false };
						}
						else {
							return { {_Hint, _Tree_child::_Left}, false };
						}
					}
				}
				else if (static_cast<bool>(_Comp(_Traits::_Kfn(_Hint->_Myval), _Keyval))) {
					// _Val > *_Hint
					const auto _Next = (++(_Unchecked_const_iterator(_Hint, nullptr)))._Ptr;
					if (_Next->_Isnil || static_cast<bool>(_Comp(_Keyval, _Traits::_Kfn(_Next->_Myval)))) {
						// _Val > *_Hint and _Val < *next(_Hint); insert here
						if (_Hint->_Right->_Isnil) {
							return { {_Hint, _Tree_child::_Right}, false };
						}

						return { {_Next, _Tree_child::_Left}, false };
					}
				}
				else {
					// _Val is equivalent to *_Hint; don't insert
					return { {_Hint, _Tree_child::_Right}, true };
				}

				const auto _Loc = _Find_lower_bound(_Keyval);
				if (_Lower_bound_duplicate(_Loc._Bound, _Keyval)) {
					return { {_Loc._Bound, _Tree_child::_Unused}, true };
				}

				return { _Loc._Location, false };
			}
		}

		template <class _Keyty>
		_Tree_find_result<_Nodeptr> _Find_upper_bound(const _Keyty& _Keyval) const {
			const auto _Scary = _Get_scary();
			_Tree_find_result<_Nodeptr> _Result{ {_Scary->_Myhead->_Parent, _Tree_child::_Right}, _Scary->_Myhead };
			_Nodeptr _Trynode = _Result._Location._Parent;
			while (!_Trynode->_Isnil) {
				_Result._Location._Parent = _Trynode;
				if (static_cast<bool>(_Getcomp()(_Keyval, _Traits::_Kfn(_Trynode->_Myval)))) {
					_Result._Location._Child = _Tree_child::_Left;
					_Result._Bound = _Trynode;
					_Trynode = _Trynode->_Left;
				}
				else {
					_Result._Location._Child = _Tree_child::_Right;
					_Trynode = _Trynode->_Right;
				}
			}

			return _Result;
		}

		template <class _Keyty>
		bool _Lower_bound_duplicate(const _Nodeptr _Bound, const _Keyty& _Keyval) const {
			return !_Bound->_Isnil && !static_cast<bool>(_Getcomp()(_Keyval, _Traits::_Kfn(_Bound->_Myval)));
		}

		template <class _Keyty>
		_Tree_find_result<_Nodeptr> _Find_lower_bound(const _Keyty& _Keyval) const {
			const auto _Scary = _Get_scary();
			_Tree_find_result<_Nodeptr> _Result{ {_Scary->_Myhead->_Parent, _Tree_child::_Right}, _Scary->_Myhead };
			_Nodeptr _Trynode = _Result._Location._Parent;
			while (!_Trynode->_Isnil) {
				_Result._Location._Parent = _Trynode;
				if (static_cast<bool>(_Getcomp()(_Traits::_Kfn(_Trynode->_Myval), _Keyval))) {
					_Result._Location._Child = _Tree_child::_Right;
					_Trynode = _Trynode->_Right;
				}
				else {
					_Result._Location._Child = _Tree_child::_Left;
					_Result._Bound = _Trynode;
					_Trynode = _Trynode->_Left;
				}
			}

			return _Result;
		}

		void _Check_grow_by_1() {
			if (max_size() == _Get_scary()->_Mysize) {
				_Throw_tree_length_error();
			}
		}

		template <class _Moveit>
		void _Copy(const _Tree& _Right, _Moveit _Movefl) { // copy or move entire tree from _Right
			const auto _Scary = _Get_scary();
			const auto _Right_scary = _Right._Get_scary();
			_Scary->_Myhead->_Parent = _Copy_nodes(_Right_scary->_Myhead->_Parent, _Scary->_Myhead, _Movefl);
			_Scary->_Mysize = _Right_scary->_Mysize;
			if (!_Scary->_Myhead->_Parent->_Isnil) { // nonempty tree, look for new smallest and largest
				_Scary->_Myhead->_Left = _Scary_val::_Min(_Scary->_Myhead->_Parent);
				_Scary->_Myhead->_Right = _Scary_val::_Max(_Scary->_Myhead->_Parent);
			}
			else { // empty tree, just tidy head pointers
				_Scary->_Myhead->_Left = _Scary->_Myhead;
				_Scary->_Myhead->_Right = _Scary->_Myhead;
			}
		}

		template <class _Ty, class _Is_set>
		_Nodeptr _Copy_or_move(_Ty& _Val, _Copy_tag, _Is_set) { // copy to new node
			return _Buynode(_Val);
		}

		template <class _Ty>
		_Nodeptr _Copy_or_move(_Ty& _Val, _Move_tag, std::true_type) { // move to new node -- set
			return _Buynode(std::move(_Val));
		}

		template <class _Ty>
		_Nodeptr _Copy_or_move(_Ty& _Val, _Move_tag, std::false_type) { // move to new node -- map
			return _Buynode(std::move(const_cast<key_type&>(_Val.first)), std::move(_Val.second));
		}

		template <class _Moveit>
		_Nodeptr _Copy_nodes(_Nodeptr _Rootnode, _Nodeptr _Wherenode, _Moveit _Movefl) {
			// copy entire subtree, recursively
			const auto _Scary = _Get_scary();
			_Nodeptr _Newroot = _Scary->_Myhead; // point at nil node

			if (!_Rootnode->_Isnil) { // copy or move a node, then any subtrees
				bool_constant<is_same_v<key_type, value_type>> _Is_set;
				_Nodeptr _Pnode = _Copy_or_move(_Rootnode->_Myval, _Movefl, _Is_set);
				_Pnode->_Parent = _Wherenode;
				_Pnode->_Color = _Rootnode->_Color;
				if (_Newroot->_Isnil) {
					_Newroot = _Pnode; // memorize new root
				}

				try {
					_Pnode->_Left = _Copy_nodes(_Rootnode->_Left, _Pnode, _Movefl);
					_Pnode->_Right = _Copy_nodes(_Rootnode->_Right, _Pnode, _Movefl);
				}
				catch (...) {
					_Scary->_Erase_tree_and_orphan(_Getal(), _Newroot); // subtree copy failed, bail out
					throw;
				}
			}

			return _Newroot; // return newly constructed tree
		}

		template <class _Other>
		pair<_Nodeptr, _Nodeptr> _Eqrange(const _Other& _Keyval) const
			noexcept(_Nothrow_compare<key_compare, key_type, _Other>&& _Nothrow_compare<key_compare, _Other, key_type>) {
			// find range of nodes equivalent to _Keyval
			const auto _Scary = _Get_scary();
			const auto& _Comp = _Getcomp();
			_Nodeptr _Pnode = _Scary->_Myhead->_Parent;
			_Nodeptr _Lonode = _Scary->_Myhead; // end() if search fails
			_Nodeptr _Hinode = _Scary->_Myhead; // end() if search fails

			while (!_Pnode->_Isnil) {
				const auto& _Nodekey = _Traits::_Kfn(_Pnode->_Myval);
				if (static_cast<bool>(_Comp(_Nodekey, _Keyval))) {
					_Pnode = _Pnode->_Right; // descend right subtree
				}
				else { // _Pnode not less than _Keyval, remember it
					if (_Hinode->_Isnil && static_cast<bool(_Comp(_Keyval, _Nodekey))) {
						_Hinode = _Pnode; // _Pnode greater, remember it
					}

					_Lonode = _Pnode;
					_Pnode = _Pnode->_Left; // descend left subtree
				}
			}

			_Pnode = _Hinode->_Isnil ? _Scary->_Myhead->_Parent : _Hinode->_Left; // continue scan for upper bound
			while (!_Pnode->_Isnil) {
				if (static_cast<bool>(_Getcomp()(_Keyval, _Traits::_Kfn(_Pnode->_Myval)))) {
					// _Pnode greater than _Keyval, remember it
					_Hinode = _Pnode;
					_Pnode = _Pnode->_Left; // descend left subtree
				}
				else {
					_Pnode = _Pnode->_Right; // descend right subtree
				}
			}

			return { _Lonode, _Hinode };
		}

		void _Alloc_sentinel_and_proxy() {
			const auto _Scary = _Get_scary();
			auto&& _Alproxy = _Fake_alloc;
			_Container_proxy_ptr<_Alnode> _Proxy(_Alproxy, *_Scary);
			_Scary->_Myhead = _Node::_Buyheadnode(_Getal());
			_Proxy._Release();
		}

		template <class... _Valty>
		_Nodeptr _Buynode(_Valty&&... _Val) {
			return _Node::_Buynode(_Getal(), _Get_scary()->_Myhead, std::forward<_Valty>(_Val)...);
		}

		key_compare& _Getcomp() noexcept {
			return _Mypair._Get_first();
		}

		const key_compare& _Getcomp() const noexcept {
			return _Mypair._Get_first();
		}

		_Alnode& _Getal() noexcept {
			return _Mypair._Myval2._Get_first();
		}

		const _Alnode& _Getal() const noexcept {
			return _Mypair._Myval2._Get_first();
		}

		_Scary_val* _Get_scary() noexcept {
			return std::addressof(_Mypair._Myval2._Myval2);
		}

		const _Scary_val* _Get_scary() const noexcept {
			return std::addressof(_Mypair._Myval2._Myval2);
		}

	private:
		_Compressed_pair<key_compare, _Compressed_pair<_Alnode, _Scary_val>> _Mypair;
	};
}
