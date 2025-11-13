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

#include "pch.h"
#include "eqlib/game/PropertySet.h"

#include "mq/base/String.h"

namespace eqlib {

CProperty* CPropertySet::FindMatchingProperty(std::string_view rest)
{
	size_t pos = rest.find_first_of(".");
	std::string_view name = rest.substr(0, pos);
	if (pos != std::string_view::npos)
		rest = rest.substr(pos + 1);
	else
		rest = {};

	CProperty* prop = m_properties.GetFirstNode();
	while (prop)
	{
		if (mq::ci_starts_with(prop->GetName(), name))
		{
			if (rest.empty())
			{
				return prop;
			}

			CPropertySet* propSet = nullptr;
			if (!prop->Get(propSet))
			{
				return nullptr;
			}

			pos = rest.find_first_of(".");
			name = rest.substr(0, pos);
			if (pos != std::string_view::npos)
				rest = rest.substr(pos + 1);
			else
				rest = {};

			prop = propSet->GetFirstProperty();
		}
		else
		{
			prop = prop->GetNext();
		}
	}

	return nullptr;
}

const CProperty* CPropertySet::FindMatchingProperty(std::string_view name) const
{
	return const_cast<CPropertySet*>(this)->FindMatchingProperty(name);
}

CProperty* CPropertySet::FindProperty(std::string_view rest)
{
	size_t pos = rest.find_first_of(".");
	std::string_view name = rest.substr(0, pos);
	if (pos != std::string_view::npos)
		rest = rest.substr(pos + 1);
	else
		rest = {};

	CProperty* prop = m_properties.GetFirstNode();
	while (prop)
	{
		if (mq::ci_equals(prop->GetName(), name))
		{
			if (rest.empty())
			{
				return prop;
			}

			CPropertySet* propSet = nullptr;
			if (!prop->Get(propSet))
			{
				return nullptr;
			}

			pos = rest.find_first_of(".");
			name = rest.substr(0, pos);
			if (pos != std::string_view::npos)
				rest = rest.substr(pos + 1);
			else
				rest = {};

			prop = propSet->GetFirstProperty();
		}
		else
		{
			prop = prop->GetNext();
		}
	}

	return nullptr;
}

const CProperty* CPropertySet::FindProperty(std::string_view name) const
{
	return const_cast<CPropertySet*>(this)->FindProperty(name);
}

const char* PropertyTypeToString(CProperty::EType type)
{
	switch (type)
	{
	case CProperty::ePropertySet: return "PropertySet";
	case CProperty::eTreeViewPropertySet: return "TreeViewPropertySet";
	case CProperty::eBool: return "Bool";
	case CProperty::eFloat: return "Float";
	case CProperty::eInt: return "Int";
	case CProperty::eTreeView: return "TreeView";
	case CProperty::eUnsigned:	return "Unsigned";
	case CProperty::eString: return "String";
	case CProperty::eCharArray: return "CharArray";
	case CProperty::eVoid: return "Void";
	default: return "Invalid";
	}
}

} // namespace eqlib
