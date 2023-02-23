/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
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

#include "Allocator.h"
#include "Common.h"

#include <cstdint>

namespace eqlib {

//----------------------------------------------------------------------------

#pragma region CDynamicArrayBase

class CDynamicArrayBase;

struct EQLIB_OBJECT CEQException {};
struct EQLIB_OBJECT CExceptionApplication : CEQException {};

struct EQLIB_OBJECT CExceptionMemoryAllocation : public CEQException {
	int size;

	CExceptionMemoryAllocation(int size_) : size(size_) {}
};

// inherits from CExceptionApplication and CEQException
struct EQLIB_OBJECT CDynamicArrayException : public CExceptionApplication {
	const CDynamicArrayBase* obj;

	CDynamicArrayException(const CDynamicArrayBase* obj_) : obj(obj_) {}
};

// base class for the dynamic array types
class EQLIB_OBJECT CDynamicArrayBase
{
protected:
/*0x00*/    int m_length = 0;
/*0x04*/

public:
	// two names for the same thing
	int GetLength() const { return m_length; }
	bool IsEmpty() const { return m_length == 0; }

	[[nodiscard]] bool empty() const { return IsEmpty(); }
	size_t size() const { return static_cast<size_t>(m_length);  }

	__declspec(property(get = GetLength)) int Count;

protected:
	void ThrowArrayClassException() const
	{
		throw CDynamicArrayException(this);
	}
};

#pragma endregion

#pragma region ArrayClass2<T>

//----------------------------------------------------------------------------
// ArrayClass2 is a dynamic array implementation that makes use of bins
// to reduce the overhead of reallocation. This allows for faster resize
// operations as existing bins do not need to be relocated, just the
// list of bins. However, contiguous access is not possible.

template <typename T>
class ArrayClass2 : public CDynamicArrayBase
{
/*0x04*/ int m_maxPerBin;
/*0x08*/ int m_slotMask;
/*0x0c*/ int m_binShift;
/*0x10*/ T** m_array;
/*0x14*/ int m_binCount;
/*0x18*/ bool m_valid;
/*0x1c*/

public:
	using value_type = T;

	// constructs the array
	ArrayClass2()
	{
		m_maxPerBin = 1;
		m_binShift = 0;

		do {
			m_maxPerBin <<= 1;
			m_binShift++;
		} while (m_maxPerBin < 32);

		m_slotMask = m_maxPerBin - 1;
		m_array = nullptr;
		m_length = 0;
		m_binCount = 0;
		m_valid = true;
	}

	ArrayClass2(const ArrayClass2& rhs) : ArrayClass2()
	{
		this->operator=(rhs);
	}

	~ArrayClass2()
	{
		Clear();
	}

	ArrayClass2& operator=(const ArrayClass2& rhs)
	{
		if (this != &rhs)
		{
			if (m_array)
				m_length = 0;
			if (rhs.m_length)
			{
				InternalResize(rhs.m_length);

				for (int i = 0; i < rhs.m_length; ++i)
					Get(i) = rhs.Get(i);

				m_length = rhs.m_length;
			}
		}
		return *this;
	}

	T& operator[](int index) { return Get(index); }
	const T& operator[](int index) const { return Get(index); }

	inline constexpr int GET_BIN_INDEX(int x) const { return x >> static_cast<uint8_t>(m_binShift); }
	inline constexpr int GET_SLOT_INDEX(int x) const { return m_slotMask & x; }

	T& Get(int index) { return m_array[GET_BIN_INDEX(index)][GET_SLOT_INDEX(index)]; }
	const T& Get(int index) const { return m_array[GET_BIN_INDEX(index)][GET_SLOT_INDEX(index)]; }

	#pragma region ArrayClass2::Iterator
	class ConstIterator
	{
	public:
		using iterator_category = std::random_access_iterator_tag;

		using value_type = ArrayClass2::value_type;
		using difference_type = std::ptrdiff_t;
		using pointer = const value_type*;
		using reference = const value_type&;

		ConstIterator(const ArrayClass2* container, uint32_t index) : m_container(container), m_index(index) {}

		[[nodiscard]] reference operator*() const
		{
			return m_container->Get(m_index);
		}

		[[nodiscard]] pointer operator->() const
		{
			return &m_container->Get(m_index);
		}

		ConstIterator& operator++() { ++m_index; return *this; }
		ConstIterator operator++(int) const { auto tmp = *this; ++(*this); return tmp; }
		ConstIterator& operator--() { --m_index; return *this; }
		ConstIterator operator--(int) const { auto tmp = *this; --(*this); return tmp; }
		ConstIterator& operator+=(difference_type offset) { m_index += offset; return *this; }
		[[nodiscard]] ConstIterator operator+(difference_type offset) const { auto tmp = *this; return tmp += offset; }
		ConstIterator& operator-=(difference_type offset) { m_index -= offset; return *this; }
		[[nodiscard]] ConstIterator operator-(difference_type offset) const { auto tmp = *this; return tmp -= offset; }
		[[nodiscard]] ConstIterator operator-(const ConstIterator& other) const { return ConstIterator(m_container, m_index - other.m_index); }
		[[nodiscard]] bool operator==(const ConstIterator& other) const { return m_container == other.m_container && m_index == other.m_index; }
		[[nodiscard]] bool operator!=(const ConstIterator& other) const { return !(*this == other); }
		[[nodiscard]] bool operator<(const ConstIterator& other) const { return m_index < other.m_index; }
		[[nodiscard]] bool operator>(const ConstIterator& other) const { return other < *this; }
		[[nodiscard]] bool operator<=(const ConstIterator& other) const { return !(other < *this); }
		[[nodiscard]] bool operator>=(const ConstIterator& other) const { return !(*this < other); }

	protected:
		const ArrayClass2* m_container;
		uint32_t m_index;
	};

	class Iterator : public ConstIterator
	{
	public:
		using iterator_category = std::random_access_iterator_tag;

		using value_type = ArrayClass2::value_type;
		using difference_type = std::ptrdiff_t;
		using pointer = value_type*;
		using reference = value_type&;

		Iterator(ArrayClass2* container, uint32_t index) : ConstIterator(container, index) {}

		[[nodiscard]] reference operator*() const
		{
			return const_cast<ArrayClass2*>(m_container)->Get(m_index);
		}

		[[nodiscard]] pointer operator->() const
		{
			return std::addressof(const_cast<ArrayClass2*>(m_container)->Get(m_index));
		}

		Iterator& operator++() { ++m_index; return *this; }
		Iterator operator++(int) const { auto tmp = *this; ++(*this); return tmp; }
		Iterator& operator--() { --m_index; return *this; }
		Iterator operator--(int) const { auto tmp = *this; --(*this); return tmp; }
		Iterator& operator+=(difference_type offset) { m_index += offset; return *this; }
		[[nodiscard]] Iterator operator+(difference_type offset) const { auto tmp = *this; return tmp += offset; }
		Iterator& operator-=(difference_type offset) { m_index -= offset; return *this; }
		[[nodiscard]] Iterator operator-(difference_type offset) const { auto tmp = *this; return tmp -= offset; }
		[[nodiscard]] Iterator operator-(const Iterator& other) const { return Iterator(m_container, m_index - other.m_index); }
		[[nodiscard]] bool operator==(const Iterator& other) const { return m_container == other.m_container && m_index == other.m_index; }
		[[nodiscard]] bool operator!=(const Iterator& other) const { return !(*this == other); }
		[[nodiscard]] bool operator<(const Iterator& other) const { return m_index < other.m_index; }
		[[nodiscard]] bool operator>(const Iterator& other) const { return other < *this; }
		[[nodiscard]] bool operator<=(const Iterator& other) const { return !(other < *this); }
		[[nodiscard]] bool operator>=(const Iterator& other) const { return !(*this < other); }
	};

	using iterator = Iterator;
	using const_iterator = ConstIterator;
	using reverse_iterator = std::reverse_iterator<iterator>;
	using const_reverse_iterator = std::reverse_iterator<const_iterator>;

	iterator begin() { return iterator(this, 0); }
	const_iterator begin() const { return const_iterator(this, 0); }
	const_iterator cbegin() const { return const_iterator(this, 0); }

	iterator end() { return iterator(this, m_length); }
	const_iterator end() const { return const_iterator(this, m_length); }
	const_iterator cend() const { return const_iterator(this, m_length); }

	reverse_iterator rbegin() { return reverse_iterator{ end() }; }
	const_reverse_iterator rbegin() const { return const_reverse_iterator{ end() }; }
	const_reverse_iterator crbegin() { return const_reverse_iterator{ rend() }; }

	reverse_iterator rend() { return reverse_iterator{ begin() }; }
	const_reverse_iterator rend() const { return const_reverse_iterator{ begin() }; }
	const_reverse_iterator crend() { return const_reverse_iterator{ cbegin() }; }
	#pragma endregion

	// try to get an element by index, returns pointer to the element.
	// if the index is out of bounds, returns null.
	T* SafeGet(int index)
	{
		if (index < m_length)
		{
			int bin = GET_BIN_INDEX(index);
			if (bin < m_binCount)
			{
				int slot = GET_SLOT_INDEX(index);
				if (slot < m_maxPerBin)
				{
					return &m_array[bin][slot];
				}
			}
		}

		return nullptr;
	}

	bool IsMember(const T& element) const
	{
		if (m_length <= 0)
			return false;

		for (int i = 0; i < m_length; ++i)
		{
			if (Get(i) == element)
				return true;
		}
		return false;
	}

	// clear the contents of the array and make it empty
	void Clear()
	{
		for (int i = 0; i < m_binCount; ++i)
		{
			eqVecDelete(m_array[i]);
		}

		eqVecDelete(m_array);
		m_array = nullptr;
		m_binCount = 0;
		m_length = 0;
	}

	void Add(const T& value)
	{
		SetElementIdx(m_length, value);
	}

	void InsertElement(int index, const T& value)
	{
		if (index >= 0)
		{
			if (index < m_length)
			{
				InternalResize(m_length + 1);
				for (int idx = m_length; idx > index; --idx)
					Get(idx) = Get(idx - 1);
				Get(index) = value;
				++m_length;
			}
			else
			{
				SetElementIdx(index, value);
			}
		}
	}

	void SetElementIdx(int index, const T& value)
	{
		if (index >= 0)
		{
			if (index >= m_length)
			{
				InternalResize(index + 1);
				m_length = index + 1;
			}

			Get(index) = value;
		}
	}

	void DeleteElement(int index)
	{
		if (index >= 0 && index < m_length && m_array)
		{
			for (; index < m_length - 1; ++index)
				Get(index) = Get(index + 1);

			--m_length;
		}
	}

	void Resize(int length)
	{
		InternalResize(length);
		if (m_array) m_length = length;
	}

	// std-style functions
	size_t size() const { return static_cast<size_t>(GetLength()); }
	void resize(size_t size) { Resize(static_cast<int>(size)); }
	void reserve(size_t size) { InternalResize(static_cast<size_t>(size)); }
	void clear() { Clear(); }

private:
	// Assure() makes sure that there is enough allocated space for
	// the requested size. This is the primary function used for allocating
	// memory in ArrayClass2. Because the full array is broken down into
	// a set of bins, it is more efficient at growing than ArrayClass.
	// When the array needs to be resized, it only needs to reallocate the
	// list of bins and create more bins. Existing bins do not need to be
	// reallocated, they can just be copied to the new list of bins.
	void InternalResize(int requestedSize)
	{
		if (requestedSize <= 0)
			return;

		int newBinCount = ((requestedSize - 1) >> static_cast<int8_t>(m_binShift)) + 1;

		if (newBinCount > m_binCount)
		{
			T** newArray = eqVecNew<T*>(newBinCount);

			for (int i = 0; i < m_binCount; ++i)
				newArray[i] = m_array[i];
			for (int curBin = m_binCount; curBin < newBinCount; ++curBin)
			{
				T* newBin = eqVecNew<T>(m_maxPerBin);
				newArray[curBin] = newBin;
			}

			eqVecDelete(m_array);
			m_array = newArray;
			m_binCount = newBinCount;
		}
	}
};

#pragma endregion

#pragma region ArrayClass<T>

// simpler than ArrayClass2, ArrayClass is a simple wrapper around a dynamically
// allocated array. To grow this array requires reallocating the entire array and
// copying objects into the new array.

template <typename T>
class ArrayClass : public CDynamicArrayBase
{
/*0x04*/ T* m_array = nullptr;
/*0x08*/ int m_alloc = 0;
/*0x0c*/ bool m_isValid = true;
/*0x10*/

public:
	ArrayClass()
	{
		m_length = 0;
		m_array = nullptr;
		m_alloc = 0;
		m_isValid = true;
	}

	ArrayClass(int reserved) : ArrayClass()
	{
		m_array = eqVecNew<T>(reserved);
		m_alloc = reserved;
	}

	ArrayClass(const ArrayClass& rhs) : ArrayClass()
	{
		if (rhs.m_length)
		{
			InternalResize(rhs.m_length, true);

			std::copy_n(rhs.m_array, rhs.m_length, m_array);
			m_length = rhs.m_length;
		}
	}

	ArrayClass(ArrayClass&& other)
	{
		m_length = std::exchange(other.m_length, 0);
		m_array = std::exchange(other.m_array, nullptr);
		m_alloc = std::exchange(other.m_alloc, 0);
		m_isValid = std::exchange(other.m_isValid, true);
	}

	~ArrayClass()
	{
		Reset();
	}

	ArrayClass& operator=(const ArrayClass& rhs)
	{
		if (this == &rhs)
			return *this;

		Reset();

		if (rhs.m_length)
		{
			InternalResize(rhs.m_length, true);

			std::copy_n(rhs.m_array, rhs.m_length, m_array);
			m_length = rhs.m_length;
		}

		return *this;
	}

	ArrayClass& operator=(ArrayClass&& other)
	{
		if (&other == this)
			return *this;

		Reset();

		m_length = std::exchange(other.m_length, 0);
		m_array = std::exchange(other.m_array, nullptr);
		m_alloc = std::exchange(other.m_alloc, 0);
		m_isValid = std::exchange(other.m_isValid, true);
		return *this;
	}

	void Reset()
	{
		eqVecDelete(m_array);
		m_array = nullptr;
		m_alloc = 0;
		m_length = 0;
	}

	void Add(const T& element)
	{
		SetElementIdx(m_length, element);
	}

	void SetElementIdx(int index, const T& element)
	{
		if (index >= 0)
		{
			if (index >= m_length)
			{
				int oldLength = 0;

				InternalResize(index + 1, false);
				m_length = index + 1;
			}

			m_array[index] = element;
		}
	}

	void InsertElement(int index, const T& element)
	{
		if (index >= 0)
		{
			if (index < m_length)
			{
				InternalResize(m_length + 1, false);

				for (int idx = m_length; idx > index; --idx)
					m_array[idx] = m_array[idx - 1];

				m_array[index] = element;
				m_length++;
			}
			else
			{
				SetElementIdx(index, element);
			}
		}
	}

	void DeleteElement(int index)
	{
		if (index >= 0 && index < m_length && m_array)
		{
			for (; index < m_length - 1; ++index)
				m_array[index] = m_array[index + 1];

			m_length--;
		}
	}
	void SetLength(int size)
	{
		InternalResize(size, true);
		m_length = size;
	}

	int GetCount() const
	{
		return m_length;
	}

	T& Get(int index)
	{
		if (index >= m_length || index < 0 || m_array == nullptr)
			ThrowArrayClassException();
		return m_array[index];
	}

	const T& Get(int index) const
	{
		if (index >= m_length || index < 0 || m_array == nullptr)
			ThrowArrayClassException();
		return m_array[index];
	}

	T& operator[](int index) { return Get(index); }
	const T& operator[](int index) const { return Get(index); }

	// const function that returns the element at the index *by value*
	T GetElementIdx(int index) const { return Get(index); }

	T* begin() { return m_array; }
	const T* begin() const { return m_array; }
	const T* cbegin() const { return m_array; }
	T* end() { return m_array + m_length; }
	const T* end() const { return m_array + m_length; }
	const T* cend() const { return m_array + m_length; }

	void reserve(size_t amt) { InternalResize((int)amt, true); }
	size_t size() const noexcept { return (size_t)m_length; }
	T* data() noexcept { return m_array; }
	const T* data() const noexcept { return m_array; }

private:
	// this function will ensure that there is enough space allocated for the
	// requested size. the underlying array is one contiguous block of memory.
	// In order to grow it, we will need to allocate a new array and move
	// everything over.
	// this function will allocate 2x the amount of memory requested as an
	// optimization aimed at reducing the number of allocations that occur.
	void InternalResize(int requestedSize, bool exact)
	{
		if (requestedSize && (requestedSize > m_alloc || !m_array))
		{
			int allocatedSize = exact ? requestedSize : (requestedSize + 4) << 1;
			T* newArray = eqVecNew<T>(allocatedSize);

			// copy data into new buffer
			for (int i = 0; i < m_alloc; ++i)
				newArray[i] = std::move(m_array[i]);

			// clean up old buffer
			eqVecDelete(m_array);

			m_array = newArray;
			m_alloc = allocatedSize;
		}
	}
};

#pragma endregion

#pragma region HashTable<T>

struct HashTableStatistics
{
	int TableSize;
	int UsedSlots;
	int TotalEntries;
};

struct ResizePolicyNoShrink
{
	template <typename HashTable>
	static void ResizeOnAdd(HashTable* hashTable)
	{
		HashTableStatistics hashStats;
		hashTable->GetStatistics(&hashStats);

		if (hashStats.TotalEntries * 100 / hashStats.TableSize > 70)
		{
			hashTable->Resize(hashStats.TableSize * 2);
		}
	}

	template <typename HashTable>
	static void ResizeOnRemove(HashTable* hash)
	{
	}
};

struct ResizePolicyNoResize
{
	template <typename HashTable> static void ResizeOnAdd(HashTable* hash) {}
	template <typename HashTable> static void ResizeOnRemove(HashTable* hash) {}
};

template <typename T, typename Key = int, typename ResizePolicy = ResizePolicyNoResize>
class HashTable
{
public:
	HashTable(int size = 100);
	~HashTable();

	template <typename T, typename Key>
	struct HashTableEntry : std::pair<T, const Key>
	{
		using std::pair<T, const Key>::pair;

		inline const Key& key() const { return second; }
		inline T& value() { return first; }
		inline const T& value() const { return first; }

		static const HashTableEntry* GetEntry(const T* value) { return reinterpret_cast<const HashTableEntry*>(value); }
		static HashTableEntry* GetEntry(T* value) { return reinterpret_cast<HashTableEntry*>(value); }

		HashTableEntry* next = nullptr;
	};
	static_assert(sizeof(HashTableEntry<int, int>) == 8 + sizeof(uintptr_t));
	using HashEntry = HashTableEntry<T, Key>;

	void Insert(const Key& key, const T& obj);
	T& Insert(const Key& key);
	void Insert(HashEntry* entry);

	// Value access
	T* FindFirst(const Key& key) const;
	T* FindNext(const T* previousResult) const;

	T* WalkFirst() const;
	T* WalkNext(const T* previousResult) const;

	// HashEntry access (useful for iterators)
	HashEntry* FindFirstEntry(const Key& key) const;
	HashEntry* FindNextEntry(HashEntry* previousResult) const;

	HashEntry* WalkFirstEntry() const;
	HashEntry* WalkNextEntry(HashEntry* previousResult) const;

	bool Remove(const Key& key);
	bool Remove(const Key& key, const T& value);
	bool Remove(const HashEntry* entry);

	int GetTotalEntries() const { return m_entryCount; }
	void GetStatistics(HashTableStatistics* stats) const;

	void Resize(int hashSize);
	void Reset();

private:
	template <typename T>
	static uint32_t hash_value(const T& key)
	{
		if constexpr (std::conjunction_v<
			std::is_convertible<const T&, std::string_view>,
			std::negation<std::is_convertible<const T&, const char*>>>)
		{
			return GetStringCRC(key);
		}
		else if constexpr (std::is_integral_v<T>)
		{
			return (uint32_t)key;
		}
		else
		{
			static_assert(false, "Unexpected key type");
		}
	}


	//template <>
	//uint32_t hash_value<EqItemGuid>(const EqItemGuid& guid) { return GetStringCRC(guid.guid); }

public:
#pragma region STL Interface
	using key_type = Key;
	using mapped_type = T;
	using value_type = std::pair<T, const Key>;
	using size_type = size_t;
	using difference_type = std::ptrdiff_t;

	using reference = value_type&;
	using const_reference = const value_type&;
	using pointer = value_type*;
	using const_pointer = const value_type*;

#pragma region HashTable::Iterator
	class ConstIterator
	{
		friend class HashTable<T, Key, ResizePolicy>;
	public:
		using iterator_category = std::forward_iterator_tag;

		using value_type = HashTable::value_type;
		using difference_type = HashTable::difference_type;
		using pointer = HashTable::pointer;
		using const_pointer = HashTable::const_pointer;
		using reference = HashTable::reference;
		using const_reference = HashTable::const_reference;

		ConstIterator(const HashTable* container, HashEntry* entry)
			: m_container(container)
			, m_entry(entry) {}

		[[nodiscard]] const_reference operator*() const
		{
			return *m_entry;
		}

		[[nodiscard]] const_pointer operator->() const
		{
			return m_entry;
		}

		ConstIterator& operator++() { m_entry = m_container->WalkNextEntry(m_entry); return *this; }
		ConstIterator operator++(int) const { auto tmp = *this; ++(*this); return tmp; }

		[[nodiscard]] bool operator==(const ConstIterator& other) const { return m_container == other.m_container && m_entry == other.m_entry; }
		[[nodiscard]] bool operator!=(const ConstIterator& other) const { return !(*this == other); }
		[[nodiscard]] bool operator<(const ConstIterator& other) const { return m_entry < other.m_entry; }
		[[nodiscard]] bool operator>(const ConstIterator& other) const { return other < *this; }
		[[nodiscard]] bool operator<=(const ConstIterator& other) const { return !(other < *this); }
		[[nodiscard]] bool operator>=(const ConstIterator& other) const { return !(*this < other); }

	protected:
		const HashTable* m_container;
		HashEntry* m_entry;
	};

	class Iterator : public ConstIterator
	{
	public:
		using iterator_category = std::forward_iterator_tag;

		Iterator(HashTable* container, HashEntry* entry) : ConstIterator(container, entry) {}

		[[nodiscard]] reference operator*() const
		{
			return *m_entry;
		}

		[[nodiscard]] pointer operator->() const
		{
			return m_entry;
		}

		Iterator& operator++() { m_entry = m_container->WalkNextEntry(m_entry); return *this; }
		Iterator operator++(int) const { auto tmp = *this; ++(*this); return tmp; }

		[[nodiscard]] bool operator==(const Iterator& other) const { return m_container == other.m_container && m_entry == other.m_entry; }
		[[nodiscard]] bool operator!=(const Iterator& other) const { return !(*this == other); }
		[[nodiscard]] bool operator<(const Iterator& other) const { return m_entry < other.m_entry; }
		[[nodiscard]] bool operator>(const Iterator& other) const { return other < *this; }
		[[nodiscard]] bool operator<=(const Iterator& other) const { return !(other < *this); }
		[[nodiscard]] bool operator>=(const Iterator& other) const { return !(*this < other); }
	};

	using iterator = Iterator;
	using const_iterator = ConstIterator;

	iterator begin() { return iterator(this, WalkFirstEntry()); }
	const_iterator begin() const { return const_iterator(this, WalkFirstEntry()); }
	const_iterator cbegin() const { return const_iterator(this, WalkFirstEntry()); }

	iterator end() { return iterator(this, nullptr); }
	const_iterator end() const { return const_iterator(this, nullptr); }
	const_iterator cend() const { return const_iterator(this, nullptr); }
#pragma endregion

	size_type size() const { return static_cast<size_type>(m_entryCount); }
	[[nodiscard]] bool empty() const { return m_entryCount == 0; }

	void clear() { Reset(); }
	void reserve(size_type amount) { Resize(amount); }

	iterator insert(const value_type& value) { return emplace(value); }
	iterator insert(value_type&& value) { return emplace(std::move(value)); }

	template <class Value, std::enable_if_t<std::is_constructible_v<value_type, Value>, int> = 0>
	iterator insert(Value&& val) { return emplace(std::forward<Value>(val)); }

	template <class... Args>
	iterator emplace(Args&&... args)
	{
		HashEntry* entry = eqNew<HashEntry>(std::forward<Args>(args)...);

		Insert(entry);

		return iterator(this, entry);
	}

	iterator erase(const_iterator pos)
	{
		HashEntry* entry = pos.m_entry;
		iterator itr(this, entry->next);
		Remove(entry);
		return itr;
	}

	iterator erase(const_iterator first, const_iterator last)
	{
		iterator itr = first;
		while (itr != last)
		{
			iterator temp = itr++;
			Remove(temp);
		}
		return itr;
	}

	size_type erase(const key_type& key)
	{
		size_t cnt = 0;
		while (Remove(key))
			++cnt;
		return cnt;
	}

	iterator find(const key_type& key) { return iterator(this, FindFirstEntry(key)); }
	const_iterator find(const key_type& key) const { return iterator(this, FindFirstEntry(key)); }

	size_type count(const key_type& key) const
	{
		size_type cnt = 0;
		HashEntry* elem = FindFirstEntry(key);
		while (elem) {
			++cnt;
			elem = FindNextEntry(elem);
		}
		return cnt;
	}
	bool contains(const key_type& key) const { return FindFirst(key) != nullptr; }

	void swap(HashTable& other)
	{
		std::swap(m_table, other.m_table);
		std::swap(m_tableSize, other.m_tableSize);
		std::swap(m_entryCount, other.m_entryCount);
		std::swap(m_statUsedSlots, other.m_statUsedSlots);
	}

#pragma endregion

private:
/*0x00*/ HashEntry** m_table = nullptr;
/*0x08*/ int         m_tableSize = 0;
/*0x0c*/ int         m_entryCount = 0;
/*0x10*/ int         m_statUsedSlots = 0;
/*0x14*/
};

template <typename T, typename Key, typename ResizePolicy>
HashTable<T, Key, ResizePolicy>::HashTable(int size)
{
	Resize(size);
}

template <typename T, typename Key, typename ResizePolicy>
HashTable<T, Key, ResizePolicy>::~HashTable()
{
	Reset();
	eqVecDelete(m_table);
}

template <typename T, typename Key, typename ResizePolicy>
void HashTable<T, Key, ResizePolicy>::Insert(const Key& key, const T& value)
{
	HashEntry* entry = eqNew<HashEntry>(value, key);

	Insert(entry);
}

template <typename T, typename Key, typename ResizePolicy>
T& HashTable<T, Key, ResizePolicy>::Insert(const Key& key)
{
	HashEntry* entry = eqNew<HashEntry>();
	*((Key*)&entry->second) = key;

	Insert(entry);

	return entry->value();
}

template <typename T, typename Key, typename ResizePolicy>
void HashTable<T, Key, ResizePolicy>::Insert(HashTable<T, Key, ResizePolicy>::HashEntry* entry)
{
	int slot = hash_value<Key>(entry->key()) % m_tableSize;
	if (m_table[slot])
	{
		entry->next = std::exchange(m_table[slot], entry);
		++m_statUsedSlots;
	}
	else
	{
		m_table[slot] = entry;
	}

	++m_entryCount;
	ResizePolicy::ResizeOnAdd(this);
}

template <typename T, typename Key, typename ResizePolicy>
T* HashTable<T, Key, ResizePolicy>::FindFirst(const Key& key) const
{
	HashEntry* entry = FindFirstEntry(key);
	return entry ? &entry->value() : nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
T* HashTable<T, Key, ResizePolicy>::FindNext(const T* previousResult) const
{
HashEntry* entry = FindNextEntry(HashEntry::GetEntry((T*)previousResult));
return entry ? &entry->value() : nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
T* HashTable<T, Key, ResizePolicy>::WalkFirst() const
{
	HashEntry* entry = WalkFirstEntry();
	return entry ? &entry->value() : nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
T* HashTable<T, Key, ResizePolicy>::WalkNext(const T* previousResult) const
{
	HashEntry* entry = WalkNextEntry(HashEntry::GetEntry((T*)previousResult));
	return entry ? &entry->value() : nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
typename HashTable<T, Key, ResizePolicy>::HashEntry* HashTable<T, Key, ResizePolicy>::FindFirstEntry(const Key& key) const
{
	int slot = hash_value<Key>(key) % m_tableSize;
	HashEntry* entry = m_table[slot];
	while (entry != nullptr)
	{
		if (entry->key() == key)
			return entry;

		entry = entry->next;
	}

	return nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
typename HashTable<T, Key, ResizePolicy>::HashEntry* HashTable<T, Key, ResizePolicy>::FindNextEntry(
	typename HashTable<T, Key, ResizePolicy>::HashEntry* previousResult) const
{
	HashEntry* entry = previousResult;
	HashEntry* nextEntry = entry->next;
	while (nextEntry != nullptr)
	{
		if (nextEntry->key() == entry->key())
			return nextEntry;

		nextEntry = nextEntry->next;
	}

	return nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
typename HashTable<T, Key, ResizePolicy>::HashEntry* HashTable<T, Key, ResizePolicy>::WalkFirstEntry() const
{
	for (int i = 0; i < m_tableSize; ++i)
	{
		HashEntry* entry = m_table[i];
		if (entry)
			return entry;
	}

	return nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
typename HashTable<T, Key, ResizePolicy>::HashEntry* HashTable<T, Key, ResizePolicy>::WalkNextEntry(
	typename HashTable<T, Key, ResizePolicy>::HashEntry* previousResult) const
{
	HashEntry* entry = previousResult;
	int slot = hash_value<Key>(entry->key()) % m_tableSize;

	// if there is a link just return it.
	entry = entry->next;
	if (entry != nullptr)
		return entry;

	// start looking in next bucket.
	for (int i = slot + 1; i < m_tableSize; ++i)
	{
		HashEntry* entry = m_table[i];
		if (entry)
			return entry;
	}

	return nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
bool HashTable<T, Key, ResizePolicy>::Remove(const Key& key)
{
	int slot = hash_value<Key>(key) % m_tableSize;

	HashEntry* entry = m_table[slot];
	HashEntry** link = &m_table[slot];

	while (entry != nullptr)
	{
		if (entry->key() == key)
		{
			*link = entry->next;
			eqDelete(entry);
			--m_entryCount;

			if (m_table[slot] == nullptr)
				--m_statUsedSlots;

			ResizePolicy::ResizeOnRemove(this);
			return true;
		}

		link = &entry->next;
		entry = *link;
	}

	return false;
}

template <typename T, typename Key, typename ResizePolicy>
bool HashTable<T, Key, ResizePolicy>::Remove(const Key& key, const T& value)
{
	int slot = hash_value<Key>(key) % m_tableSize;

	HashEntry* entry = m_table[slot];
	HashEntry** link = &m_table[slot];

	while (entry != nullptr)
	{
		if (entry->key() == key && entry->value() == value)
		{
			*link = entry->next;
			eqDelete(entry);
			--m_entryCount;

			if (m_table[slot] == nullptr)
				--m_statUsedSlots;

			ResizePolicy::ResizeOnRemove(this);
			return true;
		}

		link = &entry->next;
		entry = *link;
	}

	return false;
}

template <typename T, typename Key, typename ResizePolicy>
bool HashTable<T, Key, ResizePolicy>::Remove(const HashTable<T, Key, ResizePolicy>::HashEntry* entry)
{
	return Remove(entry->key(), entry->value());
}

template <typename T, typename Key, typename ResizePolicy>
void HashTable<T, Key, ResizePolicy>::GetStatistics(HashTableStatistics* stats) const
{
	stats->TotalEntries = m_entryCount;
	stats->UsedSlots = m_statUsedSlots;
	stats->TableSize = m_tableSize;
}

inline bool IsPrime(int value)
{
	for (int i = 2; i <= value / 2; ++i) {
		if (value % i == 0)
		return false;
	}
	return true;
}

inline int NextPrime(int value)
{
	if (value % 2 == 0)
		value++;
	while (!IsPrime(value))
		value += 2;
	return(value);
}

template <typename T, typename Key, typename ResizePolicy>
void HashTable<T, Key, ResizePolicy>::Resize(int hashSize)
{
	HashEntry** oldTable = m_table;
	int oldSize = m_tableSize;

	m_tableSize = NextPrime(hashSize);
	if (m_tableSize != oldSize)
	{
		m_table = eqVecNew<HashEntry*>(m_tableSize);
		memset(m_table, 0, sizeof(HashEntry*) * m_tableSize);
		m_statUsedSlots = 0;

		// rehash items into new table
		if (m_entryCount > 0)
		{
			for (int i = 0; i < oldSize; i++)
			{
				HashEntry* next = oldTable[i];
				while (next != nullptr)
				{
					HashEntry* entry = next;
					next = next->next;
					entry->next = nullptr;

					Insert(entry);
				}
			}
		}

		eqVecDelete(oldTable);
	}
}

template <typename T, typename Key, typename ResizePolicy>
void HashTable<T, Key, ResizePolicy>::Reset()
{
	for (int slot = 0; slot < m_tableSize; ++slot)
	{
		HashEntry* entry = m_table[slot];
		if (entry)
		{
			--m_statUsedSlots;
			while (entry != nullptr)
			{
				--m_entryCount;
				HashEntry* next = entry->next;
				eqDelete(entry);
				entry = next;
			}

			m_table[slot] = nullptr;
		}
	}
}

#pragma endregion

//----------------------------------------------------------------------------

#pragma region VePointer<T>

class VeBaseReferenceCount
{
public:
	EQLIB_OBJECT void IncrementRefCount()
	{
		_InterlockedIncrement((volatile long*)&ReferenceCount);
	}

	EQLIB_OBJECT void DecrementRefCount()
	{
		if (_InterlockedDecrement((volatile long*)&ReferenceCount) == 0)
		{
			// VeBaseReferenceCount is protected, so cannot use eqDelete.
			this->~VeBaseReferenceCount();
			eqFree(this);
		}
	}

	EQLIB_OBJECT int GetReferenceCount() const { return ReferenceCount; }

	virtual uint32_t getUnknown() { return 8; }

protected:
	VeBaseReferenceCount() = default;
	VeBaseReferenceCount(const VeBaseReferenceCount& other) {}
	virtual ~VeBaseReferenceCount() {}

private:
	mutable int        ReferenceCount = 0;
};

// This class implements an intrusive pointer, where T is a class that inherits from
// VeBaseReferenceCount, which implements the reference counting.
template <typename T>
class VePointer
{
public:
	VePointer() = default;

	VePointer(nullptr_t) {}

	VePointer(T* init)
	{
		m_pObject = init;

		if (m_pObject)
		{
			static_cast<VeBaseReferenceCount*>(m_pObject)->IncrementRefCount();
		}
	}

	VePointer(const VePointer& other)
	{
		m_pObject = other.m_pObject;

		if (m_pObject)
		{
			static_cast<VeBaseReferenceCount*>(m_pObject)->IncrementRefCount();
		}
	}

	~VePointer()
	{
		if (m_pObject)
		{
			static_cast<VeBaseReferenceCount*>(m_pObject)->DecrementRefCount();
		}
	}

	VePointer& operator=(const VePointer& other)
	{
		if (m_pObject != other.m_pObject)
		{
			if (other.m_pObject)
			{
				static_cast<VeBaseReferenceCount*>(other.m_pObject)->IncrementRefCount();
			}

			if (m_pObject)
			{
				static_cast<VeBaseReferenceCount*>(m_pObject)->DecrementRefCount();
			}

			m_pObject = other.m_pObject;
		}

		return *this;
	}

	template <typename U>
	VePointer(const VePointer<U>& other)
		: m_pObject(other.m_pObject)
	{
		if (m_pObject)
		{
			static_cast<VeBaseReferenceCount*>(m_pObject)->IncrementRefCount();
		}
	}

	VePointer& operator=(T* pOther)
	{
		if (m_pObject != pOther)
		{
			if (pOther)
			{
				static_cast<VeBaseReferenceCount*>(pOther)->IncrementRefCount();
			}

			if (m_pObject)
			{
				static_cast<VeBaseReferenceCount*>(m_pObject)->DecrementRefCount();
			}

			m_pObject = pOther;
		}

		return *this;
	}

	VePointer& operator=(nullptr_t)
	{
		if (m_pObject)
		{
			static_cast<VeBaseReferenceCount*>(m_pObject)->DecrementRefCount();
		}

		m_pObject = nullptr;

		return *this;
	}

	template <typename U>
	VePointer& operator=(const VePointer<U>& other)
	{
		VePointer temp(other);
		std::swap(temp.m_pObject, m_pObject);
		return *this;
	}

	T& operator*() const
	{
		return *m_pObject;
	}

	T* operator->() const
	{
		return m_pObject;
	}

	explicit operator bool() const { return m_pObject != nullptr; }

	operator T* () { return m_pObject; }
	operator T* () const { return m_pObject; }

	inline bool operator<(const VePointer& other) const
	{
		return m_pObject < other.m_pObject;
	}

	inline bool operator<(const T* other) const
	{
		return m_pObject < other;
	}

	inline void reset()
	{
		if (m_pObject)
		{
			static_cast<VeBaseReferenceCount*>(m_pObject)->DecrementRefCount();
		}

		m_pObject = nullptr;
	}

	int use_count() const { return static_cast<VeBaseReferenceCount*>(m_pObject)->GetReferenceCount(); }

	[[nodiscard]] T* get() const { return m_pObject; }

	DEPRECATE("Access pointer directly (or call .get()) instead of using pObject")
	[[nodiscard]] T* get_pObject() const { return m_pObject; }

#pragma warning(disable: 4996)
	// Access the object through the get() function.
	__declspec(property(get = get_pObject)) T* pObject;
#pragma warning(default: 4996)

private:
	T* m_pObject = nullptr;
};

template <typename T>
[[nodiscard]] bool operator==(nullptr_t, const VePointer<T>& rhs) noexcept {
	return nullptr == rhs.get();
}

template <typename T>
[[nodiscard]] bool operator==(const VePointer<T>& lhs, nullptr_t) noexcept {
	return lhs.get() == nullptr;
}

template <typename T>
[[nodiscard]] bool operator!=(nullptr_t, const VePointer<T>& rhs) noexcept {
	return nullptr != rhs.get();
}

template <typename T>
[[nodiscard]] bool operator!=(const VePointer<T>& lhs, nullptr_t) noexcept {
	return lhs.get() != nullptr;
}

template <typename T>
[[nodiscard]] bool operator==(const VePointer<T>& lhs, const VePointer<T>& rhs) noexcept {
	return lhs.get() == rhs.get();
}

template <typename T>
[[nodiscard]] bool operator==(const VePointer<T>& lhs, const T* rhs) noexcept {
	return lhs.get() == rhs;
}

template <typename T>
[[nodiscard]] bool operator==(const T* lhs, const VePointer<T>& rhs) noexcept {
	return lhs == rhs.get();
}

template <typename T>
[[nodiscard]] bool operator!=(const VePointer<T>& lhs, const VePointer<T>& rhs) noexcept {
	return lhs.get() != rhs.get();
}

template <typename T>
[[nodiscard]] bool operator!=(const VePointer<T>& lhs, const T* rhs) noexcept {
	return lhs.get() != rhs;
}

template <typename T>
[[nodiscard]] bool operator!=(const T* lhs, const VePointer<T>& rhs) noexcept {
	return lhs != rhs.get();
}


#pragma endregion

#pragma region VeArray<T>

// A vector-like array container
template <typename T>
class VeArray
{
public:
	using value_type = T;
	using pointer = T*;
	using reference = T&;
	using const_reference = const T&;

	using iterator = T*;
	using const_iterator = const T*;

	VeArray() = default;

	T& operator[](uint32_t i)
	{
		return m_data[i];
	}

	const T& operator[](uint32_t i) const
	{
		return m_data[i];
	}

	iterator begin() { return m_data; }
	const_iterator begin() const { return m_data; }
	const_iterator cbegin() const { return m_data; }

	iterator end() { return m_data + m_size; }
	const_iterator end() const { return m_data + m_size; }
	const_iterator cend() const { return m_data + m_size; }

	size_t size() const { return m_size; }
	[[nodiscard]] bool empty() const { return size() == 0; }
	size_t capacity() const { return m_capacity; }

	void resize(uint32_t newSize);
	void reserve(uint32_t newCapacity);

	ALT_MEMBER_GETTER_DEPRECATED(T*, m_data, Begin, "VeArray: Begin is deprecated, use data() or index operators.");
	ALT_MEMBER_GETTER_DEPRECATED(uint32_t, m_size, Size, "VeArray: Size is deprecated, use size() instead.");
	ALT_MEMBER_GETTER_DEPRECATED(uint32_t, m_capacity, Capacity, "VeArray: Capacity is deprecated, use capacity() instead.");

private:
/*0x00*/ T*       m_data = nullptr;
/*0x08*/ size_t   m_size = 0;
/*0x10*/ size_t   m_capacity = 0;
/*0x18*/
};

#pragma endregion

//----------------------------------------------------------------------------

#pragma region LinkedList

// LinkedLists
template <class T>
class LinkedListNode
{
public:
	// makes a copy of the thing.
	LinkedListNode(T& obj) : m_object(obj) {}

	T m_object;
	LinkedListNode* m_pNext = nullptr;
	LinkedListNode* m_pPrev = nullptr;
};

template <class T>
class DoublyLinkedList
{
public:
	using Node = LinkedListNode<T>;

	class Iterator
	{
		Node* m_node;

	public:
		Iterator(Node* node = nullptr)
			: m_node(node) {}

		Iterator& operator++() {
			m_node = m_node->m_pNext;
			return *this;
		}

		Node* node() const { return m_node; }

		T& operator*() const { return node()->m_object; }
		T* operator->() const { return &node()->m_object; }

		bool operator==(Iterator other) const { return m_node == other.m_node; }
		bool operator!=(Iterator other) const { return m_node != other.m_node; }
	};

	DoublyLinkedList() = default;

	virtual ~DoublyLinkedList()
	{
		if (m_refCount <= 0)
			UnlinkAll();

		m_refCount = 0;
	}

	// non copyable
	DoublyLinkedList(const DoublyLinkedList&) = delete;
	DoublyLinkedList& operator=(const DoublyLinkedList&) = delete;

	void Add(T& obj)
	{
		Node* node = eqNew<Node>(obj);

		if (m_pHead != nullptr)
		{
			// Add to the end of the list.
			m_pTail->m_pNext = node;
			node->m_pPrev = m_pTail;

			m_pTail = pNode;
		}
		else
		{
			// First item, set as first and last.
			m_pTail = m_pHead = pNode;
		}

		++m_numObjects;
	}

	void UnlinkAll()
	{
		Node* current = m_pHead;

		while (current != nullptr)
		{
			Node* temp = current;
			current = current->m_pNext;
			eqDelete(temp);
		}

		m_pHead = m_pTail = nullptr;
		m_numObjects = 0;
	}

	T* GetHead() const
	{
		if (!m_pHead)
			return nullptr;

		return &m_pHead->m_object;
	}

	T* GetTail() const
	{
		if (!m_pTail)
			return nullptr;

		return &m_pTail->m_object;
	}

	int GetSize() const { return m_numObjects; }

	Iterator begin() { return m_pHead; }
	Iterator end() { return Iterator(); }

private:
/*0x04*/ Node* m_pHead = 0;
/*0x08*/ Node* m_pTail = 0;
/*0x0c*/ Node* m_pCurObject = 0;
/*0x10*/ Node* m_pCurObjectNext = 0;
/*0x14*/ Node* m_pCurObjectPrev = 0;
/*0x18*/ int m_numObjects = 0;
/*0x1c*/ int m_refCount = 0;
/*0x20*/
};

#pragma endregion

#pragma region HashList / HashListSet / HashListMap

inline int StringHash(const char* s)
{
	int hash = 0;
	while (*s != 0) {
		hash += *s++;
		hash += hash << 10;
		hash ^= hash >> 6;
	}
	hash += hash << 3;
	hash ^= hash >> 11;
	hash += hash << 15;
	return hash;
}

inline int StringHash(const char* s, int length)
{
	int hash = 0;
	for (int i = 0; i < length && s[i]; ++i) {
		hash += s[i];
		hash += hash << 10;
		hash ^= hash >> 6;
	}
	hash += hash << 3;
	hash ^= hash >> 11;
	hash += hash << 15;
	return hash;
}

inline int HashType(const char* s) { return StringHash(s); }
inline int HashType(int64_t value) { return (int)(value ^ (value >> 32)); }
inline int HashType(uint64_t value) { return (int)(value ^ (value >> 32)); }
inline int HashType(int32_t value) { return value; }
inline int HashType(uint32_t value) { return (int)value; }
inline int HashType(float value) { return *(int*)&value; }
inline int HashType(double value) { return HashType(*(uint64_t*)&value); }

template <typename T1, typename T2> inline int HashType(T1 value1, T2 value2) { return HashType(value1) ^ HashType(value2); }
template <typename T1, typename T2, typename... Rest> inline int HashType(T1 value1, T2 value2, Rest... params) { return HashType(value1) ^ HashType(value2, params...); }


template <typename KeyT, typename T, int TableSize, int EmbeddedSize = -1>
class HashListMap;

template <typename KeyT, typename T, int TableSize>
class HashListMap<KeyT, T, TableSize, -1>
{
public:
	using KeyType = KeyT;
	using ValueType = T;

	struct Node
	{
		T& value() { return Value; }
		const T& value() const { return Value; }

		KeyType& key() { return Key; }
		const KeyType& key() const { return Key; }

		Node* next() const { return pNext; }
		Node* prev() const { return pPrev; }
		Node* hashNext() const { return pHashNext; }

	private:
		friend class Iterator;

		KeyType   Key;
		T         Value;
		Node*     pNext;
		Node*     pPrev;
		Node*     pHashPrev;
		Node*     pHashNext;
	};

/*0x08*/ int    m_count = 0;
/*0x10*/ Node*  m_pHead = nullptr;
/*0x18*/ Node*  m_pTail = nullptr;
/*0x20*/ Node*  m_table[TableSize];

	HashListMap()
	{
		memset(m_table, 0, sizeof(m_table));
	}

	virtual ~HashListMap()
	{
	}

	class Iterator
	{
		Node* m_node;

	public:
		Iterator(Node* node = nullptr)
			: m_node(node) {}

		Iterator& operator++() {
			m_node = m_node->pNext;
			return *this;
		}

		Node* node() const { return m_node; }

		Node& operator*() const { return *m_node; }
		Node* operator->() const { return m_node; }

		bool operator==(Iterator other) const { return m_node == other.m_node; }
		bool operator!=(Iterator other) const { return m_node != other.m_node; }
	};

	Iterator begin() { return Iterator(m_pHead); }
	Iterator end() { return Iterator(); }

	size_t size() const { return (size_t)m_count; }
	[[nodiscard]] bool empty() const { return m_count == 0; }

	//----------------------------------------------------------------------------

	Node* NodeGet(const T* cur) const
	{
		return (Node*)((byte*)cur - (size_t)((byte*)(&((Node*)1)->value()) - (byte*)1));
	}

	T* GetFirst() const
	{
		if (m_pHead != nullptr)
			return &m_pHead->value();
		return nullptr;
	}

	T* GetLast() const
	{
		if (m_pTail != nullptr)
			return &m_pTail->value();
		return nullptr;
	}

	T* GetNext(const T* current) const
	{
		Node* n = NodeGet(current);
		if (Node* n2 = n->next())
			return &n2->value();
		return nullptr;
	}

	T* GetPrevious(const T* current) const
	{
		Node* n = NodeGet(current);
		if (Node* n2 = n->prev())
			return &n2->value();
		return nullptr;
	}

	T* FindFirst(const KeyType& key) const
	{
		uint32_t hashValue = (uint32_t)HashType(key);
		int slot = hashValue % TableSize;
		int slot2 = hashValue & (TableSize - 1);
		Node* entry = m_table[slot];

		while (entry != nullptr)
		{
			if (entry->key() == key)
				return &entry->value();

			entry = entry->hashNext();
		}

		return nullptr;
	}

	T* FindNext(const T* previousResult) const
	{
		Node* entry = NodeGet(previousResult);
		KeyType& prevKey = entry->key();

		entry = entry->hashNext();
		while (entry != nullptr)
		{
			if (entry->key() == prevKey)
				return &entry->value();

			entry = entry->hashNext();
		}

		return nullptr;
	}

	const KeyType& GetKey(const T* object) const
	{
		return NodeGet(object)->key();
	}
};

template <typename ValueType, int TableSize, int EmbeddedSize = -1>
using HashList = HashListMap<int, ValueType, TableSize, EmbeddedSize>;



template <typename T, int _Size, int _Cnt>
class HashListSet;

template <typename T, int _Size>
class HashListSet<T, _Size, -1>
{
public:
	using ValueType = T;

	struct Node
	{
		T Value;
		Node* pNext;
		Node* pPrev;
		Node* pNextHash;
	};

 	enum { TheSize = ((_Size == 0) ? 1 : _Size) };

/*0x00*/ void* vfTable;
/*0x04*/ size_t DynSize;
/*0x08*/ size_t MaxDynSize;
/*0x0c*/ size_t Count;
/*0x10*/
	union
	{
		Node *Table[TheSize];
		Node **DynTable;
	};
};

template <typename T, int _Size, int _Cnt = -1>
class HashListSet : public HashListSet<T, _Size, -1>
{};

template <typename T, int _Size>
class HashListSet<T, _Size, -2> : public HashListSet<T, _Size, -1>
{
	// todo: change to whatever stl replacement this it, for now we just void* it...
	void* MemPool;
};

#pragma endregion

#pragma region EQList

template <typename T>
class EQList
{
public:
	struct Node
	{
		T* Item;
		Node* Prev;
		Node* Next;
	};

	bool empty() const { return m_numItems == 0; }
	size_t size() const { return (size_t)m_numItems; }

	class Iterator
	{
		Node* m_node;

	public:
		Iterator(Node* node = nullptr)
			: m_node(node) {}

		Iterator& operator++() {
			m_node = m_node->Next;
			return *this;
		}

		Node* node() const { return m_node; }

		T& operator*() const { return *node()->Item; }
		T* operator->() const { return node()->Item; }

		bool operator==(Iterator other) const { return m_node == other.m_node; }
		bool operator!=(Iterator other) const { return m_node != other.m_node; }
	};

	Iterator begin() { return Iterator(m_pHead); }
	Iterator end() { return Iterator(); }

private:
	int m_numItems = 0;
	Node* m_pHead = nullptr;
	Node* m_pTail = nullptr;
	Node* m_pCurrent = nullptr;
};

#pragma endregion
//----------------------------------------------------------------------------

#pragma region Misc Containers (Needs Polish)

// strings
template <typename T, unsigned int Size>
class TSafeArrayStatic
{
public:
	T& operator[](uint32_t index)
	{
		return Data[index];
	}

	const T& operator[](uint32_t index) const
	{
		return Data[index];
	}

	T Data[Size];
};

template <uint32_t _Len>
class TString : public TSafeArrayStatic<char, _Len>
{};

template <uint32_t _Len>
class TSafeString : public TString<_Len>
{};

template <typename ET>
class CircularArrayClass2 : public CDynamicArrayBase
{
public:
/*0x04*/ int HeadIndex;
/*0x08*/ int WrapIndex;
/*0x0C*/ int ArraySize;
/*0x10*/ int ChunkSize;
/*0x14*/ int ChunkMask;
/*0x18*/ int ChunkShift;
/*0x1C*/ ET** Chunks;
/*0x20*/ int ChunkAlloc;
/*0x24*/ bool bValid;
/*0x28*/
};

// we dont need a fully implemented version. this does the job just fine
template <typename T, uint32_t _Len>
class TCircularBuffer
{
public:
	T       Type[_Len];
	UINT    Len;
	UINT    Index;
};

// size: sizeof(NumBitsType) + sizeof(ElementType) + sizeof(void*)
template <typename NumBitsType, typename ElementType>
class DynamicBitField
{
public:
	static inline constexpr size_t BITS_PER_ELEMENT = sizeof(ElementType) * 8;

	DynamicBitField() = default;

	NumBitsType GetNumBits() const { return m_numBits; }

	bool IsBitSet(NumBitsType bit) const
	{
		if (bit >= 0 && bit < m_numBits)
		{
			int index = GetIndex(bit);
			if (index)
			{
				return (m_elements[index - 1] & (1 << GetOffset(bit))) != 0;
			}
			else
			{
				return (m_element & (1 << GetOffset(bit))) != 0;
			}
		}

		return false;
	}

	int GetNumElements() const
	{
		if (GetOffset(m_numBits) > 0)
			return GetIndex(m_numBits) + 1;
		return GetIndex(m_numBits);
	}

	ElementType GetElement(int element) const
	{
		if (element > 0 && element < GetNumElements())
		{
			if (m_elements)
				return m_elements[element];
		}
		else if (element == 0)
		{
			return m_element;
		}

		return 0;
	}

private:
	int GetIndex(int bit) const { return bit / BITS_PER_ELEMENT; }
	int GetOffset(int bit) const { return bit % BITS_PER_ELEMENT; }

private:
	NumBitsType m_numBits = 0;
	ElementType m_element = 0;
	ElementType* m_elements = nullptr;
};

#pragma endregion

// Linked List classes

#pragma region TList<T>

template <typename T> class TList;

template <typename T>
class TListNode
{
	// pointers to previous and next node
	T* m_pPrev = nullptr;
	T* m_pNext = nullptr;
	TList<T>* m_pList = nullptr;  // pointer to the list this node belongs to

public:
	TListNode() {}

	TListNode(const TListNode&) = delete;
	TListNode& operator=(const TListNode&) = delete;

	bool IsLinked() const { return m_pList != nullptr; }
	TList<T>* GetList() { return m_pList; }

	T* GetPrevious() { return m_pPrev; }
	const T* GetPrevious() const { return m_pPrev; }
	T* GetNext() { return m_pNext; }
	const T* GetNext() const { return m_pNext; }
};

template <typename T>
class TList
{
	T* m_pFirstNode;
	T* m_pLastNode;

	TListNode<T>* GetNodePtr(T* ptr) const
	{
		return static_cast<TListNode<T>*>(ptr);
	}
	const TListNode<T>* GetNodePtr(const T* ptr) const
	{
		return static_cast<const TListNode<T>*>(ptr);
	}

public:
	TList()
		: m_pFirstNode(nullptr)
		, m_pLastNode(nullptr)
	{}

	bool IsEmpty() const { return m_pFirstNode == nullptr; }

	T* GetFirstNode() { return m_pFirstNode; }
	const T* GetFirstNode() const { return m_pFirstNode; }
	T* GetLastNode() { return m_pLastNode; }
	const T* GetLastNode() const { return m_pLastNode; }

	// count the number of nodes in the list
	uint32_t GetNodeCount() const
	{
		uint32_t count = 0;
		T* pNode = m_pFirstNode;
		while (pNode)
		{
			pNode = GetNodePtr(pNode)->GetNext();
			count++;
		}

		return count;
	}

	// get the specified Nth node
	T* GetNode(uint32_t index)
	{
		uint32_t pos = 0;
		T* pNode = m_pFirstNode;

		while (pos < index)
		{
			if (!pNode) return nullptr;

			pNode = GetNodePtr(pNode)->GetNext();
			pos++;
		}

		return pNode;
	}

	const T* GetNode(uint32_t index) const
	{
		uint32_t pos = 0;
		T* pNode = m_pFirstNode;

		while (pos < index)
		{
			if (!pNode) return nullptr;

			pNode = GetNodePtr(pNode)->GetNext();
			count++;
		}

		return pNode;
	}

};

#pragma endregion

//----------------------------------------------------------------------------

template <int NumBits>
class BitField
{
public:
	enum {
		ElementBits = sizeof(uint32_t) * 8,
		ElementCount = (NumBits / ElementBits) + 1,
	};

	int GetNumBits() const { return NumBits; }
	int GetNumElements() const { return ElementCount; }

	bool IsBitSet(int bit) const
	{
		if (bit >= 0 && bit < GetNumBits())
		{
			int index = GetIndex(bit);
			if (index >= 0)
			{
				return (Bits[index] & (1 << GetOffset(bit))) != 0;
			}
		}

		return false;
	}

	int GetElement(int element) const
	{
		if (element >= 0 && element < GetNumElements())
		{
			return Bits[element];
		}

		return 0;
	}

private:
	int GetIndex(int bit) const { return bit / ElementBits; }
	int GetOffset(int bit) const { return bit % ElementBits; }

public:
	uint32_t Bits[ElementCount];
};

//----------------------------------------------------------------------------

// this needs to go somewhere
class CharacterPropertyHash : public HashTable<int>
{
public:

};


//----------------------------------------------------------------------------

} // namespace eqlib
