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

#include "pch.h"
#include "XMLData.h"

#include "CXWnd.h"
#include "Globals.h"

namespace eqlib {

//============================================================================
// CXMLDataManager
//============================================================================

CXMLData* CXMLDataClass::GetItemByName(const CXStr& itemName) const
{
	for (int i = 0; i < items.GetLength(); ++i)
	{
		if (items[i] && items[i]->GetItemName() == itemName)
			return items[i].get();
	}

	return nullptr;
}

CXMLData* CXMLDataClass::GetItemByIndex(int itemIdx) const
{
	if (itemIdx >= 0 && itemIdx < items.GetLength())
		return items[itemIdx].get();

	return nullptr;
}

//----------------------------------------------------------------------------

CXMLDataManager::CXMLDataManager()
{
}

CXMLDataManager::~CXMLDataManager()
{
}

int CXMLDataManager::GetClassIdx(CXStr className) const
{
	for (int idx = 0; idx < dataArray.GetLength(); ++idx)
	{
		if (dataArray[idx].className == className)
			return idx;
	}

	return -1;
}

CXStr CXMLDataManager::GetClassName(int classIdx) const
{
	if (classIdx >= 0 && classIdx < dataArray.GetLength())
	{
		return dataArray[classIdx].className;
	}

	return CXStr();
}

int CXMLDataManager::GetItemIdx(int classIdx, CXStr itemName) const
{
	if (classIdx >= 0 && classIdx < dataArray.GetLength())
	{
		if (CXMLData* data = dataArray[classIdx].GetItemByName(itemName))
			return data->nItemIdx;
	}

	return -1;
}

int CXMLDataManager::GetNumClass() const
{
	return dataArray.GetLength();
}

int CXMLDataManager::GetNumItem(int classIdx) const
{
	if (classIdx >= 0 && classIdx < dataArray.GetLength())
	{
		return dataArray[classIdx].items.GetLength();
	}

	return 0;
}

CXMLData* CXMLDataManager::GetXMLData(int classIdx, int itemIdx) const
{
	if (classIdx >= 0 && classIdx < dataArray.GetLength())
	{
		return dataArray[classIdx].GetItemByIndex(itemIdx);
	}

	return nullptr;
}

CXMLData* CXMLDataManager::GetXMLData(const CXStr& className, const CXStr& itemName) const
{
	int classIdx = GetClassIdx(className);

	if (classIdx >= 0 && classIdx < dataArray.GetLength())
	{
		return dataArray[classIdx].GetItemByName(itemName);
	}

	return nullptr;
}

UIType CXMLDataManager::GetWindowType(const CXWnd* wnd) const
{
	if (int objectId = wnd->GetXMLIndex())
	{
		if (CXMLData* pXmlData = GetXMLData(objectId))
			return pXmlData->Type;
	}

	return UI_Unknown;
}

//----------------------------------------------------------------------------

CXMLData::CXMLData()
{
}

CXMLData::~CXMLData()
{
}

int CXMLData::GetStreamSize()
{
	// WIP: Not implemented yet, because its probably not needed for our purposes.
	// It just returns the size in bytes to represent the data.
	return 0;
}

void CXMLData::ReadFromStream(CMemoryStream&)
{
	// WIP: Not implemented yet, because its probably not needed for our purposes.
	// It deserializes an instance of this class from the given stream.
}

void CXMLData::WriteToStream(CMemoryStream&)
{
	// WIP: Not implemented yet, because its probably not needed for our purposes.
	// It serializes this instance of this class into the given stream.
}

bool CXMLData::ReadFromXMLSOM(CXMLSOMDocument&)
{
	// WIP: Not implemented yet, because its probably not needed for our purposes.
	// It deserializes an instance of this class from the given XML document.
	// Returns true if successful.
	return false;
}

bool CXMLData::WriteToXMLSOM(CXMLSOMDocument&)
{
	// WIP: Not implemented yet, because its probably not needed for our purposes.
	// It serializes an instance of this class to the given XML document.
	// Returns true if successful.
	return false;
}

//----------------------------------------------------------------------------

CXMLSymbolTable::CXMLSymbolTable()
{
}

CXMLSymbolTable::~CXMLSymbolTable()
{
}

//----------------------------------------------------------------------------

CParam::CParam()
{
}

CParam::~CParam()
{
}

//----------------------------------------------------------------------------

CParamClass::CParamClass()
{
	nClassIdx = UI_Class;
	sClassName = UITypeToString(UI_Class);
}

CParamClass::~CParamClass()
{
}

//----------------------------------------------------------------------------

CParamRGB::CParamRGB()
{
	nClassIdx = UI_RGB;
	sClassName = UITypeToString(UI_RGB);
}

CParamRGB::~CParamRGB()
{
}

//----------------------------------------------------------------------------

#if 0 // emu
CParamTextRGB::CParamTextRGB()
{
	nClassIdx = UI_TextRGB;
	sClassName = UITypeToString(UI_TextRGB);
}

CParamTextRGB::~CParamTextRGB()
{
}
#endif

//----------------------------------------------------------------------------

CParamPoint::CParamPoint()
{
	nClassIdx = UI_Point;
	sClassName = UITypeToString(UI_Point);
}

CParamPoint::~CParamPoint()
{
}

//----------------------------------------------------------------------------

CParamSize::CParamSize()
{
	nClassIdx = UI_Size;
	sClassName = UITypeToString(UI_Size);
}

CParamSize::~CParamSize()
{
}

//----------------------------------------------------------------------------

CParamButtonDrawTemplate::CParamButtonDrawTemplate()
{
	nClassIdx = UI_ButtonDrawTemplate;
	sClassName = UITypeToString(UI_ButtonDrawTemplate);
}

CParamButtonDrawTemplate::~CParamButtonDrawTemplate()
{
}

//----------------------------------------------------------------------------

CParamScreenPiece::CParamScreenPiece()
{
	nClassIdx = UI_ScreenPiece;
	sClassName = UITypeToString(UI_ScreenPiece);
}

CParamScreenPiece::~CParamScreenPiece()
{
}

//----------------------------------------------------------------------------

CParamControl::CParamControl()
{
	nClassIdx = UI_Control;
	sClassName = UITypeToString(UI_Control);
}

CParamControl::~CParamControl()
{
}

//----------------------------------------------------------------------------

CParamButton::CParamButton()
{
	nClassIdx = UI_Button;
	sClassName = UITypeToString(UI_Button);
}

CParamButton::~CParamButton()
{
}

} // namespace eqlib
