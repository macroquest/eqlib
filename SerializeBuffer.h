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

namespace eqlib {

namespace detail
{
	template <typename, typename T>
	struct has_unserialize {
		static_assert(
			std::integral_constant<T, false>::value,
			"Second template parameter needs to be of function type.");
	};

	// specialization that does the checking
	template <typename C, typename Ret, typename... Args>
	struct has_unserialize<C, Ret(Args...)> {
	private:
		template <typename T>
		static constexpr auto check(T*)
			-> typename std::is_same<
			decltype(std::declval<T>().UnSerialize(std::declval<Args>()...)),
			Ret>::type;

		template <typename>
		static constexpr std::false_type check(...);

		using type = decltype(check<C>(0));

	public:
		static constexpr bool value = type::value;
	};
}

class CUnSerializeBuffer
{
public:
	const char* m_pBuffer = nullptr;
	uint32_t    m_uLength = 0;
	uint32_t    m_uReadOffset = 0;

	inline CUnSerializeBuffer() = default;

	inline CUnSerializeBuffer(const CUnSerializeBuffer& other)
		: m_pBuffer(other.m_pBuffer)
		, m_uLength(other.m_uLength)
		, m_uReadOffset(other.m_uReadOffset)
	{}

	inline CUnSerializeBuffer(const char* buffer, uint32_t length)
		: m_pBuffer(buffer)
		, m_uLength(length)
	{}

	inline void Reset() { m_uReadOffset = 0; }

	void Read(CXStr& str)
	{
		int length = 0;
		Read(length);

		if (length > 0)
		{
			str.assign(m_pBuffer + m_uReadOffset, length);
			m_uReadOffset += length;
		}
		else
		{
			str.clear();
		}
	}

	template <typename T>
	std::enable_if_t<detail::has_unserialize<T, void(CUnSerializeBuffer&)>::value, void> Read(T& obj)
	{
		obj.UnSerialize(*this);
	}

	template <typename T>
	std::enable_if_t<!detail::has_unserialize<T, void(CUnSerializeBuffer&)>::value, void> Read(T& r)
	{
		r = *(T*)(m_pBuffer + m_uReadOffset);
		m_uReadOffset += sizeof(T);
	}

	void ReadString(std::string& out)
	{
		int len = 0;
		while (m_uReadOffset < m_uLength)
		{
			size_t offset = m_uReadOffset++;
			if (m_pBuffer[offset] == '\0')
				break;

			out.append(1, (char)(m_pBuffer[offset]));
		}
	}

	template <typename T>
	void Read(T* r, uint32_t size)
	{
		uint32_t savedSize;
		Read(savedSize);

		for (size_t i = 0; i < savedSize && i < size; i++)
		{
			Read(r[i]);
		}
	}

	bool ReadString(char* buffer, size_t bufferSize)
	{
		uint32_t size = (uint32_t)strnlen(m_pBuffer + m_uReadOffset, m_uLength - m_uReadOffset) + 1;
		uint32_t readAmount = std::min((uint32_t)bufferSize - 1, size);

		if (!ValidateRead(readAmount))
		{
			*buffer = 0;
			return false;
		}

		memcpy(buffer, m_pBuffer + m_uReadOffset, readAmount);
		buffer[readAmount] = 0;
		m_uReadOffset += size;
		return true;
	}

private:
	bool ValidateRead(uint32_t amount)
	{
		return (m_uReadOffset + amount <= m_uLength);
	}
};

//============================================================================



} // namespace eqlib
