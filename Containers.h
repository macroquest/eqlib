/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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

	__declspec(property(get = GetLength)) int Count;

protected:
	void ThrowArrayClassException() const
	{
		throw CDynamicArrayException(this);
	}
};

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
/*0x18*/

public:
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
	}

	ArrayClass2(const ArrayClass2& rhs) : ArrayClass2()
	{
		this->operator=(rhs);
	}

	~ArrayClass2()
	{
		Reset();
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
	void Reset()
	{
		for (int i = 0; i < m_binCount; ++i)
		{
			std::destroy_n(m_array[i], m_maxPerBin);
			eqFree(m_array[i]);
		}

		std::destroy_n(m_array, m_binCount);
		eqFree(m_array);

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
			T** newArray = (T**)eqAlloc(sizeof(T*) * newBinCount);

			for (int i = 0; i < m_binCount; ++i)
				newArray[i] = m_array[i];
			for (int curBin = m_binCount; curBin < newBinCount; ++curBin)
			{
				T* newBin = (T*)eqAlloc(sizeof(T) * m_maxPerBin);
				std::uninitialized_default_construct_n(newBin, m_maxPerBin);

				newArray[curBin] = newBin;
			}

			eqFree(m_array);
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

	ArrayClass(int reserve) : ArrayClass()
	{
		m_array = (T*)eqAlloc(sizeof(T) * reserve);
		std::uninitialized_default_construct_n(m_array, reserve);

		m_alloc = reserve;
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

	void Reset()
	{
		if (m_array)
		{
			std::destroy_n(m_array, m_length);
			eqFree(m_array);
		}

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
			T* newArray = (T*)eqAlloc(sizeof(T) * allocatedSize);

			// copy data into new buffer
			std::uninitialized_move_n(m_array, m_length, newArray);
			std::uninitialized_default_construct_n(m_array + m_length, allocatedSize - m_length);

			// clean up old buffer
			std::destroy_n(m_array, m_length);
			eqFree(m_array);

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
	template <typename Hash>
	static void ResizeOnAdd(Hash& hash)
	{
		HashTableStatistics hashStats;
		hash.GetStatistics(&hashStats);
		if (hashStats.TotalEntries * 100 / hashStats.TableSize > 70)
		{
			hash.Resize(hashStats.TableSize * 2);
		}
	}
};

struct ResizePolicyNoResize {};

template <typename T, typename Key>
struct HashTableEntry
{
	T obj;
	Key key;
	HashTableEntry* next;
};

template <typename T, typename Key = int, typename ResizePolicy = ResizePolicyNoResize>
class HashTable
{
public:
	using HashEntry = HashTableEntry<T, Key>;

	template <typename K>
	static unsigned HashValue(const K& key)
	{
		return key;
	}

	T* FindFirst(const Key& key) const;
	int GetTotalEntries() const;
	T* WalkFirst() const;
	T* WalkNext(const T* prevRes) const;
	void GetStatistics(HashTableStatistics* stats) const;
	void Resize(int hashSize);
	void Insert(const T& obj, const Key& key);

/*0x00*/ HashEntry** Table;
/*0x04*/ int         TableSize;
/*0x08*/ int         EntryCount;
/*0x0c*/ int         StatUsedSlots;
/*0x10*/
};

template <typename T, typename Key, typename ResizePolicy>
void HashTable<T, Key, ResizePolicy>::GetStatistics(HashTableStatistics *stats) const
{
	stats->TotalEntries = EntryCount;
	stats->UsedSlots = StatUsedSlots;
	stats->TableSize = TableSize;
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
	HashEntry** oldTable = Table;
	int oldSize = TableSize;
	TableSize = NextPrime(hashSize);

	if (TableSize != oldSize)
	{
		Table = (HashEntry**)eqAlloc(sizeof(HashEntry*) * TableSize);
		memset(Table, 0, sizeof(HashEntry*) * TableSize);

		StatUsedSlots = 0;

		if (EntryCount > 0)
		{
			for (int i = 0; i < oldSize; i++)
			{
				HashEntry* next = oldTable[i];
				while (next != nullptr)
				{
					HashEntry* hold = next;
					next = next->NextEntry;
					int spot = HashValue<Key>(hold->key) % TableSize;

					if (Table[spot] == nullptr)
					{
						hold->NextEntry = nullptr;
						Table[spot] = hold;
						StatUsedSlots++;
					}
					else
					{
						hold->NextEntry = Table[spot];
						Table[spot] = hold;
					}
				}
			}
		}

		eqFree(oldTable);
	}
}

template <typename T, typename Key, typename ResizePolicy>
T* HashTable<T, Key, ResizePolicy>::WalkFirst() const
{
	for (int i = 0; i < TableSize; i++)
	{
		HashEntry* entry = Table[i];
		if (entry != nullptr)
			return &entry->obj;
	}
	return nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
T* HashTable<T, Key, ResizePolicy>::WalkNext(const T* prevRes) const
{
	HashEntry* entry = (HashEntry *)(((char *)prevRes) - offsetof(HashEntry, Obj));
	int i = HashValue<Key>(entry->key) % TableSize;
	entry = entry->NextEntry;
	if (entry != nullptr)
		return &entry->obj;

	i++;
	for (; i < TableSize; i++)
	{
		HashEntry* entry = Table[i];
		if (entry != nullptr)
			return(&entry->obj);
	}

	return nullptrNULL;
}

template <typename T, typename Key, typename ResizePolicy>
int HashTable<T, Key, ResizePolicy>::GetTotalEntries() const
{
	return EntryCount;
}

template <typename T, typename Key, typename ResizePolicy>
T* HashTable<T, Key, ResizePolicy>::FindFirst(const Key& key) const
{
	if (Table == nullptr)
		return nullptr;

	HashEntry* entry = Table[(HashValue<Key>(key)) % TableSize];
	while (entry != nullptr)
	{
		if (entry->key == key)
			return &entry->obj;

		entry = entry->next;
	}

	return nullptr;
}

template <typename T, typename Key, typename ResizePolicy>
void HashTable<T, Key, ResizePolicy>::Insert(const T& obj, const Key& key)
{
	HashEntry* entry = EQ_NEW(HashEntry);
	entry->obj = obj;
	entry->key = key;

	int spot = HashValue<Key>(key) % TableSize;
	if (Table[spot] == nullptr)
	{
		entry->NextEntry = nullptr;
		Table[spot] = entry;
		StatUsedSlots++;
	}
	else
	{
		entry->NextEntry = Table[spot];
		Table[spot] = entry;
	}
	EntryCount++;

	ResizePolicy::ResizeOnAdd(*this);
}

#pragma endregion

template <typename T, int _cnt>
class EQList;

template <typename T>
class EQList<T, -1>
{
public:
	struct Node
	{
		T Value;
		Node* pNext;
		Node* pPrev;
	};

/*0x00*/ void* vfTable;
/*0x04*/ Node* pFirst;
/*0x08*/ Node* pLast;
/*0x0c*/ int Count;
/*0x10*/
};

template <typename T, int _cnt = -1>
class EQList : public EQList<T, -1>
{};

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
	operator const T* () const { return m_pObject; }

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
/*0x04*/ uint32_t m_size = 0;
/*0x08*/ uint32_t m_capacity = 0;
/*0x0c*/
};

#pragma endregion

//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------

template <typename KeyT, typename T, int TableSize, int EmbeddedSize>
class HashListMap;

template <typename KeyT, typename T, int TableSize>
class HashListMap<KeyT, T, TableSize, -1>
{
public:
	using KeyType = KeyT;
	using ValueType = T;
	enum { StorageSize = ((TableSize == 0) ? 1 : TableSize) };

	HashListMap();
	HashListMap(const HashListMap& other);
	virtual ~HashListMap();

	HashListMap& operator=(const HashListMap& other);

	template <int OtherTableSize>
	HashListMap& operator=(const HashListMap<KeyT, T, OtherTableSize, -1>& other);

	struct Node
	{
		T Value;
		Node* pNext;
		Node* pPrev;
		KeyType Key;
		Node* pHashNext;
	};

	Node* NodeGet(const T* cur) const
	{
		return (Node*)((byte*)cur - (size_t)((byte*)(&((Node*)1)->Value) - (byte*)1));
	}

/*0x04*/ int   Count;
/*0x08*/ Node* pHead;
/*0x0c*/ Node* pTail;
	union
	{
	/*0x10*/ Node* Table[StorageSize];
	/*0x10*/ Node** DynTable;
	};
};

template <typename T_KEY, typename T, int _Size, int _Cnt = -1>
class HashListMap : public HashListMap<T_KEY, T, _Size, -1>
{
};

template <typename T, int _Size, int _Cnt = -1>
class HashList : public HashListMap<int, T, _Size, _Cnt>
{
};

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
	/*0x04*/ int DynSize;
	/*0x08*/ int MaxDynSize;
	/*0x0c*/ int Count;
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

class AtomicInt
{
public:
	volatile int Value;
};

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
/*0x24*/
};

template <typename TNumBitsType, typename TElementType>
class DynamicBitField
{
	using NumBitsType = TNumBitsType;
	using ElementType = TElementType;

	NumBitsType NumBits;
	ElementType Element;
	ElementType* Elements;
};

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
			count++;
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

// we dont need a fully implemented version. this does the job just fine
template <typename T, uint32_t _Len>
class TCircularBuffer
{
public:
	T       Type[_Len];
	UINT    Len;
	UINT    Index;
};


struct CKeyUInt32ValueInt32
{
	uint32_t key;
	int      value;
};

class CHashCXStrInt32
{
public:
	ArrayClass2<ArrayClass2<CKeyUInt32ValueInt32>> HashData;

	EQLIB_OBJECT ~CHashCXStrInt32();
	EQLIB_OBJECT CHashCXStrInt32();
	EQLIB_OBJECT bool Insert(CXStr const&, int);
	EQLIB_OBJECT bool LookUp(CXStr const&, int&) const;
	EQLIB_OBJECT void Reset();

	// private
	EQLIB_OBJECT int KeyToBin(CXStr const&) const;
};

//----------------------------------------------------------------------------

template <int NumBits>
class BitField
{
public:
	enum {
		ElementBits = sizeof(uint32_t) * 8
	};
	enum {
		ElementCount = (NumBits / ElementBits) + 1
	};

	uint32_t Bits[ElementCount];
};

//----------------------------------------------------------------------------

} // namespace eqlib
