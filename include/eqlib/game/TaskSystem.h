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
/*0x08*/ PCTaskStatus Status;
/*0x78*/ ArrayClass<MonsterMissionTemplate> Templates;
/*0x90*/ float        RewardAdjustment;
/*0x94*/
};

struct [[offsetcomments]] TaskTimerData
{
/*0x00*/ int GroupID;
/*0x04*/ int TimerSeconds;
/*0x08*/ UINT TimerExpiration;
/*0x0c*/ int TimerType;
/*0x10*/ int OrigTaskID;
/*0x18*/ TaskTimerData *pNext;
/*0x20*/
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
/*0x004*/ char               TargetName[0x40];
/*0x044*/ char               ZoneID[0x40];
/*0x084*/ char               TargetZoneID[0x40];
/*0x0c4*/ int                RequiredCount;
/*0x0c8*/ bool               bOptional;
/*0x0cc*/ TaskGroupType      ElementGroup;
/*0x0d0*/ int                DZSwitchID;
/*0x0d4*/ char               ElementDescriptionOverride[0x80];
/*0x158*/ CXStr              ItemNameList;
/*0x160*/ CXStr              SkillIDList;
/*0x168*/ CXStr              SpellIDList;
/*0x170*/ CXStr              TaskTitle;
/*0x178*/
};

const int MAX_TASK_ELEMENTS = 20;

constexpr size_t CTaskEntry_size = 0x3D70; // @sizeof(CTaskEntry) :: 2025-09-11 (live) @ 0x14050F316

struct [[offsetcomments]] CTaskEntry
{
/*0x0000*/ int               TaskID;
/*0x0004*/ float             RewardAdjustment;
/*0x0008*/ char              TaskTitle[0x40];
/*0x0048*/ int               DurationSeconds;
/*0x004c*/ char              StartText[0xFa0];
/*0x0fec*/ bool              bShowReward;
/*0x0ff0*/ int               RewardCash;
/*0x0ff4*/ int               RewardExp;
/*0x0ff8*/ int               RewardPoints;
/*0x0ffc*/ int               RewardFactionID;
/*0x1000*/ int               RewardFactionAmount;
/*0x1008*/ CXStr             RewardItemTag;
/*0x1010*/ CTaskElement      Elements[MAX_TASK_ELEMENTS];
/*0x2d70*/ TaskSystemType    TaskSystem;
/*0x2d74*/ int               PointType;
/*0x2d78*/ bool              StartTextCompiled;
/*0x2d79*/ char              RawStartText[0xFa0];
/*0x3d19*/ bool              bElementsReceived;
/*0x3d20*/ eqtime_t          TimeCompleted;
/*0x3d28*/ ArrayClass<MonsterMissionTemplate> MonsterTemplates;
/*0x3d40*/ bool              bTemplateSelectionLocked;
/*0x3d41*/ bool              bHasRewardSet;
/*0x3d48*/ SoeUtil::String   UnknownString;
/*0x3d60*/ int               MinPlayers;
/*0x3d64*/ int               MaxPlayers;
/*0x3d68*/ int               MinLevel;
/*0x3d6c*/ int               MaxLevel;
/*0x3d70*/
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
/*0x000008*/ CTaskEntry                TaskEntries[MAX_TASK_ENTRIES];
/*0x003d78*/ CTaskEntry                QuestEntries[MAX_QUEST_ENTRIES];
/*0x073328*/ CTaskEntry                SharedTaskEntries[MAX_SHARED_TASK_ENTRIES];
/*0x077098*/ CTaskEntry                QuestHistoryEntries[MAX_QUEST_HISTORY_ENTRIES];
/*0x137078*/ int                       AddPlayerID;
/*0x13707c*/ bool                      bAddPlayerIsSwap;
/*0x13707d*/ char                      AddPlayerSwapeeName[0x40];
/*0x1370c0*/ SharedTaskClientPlayerInfo* pFirstMember;
/*0x1370c8*/

	EQLIB_OBJECT CTaskManager(CXWnd*);

	// virtual
	EQLIB_OBJECT ~CTaskManager();
	EQLIB_OBJECT CTaskEntry* GetEntry(int Index, int System, bool bCheckEmpty = true);
	EQLIB_OBJECT PCTaskStatus* GetTaskStatus(PcClient* pMe, int Index, TaskSystemType System);
	EQLIB_OBJECT void GetElementDescription(const CTaskElement* pElement, char* Out);
};


} // namespace eqlib
