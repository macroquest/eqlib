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

#include "Allocator.h"

#include <cassert>

namespace eqlib {
namespace SoeUtil {

EQLIB_OBJECT void* Alloc(size_t bytes, int align = 0);
EQLIB_OBJECT void Free(void* p, int align = 0);

template <typename T, typename U>
T* Align(U* p, int align)
{
	return (T*)( ((uintptr_t)p + align - 1) & ((uintptr_t)(align - 1)) );
}

#pragma region Array<T>

// class SoeUtil::Array<unsigned char, 0, 1> `RTTI Type Descriptor'

template <typename T>
class Array
{
public:
	using ValueType = T;

	Array() = default;
	Array(const T* data, int size);
	virtual ~Array();

	Array(const Array<T>& other);
	Array(Array<T>&& other);

	Array& operator=(const Array& other);
	Array& operator=(Array&& other);

	T& at(int index);
	const T& at(int index) const;

	T& operator[](int index);
	const T& operator[](int index) const;

	int GetSize() const { return m_size; }
	bool IsEmpty() const { return m_size == 0; }

	void Swap(Array* other) { SwapInternal(other, true); }

	void Clear();
	void Resize(int count);
	void Reserve(int count);

	T* begin() { return &m_array[0]; }
	const T* begin() const { return &m_array[0]; }
	T* end() { return &m_array[0] + m_size; }
	const T* end() const { return &m_array[0] + m_size; }

protected:
	virtual T* Allocate(int amount, int* allocated, bool exact);
	virtual void Free(T* data, int);
	virtual void SwapInternal(Array* other, bool);

private:
	void CopyAppend(const T* data, int amount);
	void Copy(const T* data, int amount);

private:
/*0x08*/ T* m_array = nullptr;
/*0x10*/ int m_size = 0;
/*0x14*/ int m_alloc = 0;
/*0x18*/
};

template <typename T, int EMBEDDED_SIZE> class EmbeddedArray : public Array<T>
{
private:
/*0x18*/ uint8_t m_fixedData[EMBEDDED_SIZE == 0 ? 1 : (EMBEDDED_SIZE * sizeof(T) + __alignof(T))];
};

//============================================================================

template <typename T>
Array<T>::Array(const T* data, int size)
{
	CopyAppend(data, size);
}

template <typename T>
Array<T>::Array(const Array<T>& other)
{
	CopyAppend(other.m_array, other.m_size);
}

template <typename T>
Array<T>::Array(Array<T>&& other)
{
	m_array = std::exchange(other.m_array, nullptr);
	m_size = std::exchange(other.m_size, 0);
	m_alloc = std::exchange(other.m_alloc, 0);
}

template <typename T>
Array<T>::~Array()
{
	Clear();
	Free(m_array, m_alloc);
	m_array = nullptr;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	Clear();
	CopyAppend(other.m_array, other.m_size);

	return *this;
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T>&& other)
{
	Clear();
	Free(m_array, m_alloc);

	m_array = std::exchange(other.m_array, nullptr);
	m_size = std::exchange(other.m_size, 0);
	m_alloc = std::exchange(other.m_alloc, 0);

	return *this;
}

template <typename T>
T& Array<T>::at(int index)
{
	assert(index >= 0 && index < m_size);
	return m_array[index];
}

template <typename T>
const T& Array<T>::at(int index) const
{
	assert(index >= 0 && index < m_size);
	return m_array[index];
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index >= m_size)
	{
		Resize(index + 1);
	}

	return m_array[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
	return at(index);
}

template <typename T>
void Array<T>::Clear()
{
	for (int i = 0; i < m_size; ++i)
	{
		m_array[i].~T();
	}

	m_size = 0;
}

template <typename T>
void Array<T>::Reserve(int count)
{
	if (count <= m_alloc)
		return;

	// allocate new buffer
	int newSize;
	T* buffer = Allocate(count, &newSize, false);

	if (buffer != m_array)
	{
		// move array
		for (int i = 0; i < m_size; ++i)
		{
			// copy
			new (&buffer[i]) T(m_array[i]);
			m_array[i].~T();
		}

		Free(m_array, m_alloc);

		m_array = buffer;
		m_alloc = newSize;
	}
}

template <typename T>
void Array<T>::Resize(int count)
{
	if (count > m_size)
	{
		// grow bigger
		Reserve(count);

		int pos = m_size;
		m_size = std::min(m_alloc, count);
		while (pos < count)
		{
			new (&m_array[pos++]) T;
		}
	}
	else
	{
		// shrink
		for (int i = count; i < m_size; ++i)
		{
			m_array[i].~T();
		}

		m_size = count;
	}
}

template <typename T>
T* Array<T>::Allocate(int amount, int* allocated, bool)
{
	int currentAlloc = m_alloc;

	if (amount > currentAlloc)
	{
		*allocated = amount * 5 / 4;
		return (T*)SoeUtil::Alloc(*allocated * sizeof(T), __alignof(T));
	}

	*allocated = m_alloc;
	return m_array;
}

template <typename T>
void Array<T>::Free(T* data, int)
{
	SoeUtil::Free(data, __alignof(T));
}

template <typename T>
void Array<T>::SwapInternal(Array* other, bool)
{
	std::swap(m_array, other->m_array);
	std::swap(m_size, other->m_size);
	std::swap(m_alloc, other->m_alloc);
}

template <typename T>
void Array<T>::CopyAppend(const T* data, int amount)
{
	Reserve(m_size + amount);

	// copy forward
	const T* src = data;
	T* dst = m_array + m_size;
	m_size += amount;
	while (amount--)
	{
		new ((void*)dst) T(*src);
		dst++;
		src++;
	}
}

template <typename T>
void Array<T>::Copy(const T* data, int amount)
{
	Resize(0);
	Reserve(amount);
	CopyAppend(data, amount);
}

template <typename T>
bool swap(Array<T>& a, Array<T>& b)
{
	a.Swap(b);
}

#pragma endregion

//----------------------------------------------------------------------------

#pragma region IString

template <typename T = char>
class IString
{
public:
	IString()
	{
	}

	IString(const IString& other)
	{
		copy(other);
	}

	IString(const char* other)
	{
		copy(other);
	}

	virtual ~IString()
	{
		decrement_ref_count();
	}

	IString& operator=(const T* other)
	{
		copy(other);
		return *this;
	}

	IString& operator=(const IString& other)
	{
		copy(other);
		return *this;
	}

	IString& operator=(const std::string_view& other)
	{
		copy(other.data(), other.length());
		return *this;
	}

	virtual void* Alloc(size_t count, size_t* actual, bool* shareable)
	{
		size_t size = count;
		if (m_space > 0)
		{
			size += size / 4;
			size = ((size + 15) / 16) * 16;
		}

		*shareable = true;
		*actual = size;

		return (char*)SoeUtil::Alloc(size);
	}

	virtual void Free(void* data)
	{
		SoeUtil::Free(data);
	}

	void Append(const char* c)
	{
		size_t clen = strlen(c);
		size_t newSize = size() + clen;

		ensure_writable(newSize + 1);
		std::memcpy(m_data + size(), c, clen + 1);
		m_length = newSize;
	}

	void clear()
	{
		decrement_ref_count();

		m_data = "";
		m_space = 0;
		m_length = 0;
	}

	bool empty() const { return m_length == 0; }
	const char* data() const { return m_data; }
	const char* c_str() const { return m_data; }
	size_t size() const { return m_length; }

	operator std::string_view() const noexcept
	{
		return std::string_view(data(), size());
	}

	int ref_count() const
	{
		if (m_space <= 0)
			return 0;

		return get_ref_count_ptr()->load();
	}

private:
	void copy(const T* other)
	{
		if (other == nullptr || *other == 0)
			clear();
		else if (other != m_data || m_space <= 0)
		{
			size_t len = strlen(other);
			ensure_writable(len + 1);

			std::memcpy(m_data, other, len + 1);
			m_length = static_cast<int>(len);
		}
	}

	void copy(const T* other, size_t length)
	{
		if (length == 0)
			clear();
		else
		{
			ensure_writable(length + 1);
			std::memcpy(m_data, other, length);
			m_data[length] = 0;
			m_length = static_cast<int>(length);
		}
	}

	void copy(const IString& other)
	{
		if (this == &other)
			return;

		// I could implement ref counting here but i'm just going to always copy.
		copy(other.c_str());
	}

	void ensure_writable(size_t length)
	{
		if (length > static_cast<size_t>(m_space) || ref_count() > 1)
		{
			size_t neededSize = static_cast<size_t>(m_length + 1);
			if (length < neededSize)
				length = neededSize;

			// data we need includes the std::atomic_int
			size_t spaceNeeded = length + sizeof(std::atomic_int);
			size_t allocated = 0;
			bool shared = false;
			uint8_t* data = (uint8_t*)Alloc(spaceNeeded, &allocated, &shared);
			new (data) std::atomic_int(shared ? 1 : 0);

			T* newData = reinterpret_cast<T*>(data + sizeof(std::atomic_int));
			int newSpace = static_cast<int>(allocated - sizeof(std::atomic_int));
			int newLength = m_length;
			std::memcpy(newData, c_str(), neededSize);

			decrement_ref_count();

			m_data = newData;
			m_space = newSpace;
			m_length = newLength;
		}
	}

	void increment_ref_count()
	{
		int oldRefCount = std::atomic_fetch_add(get_ref_count_ptr(), 1);
		assert(oldRefCount != 0);
	}

	void decrement_ref_count()
	{
		if (m_space > 0)
		{
			auto refCount = get_ref_count_ptr();
			if (std::atomic_fetch_sub(refCount, 1) == 1)
			{
				std::destroy_at(refCount);
				Free(refCount);
			}
		}
	}

	std::atomic_int* get_ref_count_ptr()
	{
		assert(m_space > 0);

		// ref count is stored before the data.
		uint8_t* refCount = reinterpret_cast<uint8_t*>(m_data) - sizeof(std::atomic_int);
		return reinterpret_cast<std::atomic_int*>(refCount);
	}

	const std::atomic_int* get_ref_count_ptr() const
	{
		assert(m_space > 0);

		// ref count is stored before the data.
		uint8_t* refCount = reinterpret_cast<uint8_t*>(m_data) - sizeof(std::atomic_int);
		return reinterpret_cast<std::atomic_int*>(refCount);
	}

private:
	static inline char s_emptyString[] = "";

/*0x08*/ T* m_data = s_emptyString;
/*0x10*/ int m_length = 0;
/*0x14*/ int m_space = 0;
/*0x18*/
};

using String = IString<char>;

template <typename T, int FIXED_SIZE>
class IStringFixed : public IString<T>
{
public:
	virtual void* Alloc(size_t count, size_t* actual, bool* shareable)
	{
		if (count <= sizeof(m_internalStorage))
		{
			*shareable = false;
			*actual = sizeof(m_internalStorage);

			return m_internalStorage;
		}

		return IString<T>::Alloc(count, actual, shareable);
	}

	virtual void Free(void* data)
	{
		if (data != m_internalStorage)
		{
			IString<T>::Free(data);
		}
	}

private:
	uint8_t m_internalStorage[FIXED_SIZE * sizeof(T) + sizeof(int)];
};

template <int SIZE>
using StringFixed = IStringFixed<char, SIZE>;

#pragma endregion

//----------------------------------------------------------------------------

#pragma region SharedPtr

namespace Internal
{
	// SharedData is the control block of the SoeUtil::SharedPtr
	class SharedData
	{
	public:
		SharedData() = default;
		virtual ~SharedData() {}

		void IncrementReferenceCount()
		{
			m_refs.fetch_add(1);
			m_strongRefs.fetch_add(1);
		}

		void DecrementReferenceCount()
		{
			m_refs.fetch_sub(1);
			m_strongRefs.fetch_sub(1);
		}

		template <typename T>
		bool is_inplace_constructed(T* p) const noexcept
		{
			return get_inplace_storage<T>() == p;
		}

		template <typename T>
		T* get_inplace_storage() const noexcept
		{
			// The object is located after this object's storage aligned on m_alignment or 8.
			return Align<T>(reinterpret_cast<const uint8_t*>(this) + sizeof(this), 0);
		}

		virtual void unknown() {}

	public:
		std::atomic_int32_t m_refs{ 1 };              // reference counter for SharedData
		std::atomic_int32_t m_strongRefs{ 1 };        // reference counter for the data
	};
}

template <typename T>
class WeakPtr;

template <typename T>
class SharedPtr
{
public:
	SharedPtr() noexcept = default;
	~SharedPtr()
	{
		decrement_ref_count();
	}

	explicit SharedPtr(T* other)
	{
		if (other)
			construct(other);
	}

	SharedPtr(nullptr_t) noexcept {}
	SharedPtr(const SharedPtr& other)
	{
		this->copy_construct_from(other);
	}

	template <typename U, std::enable_if_t<std::is_convertible<U*, T*>::type, int> = 0>
	SharedPtr(const SharedPtr<U>& other)
	{
		this->copy_construct_from(other);
	}

	SharedPtr(SharedPtr&& other)
	{
		this->move_construct_from(std::move(other));
	}

	template <typename U, std::enable_if_t<std::is_convertible<U*, T*>::type, int> = 0>
	SharedPtr(SharedPtr<U>&& other)
	{
		this->move_construct_from(std::move(other));
	}

	explicit operator bool() { return m_ptr != nullptr; }

	SharedPtr& operator=(const SharedPtr& other) noexcept
	{
		SharedPtr(other).swap(*this);
		return *this;
	}

	template <typename U, std::enable_if_t<std::is_convertible<U*, T*>::type, int> = 0>
	SharedPtr& operator=(const SharedPtr<U>& other) noexcept
	{
		SharedPtr(other).swap(*this);
		return *this;
	}

	SharedPtr& operator=(SharedPtr&& other) noexcept
	{
		SharedPtr(std::move(other)).swap(*this);
		return *this;
	}

	template <typename U, std::enable_if_t<std::is_convertible<U*, T*>::type, int> = 0>
	SharedPtr& operator=(const SharedPtr<U>&& other) noexcept
	{
		SharedPtr(std::move(other)).swap(*this);
		return *this;
	}

	T* get() const { return m_ptr; }

	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }

	void reset() noexcept
	{
		SharedPtr().swap(*this);
	}

	template <typename U>
	void reset(U* p)
	{
		SharedPtr(p).swap(*this);
	}

	void swap(SharedPtr& other) noexcept
	{
		std::swap(m_rep, other.m_rep);
		std::swap(m_ptr, other.m_ptr);
	}

	// get the current reference count
	[[nodiscard]] int use_count() const noexcept
	{
		return m_rep ? m_rep->m_strongRefs : 0;
	}

	// Compare the address of shared control blocks
	[[nodiscard]] bool owner_before(SharedPtr& other) const noexcept
	{
		return m_rep < other.m_rep;
	}

	template <typename U, typename ... Args>
	friend SharedPtr<U> MakeShared(Args&&... args);

private:
	void construct(T* other)
	{
		m_ptr = other;
		m_rep = eqlib::eqNew<Internal::SharedData>();
	}

	template <typename U>
	void copy_construct_from(const SharedPtr<U>& other) noexcept
	{
		m_ptr = other.m_ptr;
		m_rep = other.m_rep;

		increment_ref_count();
	}

	template <typename U>
	void move_construct_from(SharedPtr<U>&& other) noexcept
	{
		m_ptr = other.m_ptr;
		m_rep = other.m_rep;

		other.m_ptr = nullptr;
		other.m_rep = nullptr;
	}

	void increment_ref_count() noexcept
	{
		if (m_rep)
		{
			m_rep->IncrementReferenceCount();
		}
	}

	void decrement_ref_count() noexcept
	{
		if (m_rep)
		{
			m_rep->DecrementReferenceCount();

			if (m_rep->m_strongRefs == 0)
			{
				if (!m_rep->is_inplace_constructed(m_ptr))
				{
					eqDelete(m_ptr);
					m_ptr = nullptr;
				}
				else
				{
					m_ptr->~T();
				}
			}

			if (m_rep->m_refs == 0)
			{
				eqlib::eqDelete(m_rep);
				m_rep = nullptr;
			}
		}
	}

private:
	Internal::SharedData* m_rep = nullptr;
	T* m_ptr = nullptr;
};

template <typename T, typename U>
bool operator==(const SoeUtil::SharedPtr<T>& lhs, const SoeUtil::SharedPtr<U>& rhs)
{
	return lhs.get() == rhs.get();
}

template <typename T, typename U>
bool operator!=(const SoeUtil::SharedPtr<T>& lhs, const SoeUtil::SharedPtr<U>& rhs)
{
	return lhs.get() != rhs.get();
}

template <typename T>
bool operator==(const SoeUtil::SharedPtr<T>& lhs, T* rhs)
{
	return lhs.get() == rhs;
}

template <typename T>
bool operator==(T* lhs, const SoeUtil::SharedPtr<T>& rhs)
{
	return lhs == rhs.get();
}

template <typename T>
bool operator!=(const SoeUtil::SharedPtr<T>& lhs, T* rhs)
{
	return lhs.get() != rhs;
}

template <typename T>
bool operator!=(T* lhs, const SoeUtil::SharedPtr<T>& rhs)
{
	return lhs != rhs.get();
}

template <typename T>
bool operator==(const SoeUtil::SharedPtr<T>& lhs, nullptr_t)
{
	return lhs.get() == nullptr;
}

template <typename T>
bool operator==(nullptr_t, const SoeUtil::SharedPtr<T>& rhs)
{
	return rhs.get() == nullptr;
}

template <typename T>
bool operator!=(const SoeUtil::SharedPtr<T>& lhs, nullptr_t)
{
	return lhs.get() != nullptr;
}

template <typename T>
bool operator!=(nullptr_t, const SoeUtil::SharedPtr<T>& rhs)
{
	return rhs.get() != nullptr;
}

template <typename T, typename ... Args>
SharedPtr<T> MakeShared(Args&&... args)
{
	SharedPtr<T> p;
	p.m_rep = new (SoeUtil::Alloc(sizeof(Internal::SharedData) + sizeof(T) + __alignof(T))) Internal::SharedData();
	p.m_ptr = new (p.m_rep->template get_inplace_storage<T>()) T(std::forward<Args>(args)...);
	return p;
}

//----------------------------------------------------------------------------


template <typename KeyType, typename ValueType> class EmbeddedMapLink;
template <typename KeyType, typename ValueType, EmbeddedMapLink<KeyType, ValueType> ValueType::* Link> class EmbeddedMap;

template <typename KeyType, typename ValueType>
class EmbeddedMapLink
{
public:
	EmbeddedMapLink() = default;
	~EmbeddedMapLink() = default;

	EmbeddedMapLink(const EmbeddedMapLink& other) = delete;
	EmbeddedMapLink& operator=(const EmbeddedMapLink& other) = delete;

	KeyType m_key;
	ValueType* m_parent = nullptr;
	ValueType* m_left = nullptr;
	ValueType* m_right = nullptr;
	uint32_t m_red : 1;
	uint32_t m_position : 31;
};

// Size: 0x10
template <typename KeyType, typename ValueType, EmbeddedMapLink<KeyType, ValueType> ValueType::* Link>
class EmbeddedMap
{
public:
	using key_type = KeyType;
	using mapped_type = ValueType;
	using link_type = EmbeddedMapLink<KeyType, ValueType>;

	EmbeddedMap() = default;
	~EmbeddedMap() = default;

/*0x00*/ ValueType* m_root;
/*0x08*/ int m_count;
/*0x0c*/
};

constexpr int AlignedSize(int size, int alignment)
{
	return (size + alignment - 1) & ~(alignment - 1);
}


//----------------------------------------------------------------------------

template <int Size, int EmbeddedCount = 0, int Alignment = 4>
class MemoryPool
{
public:
	MemoryPool()
	{
		m_compact = false;
		m_freeList = nullptr;

	}
	~MemoryPool();

	struct Node
	{
		union
		{
			uint8_t aligned_storage[AlignedSize(Size, Alignment)];
			Node* next;
		};
	};

	struct Block
	{
		EmbeddedMapLink<Node*, Block> link;
		int created;
		int available;
	};

/*0x00*/ EmbeddedMap<Node*, Block, &Block::m_link> m_blocks;
/*0x10*/ Node* m_freeList;
/*0x18*/ int m_freeListCount;
/*0x1c*/ bool m_compact;

/*0x1d*/ uint8_t m_storage[EmbeddedCount > 0 ? EmbeddedCount * sizeof(Node) + Alignment : 1];
/*0x28*/ // minimum size
};

//----------------------------------------------------------------------------

#pragma region SoeUtil::Map

template <typename Key, typename Value, int EmbeddedCount = -1>
class Map;

template <typename Key, typename Value>
class Map<Key, Value, -1>
{
public:
	using key_type = Key;
	using mapped_type = Value;

	struct ValuePair
	{
		key_type    key;
		mapped_type value;
	};
	using value_type = ValuePair;

	Map() = default;
	virtual ~Map() = default;

	Value* Find(const Key& key) const;

	Value* GetFirst() const;
	Value* GetLast() const;
	Value* GetNext(const Value* pValue) const;
	Value* GetPrev(const Value* pValue) const;

	const Key& GetKeyOf(const Value* pValue) const;
	int GetCount() const { return m_count; }
	bool IsEmpty() const { return m_count == 0; }

	mapped_type* operator[](const Key& key) { return Find(key); }
	const mapped_type* operator[](const Key& key) const { return Find(key); }

private:
	virtual bool IsSwapAllowed() const { return true; }
	virtual uint8_t* Allocate() { return nullptr; }
	virtual void Free(uint8_t*) {}

	// Node size: 1c + sizeof(Key)+sizeof(Value)
	struct Node : value_type
	{
	/*+0x00*/ Node* parent;
	/*+0x08*/ Node* left;
	/*+0x10*/ Node* right;
	/*+0x18*/ uint32_t red : 1;
	/*+0x18*/ uint32_t position : 31;
	/*+0x1c*/
	};

	static Node* GetNode(const Value* pValue);
	static Node* GetNextNode(const Node* pNode);
	static Node* GetPrevNode(const Node* pNode);

public:
#pragma region SoeUtil::Map::ConstIterator
	template <int direction = 0>
	class ConstIterator
	{
	public:
		using iterator_category = std::bidirectional_iterator_tag;

		using value_type = Map::value_type;
		using difference_type = std::ptrdiff_t;
		using pointer = const value_type*;
		using reference = const value_type&;

		ConstIterator() = default;
		ConstIterator(const Node* value) : m_value(value) {}

		[[nodiscard]] reference operator*() const
		{
			return static_cast<reference>(*m_value);
		}

		[[nodiscard]] pointer operator->() const
		{
			return static_cast<pointer>(&m_value);
		}

		ConstIterator& operator++();
		ConstIterator& operator--();

		bool operator==(const ConstIterator& other) const { return m_value == other.m_value; }
		bool operator!=(const ConstIterator& other) const { return m_value != other.m_value; }

	protected:
		const Node* m_value = nullptr;
	};
#pragma endregion

#pragma region SoeUtil::Map::ValueIterator
	class ValueIterator : public ConstIterator<0>
	{
	public:
		using ConstIterator<0>::ConstIterator;

		using value_type = Map::mapped_type*;
		using difference_type = std::ptrdiff_t;
		using pointer = value_type;
		using reference = value_type;

		[[nodiscard]] reference operator*() const
		{
			return (Map::mapped_type*)&m_value->value;
		}
		[[nodiscard]] pointer operator->() const
		{
			return (Map::mapped_type*)&m_value->value;
		}
	};
#pragma endregion

	using iterator = ConstIterator<0>;
	using const_iterator = ConstIterator<0>;
	using reverse_iterator = ConstIterator<1>;
	using const_reverse_iterator = ConstIterator<1>;

	iterator begin() { return iterator(GetFirst()); }
	const_iterator begin() const { return const_iterator(GetNode(GetFirst())); }
	const_iterator cbegin() const { return const_iterator(GetNode(GetFirst())); }

	iterator end() { return iterator(nullptr); }
	const_iterator end() const { return const_iterator(nullptr); }
	const_iterator cend() const { return const_iterator(nullptr); }

	reverse_iterator rbegin() { return reverse_iterator(GetNode(GetLast())); }
	const_reverse_iterator rbegin() const { return const_reverse_iterator(GetNode(GetLast())); }
	const_reverse_iterator crbegin() const { return const_reverse_iterator(GetNode(GetLast())); }

	reverse_iterator rend() { return reverse_iterator(nullptr); }
	const_reverse_iterator rend() const { return const_reverse_iterator(nullptr); }
	const_reverse_iterator crend() const { return const_reverse_iterator(nullptr); }

	template <typename IteratorType>
	struct IterRange
	{
		IteratorType first;
		IteratorType second;

		IterRange(IteratorType first_, IteratorType second_) : first(first_), second(second_) {}

		auto begin() { return first; }
		auto end() { return second; }
	};

	using value_iterator = ValueIterator;

	using ItemRange = IterRange<const_iterator>;
	using ValueRange = IterRange<value_iterator>;

	auto items() const { return IterRange(cbegin(), cend()); }
	ValueRange values() const { return ValueRange(value_iterator(GetNode(GetFirst())), value_iterator(nullptr)); }

/*0x08*/ Node* m_root = nullptr;
/*0x10*/ int   m_count = 0;
/*0x18*/
};

template <typename Key, typename Value>
template <int direction>
typename Map<Key, Value>::template ConstIterator<direction>& Map<Key, Value>::ConstIterator<direction>::operator++()
{
	if constexpr (direction == 0)
		m_value = GetNextNode(m_value);
	else
		m_value = GetPrevNode(m_value);

	return *this;
}

template <typename Key, typename Value>
template <int direction>
typename Map<Key, Value>::template ConstIterator<direction>& Map<Key, Value>::ConstIterator<direction>::operator--()
{
	if constexpr (direction == 0)
		m_value = GetPrevNode(m_value);
	else
		m_value = GetNextNode(m_value);

	return *this;
}

template <typename Key, typename Value>
typename Map<Key, Value>::Node* Map<Key, Value>::GetNode(const Value* pValue)
{
	return pValue ? (Node*)((uint8_t*)pValue - offsetof(Node, value)) : nullptr;
}

template <typename Key, typename Value>
typename Map<Key, Value>::Node* Map<Key, Value>::GetNextNode(const Node* pValue)
{
	if (pValue->right)
	{
		Node* node = pValue->right;
		while (node->left)
		{
			node = node->left;
		}
		return node;
	}

	Node* parent = pValue->parent;
	while (parent && pValue == parent->right)
	{
		pValue = parent;
		parent = pValue->parent;
	}

	return parent;
}

template <typename Key, typename Value>
typename Map<Key, Value>::Node* Map<Key, Value>::GetPrevNode(const Node* pValue)
{
	if (pValue->left)
	{
		Node* node = pValue->left;
		while (node->right)
		{
			node = node->right;
		}
		return node;
	}

	Node* parent = pValue->parent;
	while (parent && pValue == parent->left)
	{
		pValue = parent;
		parent = pValue->parent;
	}
	return parent;
}

template <typename Key, typename Value>
Value* Map<Key, Value>::Find(const Key& key) const
{
	Node* node = m_root;

	while (node != nullptr)
	{
		if (key < node->key)
		{
			node = node->left;
		}
		else if (node->key < key)
		{
			node = node->right;
		}
		else
		{
			return &node->value;
		}
	}

	return nullptr;
}

template <typename Key, typename Value>
Value* Map<Key, Value>::GetFirst() const
{
	Node* node = m_root;
	Node* value = nullptr;

	while (node != nullptr)
	{
		value = node;
		node = node->left;
	}

	return value ? &value->value : nullptr;
}

template <typename Key, typename Value>
Value* Map<Key, Value>::GetLast() const
{
	Node* node = m_root;
	Node* value = nullptr;

	while (node != nullptr)
	{
		value = node;
		node = node->right;
	}
	return value ? &value->value : nullptr;
}

template <typename Key, typename Value>
const Key& Map<Key, Value>::GetKeyOf(const Value* pValue) const
{
	Node* node = GetNode(pValue);
	return node->key;
}

template <typename Key, typename Value>
Value* Map<Key, Value>::GetNext(const Value* pValue) const
{
	Node* node = GetNextNode(GetNode(pValue));
	return node ? &node->value : nullptr;
}

template <typename Key, typename Value>
Value* Map<Key, Value>::GetPrev(const Value* pValue) const
{
	Node* node = GetPrevNode(GetNode(pValue));
	return node ? &node->value : nullptr;
}

#pragma endregion SoeUtil::Map

//----------------------------------------------------------------------------

template <typename Key>
class Set
{
public:
	using key_type = Key;

	Set()
	{
	}

	virtual ~Set()
	{
	}

	virtual bool IsSwapAllowed() const { return true; }
	virtual uint8_t* Allocate() { return nullptr; }
	virtual void Free(uint8_t*) {}

	struct Node
	{
		key_type key;

		Node* parent;
		Node* left;
		Node* right;
		uint32_t red : 1;
		uint32_t position : 32;
	};

/*0x08*/ Node* root = nullptr;
/*0x10*/ int count = 0;
};

//----------------------------------------------------------------------------

#pragma endregion

#pragma region List<T>

template <typename T>
class List
{
public:
	class Node
	{
		T     m_value;
		Node* m_next;
		Node* m_prev;
	};

	virtual ~List();
	virtual bool IsSwapAllowed() { return true; }
	virtual uint8_t* Allocate();
	virtual void Free(uint8_t* data);

	Node*    m_head;
	Node*    m_tail;
	int      m_size;
};

//----------------------------------------------------------------------------

#pragma endregion

#pragma region StrongType

template <typename T, typename K>
class StrongType
{
public:
	using value_type = T;

	StrongType() : m_value() {}
	StrongType(const T& value) : m_value(value) {}

	StrongType(const StrongType& other)
		: m_value(other.m_value) {}
	StrongType(StrongType&& other)
		: m_value(other.m_value) {}

	StrongType& operator=(const StrongType& other) { m_value = other.m_value; return *this; }
	StrongType& operator=(StrongType&& other) { m_value = other.m_value; return *this; }

	T& value() { return m_value; }
	const T& value() const { return m_value; }
	const T& const_value() const { return m_value; }

private:
	value_type m_value;
};

template <typename T, typename K>
inline bool operator==(const StrongType<T, K>& v1, const StrongType<T, K>& v2)
{
	return v1.value() == v2.value();
}

template <typename T, typename K>
inline bool operator!=(const StrongType<T, K>& v1, const StrongType<T, K>& v2)
{
	return v1.value() != v2.value();
}

template <typename T, typename K>
inline bool operator<(const StrongType<T, K>& v1, const StrongType<T, K>& v2)
{
	return v1.value() < v2.value();
}

template <typename T, typename K>
inline bool operator<=(const StrongType<T, K>& v1, const StrongType<T, K>& v2)
{
	return v1.value() <= v2.value();
}

template <typename T, typename K>
inline bool operator>(const StrongType<T, K>& v1, const StrongType<T, K>& v2)
{
	return v1.value() == v2.value();
}

template <typename T, typename K>
inline bool operator>=(const StrongType<T, K>& v1, const StrongType<T, K>& v2)
{
	return v1.value() == v2.value();
}

#pragma endregion

//============================================================================

} // namespace SoeUtil
} // namespace eqlib
