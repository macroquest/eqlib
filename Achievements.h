
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

#include "Common.h"
#include "Containers.h"
#include "CXStr.h"

namespace eqlib {

class CSerializeBuffer;
class CUnSerializeBuffer;

//============================================================================
// Achievements

//----------------------------------------------------------------------------
enum AchievementComponentType
{
	AchievementComponentUnlock,
	AchievementComponentCompletion,
	AchievementComponentIndirect,
	AchievementComponentDisplay,
	AchievementComponentNone,

	AchievementComponentCount = AchievementComponentNone,
};

enum AchievementState
{
	AchievementComplete,
	AchievementOpen,
	AchievementLocked,
	AchievementNotVisible,
	AchievementNone,
};

//----------------------------------------------------------------------------
struct [[offsetcomments]] CompletedAchievementData
{
/*0x00*/ int                      achievementId;
/*0x04*/ eqtime_t                 completedTimestamp;
/*0x08*/ int                      completedVersion;
/*0x0c*/
};

//----------------------------------------------------------------------------
enum AchievementRequirementType
{
	AchievementRequirementTypeInvalid,
	AchievementRequirementTypeRequirement,
	AchievementRequirementTypeKillNpcRaceMat,
	AchievementRequirementTypeRightClickItem,
	AchievementRequirementTypeKillNpc,
	AchievementRequirementTypeCount,
};

struct [[offsetcomments]] AchievementSubComponentCountData
{
/*0x00*/ uint32_t                 unknown;
/*0x04*/ int                      achievementId;
/*0x08*/ int                      componentId;
/*0x0c*/ int                      requirementId;
/*0x10*/ AchievementRequirementType requirementType;
/*0x14*/ int                      count;
/*0x18*/
};

//----------------------------------------------------------------------------
struct [[offsetcomments]] AchievementInfo
{
/*0x00*/ int       achievementId;
/*0x04*/ CXStr     description;
/*0x08*/
};
using AchievementInfoArray = ArrayClass<AchievementInfo>;

//----------------------------------------------------------------------------
// An achievement category has a description and contains achievements.
class [[offsetcomments]] AchievementCategory
{
public:
	virtual void Serialize(CSerializeBuffer&) const {}
	virtual void UnSerialize(CUnSerializeBuffer&) {}

	bool HasParent() const { return parentId > 0; }
	bool HasChildren() const { return !childCategories.IsEmpty(); }

	int GetChildrenCount() const { return childCategories.GetCount(); }
	int GetChildCategoryId(int index) const
	{
		if (index >= 0 && index < childCategories.GetCount())
			return childCategories[index];
		return -1;
	}

	bool HasAchievementId(int achievementId) const
	{
		for (const AchievementInfo& info : achievements)
		{
			if (info.achievementId == achievementId)
				return true;
		}

		return false;
	}

	int GetAchievementCount() const { return achievements.GetCount(); }
	int GetAchievementId(int index) const
	{
		if (index >= 0 && index < achievements.GetCount())
			return achievements[index].achievementId;
		return -1;
	}
	

/*0x04*/ AchievementInfoArray     achievements;
/*0x14*/ ArrayClass<int>          childCategories;
/*0x24*/ int                      id = -1;
/*0x28*/ int                      parentId = -1;
/*0x2c*/ CXStr                    name;
/*0x30*/ CXStr                    description;
/*0x34*/ CXStr                    bitmapId;
/*0x38*/ int                      displaySequence = -1;
/*0x3c*/ int                      completedAchievementScore;
/*0x40*/ int                      comparisonCompletedAchievementScore;
/*0x44*/ int                      completedAchievementCount;
/*0x48*/ int                      openAchievementCount;
/*0x4c*/ int                      lockedAchievementCount;
/*0x50*/ int                      comparisonCompletedAchievementCount;
/*0x54*/ int                      comparisonOpenAchievementCount;
/*0x58*/ int                      comparisonLockedAchievementCount;
/*0x5c*/
};

//----------------------------------------------------------------------------
class [[offsetcomments]] AchievementComponent
{
public:
	virtual void Serialize(CSerializeBuffer&) const {}
	virtual void UnSerialize(CUnSerializeBuffer&) {}

/*0x04*/ int                      id = -1;
/*0x08*/ AchievementComponentType type = AchievementComponentNone;
/*0x0c*/ int                      sequenceNum = -1;
/*0x10*/ int                      requiredCount = 0;
/*0x14*/ CXStr                    description;
/*0x18*/ int                      count = 0;
/*0x1c*/
};
using AchievementComponentArray = ArrayClass<AchievementComponent>;

//----------------------------------------------------------------------------
class [[offsetcomments]] Achievement
{
public:
	const AchievementComponent* GetComponentById(AchievementComponentType type, int id) const
	{
		if (id < 0)
			return nullptr;

		if (type >= AchievementComponentUnlock && type < AchievementComponentCount)
		{
			for (int index = 0; index < componentsByType[type].GetCount(); ++index)
			{
				if (componentsByType[type][index].id == id)
					return &componentsByType[type][index];
			}
		}

		return nullptr;
	}

	int GetComponentIndexById(AchievementComponentType type, int id) const
	{
		if (id < 0)
			return -1;

		if (type >= AchievementComponentUnlock && type < AchievementComponentCount)
		{
			for (int index = 0; index < componentsByType[type].GetCount(); ++index)
			{
				if (componentsByType[type][index].id == id)
					return index;
			}
		}

		return -1;
	}

	const AchievementComponent* GetComponentByIndex(AchievementComponentType type, int index) const
	{
		if (type >= AchievementComponentUnlock && type < AchievementComponentCount)
		{
			if (index >= 0 && index < componentsByType[type].GetCount())
				return &componentsByType[type][index];
		}

		return nullptr;
	}

/*0x00*/ AchievementComponentArray componentsByType[AchievementComponentCount];
/*0x40*/ int                      id = -1;
/*0x44*/ CXStr                    name;
/*0x48*/ CXStr                    description;
/*0x4c*/ int                      iconId = -1;
/*0x50*/ bool                     persistent = true;
/*0x54*/ int                      version = 0;
/*0x58*/ int                      points = 0;
/*0x5c*/ int                      rewardSet = 0;
/*0x60*/ uint8_t                  unknown0x60 = 0; // maybe a bool?
/*0x64*/
};

//----------------------------------------------------------------------------
struct [[offsetcomments]] SingleAchievementAndComponentsInfo
{
	virtual void SetComponentLengths(int completed, int indirect, int unlocked) {}
	virtual void SerializeCXStr(CXStr&) const {}
	virtual void UnSerializeCXStr(CXStr&) {}
	virtual void Serialize(CSerializeBuffer&) const {}
	virtual void UnSerialize(CUnSerializeBuffer&) {}

	EQLIB_OBJECT bool IsComponentComplete(AchievementComponentType componentType, int index) const
	{
		switch (componentType)
		{
		case AchievementComponentCompletion:
			return completionComponentStatusBitField.IsBitSet(index);
		case AchievementComponentIndirect:
			return indirectComponentStatusBitField.IsBitSet(index);
		case AchievementComponentUnlock:
			return unlockedComponentStatusBitField.IsBitSet(index);

		default: return false;
		}
	}

/*0x04*/ AchievementState         achievementState;
/*0x08*/ DynamicBitField<uint16_t, int16_t> completionComponentStatusBitField;
/*0x10*/ DynamicBitField<uint16_t, int16_t> indirectComponentStatusBitField;
/*0x18*/ DynamicBitField<uint16_t, int16_t> unlockedComponentStatusBitField;
/*0x20*/ eqtime_t                 completionTimestamp;
/*0x24*/
};
using AchievementsAndComponentsInfoArray = ArrayClass<SingleAchievementAndComponentsInfo>;

//----------------------------------------------------------------------------
struct [[offsetcomments]] SingleAchievementAndComponentsInfoWithCounts : public SingleAchievementAndComponentsInfo
{
	EQLIB_OBJECT int GetComponentCount(AchievementComponentType type, int index);

/*0x24*/ ArrayClass<int>          completionComponentCounts;
/*0x34*/ ArrayClass<int>          indirectComponentCounts;
/*0x44*/ ArrayClass<int>          unlockedComponentCounts;
/*0x54*/
};

//----------------------------------------------------------------------------
struct [[offsetcomments]] SingleAchievementIdAndInfo
{
	FORCE_SYMBOLS

/*0x00*/ int                      achievementId;
/*0x04*/ SingleAchievementAndComponentsInfo achievementInfo;
/*0x28*/
};
using AchievementStateInfoArray = ArrayClass<SingleAchievementIdAndInfo>;


//============================================================================
// Achievement Manager

class [[offsetcomments]] AchievementManager
{
public:
	EQLIB_OBJECT static AchievementManager& Instance();

	virtual void Reset() {}

	//----------------------------------------------------------------------------
	// Achievement Category Access

	const AchievementCategory* GetAchievementCategoryById(int id) const
	{
		if (id < 0)
			return nullptr;

		for (const AchievementCategory& cat : categories)
		{
			if (cat.id == id)
				return &cat;
		}
		return nullptr;
	}

	EQLIB_OBJECT int GetAchievementCategoryIndexByName(std::string_view name) const;

	int GetAchievementCategoryIndexById(int id) const
	{
		if (id < 0)
			return -1;

		for (int index = 0; index < categories.GetLength(); ++index)
		{
			const AchievementCategory& category = categories[index];

			if (category.id == id)
				return index;
		}

		return -1;
	}

	const AchievementCategory* GetAchievementCategoryByIndex(int index) const
	{
		if (index >= 0 && index < categories.GetLength())
			return &categories[index];
		return nullptr;
	}

	int GetAchievementCategoryCount() const { return categories.GetLength(); }

	//----------------------------------------------------------------------------
	// Achievement Access

	const Achievement* GetAchievementById(int id) const
	{
		if (id < 0)
			return nullptr;

		for (const Achievement& achieve : achievements)
		{
			if (achieve.id == id)
				return &achieve;
		}
		return nullptr;
	}

	EQLIB_OBJECT int GetAchievementIndexByName(std::string_view name) const;

	int GetAchievementIndexById(int id) const
	{
		if (id < 0)
			return -1;

		for (int index = 0; index < achievements.GetLength(); ++index)
		{
			const Achievement& achieve = achievements[index];

			if (achieve.id == id)
				return index;
		}
		return -1;
	}

	const Achievement* GetAchievementByIndex(int index) const
	{
		if (index >= 0 && index < achievements.GetLength())
			return &achievements[index];
		return nullptr;
	}

	int GetAchievementCount() const { return achievements.GetLength(); }

	//----------------------------------------------------------------------------
	// Client info access

	const SingleAchievementAndComponentsInfo* GetAchievementClientInfoByIndex(int index) const
	{
		if (index >= 0 && index < achievementClientInfoArray.GetLength())
			return &achievementClientInfoArray[index];
		return nullptr;
	}

	AchievementState GetAchievementStateByIndex(int index) const
	{
		if (index >= 0 && index < achievementClientInfoArray.GetLength())
			return achievementClientInfoArray[index].achievementState;
		return AchievementNotVisible;
	}

	//----------------------------------------------------------------------------
	// Helpers

	EQLIB_OBJECT bool FillAchievementComponentInfoWithCounts(
		SingleAchievementAndComponentsInfoWithCounts& outInfo,
		int achievementIndex) const;

	//----------------------------------------------------------------------------
	// AchievementManager

/*0x04*/ ArrayClass2<AchievementCategory>   categories;
/*0x20*/ ArrayClass2<Achievement>           achievements;

	//----------------------------------------------------------------------------
	// AchievementManagerClient

/*0x3c*/ AchievementsAndComponentsInfoArray achievementClientInfoArray;
/*0x4c*/ AchievementsAndComponentsInfoArray achievementsClientComparisonInfoArray;
/*0x5c*/ bool                               achievementClientReadOnlyDataSet;
/*0x5d*/ bool                               achievementClientStatesSet;
/*0x5e*/ bool                               comparisonAchievementStatesSet;
/*0x60*/ uint32_t                           completedAchievementScore;
/*0x64*/ uint32_t                           completedAchievementCount;
/*0x68*/ uint32_t                           lockedAchievemmentCount;
/*0x6c*/ uint32_t                           openAchievementCount;
/*0x70*/ uint32_t                           comparisonCompletedAchievementScore;
/*0x74*/ uint32_t                           comparisonCompletedAchievementCount;
/*0x78*/ uint32_t                           comparisonLockedAchievementCount;
/*0x7c*/ uint32_t                           comparisonOpenAchievementCount;
/*0x80*/
};

} // namespace eqlib
