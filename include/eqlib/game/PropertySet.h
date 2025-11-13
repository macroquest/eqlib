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

#include "eqlib/Common.h"
#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"

#include <string_view>

namespace eqlib {

class CPropertySet;

class CProperty : public TListNode<CProperty>
{
public:
	enum EType
	{
		ePropertySet,
		eTreeViewPropertySet,
		eBool,
		eFloat,
		eInt,
		eTreeView,
		eUnsigned,
		eString,
		eCharArray,
		eVoid,


		eTypeCount,
		eInvalid = eTypeCount,
	};

	virtual ~CProperty() {}
	virtual const char* GetName() const = 0;
	virtual EType GetType() const = 0;
	virtual bool IsPropertySet() const { return false; }
	virtual bool IsReadOnly() const { return false; }
	virtual const CPropertySet* GetOptions() const { return nullptr; }
	virtual const char* GetDescription() const { return "No Description"; }
	virtual bool GetTextValue(CXStr& value) const { return false; }
	virtual bool SetTextValue(const char* value) { return false; }
	virtual bool Get(CPropertySet*& value) { return false; }
	virtual bool Get(const CPropertySet*& value) const { return false; }
	virtual bool Get(bool& value) const { return false; }
	virtual bool Get(float& value) const { return false; }
	virtual bool Get(int& value) const { return false; }
	virtual bool Get(unsigned int& value) const { return false; }
	virtual bool Get(CXStr& value) const { return false; }
	virtual bool Set(bool value) { return false; }
	virtual bool Set(float value) { return false; }
	virtual bool Set(int value) { return false; }
	virtual bool Set(unsigned int value) { return false; }
	virtual bool Set(const char* value) { return false; }
	virtual bool Set() { return false; }
	virtual bool GetMin(float& min) const { return false; }
	virtual bool GetMax(float& max) const { return false; }
	virtual bool SetMin(float min) { return false; }
	virtual bool SetMax(float max) { return false; }
};

//----------------------------------------------------------------------------

class CPropertySet : public CProperty
{
public:
	CPropertySet(const char* name) : m_name(name) {}
	virtual ~CPropertySet() override {}
	virtual const char* GetName() const override { return m_name; }
	virtual EType GetType() const override { return ePropertySet; }
	virtual bool IsPropertySet() const override { return true; }
	virtual bool Get(CPropertySet*& value) override { value = this; return true; }
	virtual bool Get(const CPropertySet*& value) const override { value = this; return true; }

	bool IsExpanded() const { return m_expanded; }
	void SetExpanded(bool value) { m_expanded = value; }

	uint32_t GetPropertyCount() { return m_properties.GetNodeCount(); }
	bool IsEmpty() const { return m_properties.IsEmpty(); }

	const CProperty* GetProperty(uint32_t index) const { return m_properties.GetNode(index); }
	CProperty* GetProperty(uint32_t index) { return m_properties.GetNode(index); }

	const CProperty* GetFirstProperty() const { return m_properties.GetFirstNode(); }
	CProperty* GetFirstProperty() { return m_properties.GetFirstNode(); }
	const CProperty* GetLastroperty() const { return m_properties.GetLastNode(); }
	CProperty* GetLastProperty() { return m_properties.GetLastNode(); }

	CProperty* FindMatchingProperty(std::string_view name); // matches strings that start with the name
	const CProperty* FindMatchingProperty(std::string_view name) const;
	CProperty* FindProperty(std::string_view name); // matches strings that are exact (case-insensitivE)
	const CProperty* FindProperty(std::string_view name) const;

private:
	TList<CProperty> m_properties;
	const char* m_name = nullptr;
	bool m_expanded = false;
};

const char* PropertyTypeToString(CProperty::EType type);

} // namespace eqlib
