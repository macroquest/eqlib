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

// About the CXMLData and CParam* classes:
// The UI system parses XML data into these classes, which are then used to generate
// instances of "Templates" which are used to initialize widgets. If we map out the Param
// classes, it gives us a reliable way to generate UI at runtime as if it were created
// by the XML.
//
// These classes map 1:1 with the SIDL.xml schema file, so in theory this entire file could
// be generated from that.

#include "Common.h"
#include "Containers.h"
#include "CXStr.h"

namespace eqlib {

class CMemoryStream;
class CXMLDataManager;
class CXMLSOMDocument;

// Used to identify the type of XML CParam class objects
enum UIType
{
	UI_Unknown = -1,
	UI_Class = 0,
	UI_RGB = 1,
	//UI_TextRGB = 2, // emu
	UI_Point = 2,
	UI_Size = 3,
	UI_TextureInfo = 4,
	UI_Frame = 5,
	UI_Ui2DAnimation = 6,
	UI_ButtonDrawTemplate = 7,
	UI_GaugeDrawTemplate = 8,
	UI_SpellGemDrawTemplate = 9,
	UI_FrameTemplate = 10,
	UI_ScrollbarDrawTemplate = 11,
	UI_WindowDrawTemplate = 12,
	UI_SliderDrawTemplate = 13,
	UI_ScreenPiece = 14,
	UI_StaticScreenPiece = 15,
	UI_StaticAnimation = 16,
	UI_StaticTintedBlendAnimation = 17,
	UI_StaticText = 18,
	UI_StaticFrame = 19,
	UI_StaticHeader = 20,
	UI_LayoutStrategy = 21,
	UI_LayoutVertical = 22,
	UI_LayoutHorizontal = 23,
	UI_Control = 24,
	UI_TemplateAssoc = 25,
	UI_TemplateScreen = 26,
	UI_ListboxColumn = 27,
	UI_Listbox = 28,
	UI_Button = 29,
	UI_Gauge = 30,
	UI_SpellGem = 31,
	UI_HtmlComponent = 32, // emu
	UI_InvSlot = 33,
	UI_EditBox = 34,
	UI_Slider = 35,
	UI_Label = 36,
	UI_STMLBox = 37,
	UI_TreeView = 38,
	UI_Combobox = 39,
	UI_Page = 40,
	UI_TabBox = 41,
	UI_LayoutBox = 42,
	UI_HorizontalLayoutBox = 43,
	UI_VerticalLayoutBox = 44,
	UI_FinderBox = 45,
	UI_TileLayoutBox = 46,
	UI_NamedTemplatePiece = 47,
	UI_TemplateContainer = 48,
	UI_Screen = 49,
	UI_SuiteDefaults = 50,
	UI_Screens = 51,
	UI_TopLevelWindowList = 52,
	UI_HotButton = 53,
};
EQLIB_API const char* UITypeToString(UIType type);

//============================================================================
// Hash Container Types
//============================================================================

#pragma region Hash Container Types

// Some container types used by the XML classes.

template <typename KeyType_, typename ElementType_>
class CHashKeyValueElement
{
public:
	CHashKeyValueElement() {}

	CHashKeyValueElement(const CHashKeyValueElement&) = delete;
	CHashKeyValueElement& operator=(const CHashKeyValueElement&) = delete;

	using KeyType = KeyType_;
	using ElementType = ElementType_;

	struct KeyValue
	{
		KeyType key{};
		ElementType value{};

		KeyValue() = default;
		KeyValue(const KeyType& key, const ElementType& value) : key(key), value(value) {}
	};

	using KeyValueType = KeyValue;
	using ArrayType = ArrayClass2<KeyValueType>;
	using ArrayArrayType = ArrayClass2<ArrayType>;
};

//----------------------------------------------------------------------------
// Key-value pair: uint32_t -> int

class CHashUInt32Int32Base : public CHashKeyValueElement<uint32_t, int>
{
public:
	CHashUInt32Int32Base()
	{
		m_data.Resize(m_binCount);
	}

	CHashUInt32Int32Base(uint32_t minKey, uint32_t maxKey, int binCount)
		: m_min(minKey)
		, m_max(maxKey)
		, m_binCount(binCount)
	{
		m_distance = m_max - m_min;
		m_data.Resize(m_binCount);
	}

protected:
	int GetKeyHash(uint32_t key) const
	{
		if (key < m_min)
			return 0;
		if (key > m_max)
			return m_binCount - 1;
		return (key - m_min) / m_distance;
	}

	uint32_t m_min = 0;
	uint32_t m_max = std::numeric_limits<uint32_t>().max();
	uint32_t m_distance = std::numeric_limits<uint32_t>().max();
	int m_binCount = 1024;
	ArrayArrayType m_data;
};

//----------------------------------------------------------------------------
// Key-value pair: string -> T

template <typename Element, int BinSize>
class CHashCXStrElementBase : public CHashKeyValueElement<CXStr, Element>
{
public:
	CHashCXStrElementBase()
	{
		m_data.Resize(BinSize);
	}

protected:
	int GetKeyHash(const CXStr& str) const
	{
		uint32_t hash = 0;
		for (int i = 0; i < str.GetLength(); ++i)
		{
			hash = str.at(i) + (hash << 4);
			int overflow = (hash & 0xf0000000);
			if (overflow)
				hash ^= (overflow >> 24);
			hash = hash & (~overflow);
		}

		return hash & (BinSize - 1);
	}

	typename CHashKeyValueElement<CXStr, Element>::ArrayArrayType m_data;
};

template <typename BaseClass>
class CHashKeyArray : public BaseClass
{
public:
	using BaseClass::BaseClass;

	using value_type = typename BaseClass::KeyValueType;
	using key_type = typename BaseClass::KeyType;

	bool ContainsKeyValue(const key_type& key, int value)
	{
		auto& keyValueStorage = m_data[GetKeyHash(key)];
		for (const auto& keyValue : keyValueStorage)
		{
			if (keyValue.key == key && keyValue.value == value)
				return true;
		}

		return false;
	}

	void Insert(const key_type& key, int value)
	{
		auto& keyValueStorage = m_data[GetKeyHash(key)];
		keyValueStorage.Add(value_type(key, value));
	}

	bool Remove(const key_type& key)
	{
		bool found = false;

		auto& keyValueStorage = m_data[GetKeyHash(key)];
		int i = 0;
		while (i < keyValueStorage.GetLength())
		{
			if (keyValueStorage[i].key == key)
			{
				keyValueStorage.DeleteElement(i);
				found = true;
			}
			else
			{
				++i;
			}
		}

		return found;
	}

	bool Remove(const key_type& key, int value)
	{
		bool found = false;

		auto& keyValueStorage = m_data[GetKeyHash(key)];
		int i = 0;
		while (i < keyValueStorage.GetLength())
		{
			if (keyValueStorage[i].key == key && keyValueStorage[i].value == value)
			{
				keyValueStorage.DeleteElement(i);
				found = true;
			}
			else
			{
				++i;
			}
		}

		return found;
	}

	void Clear()
	{
		for (auto& hashArray : m_data)
			hashArray.Clear();
	}

	class ConstIterator
	{
	public:
		friend class CHashKeyArray;
		using iterator_category = std::bidirectional_iterator_tag;

		using value_type = CHashKeyArray::value_type;
		using difference_type = std::ptrdiff_t;
		using pointer = const value_type*;
		using reference = const value_type&;

		ConstIterator& operator++() { m_container->Advance(*this, 1); return *this; }
		ConstIterator operator++(int) { auto tmp = *this;  m_container->Advance(tmp, 1); return tmp; }
		ConstIterator& operator--() { m_container->Advance(*this, -1); return *this; }
		ConstIterator operator--(int) { auto tmp = *this;  m_container->Advance(tmp, -1); return tmp; }

		[[nodiscard]] reference operator*() const { return m_container->m_data[m_bucket][m_index]; }
		[[nodiscard]] pointer operator->() const { return std::addressof(m_container->m_data[m_bucket][m_index]); }

		ConstIterator(const CHashKeyArray* container, int bucket = -1, int index = -1)
			: m_container(container)
			, m_bucket(bucket)
			, m_index(index)
		{}

		[[nodiscard]] bool operator==(const ConstIterator& other) const { return m_container == other.m_container && m_bucket == other.m_bucket && m_index == other.m_index; }
		[[nodiscard]] bool operator!=(const ConstIterator& other) const { return !(*this == other); }
		[[nodiscard]] bool operator<(const ConstIterator& other) const { return std::tie(m_bucket, m_index) < std::tie(other.m_bucket, other.m_index); }
		[[nodiscard]] bool operator>(const ConstIterator& other) const { return other < *this; }
		[[nodiscard]] bool operator<=(const ConstIterator& other) const { return !(other < *this); }
		[[nodiscard]] bool operator>=(const ConstIterator& other) const { return !(*this < other); }

	private:
		const CHashKeyArray* m_container;
		int m_bucket;
		int m_index;
	};

	using const_iterator = ConstIterator;
	using const_reverse_iterator = std::reverse_iterator<const_iterator>;

	const_iterator begin() const
	{
		// find first non-empty bucket
		for (size_t i = 0; i < m_data.size(); ++i)
		{
			if (!m_data[i].empty())
			{
				return const_iterator(this, i, 0);
			}
		}

		// Container is empty.
		return const_iterator(this);
	}
	const_iterator cbegin() const { begin(); }

	const_iterator end() const { return const_iterator(this); }
	const_iterator cend() const { end(); }

	const_reverse_iterator rbegin() const { return const_reverse_iterator{ end() }; }
	const_reverse_iterator crbegin() const { return const_reverse_iterator{ rend() }; }

	const_reverse_iterator rend() const { return const_reverse_iterator{ begin() }; }
	const_reverse_iterator crend() const { return const_reverse_iterator{ cbegin() }; }

	using ArrayType = typename BaseClass::ArrayType;
	const_iterator find(const key_type& key) const
	{
		int bucket = GetKeyHash(key);
		const auto& keyValueStorage = m_data[bucket];

		for (int index = 0; index < (int)keyValueStorage.size(); ++index)
		{
			if (keyValueStorage[index].key == key)
				return const_iterator(this, bucket, index);
		}

		return end();
	}

private:
	void Advance(ConstIterator& iter, int d) const
	{
		if (d > 0)
		{
			// Moving forward
			if (iter.m_bucket == -1 && iter.m_index == -1)
				return;

			auto& container = m_data[iter.m_bucket];
			if (iter.m_index >= container.GetLength() - 1)
			{
				iter.m_index = -1;
				++iter.m_bucket;

				// find next non-empty bucket
				for (; iter.m_bucket < m_data.GetLength(); ++iter.m_bucket)
				{
					if (!m_data[iter.m_bucket].empty())
						break;
				}

				if (iter.m_bucket == m_data.GetLength())
				{
					iter.m_bucket = -1;
					return;
				}
			}

			++iter.m_index;
		}
		else
		{
			// Moving backward
			int bucket = iter.m_bucket == -1 ? m_data.GetLength() : iter.m_bucket;
			int slot = iter.m_index - 1;

			// If index is <= 0 then find previous bucket. We're moving backwards.
			if (slot <= 0)
			{
				for (bucket = bucket - 1; bucket >= 0; --bucket)
				{
					if (!m_data[bucket].empty())
						break;
				}

				if (bucket >= 0)
				{
					slot = m_data[bucket].GetLength() - 1;
				}
				else
				{
					slot = -1;
					bucket = -1;
				}
			}

			iter.m_bucket = bucket;
			iter.m_index = slot;
		}
	}
};

using CHashCXStrInt32 = CHashKeyArray<CHashCXStrElementBase<int, 4096>>;
using CHashUInt32Int32 = CHashKeyArray<CHashUInt32Int32Base>;
using CHashCXStrCXMLDataPtr = CHashKeyArray<CHashCXStrElementBase<CXMLDataPtr, 16384>>;
using CHashCXStrCXStr = CHashKeyArray<CHashCXStrElementBase<CXStr, 4096>>;

#pragma endregion

//============================================================================
// CXMLSOMDocumentBase and related types
//============================================================================

// For those wondering, XMLSOM means XML Schema object model. This whole system
// describes a bunch of objects and their relationships using xml.

#pragma region CXMLSOMDocumentBase

class CXMLSOMAttribute
{
public:
	CXStr name;
	CXStr value;
};

class CXMLSOMAttributeType
{
public:
	CXStr attributeName;
	CXStr typeRef;
	CXStr typeNameC;
	CXStr fieldNameC;
	CXStr streamNameC;
};

class CXMLSOMDocumentBase
{
public:
	EQLIB_OBJECT bool CursorFieldFind(const CXStr&);
	EQLIB_OBJECT bool CursorFind(const CXStr&);
	EQLIB_OBJECT bool CursorNextInOrder();
	EQLIB_OBJECT bool CursorNextSibling();
	EQLIB_OBJECT bool CursorPop();
	EQLIB_OBJECT bool CursorPush();
	EQLIB_OBJECT bool FieldParseClassItem(const CXStr&, CXStr&, CXStr&);
	EQLIB_OBJECT bool FieldParseItemOfClass(const CXStr&, const CXStr&, int32_t&, int32_t&);
	EQLIB_OBJECT bool GetAttrValueInt(const CXStr&, int32_t&);
	EQLIB_OBJECT bool GetAttrValueStr(const CXStr&, CXStr&);
	EQLIB_OBJECT bool GetValue(const CXStr&, int32_t&);
	EQLIB_OBJECT bool GetValue(const CXStr&, bool&);
	EQLIB_OBJECT bool GetValue(const CXStr&, CXStr&);
	EQLIB_OBJECT bool SetValue(const CXStr&, int32_t);
	EQLIB_OBJECT bool SetValue(const CXStr&, bool);
	EQLIB_OBJECT bool SetValue(const CXStr&, const CXStr&);
	EQLIB_OBJECT bool ValidateData();
	EQLIB_OBJECT bool ValidateSchema();
	EQLIB_OBJECT bool XMLMerge(CXMLSOMDocumentBase&);
	EQLIB_OBJECT bool XMLRead(const CXStr&, const CXStr&, const CXStr&);
	EQLIB_OBJECT CXStr GetAttrValueStr(const CXStr&);
	EQLIB_OBJECT CXStr GetErrorMsg() const;
	EQLIB_OBJECT int XMLReadNoValidate(const CXStr&, const CXStr&, const CXStr&);
	EQLIB_OBJECT void CursorInit();
	EQLIB_OBJECT void CursorNewChild();
	EQLIB_OBJECT void CursorNewSibling();
	EQLIB_OBJECT void CursorSetPtr(CXMLSOMNodePtr);
	EQLIB_OBJECT void Init();
	EQLIB_OBJECT void SetErrorMsg(const CXStr&);
	EQLIB_OBJECT void SetErrorMsgAtCursor(const CXStr&);
	EQLIB_OBJECT void SetErrorMsgAtLine(const CXStr&, int, const CXStr&);

	// virtual
	EQLIB_OBJECT ~CXMLSOMDocumentBase();

	// protected
	EQLIB_OBJECT bool ValidateDataElements(CXMLSOMElementType&);
	EQLIB_OBJECT bool ValidateSchemaCategories();
	EQLIB_OBJECT bool ValidateSchemaDefinition();
	EQLIB_OBJECT bool ValidateSchemaElementType();
	EQLIB_OBJECT bool ValidateSchemaSimpleType();
	EQLIB_OBJECT bool ValidateSchemaSimpleTypeNode(CXMLSOMSimpleType&);
	EQLIB_OBJECT bool ValidateSchemaTypeRefs();
	EQLIB_OBJECT bool XMLProcessComposite(const CXStr&, const CXStr&);
};

class CXMLSOMDocument : public CXMLSOMDocumentBase
{
public:
	EQLIB_OBJECT bool FieldParseItemOfClass(CXStr, CXStr, uint32_t&);
	EQLIB_OBJECT bool GetValueObjectId(CXStr, CXStr, uint32_t&);
	EQLIB_OBJECT bool SetValueObjectId(CXStr, CXStr, uint32_t);

	// virtual
	EQLIB_OBJECT ~CXMLSOMDocument();
};

class [[offsetcomments]] CXMLSOMElement
{
public:
/*0x00*/ CXStr elementName;
/*0x04*/ CXStr typeRef;
/*0x08*/ CXStr typeRefClassName;
/*0x0c*/ CXStr typeRefItemName;
/*0x10*/ int minOccurs;
/*0x14*/ int maxOccurs;
/*0x18*/ CXStr defaultValue;
/*0x1c*/ bool internal;

/*0x1d*/ bool isArrayC;
/*0x1e*/ bool isEnumC;
/*0x20*/ CXStr typeNameC;
/*0x24*/ CXStr fieldNameC;
/*0x28*/ CXStr streamNameC;
/*0x2c*/
};

class [[offsetcomments]] CXMLSOMElementType
{
public:
	EQLIB_OBJECT int GetItemIdx(const CXStr& itemName)
	{
		for (int i = 0; i < itemList.GetLength(); ++i)
		{
			if (itemList[i] == itemName)
				return i;
		}

		return -1;
	}

/*0x00*/ CXStr typeName;
/*0x04*/ CXStr superType;
/*0x08*/ ArrayClass2<CXMLSOMAttributeType> attributeTypes;
/*0x24*/ ArrayClass2<CXMLSOMElement> elements;
/*0x40*/ ArrayClass2<CXStr> itemList;

/*0x5c*/ CXStr classNameC;
/*0x60*/ CXStr baseClassNameC;

/*0x64*/ CXStr jsName;

/*0x68*/ CXStr sourceFile;
/*0x6c*/ int sourceLine;
/*0x70*/
};

enum EXMLSOMNodeType
{
	XMLSOMNode,
	XMLSOMComment,
	XMLSOMProcess,
};

class [[offsetcomments]] CXMLSOMNode
{
public:
/*0x00*/ EXMLSOMNodeType nodeType;
/*0x04*/ CXStr nodeName;
/*0x08*/ CXStr nodeValue;
/*0x0c*/ ArrayClass2<CXMLSOMAttribute> attributeList;
/*0x28*/ ArrayClass2<CXMLSOMNodePtr> nodeList;
/*0x44*/ CXStr sourceFile;
/*0x48*/ int sourceLine;
/*0x4c*/ int refCount;
/*0x50*/
};

// this is an intrusive reference counted pointer of CXMLSOMNode
class CXMLSOMNodePtr
{
public:
	CXMLSOMNode* pNode;
};

// Part of the XML parsing machinery, but we don't really need it.
class CXMLSOMCursor
{
	CXMLSOMNodePtr node;
	int offset;
};
using CXMLSOMCursorArray = ArrayClass2<CXMLSOMCursor>;

#pragma endregion

//============================================================================
// CXMLDataManager and related types
//============================================================================

#pragma region CXMLDataManager

// Base class of all the param types, represents a parsed object from the xml document.
class [[offsetcomments]] CXMLData
{
public:
	EQLIB_OBJECT CXMLData();
	EQLIB_OBJECT virtual ~CXMLData();

	static uint32_t GetObjectId(int classIndex, int itemIndex)
	{
		return (uint32_t)((classIndex << 16) | (itemIndex & 0xffff));
	}

	static int GetClassIndex(uint32_t objectId)
	{
		return (int)(objectId >> 16);
	}

	static int GetItemIndex(uint32_t objectId)
	{
		return (int)(objectId & 0xffff);
	}

	virtual int GetStreamSize();
	virtual void ReadFromStream(CMemoryStream&);
	virtual void WriteToStream(CMemoryStream&);
	virtual bool ReadFromXMLSOM(CXMLSOMDocument&);
	virtual bool WriteToXMLSOM(CXMLSOMDocument&);

	const CXStr& GetClassName() const { return sClassName; }
	int GetClassIndex() const { return nClassIdx; }

	const CXStr& GetItemName() const { return sItemName; }
	int GetItemIndex() const { return nItemIdx; }

	uint32_t GetObjectId() const { return GetObjectId(nClassIdx, nItemIdx); }

/*0x04*/ int            nRefCount = 0;
/*0x08*/ int            nClassIdx = 0;
/*0x0c*/ int            nItemIdx = 0;
/*0x10*/ int            nVersion = -1;
/*0x14*/ CXStr          sClassName;
/*0x18*/ CXStr          sItemName;
/*0x1c*/
	// "Legacy" names for these fields.
	ALT_MEMBER_GETTER(UIType, nClassIdx, Type);
	ALT_MEMBER_GETTER(CXStr, sClassName, TypeName);
	ALT_MEMBER_GETTER(CXStr, sItemName, Name);

	// Note: Screen isn't actually part of CXMLData. Its sScreenID which is part of CParamScreenPiece.
	// Historically we've just mashed all these types together as CXMLData.
	CXStr get_ScreenID() const;
	__declspec(property(get = get_ScreenID)) CXStr ScreenID;
};

//----------------------------------------------------------------------------
// "Smart" intrusive pointer wrapper for CXMLData. Maintains reference counting.
class CXMLDataPtr
{
public:
	// Construct with new xml data to own
	CXMLDataPtr(CXMLData* pXMLData = nullptr)
		: m_xmlData(pXMLData)
	{
		if (m_xmlData)
			m_xmlData->nRefCount = 1;
	}

	CXMLDataPtr(const CXMLDataPtr& other)
	{
		assign(other);
	}

	CXMLDataPtr(CXMLDataPtr&& other)
		: m_xmlData(std::exchange(other.m_xmlData, nullptr))
		, m_leaf(std::exchange(other.m_leaf, false))
	{
	}

	CXMLDataPtr& operator=(const CXMLDataPtr& other)
	{
		assign(other);
		return *this;
	}

	CXMLDataPtr& operator=(CXMLDataPtr&& other)
	{
		m_xmlData = std::exchange(other.m_xmlData, nullptr);
		m_leaf = std::exchange(other.m_leaf, false);
		return *this;
	}

	virtual ~CXMLDataPtr()
	{
		release();
	}

	virtual CXMLData* AllocPtr(int, const CXMLData*)
	{
		return nullptr;
	}

	explicit operator bool() const { return m_xmlData != nullptr; }

	CXMLData* get() const { return m_xmlData; }
	CXMLData* operator->() const { return m_xmlData; }
	CXMLData& operator*() const { return *m_xmlData; }

	void SetIsLeaf(bool isLeaf) { m_leaf = isLeaf; }
	bool IsLeaf() const { return m_leaf; }

	// This class also has some helpers for reading/writing to stream but we don't need them.

protected:
	void assign(const CXMLDataPtr& other)
	{
		if (this == &other)
			return;

		release();

		m_leaf = other.m_leaf;
		m_xmlData = other.m_xmlData;
		if (m_xmlData) ++m_xmlData->nRefCount;
	}

	void release()
	{
		if (!m_xmlData)
			return;
		if (--m_xmlData->nRefCount != 0)
			return;

		delete m_xmlData;
		m_xmlData = nullptr;
	}

private:
	bool                m_leaf = false;
	CXMLData*           m_xmlData = nullptr;;
};
using CXMLDataPtrArray = ArrayClass2<CXMLDataPtr>;

//----------------------------------------------------------------------------
// Holds information about elements of a particular class.
class [[offsetcomments]] CXMLDataClass
{
public:
/*0x00*/ CXStr               className;
/*0x04*/ CXStr               superTypeName;
/*0x08*/ int                 classIdx = -1;
/*0x0c*/ int                 superTypeIdx = -1;
/*0x10*/ CXMLDataPtrArray    items;
/*0x2c*/
	CXMLData* GetItemByName(const CXStr& itemName) const;
	CXMLData* GetItemByIndex(int itemIdx) const;
};
using CXMLDataClassArray = ArrayClass2<CXMLDataClass>;

//----------------------------------------------------------------------------
// Holds information about values of a particular enum
class [[offsetcomments]] CXMLEnumInfo
{
public:
/*0x00*/ CXStr               enumTypeName;
/*0x04*/ ArrayClass2<CXStr>  enumValue;
/*0x20*/
};
using CXMLEnumInfoArray = ArrayClass2<CXMLEnumInfo>;

//----------------------------------------------------------------------------
// Holds information about an item in the xml file
class [[offsetcomments]] CXMLSymbolItem
{
public:
/*0x00*/ CXStr          itemString;
/*0x04*/ bool           declared = false;
/*0x05*/ bool           valid = false;
/*0x08*/
};
using CXMLSymbolItemArray = ArrayClass2<CXMLSymbolItem>;

//----------------------------------------------------------------------------
// Represents a class in the xml file.
class [[offsetcomments]] CXMLSymbolClass
{
public:
/*0x00*/ CXStr               sClass;
/*0x04*/ CXMLSymbolItemArray items;
/*0x20*/ CHashCXStrInt32     itemsHashes;
/*0x3c*/ bool                valid = false;
/*0x40*/
};
using CXMLSymbolClassArray = ArrayClass2<CXMLSymbolClass>;

//----------------------------------------------------------------------------
// Contains a list of the indexes for classes and items.
class [[offsetcomments]] CXMLSymbolTable
{
public:
	CXMLSymbolTable();
	virtual ~CXMLSymbolTable();

/*0x04*/ CXMLSymbolClassArray classes;
/*0x20*/ CHashCXStrInt32      hashes;
/*0x3c*/
};

//----------------------------------------------------------------------------
// Holds all the data loaded from the xml. Maps objects to ids that can be
// looked up later.
class [[offsetcomments]] CXMLDataManager
{
public:
	CXMLDataManager();
	virtual ~CXMLDataManager();

/*0x04*/ CHashCXStrInt32       enumTypeHashes;
/*0x20*/ CXMLEnumInfoArray     enumArray;
/*0x3c*/ CHashCXStrCXMLDataPtr classItemHashes;
/*0x58*/ CXMLDataClassArray    dataArray;
/*0x74*/ CXMLSymbolTable       symbolTable;
/*0xb0*/ CXStr                 errorString;
/*0xb4*/

	EQLIB_OBJECT int GetClassIdx(CXStr className) const;
	EQLIB_OBJECT CXStr GetClassName(int classIdx) const;
	EQLIB_OBJECT int GetItemIdx(int classIdx, CXStr itemName) const;
	EQLIB_OBJECT int GetNumClass() const;
	EQLIB_OBJECT int GetNumItem(int classIdx) const;
	EQLIB_OBJECT CXMLData* GetXMLData(const CXStr& className, const CXStr& itemName) const;
	EQLIB_OBJECT CXMLData* GetXMLData(int classIdx, int itemIdx) const;
	EQLIB_OBJECT UIType GetWindowType(const CXWnd* wnd) const;
	//EQLIB_OBJECT bool IsDerivedFrom(int, int);

	CXMLData* GetXMLData(uint32_t objectId) const
	{
		return GetXMLData(CXMLData::GetClassIndex(objectId), CXMLData::GetItemIndex(objectId));
	}


	// Other virtual methods, we don't need any of these.
	virtual CXMLData* AllocPtr(CXMLDataPtr&, int classIdx, const CXMLData*) { return nullptr;  }
	virtual bool XMLDataCopy(CXMLData* out, CXMLData* in) { return false; }
	virtual int GetStreamSize() { return 0; }
	virtual void ReadFromStream(CMemoryStream&) {}
	virtual void WriteToStream(CMemoryStream&) {}
	virtual bool ReadValidate(CMemoryStream& ms) { ReadFromStream(ms); return true; }
	virtual bool WriteValidate(CMemoryStream& ms) { WriteToStream(ms); return true; }
	virtual bool DataValidate() { return true; }
	virtual void Set(CXMLDataManager&) {}
	virtual void IndexAll() {}
};

#pragma endregion

//============================================================================
class [[offsetcomments]] CParam : public CXMLData
{
public:
	EQLIB_OBJECT CParam();
	EQLIB_OBJECT virtual ~CParam();
};

//============================================================================
class [[offsetcomments]] CParamClass : public CParam
{
public:
	EQLIB_OBJECT CParamClass();
	EQLIB_OBJECT virtual ~CParamClass();

	// XML Data
/*0x1c*/ CXStr Item;
/*0x20*/
};

//============================================================================
class [[offsetcomments]] CParamRGB : public CParamClass
{
public:
	EQLIB_OBJECT CParamRGB();
	EQLIB_OBJECT virtual ~CParamRGB();

	// XML Data
/*0x20*/ int nAlpha = 255;
/*0x24*/ int nR = 0;
/*0x28*/ int nG = 0;
/*0x2c*/ int nB = 0;
/*0x30*/
};

//============================================================================
#if 0 // emu
class [[offsetcomments]] CParamTextRGB : public CParamClass
{
public:
	EQLIB_OBJECT CParamTextRGB();
	EQLIB_OBJECT virtual ~CParamTextRGB();

	// XML Data
/*0x20*/ int nAlpha = 255;
/*0x24*/ int nR = 255;
/*0x28*/ int nG = 255;
/*0x2c*/ int nB = 255;
/*0x30*/
};
#endif

//============================================================================
class [[offsetcomments]] CParamPoint : public CParam
{
public:
	EQLIB_OBJECT CParamPoint();
	EQLIB_OBJECT virtual ~CParamPoint();

	// XML Data
/*0x1c*/ int nX = 0;
/*0x20*/ int nY = 0;
/*0x24*/
};

//============================================================================
class [[offsetcomments]] CParamSize : public CParam
{
public:
	EQLIB_OBJECT CParamSize();
	EQLIB_OBJECT virtual ~CParamSize();

	// XML Data
/*0x1c*/ int nCX = 0;
/*0x20*/ int nCY = 0;
/*0x24*/
};

//============================================================================
class [[offsetcomments]] CParamButtonDrawTemplate : public CParamClass
{
public:
	EQLIB_OBJECT CParamButtonDrawTemplate();
	EQLIB_OBJECT virtual ~CParamButtonDrawTemplate();

	// These are the IDs of the Ui2DAnimation that was loaded previously.
/*0x20*/ uint32_t nUi2DAnimation_Normal = 0;
/*0x24*/ uint32_t nUi2DAnimation_Pressed = 0;
/*0x28*/ uint32_t nUi2DAnimation_Flyby = 0;
/*0x2c*/ uint32_t nUi2DAnimation_Disabled = 0;
/*0x30*/ uint32_t nUi2DAnimation_PressedFlyby = 0;
/*0x34*/ uint32_t nUi2DAnimation_PressedDisabled = 0;
/*0x38*/ uint32_t nUi2DAnimation_NormalDecal = 0;
/*0x3c*/ uint32_t nUi2DAnimation_PressedDecal = 0;
/*0x40*/ uint32_t nUi2DAnimation_FlybyDecal = 0;
/*0x44*/ uint32_t nUi2DAnimation_DisabledDecal = 0;
/*0x48*/ uint32_t nUi2DAnimation_PressedFlybyDecal = 0;
/*0x4c*/ uint32_t nUi2DAnimation_PressedDisabledDecal = 0;
/*0x50*/
};

//============================================================================
class [[offsetcomments]] CParamScreenPiece : public CParamClass
{
public:
	EQLIB_OBJECT CParamScreenPiece();
	EQLIB_OBJECT virtual ~CParamScreenPiece();

/*0x020*/ CXStr sScreenID;
/*0x024*/ int nFont = 3;
/*0x028*/ bool bRelativePosition = true;
/*0x02c*/ CParamPoint Location;
/*0x050*/ CParamSize Size;
/*0x074*/ bool bAutoStretch = false;
/*0x075*/ bool bAutoStretchVertical = false;
/*0x076*/ bool bAutoStretchHorizontal = false;
/*0x077*/ bool bTopAnchorToTop = true;
/*0x078*/ bool bLeftAnchorToLeft = true;
/*0x079*/ bool bBottomAnchorToTop = true;
/*0x07a*/ bool bRightAnchorToLeft = true;
/*0x07c*/ int nTopAnchorOffset = 0;
/*0x080*/ int nBottomAnchorOffset = 0;
/*0x084*/ int nLeftAnchorOffset = 0;
/*0x088*/ int nRightAnchorOffset = 0;
/*0x08c*/ int nMinVSize = 0;
/*0x090*/ int nMinHSize = 0;
/*0x094*/ int nMaxVSize = 0;
/*0x098*/ int nMaxHSize = 0;
/*0x09c*/ CXStr sText;
/*0x0a0*/ CParamRGB TextColor;
/*0x0d0*/ CParamRGB DisabledColor;
/*0x100*/ bool bUseInLayoutHorizontal = true;
/*0x101*/ bool bUseInLayoutVertical = true;
/*0x104*/ CParamRGB BackgroundTextureTint;
/*0x134*/ CParamRGB DisabledBackgroundTextureTint;
/*0x164*/ CXMLSOMCursorArray cursor;
/*0x180*/
};

//============================================================================
class [[offsetcomments]] CParamControl : public CParamScreenPiece
{
public:
	EQLIB_OBJECT CParamControl();
	EQLIB_OBJECT virtual ~CParamControl();

/*0x180*/ bool bStyle_VScroll = false;
/*0x181*/ bool bStyle_HScroll = false;
/*0x182*/ bool bStyle_AutoVScroll = false;
/*0x183*/ bool bStyle_AutoHScroll = false;
/*0x184*/ bool bStyle_Transparent = false;
/*0x185*/ bool bStyle_TransparentControl = false;
/*0x186*/ bool bStyle_Border = false;
/*0x187*/ bool bStyle_Tooltip = true;
/*0x188*/ CXStr sTooltipReference;
/*0x18c*/ CXStr sEQType;
/*0x190*/ uint32_t nWindowDrawTemplate_DrawTemplate = 0;
/*0x194*/ uint32_t nLayoutStrategy_Layout = 0;
/*0x198*/
};

//============================================================================
class [[offsetcomments]] CParamButton : public CParamControl
{
public:
	EQLIB_OBJECT CParamButton();
	EQLIB_OBJECT virtual ~CParamButton();

/*0x198*/ bool bStyle_Checkbox = false;
/*0x19c*/ CXStr sRadioGroup;
/*0x1a0*/ CXStr sText;
/*0x1a4*/ CParamRGB MouseoverColor;
/*0x1d4*/ CParamRGB PressedColor;
/*0x204*/ bool bUseCustomMouseoverColor = false;
/*0x205*/ bool bUseCustomDisabledColor = false;
/*0x206*/ bool bUseCustomPressedColor = false;
/*0x207*/ bool bNoWrap = false;
/*0x208*/ bool bTextAlignCenter = false;
/*0x209*/ bool bTextAlignRight = false;
/*0x20a*/ bool bTextAlighVCenter = false;
/*0x20c*/ int TextOffsetX = 0;
/*0x210*/ int TextOffsetY = 0;
/*0x214*/ CParamButtonDrawTemplate ButtonDrawTemplate;
/*0x264*/ uint32_t nButtonDrawTemplate_Template = 0;
/*0x268*/ CXStr sSoundPressed;
/*0x26c*/ CXStr sSoundUp;
/*0x270*/ CXStr sSoundFlyby;
/*0x274*/ CParamPoint DecalOffset;
/*0x298*/ CParamSize DecalSize;
/*0x2bc*/
};

//============================================================================
// Everything beyond this point is unmapped.
//============================================================================

class CParamCombobox
{
public:
	EQLIB_OBJECT CParamCombobox();
};

class CParamEditbox
{
public:
	EQLIB_OBJECT CParamEditbox();
};

class CParamFrame
{
public:
	EQLIB_OBJECT CParamFrame();
};

class CParamFrameTemplate
{
public:
	EQLIB_OBJECT CParamFrameTemplate();
};

class CParamGauge
{
public:
	EQLIB_OBJECT CParamGauge();
};

class CParamGaugeDrawTemplate
{
public:
	EQLIB_OBJECT CParamGaugeDrawTemplate();
};

class CParamInvSlot
{
public:
	EQLIB_OBJECT CParamInvSlot();
};

class CParamLabel
{
public:
	EQLIB_OBJECT CParamLabel();
};

class CParamListbox
{
public:
	EQLIB_OBJECT CParamListbox();
};

class CParamListboxColumn
{
public:
	EQLIB_OBJECT CParamListboxColumn();
};

class CParamPage
{
public:
	EQLIB_OBJECT CParamPage();
};

class CParamScreen
{
public:
	EQLIB_OBJECT CParamScreen();
};

class CParamLayoutStrategy;

class CParamScrollbarDrawTemplate
{
public:
	EQLIB_OBJECT CParamScrollbarDrawTemplate();
};

class CParamSlider
{
public:
	EQLIB_OBJECT CParamSlider();
};

class CParamSliderDrawTemplate
{
public:
	EQLIB_OBJECT CParamSliderDrawTemplate();
};

class CParamSpellGem
{
public:
	EQLIB_OBJECT CParamSpellGem();
};

class CParamSpellGemDrawTemplate
{
public:
	EQLIB_OBJECT CParamSpellGemDrawTemplate();
};

class CParamStaticAnimation
{
public:
	EQLIB_OBJECT CParamStaticAnimation();
};

class CParamStaticFrame
{
public:
	EQLIB_OBJECT CParamStaticFrame();
};

class CParamStaticHeader
{
public:
	EQLIB_OBJECT CParamStaticHeader();
};

class CParamStaticScreenPiece
{
public:
	EQLIB_OBJECT CParamStaticScreenPiece();
};

class CParamStaticText
{
public:
	EQLIB_OBJECT CParamStaticText();
};

class CParamSTMLbox
{
public:
	EQLIB_OBJECT CParamSTMLbox();

};

class CParamSuiteDefaults
{
public:
	EQLIB_OBJECT CParamSuiteDefaults();
};

class CParamTabBox
{
public:
	EQLIB_OBJECT CParamTabBox();
};

class CParamTextureInfo
{
public:
	EQLIB_OBJECT CParamTextureInfo();
};

class CParamUi2DAnimation
{
public:
	EQLIB_OBJECT CParamUi2DAnimation();
};

class CParamWindowDrawTemplate
{
public:
	EQLIB_OBJECT CParamWindowDrawTemplate();
};

//----------------------------------------------------------------------------

inline CXStr CXMLData::get_ScreenID() const
{
	return static_cast<const CParamScreenPiece*>(this)->sScreenID;
}

class CXMLParamManager : public CXMLDataManager
{
public:
	CParam* GetParam(uint32_t objectId) const
	{
		return (CParam*)GetXMLData(CXMLData::GetClassIndex(objectId), CXMLData::GetItemIndex(objectId));
	}

	CParam* GetParam(int classIdx, int itemIdx) const
	{
		return (CParam*)GetXMLData(classIdx, itemIdx);
	}

	CParam* GetParam(const CXStr& className, const CXStr& itemName) const
	{
		return (CParam*)GetXMLData(className, itemName);
	}
};


} // namespace eqlib
