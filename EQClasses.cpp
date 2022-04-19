/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include "pch.h"
#include "EQClasses.h"
#include "Globals.h"

#include "AltAbilities.h"
#include "RealEstate.h"

// Nothing apart from FUNCTION_AT_ADDRESS call should go into this file!

#pragma warning(push)
#pragma warning(disable:4740) // warning C4740: flow in or out of inline asm code suppresses global optimization
#pragma warning(disable:4530) // warning C4530: c++ exception handler used, but unwind semantics are not enabled. Specify /EHsc

namespace eqlib {

//============================================================================
// AchievementManager
//============================================================================

FUNCTION_AT_ADDRESS(AchievementManager&, AchievementManager::Instance(), AchievementManager__Instance);

int AchievementManager::GetAchievementCategoryIndexByName(std::string_view name) const
{
	if (name.empty())
		return -1;

	for (int index = 0; index < categories.GetLength(); ++index)
	{
		const AchievementCategory& category = categories[index];

		if (category.parentId == -1 && mq::ci_equals(category.name, name))
			return index;
	}

	return -1;
}

int AchievementManager::GetAchievementIndexByName(std::string_view name) const
{
	if (name.empty())
		return -1;

	for (int index = 0; index < achievements.GetLength(); ++index)
	{
		const Achievement& achievement = achievements[index];

		if (mq::ci_equals(achievement.name, name))
			return index;
	}

	return -1;
}

bool AchievementManager::FillAchievementComponentInfoWithCounts(
	SingleAchievementAndComponentsInfoWithCounts& outInfo, int achievementIndex) const
{
	const SingleAchievementAndComponentsInfo* clientInfo = GetAchievementClientInfoByIndex(achievementIndex);
	if (!clientInfo)
		return false;

	const Achievement* achievement = GetAchievementByIndex(achievementIndex);
	if (!achievement)
		return false;

	outInfo.achievementState = clientInfo->achievementState;
	outInfo.completionTimestamp = clientInfo->completionTimestamp;

	outInfo.completionComponentStatusBitField = clientInfo->completionComponentStatusBitField;
	outInfo.completionComponentCounts.SetLength(outInfo.completionComponentStatusBitField.GetNumBits());
	for (int index = 0; index < achievement->componentsByType[AchievementComponentCompletion].GetLength(); ++index)
	{
		const AchievementComponent& component = achievement->componentsByType[AchievementComponentCompletion][index];
		outInfo.completionComponentCounts[index] = component.count;
	}

	outInfo.indirectComponentStatusBitField = clientInfo->indirectComponentStatusBitField;
	outInfo.indirectComponentCounts.SetLength(outInfo.indirectComponentStatusBitField.GetNumBits());
	for (int index = 0; index < achievement->componentsByType[AchievementComponentIndirect].GetLength(); ++index)
	{
		const AchievementComponent& component = achievement->componentsByType[AchievementComponentIndirect][index];
		outInfo.indirectComponentCounts[index] = component.count;
	}

	outInfo.unlockedComponentStatusBitField = clientInfo->unlockedComponentStatusBitField;
	outInfo.unlockedComponentCounts.SetLength(outInfo.unlockedComponentStatusBitField.GetNumBits());
	for (int index = 0; index < achievement->componentsByType[AchievementComponentUnlock].GetLength(); ++index)
	{
		const AchievementComponent& component = achievement->componentsByType[AchievementComponentUnlock][index];
		outInfo.unlockedComponentCounts[index] = component.count;
	}

	return true;
}

//============================================================================
// AggroMeterManagerClient
//============================================================================

#ifdef AggroMeterManagerClient__Instance_x
FUNCTION_AT_ADDRESS(AggroMeterManagerClient&, AggroMeterManagerClient::Instance(), AggroMeterManagerClient__Instance);
#endif

//============================================================================
// AltAdvManager
//============================================================================

#ifdef AltAdvManager__GetAAById_x
FUNCTION_AT_ADDRESS(CAltAbilityData*, AltAdvManager::GetAAById(int, int), AltAdvManager__GetAAById);
#endif
#ifdef AltAdvManager__IsAbilityReady_x
FUNCTION_AT_ADDRESS(bool, AltAdvManager::IsAbilityReady(PcClient*, CAltAbilityData*, int*, int*), AltAdvManager__IsAbilityReady);
#endif
#ifdef AltAdvManager__GetCalculatedTimer_x
FUNCTION_AT_ADDRESS(uint32_t, AltAdvManager::GetCalculatedTimer(PcClient*, CAltAbilityData*), AltAdvManager__GetCalculatedTimer);
#endif
#ifdef AltAdvManager__CanTrainAbility_x
FUNCTION_AT_ADDRESS(bool, AltAdvManager::CanTrainAbility(PcClient*, CAltAbilityData*, bool, bool, bool), AltAdvManager__CanTrainAbility);
#endif
#ifdef AltAdvManager__CanSeeAbility_x
FUNCTION_AT_ADDRESS(bool, AltAdvManager::CanSeeAbility(PcClient*, CAltAbilityData*, bool), AltAdvManager__CanSeeAbility);
#endif

//============================================================================
// CAltAbilityData
//============================================================================

// These two are MercenaryAlternateAdvancementManagerClient
#ifdef CAltAbilityData__GetMercCurrentRank_x
//FUNCTION_AT_ADDRESS(int, CAltAbilityData::GetMercCurrentRank(int), CAltAbilityData__GetMercCurrentRank);
#endif
#ifdef CAltAbilityData__GetMercMaxRank_x
//FUNCTION_AT_ADDRESS(int, CAltAbilityData::GetMercMaxRank(int), CAltAbilityData__GetMercMaxRank);
#endif

const char* CAltAbilityData::GetNameString() const
{
	return pDBStr->GetString(nName, eAltAbilityName);
}

const char* CAltAbilityData::GetDescriptionString() const
{
	return pDBStr->GetString(nDesc, eAltAbilityDescription);
}

const char* CAltAbilityData::GetCategoryString() const
{
	if (DisplayCategory != -1)
	{
		return pDBStr->GetString(DisplayCategory, eAltAbilityCategory);
	}

	return pDBStr->GetString(Expansion, eExpansionName);
}

const char* CAltAbilityData::GetExpansionString() const
{
	return pDBStr->GetString(Expansion, eExpansionName);
}

const char* CAltAbilityData::GetShortName1() const
{
	if (nShortName == -1)
		return "";

	return pDBStr->GetString(nShortName, eAltAbilityButton1);
}

const char* CAltAbilityData::GetShortName2() const
{
	if (nShortName2 == -1)
		return "";

	return pDBStr->GetString(nShortName2, eAltAbilityButton2);
}

//============================================================================
// CBroadcast
//============================================================================

#ifdef CBroadcast__Get_x
FUNCTION_AT_ADDRESS(CBroadcast*, CBroadcast::Get(), CBroadcast__Get);
#endif

//============================================================================
// CChatService
//============================================================================

#ifdef CChatService__GetNumberOfFriends_x
FUNCTION_AT_ADDRESS(int, UniversalChatProxy::GetNumberOfFriends(), CChatService__GetNumberOfFriends);
#endif
#ifdef CChatService__GetFriendName_x
FUNCTION_AT_ADDRESS(const char*, UniversalChatProxy::GetFriendName(int), CChatService__GetFriendName);
#endif

//============================================================================
// CDBStr
//============================================================================

#ifdef CDBStr__GetString_x
FUNCTION_AT_ADDRESS(const char*, CDBStr::GetString(int, eDatabaseStringType type, bool*), CDBStr__GetString); // GetString(index, subindex, &success)
#endif

//============================================================================
// CDistillerInfo
//============================================================================

#ifdef CDistillerInfo__GetIDFromRecordNum_x
FUNCTION_AT_ADDRESS(int, CDistillerInfo::GetIDFromRecordNum(int ID, bool bWhat), CDistillerInfo__GetIDFromRecordNum);
#endif
#ifdef CDistillerInfo__Instance_x
FUNCTION_AT_ADDRESS(CDistillerInfo&, CDistillerInfo::Instance(), CDistillerInfo__Instance);
#endif

//============================================================================
// CGuild
//============================================================================

#ifdef CGuild__GetGuildMotd_x
FUNCTION_AT_ADDRESS(char*, CGuild::GetGuildMotd(), CGuild__GetGuildMotd);
#endif
#ifdef CGuild__GetGuildMotdAuthor_x
FUNCTION_AT_ADDRESS(char*, CGuild::GetGuildMotdAuthor(), CGuild__GetGuildMotdAuthor);
#endif
#ifdef CGuild__GetGuildName_x
FUNCTION_AT_ADDRESS(const char*, CGuild::GetGuildName(int64_t, char*, bool*, bool) const, CGuild__GetGuildName);
#endif
#ifdef CGuild__ValidGuildName_x
FUNCTION_AT_ADDRESS(bool, CGuild::ValidGuildName(int), CGuild__ValidGuildName);
#endif
#ifdef CGuild__SendPublicCommentChange_x
FUNCTION_AT_ADDRESS(void, CGuild::SendPublicCommentChange(char*, char*), CGuild__SendPublicCommentChange);
#endif
#ifdef CGuild__DemoteMember_x
FUNCTION_AT_ADDRESS(void, CGuild::DemoteMember(GuildMember*), CGuild__DemoteMember);
#endif
#ifdef CGuild__SetGuildMotd_x
FUNCTION_AT_ADDRESS(void, CGuild::SetGuildMotd(guildmotdSet*), CGuild__SetGuildMotd);
#endif
#ifdef CGuild__HandleGuildMessage_x
FUNCTION_AT_ADDRESS(void, CGuild::HandleGuildMessage(connection_t*, uint32_t, char*, uint32_t), CGuild__HandleGuildMessage);
#endif
#ifdef CGuild__InitializeFromDump_x
FUNCTION_AT_ADDRESS(void, CGuild::InitializeFromDump(char*), CGuild__InitializeFromDump);
#endif
#ifdef CGuild__AddGuildMember_x
FUNCTION_AT_ADDRESS(void, CGuild::AddGuildMember(GuildMember*), CGuild__AddGuildMember);
#endif
#ifdef CGuild__DeleteAllMembers_x
FUNCTION_AT_ADDRESS(void, CGuild::DeleteAllMembers(), CGuild__DeleteAllMembers);
#endif
#ifdef CGuild__HandleGuildInvite_x
FUNCTION_AT_ADDRESS(void, CGuild::HandleGuildInvite(connection_t*, uint32_t, char*, uint32_t), CGuild__HandleGuildInvite);
#endif
#ifdef CGuild__HandleAddGuildMember_x
FUNCTION_AT_ADDRESS(void, CGuild::HandleAddGuildMember(char*, int), CGuild__HandleAddGuildMember);
#endif
#ifdef CGuild__HandleRemoveGuildMember_x
FUNCTION_AT_ADDRESS(void, CGuild::HandleRemoveGuildMember(char*, int), CGuild__HandleRemoveGuildMember);
#endif
#ifdef CGuild__HandleDeleteGuildResponse_x
FUNCTION_AT_ADDRESS(void, CGuild::HandleDeleteGuildResponse(char*), CGuild__HandleDeleteGuildResponse);
#endif
#ifdef CGuild__UpdatePublicComment_x
FUNCTION_AT_ADDRESS(void, CGuild::UpdatePublicComment(char*), CGuild__UpdatePublicComment);
#endif
#ifdef CGuild__UpdateMemberStatus_x
FUNCTION_AT_ADDRESS(void, CGuild::UpdateMemberStatus(char*), CGuild__UpdateMemberStatus);
#endif
#ifdef CGuild__HandleMemberLevelUpdate_x
FUNCTION_AT_ADDRESS(void, CGuild::HandleMemberLevelUpdate(char*), CGuild__HandleMemberLevelUpdate);
#endif
#ifdef CGuild__UpdateGuildMemberOnWindow_x
FUNCTION_AT_ADDRESS(void, CGuild::UpdateGuildMemberOnWindow(GuildMember*), CGuild__UpdateGuildMemberOnWindow);
#endif
#ifdef CGuild__ChangeGuildMemberName_x
FUNCTION_AT_ADDRESS(void, CGuild::ChangeGuildMemberName(char*), CGuild__ChangeGuildMemberName);
#endif
#ifdef CGuild__FindMemberByName_x
FUNCTION_AT_ADDRESS(GuildMember*, CGuild::FindMemberByName(const char*), CGuild__FindMemberByName);
#endif

int64_t CGuild::GetGuildIndex(const char* name)
{
	// TODO: implement me
	return 0;
}

//============================================================================
// ChatManagerClient
//============================================================================

#ifdef ChatManagerClient__Instance_x
FUNCTION_AT_ADDRESS(ChatManagerClient&, ChatManagerClient::Instance(), ChatManagerClient__Instance);
#endif

//============================================================================
// ClientSOIManager
//============================================================================

#ifdef ClientSOIManager__GetSingleton_x
FUNCTION_AT_ADDRESS(ClientAuraManager*, ClientAuraManager::GetSingleton(), ClientSOIManager__GetSingleton);
#endif

//============================================================================
// ConversationJournal
//============================================================================

#ifdef ConversationJournal__ConversationJournal_x
FUNCTION_AT_ADDRESS(ConversationJournal::ConversationJournal(), ConversationJournal__ConversationJournal);
#endif
#ifdef ConversationJournal__dConversationJournal_x
FUNCTION_AT_ADDRESS(ConversationJournal::~ConversationJournal(), ConversationJournal__dConversationJournal);
#endif
#ifdef ConversationJournal__Clean_x
FUNCTION_AT_ADDRESS(void, ConversationJournal::Clean(), ConversationJournal__Clean);
#endif
#ifdef ConversationJournal__AllocateNPCArray_x
FUNCTION_AT_ADDRESS(void, ConversationJournal::AllocateNPCArray(), ConversationJournal__AllocateNPCArray);
#endif
#ifdef ConversationJournal__AllocateCatArray_x
FUNCTION_AT_ADDRESS(void, ConversationJournal::AllocateCatArray(), ConversationJournal__AllocateCatArray);
#endif
#ifdef ConversationJournal__GetNPC_x
FUNCTION_AT_ADDRESS(JournalNPC*, ConversationJournal::GetNPC(int), ConversationJournal__GetNPC);
#endif
#ifdef ConversationJournal__FindNPCByNameZone_x
FUNCTION_AT_ADDRESS(JournalNPC*, ConversationJournal::FindNPCByNameZone(char*, int), ConversationJournal__FindNPCByNameZone);
#endif
#ifdef ConversationJournal__DeleteNPC_x
FUNCTION_AT_ADDRESS(int, ConversationJournal::DeleteNPC(char*, int), ConversationJournal__DeleteNPC);
#endif
#ifdef ConversationJournal__AddNPC_x
FUNCTION_AT_ADDRESS(JournalNPC*, ConversationJournal::AddNPC(char*, int), ConversationJournal__AddNPC);
#endif
#ifdef ConversationJournal__AddEntry_x
FUNCTION_AT_ADDRESS(int, ConversationJournal::AddEntry(char*, int, long, float, float, float, char*, int), ConversationJournal__AddEntry);
#endif
#ifdef ConversationJournal__AddCategory_x
FUNCTION_AT_ADDRESS(JournalCategory*, ConversationJournal::AddCategory(int), ConversationJournal__AddCategory);
#endif
#ifdef ConversationJournal__FindFreeID_x
FUNCTION_AT_ADDRESS(int, ConversationJournal::FindFreeID(), ConversationJournal__FindFreeID);
#endif
#ifdef ConversationJournal__AddCategory1_x
FUNCTION_AT_ADDRESS(JournalCategory*, ConversationJournal::AddCategory(char*, char*, int), ConversationJournal__AddCategory1);
#endif
#ifdef ConversationJournal__DeleteCategory_x
FUNCTION_AT_ADDRESS(void, ConversationJournal::DeleteCategory(int), ConversationJournal__DeleteCategory);
#endif
#ifdef ConversationJournal__GetCategory_x
FUNCTION_AT_ADDRESS(JournalCategory*, ConversationJournal::GetCategory(int), ConversationJournal__GetCategory);
#endif
#ifdef ConversationJournal__GetCategory1_x
FUNCTION_AT_ADDRESS(JournalCategory*, ConversationJournal::GetCategory(char*), ConversationJournal__GetCategory1);
#endif
#ifdef ConversationJournal__GetCategoryList_x
FUNCTION_AT_ADDRESS(JournalCategory**, ConversationJournal::GetCategoryList(), ConversationJournal__GetCategoryList);
#endif
#ifdef ConversationJournal__Save_x
FUNCTION_AT_ADDRESS(int, ConversationJournal::Save(char*), ConversationJournal__Save);
#endif
#ifdef ConversationJournal__Load_x
FUNCTION_AT_ADDRESS(int, ConversationJournal::Load(char*), ConversationJournal__Load);
#endif
#ifdef ConversationJournal__ReadCategory_x
FUNCTION_AT_ADDRESS(void, ConversationJournal::ReadCategory(_iobuf*), ConversationJournal__ReadCategory);
#endif
#ifdef ConversationJournal__ReadNPC_x
FUNCTION_AT_ADDRESS(JournalNPC*, ConversationJournal::ReadNPC(_iobuf*), ConversationJournal__ReadNPC);
#endif

//============================================================================
// CRaid
//============================================================================

#ifdef CRaid__CRaid_x
FUNCTION_AT_ADDRESS(CRaid::CRaid(), CRaid__CRaid);
#endif
#ifdef CRaid__HandleS2CRaidMessage_x
FUNCTION_AT_ADDRESS(void, CRaid::HandleS2CRaidMessage(char*), CRaid__HandleS2CRaidMessage);
#endif
#ifdef CRaid__HandleC2SRaidMessage_x
FUNCTION_AT_ADDRESS(void, CRaid::HandleC2SRaidMessage(char*), CRaid__HandleC2SRaidMessage);
#endif
#ifdef CRaid__IsInRaid_x
FUNCTION_AT_ADDRESS(bool, CRaid::IsInRaid(), CRaid__IsInRaid);
#endif
#ifdef CRaid__IsInvited_x
FUNCTION_AT_ADDRESS(bool, CRaid::IsInvited(), CRaid__IsInvited);
#endif
#ifdef CRaid__ClearInvitedState_x
FUNCTION_AT_ADDRESS(void, CRaid::ClearInvitedState(), CRaid__ClearInvitedState);
#endif
#ifdef CRaid__IsRaidLeader_x
FUNCTION_AT_ADDRESS(bool, CRaid::IsRaidLeader(), CRaid__IsRaidLeader);
#endif
#ifdef CRaid__IsRaidGroupLeader_x
FUNCTION_AT_ADDRESS(bool, CRaid::IsRaidGroupLeader(), CRaid__IsRaidGroupLeader);
#endif
#ifdef CRaid__SetTargetRaidPlayer_x
FUNCTION_AT_ADDRESS(void, CRaid::SetTargetRaidPlayer(char*), CRaid__SetTargetRaidPlayer);
#endif
#ifdef CRaid__InitializeRaid_x
FUNCTION_AT_ADDRESS(void, CRaid::InitializeRaid(char*), CRaid__InitializeRaid);
#endif
#ifdef CRaid__RaidCreated_x
FUNCTION_AT_ADDRESS(void, CRaid::RaidCreated(CreateRaidMessage*), CRaid__RaidCreated);
#endif
#ifdef CRaid__AddRaidMember_x
FUNCTION_AT_ADDRESS(void, CRaid::AddRaidMember(RaidAddMember*), CRaid__AddRaidMember);
#endif
#ifdef CRaid__DeleteRaidMember_x
FUNCTION_AT_ADDRESS(void, CRaid::DeleteRaidMember(SCRaidMessage*), CRaid__DeleteRaidMember);
#endif
#ifdef CRaid__ChangeLeadership_x
FUNCTION_AT_ADDRESS(void, CRaid::ChangeLeadership(char*), CRaid__ChangeLeadership);
#endif
#ifdef CRaid__RenameMember_x
FUNCTION_AT_ADDRESS(void, CRaid::RenameMember(RenameRaidMember*), CRaid__RenameMember);
#endif
#ifdef CRaid__HandlePositionChange_x
FUNCTION_AT_ADDRESS(void, CRaid::HandlePositionChange(SCRaidMessage*), CRaid__HandlePositionChange);
#endif
#ifdef CRaid__RaidGroupLeaderChange_x
FUNCTION_AT_ADDRESS(void, CRaid::RaidGroupLeaderChange(SCRaidMessage*), CRaid__RaidGroupLeaderChange);
#endif
#ifdef CRaid__SetLootTypeResponse_x
FUNCTION_AT_ADDRESS(void, CRaid::SetLootTypeResponse(SCRaidMessage*), CRaid__SetLootTypeResponse);
#endif
#ifdef CRaid__HandleSetLootType_x
FUNCTION_AT_ADDRESS(void, CRaid::HandleSetLootType(int), CRaid__HandleSetLootType);
#endif
#ifdef CRaid__HandleAddLooter_x
FUNCTION_AT_ADDRESS(void, CRaid::HandleAddLooter(char*), CRaid__HandleAddLooter);
#endif
#ifdef CRaid__HandleRemoveLooter_x
FUNCTION_AT_ADDRESS(void, CRaid::HandleRemoveLooter(char*), CRaid__HandleRemoveLooter);
#endif
#ifdef CRaid__CreateInviteRaid_x
FUNCTION_AT_ADDRESS(void, CRaid::CreateInviteRaid(), CRaid__CreateInviteRaid);
#endif
#ifdef CRaid__SendInviteResponse_x
FUNCTION_AT_ADDRESS(void, CRaid::SendInviteResponse(bool), CRaid__SendInviteResponse);
#endif
#ifdef CRaid__SendLeadershipChange_x
FUNCTION_AT_ADDRESS(void, CRaid::SendLeadershipChange(char*), CRaid__SendLeadershipChange);
#endif
#ifdef CRaid__RemoveRaidMember_x
FUNCTION_AT_ADDRESS(void, CRaid::RemoveRaidMember(), CRaid__RemoveRaidMember);
#endif
#ifdef CRaid__SetLootType_x
FUNCTION_AT_ADDRESS(void, CRaid::SetLootType(char*), CRaid__SetLootType);
#endif
#ifdef CRaid__GetLootType_x
FUNCTION_AT_ADDRESS(int, CRaid::GetLootType(), CRaid__GetLootType);
#endif
#ifdef CRaid__AddRaidLooter_x
FUNCTION_AT_ADDRESS(void, CRaid::AddRaidLooter(), CRaid__AddRaidLooter);
#endif
#ifdef CRaid__RemoveRaidLooter_x
FUNCTION_AT_ADDRESS(void, CRaid::RemoveRaidLooter(), CRaid__RemoveRaidLooter);
#endif
#ifdef CRaid__SendRaidChat_x
FUNCTION_AT_ADDRESS(void, CRaid::SendRaidChat(char*), CRaid__SendRaidChat);
#endif
#ifdef CRaid__ResetWindow_x
FUNCTION_AT_ADDRESS(void, CRaid::ResetWindow(), CRaid__ResetWindow);
#endif
#ifdef CRaid__UpdateClassColor_x
FUNCTION_AT_ADDRESS(void, CRaid::UpdateClassColor(int, unsigned long), CRaid__UpdateClassColor);
#endif
#ifdef CRaid__HandleCreateInviteRaid_x
FUNCTION_AT_ADDRESS(void, CRaid::HandleCreateInviteRaid(CSRaidMessage*), CRaid__HandleCreateInviteRaid);
#endif
#ifdef CRaid__GetNumRaidMembers_x
FUNCTION_AT_ADDRESS(int, CRaid::GetNumRaidMembers(), CRaid__GetNumRaidMembers);
#endif
#ifdef CRaid__GetRaidMemberAt_x
FUNCTION_AT_ADDRESS(RaidMember*, CRaid::GetRaidMemberAt(int), CRaid__GetRaidMemberAt);
#endif
#ifdef CRaid__SetRaidLeader_x
FUNCTION_AT_ADDRESS(void, CRaid::SetRaidLeader(char*), CRaid__SetRaidLeader);
#endif
#ifdef CRaid__FindPlayerIndex_x
FUNCTION_AT_ADDRESS(int, CRaid::FindPlayerIndex(char*), CRaid__FindPlayerIndex);
#endif
#ifdef CRaid__IsRaidMember_x
FUNCTION_AT_ADDRESS(bool, CRaid::IsRaidMember(char*), CRaid__IsRaidMember);
#endif
#ifdef CRaid__FindOpenIndex_x
FUNCTION_AT_ADDRESS(int, CRaid::FindOpenIndex(), CRaid__FindOpenIndex);
#endif
#ifdef CRaid__FindRaidGroupLeader_x
FUNCTION_AT_ADDRESS(int, CRaid::FindRaidGroupLeader(int), CRaid__FindRaidGroupLeader);
#endif
#ifdef CRaid__ResetRaid_x
FUNCTION_AT_ADDRESS(void, CRaid::ResetRaid(), CRaid__ResetRaid);
#endif
#ifdef CRaid__DetermineRaidChanges_x
FUNCTION_AT_ADDRESS(void, CRaid::DetermineRaidChanges(char*), CRaid__DetermineRaidChanges);
#endif
#ifdef CRaid__SendRaidMsg_x
FUNCTION_AT_ADDRESS(void, CRaid::SendRaidMsg(int, char*, char*, int), CRaid__SendRaidMsg);
#endif
#ifdef CRaid__UpdateOptionsWindow_x
FUNCTION_AT_ADDRESS(void, CRaid::UpdateOptionsWindow(), CRaid__UpdateOptionsWindow);
#endif
#ifdef CRaid__IsRaidLooter_x
FUNCTION_AT_ADDRESS(bool, CRaid::IsRaidLooter(char*), CRaid__IsRaidLooter);
#endif
#ifdef CRaid__UpdateLevelAverage_x
FUNCTION_AT_ADDRESS(void, CRaid::UpdateLevelAverage(), CRaid__UpdateLevelAverage);
#endif

//============================================================================
// CResolutionHandler
//============================================================================

#ifdef CResolutionHandler__Init_x
FUNCTION_AT_ADDRESS(int, CResolutionHandler::Init(), CResolutionHandler__Init);
#endif
#ifdef CResolutionHandler__Shutdown_x
FUNCTION_AT_ADDRESS(void, CResolutionHandler::Shutdown(), CResolutionHandler__Shutdown);
#endif
#ifdef CResolutionHandler__SaveSettings_x
FUNCTION_AT_ADDRESS(void, CResolutionHandler::SaveSettings(), CResolutionHandler__SaveSettings);
#endif
#ifdef CResolutionHandler__ToggleScreenMode_x
FUNCTION_AT_ADDRESS(void, CResolutionHandler::ToggleScreenMode(), CResolutionHandler__ToggleScreenMode);
#endif
#ifdef CResolutionHandler__ChangeToResolution_x
FUNCTION_AT_ADDRESS(void, CResolutionHandler::ChangeToResolution(int, int, int, int, int), CResolutionHandler__ChangeToResolution);
#endif
#ifdef CResolutionHandler__UpdateWindowPosition_x
FUNCTION_AT_ADDRESS(void, CResolutionHandler::UpdateWindowPosition(), CResolutionHandler__UpdateWindowPosition);
#endif
#ifdef CResolutionHandler__UpdateResolution_x
FUNCTION_AT_ADDRESS(void, CResolutionHandler::UpdateResolution(ResolutionUpdateData& data), CResolutionHandler__UpdateResolution);
#endif
#ifdef CResolutionHandler__GetWindowedStyle_x
FUNCTION_AT_ADDRESS(DWORD, CResolutionHandler::GetWindowedStyle() const, CResolutionHandler__GetWindowedStyle);
#endif
#ifdef CResolutionHandler__GetDesktopWidth_x
FUNCTION_AT_ADDRESS(int, CResolutionHandler::GetDesktopWidth(), CResolutionHandler__GetDesktopWidth);
#endif
#ifdef CResolutionHandler__GetDesktopHeight_x
FUNCTION_AT_ADDRESS(int, CResolutionHandler::GetDesktopHeight(), CResolutionHandler__GetDesktopHeight);
#endif
#ifdef CResolutionHandler__GetDesktopBitsPerPixel_x
FUNCTION_AT_ADDRESS(int, CResolutionHandler::GetDesktopBitsPerPixel(), CResolutionHandler__GetDesktopBitsPerPixel);
#endif
#ifdef CResolutionHandler__GetDesktopRefreshRate_x
FUNCTION_AT_ADDRESS(int, CResolutionHandler::GetDesktopRefreshRate(), CResolutionHandler__GetDesktopRefreshRate);
#endif
#ifdef CResolutionHandler__GetWidth_x
FUNCTION_AT_ADDRESS(int, CResolutionHandler::GetWidth(), CResolutionHandler__GetWidth);
#endif
#ifdef CResolutionHandler__GetHeight_x
FUNCTION_AT_ADDRESS(int, CResolutionHandler::GetHeight(), CResolutionHandler__GetHeight);
#endif
#ifdef CResolutionHandler__IsFullscreenAvailable_x
FUNCTION_AT_ADDRESS(bool, CResolutionHandler::IsFullscreenAvailable(), CResolutionHandler__IsFullscreenAvailable);
#endif

//============================================================================
// CSkillMgr
//============================================================================

#ifdef CSkillMgr__GetNameToken_x
FUNCTION_AT_ADDRESS(int, SkillManager::GetNameToken(int), CSkillMgr__GetNameToken);
#endif
#ifdef CSkillMgr__IsCombatSkill_x
FUNCTION_AT_ADDRESS(bool, SkillManager::IsCombatSkill(int), CSkillMgr__IsCombatSkill);
#endif
#ifdef CSkillMgr__GetSkillCap_x
FUNCTION_AT_ADDRESS(unsigned long, SkillManager::GetSkillCap(PcZoneClient*, int, EQClass, int, bool, bool, bool), CSkillMgr__GetSkillCap)
#endif
#ifdef CSkillMgr__SkillAvailableAtLevel_x
FUNCTION_AT_ADDRESS(unsigned long, SkillManager::SkillAvailableAtLevel(int, int), CSkillMgr__SkillAvailableAtLevel);
#endif
#ifdef CSkillMgr__IsActivatedSkill_x
FUNCTION_AT_ADDRESS(bool, SkillManager::IsActivatedSkill(int), CSkillMgr__IsActivatedSkill);
#endif
#ifdef CSkillMgr__GetBaseDamage_x
FUNCTION_AT_ADDRESS(unsigned long, SkillManager::GetBaseDamage(int), CSkillMgr__GetBaseDamage);
#endif
#ifdef CSkillMgr__GetReuseTime_x
FUNCTION_AT_ADDRESS(unsigned long, SkillManager::GetReuseTime(int), CSkillMgr__GetReuseTime);
#endif
#ifdef CSkillMgr__IsAvailable_x
FUNCTION_AT_ADDRESS(bool, SkillManager::IsAvailable(int), CSkillMgr__IsAvailable);
#endif

//============================================================================
// CTargetManager
//============================================================================

#ifdef CTargetManager__Get_x
FUNCTION_AT_ADDRESS(CTargetManager*, CTargetManager::Get(), CTargetManager__Get);
#endif

//============================================================================
// FreeTargetTracker
//============================================================================

#ifdef FreeTargetTracker__CastSpell_x
FUNCTION_AT_ADDRESS(int, FreeTargetTracker::CastSpell(const CVector3&), FreeTargetTracker__CastSpell);
#endif

//============================================================================
// CTaskManager
//============================================================================

#ifdef CTaskManager__GetEntry_x
FUNCTION_AT_ADDRESS(CTaskEntry*, CTaskManager::GetEntry(int Index, int System, bool bCheckEmpty), CTaskManager__GetEntry);
#endif
#ifdef CTaskManager__GetTaskStatus_x
FUNCTION_AT_ADDRESS(PCTaskStatus*, CTaskManager::GetTaskStatus(PcClient* pMe, int Index, TaskSystemType System),CTaskManager__GetTaskStatus);
#endif
#ifdef CTaskManager__GetElementDescription_x
FUNCTION_AT_ADDRESS(void, CTaskManager::GetElementDescription(const CTaskElement* pElement, char* Out),CTaskManager__GetElementDescription);
#endif

//============================================================================
// CTextOverlay
//============================================================================

#ifdef CTextOverlay__DisplayText_x
//this is really:
//MQLIB_OBJECT void CBroadcast::BroadcastString(const char* Str, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime);
FUNCTION_AT_ADDRESS(void, CBroadcast::DisplayText(const char* Str, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime), CTextOverlay__DisplayText);
#endif

//============================================================================
// EmitterManager
//============================================================================

#ifdef EmitterManager__EmitterManager_x
FUNCTION_AT_ADDRESS(EmitterManager::EmitterManager(SoundManager*), EmitterManager__EmitterManager);
#endif
#ifdef EmitterManager__dEmitterManager_x
FUNCTION_AT_ADDRESS(EmitterManager::~EmitterManager(), EmitterManager__dEmitterManager);
#endif
#ifdef EmitterManager__GiveTime_x
FUNCTION_AT_ADDRESS(void, EmitterManager::GiveTime(), EmitterManager__GiveTime);
#endif
#ifdef EmitterManager__GetEffectsLevel_x
FUNCTION_AT_ADDRESS(float, EmitterManager::GetEffectsLevel(), EmitterManager__GetEffectsLevel);
#endif
#ifdef EmitterManager__GetVolumeLevel_x
FUNCTION_AT_ADDRESS(float, EmitterManager::GetVolumeLevel(), EmitterManager__GetVolumeLevel);
#endif
#ifdef EmitterManager__SetEffectsLevel_x
FUNCTION_AT_ADDRESS(void, EmitterManager::SetEffectsLevel(float), EmitterManager__SetEffectsLevel);
#endif
#ifdef EmitterManager__GetListenerLocation_x
FUNCTION_AT_ADDRESS(void, EmitterManager::GetListenerLocation(float*, float*, float*, float*), EmitterManager__GetListenerLocation);
#endif
#ifdef EmitterManager__SetVolumeLevel_x
FUNCTION_AT_ADDRESS(void, EmitterManager::SetVolumeLevel(float), EmitterManager__SetVolumeLevel);
#endif


//============================================================================
// EQ_Container
//============================================================================

#ifdef EQ_Container__EQ_Container_x
FUNCTION_AT_ADDRESS(EQ_Container::EQ_Container(), EQ_Container__EQ_Container);
#endif
#ifdef EQ_Container__dEQ_Container_x
FUNCTION_AT_ADDRESS(EQ_Container::~EQ_Container(), EQ_Container__dEQ_Container);
#endif
#ifdef EQ_Container__Open_x
FUNCTION_AT_ADDRESS(unsigned char, EQ_Container::Open(), EQ_Container__Open);
#endif
#ifdef EQ_Container__Close_x
FUNCTION_AT_ADDRESS(unsigned char, EQ_Container::Close(), EQ_Container__Close);
#endif
#ifdef EQ_Container__IsOpen_x
FUNCTION_AT_ADDRESS(unsigned char, EQ_Container::IsOpen(), EQ_Container__IsOpen);
#endif
#ifdef EQ_Equipment__EQ_Equipment_x
FUNCTION_AT_ADDRESS(EQ_Equipment::EQ_Equipment(), EQ_Equipment__EQ_Equipment);
#endif
#ifdef EQ_Equipment__IsWeapon_x
FUNCTION_AT_ADDRESS(int, EQ_Equipment::IsWeapon(), EQ_Equipment__IsWeapon);
#endif
#ifdef EQ_Equipment__IsInstrument_x
FUNCTION_AT_ADDRESS(int, EQ_Equipment::IsInstrument(), EQ_Equipment__IsInstrument);
#endif
#ifdef EQ_Equipment__SendTextRequestMsg_x
FUNCTION_AT_ADDRESS(void, EQ_Equipment::SendTextRequestMsg(), EQ_Equipment__SendTextRequestMsg);
#endif


//============================================================================
// EQ_LoadingS
//============================================================================

#ifdef EQ_LoadingS__EQ_LoadingS_x
FUNCTION_AT_ADDRESS(EQ_LoadingS::EQ_LoadingS(), EQ_LoadingS__EQ_LoadingS);
#endif
#ifdef EQ_LoadingS__dEQ_LoadingS_x
FUNCTION_AT_ADDRESS(EQ_LoadingS::~EQ_LoadingS(), EQ_LoadingS__dEQ_LoadingS);
#endif
#ifdef EQ_LoadingS__DrawBackground_x
FUNCTION_AT_ADDRESS(void, EQ_LoadingS::DrawBackground(), EQ_LoadingS__DrawBackground);
#endif
#ifdef EQ_LoadingS__draw_x
FUNCTION_AT_ADDRESS(void, EQ_LoadingS::draw(), EQ_LoadingS__draw);
#endif
#ifdef EQ_LoadingS__WriteTextHD_x
FUNCTION_AT_ADDRESS(void, EQ_LoadingS::WriteTextHD(char*, int, int, int), EQ_LoadingS__WriteTextHD);
#endif
#ifdef EQ_LoadingS__SetProgressBar_x
FUNCTION_AT_ADDRESS(void, EQ_LoadingS::SetProgressBar(int, const char*), EQ_LoadingS__SetProgressBar);
#endif

//============================================================================
// EQEffect
//============================================================================

#ifdef EQEffect__EQEffect_x
FUNCTION_AT_ADDRESS(EQEffect::EQEffect(EQEffect*, char*, int, EQLOC*, PlayerZoneClient*, EQMissile*, EQRGB*, float, int, int, float, float), EQEffect__EQEffect);
#endif
#ifdef EQEffect__dEQEffect_x
FUNCTION_AT_ADDRESS(EQEffect::~EQEffect(), EQEffect__dEQEffect);
#endif

//============================================================================
// EqEmitterData
//============================================================================

#ifdef EqEmitterData__EqEmitterData_x
FUNCTION_AT_ADDRESS(EqEmitterData::EqEmitterData(), EqEmitterData__EqEmitterData);
#endif
#ifdef EqEmitterData__SetLoadString_x
FUNCTION_AT_ADDRESS(void, EqEmitterData::SetLoadString(char*), EqEmitterData__SetLoadString);
#endif

//============================================================================
// EQGroundItemListManager
//============================================================================

#ifdef EQGroundItemListManager__Instance_x
FUNCTION_AT_ADDRESS(EQGroundItemListManager&, EQGroundItemListManager::Instance(), EQGroundItemListManager__Instance);
#endif

//============================================================================
// EQItemList
//============================================================================

#ifdef EQItemList__EQItemList_x
CONSTRUCTOR_AT_ADDRESS(EQItemList::EQItemList(), EQItemList__EQItemList);
#endif
#ifdef EQItemList__dEQItemList_x
FUNCTION_AT_ADDRESS(EQItemList::~EQItemList(), EQItemList__dEQItemList);
#endif
#ifdef EQItemList__get_item_x
FUNCTION_AT_ADDRESS(EQItemList*, EQItemList::get_item(long), EQItemList__get_item);
#endif
#ifdef EQItemList__is_item_actor_x
FUNCTION_AT_ADDRESS(EQItemList*, EQItemList::is_item_actor(struct T3D_tagACTORINSTANCE*), EQItemList__is_item_actor);
#endif

//============================================================================
// CTribute
//============================================================================

#ifdef CTribute__GetActiveFavorCost_x
FUNCTION_AT_ADDRESS(int, CTribute::GetActiveFavorCost(), CTribute__GetActiveFavorCost);
#endif

//============================================================================
// EQMissile
//============================================================================

#ifdef EQMissile__LeaveTrail_x
FUNCTION_AT_ADDRESS(void, EQMissile::LeaveTrail(), EQMissile__LeaveTrail);
#endif
#ifdef EQMissile__EQMissile_x
FUNCTION_AT_ADDRESS(EQMissile::EQMissile(EQ_Equipment*, PlayerZoneClient*, EQMissile*, char*, unsigned char, unsigned int), EQMissile__EQMissile);
#endif
#ifdef EQMissile__dEQMissile_x
FUNCTION_AT_ADDRESS(EQMissile::~EQMissile(), EQMissile__dEQMissile);
#endif
#ifdef EQMissile__CleanUpMyEffects_x
FUNCTION_AT_ADDRESS(void, EQMissile::CleanUpMyEffects(), EQMissile__CleanUpMyEffects);
#endif
#ifdef EQMissile__is_missile_actor_x
FUNCTION_AT_ADDRESS(EQMissile*, EQMissile::is_missile_actor(struct T3D_tagACTORINSTANCE*), EQMissile__is_missile_actor);
#endif
#ifdef EQMissile__HitActor_x
FUNCTION_AT_ADDRESS(void, EQMissile::HitActor(struct T3D_tagACTORINSTANCE*, bool), EQMissile__HitActor);
#endif
#ifdef EQMissile__ProcessMissile_x
FUNCTION_AT_ADDRESS(void, EQMissile::ProcessMissile(), EQMissile__ProcessMissile);
#endif
#ifdef EQMissile__MissileAI_x
FUNCTION_AT_ADDRESS(void, EQMissile::MissileAI(), EQMissile__MissileAI);
#endif

//============================================================================
// EqMobileEmitter
//============================================================================

#ifdef EqMobileEmitter__Move_x
FUNCTION_AT_ADDRESS(void, EqMobileEmitter::Move(float, float, float), EqMobileEmitter__Move);
#endif
#ifdef EqMobileEmitter__SetWave_x
FUNCTION_AT_ADDRESS(void, EqMobileEmitter::SetWave(int, char*), EqMobileEmitter__SetWave);
#endif
#ifdef EqMobileEmitter__SetNpcHeight_x
FUNCTION_AT_ADDRESS(void, EqMobileEmitter::SetNpcHeight(float), EqMobileEmitter__SetNpcHeight);
#endif

//============================================================================
// EQMoneyList
//============================================================================

#ifdef EQMoneyList__EQMoneyList_x
FUNCTION_AT_ADDRESS(EQMoneyList::EQMoneyList(), EQMoneyList__EQMoneyList);
#endif
#ifdef EQMoneyList__dEQMoneyList_x
FUNCTION_AT_ADDRESS(EQMoneyList::~EQMoneyList(), EQMoneyList__dEQMoneyList);
#endif
#ifdef EQMoneyList__get_money_x
FUNCTION_AT_ADDRESS(EQMoneyList*, EQMoneyList::get_money(long), EQMoneyList__get_money);
#endif

//============================================================================
// EQ_Note
//============================================================================

#ifdef EQ_Note__EQ_Note_x
FUNCTION_AT_ADDRESS(EQ_Note::EQ_Note(), EQ_Note__EQ_Note);
#endif
#ifdef EQ_Note__SendTextRequestMsg_x
FUNCTION_AT_ADDRESS(void, EQ_Note::SendTextRequestMsg(), EQ_Note__SendTextRequestMsg);
#endif

//============================================================================
// EQObject
//============================================================================

#ifdef EQObject__EQObject_x
FUNCTION_AT_ADDRESS(EQObject::EQObject(EQObject*, PlayerZoneClient*, char*, char*), EQObject__EQObject);
#endif
#ifdef EQObject__dEQObject_x
FUNCTION_AT_ADDRESS(EQObject::~EQObject(), EQObject__dEQObject);
#endif

//============================================================================
// EQPlacedItemManager
//============================================================================

#ifdef EQPlacedItemManager__Instance_x
FUNCTION_AT_ADDRESS(EQPlacedItemManager&, EQPlacedItemManager::Instance(), EQPlacedItemManager__Instance);
#endif
#ifdef EQPlacedItemManager__GetItemByGuid_x
FUNCTION_AT_ADDRESS(EQPlacedItem*, EQPlacedItemManager::GetItemByGuid(const EqItemGuid& ItemGuid), EQPlacedItemManager__GetItemByGuid);
#endif
#ifdef EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x
FUNCTION_AT_ADDRESS(EQPlacedItem*, EQPlacedItemManager::GetItemByRealEstateAndRealEstateItemIds(int RealEstateID, int RealEstateItemID), EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds);
#endif

//============================================================================
// EQPMInfo
//============================================================================

#ifdef EQPMInfo__SetApplyGravity_x
FUNCTION_AT_ADDRESS(void, EQPMInfo::SetApplyGravity(bool), EQPMInfo__SetApplyGravity);
#endif

//============================================================================
// EQ_Skill
//============================================================================

#ifdef EQ_Skill__EQ_Skill_x
FUNCTION_AT_ADDRESS(EQ_Skill::EQ_Skill(int), EQ_Skill__EQ_Skill);
#endif

//============================================================================
// EqSoundManager
//============================================================================

#ifdef EqSoundManager__dEqSoundManager_x
FUNCTION_AT_ADDRESS(EqSoundManager::~EqSoundManager(), EqSoundManager__dEqSoundManager);
#endif
#ifdef EqSoundManager__LoadGlobalEmitters_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::LoadGlobalEmitters(), EqSoundManager__LoadGlobalEmitters);
#endif
#ifdef EqSoundManager__GetMusicId_x
FUNCTION_AT_ADDRESS(int, EqSoundManager::GetMusicId(), EqSoundManager__GetMusicId);
#endif
#ifdef EqSoundManager__LoadGlobalWaves_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::LoadGlobalWaves(), EqSoundManager__LoadGlobalWaves);
#endif
#ifdef EqSoundManager__LoadListOfWaveFiles_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::LoadListOfWaveFiles(char**, int), EqSoundManager__LoadListOfWaveFiles);
#endif
#ifdef EqSoundManager__WaveLoad_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::WaveLoad(char*, int, bool), EqSoundManager__WaveLoad);
#endif
#ifdef EqSoundManager__WaveIsPlaying_x
FUNCTION_AT_ADDRESS(bool, EqSoundManager::WaveIsPlaying(int), EqSoundManager__WaveIsPlaying);
#endif
#ifdef EqSoundManager__WavePlay_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::WavePlay(int, SoundControl*), EqSoundManager__WavePlay);
#endif
#ifdef EqSoundManager__WaveStop_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::WaveStop(int), EqSoundManager__WaveStop);
#endif
#ifdef EqSoundManager__WaveGet_x
FUNCTION_AT_ADDRESS(SoundAsset*, EqSoundManager::WaveGet(int), EqSoundManager__WaveGet);
#endif
#ifdef EqSoundManager__LoadGlobalMusic_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::LoadGlobalMusic(), EqSoundManager__LoadGlobalMusic);
#endif
#ifdef EqSoundManager__SetMusicSelection_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetMusicSelection(int, bool), EqSoundManager__SetMusicSelection);
#endif
#ifdef EqSoundManager__GiveTime_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::GiveTime(), EqSoundManager__GiveTime);
#endif
#ifdef EqSoundManager__SetCurrentZone_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetCurrentZone(char*), EqSoundManager__SetCurrentZone);
#endif
#ifdef EqSoundManager__LoadOldEmitters_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::LoadOldEmitters(), EqSoundManager__LoadOldEmitters);
#endif
#ifdef EqSoundManager__GetAsset_x
FUNCTION_AT_ADDRESS(SoundAsset*, EqSoundManager::GetAsset(char*), EqSoundManager__GetAsset);
#endif
#ifdef EqSoundManager__ReleaseZoneSpecificMidi_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::ReleaseZoneSpecificMidi(), EqSoundManager__ReleaseZoneSpecificMidi);
#endif
#ifdef EqSoundManager__ReleaseZoneSpecificWaves_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::ReleaseZoneSpecificWaves(), EqSoundManager__ReleaseZoneSpecificWaves);
#endif
#ifdef EqSoundManager__ReleaseZoneSpecificEmitters_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::ReleaseZoneSpecificEmitters(), EqSoundManager__ReleaseZoneSpecificEmitters);
#endif
#ifdef EqSoundManager__SetEffectsLevel_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetEffectsLevel(float), EqSoundManager__SetEffectsLevel);
#endif
#ifdef EqSoundManager__SetMixAhead_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetMixAhead(int), EqSoundManager__SetMixAhead);
#endif
#ifdef EqSoundManager__SetWaveVolume_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetWaveVolume(float), EqSoundManager__SetWaveVolume);
#endif
#ifdef EqSoundManager__SetMusicVolume_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetMusicVolume(float), EqSoundManager__SetMusicVolume);
#endif
#ifdef EqSoundManager__SetListenerEnvironmentLow_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetListenerEnvironmentLow(), EqSoundManager__SetListenerEnvironmentLow);
#endif
#ifdef EqSoundManager__SetListenerEnvironmentHigh_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetListenerEnvironmentHigh(), EqSoundManager__SetListenerEnvironmentHigh);
#endif
#ifdef EqSoundManager__SetListenerEnvironmentOutside_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetListenerEnvironmentOutside(), EqSoundManager__SetListenerEnvironmentOutside);
#endif
#ifdef EqSoundManager__SetListenerLocation_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::SetListenerLocation(float, float, float, float), EqSoundManager__SetListenerLocation);
#endif
#ifdef EqSoundManager__EmitterSetRaining_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::EmitterSetRaining(bool), EqSoundManager__EmitterSetRaining);
#endif
#ifdef EqSoundManager__EmitterSetWind_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::EmitterSetWind(bool), EqSoundManager__EmitterSetWind);
#endif
#ifdef EqSoundManager__EmitterSetNight_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::EmitterSetNight(bool), EqSoundManager__EmitterSetNight);
#endif
#ifdef EqSoundManager__EmitterSetUserDisabled_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::EmitterSetUserDisabled(bool), EqSoundManager__EmitterSetUserDisabled);
#endif
#ifdef EqSoundManager__EmitterSetIndoors_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::EmitterSetIndoors(bool), EqSoundManager__EmitterSetIndoors);
#endif
#ifdef EqSoundManager__UpdateEmitterStates_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::UpdateEmitterStates(), EqSoundManager__UpdateEmitterStates);
#endif
#ifdef EqSoundManager__OldMp3ClearSelections_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::OldMp3ClearSelections(), EqSoundManager__OldMp3ClearSelections);
#endif
#ifdef EqSoundManager__OldMp3Init_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::OldMp3Init(), EqSoundManager__OldMp3Init);
#endif
#ifdef EqSoundManager__OldMp3Terminate_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::OldMp3Terminate(), EqSoundManager__OldMp3Terminate);
#endif
#ifdef EqSoundManager__OldMp3GetSelection_x
FUNCTION_AT_ADDRESS(SoundAsset*, EqSoundManager::OldMp3GetSelection(int), EqSoundManager__OldMp3GetSelection);
#endif
#ifdef EqSoundManager__PlayScriptMp3_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::PlayScriptMp3(char* Name, float Vol), EqSoundManager__PlayScriptMp3);
#endif
#ifdef EqSoundManager__EmitterLoad_x
FUNCTION_AT_ADDRESS(bool, EqSoundManager::EmitterLoad(char*), EqSoundManager__EmitterLoad);
#endif
#ifdef EqSoundManager__EmitterAdd_x
FUNCTION_AT_ADDRESS(void, EqSoundManager::EmitterAdd(EqEmitterData*), EqSoundManager__EmitterAdd);
#endif

//============================================================================
// EQSpellStrings
//============================================================================

#ifdef EQSpellStrings__GetString_x
FUNCTION_AT_ADDRESS(const char*, EQSpellStrings::GetString(int SpellID, int StrIndex), EQSpellStrings__GetString);
#endif

//============================================================================
// EQSwitch
//============================================================================

#ifdef EQSwitch__EQSwitch_x
FUNCTION_AT_ADDRESS(EQSwitch::EQSwitch(char*, bool), EQSwitch__EQSwitch);
#endif
#ifdef EQSwitch__EQSwitch1_x
FUNCTION_AT_ADDRESS(EQSwitch::EQSwitch(struct OldDiskSwitch*, bool), EQSwitch__EQSwitch1);
#endif
#ifdef EQSwitch__EQSwitch2_x
FUNCTION_AT_ADDRESS(EQSwitch::EQSwitch(struct _EQClientSwitch*), EQSwitch__EQSwitch2);
#endif
#ifdef EQSwitch__PreInit_x
FUNCTION_AT_ADDRESS(void, EQSwitch::PreInit(), EQSwitch__PreInit);
#endif
#ifdef EQSwitch__PostInit_x
FUNCTION_AT_ADDRESS(void, EQSwitch::PostInit(), EQSwitch__PostInit);
#endif
#ifdef EQSwitch__dEQSwitch_x
FUNCTION_AT_ADDRESS(EQSwitch::~EQSwitch(), EQSwitch__dEQSwitch);
#endif
#ifdef EQSwitch__ResetSwitchState_x
FUNCTION_AT_ADDRESS(void, EQSwitch::ResetSwitchState(unsigned char), EQSwitch__ResetSwitchState);
#endif
#ifdef EQSwitch__RepopSwitch_x
FUNCTION_AT_ADDRESS(void, EQSwitch::RepopSwitch(), EQSwitch__RepopSwitch);
#endif
#ifdef EQSwitch__TopSpeed_x
FUNCTION_AT_ADDRESS(float, EQSwitch::TopSpeed(float*), EQSwitch__TopSpeed);
#endif
#ifdef EQSwitch__RepopFrequency_x
FUNCTION_AT_ADDRESS(unsigned int, EQSwitch::RepopFrequency(), EQSwitch__RepopFrequency);
#endif
#ifdef EQSwitch__GetSwitchDamage_x
FUNCTION_AT_ADDRESS(int, EQSwitch::GetSwitchDamage(), EQSwitch__GetSwitchDamage);
#endif
#ifdef EQSwitch__ChangeState_x
FUNCTION_AT_ADDRESS(void, EQSwitch::ChangeState(unsigned char, PlayerClient*, bool), EQSwitch__ChangeState);
#endif
#ifdef EQSwitch__SwitchWasOpened_x
FUNCTION_AT_ADDRESS(unsigned char, EQSwitch::SwitchWasOpened(int, int, EQPlayer*, bool*), EQSwitch__SwitchWasOpened);
#endif
#ifdef EQSwitch__SwitchWasOpenedActual_x
FUNCTION_AT_ADDRESS(unsigned char, EQSwitch::SwitchWasOpenedActual(int, int, EQPlayer*, bool*), EQSwitch__SwitchWasOpenedActual);
#endif
#ifdef EQSwitch__SwitchIsNotUsable_x
FUNCTION_AT_ADDRESS(unsigned char, EQSwitch::SwitchIsNotUsable(int), EQSwitch__SwitchIsNotUsable);
#endif
#ifdef EQSwitch__UseSwitch_x
FUNCTION_AT_ADDRESS(void, EQSwitch::UseSwitch(UINT, int, int, const CVector3*), EQSwitch__UseSwitch);
#endif
#ifdef EQSwitch__LoadSwitchSounds_x
FUNCTION_AT_ADDRESS(void, EQSwitch::LoadSwitchSounds(int), EQSwitch__LoadSwitchSounds);
#endif
#ifdef EQSwitch__GetCustomMoveDistance_x
FUNCTION_AT_ADDRESS(float, EQSwitch::GetCustomMoveDistance(), EQSwitch__GetCustomMoveDistance);
#endif

//============================================================================
// EqSwitchManager
//============================================================================

#ifdef EqSwitchManager__GetCount_x
//FUNCTION_AT_ADDRESS(int, EqSwitchManager::GetCount(), EqSwitchManager__GetCount);
#endif
#ifdef EqSwitchManager__GetSwitchByActor_x
//FUNCTION_AT_ADDRESS(EQSwitch*, EqSwitchManager::GetSwitchByActor(struct T3D_tagACTORINSTANCE*), EqSwitchManager__GetSwitchByActor);
#endif
#ifdef EqSwitchManager__GetSwitch_x
//FUNCTION_AT_ADDRESS(EQSwitch*, EqSwitchManager::GetSwitch(int), EqSwitchManager__GetSwitch);
#endif
#ifdef EqSwitchManager__GetSwitchById_x
//FUNCTION_AT_ADDRESS(EQSwitch*, EqSwitchManager::GetSwitchById(int, bool), EqSwitchManager__GetSwitchById);
#endif

//============================================================================
// EQUtil
//============================================================================

#ifdef EQUtil__FormatCharName_x
FUNCTION_AT_ADDRESS(char* __cdecl, EQUtil::FormatCharName(char*, char*, int), EQUtil__FormatCharName);
#endif

//============================================================================
// EQWorldData
//============================================================================

#ifdef EQWorldData__EQWorldData_x
FUNCTION_AT_ADDRESS(EQWorldData::EQWorldData(), EQWorldData__EQWorldData);
#endif
#ifdef EQWorldData__AdvanceTime_x
FUNCTION_AT_ADDRESS(void, EQWorldData::AdvanceTime(unsigned int), EQWorldData__AdvanceTime);
#endif
#ifdef EQWorldData__CurrentGameTime_x
FUNCTION_AT_ADDRESS(void, EQWorldData::CurrentGameTime(char*), EQWorldData__CurrentGameTime);
#endif

bool EQWorldData::IsFlagSet(EQZoneIndex zoneId, uint64_t flag) const
{
	EQZoneInfo* zoneInfo = GetZone(zoneId);

	if (!zoneInfo)
		return false;

	return (zoneInfo->ZoneFlags & flag) != 0;;
}


//============================================================================
// FactionManagerClient
//============================================================================

#ifdef FactionManagerClient__Instance_x
FUNCTION_AT_ADDRESS(FactionManagerClient&, FactionManagerClient::Instance(), FactionManagerClient__Instance)
#endif
#ifdef FactionManagerClient__HandleFactionMessage_x
FUNCTION_AT_ADDRESS(void, FactionManagerClient::HandleFactionMessage(UINT MessageID, char* pData, unsigned int DataLength), FactionManagerClient__HandleFactionMessage)
#endif

//============================================================================
// IconCache
//============================================================================

#ifdef IconCache__IconCache_x
FUNCTION_AT_ADDRESS(IconCache::IconCache(), IconCache__IconCache);
#endif
#ifdef IconCache__dIconCache_x
FUNCTION_AT_ADDRESS(IconCache::~IconCache(), IconCache__dIconCache);
#endif
#ifdef IconCache__GetIcon_x
FUNCTION_AT_ADDRESS(CTextureAnimation*, IconCache::GetIcon(int), IconCache__GetIcon);
#endif

//============================================================================
// JournalNPC
//============================================================================

#ifdef JournalNPC__JournalNPC_x
FUNCTION_AT_ADDRESS(JournalNPC::JournalNPC(), JournalNPC__JournalNPC);
#endif
#ifdef JournalNPC__dJournalNPC_x
FUNCTION_AT_ADDRESS(JournalNPC::~JournalNPC(), JournalNPC__dJournalNPC);
#endif
#ifdef JournalNPC__AllocateArray_x
FUNCTION_AT_ADDRESS(void, JournalNPC::AllocateArray(), JournalNPC__AllocateArray);
#endif
#ifdef JournalNPC__CleanEntries_x
FUNCTION_AT_ADDRESS(void, JournalNPC::CleanEntries(), JournalNPC__CleanEntries);
#endif
#ifdef JournalNPC__GetText_x
FUNCTION_AT_ADDRESS(char* __cdecl, JournalNPC::GetText(int), JournalNPC__GetText);
#endif
#ifdef JournalNPC__GetEntry_x
FUNCTION_AT_ADDRESS(JournalEntry*, JournalNPC::GetEntry(int), JournalNPC__GetEntry);
#endif
#ifdef JournalNPC__FindEntryByHash_x
FUNCTION_AT_ADDRESS(JournalEntry*, JournalNPC::FindEntryByHash(int), JournalNPC__FindEntryByHash);
#endif
#ifdef JournalNPC__FindEntryByCategory_x
FUNCTION_AT_ADDRESS(JournalEntry*, JournalNPC::FindEntryByCategory(int, int), JournalNPC__FindEntryByCategory);
#endif
#ifdef JournalNPC__FindThisText_x
FUNCTION_AT_ADDRESS(int, JournalNPC::FindThisText(char*, bool, int), JournalNPC__FindThisText);
#endif
#ifdef JournalNPC__AddEntry_x
FUNCTION_AT_ADDRESS(int, JournalNPC::AddEntry(long, float, float, float, int, int), JournalNPC__AddEntry);
#endif
#ifdef JournalNPC__AddEntry1_x
FUNCTION_AT_ADDRESS(int, JournalNPC::AddEntry(long, float, float, float, char*, int), JournalNPC__AddEntry1);
#endif
#ifdef JournalNPC__DeleteEntryByIndex_x
FUNCTION_AT_ADDRESS(int, JournalNPC::DeleteEntryByIndex(int), JournalNPC__DeleteEntryByIndex);
#endif
#ifdef JournalNPC__DeleteEntryByHash_x
FUNCTION_AT_ADDRESS(int, JournalNPC::DeleteEntryByHash(int), JournalNPC__DeleteEntryByHash);
#endif
#ifdef JournalNPC__ConvertCategory_x
FUNCTION_AT_ADDRESS(void, JournalNPC::ConvertCategory(int, int), JournalNPC__ConvertCategory);
#endif
#ifdef JournalNPC__ComputeLatestTime_x
FUNCTION_AT_ADDRESS(void, JournalNPC::ComputeLatestTime(), JournalNPC__ComputeLatestTime);
#endif

//============================================================================
// KeyCombo
//============================================================================

#ifdef KeyCombo__KeyCombo_x
FUNCTION_AT_ADDRESS(KeyCombo::KeyCombo(), KeyCombo__KeyCombo);
#endif
#ifdef KeyCombo__KeyCombo1_x
FUNCTION_AT_ADDRESS(KeyCombo::KeyCombo(unsigned char, bool, bool, bool), KeyCombo__KeyCombo1);
#endif
#ifdef KeyCombo__KeyCombo2_x
FUNCTION_AT_ADDRESS(KeyCombo::KeyCombo(int), KeyCombo__KeyCombo2);
#endif
#ifdef KeyCombo__KeyCombo3_x
FUNCTION_AT_ADDRESS(KeyCombo::KeyCombo(unsigned int, unsigned int, bool, bool, bool), KeyCombo__KeyCombo3);
#endif
#ifdef KeyCombo__GetKey_x
FUNCTION_AT_ADDRESS(unsigned int, KeyCombo::GetKey() const, KeyCombo__GetKey);
#endif
#ifdef KeyCombo__UsesCtrl_x
FUNCTION_AT_ADDRESS(bool, KeyCombo::UsesCtrl() const, KeyCombo__UsesCtrl);
#endif
#ifdef KeyCombo__UsesShift_x
FUNCTION_AT_ADDRESS(bool, KeyCombo::UsesShift() const, KeyCombo__UsesShift);
#endif
#ifdef KeyCombo__UsesAlt_x
FUNCTION_AT_ADDRESS(bool, KeyCombo::UsesAlt() const, KeyCombo__UsesAlt);
#endif
#ifdef KeyCombo__GetPrintableLetter_x
FUNCTION_AT_ADDRESS(bool, KeyCombo::GetPrintableLetter(unsigned short*) const, KeyCombo__GetPrintableLetter);
#endif
#ifdef KeyCombo__operator_equal_equal_x
FUNCTION_AT_ADDRESS(int, KeyCombo::operator==(const KeyCombo&) const, KeyCombo__operator_equal_equal);
#endif
#ifdef KeyCombo__operator_equal_x
FUNCTION_AT_ADDRESS(const KeyCombo&, KeyCombo::operator=(int), KeyCombo__operator_equal);
#endif
#ifdef KeyCombo__operator_int_x
//FUNCTION_AT_ADDRESS(KeyCombo::operator, int() const, KeyCombo__operator_int);
#endif
#ifdef KeyCombo__GetVirtualKeyFromScanCode_x
FUNCTION_AT_ADDRESS(bool, KeyCombo::GetVirtualKeyFromScanCode(unsigned char, int*) const, KeyCombo__GetVirtualKeyFromScanCode);
#endif
#ifdef KeyCombo__GetPrintableLetterFromScanCode_x
FUNCTION_AT_ADDRESS(bool, KeyCombo::GetPrintableLetterFromScanCode(unsigned char, bool, bool, unsigned short*) const, KeyCombo__GetPrintableLetterFromScanCode);
#endif
#ifdef KeyCombo__GetScanCodeFromVirtualKey_x
FUNCTION_AT_ADDRESS(bool, KeyCombo::GetScanCodeFromVirtualKey(unsigned int, unsigned int, unsigned char*) const, KeyCombo__GetScanCodeFromVirtualKey);
#endif
#ifdef KeyCombo__GetPrintableLetterFromVirtualKey_x
FUNCTION_AT_ADDRESS(bool, KeyCombo::GetPrintableLetterFromVirtualKey(unsigned int, unsigned int, bool, bool, unsigned short*) const, KeyCombo__GetPrintableLetterFromVirtualKey);
#endif

//============================================================================
// KeypressHandler
//============================================================================

#ifdef KeypressHandler__KeypressHandler_x
FUNCTION_AT_ADDRESS(KeypressHandler::KeypressHandler(), KeypressHandler__KeypressHandler);
#endif
#ifdef KeypressHandler__AttachKeyToEqCommand_x
FUNCTION_AT_ADDRESS(bool, KeypressHandler::AttachKeyToEqCommand(const KeyCombo&, unsigned int), KeypressHandler__AttachKeyToEqCommand);
#endif
#ifdef KeypressHandler__AttachAltKeyToEqCommand_x
FUNCTION_AT_ADDRESS(bool, KeypressHandler::AttachAltKeyToEqCommand(const KeyCombo&, unsigned int), KeypressHandler__AttachAltKeyToEqCommand);
#endif
#ifdef KeypressHandler__HandleKeyDown_x
FUNCTION_AT_ADDRESS(bool, KeypressHandler::HandleKeyDown(const KeyCombo&), KeypressHandler__HandleKeyDown);
#endif
#ifdef KeypressHandler__HandleKeyUp_x
FUNCTION_AT_ADDRESS(bool, KeypressHandler::HandleKeyUp(const KeyCombo&), KeypressHandler__HandleKeyUp);
#endif
#ifdef KeypressHandler__Get_x
FUNCTION_AT_ADDRESS(KeypressHandler&, KeypressHandler::Get(), KeypressHandler__Get);
#endif
#ifdef KeypressHandler__GetKeyAttachedToEqCommand_x
FUNCTION_AT_ADDRESS(const KeyCombo&, KeypressHandler::GetKeyAttachedToEqCommand(unsigned int) const, KeypressHandler__GetKeyAttachedToEqCommand);
#endif
#ifdef KeypressHandler__GetAltKeyAttachedToEqCommand_x
FUNCTION_AT_ADDRESS(const KeyCombo&, KeypressHandler::GetAltKeyAttachedToEqCommand(unsigned int) const, KeypressHandler__GetAltKeyAttachedToEqCommand);
#endif
#ifdef KeypressHandler__ResetKeysToEqDefaults_x
FUNCTION_AT_ADDRESS(void, KeypressHandler::ResetKeysToEqDefaults(), KeypressHandler__ResetKeysToEqDefaults);
#endif
#ifdef KeypressHandler__MapKeyToEqCommand_x
FUNCTION_AT_ADDRESS(bool, KeypressHandler::MapKeyToEqCommand(const KeyCombo&, int, unsigned int), KeypressHandler__MapKeyToEqCommand);
#endif
#ifdef KeypressHandler__IsReservedKey_x
FUNCTION_AT_ADDRESS(bool, KeypressHandler::IsReservedKey(const KeyCombo&) const, KeypressHandler__IsReservedKey);
#endif
#ifdef KeypressHandler__LoadAndSetKeymappings_x
FUNCTION_AT_ADDRESS(void, KeypressHandler::LoadAndSetKeymappings(), KeypressHandler__LoadAndSetKeymappings);
#endif
#ifdef KeypressHandler__LoadKeymapping_x
FUNCTION_AT_ADDRESS(bool, KeypressHandler::LoadKeymapping(unsigned int, int, KeyCombo*), KeypressHandler__LoadKeymapping);
#endif
#ifdef KeypressHandler__SaveKeymapping_x
FUNCTION_AT_ADDRESS(void, KeypressHandler::SaveKeymapping(unsigned int, KeyCombo const&, int), KeypressHandler__SaveKeymapping);
#endif
#ifdef KeypressHandler__GetEqCommandSaveName_x
FUNCTION_AT_ADDRESS(CXStr, KeypressHandler::GetEqCommandSaveName(unsigned int, int) const, KeypressHandler__GetEqCommandSaveName);
#endif
#ifdef KeypressHandler__LoadAndConvertOldKeymappingFormat_x
FUNCTION_AT_ADDRESS(bool, KeypressHandler::LoadAndConvertOldKeymappingFormat(unsigned int, int, KeyCombo*), KeypressHandler__LoadAndConvertOldKeymappingFormat);
#endif
#ifdef KeypressHandler__ClearCommandStateArray_x
FUNCTION_AT_ADDRESS(void, KeypressHandler::ClearCommandStateArray(), KeypressHandler__ClearCommandStateArray);
#endif

//============================================================================
// LootFiltersManager
//============================================================================

#ifdef LootFiltersManager__AddItemLootFilter_x
FUNCTION_AT_ADDRESS(bool, LootFiltersManager::AddItemLootFilter(int, int, const char*, int, bool), LootFiltersManager__AddItemLootFilter);
#endif
#ifdef LootFiltersManager__GetItemFilterData_x
FUNCTION_AT_ADDRESS(const ItemFilterData*, LootFiltersManager::GetItemFilterData(int), LootFiltersManager__GetItemFilterData);
#endif
#ifdef LootFiltersManager__RemoveItemLootFilter_x
FUNCTION_AT_ADDRESS(bool, LootFiltersManager::RemoveItemLootFilter(int, int), LootFiltersManager__RemoveItemLootFilter);
#endif
#ifdef LootFiltersManager__SetItemLootFilter_x
FUNCTION_AT_ADDRESS(bool, LootFiltersManager::SetItemLootFilter(int, int, const char*, int, bool, bool), LootFiltersManager__SetItemLootFilter);
#endif

//============================================================================
// MercenaryAlternateAdvancementManagerClient
//============================================================================

const char* MercenaryAbilitiesData::GetNameString() const
{
	return pDBStr->GetString(nName, eMercenaryAbilityName);
}

const char* MercenaryAbilitiesData::GetDescriptionString() const
{
	return pDBStr->GetString(nDesc, eMercenaryAbilityDescription);
}

const char* MercenaryAbilitiesData::GetTypeString() const
{
	return pDBStr->GetString(Type, eMercenaryAbilityType);
}

bool MercenaryAbilitiesData::IsRequirementsMet() const
{
	if (!pLocalPC)
		return false;

	auto& mgr = MercenaryAlternateAdvancementManagerClient::Instance();

	for (int i = 0; i < AbilityReqs.GetCount(); ++i)
	{
		const MercenaryAbilityReq& req = AbilityReqs[i];

		if (!IsRequirementMet(req))
			return false;
	}

	return true;
}

bool MercenaryAbilitiesData::IsRequirementMet(const MercenaryAbilityReq& req) const
{
	if (!pLocalPC)
		return false;

	auto& mgr = MercenaryAlternateAdvancementManagerClient::Instance();

	const int* entry = mgr.GetFirstMercenaryAbilityIdByGroupId(req.ReqGroupID);
	while (entry)
	{
		const MercenaryAbilitiesData* mercAbility = mgr.GetMercenaryAbility(*entry);
		// is this an ability that satisfies the requirement?
		if (mercAbility && mercAbility->GroupRank >= req.ReqGroupRank)
		{
			// do we own this ability?
			if (pLocalPC->GetMercenaryAbilityInfo(mercAbility->AbilityID) != nullptr)
				return true;
		}

		entry = mgr.GetNextMercenaryAbilityIdByGroupId(entry);
	}

	// if we didn't find anything then the requirements aren't met.
	return false;
}

//----------------------------------------------------------------------------
const MercenaryAbilitiesData* MercenaryAlternateAdvancementManagerClient::GetMercenaryAbility(int abilityId) const
{
	return MercenaryAbilities.FindFirst(abilityId);
}

const int* MercenaryAlternateAdvancementManagerClient::GetFirstMercenaryAbilityIdByGroupId(int groupId) const
{
	return MercenaryAbilitiesByGroupID.FindFirst(groupId);
}

const int* MercenaryAlternateAdvancementManagerClient::GetNextMercenaryAbilityIdByGroupId(const int* abilityId) const
{
	return MercenaryAbilitiesByGroupID.FindNext(abilityId);
}

int MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank(int abilityId) const
{
	if (MercenaryAbilitiesData* data = MercenaryAbilities.FindFirst(abilityId))
	{
		if (MercenaryAbilityGroup* group = MercenaryAbilityGroups.FindFirst(data->GroupID))
		{
			return (int)group->size();
		}
	}

	return 0;
}

int MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank(int abilityId) const
{
	if (MercenaryAbilitiesData* data = MercenaryAbilities.FindFirst(abilityId))
	{
		if (int* ownedAbilityId = MercenaryAbilitiesOwnedByGroupID.FindFirst(data->GroupID))
		{
			if (MercenaryAbilitiesData* ownedData = MercenaryAbilities.FindFirst(*ownedAbilityId))
			{
				return ownedData->GroupRank;
			}
		}
	}

	return 0;
}

int MercenaryAlternateAdvancementManagerClient::GetMercenaryNextGroupAbility(int abilityId) const
{
	if (MercenaryAbilitiesData* ability = MercenaryAbilities.FindFirst(abilityId))
	{
		if (MercenaryAbilityGroup* group = MercenaryAbilityGroups.FindFirst(ability->GroupID))
		{
			if (int* nextAbility = group->FindFirst(ability->GroupRank + 1))
				return *nextAbility;
		}
	}

	return 0;
}

const MercenaryAbilitiesData* MercenaryAlternateAdvancementManagerClient::GetFirstUnownedAbilityByGroupId(int groupId) const
{
	MercenaryAbilityGroup* group = MercenaryAbilityGroups.FindFirst(groupId);
	if (!group)
		return nullptr;

	const MercenaryAbilitiesData* ownedAbility = nullptr;
	const MercenaryAbilitiesData* unOwnedAbility = nullptr;

	int maxRanks = (int)group->size();
	int curRank = 0;

	if (int* ownedAbilityId = MercenaryAbilitiesOwnedByGroupID.FindFirst(groupId))
	{
		if (ownedAbility = GetMercenaryAbility(*ownedAbilityId))
			curRank = ownedAbility->GroupRank;
	}

	if (!ownedAbility)
	{
		// no owned ability. Need to find the first one.
		const int* pAbilityId = group->GetFirst();
		while (pAbilityId)
		{
			if (const MercenaryAbilitiesData* pAbility = GetMercenaryAbility(*pAbilityId))
			{
				if (pAbility->GroupRank == 1)
				{
					unOwnedAbility = pAbility;
					break;
				}
			}

			pAbilityId = group->GetNext(pAbilityId);
		}
	}
	else if (curRank < maxRanks)
	{
		// we own an ability. the next one is unowned.
		if (int unownedAbilityId = GetMercenaryNextGroupAbility(ownedAbility->AbilityID))
			unOwnedAbility = GetMercenaryAbility(unownedAbilityId);
	}

	return unOwnedAbility;
}

bool MercenaryAlternateAdvancementManagerClient::CanTrainAbility(int abilityId) const
{
	if (pLocalPC == nullptr)
		return false;
	// already purchased?
	if (pLocalPC->GetMercenaryAbilityInfo(abilityId) != nullptr)
		return false;

	if (const MercenaryAbilitiesData* pAbility = GetMercenaryAbility(abilityId))
	{
		// Player requirements met?
		if (pLocalPC->MercAAPoints >= pAbility->Cost
			&& pLocalPC->GetCurrentPcProfile()->Level >= pAbility->MinPlayerLevel)
		{
			// Ability requirements met?
			if (pAbility->IsRequirementsMet())
				return true;
		}
	}

	return false;
}

FUNCTION_AT_ADDRESS(MercenaryAlternateAdvancementManagerClient&, MercenaryAlternateAdvancementManagerClient::Instance(), MercenaryAlternateAdvancementManagerClient__Instance);
FUNCTION_AT_ADDRESS(void, MercenaryAlternateAdvancementManagerClient::BuyAbility(int abilityId, bool trainAll, bool unk), MercenaryAlternateAdvancementManagerClient__BuyAbility);

//============================================================================
// Mp3Manager
//============================================================================

#ifdef Mp3Manager__Mp3Manager_x
FUNCTION_AT_ADDRESS(Mp3Manager::Mp3Manager(SoundManager*, MusicManager*), Mp3Manager__Mp3Manager);
#endif
#ifdef Mp3Manager__dMp3Manager_x
FUNCTION_AT_ADDRESS(Mp3Manager::~Mp3Manager(), Mp3Manager__dMp3Manager);
#endif
#ifdef Mp3Manager__Stop_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::Stop(), Mp3Manager__Stop);
#endif
#ifdef Mp3Manager__Play_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::Play(), Mp3Manager__Play);
#endif
#ifdef Mp3Manager__Pause_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::Pause(), Mp3Manager__Pause);
#endif
#ifdef Mp3Manager__GiveTime_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::GiveTime(), Mp3Manager__GiveTime);
#endif
#ifdef Mp3Manager__Next_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::Next(), Mp3Manager__Next);
#endif
#ifdef Mp3Manager__Back_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::Back(), Mp3Manager__Back);
#endif
#ifdef Mp3Manager__GetSongLength_x
FUNCTION_AT_ADDRESS(int, Mp3Manager::GetSongLength(), Mp3Manager__GetSongLength);
#endif
#ifdef Mp3Manager__GetSongPosition_x
FUNCTION_AT_ADDRESS(int, Mp3Manager::GetSongPosition(), Mp3Manager__GetSongPosition);
#endif
#ifdef Mp3Manager__SetSongPosition_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::SetSongPosition(int), Mp3Manager__SetSongPosition);
#endif
#ifdef Mp3Manager__GetName_x
FUNCTION_AT_ADDRESS(char*, Mp3Manager::GetName(int), Mp3Manager__GetName);
#endif
#ifdef Mp3Manager__Count_x
FUNCTION_AT_ADDRESS(int, Mp3Manager::Count(), Mp3Manager__Count);
#endif
#ifdef Mp3Manager__SetPosition_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::SetPosition(int), Mp3Manager__SetPosition);
#endif
#ifdef Mp3Manager__SetVolumeLevel_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::SetVolumeLevel(float), Mp3Manager__SetVolumeLevel);
#endif
#ifdef Mp3Manager__GetVolumeLevel_x
FUNCTION_AT_ADDRESS(float, Mp3Manager::GetVolumeLevel(), Mp3Manager__GetVolumeLevel);
#endif
#ifdef Mp3Manager__DeleteAll_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::DeleteAll(), Mp3Manager__DeleteAll);
#endif
#ifdef Mp3Manager__Delete_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::Delete(int), Mp3Manager__Delete);
#endif
#ifdef Mp3Manager__SaveList_x
FUNCTION_AT_ADDRESS(void, Mp3Manager::SaveList(char*), Mp3Manager__SaveList);
#endif
#ifdef Mp3Manager__Add_x
FUNCTION_AT_ADDRESS(int, Mp3Manager::Add(char*), Mp3Manager__Add);
#endif
#ifdef Mp3Manager__InternalAdd_x
FUNCTION_AT_ADDRESS(int, Mp3Manager::InternalAdd(char*, char*, int), Mp3Manager__InternalAdd);
#endif
#ifdef Mp3Manager__GetPosition_x
FUNCTION_AT_ADDRESS(int, Mp3Manager::GetPosition(), Mp3Manager__GetPosition);
#endif

//============================================================================
// MusicManager
//============================================================================

#ifdef MusicManager__MusicManager_x
FUNCTION_AT_ADDRESS(MusicManager::MusicManager(), MusicManager__MusicManager);
#endif
#ifdef MusicManager__dMusicManager_x
FUNCTION_AT_ADDRESS(MusicManager::~MusicManager(), MusicManager__dMusicManager);
#endif
#ifdef MusicManager__GiveTime_x
FUNCTION_AT_ADDRESS(void, MusicManager::GiveTime(), MusicManager__GiveTime);
#endif
#ifdef MusicManager__Clear_x
FUNCTION_AT_ADDRESS(void, MusicManager::Clear(SoundAsset*), MusicManager__Clear);
#endif
#ifdef MusicManager__SetVolumeLevel_x
FUNCTION_AT_ADDRESS(void, MusicManager::SetVolumeLevel(float), MusicManager__SetVolumeLevel);
#endif
#ifdef MusicManager__Clear1_x
FUNCTION_AT_ADDRESS(void, MusicManager::Clear(int), MusicManager__Clear1);
#endif
#ifdef MusicManager__Set_x
FUNCTION_AT_ADDRESS(void, MusicManager::Set(int, SoundAsset*, int, float, int, int, int, int, int, int), MusicManager__Set);
#endif
#ifdef MusicManager__Play_x
FUNCTION_AT_ADDRESS(void, MusicManager::Play(int), MusicManager__Play);
#endif
#ifdef MusicManager__Stop_x
FUNCTION_AT_ADDRESS(void, MusicManager::Stop(int), MusicManager__Stop);
#endif
#ifdef MusicManager__Enable_x
FUNCTION_AT_ADDRESS(void, MusicManager::Enable(bool), MusicManager__Enable);
#endif

//============================================================================
// PlayerPointManager
//============================================================================

#ifdef PlayerPointManager__GetAltCurrency_x
FUNCTION_AT_ADDRESS(unsigned long, CPlayerPointManager::GetAltCurrency(unsigned long, unsigned long), PlayerPointManager__GetAltCurrency);
#endif

//============================================================================
// RealEstateManagerClient
//============================================================================

FUNCTION_AT_ADDRESS(RealEstateManagerClient&, RealEstateManagerClient::Instance(), RealEstateManagerClient__Instance)

const char* RealEstateTypeToString(RealEstateType type)
{
	switch (type)
	{
	case RealEstateType_None: return "None";
	case RealEstateType_Zone: return "Zone";
	case RealEstateType_GuildHall: return "GuildHall";
	case RealEstateType_PlayerHousing: return "PlayerHousing";
	case RealEstateType_PlayerPlot: return "PlayerPlot";
	case RealEstateType_Neighborhood: return "Neighborhood";
	case RealEstateType_Town: return "Town";
	case RealEstateType_MovingCrate: return "MovingCrate";
	case RealEstateType_GuildPlot: return "GuildPlot";
	case RealEstateType_Any: return "Any";

	case RealEstateType_Unknown:
	default:
		return "Unknown";
	}
}

const char* RealEstateSuperTypeToString(RealEstateSuperType type)
{
	switch (type)
	{
	case RealEstateSuperType_None: return "None";
	case RealEstateSuperType_Zone: return "Zone";
	case RealEstateSuperType_House: return "House";
	case RealEstateSuperType_Plot: return "Plot";
	case RealEstateSuperType_Neighborhood: return "Neighborhood";
	case RealEstateSuperType_Town: return "Town";
	case RealEstateSuperType_MovingCrate: return "MovingCrate";
	case RealEstateSuperType_Any: return "Any";

	case RealEstateSuperType_Unknown:
	default:
		return "Unknown";
	}
}

RealEstateSuperType RealEstateTypeToSuperType(RealEstateType type)
{
	switch (type)
	{
	case RealEstateType_GuildHall:
	case RealEstateType_PlayerHousing:
		return RealEstateSuperType_House;

	case RealEstateType_PlayerPlot:
	case RealEstateType_GuildPlot:
		return RealEstateSuperType_Plot;

	case RealEstateType_Zone: return RealEstateSuperType_Zone;
	case RealEstateType_Neighborhood: return RealEstateSuperType_Neighborhood;
	case RealEstateType_Town: return RealEstateSuperType_Town;
	case RealEstateType_MovingCrate: return RealEstateSuperType_MovingCrate;
	case RealEstateType_Unknown: return RealEstateSuperType_Unknown;
	case RealEstateType_Any: return RealEstateSuperType_Any;
	default: return RealEstateSuperType_None;
	}
}

RealEstateTypeFlag RealEstateTypeToFlags(RealEstateType type)
{
	switch (type)
	{
	case RealEstateType_None: return RealEstateTypeFlag_None;
	case RealEstateType_Zone: return RealEstateTypeFlag_Zone;
	case RealEstateType_GuildHall: return RealEstateTypeFlag_GuildHall;
	case RealEstateType_PlayerHousing: return RealEstateTypeFlag_PlayerHousing;
	case RealEstateType_PlayerPlot: return RealEstateTypeFlag_PlayerPlot;
	case RealEstateType_Neighborhood: return RealEstateTypeFlag_Neighborhood;
	case RealEstateType_Town: return RealEstateTypeFlag_Town;
	case RealEstateType_MovingCrate: return RealEstateTypeFlag_MovingCrate;
	case RealEstateType_GuildPlot: return RealEstateTypeFlag_GuildPlot;
	case RealEstateType_Unknown: return RealEstateTypeFlag_Unknown;
	case RealEstateType_Any: return RealEstateTypeFlag_Any;
	default: return RealEstateTypeFlag_None;
	}
}

RealEstateTypeFlag RealEstateSuperTypeToFlags(RealEstateSuperType type)
{
	switch (type)
	{
	case RealEstateSuperType_None: return RealEstateTypeFlag_None;
	case RealEstateSuperType_Zone: return RealEstateTypeFlag_Zone;
	case RealEstateSuperType_House: return static_cast<RealEstateTypeFlag>(RealEstateTypeFlag_GuildHall | RealEstateTypeFlag_PlayerHousing);
	case RealEstateSuperType_Plot: return static_cast<RealEstateTypeFlag>(RealEstateTypeFlag_PlayerPlot | RealEstateTypeFlag_GuildPlot);
	case RealEstateSuperType_Neighborhood: return RealEstateTypeFlag_Neighborhood;
	case RealEstateSuperType_Town: return RealEstateTypeFlag_Town;
	case RealEstateSuperType_MovingCrate: return RealEstateTypeFlag_MovingCrate;
	case RealEstateSuperType_Unknown: return RealEstateTypeFlag_Unknown;
	case RealEstateSuperType_Any: return RealEstateTypeFlag_Any;
	default: return RealEstateTypeFlag_None;
	}
}

const char* RealEstateAccessCategoryToString(RealEstateAccessCategories category)
{
	switch (category)
	{
	case RealEstateAccessCategory_All: return "All";
	case RealEstateAccessCategory_Individuals: return "Individuals";
	case RealEstateAccessCategory_Groups: return "Groups";
	case RealEstateAccessCategory_PermissionsGroupTotals: return "PermissionsGroupTotals";
	case RealEstateAccessCategory_PermissionsGroup: return "PermissionsGroup";
	default: return "Unknown";
	}
}

const char* RealEstateAccessGroupToString(RealEstateAccessGroups group)
{
	switch (group)
	{
	case RealEstateAccess_Everyone: return "Everyone";
	case RealEstateAccess_Visitor: return "Visitor";
	case RealEstateAccess_Acquaintance: return "Acquaintance";
	case RealEstateAccess_Friend: return "Friend";
	case RealEstateAccess_Trustee: return "Trustee";
	case RealEstateAccess_CoOwner: return "Co-Owner";
	case RealEstateAccess_Owner: return "Owner";
	default: return "Unknown";
	}
}

const char* RealEstateCapabilityToString(RealEstateCapabilities capability)
{
	switch (capability)
	{
	case RealEstateCapability_ReceiveBuffs: return "ReceiveBuffs";
	case RealEstateCapability_Enter: return "Enter";
	case RealEstateCapability_WithdrawUpkeep: return "WithdrawUpkeep";
	case RealEstateCapability_RemoveCrate: return "RemoveCrate";
	case RealEstateCapability_AddCrate: return "AddCrate";
	case RealEstateCapability_RemoveHouse: return "RemoveHouse";
	case RealEstateCapability_AddHouse: return "AddHouse";
	case RealEstateCapability_MailItem: return "MailItem";
	case RealEstateCapability_RemoveItem: return "RemoveItem";
	case RealEstateCapability_AddItem: return "AddItem";
	case RealEstateCapability_MoveItem: return "MoveItem";
	case RealEstateCapability_InteractItem: return "InteractItem";
	case RealEstateCapability_Manage: return "Manage";
	default: return "Unknown";
	}
}

//----------------------------------------------------------------------------

const RealEstate* RealEstateManager::GetRealEstate(int realEstateId) const
{
	RealEstate** realEstate = realEstates.FindFirst(realEstateId);
	return realEstate ? *realEstate : nullptr;
}

const RealEstateAccess* RealEstateManager::GetRealEstateAccess(int realEstateId) const
{
	RealEstateAccess** access = accessLists.FindFirst(realEstateId);
	return access ? *access : nullptr;
}

const RealEstateItems* RealEstateManager::GetRealEstateItems(int realEstateId) const
{
	RealEstateItems** items = itemLists.FindFirst(realEstateId);
	return items ? *items : nullptr;
}

const RealEstateItem* RealEstateManagerClient::GetItemByRealEstateAndItemIds(int realEstateID, int realEstateItemID) const
{
	if (const RealEstateItems* items = GetRealEstateItems(realEstateID))
	{
		return items->GetItem(realEstateItemID);
	}

	return nullptr;
}

//============================================================================
// SoundManager
//============================================================================

#ifdef SoundManager__dSoundManager_x
FUNCTION_AT_ADDRESS(SoundManager::~SoundManager(), SoundManager__dSoundManager);
#endif
#ifdef SoundManager__GiveTime_x
FUNCTION_AT_ADDRESS(void, SoundManager::GiveTime(), SoundManager__GiveTime);
#endif
#ifdef SoundManager__SetMixAhead_x
FUNCTION_AT_ADDRESS(void, SoundManager::SetMixAhead(int), SoundManager__SetMixAhead);
#endif
#ifdef SoundManager__SetListenerLocation_x
FUNCTION_AT_ADDRESS(void, SoundManager::SetListenerLocation(float, float, float, float), SoundManager__SetListenerLocation);
#endif
#ifdef SoundManager__GetListenerLocation_x
FUNCTION_AT_ADDRESS(void, SoundManager::GetListenerLocation(float*, float*, float*, float*), SoundManager__GetListenerLocation);
#endif
#ifdef SoundManager__ReturnInstance_x
FUNCTION_AT_ADDRESS(void, SoundManager::ReturnInstance(SoundInstance*), SoundManager__ReturnInstance);
#endif
#ifdef SoundManager__AssetGiveTime_x
FUNCTION_AT_ADDRESS(void, SoundManager::AssetGiveTime(), SoundManager__AssetGiveTime);
#endif
#ifdef SoundManager__AssetAdd_x
FUNCTION_AT_ADDRESS(void, SoundManager::AssetAdd(SoundAsset*), SoundManager__AssetAdd);
#endif
#ifdef SoundManager__AssetRemove_x
FUNCTION_AT_ADDRESS(void, SoundManager::AssetRemove(SoundAsset*), SoundManager__AssetRemove);
#endif
#ifdef SoundManager__AssetGet_x
FUNCTION_AT_ADDRESS(SoundAsset*, SoundManager::AssetGet(char*), SoundManager__AssetGet);
#endif
#ifdef SoundManager__StreamingPlay_x
FUNCTION_AT_ADDRESS(void, SoundManager::StreamingPlay(char*), SoundManager__StreamingPlay);
#endif
#ifdef SoundManager__StreamingPause_x
FUNCTION_AT_ADDRESS(void, SoundManager::StreamingPause(), SoundManager__StreamingPause);
#endif
#ifdef SoundManager__StreamingStop_x
FUNCTION_AT_ADDRESS(void, SoundManager::StreamingStop(), SoundManager__StreamingStop);
#endif
#ifdef SoundManager__StreamingSetVolumeLevel_x
FUNCTION_AT_ADDRESS(void, SoundManager::StreamingSetVolumeLevel(float), SoundManager__StreamingSetVolumeLevel);
#endif
#ifdef SoundManager__StreamingGetVolumeLevel_x
FUNCTION_AT_ADDRESS(float, SoundManager::StreamingGetVolumeLevel(), SoundManager__StreamingGetVolumeLevel);
#endif
#ifdef SoundManager__StreamingSetSongPosition_x
FUNCTION_AT_ADDRESS(void, SoundManager::StreamingSetSongPosition(int), SoundManager__StreamingSetSongPosition);
#endif
#ifdef SoundManager__StreamingGetSongPosition_x
FUNCTION_AT_ADDRESS(int, SoundManager::StreamingGetSongPosition(), SoundManager__StreamingGetSongPosition);
#endif
#ifdef SoundManager__StreamingGetSongLength_x
FUNCTION_AT_ADDRESS(int, SoundManager::StreamingGetSongLength(), SoundManager__StreamingGetSongLength);
#endif

//============================================================================
// SpellManager
//============================================================================

#ifdef SpellManager__GetSpellByGroupAndRank_x
FUNCTION_AT_ADDRESS(const EQ_Spell*, SpellManager::GetSpellByGroupAndRank(int Group, int SubGroup, int Rank, bool bLesserRanksOk), SpellManager__GetSpellByGroupAndRank);
#endif

//============================================================================
// StringTable
//============================================================================

#ifdef StringTable__getString_x
FUNCTION_AT_ADDRESS(const char*, StringTable::getString(uint32_t, bool*), StringTable__getString);
#endif

//============================================================================
// Util
//============================================================================

#ifdef Util__GetNextToken_x
FUNCTION_AT_ADDRESS(int __cdecl, Util::GetNextToken(char*, int*, char*), Util__GetNextToken);
#endif
#ifdef Util__GetNextToken1_x
FUNCTION_AT_ADDRESS(int __cdecl, Util::GetNextToken(char*, short*, char*), Util__GetNextToken1);
#endif
#ifdef Util__GetNextToken2_x
FUNCTION_AT_ADDRESS(int __cdecl, Util::GetNextToken(char*, char*, char*), Util__GetNextToken2);
#endif
#ifdef Util__GetNextToken3_x
FUNCTION_AT_ADDRESS(int __cdecl, Util::GetNextToken(char*, unsigned char*, char*), Util__GetNextToken3);
#endif
#ifdef Util__AllocateString_x
FUNCTION_AT_ADDRESS(char* __cdecl, Util::AllocateString(char*), Util__AllocateString);
#endif

//============================================================================
// WaveInstance
//============================================================================

#ifdef WaveInstance__WaveInstance_x
FUNCTION_AT_ADDRESS(WaveInstance::WaveInstance(SoundManager*), WaveInstance__WaveInstance);
#endif

//============================================================================
// Wave3dInstance
//============================================================================

#ifdef Wave3dInstance__Wave3dInstance_x
FUNCTION_AT_ADDRESS(Wave3dInstance::Wave3dInstance(SoundManager*), Wave3dInstance__Wave3dInstance);
#endif

//============================================================================
//============================================================================

#pragma warning(pop)

} // namespace eqlib

#if __has_include("../private/EQClasses-private.cpp")
#include "../private/EQClasses-private.cpp"
#endif
