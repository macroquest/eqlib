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
#include "eqlib/SizeChecks.h"

#include "eqlib/game/Containers.h"
#include "eqlib/game/CXStr.h"
#include "eqlib/game/Types.h"

namespace eqlib {

class CXWnd;
class PcClient;

struct [[offsetcomments]] PCTaskStatus
{
/*0x00*/ int  TaskID;
/*0x04*/ int  MovingStartTime;
/*0x08*/ int  InitialStartTime;
/*0x0c*/ bool ElementActive[0x14];
/*0x20*/ int  CurrentCounts[0x14];
/*0x70*/
};

struct [[offsetcomments]] MonsterMissionTemplate
{
/*0x00*/ int  TemplateID;
/*0x04*/ int  Min;
/*0x08*/ int  Max;
/*0x0c*/ int  NumSelected;
/*0x10*/ bool CanSelect;
/*0x11*/ char TemplateName[0x40];
/*0x54*/
};

struct [[offsetcomments]] PCSharedTaskData
{
/*0x00*/ int          ActiveSharedTaskID;
/*0x04*/ bool         bIsMonsterMission;
/*0x08*/ PCTaskStatus Status;                              // size 0x70
/*0x78*/ ArrayClass<MonsterMissionTemplate> Templates;  // size is 0x10
/*0x88*/ float        RewardAdjustment;
/*0x8c*/
};

struct [[offsetcomments]] TaskTimerData
{
/*0x00*/ int GroupID;
/*0x04*/ int TimerSeconds;
/*0x08*/ UINT TimerExpiration;
/*0x0c*/ int TimerType;
/*0x10*/ int OrigTaskID;
/*0x14*/ TaskTimerData *pNext;
/*0x18*/
};


enum TaskType
{
	cTaskTypeUnknown = -1,
	cTaskTypeNone = 0,
	cTaskTypeDeliver,
	cTaskTypeKill,
	cTaskTypeLoot,
	cTaskTypeHail,
	cTaskTypeExplore,
	cTaskTypeTradeskill,
	cTaskTypeFishing,
	cTaskTypeForaging,
	cTaskTypeCast,
	cTaskTypeUseSkill,
	cTaskTypeDZSwitch,
	cTaskTypeDestroyObject,
	cTaskTypeCollect,
	cTaskTypeDialogue,

	cTaskTypeCount,
};

enum TaskGroupType
{
	cTaskGroupTypeSolo,
	cTaskGroupTypeGroup,
	cTaskGroupTypeRaid,
};

enum TaskSystemType
{
	cTaskSystemTypeTask,
	cTaskSystemTypeSharedQuest,
	cTaskSystemTypeSoloQuest
};

struct [[offsetcomments]] CTaskElement
{
/*0x000*/ TaskType           Type;
/*0x004*/ TaskGroupType      GroupType;
/*0x008*/ char               TargetName[0x40];
/*0x048*/ char               ZoneID[0x40];
/*0x088*/ char               TargetZoneID[0x40];
/*0x0c8*/ int                RequiredCount;
/*0x0cc*/ bool               bOptional;
/*0x0d0*/ int                ElementGroup;
/*0x0d4*/ int                DZSwitchID;
/*0x0d8*/ char               ElementDescriptionOverride[0x80];
/*0x158*/ CXStr              ItemNameList;
/*0x15c*/ CXStr              SkillIDList;
/*0x160*/ CXStr              SpellIDList;
/*0x164*/
};

const int MAX_TASK_ELEMENTS = 20;

// @sizeof(CTaskEntry) == 0x3bfc :: 2013-05-10 (emu) @ 0x48185C
constexpr size_t CTaskEntry_size = 0x3bfc;

struct [[offsetcomments]] CTaskEntry
{
/*0x0000*/ int               TaskID;
/*0x0004*/ float             RewardAdjustment;
/*0x0008*/ char              TaskTitle[64];
/*0x0048*/ int               DurationSeconds;
/*0x004c*/ int               DurationCode;
/*0x0050*/ char              StartText[4000];
/*0x0ff0*/ bool              bShowReward;
/*0x0ff4*/ int               RewardCash;
/*0x0ff8*/ int               RewardExp;
/*0x0ffc*/ int               RewardPoints;
/*0x1000*/ char              RewardFactionName[96];
///*0x0ffc*/ int               RewardFactionID; // emu has name instead of id
/*0x1060*/ int               RewardFactionAmount;
/*0x1064*/ CXStr             RewardItemTag;
/*0x1068*/ CTaskElement      Elements[MAX_TASK_ELEMENTS];
/*0x2c38*/ TaskSystemType    TaskSystem; // 2c38
/*0x2c3c*/ int               PointType;
/*0x2c40*/ bool              StartTextCompiled;
/*0x2c41*/ char              RawStartText[4000]; // 2c41
/*0x3be1*/ bool              bElementsReceived;
/*0x3be4*/ eqtime_t          TimeCompleted;
/*0x3be8*/ ArrayClass<MonsterMissionTemplate> MonsterTemplates;
/*0x3bf8*/ bool              bTemplateSelectionLocked;
/*0x3bf9*/ bool              bHasRewardSet;
/*0x3bfc*/
};

SIZE_CHECK(CTaskEntry, CTaskEntry_size);

enum SharedTaskPlayerRole
{
	STPR_None,
	STPR_Leader
};

struct SharedTaskClientPlayerInfo
{
	char                               Name[0x40];
	int                                TemplateID;
	SharedTaskPlayerRole               m_role;
	SharedTaskClientPlayerInfo*        pNext;
};

constexpr int MAX_TASK_ENTRIES = 1;
constexpr int MAX_QUEST_ENTRIES = 29;
constexpr int MAX_SHARED_TASK_ENTRIES = 1;
constexpr int MAX_QUEST_HISTORY_ENTRIES = 50;

class [[offsetcomments]] CTaskManager : public PopDialogHandler
{
public:
/*0x000004*/ CTaskEntry                TaskEntries[MAX_TASK_ENTRIES];
/*0x003c00*/ CTaskEntry                QuestEntries[MAX_QUEST_ENTRIES];
/*0x07078c*/ CTaskEntry                SharedTaskEntries[MAX_SHARED_TASK_ENTRIES];
/*0x074388*/ CTaskEntry                QuestHistoryEntries[MAX_QUEST_HISTORY_ENTRIES];
/*0x12fac0*/ CTaskEntry                UnknownQuestEntries[MAX_QUEST_ENTRIES];
/*0x19c64c*/ int                       AddPlayerID;
/*0x19c650*/ bool                      bAddPlayerIsSwap;
/*0x19c651*/ char                      AddPlayerSwapeeName[0x40];
/*0x19c694*/ SharedTaskClientPlayerInfo* pFirstMember;
/*0x19c698*/

	EQLIB_OBJECT CTaskManager(CXWnd*);

	// virtual
	EQLIB_OBJECT ~CTaskManager();
	EQLIB_OBJECT CTaskEntry* GetEntry(int Index, int System, bool bCheckEmpty = true);
	EQLIB_OBJECT PCTaskStatus* GetTaskStatus(PcClient* pMe, int Index, TaskSystemType System);
	EQLIB_OBJECT void GetElementDescription(const CTaskElement* pElement, char* Out);
};


} // namespace eqlib
