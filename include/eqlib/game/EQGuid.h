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

#include <cstdint>

namespace eqlib {

union EqGuid
{
	uint64_t GUID;

	struct
	{
		uint32_t UniqueEntityID;
		uint16_t WorldUniqueID;
		uint16_t Reserved;
	};

	operator uint64_t() const { return GUID; }
	explicit operator bool() const { return GUID != 0; }
	bool operator==(EqGuid& other) { return GUID == other.GUID; }
	bool operator!=(EqGuid& other) { return GUID != other.GUID; }

	EqGuid() : GUID(0) {}
};

} // namespace eqlib
