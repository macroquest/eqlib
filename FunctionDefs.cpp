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

#include "CXWnd.h"
#include "PlayerClient.h"
#include "EverQuest.h"

#include "EQClasses.h"
#include "AltAbilities.h"
#include "RealEstate.h"

#include "EQLib.h"

namespace eqlib {

//============================================================================
// Function Addresses: CXWnd
//============================================================================

//----------------------------------------------------------------------------
// CXWnd
//----------------------------------------------------------------------------

#ifdef CXWnd__IsType_x
FUNCTION_AT_ADDRESS(bool, CXWnd::IsType(enum EWndRuntimeType) const, CXWnd__IsType);
#endif
#ifdef CXWnd__SetFocus_x
FUNCTION_AT_ADDRESS(CXWnd*, CXWnd::SetFocus(), CXWnd__SetFocus);
#endif
#ifdef CXWnd__ClrFocus_x
FUNCTION_AT_ADDRESS(void, CXWnd::ClrFocus(), CXWnd__ClrFocus);
#endif
#ifdef CXWnd__Destroy_x
FUNCTION_AT_ADDRESS(int, CXWnd::Destroy(), CXWnd__Destroy);
#endif
#ifdef CXWnd__Refade_x
FUNCTION_AT_ADDRESS(void, CXWnd::Refade(), CXWnd__Refade);
#endif
#ifdef CXWnd__ProcessTransition_x
FUNCTION_AT_ADDRESS(int, CXWnd::ProcessTransition(), CXWnd__ProcessTransition);
#endif
#ifdef CXWnd__BringToTop_x
FUNCTION_AT_ADDRESS(void, CXWnd::BringToTop(bool), CXWnd__BringToTop);
#endif
#ifdef CXWnd__StartFade_x
FUNCTION_AT_ADDRESS(void, CXWnd::StartFade(unsigned char, uint32_t), CXWnd__StartFade);
#endif
#ifdef CXWnd__Minimize_x
FUNCTION_AT_ADDRESS(int, CXWnd::Minimize(bool), CXWnd__Minimize);
#endif
#ifdef CXWnd__IsReallyVisible_x
FUNCTION_AT_ADDRESS(bool, CXWnd::IsReallyVisible() const, CXWnd__IsReallyVisible);
#endif
#ifdef CXWnd__DoAllDrawing_x
FUNCTION_AT_ADDRESS(int, CXWnd::DoAllDrawing() const, CXWnd__DoAllDrawing);
#endif
//#ifdef CXWnd__DrawChildren_x
//FUNCTION_AT_ADDRESS(int, CXWnd::DrawChildren() const, CXWnd__DrawChildren);
//#endif
#ifdef CXWnd__Center_x
FUNCTION_AT_ADDRESS(void, CXWnd::Center(), CXWnd__Center);
#endif
#ifdef CXWnd__Right_x
FUNCTION_AT_ADDRESS(void, CXWnd::Right(), CXWnd__Right);
#endif
#ifdef CXWnd__GetScreenClipRect_x
FUNCTION_AT_ADDRESS(CXRect, CXWnd::GetScreenClipRect() const, CXWnd__GetScreenClipRect);
#endif
#ifdef CXWnd__IsDescendantOf_x
FUNCTION_AT_ADDRESS(bool, CXWnd::IsDescendantOf(CXWnd const*) const, CXWnd__IsDescendantOf);
#endif
//#ifdef CXWnd__GetBorderFrame_x
//FUNCTION_AT_ADDRESS(CTAFrameDraw const*, CXWnd::GetBorderFrame() const, CXWnd__GetBorderFrame);
//#endif
#ifdef CXWnd__GetScreenRect_x
FUNCTION_AT_ADDRESS(CXRect, CXWnd::GetScreenRect() const, CXWnd__GetScreenRect);
#endif
#ifdef CXWnd__Resize_x
FUNCTION_AT_ADDRESS(int, CXWnd::Resize(int, int, bool, bool, bool), CXWnd__Resize);
#endif
#ifdef CXWnd__SetParent_x
FUNCTION_AT_ADDRESS(CXWnd*, CXWnd::SetParent(CXWnd*), CXWnd__SetParent);
#endif
#ifdef CXWnd__SetMouseOver_x
FUNCTION_AT_ADDRESS(void, CXWnd::SetMouseOver(bool), CXWnd__SetMouseOver);
#endif
#ifdef CXWnd__SetKeyTooltip_x
FUNCTION_AT_ADDRESS(void, CXWnd::SetKeyTooltip(int, int), CXWnd__SetKeyTooltip);
#endif
#ifdef CXWnd__SetFont_x
FUNCTION_AT_ADDRESS(int, CXWnd::SetFont(CTextureFont*), CXWnd__SetFont);
#endif

//----------------------------------------------------------------------------
// CSidlScreenWnd
//----------------------------------------------------------------------------

#ifdef CSidlScreenWnd__Init_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::Init(CXWnd*, uint32_t, const CXRect&, const CXStr&, int, char*), CSidlScreenWnd__Init);
#endif
#ifdef CSidlScreenWnd__Init1_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::Init(int, const CXStr&, int, int, int), CSidlScreenWnd__Init1);
#endif
#ifdef CSidlScreenWnd__SetScreen_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::SetScreen(CXStr*), CSidlScreenWnd__SetScreen);
#endif
#ifdef CSidlScreenWnd__LoadSidlScreen_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::LoadSidlScreen(), CSidlScreenWnd__LoadSidlScreen);
#endif
#ifdef CSidlScreenWnd__CalculateVSBRange_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::CalculateVSBRange(), CSidlScreenWnd__CalculateVSBRange);
#endif
#ifdef CSidlScreenWnd__CalculateHSBRange_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::CalculateHSBRange(), CSidlScreenWnd__CalculateHSBRange);
#endif
#ifdef CSidlScreenWnd__DrawSidlPiece_x
FUNCTION_AT_ADDRESS(int, CSidlScreenWnd::DrawSidlPiece(CScreenPieceTemplate*, const CXRect&, const CXRect&) const, CSidlScreenWnd__DrawSidlPiece);
#endif
#ifdef CSidlScreenWnd__GetSidlPieceRect_x
FUNCTION_AT_ADDRESS(CXRect, CSidlScreenWnd::GetSidlPieceRect(CScreenPieceTemplate*, const CXRect&) const, CSidlScreenWnd__GetSidlPieceRect);
#endif
#ifdef CSidlScreenWnd__AddButtonToRadioGroup_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::AddButtonToRadioGroup(CXStr, CButtonWnd*), CSidlScreenWnd__AddButtonToRadioGroup);
#endif
#ifdef CSidlScreenWnd__CreateChildrenFromSidl_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::CreateChildrenFromSidl(), CSidlScreenWnd__CreateChildrenFromSidl);
#endif
#ifdef CSidlScreenWnd__StoreIniVis_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::StoreIniVis(), CSidlScreenWnd__StoreIniVis);
#endif
#ifdef CSidlScreenWnd__EnableIniStorage_x
FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::EnableIniStorage(int, char*), CSidlScreenWnd__EnableIniStorage);
#endif
//#ifdef CSidlScreenWnd__StoreIniInfo_x
//FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::StoreIniInfo(void), CSidlScreenWnd__StoreIniInfo);
//#endif
//#ifdef CSidlScreenWnd__LoadIniInfo_x
//FUNCTION_AT_ADDRESS(void, CSidlScreenWnd::LoadIniInfo(void), CSidlScreenWnd__LoadIniInfo);
//#endif
#ifdef CSidlScreenWnd__ConvertToRes_x
FUNCTION_AT_ADDRESS(int, CSidlScreenWnd::ConvertToRes(int, int, int, int), CSidlScreenWnd__ConvertToRes);
#endif
#ifdef CSidlScreenWnd__GetChildItem_x
//FUNCTION_AT_ADDRESS(CXWnd*, CSidlScreenWnd::GetChildItem(const CXStr&, bool bDebug), CSidlScreenWnd__GetChildItem);
#endif

//----------------------------------------------------------------------------
// CXWndManager
//----------------------------------------------------------------------------

#ifdef CXWndManager__DrawWindows_x
FUNCTION_AT_ADDRESS(int, CXWndManager::DrawWindows() const, CXWndManager__DrawWindows);
#endif
#ifdef CXWndManager__DrawCursor_x
FUNCTION_AT_ADDRESS(int, CXWndManager::DrawCursor() const, CXWndManager__DrawCursor);
#endif
#ifdef CXWndManager__RemoveWnd_x
FUNCTION_AT_ADDRESS(int, CXWndManager::RemoveWnd(CXWnd*), CXWndManager__RemoveWnd);
#endif
#ifdef CXWndManager__GetKeyboardFlags_x
FUNCTION_AT_ADDRESS(uint32_t, CXWndManager::GetKeyboardFlags() const, CXWndManager__GetKeyboardFlags);
#endif
#ifdef CXWndManager__HandleKeyboardMsg_x
FUNCTION_AT_ADDRESS(int, CXWndManager::HandleKeyboardMsg(uint32_t, bool), CXWndManager__HandleKeyboardMsg);
#endif

//============================================================================
// Function Addresses: EQClasses
//============================================================================

//----------------------------------------------------------------------------
// AchievementManager
//----------------------------------------------------------------------------

FUNCTION_AT_ADDRESS(AchievementManager&, AchievementManager::Instance(), AchievementManager__Instance);

//----------------------------------------------------------------------------
// AggroMeterManagerClient
//----------------------------------------------------------------------------

#ifdef AggroMeterManagerClient__Instance_x
FUNCTION_AT_ADDRESS(AggroMeterManagerClient&, AggroMeterManagerClient::Instance(), AggroMeterManagerClient__Instance);
#endif

//----------------------------------------------------------------------------
// AltAdvManager
//----------------------------------------------------------------------------

#ifdef AltAdvManager__GetAAById_x
FUNCTION_AT_ADDRESS(CAltAbilityData*, AltAdvManager::GetAAById(int), AltAdvManager__GetAAById);
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

//----------------------------------------------------------------------------
// CAltAbilityData
//----------------------------------------------------------------------------

// These two are MercenaryAlternateAdvancementManagerClient
#ifdef CAltAbilityData__GetMercCurrentRank_x
//FUNCTION_AT_ADDRESS(int, CAltAbilityData::GetMercCurrentRank(int), CAltAbilityData__GetMercCurrentRank);
#endif
#ifdef CAltAbilityData__GetMercMaxRank_x
//FUNCTION_AT_ADDRESS(int, CAltAbilityData::GetMercMaxRank(int), CAltAbilityData__GetMercMaxRank);
#endif

//----------------------------------------------------------------------------
// CBroadcast
//----------------------------------------------------------------------------

#ifdef CBroadcast__Get_x
FUNCTION_AT_ADDRESS(CBroadcast*, CBroadcast::Get(), CBroadcast__Get);
#endif

//----------------------------------------------------------------------------
// CChatService
//----------------------------------------------------------------------------

#ifdef CChatService__GetNumberOfFriends_x
FUNCTION_AT_ADDRESS(int, UniversalChatProxy::GetNumberOfFriends(), CChatService__GetNumberOfFriends);
#endif
#ifdef CChatService__GetFriendName_x
FUNCTION_AT_ADDRESS(const char*, UniversalChatProxy::GetFriendName(int), CChatService__GetFriendName);
#endif

//----------------------------------------------------------------------------
// CDBStr
//----------------------------------------------------------------------------

#ifdef CDBStr__GetString_x
FUNCTION_AT_ADDRESS(const char*, CDBStr::GetString(int, eDatabaseStringType type, bool*), CDBStr__GetString); // GetString(index, subindex, &success)
#endif

//----------------------------------------------------------------------------
// CDistillerInfo
//----------------------------------------------------------------------------
#ifdef CDistillerInfo__Instance_x

#ifdef CDistillerInfo__GetIDFromRecordNum_x
FUNCTION_AT_ADDRESS(int, CDistillerInfo::GetIDFromRecordNum(int ID, bool bWhat), CDistillerInfo__GetIDFromRecordNum);
#endif
#ifdef CDistillerInfo__Instance_x
FUNCTION_AT_ADDRESS(CDistillerInfo&, CDistillerInfo::Instance(), CDistillerInfo__Instance);
#endif

#endif // def CDistillerInfo__Instance_x

//----------------------------------------------------------------------------
// CGuild
//----------------------------------------------------------------------------

#ifdef CGuild__GetGuildMotd_x
FUNCTION_AT_ADDRESS(char*, CGuild::GetGuildMotd(), CGuild__GetGuildMotd);
#endif
#ifdef CGuild__GetGuildMotdAuthor_x
FUNCTION_AT_ADDRESS(char*, CGuild::GetGuildMotdAuthor(), CGuild__GetGuildMotdAuthor);
#endif
#ifdef CGuild__GetGuildName_x
FUNCTION_AT_ADDRESS(const char*, CGuild::GetGuildName(int) const, CGuild__GetGuildName);
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
#ifdef CGuild__GetGuildIndex_x
FUNCTION_AT_ADDRESS(int, CGuild::GetGuildIndex(const char* name), CGuild__GetGuildIndex);
#endif

//----------------------------------------------------------------------------
// ChatManagerClient
//----------------------------------------------------------------------------

#ifdef ChatManagerClient__Instance_x
FUNCTION_AT_ADDRESS(ChatManagerClient&, ChatManagerClient::Instance(), ChatManagerClient__Instance);
#endif

//----------------------------------------------------------------------------
// ClientSOIManager
//----------------------------------------------------------------------------

#ifdef ClientSOIManager__GetSingleton_x
FUNCTION_AT_ADDRESS(ClientAuraManager*, ClientAuraManager::GetSingleton(), ClientSOIManager__GetSingleton);
#endif

//----------------------------------------------------------------------------
// ConversationJournal
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// CRaid
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// CResolutionHandler
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// CSkillMgr
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// CTargetManager
//----------------------------------------------------------------------------

#ifdef CTargetManager__Get_x
FUNCTION_AT_ADDRESS(CTargetManager*, CTargetManager::Get(), CTargetManager__Get);
#endif

//----------------------------------------------------------------------------
// FreeTargetTracker
//----------------------------------------------------------------------------

#ifdef FreeTargetTracker__CastSpell_x
FUNCTION_AT_ADDRESS(int, FreeTargetTracker::CastSpell(const CVector3&), FreeTargetTracker__CastSpell);
#endif

//----------------------------------------------------------------------------
// CTaskManager
//----------------------------------------------------------------------------

#ifdef CTaskManager__GetEntry_x
FUNCTION_AT_ADDRESS(CTaskEntry*, CTaskManager::GetEntry(int Index, int System, bool bCheckEmpty), CTaskManager__GetEntry);
#endif
#ifdef CTaskManager__GetTaskStatus_x
FUNCTION_AT_ADDRESS(PCTaskStatus*, CTaskManager::GetTaskStatus(PcClient* pMe, int Index, TaskSystemType System),CTaskManager__GetTaskStatus);
#endif
#ifdef CTaskManager__GetElementDescription_x
FUNCTION_AT_ADDRESS(void, CTaskManager::GetElementDescription(const CTaskElement* pElement, char* Out),CTaskManager__GetElementDescription);
#endif

//----------------------------------------------------------------------------
// CTextOverlay
//----------------------------------------------------------------------------

#ifdef CTextOverlay__DisplayText_x
//this is really:
//MQLIB_OBJECT void CBroadcast::BroadcastString(const char* Str, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime);
FUNCTION_AT_ADDRESS(void, CBroadcast::DisplayText(const char* Str, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime), CTextOverlay__DisplayText);
#endif

//----------------------------------------------------------------------------
// EmitterManager
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// EQ_Container
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// EQ_LoadingS
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// EQEffect
//----------------------------------------------------------------------------

#ifdef EQEffect__EQEffect_x
FUNCTION_AT_ADDRESS(EQEffect::EQEffect(EQEffect*, char*, int, EQLOC*, PlayerZoneClient*, EQMissile*, EQRGB*, float, int, int, float, float), EQEffect__EQEffect);
#endif
#ifdef EQEffect__dEQEffect_x
FUNCTION_AT_ADDRESS(EQEffect::~EQEffect(), EQEffect__dEQEffect);
#endif

//----------------------------------------------------------------------------
// EqEmitterData
//----------------------------------------------------------------------------

#ifdef EqEmitterData__EqEmitterData_x
FUNCTION_AT_ADDRESS(EqEmitterData::EqEmitterData(), EqEmitterData__EqEmitterData);
#endif
#ifdef EqEmitterData__SetLoadString_x
FUNCTION_AT_ADDRESS(void, EqEmitterData::SetLoadString(char*), EqEmitterData__SetLoadString);
#endif

//----------------------------------------------------------------------------
// EQGroundItemListManager
//----------------------------------------------------------------------------

#ifdef EQGroundItemListManager__Instance_x
FUNCTION_AT_ADDRESS(EQGroundItemListManager&, EQGroundItemListManager::Instance(), EQGroundItemListManager__Instance);
#endif

//----------------------------------------------------------------------------
// EQItemList
//----------------------------------------------------------------------------

#ifdef EQItemList__dEQItemList_x
FUNCTION_AT_ADDRESS(EQItemList::~EQItemList(), EQItemList__dEQItemList);
#endif
#ifdef EQItemList__get_item_x
FUNCTION_AT_ADDRESS(EQItemList*, EQItemList::get_item(long), EQItemList__get_item);
#endif
#ifdef EQItemList__is_item_actor_x
FUNCTION_AT_ADDRESS(EQItemList*, EQItemList::is_item_actor(struct T3D_tagACTORINSTANCE*), EQItemList__is_item_actor);
#endif

//----------------------------------------------------------------------------
// CTribute
//----------------------------------------------------------------------------

#ifdef CTribute__GetActiveFavorCost_x
FUNCTION_AT_ADDRESS(int, CTribute::GetActiveFavorCost(), CTribute__GetActiveFavorCost);
#endif

//----------------------------------------------------------------------------
// EQMissile
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// EqMobileEmitter
//----------------------------------------------------------------------------

#ifdef EqMobileEmitter__Move_x
FUNCTION_AT_ADDRESS(void, EqMobileEmitter::Move(float, float, float), EqMobileEmitter__Move);
#endif
#ifdef EqMobileEmitter__SetWave_x
FUNCTION_AT_ADDRESS(void, EqMobileEmitter::SetWave(int, char*), EqMobileEmitter__SetWave);
#endif
#ifdef EqMobileEmitter__SetNpcHeight_x
FUNCTION_AT_ADDRESS(void, EqMobileEmitter::SetNpcHeight(float), EqMobileEmitter__SetNpcHeight);
#endif

//----------------------------------------------------------------------------
// EQMoneyList
//----------------------------------------------------------------------------

#ifdef EQMoneyList__EQMoneyList_x
FUNCTION_AT_ADDRESS(EQMoneyList::EQMoneyList(), EQMoneyList__EQMoneyList);
#endif
#ifdef EQMoneyList__dEQMoneyList_x
FUNCTION_AT_ADDRESS(EQMoneyList::~EQMoneyList(), EQMoneyList__dEQMoneyList);
#endif
#ifdef EQMoneyList__get_money_x
FUNCTION_AT_ADDRESS(EQMoneyList*, EQMoneyList::get_money(long), EQMoneyList__get_money);
#endif

//----------------------------------------------------------------------------
// EQ_Note
//----------------------------------------------------------------------------

#ifdef EQ_Note__EQ_Note_x
FUNCTION_AT_ADDRESS(EQ_Note::EQ_Note(), EQ_Note__EQ_Note);
#endif
#ifdef EQ_Note__SendTextRequestMsg_x
FUNCTION_AT_ADDRESS(void, EQ_Note::SendTextRequestMsg(), EQ_Note__SendTextRequestMsg);
#endif

//----------------------------------------------------------------------------
// EQObject
//----------------------------------------------------------------------------

#ifdef EQObject__EQObject_x
FUNCTION_AT_ADDRESS(EQObject::EQObject(EQObject*, PlayerZoneClient*, char*, char*), EQObject__EQObject);
#endif
#ifdef EQObject__dEQObject_x
FUNCTION_AT_ADDRESS(EQObject::~EQObject(), EQObject__dEQObject);
#endif

//----------------------------------------------------------------------------
// EQPlacedItemManager
//----------------------------------------------------------------------------

#ifdef EQPlacedItemManager__Instance_x
FUNCTION_AT_ADDRESS(EQPlacedItemManager&, EQPlacedItemManager::Instance(), EQPlacedItemManager__Instance);
#endif
#ifdef EQPlacedItemManager__GetItemByGuid_x
FUNCTION_AT_ADDRESS(EQPlacedItem*, EQPlacedItemManager::GetItemByGuid(const EqItemGuid& ItemGuid), EQPlacedItemManager__GetItemByGuid);
#endif
#ifdef EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x
FUNCTION_AT_ADDRESS(EQPlacedItem*, EQPlacedItemManager::GetItemByRealEstateAndRealEstateItemIds(int RealEstateID, int RealEstateItemID), EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds);
#endif

//----------------------------------------------------------------------------
// EQPMInfo
//----------------------------------------------------------------------------

#ifdef EQPMInfo__SetApplyGravity_x
FUNCTION_AT_ADDRESS(void, EQPMInfo::SetApplyGravity(bool), EQPMInfo__SetApplyGravity);
#endif

//----------------------------------------------------------------------------
// EQ_Skill
//----------------------------------------------------------------------------

#ifdef EQ_Skill__EQ_Skill_x
FUNCTION_AT_ADDRESS(EQ_Skill::EQ_Skill(int), EQ_Skill__EQ_Skill);
#endif

//----------------------------------------------------------------------------
// EqSoundManager
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// EQSpellStrings
//----------------------------------------------------------------------------

#ifdef EQSpellStrings__GetString_x
FUNCTION_AT_ADDRESS(const char*, EQSpellStrings::GetString(int SpellID, int StrIndex), EQSpellStrings__GetString);
#endif

//----------------------------------------------------------------------------
// EQSwitch
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// EqSwitchManager
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// EQUtil
//----------------------------------------------------------------------------

#ifdef EQUtil__FormatCharName_x
FUNCTION_AT_ADDRESS(char* __cdecl, EQUtil::FormatCharName(char*, char*, int), EQUtil__FormatCharName);
#endif

//----------------------------------------------------------------------------
// EQWorldData
//----------------------------------------------------------------------------

#ifdef EQWorldData__EQWorldData_x
FUNCTION_AT_ADDRESS(EQWorldData::EQWorldData(), EQWorldData__EQWorldData);
#endif
#ifdef EQWorldData__AdvanceTime_x
FUNCTION_AT_ADDRESS(void, EQWorldData::AdvanceTime(unsigned int), EQWorldData__AdvanceTime);
#endif
#ifdef EQWorldData__CurrentGameTime_x
FUNCTION_AT_ADDRESS(void, EQWorldData::CurrentGameTime(char*), EQWorldData__CurrentGameTime);
#endif

//----------------------------------------------------------------------------
// FactionManagerClient
//----------------------------------------------------------------------------

#ifdef FactionManagerClient__Instance_x
FUNCTION_AT_ADDRESS(FactionManagerClient&, FactionManagerClient::Instance(), FactionManagerClient__Instance)
#endif
#ifdef FactionManagerClient__HandleFactionMessage_x
FUNCTION_AT_ADDRESS(void, FactionManagerClient::HandleFactionMessage(UINT MessageID, char* pData, unsigned int DataLength), FactionManagerClient__HandleFactionMessage)
#endif

//----------------------------------------------------------------------------
// IconCache
//----------------------------------------------------------------------------

#ifdef IconCache__IconCache_x
FUNCTION_AT_ADDRESS(IconCache::IconCache(), IconCache__IconCache);
#endif
#ifdef IconCache__dIconCache_x
FUNCTION_AT_ADDRESS(IconCache::~IconCache(), IconCache__dIconCache);
#endif
#ifdef IconCache__GetIcon_x
FUNCTION_AT_ADDRESS(CTextureAnimation*, IconCache::GetIcon(int), IconCache__GetIcon);
#endif

//----------------------------------------------------------------------------
// JournalNPC
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// KeyCombo
//----------------------------------------------------------------------------

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

#if defined(KeyCombo__GetTextDescription_x) && !defined(_M_AMD64)
FUNCTION_AT_ADDRESS(CXStr, KeyCombo::GetTextDescription() const, KeyCombo__GetTextDescription);
#endif

//----------------------------------------------------------------------------
// KeypressHandler
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// LootFiltersManager
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// MercenaryAlternateAdvancementManagerClient
//----------------------------------------------------------------------------

#if HAS_MERCENARY_AA
FUNCTION_AT_ADDRESS(MercenaryAlternateAdvancementManagerClient&, MercenaryAlternateAdvancementManagerClient::Instance(), MercenaryAlternateAdvancementManagerClient__Instance);
FUNCTION_AT_ADDRESS(void, MercenaryAlternateAdvancementManagerClient::BuyAbility(int abilityId, bool trainAll, bool unk), MercenaryAlternateAdvancementManagerClient__BuyAbility);
#endif // HAS_MERCENARY_AA

//----------------------------------------------------------------------------
// Mp3Manager
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// MusicManager
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// PlayerPointManager
//----------------------------------------------------------------------------

#ifdef PlayerPointManager__GetAltCurrency_x
FUNCTION_AT_ADDRESS(unsigned long, CPlayerPointManager::GetAltCurrency(unsigned long, unsigned long), PlayerPointManager__GetAltCurrency);
#endif

//----------------------------------------------------------------------------
// RealEstateManagerClient
//----------------------------------------------------------------------------

FUNCTION_AT_ADDRESS(RealEstateManagerClient&, RealEstateManagerClient::Instance(), RealEstateManagerClient__Instance)

//----------------------------------------------------------------------------
// SoundManager
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// SpellManager
//----------------------------------------------------------------------------

#ifdef SpellManager__GetSpellByGroupAndRank_x
FUNCTION_AT_ADDRESS(const EQ_Spell*, SpellManager::GetSpellByGroupAndRank(int Group, int SubGroup, int Rank, bool bLesserRanksOk), SpellManager__GetSpellByGroupAndRank);
#endif

//----------------------------------------------------------------------------
// StringTable
//----------------------------------------------------------------------------

#ifdef StringTable__getString_x
FUNCTION_AT_ADDRESS(const char*, StringTable::getString(uint32_t, bool*), StringTable__getString);
#endif

//----------------------------------------------------------------------------
// Util
//----------------------------------------------------------------------------

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

//----------------------------------------------------------------------------
// WaveInstance
//----------------------------------------------------------------------------

#ifdef WaveInstance__WaveInstance_x
FUNCTION_AT_ADDRESS(WaveInstance::WaveInstance(SoundManager*), WaveInstance__WaveInstance);
#endif

//----------------------------------------------------------------------------
// Wave3dInstance
//----------------------------------------------------------------------------

#ifdef Wave3dInstance__Wave3dInstance_x
FUNCTION_AT_ADDRESS(Wave3dInstance::Wave3dInstance(SoundManager*), Wave3dInstance__Wave3dInstance);
#endif

//============================================================================
// Function Addresses: EQLib
//============================================================================

/* OTHER FUNCTIONS IMPORTED FROM EQ */
#ifdef __CastRay_x
FUNCTION_AT_ADDRESS(int, CastRay(PlayerClient*, float y, float x, float z), __CastRay);
#endif
#ifdef __CastRay2_x
FUNCTION_AT_ADDRESS(int, CastRayLoc(const CVector3& SourcePos, EQRace Race, float DestX, float DestY, float DestZ), __CastRay2);
#endif
#ifdef __HeadingDiff_x
FUNCTION_AT_ADDRESS(float, HeadingDiff(float h1, float h2, float* DiffOut), __HeadingDiff);
#endif
#ifdef __FixHeading_x
FUNCTION_AT_ADDRESS(float, FixHeading(float Heading), __FixHeading);
#endif
#ifdef __get_bearing_x
FUNCTION_AT_ADDRESS(float, get_bearing(float x1, float y1, float x2, float y2), __get_bearing)
#endif
#ifdef Util__FastTime_x
FUNCTION_AT_ADDRESS(unsigned long, GetFastTime(), Util__FastTime);
#endif
#ifdef __EQGetTime_x
FUNCTION_AT_ADDRESS(DWORD, EQGetTime(), __EQGetTime);
#endif
#ifdef __msg_successful_hit_x
FUNCTION_AT_ADDRESS(void, msg_successful_hit(struct _EQSuccessfulHit*), __msg_successful_hit);
#endif
#ifdef __GetAnimationCache_x
FUNCTION_AT_ADDRESS(IconCache*, GetAnimationCache(int index), __GetAnimationCache);
#endif
#ifdef __SaveColors_x
FUNCTION_AT_ADDRESS(void, SaveColors(int, int, int, int), __SaveColors);
#endif
#ifdef __ExecuteCmd_x
FUNCTION_AT_ADDRESS(bool, EQExecuteCmd(unsigned int command, bool keyDown, void* data, const KeyCombo* combo), __ExecuteCmd);
#endif
#ifdef __FlushDxKeyboard_x
FUNCTION_AT_ADDRESS(void, FlushDxKeyboard(), __FlushDxKeyboard);
#endif
#ifdef __CopyLayout_x
FUNCTION_AT_ADDRESS(bool, CopyLayout(const CXStr& currlayout, const CXStr& newlayout, bool bHotbuttons, bool bLoadouts, bool bSocials, CXStr& ErrorOut, bool bForceReload), __CopyLayout);
#endif

FUNCTION_AT_ADDRESS(uint32_t, GetBufferCRC(const char* szBuffer, size_t bufferLength, int baseValue), __MemChecker1);

//============================================================================
// Function Addresses: EverQuest
//============================================================================

//----------------------------------------------------------------------------
// CEverQuest
//----------------------------------------------------------------------------

#ifdef CEverQuest__InitCommands_x
FUNCTION_AT_ADDRESS(void, CEverQuest::InitCommands(), CEverQuest__InitCommands);
#endif
#ifdef CEverQuest__msgStartIcon_x
FUNCTION_AT_ADDRESS(int, CEverQuest::msgStartIcon(void*), CEverQuest__msgStartIcon);
#endif
#ifdef CEverQuest__msgStartInotes_x
FUNCTION_AT_ADDRESS(int, CEverQuest::msgStartInotes(void*), CEverQuest__msgStartInotes);
#endif
#ifdef CEverQuest__msgStartIeq_x
FUNCTION_AT_ADDRESS(int, CEverQuest::msgStartIeq(void*), CEverQuest__msgStartIeq);
#endif
#ifdef CEverQuest__HandleItems_x
FUNCTION_AT_ADDRESS(int, CEverQuest::HandleItems(void*, int), CEverQuest__HandleItems);
#endif
#ifdef CEverQuest__HandleWorldMessage_x
FUNCTION_AT_ADDRESS(unsigned char, CEverQuest::HandleWorldMessage(struct connection_t*, uint32_t, char*, uint32_t), CEverQuest__HandleWorldMessage);
#endif
#ifdef CEverQuest__ChatServerGiveTime_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ChatServerGiveTime(), CEverQuest__ChatServerGiveTime);
#endif
#ifdef CEverQuest__ChatServerNotificationAdd_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ChatServerNotificationAdd(bool, char*, char*, int), CEverQuest__ChatServerNotificationAdd);
#endif
#ifdef CEverQuest__ChatServerNotificationFlush_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ChatServerNotificationFlush(), CEverQuest__ChatServerNotificationFlush);
#endif
#ifdef CEverQuest__ChatServerConnect_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ChatServerConnect(char*, int, char*, char*), CEverQuest__ChatServerConnect);
#endif
#ifdef CEverQuest__ChatServerMessage_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ChatServerMessage(char*), CEverQuest__ChatServerMessage);
#endif
#ifdef CEverQuest__ChatServerDisconnect_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ChatServerDisconnect(), CEverQuest__ChatServerDisconnect);
#endif
#ifdef CEverQuest__ResetVisionRGBs_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ResetVisionRGBs(), CEverQuest__ResetVisionRGBs);
#endif
#ifdef CEverQuest__GetMaxLightRadius_x
FUNCTION_AT_ADDRESS(float, CEverQuest::GetMaxLightRadius(), CEverQuest__GetMaxLightRadius);
#endif
#ifdef CEverQuest__LoadStringTables_x
FUNCTION_AT_ADDRESS(void, CEverQuest::LoadStringTables(), CEverQuest__LoadStringTables);
#endif
#ifdef CEverQuest__CEverQuest_x
FUNCTION_AT_ADDRESS(CEverQuest::CEverQuest(struct HWND__*), CEverQuest__CEverQuest);
#endif
#ifdef CEverQuest__dCEverQuest_x
FUNCTION_AT_ADDRESS(CEverQuest::~CEverQuest(), CEverQuest__dCEverQuest);
#endif
#ifdef CEverQuest__ProcessMBox_x
FUNCTION_AT_ADDRESS(int, CEverQuest::ProcessMBox(), CEverQuest__ProcessMBox);
#endif
#ifdef CEverQuest__UseCharge_x
FUNCTION_AT_ADDRESS(void, CEverQuest::UseCharge(unsigned long), CEverQuest__UseCharge);
#endif
#ifdef CEverQuest__LeaveGuildMaster_x
FUNCTION_AT_ADDRESS(void, CEverQuest::LeaveGuildMaster(), CEverQuest__LeaveGuildMaster);
#endif
#ifdef CEverQuest__LeaveBankMode_x
FUNCTION_AT_ADDRESS(void, CEverQuest::LeaveBankMode(bool), CEverQuest__LeaveBankMode);
#endif
#ifdef CEverQuest__ReportDeath_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ReportDeath(struct _EQPlayerDeath*), CEverQuest__ReportDeath);
#endif
#ifdef CEverQuest__SetDefaultDamageDescByRace_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SetDefaultDamageDescByRace(char*, int, unsigned char), CEverQuest__SetDefaultDamageDescByRace);
#endif
#ifdef CEverQuest__ReportSuccessfulHeal_x
FUNCTION_AT_ADDRESS(int, CEverQuest::ReportSuccessfulHeal(EQSuccessfulHeal*), CEverQuest__ReportSuccessfulHeal);
#endif
#ifdef CEverQuest__ReportSuccessfulHit_x
FUNCTION_AT_ADDRESS(bool, CEverQuest::ReportSuccessfulHit(EQSuccessfulHit*, bool, int), CEverQuest__ReportSuccessfulHit);
#endif
#ifdef CEverQuest__GetCombatSound_x
FUNCTION_AT_ADDRESS(int, CEverQuest::GetCombatSound(EQPlayer*, EQPlayer*), CEverQuest__GetCombatSound);
#endif
#ifdef CEverQuest__LocalDeath_x
FUNCTION_AT_ADDRESS(void, CEverQuest::LocalDeath(struct _EQPlayerDeath*, unsigned char), CEverQuest__LocalDeath);
#endif
#ifdef CEverQuest__PrepareLocalPCForRepop_x
FUNCTION_AT_ADDRESS(void, CEverQuest::PrepareLocalPCForRepop(), CEverQuest__PrepareLocalPCForRepop);
#endif
#ifdef CEverQuest__SavePCForce_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SavePCForce(int), CEverQuest__SavePCForce);
#endif
#ifdef CEverQuest__StartCasting_x
FUNCTION_AT_ADDRESS(void, CEverQuest::StartCasting(void*), CEverQuest__StartCasting);
#endif
#ifdef CEverQuest__Consider_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Consider(EQPlayer*, void*), CEverQuest__Consider);
#endif
#ifdef CEverQuest__GetClassDesc_x
FUNCTION_AT_ADDRESS(const char*, CEverQuest::GetClassDesc(EQClass), CEverQuest__GetClassDesc);
#endif
#ifdef CEverQuest__GetClassThreeLetterCode_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GetClassThreeLetterCode(EQClass), CEverQuest__GetClassThreeLetterCode);
#endif
#ifdef CEverQuest__GetItemClassDesc_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GetItemClassDesc(int), CEverQuest__GetItemClassDesc);
#endif
#ifdef CEverQuest__GetBodyTypeDesc_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GetBodyTypeDesc(int), CEverQuest__GetBodyTypeDesc);
#endif
#ifdef CEverQuest__GetLangDesc_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GetLangDesc(int), CEverQuest__GetLangDesc);
#endif
#ifdef CEverQuest__GetRaceDesc_x
FUNCTION_AT_ADDRESS(const char*, CEverQuest::GetRaceDesc(EQRace), CEverQuest__GetRaceDesc);
#endif
#ifdef CEverQuest__GetDeityDesc_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GetDeityDesc(int), CEverQuest__GetDeityDesc);
#endif
#ifdef CEverQuest__GuildInvite_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GuildInvite(char*, char*), CEverQuest__GuildInvite);
#endif
#ifdef CEverQuest__GuildRemove_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GuildRemove(char*), CEverQuest__GuildRemove);
#endif
#ifdef CEverQuest__GuildDelete_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GuildDelete(), CEverQuest__GuildDelete);
#endif
#ifdef CEverQuest__GuildStatus_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GuildStatus(char*), CEverQuest__GuildStatus);
#endif
#ifdef CEverQuest__GuildLeader_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GuildLeader(char*), CEverQuest__GuildLeader);
#endif
#ifdef CEverQuest__GuildSay_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GuildSay(char*), CEverQuest__GuildSay);
#endif
#ifdef CEverQuest__Who_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Who(char*), CEverQuest__Who);
#endif
#ifdef CEverQuest__GetInnateDesc_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GetInnateDesc(int), CEverQuest__GetInnateDesc);
#endif
#ifdef CEverQuest__InviteOk_x
FUNCTION_AT_ADDRESS(void, CEverQuest::InviteOk(char*), CEverQuest__InviteOk);
#endif
#ifdef CEverQuest__doUnInvite_x
FUNCTION_AT_ADDRESS(void, CEverQuest::doUnInvite(char*), CEverQuest__doUnInvite);
#endif
#ifdef CEverQuest__Invite_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Invite(int), CEverQuest__Invite);
#endif
#ifdef CEverQuest__doInvite_x
FUNCTION_AT_ADDRESS(void, CEverQuest::doInvite(uint32_t, char*), CEverQuest__doInvite);
#endif
#ifdef CEverQuest__Follow_x
FUNCTION_AT_ADDRESS(int, CEverQuest::Follow(), CEverQuest__Follow);
#endif
#ifdef CEverQuest__Disband_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Disband(), CEverQuest__Disband);
#endif
#ifdef CEverQuest__GuildWar_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GuildWar(char*, int), CEverQuest__GuildWar);
#endif
#ifdef CEverQuest__GuildPeace_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GuildPeace(char*), CEverQuest__GuildPeace);
#endif
#ifdef CEverQuest__Sit_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Sit(), CEverQuest__Sit);
#endif
#ifdef CEverQuest__Camp_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Camp(), CEverQuest__Camp);
#endif
#ifdef CEverQuest__DropHeldItemOnGround_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DropHeldItemOnGround(int), CEverQuest__DropHeldItemOnGround);
#endif
#ifdef CEverQuest__MoveMoney_x
FUNCTION_AT_ADDRESS(int, CEverQuest::MoveMoney(int, int, int, int, int, bool), CEverQuest__MoveMoney);
#endif
#ifdef CEverQuest__DropHeldMoneyOnGround_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DropHeldMoneyOnGround(int), CEverQuest__DropHeldMoneyOnGround);
#endif
#ifdef CEverQuest__LMouseUp_x
FUNCTION_AT_ADDRESS(void, CEverQuest::LMouseUp(int, int), CEverQuest__LMouseUp);
#endif
#ifdef CEverQuest__LeftClickedOnPlayer_x
FUNCTION_AT_ADDRESS(void, CEverQuest::LeftClickedOnPlayer(PlayerClient*), CEverQuest__LeftClickedOnPlayer);
#endif
#ifdef CEverQuest__DropItemOrMoneyOnPlayer_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DropItemOrMoneyOnPlayer(PlayerClient*), CEverQuest__DropItemOrMoneyOnPlayer);
#endif
#ifdef CEverQuest__RightClickedOnPlayer_x
FUNCTION_AT_ADDRESS(void, CEverQuest::RightClickedOnPlayer(PlayerClient*, int), CEverQuest__RightClickedOnPlayer);
#endif
#ifdef CEverQuest__send_social_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_social(int, char*, char*), CEverQuest__send_social);
#endif
#ifdef CEverQuest__SavePC_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SavePC(int, int, unsigned char), CEverQuest__SavePC);
#endif
#ifdef CEverQuest__send_tell_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_tell(char*, char*), CEverQuest__send_tell);
#endif
#ifdef CEverQuest__send_petition_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_petition(), CEverQuest__send_petition);
#endif
#ifdef CEverQuest__send_private_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_private(), CEverQuest__send_private);
#endif
#ifdef CEverQuest__WriteIntToClientINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::WriteIntToClientINI(int, char*, char*), CEverQuest__WriteIntToClientINI);
#endif
#ifdef CEverQuest__WriteFloatToClientINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::WriteFloatToClientINI(float, char*, char*), CEverQuest__WriteFloatToClientINI);
#endif
#ifdef CEverQuest__WriteBoolToClientINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::WriteBoolToClientINI(bool, char*, char*), CEverQuest__WriteBoolToClientINI);
#endif
#ifdef CEverQuest__WriteStringToClientINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::WriteStringToClientINI(char*, char*, char*), CEverQuest__WriteStringToClientINI);
#endif
#ifdef CEverQuest__ReadClientINIString_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::ReadClientINIString(char*, char*, char*, char*, int), CEverQuest__ReadClientINIString);
#endif
#ifdef CEverQuest__ReadClientINIInt_x
FUNCTION_AT_ADDRESS(int, CEverQuest::ReadClientINIInt(char*, char*, int), CEverQuest__ReadClientINIInt);
#endif
#ifdef CEverQuest__ReadClientINIFloat_x
FUNCTION_AT_ADDRESS(float, CEverQuest::ReadClientINIFloat(char*, char*, float), CEverQuest__ReadClientINIFloat);
#endif
#ifdef CEverQuest__ReadClientINIBool_x
FUNCTION_AT_ADDRESS(bool, CEverQuest::ReadClientINIBool(char*, char*, bool), CEverQuest__ReadClientINIBool);
#endif
#ifdef CEverQuest__WriteIntToUIINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::WriteIntToUIINI(int, char*, char*), CEverQuest__WriteIntToUIINI);
#endif
#ifdef CEverQuest__WriteBoolToUIINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::WriteBoolToUIINI(bool, char*, char*), CEverQuest__WriteBoolToUIINI);
#endif
#ifdef CEverQuest__WriteStringToUIINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::WriteStringToUIINI(char*, char*, char*), CEverQuest__WriteStringToUIINI);
#endif
#ifdef CEverQuest__ReadUIINIString_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::ReadUIINIString(char*, char*, char*, char*, int), CEverQuest__ReadUIINIString);
#endif
#ifdef CEverQuest__ReadUIINIInt_x
FUNCTION_AT_ADDRESS(int, CEverQuest::ReadUIINIInt(char*, char*, int), CEverQuest__ReadUIINIInt);
#endif
#ifdef CEverQuest__ReadUIINIBool_x
FUNCTION_AT_ADDRESS(bool, CEverQuest::ReadUIINIBool(char*, char*, bool), CEverQuest__ReadUIINIBool);
#endif
#ifdef CEverQuest__SaveCamerasToINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SaveCamerasToINI(), CEverQuest__SaveCamerasToINI);
#endif
#ifdef CEverQuest__saveOptions_x
FUNCTION_AT_ADDRESS(void, CEverQuest::saveOptions(), CEverQuest__saveOptions);
#endif
#ifdef CEverQuest__saveOptions2_x
FUNCTION_AT_ADDRESS(void, CEverQuest::saveOptions2(), CEverQuest__saveOptions2);
#endif
#ifdef CEverQuest__send_update_filters_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_update_filters(), CEverQuest__send_update_filters);
#endif
#ifdef CEverQuest__loadOptions_x
FUNCTION_AT_ADDRESS(void, CEverQuest::loadOptions(), CEverQuest__loadOptions);
#endif
#ifdef CEverQuest__DoSplit_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DoSplit(char*), CEverQuest__DoSplit);
#endif
#ifdef CEverQuest__BeingIgnored_x
FUNCTION_AT_ADDRESS(int, CEverQuest::BeingIgnored(char*), CEverQuest__BeingIgnored);
#endif
#ifdef CEverQuest__IsFriend_x
FUNCTION_AT_ADDRESS(int, CEverQuest::IsFriend(const char*), CEverQuest__IsFriend);
#endif
#ifdef CEverQuest__ToggleAutoSplit_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ToggleAutoSplit(), CEverQuest__ToggleAutoSplit);
#endif
#ifdef CEverQuest__procMouse_x
FUNCTION_AT_ADDRESS(void, CEverQuest::procMouse(int), CEverQuest__procMouse);
#endif
#ifdef CEverQuest__StripShipName_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::StripShipName(char*, char*), CEverQuest__StripShipName);
#endif
#ifdef CEverQuest__trimName_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::trimName(char*), CEverQuest__trimName);
#endif
#ifdef CEverQuest__CancelSneakHide_x
FUNCTION_AT_ADDRESS(void, CEverQuest::CancelSneakHide(), CEverQuest__CancelSneakHide);
#endif
#ifdef CEverQuest__stripName_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::stripName(char*), CEverQuest__stripName);
#endif
#ifdef CEverQuest__clr_chat_input_x
FUNCTION_AT_ADDRESS(void, CEverQuest::clr_chat_input(), CEverQuest__clr_chat_input);
#endif
#ifdef CEverQuest__dsp_chat_x
FUNCTION_AT_ADDRESS(void, CEverQuest::dsp_chat(const char* line, int color, bool bLogIsOk, bool bConvertPercent, char* SomeStr), CEverQuest__dsp_chat);
#endif
#ifdef CEverQuest__OutputTextToLog_x
FUNCTION_AT_ADDRESS(void, CEverQuest::OutputTextToLog(const char* Text), CEverQuest__OutputTextToLog);
#endif
#ifdef CEverQuest__DoTellWindow_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DoTellWindow(char* message, char* name, char* name2, void* unknown, int color, bool b), CEverQuest__DoTellWindow);
#endif
#ifdef CEverQuest__dsp_chat1_x
FUNCTION_AT_ADDRESS(void, CEverQuest::dsp_chat(const char*), CEverQuest__dsp_chat1);
#endif
#ifdef CEverQuest__DoPercentConvert_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DoPercentConvert(char*, bool), CEverQuest__DoPercentConvert);
#endif
#ifdef CEverQuest__Emote_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Emote(), CEverQuest__Emote);
#endif
#ifdef CEverQuest__send_broadcast_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_broadcast(), CEverQuest__send_broadcast);
#endif
#ifdef CEverQuest__send_chat_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_chat(), CEverQuest__send_chat);
#endif
#ifdef CEverQuest__send_gsay_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_gsay(), CEverQuest__send_gsay);
#endif
#ifdef CEverQuest__reqChannel_x
FUNCTION_AT_ADDRESS(void, CEverQuest::reqChannel(), CEverQuest__reqChannel);
#endif
#ifdef CEverQuest__send_shout_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_shout(), CEverQuest__send_shout);
#endif
#ifdef CEverQuest__send_auction_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_auction(), CEverQuest__send_auction);
#endif
#ifdef CEverQuest__send_ooc_x
FUNCTION_AT_ADDRESS(void, CEverQuest::send_ooc(), CEverQuest__send_ooc);
#endif
#ifdef CEverQuest__GetCurrentLanguage_x
FUNCTION_AT_ADDRESS(int, CEverQuest::GetCurrentLanguage() const, CEverQuest__GetCurrentLanguage);
#endif
#ifdef CEverQuest__SendNewText_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SendNewText(int, char*, char*), CEverQuest__SendNewText);
#endif
#ifdef CEverQuest__DisplayScreen_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DisplayScreen(char*), CEverQuest__DisplayScreen);
#endif
#ifdef CEverQuest__IsValidName_x
FUNCTION_AT_ADDRESS(int, CEverQuest::IsValidName(char*), CEverQuest__IsValidName);
#endif
#ifdef CEverQuest__DoNewCharacterCreation_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DoNewCharacterCreation(), CEverQuest__DoNewCharacterCreation);
#endif
#ifdef CEverQuest__RemoveCharacterOptionFile_x
FUNCTION_AT_ADDRESS(void, CEverQuest::RemoveCharacterOptionFile(char*), CEverQuest__RemoveCharacterOptionFile);
#endif
#ifdef CEverQuest__SetDefaultGameValues_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SetDefaultGameValues(), CEverQuest__SetDefaultGameValues);
#endif
#ifdef CEverQuest__SetPlayerAppearanceFromPInfo_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SetPlayerAppearanceFromPInfo(EQPlayer*, int, bool), CEverQuest__SetPlayerAppearanceFromPInfo);
#endif
#ifdef CEverQuest__DoCharacterSelection_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DoCharacterSelection(), CEverQuest__DoCharacterSelection);
#endif
#ifdef CEverQuest__DoLogin_x
FUNCTION_AT_ADDRESS(int, CEverQuest::DoLogin(struct HWND__*, struct HINSTANCE__*), CEverQuest__DoLogin);
#endif
#ifdef CEverQuest__SetupCharSelectCamera_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SetupCharSelectCamera(), CEverQuest__SetupCharSelectCamera);
#endif
#ifdef CEverQuest__CreateDataSubdirectories_x
FUNCTION_AT_ADDRESS(void, CEverQuest::CreateDataSubdirectories(), CEverQuest__CreateDataSubdirectories);
#endif
#ifdef CEverQuest__CreateFilenameServerCode_x
FUNCTION_AT_ADDRESS(void, CEverQuest::CreateFilenameServerCode(char*), CEverQuest__CreateFilenameServerCode);
#endif
#ifdef CEverQuest__CreateIniFilenames_x
FUNCTION_AT_ADDRESS(void, CEverQuest::CreateIniFilenames(), CEverQuest__CreateIniFilenames);
#endif
#ifdef CEverQuest__StartNetworkGame_x
FUNCTION_AT_ADDRESS(void, CEverQuest::StartNetworkGame(struct HWND__*, struct HINSTANCE__*, char*), CEverQuest__StartNetworkGame);
#endif
#ifdef CEverQuest__GetZoneInfoFromNetwork_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GetZoneInfoFromNetwork(char*), CEverQuest__GetZoneInfoFromNetwork);
#endif
#ifdef CEverQuest__Surname_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Surname(char*), CEverQuest__Surname);
#endif
#ifdef CEverQuest__Kill_x
FUNCTION_AT_ADDRESS(void, CEverQuest::Kill(char*, char*), CEverQuest__Kill);
#endif
#ifdef CEverQuest__UpdateMyAppearance_x
FUNCTION_AT_ADDRESS(void, CEverQuest::UpdateMyAppearance(), CEverQuest__UpdateMyAppearance);
#endif
#ifdef CEverQuest__IFoundMyVehicle_x
FUNCTION_AT_ADDRESS(unsigned char, CEverQuest::IFoundMyVehicle(), CEverQuest__IFoundMyVehicle);
#endif
#ifdef CEverQuest__ProcessLocalPCIni_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ProcessLocalPCIni(int), CEverQuest__ProcessLocalPCIni);
#endif
#ifdef CEverQuest__DoMainLoop_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DoMainLoop(struct HWND__*), CEverQuest__DoMainLoop);
#endif
#ifdef CEverQuest__ProcessControls_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ProcessControls(), CEverQuest__ProcessControls);
#endif
#ifdef CEverQuest__TypingMode_x
FUNCTION_AT_ADDRESS(int, CEverQuest::TypingMode(), CEverQuest__TypingMode);
#endif
#ifdef CEverQuest__IsInTypingMode_x
FUNCTION_AT_ADDRESS(bool, CEverQuest::IsInTypingMode(), CEverQuest__IsInTypingMode);
#endif
#ifdef CEverQuest__doInspect_x
FUNCTION_AT_ADDRESS(void, CEverQuest::doInspect(EQPlayer*), CEverQuest__doInspect);
#endif
#ifdef __do_loot_x
FUNCTION_AT_ADDRESS(void, CEverQuest::doLoot(), __do_loot);
#endif
#ifdef CEverQuest__SendLightInfo_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SendLightInfo(EQPlayer*, unsigned char), CEverQuest__SendLightInfo);
#endif
#ifdef CEverQuest__SetTimedFog_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SetTimedFog(int), CEverQuest__SetTimedFog);
#endif
#ifdef CEverQuest__ProcessGame_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ProcessGame(struct HWND__*, struct HINSTANCE__*), CEverQuest__ProcessGame);
#endif
#ifdef CEverQuest__DoLoadScreenProgressBar_x
FUNCTION_AT_ADDRESS(void __cdecl, CEverQuest::DoLoadScreenProgressBar(int, const char*, ...), CEverQuest__DoLoadScreenProgressBar);
#endif
#ifdef CEverQuest__DoLoadScreen_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DoLoadScreen(int), CEverQuest__DoLoadScreen);
#endif
#ifdef CEverQuest__CleanupBadFiles_x
FUNCTION_AT_ADDRESS(void, CEverQuest::CleanupBadFiles(), CEverQuest__CleanupBadFiles);
#endif
#ifdef CEverQuest__CreateInitialActors_x
FUNCTION_AT_ADDRESS(void, CEverQuest::CreateInitialActors(), CEverQuest__CreateInitialActors);
#endif
#ifdef CEverQuest__CreateTargetIndicator_x
FUNCTION_AT_ADDRESS(void, CEverQuest::CreateTargetIndicator(int Slot, PSPELL pSpell, const ItemGlobalIndex& ItemLoc, ItemSpellTypes spelltype), CEverQuest__CreateTargetIndicator);
#endif
#ifdef CEverQuest__GetSndDriver_x
FUNCTION_AT_ADDRESS(void, CEverQuest::GetSndDriver(), CEverQuest__GetSndDriver);
#endif
#ifdef CEverQuest__InterpretCmd_x
FUNCTION_AT_ADDRESS(void, CEverQuest::InterpretCmd(PlayerClient*, char*), CEverQuest__InterpretCmd);
#endif
#ifdef CEverQuest__GrabFirstWord_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GrabFirstWord(char*, char*), CEverQuest__GrabFirstWord);
#endif
#ifdef CEverQuest__GrabFirstWord2_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GrabFirstWord2(char*, char*, int), CEverQuest__GrabFirstWord2);
#endif
#ifdef CEverQuest__CopyFirstWord_x
FUNCTION_AT_ADDRESS(void, CEverQuest::CopyFirstWord(char*, char*), CEverQuest__CopyFirstWord);
#endif
#ifdef CEverQuest__ApplyPoison_x
FUNCTION_AT_ADDRESS(void, CEverQuest::ApplyPoison(unsigned long), CEverQuest__ApplyPoison);
#endif
#ifdef CEverQuest__DeacSpellScreen_x
FUNCTION_AT_ADDRESS(void, CEverQuest::DeacSpellScreen(), CEverQuest__DeacSpellScreen);
#endif
#ifdef CEverQuest__MoveToZone_x
FUNCTION_AT_ADDRESS(void, CEverQuest::MoveToZone(int EQZoneIndex, char*, int, int ZONE_REQ_REASON, float, float, float, int), CEverQuest__MoveToZone);
#endif
#ifdef CEverQuest__LMouseDown_x
FUNCTION_AT_ADDRESS(void, CEverQuest::LMouseDown(int, int), CEverQuest__LMouseDown);
#endif
#ifdef CEverQuest__RMouseDown_x
FUNCTION_AT_ADDRESS(void, CEverQuest::RMouseDown(int, int), CEverQuest__RMouseDown);
#endif
#ifdef CEverQuest__RMouseUp_x
FUNCTION_AT_ADDRESS(void, CEverQuest::RMouseUp(int, int), CEverQuest__RMouseUp);
#endif
#ifdef CEverQuest__MouseWheelScrolled_x
FUNCTION_AT_ADDRESS(void, CEverQuest::MouseWheelScrolled(int), CEverQuest__MouseWheelScrolled);
#endif
#ifdef CEverQuest__ClickedSwitch_x
FUNCTION_AT_ADDRESS(EQSwitch*, CEverQuest::ClickedSwitch(int, int), CEverQuest__ClickedSwitch);
#endif
#ifdef CEverQuest__ClickedPlayer_x
FUNCTION_AT_ADDRESS(PlayerClient*, CEverQuest::ClickedPlayer(int, int), CEverQuest__ClickedPlayer);
#endif
#ifdef CEverQuest__WhatTimeIsIt_x
FUNCTION_AT_ADDRESS(void, CEverQuest::WhatTimeIsIt(), CEverQuest__WhatTimeIsIt);
#endif
#ifdef CEverQuest__FreeSwitches_x
FUNCTION_AT_ADDRESS(void, CEverQuest::FreeSwitches(), CEverQuest__FreeSwitches);
#endif
#ifdef CEverQuest__SetLfgPlayerStatus_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SetLfgPlayerStatus(struct LfgPlayerStatus*), CEverQuest__SetLfgPlayerStatus);
#endif
#ifdef CEverQuest__SetLfgGroupStatus_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SetLfgGroupStatus(struct LfgGroupStatus*), CEverQuest__SetLfgGroupStatus);
#endif
#ifdef CEverQuest__IssueLfgPlayerQuery_x
FUNCTION_AT_ADDRESS(void, CEverQuest::IssueLfgPlayerQuery(struct LfgPlayerQuery*), CEverQuest__IssueLfgPlayerQuery);
#endif
#ifdef CEverQuest__IssueLfgGroupQuery_x
FUNCTION_AT_ADDRESS(void, CEverQuest::IssueLfgGroupQuery(struct LfgGroupQuery*), CEverQuest__IssueLfgGroupQuery);
#endif
#ifdef CEverQuest__IssuePetCommand_x
FUNCTION_AT_ADDRESS(void, CEverQuest::IssuePetCommand(ePetCommandType, int, bool), CEverQuest__IssuePetCommand);
#endif
#ifdef CEverQuest__LootCorpse_x
FUNCTION_AT_ADDRESS(int, CEverQuest::LootCorpse(EQPlayer*, int), CEverQuest__LootCorpse);
#endif
#ifdef CEverQuest__loadSoundsGame_x
FUNCTION_AT_ADDRESS(void, CEverQuest::loadSoundsGame(), CEverQuest__loadSoundsGame);
#endif
#ifdef CEverQuest__GetSingleMessage_x
FUNCTION_AT_ADDRESS(char*, CEverQuest::GetSingleMessage(uint32_t, int, int*, char*), CEverQuest__GetSingleMessage);
#endif
#ifdef CEverQuest__SetGameState_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SetGameState(int), CEverQuest__SetGameState);
#endif
#ifdef CEverQuest__IsOkToTransact_x
FUNCTION_AT_ADDRESS(bool, CEverQuest::IsOkToTransact(), CEverQuest__IsOkToTransact);
#endif
#ifdef CEverQuest__SortSpellLoadouts_x
FUNCTION_AT_ADDRESS(void, CEverQuest::SortSpellLoadouts(), CEverQuest__SortSpellLoadouts);
#endif
#ifdef CEverQuest__saveCustom_x
FUNCTION_AT_ADDRESS(void, CEverQuest::saveCustom(), CEverQuest__saveCustom);
#endif
#ifdef CEverQuest__loadCustomFromINI_x
FUNCTION_AT_ADDRESS(void, CEverQuest::loadCustomFromINI(char*), CEverQuest__loadCustomFromINI);
#endif
#ifdef CEverQuest__loadCustom_x
FUNCTION_AT_ADDRESS(void, CEverQuest::loadCustom(), CEverQuest__loadCustom);
#endif
#ifdef CEverQuest__initCustom_x
FUNCTION_AT_ADDRESS(void, CEverQuest::initCustom(), CEverQuest__initCustom);
#endif

//============================================================================
// Function Addresses: Globals
//============================================================================

// We use CLoginViewManager to find the ServerInfo instance
FUNCTION_AT_ADDRESS(int, CLoginViewManager::HandleLButtonUp(CXPoint&), EQMain__CLoginViewManager__HandleLButtonUp);
FUNCTION_AT_ADDRESS(unsigned int, LoginServerAPI::JoinServer(int, void*, int), EQMain__LoginServerAPI__JoinServer);

//============================================================================
// Function Addresses: GraphicsEngine
//============================================================================

//----------------------------------------------------------------------------
// CDisplay
//----------------------------------------------------------------------------

#ifdef CDisplay__MoveMissile_x
FUNCTION_AT_ADDRESS(int, CDisplay::MoveMissile(EQMissile*), CDisplay__MoveMissile);
#endif
#ifdef CDisplay__GetOnActor_x
FUNCTION_AT_ADDRESS(void, CDisplay::GetOnActor(CActorInterface*, PlayerZoneClient*), CDisplay__GetOnActor);
#endif
#ifdef CDisplay__DefineSoloMode_x
FUNCTION_AT_ADDRESS(void, CDisplay::DefineSoloMode(), CDisplay__DefineSoloMode);
#endif
#ifdef CDisplay__CDisplay__CDisplay_x
FUNCTION_AT_ADDRESS(CDisplay::CDisplay(HWND), CDisplay__CDisplay);
#endif
#ifdef CDisplay__dCDisplay_x
FUNCTION_AT_ADDRESS(CDisplay::~CDisplay(), CDisplay__dCDisplay);
#endif
#ifdef CDisplay__ResetRenderWindow_x
FUNCTION_AT_ADDRESS(void, CDisplay::ResetRenderWindow(), CDisplay__ResetRenderWindow);
#endif
#ifdef CDisplay__SetCCreateCamera_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetCCreateCamera(int), CDisplay__SetCCreateCamera);
#endif
#ifdef CDisplay__SetBoneSpriteTint_x
FUNCTION_AT_ADDRESS(int, CDisplay::SetBoneSpriteTint(T3D_DAG*, T3D_RGB*), CDisplay__SetBoneSpriteTint);
#endif
#ifdef CDisplay__ReplaceMaterial_x
FUNCTION_AT_ADDRESS(int, CDisplay::ReplaceMaterial(char*, char*, T3D_HIERARCHICALSPRITEINSTANCE*, T3D_RGB*, int), CDisplay__ReplaceMaterial);
#endif
#ifdef CDisplay__ReplaceCloakMaterials_x
FUNCTION_AT_ADDRESS(int, CDisplay::ReplaceCloakMaterials(int, T3D_HIERARCHICALSPRITEINSTANCE*, T3D_RGB*), CDisplay__ReplaceCloakMaterials);
#endif
#ifdef CDisplay__ReloadUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::ReloadUI(bool), CDisplay__ReloadUI);
#endif
#ifdef CDisplay__FixHeading_x
FUNCTION_AT_ADDRESS(float, CDisplay::FixHeading(float), CDisplay__FixHeading);
#endif
#ifdef CDisplay__GetFloorHeight_x
FUNCTION_AT_ADDRESS(float, CDisplay::GetFloorHeight(float, float, float, float, const CVector3&, CActorApplicationData*, EActorType, float), CDisplay__GetFloorHeight);
#endif
#ifdef CDisplay__HeadingDiff_x
FUNCTION_AT_ADDRESS(float, CDisplay::HeadingDiff(float, float, float*), CDisplay__HeadingDiff);
#endif
#ifdef CDisplay__DeleteParticleCloudInstance_x
FUNCTION_AT_ADDRESS(void, CDisplay::DeleteParticleCloudInstance(T3D_PARTICLECLOUDINSTANCE**), CDisplay__DeleteParticleCloudInstance);
#endif
#ifdef CDisplay__ProcessParticleEmitter_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessParticleEmitter(EQSwitch*), CDisplay__ProcessParticleEmitter);
#endif
#ifdef CDisplay__SlideSwitchLeftRight_x
FUNCTION_AT_ADDRESS(bool, CDisplay::SlideSwitchLeftRight(EQSwitch*, float, int, float), CDisplay__SlideSwitchLeftRight);
#endif
#ifdef CDisplay__ProcessSwitches_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessSwitches(), CDisplay__ProcessSwitches);
#endif
#ifdef CDisplay__default_cameras_x
FUNCTION_AT_ADDRESS(void, CDisplay::default_cameras(), CDisplay__default_cameras);
#endif
#ifdef CDisplay__is_3dON_x
FUNCTION_AT_ADDRESS(int, CDisplay::is_3dON(), CDisplay__is_3dON);
#endif
#ifdef CDisplay__is_ParticleSystemON_x
FUNCTION_AT_ADDRESS(int, CDisplay::is_ParticleSystemON(), CDisplay__is_ParticleSystemON);
#endif
#ifdef CDisplay__InitCommonLights_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitCommonLights(), CDisplay__InitCommonLights);
#endif
#ifdef CDisplay__GetNewPCIniFlag_x
FUNCTION_AT_ADDRESS(int, CDisplay::GetNewPCIniFlag(int, int), CDisplay__GetNewPCIniFlag);
#endif
#ifdef CDisplay__ShouldLoadNewPcModel_x
FUNCTION_AT_ADDRESS(int, CDisplay::ShouldLoadNewPcModel(int, int), CDisplay__ShouldLoadNewPcModel);
#endif
#ifdef CDisplay__GetIniRaceName_x
FUNCTION_AT_ADDRESS(char*, CDisplay::GetIniRaceName(int), CDisplay__GetIniRaceName);
#endif
#ifdef CDisplay__InitWorld_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitWorld(), CDisplay__InitWorld);
#endif
#ifdef CDisplay__InitDDraw_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitDDraw(), CDisplay__InitDDraw);
#endif
#ifdef CDisplay__InitNewUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitNewUI(), CDisplay__InitNewUI);
#endif
#ifdef CXWndDrawTemplate__operator_equal_x
FUNCTION_AT_ADDRESS(CXWndDrawTemplate&, CXWndDrawTemplate::operator=(const CXWndDrawTemplate&), CXWndDrawTemplate__operator_equal);
#endif
#ifdef CScrollbarTemplate__operator_equal_x
FUNCTION_AT_ADDRESS(CScrollbarTemplate&, CScrollbarTemplate::operator=(const CScrollbarTemplate&), CScrollbarTemplate__operator_equal);
#endif
#ifdef CDisplay__InitCharSelectUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitCharSelectUI(), CDisplay__InitCharSelectUI);
#endif
#ifdef CDisplay__InitGameUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitGameUI(), CDisplay__InitGameUI);
#endif
#ifdef CDisplay__CleanCharSelectUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::CleanCharSelectUI(), CDisplay__CleanCharSelectUI);
#endif
#ifdef CDisplay__CleanGameUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::CleanGameUI(), CDisplay__CleanGameUI);
#endif
#ifdef CDisplay__CleanUpNewUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::CleanUpNewUI(), CDisplay__CleanUpNewUI);
#endif
#ifdef CDisplay__ActivateMainUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::ActivateMainUI(bool), CDisplay__ActivateMainUI);
#endif
#ifdef CDisplay__DeactivateMainUI_x
FUNCTION_AT_ADDRESS(void, CDisplay::DeactivateMainUI(), CDisplay__DeactivateMainUI);
#endif
#ifdef CDisplay__NewUIProcessEscape_x
FUNCTION_AT_ADDRESS(void, CDisplay::NewUIProcessEscape(), CDisplay__NewUIProcessEscape);
#endif
#ifdef CDisplay__KeyMapUpdated_x
FUNCTION_AT_ADDRESS(void, CDisplay::KeyMapUpdated(), CDisplay__KeyMapUpdated);
#endif
#ifdef CDisplay__GetWorldFilePath_x
FUNCTION_AT_ADDRESS(bool, CDisplay::GetWorldFilePath(char*, const char*), CDisplay__GetWorldFilePath);
#endif
#ifdef CDisplay__LoadWorldFile_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::LoadWorldFile(char*, char*, int, unsigned char), CDisplay__LoadWorldFile);
#endif
#ifdef CDisplay__LoadNPCFromS3D_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::LoadNPCFromS3D(char*, char*, char*), CDisplay__LoadNPCFromS3D);
#endif
#ifdef CDisplay__LoadBMPFile_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::LoadBMPFile(), CDisplay__LoadBMPFile);
#endif
#ifdef CDisplay__StartWorldDisplay_Bailout_x
FUNCTION_AT_ADDRESS(void, CDisplay::StartWorldDisplay_Bailout(const char*), CDisplay__StartWorldDisplay_Bailout);
#endif
#ifdef CDisplay__StopWorldDisplay_x
FUNCTION_AT_ADDRESS(void, CDisplay::StopWorldDisplay(), CDisplay__StopWorldDisplay);
#endif
#ifdef CDisplay__SetGammaCorrection_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetGammaCorrection(float), CDisplay__SetGammaCorrection);
#endif
#ifdef CDisplay__SetPCloudDensity_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetPCloudDensity(int), CDisplay__SetPCloudDensity);
#endif
#ifdef CDisplay__CleanUpDDraw_x
FUNCTION_AT_ADDRESS(void, CDisplay::CleanUpDDraw(), CDisplay__CleanUpDDraw);
#endif
#ifdef CDisplay__IsShield_x
FUNCTION_AT_ADDRESS(unsigned int, CDisplay::IsShield(int) const, CDisplay__IsShield);
#endif
#ifdef CDisplay__GetItemType_x
FUNCTION_AT_ADDRESS(int, CDisplay::GetItemType(int), CDisplay__GetItemType);
#endif
#ifdef CDisplay__GetUserDefinedColor_x
FUNCTION_AT_ADDRESS(COLORREF, CDisplay::GetUserDefinedColor(int), CDisplay__GetUserDefinedColor);
#endif
#ifdef CDisplay__SetUserDefinedColor_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetUserDefinedColor(int, int, int, int), CDisplay__SetUserDefinedColor);
#endif
#ifdef CDisplay__InitUserDefinedColors_x
FUNCTION_AT_ADDRESS(void, CDisplay::InitUserDefinedColors(), CDisplay__InitUserDefinedColors);
#endif
#ifdef CDisplay__WriteTextHD2_x
FUNCTION_AT_ADDRESS(int, CDisplay::WriteTextHD2(const char*, int, int, int), CDisplay__WriteTextHD2);
#endif
#ifdef CDisplay__SetActorScaleFactor_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetActorScaleFactor(struct T3D_tagACTORINSTANCE*, float, unsigned char), CDisplay__SetActorScaleFactor);
#endif
#ifdef CDisplay__ShowDisplay_x
FUNCTION_AT_ADDRESS(void, CDisplay::ShowDisplay(), CDisplay__ShowDisplay);
#endif
#ifdef CDisplay__CheckForScreenModeToggle_x
FUNCTION_AT_ADDRESS(void, CDisplay::CheckForScreenModeToggle(), CDisplay__CheckForScreenModeToggle);
#endif
#ifdef CDisplay__Render_World_x
FUNCTION_AT_ADDRESS(void, CDisplay::Render_World(), CDisplay__Render_World);
#endif
#ifdef CDisplay__SetGenericEnvironment_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetGenericEnvironment(), CDisplay__SetGenericEnvironment);
#endif
#ifdef CDisplay__SetupEmitterEnvironment_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetupEmitterEnvironment(), CDisplay__SetupEmitterEnvironment);
#endif
#ifdef CDisplay__UpdateMobileEmitterLocations_x
FUNCTION_AT_ADDRESS(void, CDisplay::UpdateMobileEmitterLocations(), CDisplay__UpdateMobileEmitterLocations);
#endif
#ifdef CDisplay__RealRender_World_x
FUNCTION_AT_ADDRESS(void, CDisplay::RealRender_World(), CDisplay__RealRender_World);
#endif
#ifdef CDisplay__Render_MinWorld_x
FUNCTION_AT_ADDRESS(void, CDisplay::Render_MinWorld(), CDisplay__Render_MinWorld);
#endif
#ifdef CDisplay__StartWeather_x
FUNCTION_AT_ADDRESS(void, CDisplay::StartWeather(int, unsigned char), CDisplay__StartWeather);
#endif
#ifdef CDisplay__ProcessWeather_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessWeather(), CDisplay__ProcessWeather);
#endif
#ifdef CDisplay__StopWeather_x
FUNCTION_AT_ADDRESS(void, CDisplay::StopWeather(int, unsigned char), CDisplay__StopWeather);
#endif
#ifdef CDisplay__LightningStrike_x
FUNCTION_AT_ADDRESS(void, CDisplay::LightningStrike(), CDisplay__LightningStrike);
#endif
#ifdef CDisplay__GetNearestPlayerInView_x
FUNCTION_AT_ADDRESS(EQPlayer*, CDisplay::GetNearestPlayerInView(float, bool), CDisplay__GetNearestPlayerInView);
#endif
#ifdef CDisplay__ProcessEffects_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessEffects(), CDisplay__ProcessEffects);
#endif
#ifdef CDisplay__ProcessCloud_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessCloud(), CDisplay__ProcessCloud);
#endif
#ifdef CDisplay__DDrawUpdateDisplay_x
FUNCTION_AT_ADDRESS(void, CDisplay::DDrawUpdateDisplay(), CDisplay__DDrawUpdateDisplay);
#endif
#ifdef CDisplay__SetViewActor_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetViewActor(CActorInterface*), CDisplay__SetViewActor);
#endif
//#ifdef CDisplay__SetRenderWindow_x
//FUNCTION_AT_ADDRESS(void, CDisplay::SetRenderWindow(int mode), CDisplay__SetRenderWindow);
//#endif
#ifdef CDisplay__ToggleScreenshotMode_x
FUNCTION_AT_ADDRESS(void, CDisplay::ToggleScreenshotMode(), CDisplay__ToggleScreenshotMode);
#endif
#ifdef CDisplay__SwitchToDefaultCameraMode_x
FUNCTION_AT_ADDRESS(void, CDisplay::SwitchToDefaultCameraMode(), CDisplay__SwitchToDefaultCameraMode);
#endif
#ifdef CDisplay__SetYon_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetYon(float), CDisplay__SetYon);
#endif
#ifdef CDisplay__SetActorYon_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetActorYon(float), CDisplay__SetActorYon);
#endif
#ifdef CDisplay__SetViewAngle_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetViewAngle(int), CDisplay__SetViewAngle);
#endif
#ifdef CDisplay__UpdateCameraAfterModeSwitch_x
FUNCTION_AT_ADDRESS(void, CDisplay::UpdateCameraAfterModeSwitch(), CDisplay__UpdateCameraAfterModeSwitch);
#endif
#ifdef CDisplay__ChangeVideoMode_x
FUNCTION_AT_ADDRESS(void, CDisplay::ChangeVideoMode(), CDisplay__ChangeVideoMode);
#endif
#ifdef CDisplay__ToggleView_x
FUNCTION_AT_ADDRESS(void, CDisplay::ToggleView(), CDisplay__ToggleView);
#endif
#ifdef CDisplay__SetFog_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetFog(bool, float, float, unsigned char, unsigned char, unsigned char), CDisplay__SetFog);
#endif
#ifdef CDisplay__ClearScreen_x
FUNCTION_AT_ADDRESS(void, CDisplay::ClearScreen(), CDisplay__ClearScreen);
#endif
#ifdef CDisplay__CreatePlayerActor_x
FUNCTION_AT_ADDRESS(void, CDisplay::CreatePlayerActor(EQPlayer*), CDisplay__CreatePlayerActor);
#endif
#ifdef CDisplay__SetActorUserData_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetActorUserData(struct T3D_tagACTORINSTANCE*, void*), CDisplay__SetActorUserData);
#endif
#ifdef CDisplay__CreateLight_x
FUNCTION_AT_ADDRESS(struct T3D_POINTLIGHT*, CDisplay::CreateLight(unsigned char, float, float, float, float), CDisplay__CreateLight);
#endif
#ifdef CDisplay__GetIntensity_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::GetIntensity(unsigned char), CDisplay__GetIntensity);
#endif
#ifdef CDisplay__DeleteLight_x
FUNCTION_AT_ADDRESS(void, CDisplay::DeleteLight(struct T3D_POINTLIGHT*), CDisplay__DeleteLight);
#endif
#ifdef CDisplay__PlaySoundAtLocation_x
FUNCTION_AT_ADDRESS(void, CDisplay::PlaySoundAtLocation(float, float, float, int), CDisplay__PlaySoundAtLocation);
#endif
#ifdef CDisplay__SetUserRender_x
FUNCTION_AT_ADDRESS(long, CDisplay::SetUserRender(int), CDisplay__SetUserRender);
#endif
#ifdef CDisplay__GetClickedActor_x
FUNCTION_AT_ADDRESS(CActorInterface*, CDisplay::GetClickedActor(int X, int Y, bool bFlag, CVector3& Vector1, CVector3& Vector2), CDisplay__GetClickedActor);
#endif
#ifdef CDisplay__CreateActor_x
FUNCTION_AT_ADDRESS(CActorInterface*, CDisplay::CreateActor(char*, float, float, float, float, float, float, bool, bool), CDisplay__CreateActor);
#endif
#ifdef CDisplay__SetActorBoundingRadius_x
FUNCTION_AT_ADDRESS(float, CDisplay::SetActorBoundingRadius(struct T3D_tagACTORINSTANCE*, float, float), CDisplay__SetActorBoundingRadius);
#endif
#ifdef CDisplay__DeleteActor_x
FUNCTION_AT_ADDRESS(void, CDisplay::DeleteActor(struct T3D_tagACTORINSTANCE*), CDisplay__DeleteActor);
#endif
#ifdef CDisplay__dupActorHierarchicalSprite_x
FUNCTION_AT_ADDRESS(struct T3D_HIERARCHICALSPRITEINSTANCE*, CDisplay::dupActorHierarchicalSprite(struct T3D_tagACTORINSTANCE*), CDisplay__dupActorHierarchicalSprite);
#endif
#ifdef CDisplay__ToggleCharacterNameSprites_x
FUNCTION_AT_ADDRESS(void, CDisplay::ToggleCharacterNameSprites(bool), CDisplay__ToggleCharacterNameSprites);
#endif
#ifdef CDisplay__ToggleNpcNameSprites_x
FUNCTION_AT_ADDRESS(void, CDisplay::ToggleNpcNameSprites(bool), CDisplay__ToggleNpcNameSprites);
#endif
#ifdef CDisplay__TurnInfravisionEffectOn_x
FUNCTION_AT_ADDRESS(int, CDisplay::TurnInfravisionEffectOn(), CDisplay__TurnInfravisionEffectOn);
#endif
#ifdef CDisplay__TurnInfravisionEffectOff_x
FUNCTION_AT_ADDRESS(int, CDisplay::TurnInfravisionEffectOff(), CDisplay__TurnInfravisionEffectOff);
#endif
#ifdef CDisplay__SpurtBloodOnDag_x
FUNCTION_AT_ADDRESS(void, CDisplay::SpurtBloodOnDag(struct T3D_DAG*), CDisplay__SpurtBloodOnDag);
#endif
#ifdef CDisplay__SetDayPeriod_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetDayPeriod(unsigned char), CDisplay__SetDayPeriod);
#endif
#ifdef CDisplay__SetSkyLayer_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetSkyLayer(int), CDisplay__SetSkyLayer);
#endif
#ifdef CDisplay__GetSkyTime_x
FUNCTION_AT_ADDRESS(int, CDisplay::GetSkyTime(int*, int*), CDisplay__GetSkyTime);
#endif
#ifdef CDisplay__SetSunLight_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetSunLight(), CDisplay__SetSunLight);
#endif
#ifdef CDisplay__SetSkyBackground_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetSkyBackground(), CDisplay__SetSkyBackground);
#endif
#ifdef CDisplay__ProcessSky_x
FUNCTION_AT_ADDRESS(void, CDisplay::ProcessSky(), CDisplay__ProcessSky);
#endif
#ifdef CDisplay__SimpleDistance_x
FUNCTION_AT_ADDRESS(float, CDisplay::SimpleDistance(float, float, float, float, float, float, float), CDisplay__SimpleDistance);
#endif
#ifdef CDisplay__TrueDistance_x
FUNCTION_AT_ADDRESS(float, CDisplay::TrueDistance(float, float, float, float, float, float, float), CDisplay__TrueDistance);
#endif
#ifdef CDisplay__PlayerSimpleDistance_x
FUNCTION_AT_ADDRESS(float, CDisplay::PlayerSimpleDistance(EQPlayer*, EQPlayer*, float), CDisplay__PlayerSimpleDistance);
#endif
#ifdef CDisplay__PlayerDistance_x
FUNCTION_AT_ADDRESS(float, CDisplay::PlayerDistance(EQPlayer*, EQPlayer*, float), CDisplay__PlayerDistance);
#endif
#ifdef CDisplay__hideGrassObjects_x
FUNCTION_AT_ADDRESS(void, CDisplay::hideGrassObjects(), CDisplay__hideGrassObjects);
#endif
#ifdef CDisplay__updateGrassObjects_x
FUNCTION_AT_ADDRESS(void, CDisplay::updateGrassObjects(), CDisplay__updateGrassObjects);
#endif
#ifdef CDisplay__loadGrassObjects_x
FUNCTION_AT_ADDRESS(void, CDisplay::loadGrassObjects(char*), CDisplay__loadGrassObjects);
#endif
#ifdef CDisplay__SetAmbientLight_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetAmbientLight(float), CDisplay__SetAmbientLight);
#endif
#ifdef CDisplay__SetViewActorByName_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetViewActorByName(char*), CDisplay__SetViewActorByName);
#endif
#ifdef CDisplay__SetActorSpriteTint_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetActorSpriteTint(struct _EQRGB*, struct T3D_tagACTORINSTANCE*), CDisplay__SetActorSpriteTint);
#endif
#ifdef CDisplay__FreeAllItemLists_x
FUNCTION_AT_ADDRESS(void, CDisplay::FreeAllItemLists(), CDisplay__FreeAllItemLists);
#endif
#ifdef CDisplay__GenericSphereColl_x
FUNCTION_AT_ADDRESS(bool, CDisplay::GenericSphereColl(float, float, float, float, float, float, float*, float*, float*, unsigned char), CDisplay__GenericSphereColl);
#endif
#ifdef CDisplay__FindZoneTopZ_x
FUNCTION_AT_ADDRESS(float, CDisplay::FindZoneTopZ(float, float, float), CDisplay__FindZoneTopZ);
#endif
#ifdef CDisplay__GetEnvironment_x
FUNCTION_AT_ADDRESS(unsigned char, CDisplay::GetEnvironment(float, float, float, int*), CDisplay__GetEnvironment);
#endif
#ifdef CDisplay__MoveLocalPlayerToSafeCoords_x
FUNCTION_AT_ADDRESS(void, CDisplay::MoveLocalPlayerToSafeCoords(), CDisplay__MoveLocalPlayerToSafeCoords);
#endif
#ifdef CDisplay__SetupEQPlayers_x
FUNCTION_AT_ADDRESS(void, CDisplay::SetupEQPlayers(), CDisplay__SetupEQPlayers);
#endif
#ifdef CDisplay__MoveLight_x
FUNCTION_AT_ADDRESS(void, CDisplay::MoveLight(struct T3D_POINTLIGHT*, struct _physicsinfo*), CDisplay__MoveLight);
#endif

//============================================================================
// Function Addresses: ItemLinks
//============================================================================

FUNCTION_AT_ADDRESS(void, ConvertItemTags(CXStr&, bool), __ConvertItemTags);

#if !defined(_M_AMD64)
FUNCTION_AT_ADDRESS(CXStr, CleanItemTags(const CXStr&, bool), __CleanItemTags);
#endif

//============================================================================
// Function Addresses: Items
//============================================================================

//----------------------------------------------------------------------------
// ItemBase / ItemClient
//----------------------------------------------------------------------------

FUNCTION_AT_ADDRESS(char*, ItemBase::CreateItemTagString(char*, int), ItemBase__CreateItemTagString);

#ifdef ItemBase__GetImageNum_x
FUNCTION_AT_ADDRESS(int, ItemBase::GetImageNum() const, ItemBase__GetImageNum);
#endif
#ifdef ItemClient__CreateItemClient_x
FUNCTION_AT_ADDRESS(ItemPtr, ItemBase::CreateItemClient(CUnSerializeBuffer& buffer), ItemClient__CreateItemClient);
#endif
#ifdef ItemClient__CanDrop_x
FUNCTION_AT_ADDRESS(bool, ItemBase::CanDrop(bool, bool, bool, bool) const, ItemClient__CanDrop);
#endif
#ifdef ItemBase__GetItemValue_x
FUNCTION_AT_ADDRESS(int, ItemBase::GetItemValue(bool) const, ItemBase__GetItemValue);
#endif
#ifdef ItemBase__IsKeyRingItem_x
FUNCTION_AT_ADDRESS(bool, ItemBase::IsKeyRingItem(KeyRingType) const, ItemBase__IsKeyRingItem);
#endif
#ifdef ItemClient__CanGoInBag_x
FUNCTION_AT_ADDRESS(bool, ItemBase::CanGoInBag(const ItemPtr& pItem, int unused, bool mustbefalse) const, ItemClient__CanGoInBag);
#endif
#ifdef ItemBase__ValueSellMerchant_x
FUNCTION_AT_ADDRESS(int, ItemBase::ValueSellMerchant(float, int) const, ItemBase__ValueSellMerchant);
#endif
#ifdef ItemBase__CanGemFitInSlot_x
FUNCTION_AT_ADDRESS(int, ItemBase::CanGemFitInSlot(const ItemPtr& pItem, int, bool, bool index) const, ItemBase__CanGemFitInSlot);
#endif
#ifdef ItemBase__IsLore_x
FUNCTION_AT_ADDRESS(bool, ItemBase::IsLore(bool bIncludeSockets) const, ItemBase__IsLore);
#endif

//----------------------------------------------------------------------------
// MultipleItemMoveManager
//----------------------------------------------------------------------------

/*
 * FUNCTION_AT_ADDRESS(MultipleItemMoveManager::ErrorCodes,
 *	MultipleItemMoveManager::ProcessMove(
 *		PcZoneClient* pPC,
 *		const MultipleItemMoveManager::MoveItemArray& moveItemList,
 *		bool sendMoves, bool clientInitiated), MultipleItemMoveManager__ProcessMove);
 *
 */
#ifdef MultipleItemMoveManager__ProcessMove_x
FUNCTION_AT_ADDRESS(MultipleItemMoveManager::ErrorCodes, MultipleItemMoveManager::ProcessMove(PcZoneClient* pPC, const MultipleItemMoveManager::MoveItemArray& moveItemList, bool sendMoves, bool clientInitiated), MultipleItemMoveManager__ProcessMove);
#endif

//============================================================================
// Function Addresses: PcClient
//============================================================================

//----------------------------------------------------------------------------
// ExtendedTargetList
//----------------------------------------------------------------------------

#ifdef __GetXTargetType_x
FUNCTION_AT_ADDRESS(const char*, ExtendedTargetList::ExtendedTargetRoleName(uint32_t), __GetXTargetType);
#endif

//****************************************************************************
// BaseProfile
//****************************************************************************

//----------------------------------------------------------------------------
// CharacterBase
//----------------------------------------------------------------------------

#ifdef CharacterBase__GetItemByGlobalIndex_x
FUNCTION_AT_ADDRESS(ItemPtr, CharacterBase::GetItemByGlobalIndex(const ItemGlobalIndex& GlobalIndex) const, CharacterBase__GetItemByGlobalIndex);
#endif
#ifdef CharacterBase__GetItemByGlobalIndex1_x
FUNCTION_AT_ADDRESS(ItemPtr, CharacterBase::GetItemByGlobalIndex(const ItemGlobalIndex& GlobalIndex, ItemContainer::CheckDepthOptions Option) const, CharacterBase__GetItemByGlobalIndex1);
#endif
#ifdef CharacterBase__IsExpansionFlag_x
FUNCTION_AT_ADDRESS(int, CharacterBase::IsExpansionFlag(int), CharacterBase__IsExpansionFlag);
#endif

//----------------------------------------------------------------------------
// CharacterZoneClient
//----------------------------------------------------------------------------

#ifdef CharacterZoneClient__FindAffectSlot_x
FUNCTION_AT_ADDRESS(EQ_Affect*, CharacterZoneClient::FindAffectSlot(int, PlayerClient*, int*, bool, int, EQ_Affect*, int, bool), CharacterZoneClient__FindAffectSlot);
#endif
#ifdef CharacterZoneClient__GetMaxEffects_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::GetMaxEffects() const, CharacterZoneClient__GetMaxEffects);
#endif
#ifdef CharacterZoneClient__GetOpenEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetOpenEffectSlot(bool, bool, int), CharacterZoneClient__GetOpenEffectSlot);
#endif
#ifdef CharacterZoneClient__GetFirstEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFirstEffectSlot(bool, bool), CharacterZoneClient__GetFirstEffectSlot);
#endif
#ifdef CharacterZoneClient__GetLastEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetLastEffectSlot(bool, bool, bool), CharacterZoneClient__GetLastEffectSlot);
#endif
#ifdef CharacterZoneClient__HasSkill_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::HasSkill(int), CharacterZoneClient__HasSkill);
#endif
#ifdef CharacterZoneClient__MakeMeVisible_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::MakeMeVisible(int, bool), CharacterZoneClient__MakeMeVisible);
#endif
#ifdef CharacterZoneClient__GetItemCountWorn_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetItemCountWorn(int), CharacterZoneClient__GetItemCountWorn);
#endif
#ifdef CharacterZoneClient__GetItemCountInInventory_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetItemCountInInventory(int, bool skipCheck), CharacterZoneClient__GetItemCountInInventory);
#endif
#ifdef CharacterZoneClient__GetCursorItemCount_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetCursorItemCount(int), CharacterZoneClient__GetCursorItemCount);
#endif
#ifdef CharacterZoneClient__ApplyDamage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ApplyDamage(int, int, int, int, int, int), CharacterZoneClient__ApplyDamage);
#endif
#ifdef CharacterZoneClient__BardCastBard_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::BardCastBard(const EQ_Spell*, signed int) const, CharacterZoneClient__BardCastBard);
#endif
#ifdef CharacterZoneClient__CalcAffectChange_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CalcAffectChange(const EQ_Spell* spell, BYTE, BYTE, const EQ_Affect*, int, PlayerZoneClient*, bool, int, bool), CharacterZoneClient__CalcAffectChange);
#endif
#ifdef CharacterZoneClient__CalcAffectChangeGeneric_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CalcAffectChangeGeneric(const EQ_Spell* spell, BYTE, BYTE, const EQ_Affect*, int, bool), CharacterZoneClient__CalcAffectChangeGeneric);
#endif
#ifdef CharacterZoneClient__IsStackBlocked_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::IsStackBlocked(const EQ_Spell*, PlayerClient*, EQ_Affect*, int), CharacterZoneClient__IsStackBlocked);
#endif
#ifdef CharacterZoneClient__CanUseMemorizedSpellSlot_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::CanUseMemorizedSpellSlot(int), CharacterZoneClient__CanUseMemorizedSpellSlot);
#endif
#ifdef CharacterZoneClient__Max_Endurance_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Max_Endurance(bool), CharacterZoneClient__Max_Endurance);
#endif
#ifdef CharacterZoneClient__Max_Mana_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Max_Mana(bool), CharacterZoneClient__Max_Mana);
#endif
#ifdef CharacterZoneClient__Max_HP_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Max_HP(int, bool), CharacterZoneClient__Max_HP);
#endif
#ifdef CharacterZoneClient__CharacterZoneClientResetAllMembers_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::CharacterZoneClientResetAllMembers(), CharacterZoneClient__CharacterZoneClientResetAllMembers);
#endif
#ifdef CharacterZoneClient__ModifyCurHP_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ModifyCurHP(int32_t modification, PlayerZoneClient* resposibleplayer, int skilltype), CharacterZoneClient__ModifyCurHP);
#endif
#ifdef CharacterZoneClient__IsSpellcaster_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::IsSpellcaster(), CharacterZoneClient__IsSpellcaster);
#endif
#ifdef CharacterZoneClient__DoLight_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoLight(unsigned char), CharacterZoneClient__DoLight);
#endif
#ifdef CharacterZoneClient__Skill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Skill(int), CharacterZoneClient__Skill);
#endif
#ifdef CharacterZoneClient__HasSpell_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::HasSpell(int), CharacterZoneClient__HasSpell);
#endif
#ifdef CharacterZoneClient__ResetCur_HP_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ResetCur_HP(int), CharacterZoneClient__ResetCur_HP);
#endif
#ifdef CharacterZoneClient__GetEnduranceRegen_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetEnduranceRegen(bool bIncItemsAndBuffs, bool bCombat), CharacterZoneClient__GetEnduranceRegen);
#endif
#ifdef CharacterZoneClient__GetHPRegen_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetHPRegen(bool bIncItemsAndBuffs, bool* bIsBleeding, bool bCombat), CharacterZoneClient__GetHPRegen);
#endif
#ifdef CharacterZoneClient__GetManaRegen_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetManaRegen(bool bincItemsAndBuffs, bool bCombat), CharacterZoneClient__GetManaRegen);
#endif
#ifdef CharacterZoneClient__Cur_HP_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Cur_HP(int SpawnType, bool bCapAtMax), CharacterZoneClient__Cur_HP);
#endif
#ifdef CharacterZoneClient__GetHPFromStamina_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetHPFromStamina(int), CharacterZoneClient__GetHPFromStamina);
#endif
#ifdef CharacterZoneClient__Cur_Mana_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Cur_Mana(bool bCapAtMax), CharacterZoneClient__Cur_Mana);
#endif
#ifdef CharacterZoneClient__IsMage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::IsMage(), CharacterZoneClient__IsMage);
#endif
#ifdef CharacterZoneClient__GetClassACBonus_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetClassACBonus(int), CharacterZoneClient__GetClassACBonus);
#endif
#ifdef CharacterZoneClient__ac_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ac(bool), CharacterZoneClient__ac);
#endif
#ifdef CharacterZoneClient__compute_tohit_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::compute_tohit(unsigned char), CharacterZoneClient__compute_tohit);
#endif
#ifdef CharacterZoneClient__defense_agility_bonus_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::defense_agility_bonus(), CharacterZoneClient__defense_agility_bonus);
#endif
#ifdef CharacterZoneClient__compute_defense_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::compute_defense(), CharacterZoneClient__compute_defense);
#endif
#ifdef CharacterZoneClient__offense_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::offense(unsigned char), CharacterZoneClient__offense);
#endif
#ifdef CharacterZoneClient__HasSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::HasSkill(unsigned char), CharacterZoneClient__HasSkill);
#endif
#ifdef CharacterZoneClient__HasInnateSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::HasInnateSkill(unsigned char, int), CharacterZoneClient__HasInnateSkill);
#endif
#ifdef CharacterZoneClient__InitMyLanguages_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::InitMyLanguages(), CharacterZoneClient__InitMyLanguages);
#endif
#ifdef CharacterZoneClient__BaneDamage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::BaneDamage(EQ_Equipment*), CharacterZoneClient__BaneDamage);
#endif
#ifdef CharacterZoneClient__ElementResistDmg_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ElementResistDmg(EQ_Equipment*, int), CharacterZoneClient__ElementResistDmg);
#endif
#ifdef CharacterZoneClient__save_bash_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_bash(int), CharacterZoneClient__save_bash);
#endif
#ifdef CharacterZoneClient__CapStat_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CapStat(int, int), CharacterZoneClient__CapStat);
#endif
#ifdef CharacterZoneClient__CalcFoodDrinkBonus_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::CalcFoodDrinkBonus(int), CharacterZoneClient__CalcFoodDrinkBonus);
#endif
#ifdef CharacterZoneClient__basesave_magic_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_magic(), CharacterZoneClient__basesave_magic);
#endif
#ifdef CharacterZoneClient__save_magic_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_magic(), CharacterZoneClient__save_magic);
#endif
#ifdef CharacterZoneClient__basesave_fire_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_fire(), CharacterZoneClient__basesave_fire);
#endif
#ifdef CharacterZoneClient__save_fire_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_fire(), CharacterZoneClient__save_fire);
#endif
#ifdef CharacterZoneClient__basesave_cold_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_cold(), CharacterZoneClient__basesave_cold);
#endif
#ifdef CharacterZoneClient__save_cold_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_cold(), CharacterZoneClient__save_cold);
#endif
#ifdef CharacterZoneClient__basesave_disease_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_disease(), CharacterZoneClient__basesave_disease);
#endif
#ifdef CharacterZoneClient__save_disease_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_disease(), CharacterZoneClient__save_disease);
#endif
#ifdef CharacterZoneClient__basesave_poison_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::basesave_poison(), CharacterZoneClient__basesave_poison);
#endif
#ifdef CharacterZoneClient__save_poison_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::save_poison(), CharacterZoneClient__save_poison);
#endif
#ifdef CharacterZoneClient__Str_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Str(), CharacterZoneClient__Str);
#endif
#ifdef CharacterZoneClient__Sta_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Sta(), CharacterZoneClient__Sta);
#endif
#ifdef CharacterZoneClient__Cha_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Cha(), CharacterZoneClient__Cha);
#endif
#ifdef CharacterZoneClient__Dex_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Dex(), CharacterZoneClient__Dex);
#endif
#ifdef CharacterZoneClient__Int_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Int(), CharacterZoneClient__Int);
#endif
#ifdef CharacterZoneClient__Agi_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Agi(), CharacterZoneClient__Agi);
#endif
#ifdef CharacterZoneClient__Wis_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::Wis(), CharacterZoneClient__Wis);
#endif
#ifdef CharacterZoneClient__ApplyFatigue_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ApplyFatigue(int), CharacterZoneClient__ApplyFatigue);
#endif
#ifdef CharacterZoneClient__max_encumbrance_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::max_encumbrance(), CharacterZoneClient__max_encumbrance);
#endif
#ifdef CharacterZoneClient__CanUseItem_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::CanUseItem(const ItemPtr& pItem, bool, bool), CharacterZoneClient__CanUseItem);
#endif
#ifdef CharacterZoneClient__encum_factor_x
FUNCTION_AT_ADDRESS(float, CharacterZoneClient::encum_factor(), CharacterZoneClient__encum_factor);
#endif
#ifdef CharacterZoneClient__cur_encumbrance_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::cur_encumbrance(), CharacterZoneClient__cur_encumbrance);
#endif
#ifdef CharacterZoneClient__Race_x
FUNCTION_AT_ADDRESS(char*, CharacterZoneClient::Race(int), CharacterZoneClient__Race);
#endif
#ifdef CharacterZoneClient__Class_x
FUNCTION_AT_ADDRESS(char*, CharacterZoneClient::Class(int), CharacterZoneClient__Class);
#endif
#ifdef CharacterZoneClient__KunarkClass_x
FUNCTION_AT_ADDRESS(char*, CharacterZoneClient::KunarkClass(int, int, int, bool), CharacterZoneClient__KunarkClass);
#endif
#ifdef CharacterZoneClient__ClassMin_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::ClassMin(int, int, unsigned char), CharacterZoneClient__ClassMin);
#endif
#ifdef CharacterZoneClient__CheckClass_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CheckClass(int, int), CharacterZoneClient__CheckClass);
#endif
#ifdef CharacterZoneClient__CanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanWorship(int, int, unsigned char), CharacterZoneClient__CanWorship);
#endif
#ifdef CharacterZoneClient__HumanCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::HumanCanWorship(unsigned char, unsigned char), CharacterZoneClient__HumanCanWorship);
#endif
#ifdef CharacterZoneClient__BarbarianCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::BarbarianCanWorship(unsigned char, unsigned char), CharacterZoneClient__BarbarianCanWorship);
#endif
#ifdef CharacterZoneClient__EruditeCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::EruditeCanWorship(unsigned char, unsigned char), CharacterZoneClient__EruditeCanWorship);
#endif
#ifdef CharacterZoneClient__ElfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::ElfCanWorship(unsigned char, unsigned char), CharacterZoneClient__ElfCanWorship);
#endif
#ifdef CharacterZoneClient__HighElfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::HighElfCanWorship(unsigned char, unsigned char), CharacterZoneClient__HighElfCanWorship);
#endif
#ifdef CharacterZoneClient__DarkElfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::DarkElfCanWorship(unsigned char, unsigned char), CharacterZoneClient__DarkElfCanWorship);
#endif
#ifdef CharacterZoneClient__HalfElfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::HalfElfCanWorship(unsigned char, unsigned char), CharacterZoneClient__HalfElfCanWorship);
#endif
#ifdef CharacterZoneClient__DwarfCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::DwarfCanWorship(unsigned char, unsigned char), CharacterZoneClient__DwarfCanWorship);
#endif
#ifdef CharacterZoneClient__TrollCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::TrollCanWorship(unsigned char, unsigned char), CharacterZoneClient__TrollCanWorship);
#endif
#ifdef CharacterZoneClient__OgreCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::OgreCanWorship(unsigned char, unsigned char), CharacterZoneClient__OgreCanWorship);
#endif
#ifdef CharacterZoneClient__HalflingCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::HalflingCanWorship(unsigned char, unsigned char), CharacterZoneClient__HalflingCanWorship);
#endif
#ifdef CharacterZoneClient__GnomeCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::GnomeCanWorship(unsigned char, unsigned char), CharacterZoneClient__GnomeCanWorship);
#endif
#ifdef CharacterZoneClient__IksarCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::IksarCanWorship(unsigned char, unsigned char), CharacterZoneClient__IksarCanWorship);
#endif
#ifdef CharacterZoneClient__VahShirCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::VahShirCanWorship(unsigned char, unsigned char), CharacterZoneClient__VahShirCanWorship);
#endif
#ifdef CharacterZoneClient__FroglockCanWorship_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::FroglockCanWorship(unsigned char, unsigned char), CharacterZoneClient__FroglockCanWorship);
#endif
#ifdef CharacterZoneClient__CityCanStart_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CityCanStart(int, int, int, int), CharacterZoneClient__CityCanStart);
#endif
#ifdef CharacterZoneClient__BaseAttr_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::BaseAttr(int, unsigned char), CharacterZoneClient__BaseAttr);
#endif
#ifdef CharacterZoneClient__InitSkills_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::InitSkills(unsigned char, unsigned int), CharacterZoneClient__InitSkills);
#endif
#ifdef CharacterZoneClient__InitInnates_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::InitInnates(unsigned int, unsigned int), CharacterZoneClient__InitInnates);
#endif
#ifdef CharacterZoneClient__IsSpecialBazaarSpot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::IsSpecialBazaarSpot(EQPlayer*), CharacterZoneClient__IsSpecialBazaarSpot);
#endif
#ifdef CharacterZoneClient__CanSecondaryAttack_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanSecondaryAttack(EQPlayer*), CharacterZoneClient__CanSecondaryAttack);
#endif
#ifdef CharacterZoneClient__CanDoubleAttack_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanDoubleAttack(EQPlayer*, unsigned char), CharacterZoneClient__CanDoubleAttack);
#endif
#ifdef CharacterZoneClient__AntiTwinkAdj_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::AntiTwinkAdj(EQ_Equipment*, int, int), CharacterZoneClient__AntiTwinkAdj);
#endif
#ifdef CharacterZoneClient__GetSkillBaseDamage_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::GetSkillBaseDamage(unsigned char, EQPlayer*), CharacterZoneClient__GetSkillBaseDamage);
#endif
#ifdef CharacterZoneClient__UseSkill_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::UseSkill(unsigned char skill, PlayerZoneClient* target), CharacterZoneClient__UseSkill);
#endif
#ifdef CharacterZoneClient__DoIntimidationEvent_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoIntimidationEvent(), CharacterZoneClient__DoIntimidationEvent);
#endif
#ifdef CharacterZoneClient__DoFishingEvent_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoFishingEvent(), CharacterZoneClient__DoFishingEvent);
#endif
#ifdef CharacterZoneClient__FindClosest_x
FUNCTION_AT_ADDRESS(EQPlayer*, CharacterZoneClient::FindClosest(int, int, int, int, int), CharacterZoneClient__FindClosest);
#endif
#ifdef CharacterZoneClient__IAmDead_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::IAmDead(struct _EQMissileHitinfo*, int), CharacterZoneClient__IAmDead);
#endif
#ifdef CharacterZoneClient__TotalOnPerson_x
FUNCTION_AT_ADDRESS(long, CharacterZoneClient::TotalOnPerson(), CharacterZoneClient__TotalOnPerson);
#endif
#ifdef CharacterZoneClient__ItemSold_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ItemSold(long), CharacterZoneClient__ItemSold);
#endif
#ifdef CharacterZoneClient__TakeFallDamage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::TakeFallDamage(float), CharacterZoneClient__TakeFallDamage);
#endif
#ifdef CharacterZoneClient__IHaveSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::IHaveSkill(unsigned char), CharacterZoneClient__IHaveSkill);
#endif
#ifdef CharacterZoneClient__NoMezMe_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::NoMezMe(int, EQPlayer*, EQ_Spell*), CharacterZoneClient__NoMezMe);
#endif
#ifdef CharacterZoneClient__NoBashMe_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::NoBashMe(int), CharacterZoneClient__NoBashMe);
#endif
#ifdef CharacterZoneClient__StunMe_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::StunMe(unsigned int, bool, bool, bool), CharacterZoneClient__StunMe);
#endif
#ifdef CharacterZoneClient__UnStunMe_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::UnStunMe(), CharacterZoneClient__UnStunMe);
#endif
#ifdef CharacterZoneClient__ApplyDamage_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ApplyDamage(int, struct _EQMissileHitinfo*, bool, HateListEntry*, bool), CharacterZoneClient__ApplyDamage);
#endif
#ifdef CharacterZoneClient__NotifyPCAffectChange_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::NotifyPCAffectChange(int, int), CharacterZoneClient__NotifyPCAffectChange);
#endif
#ifdef CharacterZoneClient__UpdateMyVisibleStatus_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::UpdateMyVisibleStatus(), CharacterZoneClient__UpdateMyVisibleStatus);
#endif
#ifdef CharacterZoneClient__CanISeeInvis_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanISeeInvis(), CharacterZoneClient__CanISeeInvis);
#endif
#ifdef CharacterZoneClient__CanIBreathe_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanIBreathe(), CharacterZoneClient__CanIBreathe);
#endif
#ifdef CharacterZoneClient__ProcessEnvironment_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ProcessEnvironment(), CharacterZoneClient__ProcessEnvironment);
#endif
#ifdef CharacterZoneClient__ProcessHungerandThirst_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ProcessHungerandThirst(unsigned int), CharacterZoneClient__ProcessHungerandThirst);
#endif
#ifdef CharacterZoneClient__ItemSpellAffects_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ItemSpellAffects(int), CharacterZoneClient__ItemSpellAffects);
#endif
#ifdef CharacterZoneClient__ProcessAllStats_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ProcessAllStats(), CharacterZoneClient__ProcessAllStats);
#endif
#ifdef CharacterZoneClient__DoPassageOfTime_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoPassageOfTime(), CharacterZoneClient__DoPassageOfTime);
#endif
#ifdef CharacterZoneClient__FindItemByClass_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::FindItemByClass(int, int*, int*), CharacterZoneClient__FindItemByClass);
#endif
#ifdef CharacterZoneClient__FindItemQty_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::FindItemQty(int, int), CharacterZoneClient__FindItemQty);
#endif
#ifdef CharacterZoneClient__CanMedOnHorse_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CanMedOnHorse(), CharacterZoneClient__CanMedOnHorse);
#endif
#ifdef CharacterZoneClient__ExpendItemCharge_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::ExpendItemCharge(int, int), CharacterZoneClient__ExpendItemCharge);
#endif
#ifdef CharacterZoneClient__AutoEat_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::AutoEat(unsigned char), CharacterZoneClient__AutoEat);
#endif
#ifdef CharacterZoneClient__CheckFoodAndWater_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CheckFoodAndWater(), CharacterZoneClient__CheckFoodAndWater);
#endif
#ifdef CharacterZoneClient__DoMeditation_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::DoMeditation(), CharacterZoneClient__DoMeditation);
#endif
#ifdef CharacterZoneClient__SetLocalVar_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::SetLocalVar(char*, int), CharacterZoneClient__SetLocalVar);
#endif
#ifdef CharacterZoneClient__GetIndexSkillMinDamageMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetIndexSkillMinDamageMod(int), CharacterZoneClient__GetIndexSkillMinDamageMod);
#endif
#ifdef CharacterZoneClient__GetFocusConserveRegChance_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFocusConserveRegChance(EQ_Spell const*, EQ_Equipment**), CharacterZoneClient__GetFocusConserveRegChance);
#endif
#ifdef CharacterZoneClient__GetFocusCastingTimeModifier_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFocusCastingTimeModifier(const EQ_Spell* pSpell, ItemPtr& pItemOut, bool bEvalOnly), CharacterZoneClient__GetFocusCastingTimeModifier);
#endif
#ifdef CharacterZoneClient__GetFocusItem_x
FUNCTION_AT_ADDRESS(EQ_Equipment*, CharacterZoneClient::GetFocusItem(EQ_Spell const*, int), CharacterZoneClient__GetFocusItem);
#endif
#ifdef CharacterZoneClient__GetFocusEffect_x
FUNCTION_AT_ADDRESS(EQ_Spell*, CharacterZoneClient::GetFocusEffect(EQ_Spell const*, int), CharacterZoneClient__GetFocusEffect);
#endif
#ifdef CharacterZoneClient__DoesSpellMatchFocusFilters_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::DoesSpellMatchFocusFilters(EQ_Spell const*, EQ_Spell const*), CharacterZoneClient__DoesSpellMatchFocusFilters);
#endif
#ifdef CharacterZoneClient__GetMyPetPlayer_x
FUNCTION_AT_ADDRESS(EQPlayer*, CharacterZoneClient::GetMyPetPlayer(), CharacterZoneClient__GetMyPetPlayer);
#endif
#ifdef CharacterZoneClient__SetEffectId_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::SetEffectId(unsigned char, unsigned int), CharacterZoneClient__SetEffectId);
#endif
#ifdef CharacterZoneClient__CastSpell_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CastSpell(unsigned char gemid, int spellid, const ItemPtr& ppItem, const ItemGlobalIndex&, enum ItemSpellTypes slot, unsigned char spell_loc, int arg7, int arg8, int arg9, bool arg10), CharacterZoneClient__CastSpell);
#endif
#ifdef CharacterZoneClient__GetBardInstrumentMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetBardInstrumentMod(int), CharacterZoneClient__GetBardInstrumentMod);
#endif
#ifdef CharacterZoneClient__CalculateBardSongMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::CalculateBardSongMod(int), CharacterZoneClient__CalculateBardSongMod);
#endif
#ifdef CharacterZoneClient__CastingRequirementsMet_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::CastingRequirementsMet(int), CharacterZoneClient__CastingRequirementsMet);
#endif
#ifdef CharacterZoneClient__GetCastingTimeModifier_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetCastingTimeModifier(const EQ_Spell*), CharacterZoneClient__GetCastingTimeModifier);
#endif
#ifdef CharacterZoneClient__IsValidAffect_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::IsValidAffect(int), CharacterZoneClient__IsValidAffect);
#endif
#ifdef CharacterZoneClient__HandleSpecialPCAffects_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::HandleSpecialPCAffects(int), CharacterZoneClient__HandleSpecialPCAffects);
#endif
#ifdef CharacterZoneClient__GetPCSpellAffect_x
FUNCTION_AT_ADDRESS(EQ_Affect*, CharacterZoneClient::GetPCSpellAffect(int theaffect, int* slotnum, int* spaslot) const, CharacterZoneClient__GetPCSpellAffect);
#endif
#ifdef CharacterZoneClient__TotalSpellAffects_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::TotalSpellAffects(unsigned char, bool, int*), CharacterZoneClient__TotalSpellAffects);
#endif
#ifdef CharacterZoneClient__IsSpellAffectingPC_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::IsSpellAffectingPC(int, int), CharacterZoneClient__IsSpellAffectingPC);
#endif
#ifdef CharacterZoneClient__SpellFizzled_x
FUNCTION_AT_ADDRESS(unsigned char, CharacterZoneClient::SpellFizzled(unsigned char, EQ_Spell*), CharacterZoneClient__SpellFizzled);
#endif
#ifdef CharacterZoneClient__ProcessAffects_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::ProcessAffects(), CharacterZoneClient__ProcessAffects);
#endif
#ifdef CharacterZoneClient__GetOpenEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetOpenEffectSlot(bool, int), CharacterZoneClient__GetOpenEffectSlot);
#endif
#ifdef CharacterZoneClient__GetFirstEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFirstEffectSlot(bool), CharacterZoneClient__GetFirstEffectSlot);
#endif
#ifdef CharacterZoneClient__GetLastEffectSlot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetLastEffectSlot(bool), CharacterZoneClient__GetLastEffectSlot);
#endif
#ifdef CharacterZoneClient__IsSpellTooPowerfull_x
FUNCTION_AT_ADDRESS(bool, CharacterZoneClient::IsSpellTooPowerfull(EQ_Spell*, CharacterZoneClient*), CharacterZoneClient__IsSpellTooPowerfull);
#endif
#ifdef CharacterZoneClient__HitBySpell_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::HitBySpell(struct _EQMissileHitinfo*), CharacterZoneClient__HitBySpell);
#endif
#ifdef CharacterZoneClient__EQSPA_Feign_Death_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::EQSPA_Feign_Death(int), CharacterZoneClient__EQSPA_Feign_Death);
#endif
#ifdef CharacterZoneClient__SpellDuration_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::SpellDuration(EQ_Spell const*, uint8_t, uint8_t), CharacterZoneClient__SpellDuration);
#endif
#ifdef CharacterZoneClient__eqspa_change_form_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::eqspa_change_form(EQ_Spell*, int, int, EQ_Affect*), CharacterZoneClient__eqspa_change_form);
#endif
#ifdef CharacterZoneClient__eqspa_movement_rate_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::eqspa_movement_rate(int), CharacterZoneClient__eqspa_movement_rate);
#endif
#ifdef CharacterZoneClient__eqspa_levitation_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::eqspa_levitation(), CharacterZoneClient__eqspa_levitation);
#endif
#ifdef CharacterZoneClient__eqspa_hp_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::eqspa_hp(unsigned int, EQ_Affect*, int, EQ_Spell*), CharacterZoneClient__eqspa_hp);
#endif
#ifdef CharacterZoneClient__eqspa_locate_corpse_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::eqspa_locate_corpse(), CharacterZoneClient__eqspa_locate_corpse);
#endif
#ifdef CharacterZoneClient__InSpecialBindSpot_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::InSpecialBindSpot(EQPlayer*), CharacterZoneClient__InSpecialBindSpot);
#endif
#ifdef CharacterZoneClient__RemovePCAffect_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::RemovePCAffect(EQ_Affect*), CharacterZoneClient__RemovePCAffect);
#endif
#ifdef CharacterZoneClient__RemovePCAffectex_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::RemovePCAffectex(EQ_Affect*, bool, ArrayClass<LaunchSpellData*>&, int, int, int), CharacterZoneClient__RemovePCAffectex);
#endif
#ifdef CharacterZoneClient__StopSpellCast_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::StopSpellCast(unsigned char), CharacterZoneClient__StopSpellCast);
#endif
#ifdef CharacterZoneClient__StopSpellCast1_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::StopSpellCast(unsigned char, int), CharacterZoneClient__StopSpellCast1);
#endif
#ifdef CharacterZoneClient__ReCachSpellEffects_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ReCachSpellEffects(), CharacterZoneClient__ReCachSpellEffects);
#endif
#ifdef CharacterZoneClient__ReCachItemEffects_x
FUNCTION_AT_ADDRESS(void, CharacterZoneClient::ReCachItemEffects(), CharacterZoneClient__ReCachItemEffects);
#endif
#ifdef CharacterZoneClient__GetCachEQSPA_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetCachEQSPA(int), CharacterZoneClient__GetCachEQSPA);
#endif
#ifdef PcClient__GetConLevel_x
FUNCTION_AT_ADDRESS(unsigned long, PcClient::GetConLevel(const PlayerClient*), PcClient__GetConLevel);
#endif
#ifdef CharacterZoneClient__TotalEffect_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::TotalEffect(int, bool, int, bool, bool) const, CharacterZoneClient__TotalEffect);
#endif
#ifdef CharacterZoneClient__GetAdjustedSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetAdjustedSkill(int), CharacterZoneClient__GetAdjustedSkill);
#endif
#ifdef CharacterZoneClient__GetBaseSkill_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetBaseSkill(int), CharacterZoneClient__GetBaseSkill);
#endif
#ifdef CharacterZoneClient__GetCurrentMod_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetCurrentMod(int index), CharacterZoneClient__GetCurrentMod);
#endif
#ifdef CharacterZoneClient__GetModCap_x
FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetModCap(int index), CharacterZoneClient__GetModCap);
#endif

FUNCTION_AT_VIRTUAL_ADDRESS(int, CharacterZoneClient::CalculateInvisLevel(InvisibleTypes, bool bIncludeSos), 0x40);

FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFocusReuseMod(const EQ_Spell*, ItemPtr& pOutItem), CharacterZoneClient__GetFocusReuseMod)

FUNCTION_AT_ADDRESS(int, CharacterZoneClient::GetFocusRangeModifier(const EQ_Spell* pSpell, ItemPtr& pOutItem), CharacterZoneClient__GetFocusRangeModifier);

//----------------------------------------------------------------------------
// PcZoneClient
//----------------------------------------------------------------------------

#ifdef PcZoneClient__GetPcSkillLimit_x
FUNCTION_AT_ADDRESS(int, PcZoneClient::GetPcSkillLimit(int, bool), PcZoneClient__GetPcSkillLimit);
#endif
#ifdef PcZoneClient__HasCombatAbility_x
FUNCTION_AT_ADDRESS(bool, PcZoneClient::HasCombatAbility(int), PcZoneClient__HasCombatAbility);
#endif
#ifdef PcZoneClient__RemovePetEffect_x
FUNCTION_AT_ADDRESS(void, PcZoneClient::RemovePetEffect(int), PcZoneClient__RemovePetEffect);
#endif
#ifdef PcZoneClient__HasAlternateAbility_x
FUNCTION_AT_ADDRESS(bool, PcZoneClient::HasAlternateAbility(int aaindex, int*, bool), PcZoneClient__HasAlternateAbility);
#endif
#ifdef PcZoneClient__GetItemByID_x
FUNCTION_AT_ADDRESS(ItemPtr, PcZoneClient::GetItemByID(int itemid, ItemIndex*), PcZoneClient__GetItemByID);
#endif
#ifdef PcZoneClient__CanEquipItem_x
FUNCTION_AT_ADDRESS(bool, PcZoneClient::CanEquipItem(const ItemPtr& pItem, int slotid, bool bOutputDebug, bool bUseRequiredLevel), PcZoneClient__CanEquipItem);
#endif
#ifdef PcZoneClient__RemoveBuffEffect_x
FUNCTION_AT_ADDRESS(void, PcZoneClient::RemoveBuffEffect(int Index, int SpawnID), PcZoneClient__RemoveBuffEffect);
#endif
#ifdef PcZoneClient__BandolierSwap_x
FUNCTION_AT_ADDRESS(void, PcZoneClient::BandolierSwap(int index), PcZoneClient__BandolierSwap);
#endif
#ifdef PcZoneClient__GetLinkedSpellReuseTimer_x
FUNCTION_AT_ADDRESS(uint32_t, PcZoneClient::GetLinkedSpellReuseTimer(int index), PcZoneClient__GetLinkedSpellReuseTimer);
#endif
#ifdef PcZoneClient__doCombatAbility_x
FUNCTION_AT_ADDRESS(bool, PcZoneClient::DoCombatAbility(int spellID, bool allowLowerRank), PcZoneClient__doCombatAbility);
#endif
#ifdef PcZoneClient__DestroyHeldItemOrMoney_x
FUNCTION_AT_ADDRESS(void, PcZoneClient::DestroyHeldItemOrMoney(), PcZoneClient__DestroyHeldItemOrMoney);
#endif

// TODO: Rename defines
#ifdef EQ_PC__EQ_PC_x
FUNCTION_AT_ADDRESS(PcClient::PcZoneClient(PcZoneClient*), EQ_PC__EQ_PC);
#endif
#ifdef EQ_PC__dEQ_PC_x
FUNCTION_AT_ADDRESS(PcClient::~PcZoneClient(), EQ_PC__dEQ_PC);
#endif
#ifdef EQ_PC__ClearSharedVault_x
FUNCTION_AT_ADDRESS(void, PcClient::ClearSharedVault(), EQ_PC__ClearSharedVault);
#endif
#ifdef EQ_PC__IsAGroupMember_x
FUNCTION_AT_ADDRESS(int, PcClient::IsAGroupMember(char*), EQ_PC__IsAGroupMember);
#endif
#ifdef EQ_PC__CheckForGroupChanges_x
FUNCTION_AT_ADDRESS(void, PcClient::CheckForGroupChanges(), EQ_PC__CheckForGroupChanges);
#endif
#ifdef EQ_PC__UnpackMyNetPC_x
FUNCTION_AT_ADDRESS(void, PcClient::UnpackMyNetPC(char*, int), EQ_PC__UnpackMyNetPC);
#endif
#ifdef PcClient__AlertInventoryChanged_x
FUNCTION_AT_ADDRESS(void, PcClient::AlertInventoryChanged(), PcClient__AlertInventoryChanged);
#endif
#ifdef EQ_PC__InitPlayerStart_x
FUNCTION_AT_ADDRESS(void, PcClient::InitPlayerStart(unsigned int, unsigned char, int), EQ_PC__InitPlayerStart);
#endif
#ifdef EQ_PC__EmptyPossessionSlots_x
FUNCTION_AT_ADDRESS(void, PcClient::EmptyPossessionSlots(), EQ_PC__EmptyPossessionSlots);
#endif
#ifdef EQ_PC__RefreshMe_x
FUNCTION_AT_ADDRESS(void, PcClient::RefreshMe(int), EQ_PC__RefreshMe);
#endif
#ifdef EQ_PC__PrepareForRepop_x
FUNCTION_AT_ADDRESS(void, PcClient::PrepareForRepop(int), EQ_PC__PrepareForRepop);
#endif
#ifdef EQ_PC__RefitNewbieEQ_x
FUNCTION_AT_ADDRESS(void, PcClient::RefitNewbieEQ(), EQ_PC__RefitNewbieEQ);
#endif
#ifdef PcZoneClient__RemoveMyAffect_x
FUNCTION_AT_ADDRESS(unsigned char, PcClient::RemoveMyAffect(int), PcZoneClient__RemoveMyAffect);
#endif
#ifdef EQ_PC__ProcessFatigue_x
FUNCTION_AT_ADDRESS(void, PcClient::ProcessFatigue(), EQ_PC__ProcessFatigue);
#endif
#ifdef EQ_PC__CheckDupLoreItems_x
FUNCTION_AT_ADDRESS(int, PcClient::CheckDupLoreItems(), EQ_PC__CheckDupLoreItems);
#endif
#ifdef EQ_PC__CostToTrain_x
FUNCTION_AT_ADDRESS(int, PcClient::CostToTrain(int, float, int), EQ_PC__CostToTrain);
#endif
#ifdef EQ_PC__checkLang_x
FUNCTION_AT_ADDRESS(int, PcClient::checkLang(int), EQ_PC__checkLang);
#endif
#ifdef EQ_PC__HandleMoney_x
FUNCTION_AT_ADDRESS(int, PcClient::HandleMoney(long), EQ_PC__HandleMoney);
#endif
#ifdef EQ_PC__DetermineQuestExpGained_x
FUNCTION_AT_ADDRESS(void, PcClient::DetermineQuestExpGained(int), EQ_PC__DetermineQuestExpGained);
#endif
#ifdef EQ_PC__ProcessAirSupply_x
FUNCTION_AT_ADDRESS(void, PcClient::ProcessAirSupply(), EQ_PC__ProcessAirSupply);
#endif
#ifdef EQ_PC__MaxAirSupply_x
FUNCTION_AT_ADDRESS(int, PcClient::MaxAirSupply(), EQ_PC__MaxAirSupply);
#endif
#ifdef EQ_PC__SetFatigue_x
FUNCTION_AT_ADDRESS(void, PcClient::SetFatigue(int), EQ_PC__SetFatigue);
#endif
#ifdef EQ_PC__numInParty_x
FUNCTION_AT_ADDRESS(int, PcClient::numInParty(), EQ_PC__numInParty);
#endif
#ifdef EQ_PC__AtSkillLimit_x
FUNCTION_AT_ADDRESS(unsigned char, PcClient::AtSkillLimit(int), EQ_PC__AtSkillLimit);
#endif
#ifdef PcZoneClient__GetItemRecastTimer_x
FUNCTION_AT_ADDRESS(uint32_t, PcZoneClient::_GetItemRecastTimer(const ItemPtr& item), PcZoneClient__GetItemRecastTimer);
#endif
#ifdef PcBase__GetAlternateAbilityId_x
FUNCTION_AT_ADDRESS(int, PcClient::GetAlternateAbilityId(int), PcBase__GetAlternateAbilityId);
#endif
#ifdef PcBase__GetCombatAbility_x
FUNCTION_AT_ADDRESS(int, PcClient::GetCombatAbility(int), PcBase__GetCombatAbility);
#endif
#ifdef PcBase__GetCombatAbilityTimer_x
FUNCTION_AT_ADDRESS(uint32_t, PcClient::_GetCombatAbilityTimer(int), PcBase__GetCombatAbilityTimer);
#endif
#ifdef PcClient__HasLoreItem_x
FUNCTION_AT_ADDRESS(bool, PcClient::HasLoreItem(const ItemPtr&, bool, bool, bool, bool), PcClient__HasLoreItem);
#endif
#ifdef PcBase__GetItemContainedRealEstateIds_x
FUNCTION_AT_ADDRESS(void, PcClient::GetItemContainedRealEstateIds(ArrayClass<ItemContainingRealEstate>&, bool, bool, bool), PcBase__GetItemContainedRealEstateIds);
#endif
#ifdef PcBase__GetNonArchivedOwnedRealEstates_x
FUNCTION_AT_ADDRESS(void, PcClient::GetNonArchivedOwnedRealEstates(ArrayClass<int>&), PcBase__GetNonArchivedOwnedRealEstates);
#endif
#ifdef EQ_PC__CheckForLanguageImprovement_x
FUNCTION_AT_ADDRESS(void, PcClient::CheckForLanguageImprovement(unsigned char, unsigned char), EQ_PC__CheckForLanguageImprovement);
#endif
#ifdef EQ_PC__CheckSkillImprove_x
FUNCTION_AT_ADDRESS(void, PcClient::CheckSkillImprove(int, float), EQ_PC__CheckSkillImprove);
#endif
#ifdef EQ_PC__GetBodyTint_x
FUNCTION_AT_ADDRESS(unsigned long, PcClient::GetBodyTint(int), EQ_PC__GetBodyTint);
#endif
#ifdef EQ_PC__SetAltAbilityIndex_x
FUNCTION_AT_ADDRESS(void, PcClient::SetAltAbilityIndex(int, int), EQ_PC__SetAltAbilityIndex);
#endif
#ifdef EQ_PC__GetArmorTint_x
FUNCTION_AT_ADDRESS(unsigned long, PcClient::GetArmorTint(int), EQ_PC__GetArmorTint);
#endif
#ifdef EQ_PC__SetArmorTint_x
FUNCTION_AT_ADDRESS(void, PcClient::SetArmorTint(int, unsigned long), EQ_PC__SetArmorTint);
#endif
#ifdef EQ_PC__GetArmorType_x
FUNCTION_AT_ADDRESS(int, PcClient::GetArmorType(int), EQ_PC__GetArmorType);
#endif
#ifdef EQ_PC__SetArmorType_x
FUNCTION_AT_ADDRESS(void, PcClient::SetArmorType(int, int), EQ_PC__SetArmorType);
#endif
#ifdef EQ_PC__InitializeNewPCVariables_x
FUNCTION_AT_ADDRESS(void, PcClient::InitializeNewPCVariables(int), EQ_PC__InitializeNewPCVariables);
#endif

//============================================================================
// Function Addresses: PcProfile
//============================================================================

//----------------------------------------------------------------------------
// ProfileManager
//----------------------------------------------------------------------------

#ifdef ProfileManager__GetCurrentProfile_x
//FUNCTION_AT_ADDRESS(BaseProfile*, ProfileManager::GetCurrentProfile(), ProfileManager__GetCurrentProfile);
#endif

//============================================================================
// Function Addresses: PlayerClient
//============================================================================

//----------------------------------------------------------------------------
// EQPlayer
//----------------------------------------------------------------------------

#ifdef EQPlayer__GetGuild_x
FUNCTION_AT_ADDRESS(int, EQPlayer::GetGuild() const, EQPlayer__GetGuild);
#endif
#ifdef EQPlayer__DoCamAi_x
FUNCTION_AT_ADDRESS(void, EQPlayer::DoCamAi(), EQPlayer__DoCamAi);
#endif
#ifdef EQPlayer__CanIFitHere_x
FUNCTION_AT_ADDRESS(bool, PlayerZoneClient::CanIFitHere(const CVector3&, bool), EQPlayer__CanIFitHere);
#endif
#ifdef EQPlayer__MovePlayer_x
FUNCTION_AT_ADDRESS(int, PlayerZoneClient::MovePlayer(), EQPlayer__MovePlayer);
#endif
#ifdef EQPlayer__EQPlayer_x
FUNCTION_AT_ADDRESS(void, PlayerClient::Initialize(PlayerClient*, unsigned char, unsigned int, unsigned char, char*), EQPlayer__EQPlayer);
#endif
#ifdef EQPlayer__dEQPlayer_x
FUNCTION_AT_ADDRESS(PlayerClient::~PlayerClient(), EQPlayer__dEQPlayer);
#endif
#ifdef EQPlayer__ResetVariables_x
FUNCTION_AT_ADDRESS(void, EQPlayer::ResetVariables(), EQPlayer__ResetVariables);
#endif
#ifdef PlayerClient__do_change_form_x
FUNCTION_AT_ADDRESS(void, PlayerClient::do_change_form(chngForm*, bool, bool), PlayerClient__do_change_form);
#endif
#ifdef EQPlayer__DisplayWeaponsAndArmor_x
FUNCTION_AT_ADDRESS(void, EQPlayer::DisplayWeaponsAndArmor(), EQPlayer__DisplayWeaponsAndArmor);
#endif
#ifdef EQPlayer__CleanUpTarget_x
FUNCTION_AT_ADDRESS(void, EQPlayer::CleanUpTarget(), EQPlayer__CleanUpTarget);
#endif
#ifdef EQPlayer__FollowPlayerAI_x
FUNCTION_AT_ADDRESS(void, EQPlayer::FollowPlayerAI(), EQPlayer__FollowPlayerAI);
#endif
#ifdef EQPlayer__TurnOffAutoFollow_x
FUNCTION_AT_ADDRESS(void, EQPlayer::TurnOffAutoFollow(), EQPlayer__TurnOffAutoFollow);
#endif
#ifdef EQPlayer__AimAtTarget_x
FUNCTION_AT_ADDRESS(int, EQPlayer::AimAtTarget(EQPlayer*, EQMissile*), EQPlayer__AimAtTarget);
#endif
#ifdef EQPlayer__FacePlayer_x
FUNCTION_AT_ADDRESS(void, EQPlayer::FacePlayer(EQPlayer*), EQPlayer__FacePlayer);
#endif
#ifdef EQPlayer__CleanUpVehicle_x
FUNCTION_AT_ADDRESS(void, EQPlayer::CleanUpVehicle(), EQPlayer__CleanUpVehicle);
#endif
#ifdef EQPlayer__CleanUpMyEffects_x
FUNCTION_AT_ADDRESS(void, EQPlayer::CleanUpMyEffects(), EQPlayer__CleanUpMyEffects);
#endif
#ifdef EQPlayer__GetPlayerFromName_x
FUNCTION_AT_ADDRESS(EQPlayer* __cdecl, EQPlayer::GetPlayerFromName(const char*), EQPlayer__GetPlayerFromName);
#endif
#ifdef EQPlayer__GetPlayerFromPartialName_x
FUNCTION_AT_ADDRESS(EQPlayer* __cdecl, EQPlayer::GetPlayerFromPartialName(char*), EQPlayer__GetPlayerFromPartialName);
#endif
#ifdef EQPlayer__GetClosestPlayerFromPartialName_x
FUNCTION_AT_ADDRESS(EQPlayer* __cdecl, EQPlayer::GetClosestPlayerFromPartialName(char*, EQPlayer*), EQPlayer__GetClosestPlayerFromPartialName);
#endif
#ifdef EQPlayer__IsPlayerActor_x
FUNCTION_AT_ADDRESS(EQPlayer* __cdecl, EQPlayer::IsPlayerActor(struct T3D_tagACTORINSTANCE*), EQPlayer__IsPlayerActor);
#endif
#ifdef EQPlayer__TackOnNeuterChar_x
FUNCTION_AT_ADDRESS(void __cdecl, EQPlayer::TackOnNeuterChar(char*, unsigned int), EQPlayer__TackOnNeuterChar);
#endif
#ifdef EQPlayer__GetActorTag_x
FUNCTION_AT_ADDRESS(void, EQPlayer::GetActorTag(char*), EQPlayer__GetActorTag);
#endif
#ifdef EQPlayer__GetPCActorTag_x
FUNCTION_AT_ADDRESS(void __cdecl, EQPlayer::GetPCActorTag(char*, unsigned int, unsigned char), EQPlayer__GetPCActorTag);
#endif
#ifdef EQPlayer__NotOnSameDeity_x
FUNCTION_AT_ADDRESS(int, EQPlayer::NotOnSameDeity(EQPlayer*, EQ_Spell*), EQPlayer__NotOnSameDeity);
#endif
#ifdef EQPlayer__SetAnimVariation_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetAnimVariation(), EQPlayer__SetAnimVariation);
#endif
#ifdef EQPlayer__SetAfk_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetAfk(int), EQPlayer__SetAfk);
#endif
#ifdef EQPlayer__AllowedToAttack_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::AllowedToAttack(EQPlayer*, int), EQPlayer__AllowedToAttack);
#endif
#ifdef EQPlayer__CanIHit_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::CanIHit(EQPlayer*, float), EQPlayer__CanIHit);
#endif
#ifdef PlayerBase__CanSee_x
FUNCTION_AT_ADDRESS(bool, PlayerBase::CanSee(const PlayerBase&), PlayerBase__CanSee);
#endif
#ifdef PlayerBase__CanSee1_x
FUNCTION_AT_ADDRESS(bool, PlayerBase::CanSee(const CVector3& pos), PlayerBase__CanSee1);
#endif
#ifdef EQPlayer__ModifyAttackSpeed_x
FUNCTION_AT_ADDRESS(unsigned int, EQPlayer::ModifyAttackSpeed(unsigned int, int), EQPlayer__ModifyAttackSpeed);
#endif
#ifdef PlayerZoneClient__DoAttack_x
FUNCTION_AT_ADDRESS(bool, PlayerZoneClient::DoAttack(BYTE, BYTE, PlayerZoneClient*), PlayerZoneClient__DoAttack);
#endif
#ifdef EQPlayer__HandleAmmo_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::HandleAmmo(), EQPlayer__HandleAmmo);
#endif
#ifdef EQPlayer__TriggerSpellEffect_x
FUNCTION_AT_ADDRESS(void, EQPlayer::TriggerSpellEffect(struct _EQMissileHitinfo*), EQPlayer__TriggerSpellEffect);
#endif
#ifdef EQPlayer__IWasHit_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::IWasHit(struct _EQMissileHitinfo*), EQPlayer__IWasHit);
#endif
#ifdef EQPlayer__GetConscious_x
FUNCTION_AT_ADDRESS(void, EQPlayer::GetConscious(), EQPlayer__GetConscious);
#endif
#ifdef EQPlayer__KnockedOut_x
FUNCTION_AT_ADDRESS(void, EQPlayer::KnockedOut(), EQPlayer__KnockedOut);
#endif
#ifdef EQPlayer__IDied_x
FUNCTION_AT_ADDRESS(void, EQPlayer::IDied(struct _EQPlayerDeath*), EQPlayer__IDied);
#endif
#ifdef EQPlayer__HandoverControlToZoneserver_x
FUNCTION_AT_ADDRESS(void, EQPlayer::HandoverControlToZoneserver(), EQPlayer__HandoverControlToZoneserver);
#endif
#ifdef EQPlayer__TouchingSwitch_x
FUNCTION_AT_ADDRESS(void, EQPlayer::TouchingSwitch(), EQPlayer__TouchingSwitch);
#endif
#ifdef EQPlayer__MyFeetAreOnGround_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::MyFeetAreOnGround(), EQPlayer__MyFeetAreOnGround);
#endif
#ifdef EQPlayer__IHaveFallen_x
FUNCTION_AT_ADDRESS(void, EQPlayer::IHaveFallen(float), EQPlayer__IHaveFallen);
#endif
#ifdef EQPlayer__SkillUsed_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::SkillUsed(unsigned char), EQPlayer__SkillUsed);
#endif
#ifdef EQPlayer__BodyEnvironmentChange_x
FUNCTION_AT_ADDRESS(void, EQPlayer::BodyEnvironmentChange(unsigned char), EQPlayer__BodyEnvironmentChange);
#endif
#ifdef EQPlayer__FeetEnvironmentChange_x
FUNCTION_AT_ADDRESS(void, EQPlayer::FeetEnvironmentChange(unsigned char), EQPlayer__FeetEnvironmentChange);
#endif
#ifdef EQPlayer__HeadEnvironmentChange_x
FUNCTION_AT_ADDRESS(void, EQPlayer::HeadEnvironmentChange(unsigned char), EQPlayer__HeadEnvironmentChange);
#endif
#ifdef EQPlayer__DeleteMyMissiles_x
FUNCTION_AT_ADDRESS(void, EQPlayer::DeleteMyMissiles(), EQPlayer__DeleteMyMissiles);
#endif
#ifdef EQPlayer__ChangePosition_x
FUNCTION_AT_ADDRESS(void, EQPlayer::ChangePosition(unsigned char), EQPlayer__ChangePosition);
#endif
#ifdef EQPlayer__ChangeHeight_x
FUNCTION_AT_ADDRESS(void, PlayerZoneClient::ChangeHeight(float), EQPlayer__ChangeHeight);
#endif
#ifdef EQPlayer__PositionOnFloor_x
FUNCTION_AT_ADDRESS(void, EQPlayer::PositionOnFloor(), EQPlayer__PositionOnFloor);
#endif
#ifdef EQPlayer__IsRoleplaying_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::IsRoleplaying(), EQPlayer__IsRoleplaying);
#endif
#ifdef EQPlayer__IsInvited_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::IsInvited(), EQPlayer__IsInvited);
#endif
#ifdef EQPlayer__SetInvited_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetInvited(bool), EQPlayer__SetInvited);
#endif
#ifdef EQPlayer__PlaySoundA_x
FUNCTION_AT_ADDRESS(void, EQPlayer::PlaySoundA(int), EQPlayer__PlaySoundA);
#endif
#ifdef EQPlayer__SetSounds_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetSounds(), EQPlayer__SetSounds);
#endif
#ifdef EQPlayer__SetCurrentLoopSound_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetCurrentLoopSound(int), EQPlayer__SetCurrentLoopSound);
#endif
#ifdef EQPlayer__IsFlyer_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::IsFlyer(), EQPlayer__IsFlyer);
#endif
#ifdef EQPlayer__InitSneakMod_x
FUNCTION_AT_ADDRESS(void, EQPlayer::InitSneakMod(), EQPlayer__InitSneakMod);
#endif
#ifdef EQPlayer__SetHeights_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetHeights(), EQPlayer__SetHeights);
#endif
#ifdef EQPlayer__GetDefaultHeight_x
FUNCTION_AT_ADDRESS(float, EQPlayer::GetDefaultHeight(int, unsigned char), EQPlayer__GetDefaultHeight);
#endif
#ifdef EQPlayer__ComputeSpecialHeights_x
FUNCTION_AT_ADDRESS(void __cdecl, EQPlayer::ComputeSpecialHeights(int, float*, float*, float*, float*, bool), EQPlayer__ComputeSpecialHeights);
#endif
#ifdef EQPlayer__IsUntexturedHorse_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::IsUntexturedHorse(), EQPlayer__IsUntexturedHorse);
#endif
#ifdef EQPlayer__HasInvalidRiderTexture_x
FUNCTION_AT_ADDRESS(bool const, EQPlayer::HasInvalidRiderTexture() const, EQPlayer__HasInvalidRiderTexture);
#endif
#ifdef EQPlayer__ForceInvisible_x
FUNCTION_AT_ADDRESS(void, EQPlayer::ForceInvisible(bool), EQPlayer__ForceInvisible);
#endif
#ifdef EQPlayer__MountableRace_x
FUNCTION_AT_ADDRESS(int, EQPlayer::MountableRace(), EQPlayer__MountableRace);
#endif
#ifdef EQPlayer__MakeRiderMountUp_x
FUNCTION_AT_ADDRESS(void, EQPlayer::MakeRiderMountUp(), EQPlayer__MakeRiderMountUp);
#endif
#ifdef EQPlayer__MountEQPlayer_x
FUNCTION_AT_ADDRESS(void, EQPlayer::MountEQPlayer(EQPlayer*), EQPlayer__MountEQPlayer);
#endif
#ifdef EQPlayer__Dismount_x
FUNCTION_AT_ADDRESS(void, EQPlayer::Dismount(), EQPlayer__Dismount);
#endif
#ifdef EQPlayer__GetArmorType_x
FUNCTION_AT_ADDRESS(int, EQPlayer::GetArmorType(int), EQPlayer__GetArmorType);
#endif
#ifdef EQPlayer__SetArmorType_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetArmorType(int, int), EQPlayer__SetArmorType);
#endif
#ifdef EQPlayer__GetArmorTint_x
FUNCTION_AT_ADDRESS(unsigned long, EQPlayer::GetArmorTint(int), EQPlayer__GetArmorTint);
#endif
#ifdef EQPlayer__SetArmorTint_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetArmorTint(int, unsigned long), EQPlayer__SetArmorTint);
#endif
#ifdef EQPlayer__SetAccel_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetAccel(float, int), EQPlayer__SetAccel);
#endif
#ifdef EQPlayer__SetToRandomRace_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetToRandomRace(), EQPlayer__SetToRandomRace);
#endif
#ifdef EQPlayer__GetBaseFaceNbr_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::GetBaseFaceNbr(int, unsigned char*), EQPlayer__GetBaseFaceNbr);
#endif
#ifdef EQPlayer__HasAttachedBeard_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::HasAttachedBeard(), EQPlayer__HasAttachedBeard);
#endif
#ifdef EQPlayer__HasAttachedHair_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::HasAttachedHair(), EQPlayer__HasAttachedHair);
#endif
#ifdef EQPlayer__SetDefaultFacialFeaturesByFace_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetDefaultFacialFeaturesByFace(int, unsigned char, unsigned char), EQPlayer__SetDefaultFacialFeaturesByFace);
#endif
#ifdef EQPlayer__GetAllowedHairColorIndexRange_x
FUNCTION_AT_ADDRESS(void, EQPlayer::GetAllowedHairColorIndexRange(int, int*, int*), EQPlayer__GetAllowedHairColorIndexRange);
#endif
#ifdef EQPlayer__CanBeBald_x
FUNCTION_AT_ADDRESS(int, EQPlayer::CanBeBald(), EQPlayer__CanBeBald);
#endif
#ifdef EQPlayer__ChangeNoGravity_x
FUNCTION_AT_ADDRESS(void, EQPlayer::ChangeNoGravity(int), EQPlayer__ChangeNoGravity);
#endif
#ifdef EQPlayer__IdUsed_x
FUNCTION_AT_ADDRESS(int, EQPlayer::IdUsed(unsigned int), EQPlayer__IdUsed);
#endif
#ifdef EQPlayer__GetUnusedID_x
FUNCTION_AT_ADDRESS(unsigned int, EQPlayer::GetUnusedID(), EQPlayer__GetUnusedID);
#endif
#ifdef EQPlayer__SetAndReserveID_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetAndReserveID(unsigned int), EQPlayer__SetAndReserveID);
#endif
#ifdef EQPlayer__InitializeIDArray_x
FUNCTION_AT_ADDRESS(void, EQPlayer::InitializeIDArray(), EQPlayer__InitializeIDArray);
#endif
#ifdef EQPlayer__Levitating_x
FUNCTION_AT_ADDRESS(int, PlayerZoneClient::Levitating(), EQPlayer__Levitating);
#endif
#ifdef EQPlayer__SetRace_x
FUNCTION_AT_ADDRESS(void, PlayerZoneClient::SetRace(int), EQPlayer__SetRace);
#endif
#ifdef EQPlayer__CanChangeForm_x
FUNCTION_AT_ADDRESS(bool, PlayerZoneClient::CanChangeForm(int Race, BYTE Sex, float Height), EQPlayer__CanChangeForm);
#endif
#ifdef EQPlayer__SetNameSpriteState_x
FUNCTION_AT_ADDRESS(int, PlayerClient::SetNameSpriteState(bool), EQPlayer__SetNameSpriteState);
#endif
#ifdef PlayerClient__ChangeBoneStringSprite_x
FUNCTION_AT_ADDRESS(void, PlayerClient::ChangeBoneStringSprite(int, const char*), PlayerClient__ChangeBoneStringSprite);
#endif
#ifdef EQPlayer__SetNameSpriteTint_x
FUNCTION_AT_ADDRESS(bool, PlayerClient::SetNameSpriteTint(), EQPlayer__SetNameSpriteTint);
#endif
#ifdef EQPlayer__UpdateNameSprite_x
FUNCTION_AT_ADDRESS(void, EQPlayer::UpdateNameSprite(), EQPlayer__UpdateNameSprite);
#endif
#ifdef EQPlayer__UpdateBonePointers_x
FUNCTION_AT_ADDRESS(void, EQPlayer::UpdateBonePointers(), EQPlayer__UpdateBonePointers);
#endif
#ifdef EQPlayer__FindDefaultEyeMaterialIndexes_x
FUNCTION_AT_ADDRESS(void, EQPlayer::FindDefaultEyeMaterialIndexes(), EQPlayer__FindDefaultEyeMaterialIndexes);
#endif
#ifdef EQPlayer__CalcAnimLength_x
FUNCTION_AT_ADDRESS(unsigned int, EQPlayer::CalcAnimLength(int), EQPlayer__CalcAnimLength);
#endif
#ifdef EQPlayer__GetAlternateTrackNumber_x
FUNCTION_AT_ADDRESS(int, EQPlayer::GetAlternateTrackNumber(int, unsigned char*), EQPlayer__GetAlternateTrackNumber);
#endif
#ifdef EQPlayer__GetAlternateAnimVariation_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::GetAlternateAnimVariation(int, unsigned char), EQPlayer__GetAlternateAnimVariation);
#endif
#ifdef EQPlayer__GetRaceSexITOffset_x
FUNCTION_AT_ADDRESS(int, EQPlayer::GetRaceSexITOffset(), EQPlayer__GetRaceSexITOffset);
#endif
#ifdef EQPlayer__UpdatePlayerVisibility_x
FUNCTION_AT_ADDRESS(void, EQPlayer::UpdatePlayerVisibility(), EQPlayer__UpdatePlayerVisibility);
#endif
#ifdef EQPlayer__UpdateAllPlayersVisibility_x
FUNCTION_AT_ADDRESS(void __cdecl, EQPlayer::UpdateAllPlayersVisibility(), EQPlayer__UpdateAllPlayersVisibility);
#endif
#ifdef EQPlayer__SetEyeMaterial_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SetEyeMaterial(unsigned char, int), EQPlayer__SetEyeMaterial);
#endif
#ifdef EQPlayer__HideOrShowAttachedHair_x
FUNCTION_AT_ADDRESS(void, EQPlayer::HideOrShowAttachedHair(), EQPlayer__HideOrShowAttachedHair);
#endif
#ifdef EQPlayer__SetFHEB_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SetFHEB(unsigned char, unsigned char), EQPlayer__SetFHEB);
#endif
#ifdef EQPlayer__SetFHEB_Color_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SetFHEB_Color(unsigned char, unsigned char), EQPlayer__SetFHEB_Color);
#endif
#ifdef EQPlayer__SetHairOrBeard_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SetHairOrBeard(int), EQPlayer__SetHairOrBeard);
#endif
#ifdef EQPlayer__GetBonePointerByITS_x
FUNCTION_AT_ADDRESS(struct T3D_DAG*, EQPlayer::GetBonePointerByITS(int, int), EQPlayer__GetBonePointerByITS);
#endif
#ifdef EQPlayer__UpdateAppearance_x
FUNCTION_AT_ADDRESS(void, EQPlayer::UpdateAppearance(), EQPlayer__UpdateAppearance);
#endif
#ifdef EQPlayer__SetDefaultITAttachments_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetDefaultITAttachments(int), EQPlayer__SetDefaultITAttachments);
#endif
#ifdef EQPlayer__SwapMaterial_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SwapMaterial(int, int, int, int, unsigned char), EQPlayer__SwapMaterial);
#endif
#ifdef EQPlayer__SwapFace_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SwapFace(int, int), EQPlayer__SwapFace);
#endif
#ifdef EQPlayer__GetAttachedHelmITNum_x
FUNCTION_AT_ADDRESS(int, EQPlayer::GetAttachedHelmITNum(int, int*), EQPlayer__GetAttachedHelmITNum);
#endif
#ifdef EQPlayer__SetPlayerConstantAmbient_x
FUNCTION_AT_ADDRESS(void, EQPlayer::SetPlayerConstantAmbient(struct T3D_RGB*), EQPlayer__SetPlayerConstantAmbient);
#endif
#ifdef EQPlayer__SwapHead_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SwapHead(int, int, unsigned long, int), EQPlayer__SwapHead);
#endif
#ifdef EQPlayer__SetPlayerPitchType_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SetPlayerPitchType(), EQPlayer__SetPlayerPitchType);
#endif
#ifdef EQPlayer__ReplaceSpecialCloakMaterials_x
FUNCTION_AT_ADDRESS(int, EQPlayer::ReplaceSpecialCloakMaterials(), EQPlayer__ReplaceSpecialCloakMaterials);
#endif
#ifdef EQPlayer__SwapBody_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SwapBody(int, int), EQPlayer__SwapBody);
#endif
#ifdef EQPlayer__HandleMaterialEx_x
FUNCTION_AT_ADDRESS(void, EQPlayer::HandleMaterialEx(int, unsigned int, unsigned int, unsigned long, int), EQPlayer__HandleMaterialEx);
#endif
#ifdef EQPlayer__UpdateItemSlot_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::UpdateItemSlot(unsigned char, char*, int), EQPlayer__UpdateItemSlot);
#endif
#ifdef EQPlayer__SwapNPCMaterials_x
FUNCTION_AT_ADDRESS(int, EQPlayer::SwapNPCMaterials(), EQPlayer__SwapNPCMaterials);
#endif
#ifdef EQPlayer__PutPlayerOnFloor_x
FUNCTION_AT_ADDRESS(void, EQPlayer::PutPlayerOnFloor(), EQPlayer__PutPlayerOnFloor);
#endif
#ifdef EQPlayer__CheckForUnderFloor_x
FUNCTION_AT_ADDRESS(void, EQPlayer::CheckForUnderFloor(), EQPlayer__CheckForUnderFloor);
#endif
#ifdef EQPlayer__DoFloorCheck_x
FUNCTION_AT_ADDRESS(void, EQPlayer::DoFloorCheck(), EQPlayer__DoFloorCheck);
#endif
#ifdef EQPlayer__DoSwimJump_x
FUNCTION_AT_ADDRESS(void, EQPlayer::DoSwimJump(unsigned char), EQPlayer__DoSwimJump);
#endif
#ifdef EQPlayer__PushAlongHeading_x
FUNCTION_AT_ADDRESS(void, EQPlayer::PushAlongHeading(float), EQPlayer__PushAlongHeading);
#endif
#ifdef EQPlayer__DoTeleport_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::DoTeleport(char*, int), EQPlayer__DoTeleport);
#endif
#ifdef EQPlayer__ChangeLight_x
FUNCTION_AT_ADDRESS(void, EQPlayer::ChangeLight(), EQPlayer__ChangeLight);
#endif
#ifdef EQPlayer__GetBoneCoords_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::GetBoneCoords(struct T3D_DAG*, struct _EQLOC*), EQPlayer__GetBoneCoords);
#endif
#ifdef EQPlayer__CheckForJump_x
FUNCTION_AT_ADDRESS(int, EQPlayer::CheckForJump(), EQPlayer__CheckForJump);
#endif
#ifdef EQPlayer__GetPlayerFloorHeight_x
FUNCTION_AT_ADDRESS(float, EQPlayer::GetPlayerFloorHeight(float, float, float, unsigned char), EQPlayer__GetPlayerFloorHeight);
#endif
#ifdef EQPlayer__UpdatePlayerActor_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::UpdatePlayerActor(), EQPlayer__UpdatePlayerActor);
#endif
#ifdef EQPlayer__GetNearestActorTag_x
FUNCTION_AT_ADDRESS(unsigned char, EQPlayer::GetNearestActorTag(char*, void*), EQPlayer__GetNearestActorTag);
#endif
#ifdef EQPlayer__DoItemSlot_x
FUNCTION_AT_ADDRESS(void, EQPlayer::DoItemSlot(int), EQPlayer__DoItemSlot);
#endif
#ifdef EQPlayer__DoClassRandomAnimation_x
FUNCTION_AT_ADDRESS(void, EQPlayer::DoClassRandomAnimation(), EQPlayer__DoClassRandomAnimation);
#endif
#ifdef EQPlayer__CreateUserLight_x
FUNCTION_AT_ADDRESS(struct T3D_POINTLIGHT*, EQPlayer::CreateUserLight(struct T3D_LIGHTDEFINITION*, int), EQPlayer__CreateUserLight);
#endif
#ifdef EQPlayer__AttachPlayerToPlayerBone_x
FUNCTION_AT_ADDRESS(int, EQPlayer::AttachPlayerToPlayerBone(EQPlayer*, struct T3D_DAG*), EQPlayer__AttachPlayerToPlayerBone);
#endif
#ifdef EQPlayer__IsInvisible_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::IsInvisible(EQPlayer*), EQPlayer__IsInvisible);
#endif
#ifdef EQPlayer__IsAMount_x
FUNCTION_AT_ADDRESS(bool, EQPlayer::IsAMount(), EQPlayer__IsAMount);
#endif
#ifdef PlayerBase__IsTargetable_x
FUNCTION_AT_ADDRESS(bool, PlayerBase::IsTargetable(), PlayerBase__IsTargetable);
#endif

//----------------------------------------------------------------------------
// PlayerManagerBase
//----------------------------------------------------------------------------

#ifdef PlayerManagerBase__DestroyPlayer_x
FUNCTION_AT_ADDRESS(PlayerClient*, PlayerManagerBase::DestroyPlayer(PlayerClient*), PlayerManagerBase__DestroyPlayer);
#endif

//----------------------------------------------------------------------------
// PlayerManagerClient
//----------------------------------------------------------------------------

#ifdef PlayerManagerClient__GetSpawnByID_x
FUNCTION_AT_ADDRESS(PlayerClient*, PlayerManagerClient::GetSpawnByID(int), PlayerManagerClient__GetSpawnByID);
#endif
#ifdef PlayerManagerClient__GetSpawnByName_x
FUNCTION_AT_ADDRESS(PlayerClient*, PlayerManagerClient::GetSpawnByName(const char*), PlayerManagerClient__GetSpawnByName);
#endif
#ifdef PlayerManagerClient__GetPlayerFromPartialName_x
FUNCTION_AT_ADDRESS(PlayerClient*, PlayerManagerClient::GetPlayerFromPartialName(const char*, PlayerBase*), PlayerManagerClient__GetPlayerFromPartialName);
#endif
#ifdef PlayerManagerClient__CreatePlayer_x
FUNCTION_AT_ADDRESS(PlayerClient*, PlayerManagerClient::CreatePlayer(CUnSerializeBuffer*, unsigned char, int, int, const char*, bool, const char*, const char*), PlayerManagerClient__CreatePlayer);
#endif

//----------------------------------------------------------------------------
// PlayerBase
//----------------------------------------------------------------------------

#ifdef PlayerBase__HasProperty_x
FUNCTION_AT_ADDRESS(bool, PlayerBase::HasProperty(int, int, int), PlayerBase__HasProperty);
#endif
#ifdef PlayerBase__GetVisibilityLineSegment_x
//FUNCTION_AT_ADDRESS(CLineSegment, PlayerBase::GetVisibilityLineSegment(const PlayerBase&, unsigned int), PlayerBase__GetVisibilityLineSegment);
#endif

//----------------------------------------------------------------------------
// PlayerZoneClient
//----------------------------------------------------------------------------

#ifdef PlayerZoneClient__GetLevel_x
FUNCTION_AT_ADDRESS(unsigned char, PlayerZoneClient::GetLevel() const, PlayerZoneClient__GetLevel);
#endif
#ifdef PlayerZoneClient__IsValidTeleport_x
FUNCTION_AT_ADDRESS(bool, PlayerZoneClient::IsValidTeleport(float X, float Y, float Z, float Heading, float Distance), PlayerZoneClient__IsValidTeleport);
#endif

//----------------------------------------------------------------------------
// PlayerClient
//----------------------------------------------------------------------------
	
#ifdef PlayerClient__GetPcClient_x
FUNCTION_AT_ADDRESS(PcClient*, PlayerClient::GetPcClient() const, PlayerClient__GetPcClient);
#endif

//============================================================================
// Function Addresses: Spells
//============================================================================

//----------------------------------------------------------------------------
// EQ_Spell
//----------------------------------------------------------------------------

#ifdef EQ_Spell__IsStackableDot_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsStackableDot() const, EQ_Spell__IsStackableDot);
#endif
#ifdef EQ_Spell__IsStackable_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsStackable() const, EQ_Spell__IsStackable);
#endif
#ifdef EQ_Spell__GetSpellAffectBySlot_x
FUNCTION_AT_ADDRESS(const SpellAffectData*, EQ_Spell::GetSpellAffectBySlot(int) const, EQ_Spell__GetSpellAffectBySlot);
#endif
#ifdef EQ_Spell__GetSpellAffectByIndex_x
FUNCTION_AT_ADDRESS(const SpellAffectData*, EQ_Spell::GetSpellAffectByIndex(int) const, EQ_Spell__GetSpellAffectByIndex);
#endif
#ifdef EQ_Spell__IsSPAStacking_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsSPAStacking(int) , EQ_Spell__IsSPAStacking);
#endif
#ifdef EQ_Spell__IsSPAIgnoredByStacking_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsSPAIgnoredByStacking(int) , EQ_Spell__IsSPAIgnoredByStacking);
#endif
#ifdef EQ_Spell__IsNoRemove_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsNoRemove() const, EQ_Spell__IsNoRemove);
#endif
#ifdef EQ_Spell__IsDegeneratingLevelMod_x
FUNCTION_AT_ADDRESS(bool, EQ_Spell::IsDegeneratingLevelMod(int) , EQ_Spell__IsDegeneratingLevelMod);
#endif
#ifdef EQ_Spell__SpellUsesDragonBreathEffect_x
FUNCTION_AT_ADDRESS(int, EQ_Spell::SpellUsesDragonBreathEffect(), EQ_Spell__SpellUsesDragonBreathEffect);
#endif
#ifdef EQ_Spell__EQ_Spell_x
FUNCTION_AT_ADDRESS(EQ_Spell::EQ_Spell(char*), EQ_Spell__EQ_Spell);
#endif
#ifdef EQ_Spell__dEQ_Spell_x
FUNCTION_AT_ADDRESS(EQ_Spell::~EQ_Spell(), EQ_Spell__dEQ_Spell);
#endif
#ifdef EQ_Spell__SpellAffects_x
FUNCTION_AT_ADDRESS(unsigned char, EQ_Spell::SpellAffects(int) const, EQ_Spell__SpellAffects);
#endif
#ifdef EQ_Spell__IsPermIllusionSpell_x
FUNCTION_AT_ADDRESS(int, EQ_Spell::IsPermIllusionSpell() const, EQ_Spell__IsPermIllusionSpell);
#endif
#ifdef EQ_Spell__GetSpellLevelNeeded_x
FUNCTION_AT_ADDRESS(unsigned char, EQ_Spell::GetSpellLevelNeeded(EQClass) const, EQ_Spell__GetSpellLevelNeeded);
#endif
#ifdef EQ_Spell__SpellAffectBase_x
FUNCTION_AT_ADDRESS(int, EQ_Spell::SpellAffectBase(int) const, EQ_Spell__SpellAffectBase);
#endif

//============================================================================
// Function Addresses: UI
//============================================================================

//----------------------------------------------------------------------------
// CEQSuiteTextureLoader
//----------------------------------------------------------------------------

#ifdef CEQSuiteTextureLoader__dCEQSuiteTextureLoader_x
FUNCTION_AT_ADDRESS(CEQSuiteTextureLoader::~CEQSuiteTextureLoader(), CEQSuiteTextureLoader__dCEQSuiteTextureLoader);
#endif
#ifdef CEQSuiteTextureLoader__CreateTexture_x
FUNCTION_AT_ADDRESS(unsigned int, CEQSuiteTextureLoader::CreateTexture(const CUITextureInfo&), CEQSuiteTextureLoader__CreateTexture);
#endif
#ifdef CEQSuiteTextureLoader__UnloadAllTextures_x
FUNCTION_AT_ADDRESS(void, CEQSuiteTextureLoader::UnloadAllTextures(), CEQSuiteTextureLoader__UnloadAllTextures);
#endif
#ifdef CEQSuiteTextureLoader__GetTexture_x
FUNCTION_AT_ADDRESS(BMI*, CEQSuiteTextureLoader::GetTexture(const CUITextureInfo& ti), CEQSuiteTextureLoader__GetTexture);
#endif
#ifdef CEQSuiteTextureLoader__GetDefaultUIPath_x
FUNCTION_AT_ADDRESS(const CXStr&, CEQSuiteTextureLoader::GetDefaultUIPath(int DirType) const, CEQSuiteTextureLoader__GetDefaultUIPath);
#endif
#ifdef CEQSuiteTextureLoader__CEQSuiteTextureLoader_x
FUNCTION_AT_ADDRESS(CEQSuiteTextureLoader::CEQSuiteTextureLoader(), CEQSuiteTextureLoader__CEQSuiteTextureLoader);
#endif

//----------------------------------------------------------------------------
// CTextureFont
//----------------------------------------------------------------------------

#ifdef CTextureFont__GetWidth_x
FUNCTION_AT_ADDRESS(int, CTextureFont::GetWidth(unsigned short) const, CTextureFont__GetWidth);
#endif
#ifdef CTextureFont__GetKerning_x
FUNCTION_AT_ADDRESS(int, CTextureFont::GetKerning(unsigned short, unsigned short) const, CTextureFont__GetKerning);
#endif
#ifdef CTextureFont__GetTextExtent_x
FUNCTION_AT_ADDRESS(int, CTextureFont::GetTextExtent(const CXStr&), CTextureFont__GetTextExtent);
#endif
#ifdef CTextureFont__GetHeight_x
FUNCTION_AT_ADDRESS(int, CTextureFont::GetHeight() const, CTextureFont__GetHeight);
#endif
#ifdef CTextureFont__GetName_x
FUNCTION_AT_ADDRESS(CXStr, CTextureFont::GetName() const, CTextureFont__GetName);
#endif
#ifdef CTextureFont__DrawWrappedText_x
FUNCTION_AT_ADDRESS(int, CTextureFont::DrawWrappedText(const CXStr&, int, int, int, const CXRect&, COLORREF, uint16_t, int) const, CTextureFont__DrawWrappedText);
#endif
#ifdef CTextureFont__DrawWrappedText1_x
FUNCTION_AT_ADDRESS(int, CTextureFont::DrawWrappedText(const CXStr&, const CXRect&, const CXRect&, COLORREF, uint16_t, int) const, CTextureFont__DrawWrappedText1);
#endif
#ifdef CTextureFont__DrawWrappedText2_x
FUNCTION_AT_ADDRESS(int, CTextureFont::DrawWrappedText(CTextObjectInterface*, const CXStr&, const CXRect&, const CXRect&, COLORREF, uint16_t, int) const, CTextureFont__DrawWrappedText);
#endif

//----------------------------------------------------------------------------
// CCheckBoxWnd
//----------------------------------------------------------------------------

#ifdef CCheckBoxWnd__CCheckBoxWnd_x
FUNCTION_AT_ADDRESS(CCheckBoxWnd::CCheckBoxWnd(CXWnd*, uint32_t, CXRect, class CXPoint, CXSize, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*), CCheckBoxWnd__CCheckBoxWnd);
#endif
#ifdef CCheckBoxWnd__SetRadioLook_x
FUNCTION_AT_ADDRESS(void, CCheckBoxWnd::SetRadioLook(), CCheckBoxWnd__SetRadioLook);
#endif

//----------------------------------------------------------------------------
// CComboWnd
//----------------------------------------------------------------------------

#ifdef CComboWnd__GetListRect_x
FUNCTION_AT_ADDRESS(CXRect, CComboWnd::GetListRect() const, CComboWnd__GetListRect);
#endif
#ifdef CComboWnd__SetColors_x
FUNCTION_AT_ADDRESS(void, CComboWnd::SetColors(COLORREF, COLORREF, COLORREF), CComboWnd__SetColors);
#endif
#ifdef CComboWnd__InsertChoice_x
FUNCTION_AT_ADDRESS(int, CComboWnd::InsertChoice(const CXStr&, uint32_t), CComboWnd__InsertChoice);
#endif
#ifdef CComboWnd__SetChoice_x
FUNCTION_AT_ADDRESS(void, CComboWnd::SetChoice(int), CComboWnd__SetChoice);
#endif
#ifdef CComboWnd__GetItemCount_x
FUNCTION_AT_ADDRESS(int, CComboWnd::GetItemCount(), CComboWnd__GetItemCount);
#endif
#ifdef CComboWnd__DeleteAll_x
FUNCTION_AT_ADDRESS(void, CComboWnd::DeleteAll(), CComboWnd__DeleteAll);
#endif

//----------------------------------------------------------------------------
// CEditWnd
//----------------------------------------------------------------------------

// CEditBaseWnd
#ifdef CEditBaseWnd__SetMaxChars_x
FUNCTION_AT_ADDRESS(void, CEditBaseWnd::SetMaxChars(int), CEditBaseWnd__SetMaxChars);
#endif
#ifdef CEditBaseWnd__SetSel_x
FUNCTION_AT_ADDRESS(void, CEditBaseWnd::SetSel(int, int), CEditBaseWnd__SetSel);
#endif

// CEditWnd
#ifdef CEditWnd__GetLineForPrintableChar_x
FUNCTION_AT_ADDRESS(int, CEditWnd::GetLineForPrintableChar(int) const, CEditWnd__GetLineForPrintableChar);
#endif
#ifdef CEditWnd__GetLineLength_x
FUNCTION_AT_ADDRESS(int, CEditWnd::GetLineLength(int) const, CEditWnd__GetLineLength);
#endif
#ifdef CEditWnd__FillIndexArray_x
FUNCTION_AT_ADDRESS(void, CEditWnd::FillIndexArray(CXStr) const, CEditWnd__FillIndexArray);
#endif
#ifdef CEditWnd__SelectableCharFromPoint_x
FUNCTION_AT_ADDRESS(int, CEditWnd::SelectableCharFromPoint(CXPoint) const, CEditWnd__SelectableCharFromPoint);
#endif
#ifdef CEditWnd__AddItemTag_x
FUNCTION_AT_ADDRESS(void, CEditWnd::AddItemTag(int, char*, int), CEditWnd__AddItemTag);
#endif
#ifdef CEditWnd__ProcessText_x
FUNCTION_AT_ADDRESS(void, CEditWnd::ProcessText(), CEditWnd__ProcessText);
#endif
#ifdef CEditWnd__FilterInputStr_x
FUNCTION_AT_ADDRESS(void, CEditWnd::FilterInputStr(CXStr&), CEditWnd__FilterInputStr);
#endif
#ifdef CEditWnd__CalculateScrollRange_x
FUNCTION_AT_ADDRESS(void, CEditWnd::CalculateScrollRange(), CEditWnd__CalculateScrollRange);
#endif
#ifdef CEditWnd__EnsureCaretVisible_x
FUNCTION_AT_ADDRESS(void, CEditWnd::EnsureCaretVisible(), CEditWnd__EnsureCaretVisible);
#endif
#ifdef CEditWnd__SetEditable_x
FUNCTION_AT_ADDRESS(void, CEditWnd::SetEditable(bool), CEditWnd__SetEditable);
#endif
#ifdef CEditWnd__SetWindowText_x
FUNCTION_AT_ADDRESS(void, CEditWnd::SetWindowText(const CXStr& Str), CEditWnd__SetWindowText);
#endif
#ifdef CEditWnd__ConvertIndexPrintableToTagged_x
FUNCTION_AT_ADDRESS(int, CEditWnd::ConvertIndexPrintableToTagged(int), CEditWnd__ConvertIndexPrintableToTagged);
#endif
#ifdef CEditWnd__ConvertIndexTaggedToPrintable_x
FUNCTION_AT_ADDRESS(int, CEditWnd::ConvertIndexTaggedToPrintable(int), CEditWnd__ConvertIndexTaggedToPrintable);
#endif

FUNCTION_AT_ADDRESS(CXPoint, CEditWnd::GetCharIndexPt(int) const, CEditWnd__GetCharIndexPt);

//----------------------------------------------------------------------------
// CGuageWnd
//----------------------------------------------------------------------------

#ifdef CGaugeWnd__CGaugeWnd_x
FUNCTION_AT_ADDRESS(CGaugeWnd::CGaugeWnd(CXWnd*, uint32_t, CXRect, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, int, unsigned long, unsigned long, bool, int, int, int, int), CGaugeWnd__CGaugeWnd);
#endif
#ifdef CGaugeWnd__SpecialToolTip_x
FUNCTION_AT_ADDRESS(void, CGaugeWnd::SpecialToolTip(), CGaugeWnd__SpecialToolTip);
#endif

//----------------------------------------------------------------------------
// CHotButton
//----------------------------------------------------------------------------

#ifdef CHotButton__SetButtonSize_x
FUNCTION_AT_ADDRESS(void, CHotButton::SetButtonSize(int percent, bool bUpdateParent), CHotButton__SetButtonSize);
#endif
#ifdef CHotButton__SetCheck_x
FUNCTION_AT_ADDRESS(void, CHotButton::SetCheck(bool), CHotButton__SetCheck);
#endif

//----------------------------------------------------------------------------
// CLabel
//----------------------------------------------------------------------------

#ifdef CLabel__CLabel_x
FUNCTION_AT_ADDRESS(CLabel::CLabel(CXWnd*, uint32_t, CXRect*, int), CLabel__CLabel);
#endif
#ifdef CLabel__SetNoWrap_x
FUNCTION_AT_ADDRESS(void, CLabel::SetNoWrap(bool), CLabel__SetNoWrap);
#endif
#ifdef CLabel__SetAlignRight_x
FUNCTION_AT_ADDRESS(void, CLabel::SetAlignRight(bool), CLabel__SetAlignRight);
#endif
#ifdef CLabel__SetAlignCenter_x
FUNCTION_AT_ADDRESS(void, CLabel::SetAlignCenter(bool), CLabel__SetAlignCenter);
#endif

//----------------------------------------------------------------------------
// CListWnd
//----------------------------------------------------------------------------

#ifdef CListWnd__GetCurSel_x
FUNCTION_AT_ADDRESS(int, CListWnd::GetCurSel() const, CListWnd__GetCurSel);
#endif
#ifdef CListWnd__GetCurCol_x
FUNCTION_AT_ADDRESS(int, CListWnd::GetCurCol() const, CListWnd__GetCurCol);
#endif
#ifdef CListWnd__GetItemData_x
FUNCTION_AT_ADDRESS(uint32_t, CListWnd::GetItemData(int) const, CListWnd__GetItemData);
#endif
#ifdef CListWnd__GetItemText_x
FUNCTION_AT_ADDRESS(CXStr, CListWnd::GetItemText(int, int) const, CListWnd__GetItemText);
#endif
#ifdef CListWnd__GetItemColor_x
FUNCTION_AT_ADDRESS(unsigned long, CListWnd::GetItemColor(int, int) const, CListWnd__GetItemColor);
#endif
#ifdef CListWnd__GetColumnFlags_x
FUNCTION_AT_ADDRESS(uint32_t, CListWnd::GetColumnFlags(int) const, CListWnd__GetColumnFlags);
#endif
#ifdef CListWnd__GetColumnWidth_x
FUNCTION_AT_ADDRESS(int, CListWnd::GetColumnWidth(int) const, CListWnd__GetColumnWidth);
#endif
#ifdef CListWnd__SetColumnWidth_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetColumnWidth(int, int), CListWnd__SetColumnWidth);
#endif
//#ifdef CListWnd__ShiftColumnSeparator_x
//FUNCTION_AT_ADDRESS(void, CListWnd::ShiftColumnSeparator(int, int), CListWnd__ShiftColumnSeparator);
//#endif
#ifdef CListWnd__GetColumnMinWidth_x
FUNCTION_AT_ADDRESS(int, CListWnd::GetColumnMinWidth(int) const, CListWnd__GetColumnMinWidth);
#endif
#ifdef CListWnd__GetColumnJustification_x
FUNCTION_AT_ADDRESS(int, CListWnd::GetColumnJustification(int) const, CListWnd__GetColumnJustification);
#endif
#ifdef CListWnd__SetColumnJustification_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetColumnJustification(int, int), CListWnd__SetColumnJustification);
#endif
#ifdef CListWnd__GetColumnLabel_x
FUNCTION_AT_ADDRESS(CXStr, CListWnd::GetColumnLabel(int) const, CListWnd__GetColumnLabel);
#endif
#ifdef CListWnd__GetColumnAnimation_x
FUNCTION_AT_ADDRESS(CTextureAnimation const*, CListWnd::GetColumnAnimation(int) const, CListWnd__GetColumnAnimation);
#endif
#ifdef CListWnd__GetColumnAnimationSelected_x
FUNCTION_AT_ADDRESS(CTextureAnimation const*, CListWnd::GetColumnAnimationSelected(int) const, CListWnd__GetColumnAnimationSelected);
#endif
#ifdef CListWnd__GetColumnAnimationMouseOver_x
FUNCTION_AT_ADDRESS(CTextureAnimation const*, CListWnd::GetColumnAnimationMouseOver(int) const, CListWnd__GetColumnAnimationMouseOver);
#endif
#ifdef CListWnd__AddLine_x
FUNCTION_AT_ADDRESS(int, CListWnd::AddLine(SListWndLine*), CListWnd__AddLine);
#endif
#ifdef CListWnd__AddString_x
FUNCTION_AT_ADDRESS(int, CListWnd::AddString(const CXStr& Str, COLORREF Color, uint32_t Data, const CTextureAnimation* pTa, const char* TooltipStr), CListWnd__AddString);
#endif
#ifdef CListWnd__RemoveString_x
FUNCTION_AT_ADDRESS(void, CListWnd::RemoveString(int), CListWnd__RemoveString);
#endif
#ifdef CListWnd__InsertLine_x
FUNCTION_AT_ADDRESS(void, CListWnd::InsertLine(int ID, SListWndLine* rEntry), CListWnd__InsertLine);
#endif
#ifdef CListWnd__RemoveLine_x
FUNCTION_AT_ADDRESS(void, CListWnd::RemoveLine(int), CListWnd__RemoveLine);
#endif
#ifdef CListWnd__SetCurSel_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetCurSel(int), CListWnd__SetCurSel);
#endif
#ifdef CListWnd__ToggleSel_x
FUNCTION_AT_ADDRESS(void, CListWnd::ToggleSel(int), CListWnd__ToggleSel);
#endif
#ifdef CListWnd__ExtendSel_x
FUNCTION_AT_ADDRESS(void, CListWnd::ExtendSel(int), CListWnd__ExtendSel);
#endif
#ifdef CListWnd__ClearAllSel_x
FUNCTION_AT_ADDRESS(void, CListWnd::ClearAllSel(), CListWnd__ClearAllSel);
#endif
#ifdef CListWnd__ClearSel_x
FUNCTION_AT_ADDRESS(void, CListWnd::ClearSel(int), CListWnd__ClearSel);
#endif
#ifdef CListWnd__SetColumnsSizable_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetColumnsSizable(bool), CListWnd__SetColumnsSizable);
#endif
#ifdef CListWnd__GetItemWnd_x
FUNCTION_AT_ADDRESS(CXWnd*, CListWnd::GetItemWnd(int Index, int SubItem) const, CListWnd__GetItemWnd);
#endif
#ifdef CListWnd__SetItemIcon_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetItemIcon(int Index, int SubItem, const CTextureAnimation* pTA), CListWnd__SetItemIcon);
#endif
#ifdef CListWnd__CalculateCustomWindowPositions_x
FUNCTION_AT_ADDRESS(void, CListWnd::CalculateCustomWindowPositions(), CListWnd__CalculateCustomWindowPositions);
#endif
#ifdef CListWnd__SetItemWnd_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetItemWnd(int Index, int SubItem, CXWnd* pWnd), CListWnd__SetItemWnd);
#endif
#ifdef CListWnd__SetItemData_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetItemData(int, uint32_t), CListWnd__SetItemData);
#endif
#ifdef CListWnd__SetItemText_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetItemText(int, int, const CXStr&), CListWnd__SetItemText);
#endif
#ifdef CListWnd__SetItemColor_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetItemColor(int, int, unsigned long), CListWnd__SetItemColor);
#endif
#ifdef CListWnd__IsLineEnabled_x
FUNCTION_AT_ADDRESS(bool, CListWnd::IsLineEnabled(int) const, CListWnd__IsLineEnabled);
#endif
#ifdef CListWnd__EnableLine_x
FUNCTION_AT_ADDRESS(void, CListWnd::EnableLine(int, bool), CListWnd__EnableLine);
#endif
#ifdef CListWnd__AddColumn_x
FUNCTION_AT_ADDRESS(int, CListWnd::AddColumn(const CXStr&, int, uint32_t, uint32_t), CListWnd__AddColumn);
#endif
#ifdef CListWnd__AddColumn1_x
// CListWnd::AddColumn implemented in ExceptionsDisabled.cpp
#endif
#ifdef CListWnd__SetColumnLabel_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetColumnLabel(int, const CXStr&), CListWnd__SetColumnLabel);
#endif
#ifdef CListWnd__GetItemHeight_x
FUNCTION_AT_ADDRESS(int, CListWnd::GetItemHeight(int) const, CListWnd__GetItemHeight);
#endif
#ifdef CListWnd__CalculateLineHeights_x
FUNCTION_AT_ADDRESS(void, CListWnd::CalculateLineHeights(), CListWnd__CalculateLineHeights);
#endif
#ifdef CListWnd__CalculateVSBRange_x
FUNCTION_AT_ADDRESS(void, CListWnd::CalculateVSBRange(), CListWnd__CalculateVSBRange);
#endif
#ifdef CListWnd__CalculateFirstVisibleLine_x
FUNCTION_AT_ADDRESS(void, CListWnd::CalculateFirstVisibleLine(), CListWnd__CalculateFirstVisibleLine);
#endif
#ifdef CListWnd__EnsureVisible_x
FUNCTION_AT_ADDRESS(void, CListWnd::EnsureVisible(int), CListWnd__EnsureVisible);
#endif
#ifdef CListWnd__GetItemRect_x
FUNCTION_AT_ADDRESS(CXRect, CListWnd::GetItemRect(int, int) const, CListWnd__GetItemRect);
#endif
#ifdef CListWnd__CloseAndUpdateEditWindow_x
FUNCTION_AT_ADDRESS(void, CListWnd::CloseAndUpdateEditWindow(), CListWnd__CloseAndUpdateEditWindow);
#endif
#ifdef CListWnd__SetColors_x
FUNCTION_AT_ADDRESS(void, CListWnd::SetColors(unsigned long, unsigned long, unsigned long), CListWnd__SetColors);
#endif
#ifdef CListWnd__GetSeparatorRect_x
//FUNCTION_AT_ADDRESS(CXRect, CListWnd::GetSeparatorRect(int) const, CListWnd__GetSeparatorRect);
#endif
#ifdef CListWnd__GetHeaderRect_x
FUNCTION_AT_ADDRESS(CXRect, CListWnd::GetHeaderRect(int) const, CListWnd__GetHeaderRect);
#endif

//----------------------------------------------------------------------------
// CPageWnd
//----------------------------------------------------------------------------

#ifdef CPageWnd__CPageWnd_x
FUNCTION_AT_ADDRESS(CPageWnd::CPageWnd(CXWnd*, uint32_t, CXRect, class CXStr, CPageTemplate*), CPageWnd__CPageWnd);
#endif
#ifdef CPageWnd__FlashTab_x
FUNCTION_AT_ADDRESS(void, CPageWnd::FlashTab(bool, int) const, CPageWnd__FlashTab);
#endif
#ifdef CPageWnd__SetTabText_x
FUNCTION_AT_ADDRESS(void, CPageWnd::SetTabText(CXStr&) const, CPageWnd__SetTabText);
#endif

//----------------------------------------------------------------------------
// CSliderWnd
//----------------------------------------------------------------------------

#ifdef CSliderWnd__CSliderWnd_x
FUNCTION_AT_ADDRESS(CSliderWnd::CSliderWnd(CXWnd*, uint32_t, CXRect, CSliderTemplate*), CSliderWnd__CSliderWnd);
#endif
#ifdef CSliderWnd__SetValue_x
FUNCTION_AT_ADDRESS(void, CSliderWnd::SetValue(int), CSliderWnd__SetValue);
#endif
#ifdef CSliderWnd__SetNumTicks_x
FUNCTION_AT_ADDRESS(void, CSliderWnd::SetNumTicks(int), CSliderWnd__SetNumTicks);
#endif
#ifdef CSliderWnd__UpdateThumb_x
FUNCTION_AT_ADDRESS(void, CSliderWnd::UpdateThumb(), CSliderWnd__UpdateThumb);
#endif
#ifdef CSliderWnd__UpdateMiddleRange_x
FUNCTION_AT_ADDRESS(void, CSliderWnd::UpdateMiddleRange(), CSliderWnd__UpdateMiddleRange);
#endif
#ifdef CSliderWnd__GetValue_x
FUNCTION_AT_ADDRESS(int, CSliderWnd::GetValue() const, CSliderWnd__GetValue);
#endif
#ifdef CSliderWnd__GetMiddleRangeRect_x
FUNCTION_AT_ADDRESS(CXRect, CSliderWnd::GetMiddleRangeRect() const, CSliderWnd__GetMiddleRangeRect);
#endif
#ifdef CSliderWnd__GetEndCapLeftRect_x
FUNCTION_AT_ADDRESS(CXRect, CSliderWnd::GetEndCapLeftRect() const, CSliderWnd__GetEndCapLeftRect);
#endif
#ifdef CSliderWnd__GetEndCapRightRect_x
FUNCTION_AT_ADDRESS(CXRect, CSliderWnd::GetEndCapRightRect() const, CSliderWnd__GetEndCapRightRect);
#endif
#ifdef CSliderWnd__GetThumbRect_x
FUNCTION_AT_ADDRESS(CXRect, CSliderWnd::GetThumbRect() const, CSliderWnd__GetThumbRect);
#endif
#ifdef CSliderWnd__SetThumbToOffset_x
FUNCTION_AT_ADDRESS(void, CSliderWnd::SetThumbToOffset(int), CSliderWnd__SetThumbToOffset);
#endif
#ifdef CSliderWnd__DrawMiddleRange_x
FUNCTION_AT_ADDRESS(int, CSliderWnd::DrawMiddleRange() const, CSliderWnd__DrawMiddleRange);
#endif
#ifdef CSliderWnd__DrawEndCapLeft_x
FUNCTION_AT_ADDRESS(int, CSliderWnd::DrawEndCapLeft() const, CSliderWnd__DrawEndCapLeft);
#endif
#ifdef CSliderWnd__DrawEndCapRight_x
FUNCTION_AT_ADDRESS(int, CSliderWnd::DrawEndCapRight() const, CSliderWnd__DrawEndCapRight);
#endif
#ifdef CSliderWnd__DrawThumb_x
FUNCTION_AT_ADDRESS(int, CSliderWnd::DrawThumb() const, CSliderWnd__DrawThumb);
#endif

//----------------------------------------------------------------------------
// CStmlWnd
//----------------------------------------------------------------------------

#ifdef CStmlWnd__CStmlWnd_x
FUNCTION_AT_ADDRESS(CStmlWnd::CStmlWnd(CXWnd*, uint32_t, CXRect), CStmlWnd__CStmlWnd);
#endif
#ifdef CStmlWnd__InitializeTextLine_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::InitializeTextLine(SParseVariables*, int), CStmlWnd__InitializeTextLine);
#endif
#ifdef CStmlWnd__AddTextPieceToLine_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::AddTextPieceToLine(SParseVariables*), CStmlWnd__AddTextPieceToLine);
#endif
#ifdef CStmlWnd__ParseTagColor_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::ParseTagColor(CXStr, unsigned long*) const, CStmlWnd__ParseTagColor);
#endif
#ifdef CStmlWnd__ParseTagFace_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::ParseTagFace(CXStr, CTextureFont const**) const, CStmlWnd__ParseTagFace);
#endif
#ifdef CStmlWnd__ParseAmpersand_x
FUNCTION_AT_ADDRESS(bool, CStmlWnd::ParseAmpersand(CXStr&, char*) const, CStmlWnd__ParseAmpersand);
#endif
#ifdef CStmlWnd__FastForwardPastSpaces_x
FUNCTION_AT_ADDRESS(unsigned short, CStmlWnd::FastForwardPastSpaces(CXStr&, int*), CStmlWnd__FastForwardPastSpaces);
#endif
#ifdef CStmlWnd__FastForwardPastSpacesAndQuotes_x
FUNCTION_AT_ADDRESS(unsigned short, CStmlWnd::FastForwardPastSpacesAndQuotes(CXStr&, int*), CStmlWnd__FastForwardPastSpacesAndQuotes);
#endif
//#ifdef CStmlWnd__GetNextTagPiece_x
//FUNCTION_AT_ADDRESS(unsigned short, CStmlWnd::GetNextTagPiece(const CXStr&, CXStr*, int*, bool (*)(unsigned short), bool), CStmlWnd__GetNextTagPiece);
//#endif
#ifdef CStmlWnd__IsCharacterNotQuotes_x
FUNCTION_AT_ADDRESS(bool __cdecl, CStmlWnd::IsCharacterNotQuotes(unsigned short), CStmlWnd__IsCharacterNotQuotes);
#endif
#ifdef CStmlWnd__FastForwardPastQuotesAndGetNextTagPiece_x
FUNCTION_AT_ADDRESS(unsigned short, CStmlWnd::FastForwardPastQuotesAndGetNextTagPiece(CXStr&, CXStr*, int*, bool), CStmlWnd__FastForwardPastQuotesAndGetNextTagPiece);
#endif
#ifdef CStmlWnd__FastForwardToEndOfTag_x
FUNCTION_AT_ADDRESS(unsigned short, CStmlWnd::FastForwardToEndOfTag(const CXStr&, CXStr*, int*, char), CStmlWnd__FastForwardToEndOfTag);
#endif
#ifdef CStmlWnd__InitializeTempVariables_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::InitializeTempVariables(SParseVariables*, CXRect), CStmlWnd__InitializeTempVariables);
#endif
//#ifdef CStmlWnd__InitializeWindowVariables_x
//FUNCTION_AT_ADDRESS(void, CStmlWnd::InitializeWindowVariables(), CStmlWnd__InitializeWindowVariables);
//#endif
#ifdef CStmlWnd__ResetTempVariablesForNewLine_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::ResetTempVariablesForNewLine(SParseVariables*), CStmlWnd__ResetTempVariablesForNewLine);
#endif
#ifdef CStmlWnd__GetNextChar_x
FUNCTION_AT_ADDRESS(unsigned short, CStmlWnd::GetNextChar(int*, CXStr&), CStmlWnd__GetNextChar);
#endif
#ifdef CStmlWnd__GetThisChar_x
FUNCTION_AT_ADDRESS(unsigned short, CStmlWnd::GetThisChar(int, CXStr&), CStmlWnd__GetThisChar);
#endif
#ifdef CStmlWnd__IsCharacterNotEquals_x
FUNCTION_AT_ADDRESS(bool __cdecl, CStmlWnd::IsCharacterNotEquals(unsigned short), CStmlWnd__IsCharacterNotEquals);
#endif
#ifdef CStmlWnd__IsCharacterNotASpaceAndNotNULL_x
FUNCTION_AT_ADDRESS(bool __cdecl, CStmlWnd::IsCharacterNotASpaceAndNotNULL(unsigned short), CStmlWnd__IsCharacterNotASpaceAndNotNULL);
#endif
#ifdef CStmlWnd__ParseSTMLHead_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::ParseSTMLHead(CXStr&), CStmlWnd__ParseSTMLHead);
#endif
#ifdef CStmlWnd__ParseSTMLTable_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::ParseSTMLTable(CXStr&, int*, CXStr&, SParseVariables*), CStmlWnd__ParseSTMLTable);
#endif
#ifdef CStmlWnd__ParseSTMLTableAttributes_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::ParseSTMLTableAttributes(CXStr, STable*), CStmlWnd__ParseSTMLTableAttributes);
#endif
#ifdef CStmlWnd__ForceParseNow_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::ForceParseNow(), CStmlWnd__ForceParseNow);
#endif
#ifdef CStmlWnd__CalculateVSBRange_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::CalculateVSBRange(int), CStmlWnd__CalculateVSBRange);
#endif
#ifdef CStmlWnd__CalculateHSBRange_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::CalculateHSBRange(int), CStmlWnd__CalculateHSBRange);
#endif
#ifdef CStmlWnd__CompleteParse_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::CompleteParse(), CStmlWnd__CompleteParse);
#endif
#ifdef CStmlWnd__StripFirstSTMLLines_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::StripFirstSTMLLines(int), CStmlWnd__StripFirstSTMLLines);
#endif
//#ifdef CStmlWnd__CanBreakAtCharacter_x
//FUNCTION_AT_ADDRESS(bool, CStmlWnd::CanBreakAtCharacter(unsigned short), CStmlWnd__CanBreakAtCharacter);
//#endif
#ifdef CStmlWnd__UpdateHistoryString_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::UpdateHistoryString(int32_t, const CXStr&), CStmlWnd__UpdateHistoryString);
#endif
#ifdef CStmlWnd__SetSTMLTextWithoutHistory_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::SetSTMLTextWithoutHistory(CXStr), CStmlWnd__SetSTMLTextWithoutHistory);
#endif
#ifdef CStmlWnd__GoToBackHistoryLink_x
FUNCTION_AT_ADDRESS(void, CStmlWnd::GoToBackHistoryLink(), CStmlWnd__GoToBackHistoryLink);
#endif
#ifdef CStmlWnd__CanGoBackward_x
FUNCTION_AT_ADDRESS(bool, CStmlWnd::CanGoBackward(), CStmlWnd__CanGoBackward);
#endif

FUNCTION_AT_ADDRESS(CXStr, CStmlWnd::MakeWndNotificationTag(uint32_t, const CXStr&, const CXStr&), CStmlWnd__MakeWndNotificationTag);
FUNCTION_AT_ADDRESS(CXStr, STMLToText(const CXStr&, bool), __STMLToText);

//----------------------------------------------------------------------------
// CTabWnd
//----------------------------------------------------------------------------

#ifdef CTabWnd__CTabWnd_x
FUNCTION_AT_ADDRESS(CTabWnd::CTabWnd(CXWnd* pParent, UINT uId, RECT* rect, CTabBoxTemplate* pTabContents), CTabWnd__CTabWnd);
#endif
#ifdef CTabWnd__GetPageClientRect_x
FUNCTION_AT_ADDRESS(CXRect, CTabWnd::GetPageClientRect() const, CTabWnd__GetPageClientRect);
#endif
#ifdef CTabWnd__SetPage_x
FUNCTION_AT_ADDRESS(void, CTabWnd::SetPage(int, bool), CTabWnd__SetPage);
#endif
#ifdef CTabWnd__InsertPage_x
FUNCTION_AT_ADDRESS(void, CTabWnd::InsertPage(CPageWnd*, int), CTabWnd__InsertPage);
#endif
//#ifdef CTabWnd__SetPageRect_x
//FUNCTION_AT_ADDRESS(void, CTabWnd::SetPageRect(const CXRect&), CTabWnd__SetPageRect);
//#endif
#ifdef CTabWnd__UpdatePage_x
FUNCTION_AT_ADDRESS(void, CTabWnd::UpdatePage(), CTabWnd__UpdatePage);
#endif
#ifdef CTabWnd__IndexInBounds_x
FUNCTION_AT_ADDRESS(bool, CTabWnd::IndexInBounds(int) const, CTabWnd__IndexInBounds);
#endif
#ifdef CTabWnd__GetPageFromTabPoint_x
FUNCTION_AT_ADDRESS(CPageWnd*, CTabWnd::GetPageFromTabPoint(CXPoint) const, CTabWnd__GetPageFromTabPoint);
#endif
#ifdef CTabWnd__DrawTab_x
FUNCTION_AT_ADDRESS(int, CTabWnd::DrawTab(int) const, CTabWnd__DrawTab);
#endif
#ifdef CTabWnd__DrawCurrentPage_x
FUNCTION_AT_ADDRESS(int, CTabWnd::DrawCurrentPage() const, CTabWnd__DrawCurrentPage);
#endif

FUNCTION_AT_ADDRESS(CXRect, CTabWnd::GetTabRect(int) const, CTabWnd__GetTabRect);

//----------------------------------------------------------------------------
// CAAWnd
//----------------------------------------------------------------------------

#ifdef CAAWnd__ShowAbility_x
FUNCTION_AT_ADDRESS(bool, CAAWnd::ShowAbility(int), CAAWnd__ShowAbility);
#endif
#ifdef CAAWnd__Update_x
FUNCTION_AT_ADDRESS(void, CAAWnd::Update(bool), CAAWnd__Update);
#endif
#ifdef CAAWnd__UpdateSelected_x
FUNCTION_AT_ADDRESS(void, CAAWnd::UpdateSelected(void), CAAWnd__UpdateSelected);
#endif

//----------------------------------------------------------------------------
// CActionsWnd
//----------------------------------------------------------------------------

#ifdef CActionsWnd__MainPageActivate_x
FUNCTION_AT_ADDRESS(int, CActionsWnd::MainPageActivate(), CActionsWnd__MainPageActivate);
#endif
#ifdef CActionsWnd__MainPageDeactivate_x
FUNCTION_AT_ADDRESS(int, CActionsWnd::MainPageDeactivate(), CActionsWnd__MainPageDeactivate);
#endif
#ifdef CActionsWnd__SocialsPageDeactivate_x
FUNCTION_AT_ADDRESS(int, CActionsWnd::SocialsPageDeactivate(), CActionsWnd__SocialsPageDeactivate);
#endif

//----------------------------------------------------------------------------
// CAdvancedLootWnd
//----------------------------------------------------------------------------

#ifdef CAdvancedLootWnd__DoAdvLootAction_x
FUNCTION_AT_ADDRESS(void, CAdvancedLootWnd::DoAdvLootAction(int, const CXStr&, bool, int), CAdvancedLootWnd__DoAdvLootAction);
#endif
#ifdef CAdvancedLootWnd__DoSharedAdvLootAction_x
FUNCTION_AT_ADDRESS(void, CAdvancedLootWnd::DoSharedAdvLootAction(const AdvancedLootItem& pLootItem, const CXStr& Assignee, bool Action, int Quantity), CAdvancedLootWnd__DoSharedAdvLootAction);
#endif

//----------------------------------------------------------------------------
// CBankWnd
//----------------------------------------------------------------------------

#ifdef CBankWnd__ClickedMoneyButton_x
FUNCTION_AT_ADDRESS(void, CBankWnd::ClickedMoneyButton(int, int), CBankWnd__ClickedMoneyButton);
#endif
#ifdef CBankWnd__GetBankQtyFromCoinType_x
FUNCTION_AT_ADDRESS(long, CBankWnd::GetBankQtyFromCoinType(int), CBankWnd__GetBankQtyFromCoinType);
#endif
#ifdef CBankWnd__UpdateMoneyDisplay_x
FUNCTION_AT_ADDRESS(void, CBankWnd::UpdateMoneyDisplay(), CBankWnd__UpdateMoneyDisplay);
#endif
#ifdef CBankWnd__GetNumBankSlots_x
FUNCTION_AT_ADDRESS(int, CBankWnd::GetNumBankSlots() const, CBankWnd__GetNumBankSlots);
#endif
#ifdef CBankWnd__AutoBank_x
FUNCTION_AT_ADDRESS(void, CBankWnd::AutoBank(bool bCanCombine), CBankWnd__AutoBank);
#endif

//----------------------------------------------------------------------------
// CBazaarSearchWnd
//----------------------------------------------------------------------------

#ifdef CBazaarSearchWnd__UpdatePlayerUpdateButton_x
FUNCTION_AT_ADDRESS(void, CBazaarSearchWnd::UpdatePlayerUpdateButton(bool), CBazaarSearchWnd__UpdatePlayerUpdateButton);
#endif
#ifdef CBazaarSearchWnd__UpdatePlayerCombo_x
FUNCTION_AT_ADDRESS(void, CBazaarSearchWnd::UpdatePlayerCombo(), CBazaarSearchWnd__UpdatePlayerCombo);
#endif
#ifdef CBazaarSearchWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CBazaarSearchWnd::Activate(), CBazaarSearchWnd__Activate);
#endif
#ifdef CBazaarSearchWnd__GetPriceString_x
FUNCTION_AT_ADDRESS(char*, CBazaarSearchWnd::GetPriceString(unsigned long), CBazaarSearchWnd__GetPriceString);
#endif
#ifdef CBazaarSearchWnd__SortItemList_x
FUNCTION_AT_ADDRESS(void, CBazaarSearchWnd::SortItemList(int), CBazaarSearchWnd__SortItemList);
#endif
#ifdef CBazaarSearchWnd__AddItemtoList_x
FUNCTION_AT_ADDRESS(void, CBazaarSearchWnd::AddItemtoList(char*, unsigned long, char*, int, int), CBazaarSearchWnd__AddItemtoList);
#endif
#ifdef CBazaarSearchWnd__UpdateComboButtons_x
FUNCTION_AT_ADDRESS(void, CBazaarSearchWnd::UpdateComboButtons(), CBazaarSearchWnd__UpdateComboButtons);
#endif
#ifdef CBazaarSearchWnd__HandleBazaarMsg_x
FUNCTION_AT_ADDRESS(void, CBazaarSearchWnd::HandleBazaarMsg(char*, int), CBazaarSearchWnd__HandleBazaarMsg);
#endif
#ifdef CBazaarSearchWnd__doQuery_x
FUNCTION_AT_ADDRESS(void, CBazaarSearchWnd::doQuery(), CBazaarSearchWnd__doQuery);
#endif

//----------------------------------------------------------------------------
// CBazaarWnd
//----------------------------------------------------------------------------

#ifdef CBazaarWnd__CreateBZRIniFilename_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::CreateBZRIniFilename(), CBazaarWnd__CreateBZRIniFilename);
#endif
#ifdef CBazaarWnd__AddBazaarText_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::AddBazaarText(char*, int), CBazaarWnd__AddBazaarText);
#endif
#ifdef CBazaarWnd__ReturnItemByIndex_x
FUNCTION_AT_ADDRESS(ItemPtr, CBazaarWnd::ReturnItemByIndex(int), CBazaarWnd__ReturnItemByIndex);
#endif
#ifdef CBazaarWnd__GetPriceString_x
FUNCTION_AT_ADDRESS(char*, CBazaarWnd::GetPriceString(unsigned long), CBazaarWnd__GetPriceString);
#endif
#ifdef CBazaarWnd__HandleTraderMsg_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::HandleTraderMsg(char*), CBazaarWnd__HandleTraderMsg);
#endif
#ifdef CBazaarWnd__RebuildItemArray_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::RebuildItemArray(), CBazaarWnd__RebuildItemArray);
#endif
#ifdef CBazaarWnd__BuildBazaarItemArray_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::BuildBazaarItemArray(), CBazaarWnd__BuildBazaarItemArray);
#endif
#ifdef CBazaarWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::Activate(), CBazaarWnd__Activate);
#endif
#ifdef CBazaarWnd__UpdatePriceButtons_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::UpdatePriceButtons(), CBazaarWnd__UpdatePriceButtons);
#endif
#ifdef CBazaarWnd__StoreSelectedPrice_x
FUNCTION_AT_ADDRESS(bool, CBazaarWnd::StoreSelectedPrice(), CBazaarWnd__StoreSelectedPrice);
#endif
#ifdef CBazaarWnd__UpdateButtons_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::UpdateButtons(), CBazaarWnd__UpdateButtons);
#endif
#ifdef CBazaarWnd__SelectBazaarSlotItem_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::SelectBazaarSlotItem(int, CTextureAnimation*), CBazaarWnd__SelectBazaarSlotItem);
#endif
#ifdef CBazaarWnd__SetMoneyButton_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::SetMoneyButton(int, int), CBazaarWnd__SetMoneyButton);
#endif
#ifdef CBazaarWnd__GetQtyFromCoinType_x
FUNCTION_AT_ADDRESS(long, CBazaarWnd::GetQtyFromCoinType(int), CBazaarWnd__GetQtyFromCoinType);
#endif
#ifdef CBazaarWnd__ClickedMoneyButton_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::ClickedMoneyButton(int, int), CBazaarWnd__ClickedMoneyButton);
#endif
#ifdef CBazaarWnd__GetPrice_x
FUNCTION_AT_ADDRESS(unsigned long, CBazaarWnd::GetPrice(), CBazaarWnd__GetPrice);
#endif
#ifdef CBazaarWnd__UpdateBazaarListtoServer_x
FUNCTION_AT_ADDRESS(int, CBazaarWnd::UpdateBazaarListtoServer(), CBazaarWnd__UpdateBazaarListtoServer);
#endif
#ifdef CBazaarWnd__ToggleBzrItemActive_x
FUNCTION_AT_ADDRESS(void, CBazaarWnd::ToggleBzrItemActive(int, bool), CBazaarWnd__ToggleBzrItemActive);
#endif

//----------------------------------------------------------------------------
// CBodyTintWnd
//----------------------------------------------------------------------------

#ifdef CBodyTintWnd__GetTintChangeCount_x
FUNCTION_AT_ADDRESS(void, CBodyTintWnd::GetTintChangeCount(), CBodyTintWnd__GetTintChangeCount);
#endif
#ifdef CBodyTintWnd__GetReagentCount_x
FUNCTION_AT_ADDRESS(void, CBodyTintWnd::GetReagentCount(), CBodyTintWnd__GetReagentCount);
#endif
#ifdef CBodyTintWnd__BuildRBGTooltip_x
FUNCTION_AT_ADDRESS(char*, CBodyTintWnd::BuildRBGTooltip(unsigned long, char* const), CBodyTintWnd__BuildRBGTooltip);
#endif
#ifdef CBodyTintWnd__GetItemTint_x
FUNCTION_AT_ADDRESS(unsigned long, CBodyTintWnd::GetItemTint(int), CBodyTintWnd__GetItemTint);
#endif
#ifdef CBodyTintWnd__SetSlotLabels_x
FUNCTION_AT_ADDRESS(void, CBodyTintWnd::SetSlotLabels(bool), CBodyTintWnd__SetSlotLabels);
#endif
#ifdef CBodyTintWnd__UpdateLocalTintColor_x
FUNCTION_AT_ADDRESS(void, CBodyTintWnd::UpdateLocalTintColor(unsigned long), CBodyTintWnd__UpdateLocalTintColor);
#endif
#ifdef CBodyTintWnd__UpdateMaterialTintLocal_x
FUNCTION_AT_ADDRESS(void, CBodyTintWnd::UpdateMaterialTintLocal(unsigned long), CBodyTintWnd__UpdateMaterialTintLocal);
#endif
#ifdef CBodyTintWnd__UpdateLabelsAndButtons_x
FUNCTION_AT_ADDRESS(void, CBodyTintWnd::UpdateLabelsAndButtons(), CBodyTintWnd__UpdateLabelsAndButtons);
#endif
#ifdef CBodyTintWnd__GetButtonTint_x
FUNCTION_AT_ADDRESS(unsigned long, CBodyTintWnd::GetButtonTint(int), CBodyTintWnd__GetButtonTint);
#endif
#ifdef CBodyTintWnd__StoreModifiedBodyTints_x
FUNCTION_AT_ADDRESS(void, CBodyTintWnd::StoreModifiedBodyTints(), CBodyTintWnd__StoreModifiedBodyTints);
#endif
#ifdef CBodyTintWnd__ResetToOrigBodyTints_x
FUNCTION_AT_ADDRESS(void, CBodyTintWnd::ResetToOrigBodyTints(), CBodyTintWnd__ResetToOrigBodyTints);
#endif

//----------------------------------------------------------------------------
// CCastSpellWnd
//----------------------------------------------------------------------------

#ifdef CCastSpellWnd__CCastSpellWnd_x
FUNCTION_AT_ADDRESS(CCastSpellWnd::CCastSpellWnd(CXWnd*), CCastSpellWnd__CCastSpellWnd);
#endif
#ifdef CCastSpellWnd__Init_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::Init(), CCastSpellWnd__Init);
#endif
#ifdef CCastSpellWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::Activate(), CCastSpellWnd__Activate);
#endif
#ifdef CCastSpellWnd__HandleSpellInfoDisplay_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::HandleSpellInfoDisplay(CXWnd*), CCastSpellWnd__HandleSpellInfoDisplay);
#endif
#ifdef CCastSpellWnd__HandleSpellLeftClick_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::HandleSpellLeftClick(int), CCastSpellWnd__HandleSpellLeftClick);
#endif
#ifdef CCastSpellWnd__Unmemorize_x
FUNCTION_AT_ADDRESS(void __cdecl, CCastSpellWnd::Unmemorize(int), CCastSpellWnd__Unmemorize);
#endif
#ifdef CCastSpellWnd__UnmemorizeList_x
FUNCTION_AT_ADDRESS(void __cdecl, CCastSpellWnd::UnmemorizeList(int*, int), CCastSpellWnd__UnmemorizeList);
#endif
#ifdef CCastSpellWnd__HandleSpellRightClick_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::HandleSpellRightClick(int), CCastSpellWnd__HandleSpellRightClick);
#endif
#ifdef CCastSpellWnd__ForgetMemorizedSpell_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::ForgetMemorizedSpell(int), CCastSpellWnd__ForgetMemorizedSpell);
#endif
#ifdef CCastSpellWnd__IsBardSongPlaying_x
FUNCTION_AT_ADDRESS(bool, CCastSpellWnd::IsBardSongPlaying(), CCastSpellWnd__IsBardSongPlaying);
#endif
#ifdef CCastSpellWnd__RefreshSpellGemButtons_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::RefreshSpellGemButtons(), CCastSpellWnd__RefreshSpellGemButtons);
#endif
#ifdef CCastSpellWnd__UpdateSpellGems_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::UpdateSpellGems(int), CCastSpellWnd__UpdateSpellGems);
#endif
#ifdef CCastSpellWnd__UpdateSpellGemTooltips_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::UpdateSpellGemTooltips(int), CCastSpellWnd__UpdateSpellGemTooltips);
#endif
#ifdef CCastSpellWnd__GetSpellGemColor_x
FUNCTION_AT_ADDRESS(unsigned long, CCastSpellWnd::GetSpellGemColor(EQ_Spell*), CCastSpellWnd__GetSpellGemColor);
#endif
#ifdef CCastSpellWnd__SpellBookDeactivating_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::SpellBookDeactivating(), CCastSpellWnd__SpellBookDeactivating);
#endif
#ifdef CCastSpellWnd__KeyMapUpdated_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::KeyMapUpdated(), CCastSpellWnd__KeyMapUpdated);
#endif
#ifdef CCastSpellWnd__ClearSpellCategories_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::ClearSpellCategories(), CCastSpellWnd__ClearSpellCategories);
#endif
#ifdef CCastSpellWnd__RecacheCategorizedSpells_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::RecacheCategorizedSpells(), CCastSpellWnd__RecacheCategorizedSpells);
#endif
#ifdef CCastSpellWnd__MakeSpellSelectMenu_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::MakeSpellSelectMenu(), CCastSpellWnd__MakeSpellSelectMenu);
#endif
#ifdef CCastSpellWnd__CategorizeSpell_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::CategorizeSpell(int, int, int, int), CCastSpellWnd__CategorizeSpell);
#endif
#ifdef CCastSpellWnd__RecacheLoadoutContextMenu_x
FUNCTION_AT_ADDRESS(void, CCastSpellWnd::RecacheLoadoutContextMenu(), CCastSpellWnd__RecacheLoadoutContextMenu);
#endif

//----------------------------------------------------------------------------
// CCharacterCreation
//----------------------------------------------------------------------------

#ifdef CCharacterCreation__CCharacterCreation_x
FUNCTION_AT_ADDRESS(CCharacterCreation::CCharacterCreation(CXWnd*), CCharacterCreation__CCharacterCreation);
#endif
#ifdef CCharacterCreation__Init_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::Init(), CCharacterCreation__Init);
#endif
#ifdef CCharacterCreation__Activate_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::Activate(), CCharacterCreation__Activate);
#endif
#ifdef CCharacterCreation__NameGenerated_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::NameGenerated(char*), CCharacterCreation__NameGenerated);
#endif
#ifdef CCharacterCreation__DoBackButton_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::DoBackButton(), CCharacterCreation__DoBackButton);
#endif
#ifdef CCharacterCreation__DoNextButton_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::DoNextButton(), CCharacterCreation__DoNextButton);
#endif
#ifdef CCharacterCreation__DoStatButton_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::DoStatButton(int), CCharacterCreation__DoStatButton);
#endif
#ifdef CCharacterCreation__ActivateScreen_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::ActivateScreen(int), CCharacterCreation__ActivateScreen);
#endif
#ifdef CCharacterCreation__RandomizeCharacter_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::RandomizeCharacter(bool, bool), CCharacterCreation__RandomizeCharacter);
#endif
#ifdef CCharacterCreation__RandomizeFacialFeatures_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::RandomizeFacialFeatures(), CCharacterCreation__RandomizeFacialFeatures);
#endif
#ifdef CCharacterCreation__InitStats_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::InitStats(bool), CCharacterCreation__InitStats);
#endif
#ifdef CCharacterCreation__InitNewPC_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::InitNewPC(), CCharacterCreation__InitNewPC);
#endif
#ifdef CCharacterCreation__InitStartingCities_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::InitStartingCities(), CCharacterCreation__InitStartingCities);
#endif
#ifdef CCharacterCreation__SetNewPCDeityFromBtnIndex_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::SetNewPCDeityFromBtnIndex(int), CCharacterCreation__SetNewPCDeityFromBtnIndex);
#endif
#ifdef CCharacterCreation__UpdatePlayerFromNewPC_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::UpdatePlayerFromNewPC(), CCharacterCreation__UpdatePlayerFromNewPC);
#endif
#ifdef CCharacterCreation__UpdateScreenZeroButtons_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::UpdateScreenZeroButtons(bool), CCharacterCreation__UpdateScreenZeroButtons);
#endif
#ifdef CCharacterCreation__GetRaceButtonIndex_x
FUNCTION_AT_ADDRESS(int, CCharacterCreation::GetRaceButtonIndex(int), CCharacterCreation__GetRaceButtonIndex);
#endif
#ifdef CCharacterCreation__GetClassButtonIndex_x
FUNCTION_AT_ADDRESS(int, CCharacterCreation::GetClassButtonIndex(int), CCharacterCreation__GetClassButtonIndex);
#endif
#ifdef CCharacterCreation__IsLackingExpansion_x
FUNCTION_AT_ADDRESS(bool, CCharacterCreation::IsLackingExpansion(bool, bool), CCharacterCreation__IsLackingExpansion);
#endif
#ifdef CCharacterCreation__SelectStartingCity_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::SelectStartingCity(int), CCharacterCreation__SelectStartingCity);
#endif
#ifdef CCharacterCreation__SelectedRaceButton_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::SelectedRaceButton(int), CCharacterCreation__SelectedRaceButton);
#endif
#ifdef CCharacterCreation__SelectedClassButton_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::SelectedClassButton(int), CCharacterCreation__SelectedClassButton);
#endif
#ifdef CCharacterCreation__SetPlayerAppearanceFromNewPC_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::SetPlayerAppearanceFromNewPC(EQPlayer*, EQ_PC*, bool), CCharacterCreation__SetPlayerAppearanceFromNewPC);
#endif
#ifdef CCharacterCreation__HandleNameApprovalResponse_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::HandleNameApprovalResponse(int), CCharacterCreation__HandleNameApprovalResponse);
#endif
#ifdef CCharacterCreation__SubmitNameToWorld_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::SubmitNameToWorld(), CCharacterCreation__SubmitNameToWorld);
#endif
#ifdef CCharacterCreation__FinalizeNewPCAndSendToWorld_x
FUNCTION_AT_ADDRESS(void, CCharacterCreation::FinalizeNewPCAndSendToWorld(), CCharacterCreation__FinalizeNewPCAndSendToWorld);
#endif
#ifdef CCharacterCreation__GetCharCreateText_x
FUNCTION_AT_ADDRESS(char*, CCharacterCreation::GetCharCreateText(char*, int, int, int, int), CCharacterCreation__GetCharCreateText);
#endif

//----------------------------------------------------------------------------
// CCharacterListWnd
//----------------------------------------------------------------------------

#ifdef CCharacterListWnd__EnableButtons_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::EnableButtons(bool), CCharacterListWnd__EnableButtons);
#endif
#ifdef CCharacterListWnd__EnableEqMovementCommands_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::EnableEqMovementCommands(bool), CCharacterListWnd__EnableEqMovementCommands);
#endif
#ifdef CCharacterListWnd__EnterWorld_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::EnterWorld(), CCharacterListWnd__EnterWorld);
#endif
#ifdef CCharacterListWnd__Quit_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::Quit(), CCharacterListWnd__Quit);
#endif
#ifdef CCharacterListWnd__UpdateList_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::UpdateList(bool), CCharacterListWnd__UpdateList);
#endif
#ifdef CCharacterListWnd__EnterExplorationMode_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::EnterExplorationMode(), CCharacterListWnd__EnterExplorationMode);
#endif
#ifdef CCharacterListWnd__LeaveExplorationMode_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::LeaveExplorationMode(), CCharacterListWnd__LeaveExplorationMode);
#endif
#ifdef CCharacterListWnd__IsValidCharacterSelected_x
FUNCTION_AT_ADDRESS(int, CCharacterListWnd::IsValidCharacterSelected(), CCharacterListWnd__IsValidCharacterSelected);
#endif
#ifdef CCharacterListWnd__IsEmptyCharacterSlot_x
FUNCTION_AT_ADDRESS(int, CCharacterListWnd::IsEmptyCharacterSlot(int), CCharacterListWnd__IsEmptyCharacterSlot);
#endif
#ifdef CCharacterListWnd__NumberOfCharacters_x
FUNCTION_AT_ADDRESS(int, CCharacterListWnd::NumberOfCharacters(), CCharacterListWnd__NumberOfCharacters);
#endif
#ifdef CCharacterListWnd__IsEvil_x
FUNCTION_AT_ADDRESS(unsigned char, CCharacterListWnd::IsEvil(int, int, int), CCharacterListWnd__IsEvil);
#endif
#ifdef CCharacterListWnd__SelectCharacter_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::SelectCharacter(int, bool, bool), CCharacterListWnd__SelectCharacter);
#endif
#ifdef CCharacterListWnd__SetLoadZonePlayerLocation_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::SetLoadZonePlayerLocation(), CCharacterListWnd__SetLoadZonePlayerLocation);
#endif
#ifdef CCharacterListWnd__DeleteCharacter_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::DeleteCharacter(), CCharacterListWnd__DeleteCharacter);
#endif
#ifdef CCharacterListWnd__UpdateButtonNames_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::UpdateButtonNames(), CCharacterListWnd__UpdateButtonNames);
#endif
#ifdef CCharacterListWnd__SetLocationByClass_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::SetLocationByClass(EQPlayer*, bool, int), CCharacterListWnd__SetLocationByClass);
#endif
#ifdef CCharacterListWnd__CreateExplorationModePlayers_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::CreateExplorationModePlayers(), CCharacterListWnd__CreateExplorationModePlayers);
#endif
#ifdef CCharacterListWnd__RemoveExplorationModePlayers_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::RemoveExplorationModePlayers(), CCharacterListWnd__RemoveExplorationModePlayers);
#endif
#ifdef CCharacterListWnd__SetRoomLocationByIndex_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::SetRoomLocationByIndex(int, EQPlayer*), CCharacterListWnd__SetRoomLocationByIndex);
#endif
#ifdef CCharacterListWnd__SwitchModel_x
FUNCTION_AT_ADDRESS(void, CCharacterListWnd::SwitchModel(EQPlayer*, unsigned char, int, unsigned char, unsigned char), CCharacterListWnd__SwitchModel);
#endif

//----------------------------------------------------------------------------
// CColorPickerWnd
//----------------------------------------------------------------------------

#ifdef CColorPickerWnd__CColorPickerWnd_x
FUNCTION_AT_ADDRESS(CColorPickerWnd::CColorPickerWnd(CXWnd*), CColorPickerWnd__CColorPickerWnd);
#endif
#ifdef CColorPickerWnd__SetTemplateColor_x
FUNCTION_AT_ADDRESS(void, CColorPickerWnd::SetTemplateColor(int, unsigned long), CColorPickerWnd__SetTemplateColor);
#endif
#ifdef CColorPickerWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CColorPickerWnd::Activate(CXWnd*, unsigned long), CColorPickerWnd__Activate);
#endif
#ifdef CColorPickerWnd__SetCurrentColor_x
FUNCTION_AT_ADDRESS(void, CColorPickerWnd::SetCurrentColor(unsigned long), CColorPickerWnd__SetCurrentColor);
#endif
#ifdef CColorPickerWnd__UpdateCurrentColor_x
FUNCTION_AT_ADDRESS(void, CColorPickerWnd::UpdateCurrentColor(), CColorPickerWnd__UpdateCurrentColor);
#endif
#ifdef CColorPickerWnd__CheckMaxEditWnd_x
FUNCTION_AT_ADDRESS(void, CColorPickerWnd::CheckMaxEditWnd(), CColorPickerWnd__CheckMaxEditWnd);
#endif
#ifdef CColorPickerWnd__UpdateEditWndFromSlider_x
FUNCTION_AT_ADDRESS(void, CColorPickerWnd::UpdateEditWndFromSlider(CSliderWnd*, CEditWnd*, int*), CColorPickerWnd__UpdateEditWndFromSlider);
#endif
#ifdef CColorPickerWnd__UpdateSliderFromEditWnd_x
FUNCTION_AT_ADDRESS(void, CColorPickerWnd::UpdateSliderFromEditWnd(CSliderWnd*, CEditWnd*, int*), CColorPickerWnd__UpdateSliderFromEditWnd);
#endif
#ifdef CColorPickerWnd__Open_x
FUNCTION_AT_ADDRESS(int, CColorPickerWnd::Open(CXWnd* pwndCaller, D3DCOLOR CurrentColor), CColorPickerWnd__Open);
#endif

//----------------------------------------------------------------------------
// CCompassWnd
//----------------------------------------------------------------------------

#ifdef CCompassWnd__CCompassWnd_x
FUNCTION_AT_ADDRESS(CCompassWnd::CCompassWnd(CXWnd*), CCompassWnd__CCompassWnd);
#endif
#ifdef CCompassWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CCompassWnd::Activate(), CCompassWnd__Activate);
#endif
#ifdef CCompassWnd__PickNewTarget_x
FUNCTION_AT_ADDRESS(void, CCompassWnd::PickNewTarget(), CCompassWnd__PickNewTarget);
#endif
#ifdef CCompassWnd__SetSpeed_x
FUNCTION_AT_ADDRESS(void, CCompassWnd::SetSpeed(), CCompassWnd__SetSpeed);
#endif
#ifdef CCompassWnd__SenseHeading_x
FUNCTION_AT_ADDRESS(void, CCompassWnd::SenseHeading(), CCompassWnd__SenseHeading);
#endif

//----------------------------------------------------------------------------
// CConfirmationDialog
//----------------------------------------------------------------------------

#ifdef CConfirmationDialog__CConfirmationDialog_x
FUNCTION_AT_ADDRESS(CConfirmationDialog::CConfirmationDialog(CXWnd*), CConfirmationDialog__CConfirmationDialog);
#endif
#ifdef CConfirmationDialog__Init_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::Init(), CConfirmationDialog__Init);
#endif
#ifdef CConfirmationDialog__Activate_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::Activate(int, unsigned int, const char*, int, int, int, int), CConfirmationDialog__Activate);
#endif
#ifdef CConfirmationDialog__Deactivate_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::Deactivate(), CConfirmationDialog__Deactivate);
#endif
#ifdef CConfirmationDialog__ExpireCurrentDialog_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::ExpireCurrentDialog(), CConfirmationDialog__ExpireCurrentDialog);
#endif
#ifdef CConfirmationDialog__HandleButtonYesPressed_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::HandleButtonYesPressed(), CConfirmationDialog__HandleButtonYesPressed);
#endif
#ifdef CConfirmationDialog__HandleButtonNoPressed_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::HandleButtonNoPressed(), CConfirmationDialog__HandleButtonNoPressed);
#endif
#ifdef CConfirmationDialog__HandleButtonOkPressed_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::HandleButtonOkPressed(), CConfirmationDialog__HandleButtonOkPressed);
#endif
#ifdef CConfirmationDialog__ProcessYes_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::ProcessYes(), CConfirmationDialog__ProcessYes);
#endif
#ifdef CConfirmationDialog__ResetFocusOnClose_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::ResetFocusOnClose(), CConfirmationDialog__ResetFocusOnClose);
#endif
#ifdef CConfirmationDialog__ProcessNo_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::ProcessNo(int), CConfirmationDialog__ProcessNo);
#endif
#ifdef CConfirmationDialog__SetNameApprovalData_x
FUNCTION_AT_ADDRESS(void, CConfirmationDialog::SetNameApprovalData(char*, char*, int, int, char*), CConfirmationDialog__SetNameApprovalData);
#endif
#ifdef CConfirmationDialog__WndNotification_x
FUNCTION_AT_ADDRESS(int, CConfirmationDialog::WndNotification(CXWnd*, uint32_t, void*), CConfirmationDialog__WndNotification);
#endif

//----------------------------------------------------------------------------
// CContainerWnd
//----------------------------------------------------------------------------

// CContainerWnd
#ifdef CContainerWnd__CContainerWnd_x
FUNCTION_AT_ADDRESS(CContainerWnd::CContainerWnd(CXWnd*), CContainerWnd__CContainerWnd);
#endif
#ifdef CContainerWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CContainerWnd::Activate(), CContainerWnd__Activate);
#endif
#ifdef CContainerWnd__HandleCombine_x
FUNCTION_AT_ADDRESS(void, CContainerWnd::HandleCombine(), CContainerWnd__HandleCombine);
#endif
#ifdef CContainerWnd__SetContainer_x
FUNCTION_AT_ADDRESS(void, CContainerWnd::SetContainer(const ItemPtr& pContainer, const ItemGlobalIndex& location), CContainerWnd__SetContainer);
#endif
#ifdef CContainerWnd__CheckCloseable_x
FUNCTION_AT_ADDRESS(void, CContainerWnd::CheckCloseable(), CContainerWnd__CheckCloseable);
#endif
#ifdef CContainerWnd__ContainsNoDrop_x
FUNCTION_AT_ADDRESS(bool, CContainerWnd::ContainsNoDrop(), CContainerWnd__ContainsNoDrop);
#endif

// CContainerMgr
#ifdef CContainerMgr__GetFreeContainerWnd_x
FUNCTION_AT_ADDRESS(CContainerWnd*, CContainerMgr::GetFreeContainerWnd(), CContainerMgr__GetFreeContainerWnd);
#endif
#ifdef CContainerMgr__OpenExperimentContainer_x
FUNCTION_AT_ADDRESS(void, CContainerMgr::OpenExperimentContainer(const ItemPtr& pCont, const ItemGlobalIndex& Location), CContainerMgr__OpenExperimentContainer);
#endif
#ifdef CContainerMgr__CContainerMgr_x
FUNCTION_AT_ADDRESS(CContainerMgr::CContainerMgr(), CContainerMgr__CContainerMgr);
#endif
#ifdef CContainerMgr__Process_x
FUNCTION_AT_ADDRESS(void, CContainerMgr::Process(), CContainerMgr__Process);
#endif
#ifdef CContainerMgr__OpenWorldContainer_x
FUNCTION_AT_ADDRESS(void, CContainerMgr::OpenWorldContainer(const ItemPtr&, unsigned long), CContainerMgr__OpenWorldContainer);
#endif
//#ifdef CContainerMgr__SetWorldContainerItem_x
//FUNCTION_AT_ADDRESS(void, CContainerMgr::SetWorldContainerItem(const ItemPtr&, int), CContainerMgr__SetWorldContainerItem);
//#endif
//#ifdef CContainerMgr__GetWorldContainerItem_x
//FUNCTION_AT_ADDRESS(ItemPtr, CContainerMgr::GetWorldContainerItem(int), CContainerMgr__GetWorldContainerItem);
//#endif
//#ifdef CContainerMgr__ClearWorldContainerItems_x
//FUNCTION_AT_ADDRESS(void, CContainerMgr::ClearWorldContainerItems(), CContainerMgr__ClearWorldContainerItems);
//#endif
#ifdef CContainerMgr__OpenContainer_x
FUNCTION_AT_ADDRESS(void, CContainerMgr::OpenContainer(const ItemPtr& pContainer, const ItemGlobalIndex& location, bool), CContainerMgr__OpenContainer);
#endif
#ifdef CContainerMgr__CloseContainer_x
FUNCTION_AT_ADDRESS(void, CContainerMgr::CloseContainer(const ItemPtr& pContainer, bool bDeleteWindow), CContainerMgr__CloseContainer);
#endif
#ifdef CContainerMgr__CloseAllContainers_x
FUNCTION_AT_ADDRESS(bool, CContainerMgr::CloseAllContainers(), CContainerMgr__CloseAllContainers);
#endif

//----------------------------------------------------------------------------
// CContextMenuManager
//----------------------------------------------------------------------------

#ifdef CContextMenuManager__RemoveMenu_x
FUNCTION_AT_ADDRESS(int, CContextMenuManager::RemoveMenu(int, bool), CContextMenuManager__RemoveMenu);
#endif
#ifdef CContextMenuManager__AddMenu_x
FUNCTION_AT_ADDRESS(int, CContextMenuManager::AddMenu(CContextMenu*), CContextMenuManager__AddMenu);
#endif
#ifdef CContextMenuManager__PopupMenu_x
FUNCTION_AT_ADDRESS(int, CContextMenuManager::PopupMenu(int, CXPoint const&, CXWnd*), CContextMenuManager__PopupMenu);
#endif
#ifdef CContextMenuManager__Flush_x
FUNCTION_AT_ADDRESS(void, CContextMenuManager::Flush(), CContextMenuManager__Flush);
#endif
#ifdef CContextMenuManager__CreateDefaultMenu_x
FUNCTION_AT_ADDRESS(void, CContextMenuManager::CreateDefaultMenu(), CContextMenuManager__CreateDefaultMenu);
#endif
#ifdef CContextMenuManager__WarnDefaultMenu_x
FUNCTION_AT_ADDRESS(void, CContextMenuManager::WarnDefaultMenu(CXWnd*), CContextMenuManager__WarnDefaultMenu);
#endif
#ifdef CContextMenuManager__HandleWindowMenuCommands_x
FUNCTION_AT_ADDRESS(int, CContextMenuManager::HandleWindowMenuCommands(CXWnd*, int), CContextMenuManager__HandleWindowMenuCommands);
#endif

//----------------------------------------------------------------------------
// CContextMenu
//----------------------------------------------------------------------------

#ifdef CContextMenu__AddMenuItem_x
FUNCTION_AT_ADDRESS(int, CContextMenu::AddMenuItem(const CXStr&, unsigned int, bool, COLORREF, bool), CContextMenu__AddMenuItem);
#endif
#ifdef CContextMenu__AddSeparator_x
FUNCTION_AT_ADDRESS(int, CContextMenu::AddSeparator(), CContextMenu__AddSeparator);
#endif
#ifdef CContextMenu__RemoveAllMenuItems_x
FUNCTION_AT_ADDRESS(void, CContextMenu::RemoveAllMenuItems(), CContextMenu__RemoveAllMenuItems);
#endif
#ifdef CContextMenu__RemoveMenuItem_x
FUNCTION_AT_ADDRESS(void, CContextMenu::RemoveMenuItem(int), CContextMenu__RemoveMenuItem);
#endif
#ifdef CContextMenu__EnableMenuItem_x
FUNCTION_AT_ADDRESS(void, CContextMenu::EnableMenuItem(int, bool), CContextMenu__EnableMenuItem);
#endif
#ifdef CContextMenu__CheckMenuItem_x
FUNCTION_AT_ADDRESS(void, CContextMenu::CheckMenuItem(int, bool, bool), CContextMenu__CheckMenuItem);
#endif
#ifdef CContextMenu__Activate_x
FUNCTION_AT_ADDRESS(void, CContextMenu::Activate(CXPoint, int, int), CContextMenu__Activate);
#endif
#ifdef CContextMenu__SetMenuItem_x
FUNCTION_AT_ADDRESS(void, CContextMenu::SetMenuItem(int, const CXStr&, bool, COLORREF, bool), CContextMenu__SetMenuItem);
#endif

//----------------------------------------------------------------------------
// CCursorAttachment
//----------------------------------------------------------------------------

#ifdef CCursorAttachment__DrawButtonText_x
FUNCTION_AT_ADDRESS(void, CCursorAttachment::DrawButtonText() const, CCursorAttachment__DrawButtonText);
#endif
#ifdef CCursorAttachment__DrawQuantity_x
FUNCTION_AT_ADDRESS(void, CCursorAttachment::DrawQuantity() const, CCursorAttachment__DrawQuantity);
#endif
#ifdef CCursorAttachment__IsOkToActivate_x
FUNCTION_AT_ADDRESS(bool, CCursorAttachment::IsOkToActivate(int), CCursorAttachment__IsOkToActivate);
#endif
#ifdef CCursorAttachment__RemoveAttachment_x
FUNCTION_AT_ADDRESS(bool, CCursorAttachment::RemoveAttachment(), CCursorAttachment__RemoveAttachment);
#endif
#ifdef CCursorAttachment__AttachToCursor_x
FUNCTION_AT_ADDRESS(void, CCursorAttachment::AttachToCursor(CTextureAnimation* Overlay, CTextureAnimation* pTABG, ECursorAttachmentType Type, int Index, const char* Assigned_Name, const char* Name, int Qty, int IconID), CCursorAttachment__AttachToCursor);
#endif
#ifdef CCursorAttachment__AttachToCursor1_x
FUNCTION_AT_ADDRESS(void, CCursorAttachment::AttachToCursor(CTextureAnimation* Overlay, CTextureAnimation* pTABG, ECursorAttachmentType Type, int Index, const EqItemGuid& ItemGuid, int ItemID, const char* Assigned_Name, const char* Name, int Qty, int  IconID), CCursorAttachment__AttachToCursor1);
#endif
#ifdef CCursorAttachment__Deactivate_x
FUNCTION_AT_ADDRESS(void, CCursorAttachment::Deactivate(), CCursorAttachment__Deactivate);
#endif

//----------------------------------------------------------------------------
// CFileSelectionWnd
//----------------------------------------------------------------------------

#ifdef CFileSelectionWnd__Open_x
FUNCTION_AT_ADDRESS(int, CFileSelectionWnd::Open(CXWnd* pWnd, int flags), CFileSelectionWnd__Open);
#endif

//----------------------------------------------------------------------------
// CFindItemWnd
//----------------------------------------------------------------------------

#ifdef CFindItemWnd__Update_x
FUNCTION_AT_ADDRESS(void, CFindItemWnd::Update(), CFindItemWnd__Update);
#endif
#ifdef CFindItemWnd__PickupSelectedItem_x
FUNCTION_AT_ADDRESS(void, CFindItemWnd::PickupSelectedItem(), CFindItemWnd__PickupSelectedItem);
#endif

//----------------------------------------------------------------------------
// CGemsGameWnd
//----------------------------------------------------------------------------

#ifdef CGemsGameWnd__CGemsGameWnd_x
FUNCTION_AT_ADDRESS(CGemsGameWnd::CGemsGameWnd(CXWnd*), CGemsGameWnd__CGemsGameWnd);
#endif
#ifdef CGemsGameWnd__Init_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::Init(), CGemsGameWnd__Init);
#endif
#ifdef CGemsGameWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::Activate(), CGemsGameWnd__Activate);
#endif
#ifdef CGemsGameWnd__Restart_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::Restart(), CGemsGameWnd__Restart);
#endif
#ifdef CGemsGameWnd__AdvanceToNextWave_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::AdvanceToNextWave(), CGemsGameWnd__AdvanceToNextWave);
#endif
#ifdef CGemsGameWnd__DoMatchScore_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::DoMatchScore(int), CGemsGameWnd__DoMatchScore);
#endif
#ifdef CGemsGameWnd__DrawSpellGem_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::DrawSpellGem(int, CXRect, int, bool) const, CGemsGameWnd__DrawSpellGem);
#endif
#ifdef CGemsGameWnd__SetPause_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::SetPause(bool), CGemsGameWnd__SetPause);
#endif
#ifdef CGemsGameWnd__TogglePause_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::TogglePause(), CGemsGameWnd__TogglePause);
#endif
#ifdef CGemsGameWnd__SetNextUpdate_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::SetNextUpdate(), CGemsGameWnd__SetNextUpdate);
#endif
#ifdef CGemsGameWnd__GetRndBlockImage_x
FUNCTION_AT_ADDRESS(int, CGemsGameWnd::GetRndBlockImage(), CGemsGameWnd__GetRndBlockImage);
#endif
#ifdef CGemsGameWnd__BadSpecial_x
FUNCTION_AT_ADDRESS(bool, CGemsGameWnd::BadSpecial(int) const, CGemsGameWnd__BadSpecial);
#endif
#ifdef CGemsGameWnd__ActivateSpecialMode_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::ActivateSpecialMode(int), CGemsGameWnd__ActivateSpecialMode);
#endif
#ifdef CGemsGameWnd__GetNextBlock_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::GetNextBlock(), CGemsGameWnd__GetNextBlock);
#endif
#ifdef CGemsGameWnd__MoveCurBlock_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::MoveCurBlock(int), CGemsGameWnd__MoveCurBlock);
#endif
#ifdef CGemsGameWnd__ProcessMoveCurBlock_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::ProcessMoveCurBlock(int), CGemsGameWnd__ProcessMoveCurBlock);
#endif
#ifdef CGemsGameWnd__LegalBlockMove_x
FUNCTION_AT_ADDRESS(bool, CGemsGameWnd::LegalBlockMove(int, int, int, int, bool), CGemsGameWnd__LegalBlockMove);
#endif
#ifdef CGemsGameWnd__MarkHigherBlocksFalling_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::MarkHigherBlocksFalling(int, int), CGemsGameWnd__MarkHigherBlocksFalling);
#endif
#ifdef CGemsGameWnd__ClearBlock_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::ClearBlock(struct _GemsBlock*), CGemsGameWnd__ClearBlock);
#endif
#ifdef CGemsGameWnd__ClearHighScores_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::ClearHighScores(), CGemsGameWnd__ClearHighScores);
#endif
#ifdef CGemsGameWnd__ReadHighScores_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::ReadHighScores(), CGemsGameWnd__ReadHighScores);
#endif
#ifdef CGemsGameWnd__WriteHighScores_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::WriteHighScores(), CGemsGameWnd__WriteHighScores);
#endif
#ifdef CGemsGameWnd__CheckForNewHighScore_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::CheckForNewHighScore(), CGemsGameWnd__CheckForNewHighScore);
#endif
#ifdef CGemsGameWnd__ProcessMatches_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::ProcessMatches(int), CGemsGameWnd__ProcessMatches);
#endif
#ifdef CGemsGameWnd__CheckForMatches_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::CheckForMatches(int, int), CGemsGameWnd__CheckForMatches);
#endif
#ifdef CGemsGameWnd__MakeBlockDrop_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::MakeBlockDrop(int, int, int), CGemsGameWnd__MakeBlockDrop);
#endif
#ifdef CGemsGameWnd__Update_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::Update(), CGemsGameWnd__Update);
#endif
#ifdef CGemsGameWnd__UpdateDisplay_x
FUNCTION_AT_ADDRESS(void, CGemsGameWnd::UpdateDisplay(), CGemsGameWnd__UpdateDisplay);
#endif

//----------------------------------------------------------------------------
// CGiveWnd
//----------------------------------------------------------------------------

#ifdef CGiveWnd__CGiveWnd_x
FUNCTION_AT_ADDRESS(CGiveWnd::CGiveWnd(CXWnd*), CGiveWnd__CGiveWnd);
#endif
#ifdef CGiveWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CGiveWnd::Activate(), CGiveWnd__Activate);
#endif
#ifdef CGiveWnd__UpdateGiveDisplay_x
FUNCTION_AT_ADDRESS(void, CGiveWnd::UpdateGiveDisplay(), CGiveWnd__UpdateGiveDisplay);
#endif

//----------------------------------------------------------------------------
// CGroupWnd
//----------------------------------------------------------------------------

#ifdef CGroupWnd__CGroupWnd_x
FUNCTION_AT_ADDRESS(CGroupWnd::CGroupWnd(CXWnd*), CGroupWnd__CGroupWnd);
#endif
#ifdef CGroupWnd__Init_x
FUNCTION_AT_ADDRESS(void, CGroupWnd::Init(), CGroupWnd__Init);
#endif
#ifdef CGroupWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CGroupWnd::Activate(), CGroupWnd__Activate);
#endif
#ifdef CGroupWnd__SetInvited_x
FUNCTION_AT_ADDRESS(void, CGroupWnd::SetInvited(bool), CGroupWnd__SetInvited);
#endif
#ifdef CGroupWnd__UpdateButtons_x
FUNCTION_AT_ADDRESS(void, CGroupWnd::UpdateButtons(), CGroupWnd__UpdateButtons);
#endif
#ifdef CGroupWnd__UpdateDisplay_x
FUNCTION_AT_ADDRESS(void, CGroupWnd::UpdateDisplay(int Index, PlayerClient* groupmember, COLORREF NameColor, UINT RoleBits), CGroupWnd__UpdateDisplay);
#endif
#ifdef CGroupWnd__KeyMapUpdated_x
FUNCTION_AT_ADDRESS(void, CGroupWnd::KeyMapUpdated(), CGroupWnd__KeyMapUpdated);
#endif
#ifdef CGroupWnd__CreateLocalMenu_x
FUNCTION_AT_ADDRESS(void, CGroupWnd::CreateLocalMenu(), CGroupWnd__CreateLocalMenu);
#endif
#ifdef CGroupWnd__UpdateContextMenu_x
FUNCTION_AT_ADDRESS(void, CGroupWnd::UpdateContextMenu(), CGroupWnd__UpdateContextMenu);
#endif

//----------------------------------------------------------------------------
// CGuildMgmtWnd
//----------------------------------------------------------------------------

#ifdef CGuildMgmtWnd__CGuildMgmtWnd_x
FUNCTION_AT_ADDRESS(CGuildMgmtWnd::CGuildMgmtWnd(CXWnd*), CGuildMgmtWnd__CGuildMgmtWnd);
#endif
#ifdef CGuildMgmtWnd__Init_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::Init(), CGuildMgmtWnd__Init);
#endif
#ifdef CGuildMgmtWnd__UpdateButtons_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::UpdateButtons(), CGuildMgmtWnd__UpdateButtons);
#endif
#ifdef CGuildMgmtWnd__Clean_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::Clean(), CGuildMgmtWnd__Clean);
#endif
#ifdef CGuildMgmtWnd__SetMOTD_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::SetMOTD(char*, char*), CGuildMgmtWnd__SetMOTD);
#endif
#ifdef CGuildMgmtWnd__SetPlayerCount_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::SetPlayerCount(int), CGuildMgmtWnd__SetPlayerCount);
#endif
#ifdef CGuildMgmtWnd__CreatePersonalNotesFilename_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::CreatePersonalNotesFilename(), CGuildMgmtWnd__CreatePersonalNotesFilename);
#endif
#ifdef CGuildMgmtWnd__LoadPersonalNotes_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::LoadPersonalNotes(), CGuildMgmtWnd__LoadPersonalNotes);
#endif
#ifdef CGuildMgmtWnd__SavePersonalNotes_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::SavePersonalNotes(), CGuildMgmtWnd__SavePersonalNotes);
#endif
#ifdef CGuildMgmtWnd__GetPersonalNote_x
FUNCTION_AT_ADDRESS(char*, CGuildMgmtWnd::GetPersonalNote(char*), CGuildMgmtWnd__GetPersonalNote);
#endif
#ifdef CGuildMgmtWnd__SetPersonalNote_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::SetPersonalNote(char*, char*), CGuildMgmtWnd__SetPersonalNote);
#endif
#ifdef CGuildMgmtWnd__AddMember_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::AddMember(GuildMember*), CGuildMgmtWnd__AddMember);
#endif
#ifdef CGuildMgmtWnd__RemoveMember_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::RemoveMember(GuildMember*), CGuildMgmtWnd__RemoveMember);
#endif
#ifdef CGuildMgmtWnd__RenameMember_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::RenameMember(char*, char*), CGuildMgmtWnd__RenameMember);
#endif
#ifdef CGuildMgmtWnd__UpdateListMember_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::UpdateListMember(GuildMember*, int), CGuildMgmtWnd__UpdateListMember);
#endif
#ifdef CGuildMgmtWnd__FindListMember_x
FUNCTION_AT_ADDRESS(int, CGuildMgmtWnd::FindListMember(GuildMember*), CGuildMgmtWnd__FindListMember);
#endif
#ifdef CGuildMgmtWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::Activate(), CGuildMgmtWnd__Activate);
#endif
#ifdef CGuildMgmtWnd__CleanAndRefillListWnd_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::CleanAndRefillListWnd(bool), CGuildMgmtWnd__CleanAndRefillListWnd);
#endif
#ifdef CGuildMgmtWnd__SortList_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::SortList(int, bool), CGuildMgmtWnd__SortList);
#endif
#ifdef CGuildMgmtWnd__DumpToFile_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::DumpToFile(char*), CGuildMgmtWnd__DumpToFile);
#endif
#ifdef CGuildMgmtWnd__LoadINI_x
FUNCTION_AT_ADDRESS(void, CGuildMgmtWnd::LoadINI(), CGuildMgmtWnd__LoadINI);
#endif

//----------------------------------------------------------------------------
// CHelpWnd
//----------------------------------------------------------------------------

#ifdef CHelpWnd__CHelpWnd_x
FUNCTION_AT_ADDRESS(CHelpWnd::CHelpWnd(CXWnd*), CHelpWnd__CHelpWnd);
#endif

//----------------------------------------------------------------------------
// CHotButtonWnd
//----------------------------------------------------------------------------

#ifdef CHotButtonWnd__CHotButtonWnd_x
FUNCTION_AT_ADDRESS(CHotButtonWnd::CHotButtonWnd(CXWnd*), CHotButtonWnd__CHotButtonWnd);
#endif
#ifdef CHotButtonWnd__UpdatePage_x
FUNCTION_AT_ADDRESS(void, CHotButtonWnd::UpdatePage(), CHotButtonWnd__UpdatePage);
#endif
#ifdef CHotButtonWnd__DoHotButton_x
FUNCTION_AT_ADDRESS(void, CHotButtonWnd::DoHotButton(int, int), CHotButtonWnd__DoHotButton);
#endif
#ifdef CHotButtonWnd__DoHotButtonRightClick_x
FUNCTION_AT_ADDRESS(void, CHotButtonWnd::DoHotButtonRightClick(int), CHotButtonWnd__DoHotButtonRightClick);
#endif

//----------------------------------------------------------------------------
// CInspectWnd
//----------------------------------------------------------------------------

#ifdef CInspectWnd__CInspectWnd_x
FUNCTION_AT_ADDRESS(CInspectWnd::CInspectWnd(CXWnd*), CInspectWnd__CInspectWnd);
#endif
#ifdef CInspectWnd__Init_x
FUNCTION_AT_ADDRESS(void, CInspectWnd::Init(), CInspectWnd__Init);
#endif
#ifdef CInspectWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CInspectWnd::Activate(struct _inspect*), CInspectWnd__Activate);
#endif
#ifdef CInspectWnd__AcceptInspectText_x
FUNCTION_AT_ADDRESS(void, CInspectWnd::AcceptInspectText(), CInspectWnd__AcceptInspectText);
#endif
#ifdef CInspectWnd__PlayerBeingDeleted_x
FUNCTION_AT_ADDRESS(void, CInspectWnd::PlayerBeingDeleted(EQPlayer*), CInspectWnd__PlayerBeingDeleted);
#endif

//----------------------------------------------------------------------------
// CInventoryWnd
//----------------------------------------------------------------------------

#ifdef CInventoryWnd__CInventoryWnd_x
FUNCTION_AT_ADDRESS(CInventoryWnd::CInventoryWnd(CXWnd*), CInventoryWnd__CInventoryWnd);
#endif
#ifdef CInventoryWnd__Init_x
FUNCTION_AT_ADDRESS(void, CInventoryWnd::Init(), CInventoryWnd__Init);
#endif
#ifdef CInventoryWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CInventoryWnd::Activate(), CInventoryWnd__Activate);
#endif
#ifdef CInventoryWnd__DestroyHeld_x
FUNCTION_AT_ADDRESS(void, CInventoryWnd::DestroyHeld(), CInventoryWnd__DestroyHeld);
#endif
#ifdef CInventoryWnd__ClickedMoneyButton_x
FUNCTION_AT_ADDRESS(void, CInventoryWnd::ClickedMoneyButton(int, int), CInventoryWnd__ClickedMoneyButton);
#endif
#ifdef CInventoryWnd__GetInventoryQtyFromCoinType_x
FUNCTION_AT_ADDRESS(long, CInventoryWnd::GetInventoryQtyFromCoinType(int), CInventoryWnd__GetInventoryQtyFromCoinType);
#endif
#ifdef CInventoryWnd__UpdateMoneyDisplay_x
FUNCTION_AT_ADDRESS(void, CInventoryWnd::UpdateMoneyDisplay(), CInventoryWnd__UpdateMoneyDisplay);
#endif

//----------------------------------------------------------------------------
// CInvSlotWnd
//----------------------------------------------------------------------------

#ifdef CInvSlot__CInvSlot_x
FUNCTION_AT_ADDRESS(CInvSlot::CInvSlot(), CInvSlot__CInvSlot);
#endif
#ifdef CInvSlot__UpdateItem_x
FUNCTION_AT_ADDRESS(void, CInvSlot::UpdateItem(), CInvSlot__UpdateItem);
#endif
#ifdef CInvSlot__SetInvSlotWnd_x
FUNCTION_AT_ADDRESS(void, CInvSlot::SetInvSlotWnd(CInvSlotWnd*), CInvSlot__SetInvSlotWnd);
#endif
#ifdef CInvSlot__SetItem_x
FUNCTION_AT_ADDRESS(void, CInvSlot::SetItem(const ItemPtr&), CInvSlot__SetItem);
#endif
#ifdef CInvSlot__SliderComplete_x
FUNCTION_AT_ADDRESS(void, CInvSlot::SliderComplete(int), CInvSlot__SliderComplete);
#endif
#ifdef CInvSlot__HandleLButtonUp_x
FUNCTION_AT_ADDRESS(void, CInvSlot::HandleLButtonUp(CXPoint, bool), CInvSlot__HandleLButtonUp);
#endif
#ifdef CInvSlot__HandleLButtonHeld_x
FUNCTION_AT_ADDRESS(void, CInvSlot::HandleLButtonHeld(CXPoint), CInvSlot__HandleLButtonHeld);
#endif
#ifdef CInvSlot__HandleRButtonUp_x
FUNCTION_AT_ADDRESS(void, CInvSlot::HandleRButtonUp(const CXPoint&), CInvSlot__HandleRButtonUp);
#endif
#ifdef CInvSlot__HandleRButtonHeld_x
FUNCTION_AT_ADDRESS(void, CInvSlot::HandleRButtonHeld(CXPoint), CInvSlot__HandleRButtonHeld);
#endif
#ifdef CInvSlot__HandleRButtonUpAfterHeld_x
FUNCTION_AT_ADDRESS(void, CInvSlot::HandleRButtonUpAfterHeld(CXPoint), CInvSlot__HandleRButtonUpAfterHeld);
#endif
#ifdef CInvSlot__IllegalBigBank_x
FUNCTION_AT_ADDRESS(bool, CInvSlot::IllegalBigBank(int), CInvSlot__IllegalBigBank);
#endif
#ifdef CInvSlot__HandleLButtonDown_x
FUNCTION_AT_ADDRESS(void, CInvSlot::HandleLButtonDown(CXPoint), CInvSlot__HandleLButtonDown);
#endif
#ifdef CInvSlot__HandleLButtonUpAfterHeld_x
FUNCTION_AT_ADDRESS(void, CInvSlot::HandleLButtonUpAfterHeld(CXPoint), CInvSlot__HandleLButtonUpAfterHeld);
#endif
#ifdef CInvSlot__HandleRButtonDown_x
FUNCTION_AT_ADDRESS(void, CInvSlot::HandleRButtonDown(CXPoint), CInvSlot__HandleRButtonDown);
#endif

FUNCTION_AT_ADDRESS(ItemPtr, CInvSlot::GetItem(), CInvSlot__GetItemBase);

//----------------------------------------------------------------------------
// CInvSlotMgr
//----------------------------------------------------------------------------

#ifdef CInvSlotMgr__Process_x
FUNCTION_AT_ADDRESS(void, CInvSlotMgr::Process(), CInvSlotMgr__Process);
#endif
#ifdef CInvSlotMgr__CInvSlotMgr_x
FUNCTION_AT_ADDRESS(CInvSlotMgr::CInvSlotMgr(), CInvSlotMgr__CInvSlotMgr);
#endif
#ifdef CInvSlotMgr__MoveItem_x
FUNCTION_AT_ADDRESS(bool, CInvSlotMgr::MoveItem(const ItemGlobalIndex& from, const ItemGlobalIndex& to, bool bDebugOut, bool CombineIsOk, bool MoveFromIntoToBag, bool MoveToIntoFromBag), CInvSlotMgr__MoveItem);
#endif
#ifdef CInvSlotMgr__CreateInvSlot_x
FUNCTION_AT_ADDRESS(CInvSlot*, CInvSlotMgr::CreateInvSlot(CInvSlotWnd*), CInvSlotMgr__CreateInvSlot);
#endif
#ifdef CInvSlotMgr__SelectSlot_x
FUNCTION_AT_ADDRESS(void, CInvSlotMgr::SelectSlot(CInvSlot*), CInvSlotMgr__SelectSlot);
#endif
#ifdef CInvSlotMgr__UpdateSlots_x
FUNCTION_AT_ADDRESS(void, CInvSlotMgr::UpdateSlots(), CInvSlotMgr__UpdateSlots);
#endif

//----------------------------------------------------------------------------
// CInvSlot
//----------------------------------------------------------------------------

#ifdef CInvSlotWnd__SetInvSlot_x
FUNCTION_AT_ADDRESS(void, CInvSlotWnd::SetInvSlot(CInvSlot*), CInvSlotWnd__SetInvSlot);
#endif

//----------------------------------------------------------------------------
// CItemDisplayWnd
//----------------------------------------------------------------------------

#ifdef CItemDisplayWnd__UpdateStrings_x
FUNCTION_AT_ADDRESS(void, CItemDisplayWnd::UpdateStrings(), CItemDisplayWnd__UpdateStrings);
#endif
#ifdef CItemDisplayWnd__InsertAugmentRequest_x
FUNCTION_AT_ADDRESS(void, CItemDisplayWnd::InsertAugmentRequest(int AugSlot), CItemDisplayWnd__InsertAugmentRequest);
#endif
#ifdef CItemDisplayWnd__RemoveAugmentRequest_x
FUNCTION_AT_ADDRESS(void, CItemDisplayWnd::RemoveAugmentRequest(int AugSlot), CItemDisplayWnd__RemoveAugmentRequest);
#endif
#ifdef CItemDisplayWnd__RequestConvertItem_x
FUNCTION_AT_ADDRESS(void, CItemDisplayWnd::RequestConvertItem(), CItemDisplayWnd__RequestConvertItem);
#endif
#ifdef CItemDisplayWnd__SetItem_x
FUNCTION_AT_ADDRESS(void, CItemDisplayWnd::SetItem(const ItemPtr& pItem, int flags), CItemDisplayWnd__SetItem);
#endif
#ifdef CItemDisplayWnd__SetItemText_x
FUNCTION_AT_ADDRESS(void, CItemDisplayWnd::SetItemText(char*), CItemDisplayWnd__SetItemText);
#endif
#ifdef CItemDisplayWnd__GetSizeString_x
FUNCTION_AT_ADDRESS(void, CItemDisplayWnd::GetSizeString(int, char*), CItemDisplayWnd__GetSizeString);
#endif
#ifdef CItemDisplayWnd__CreateRaceString_x
FUNCTION_AT_ADDRESS(CXStr, CItemDisplayWnd::CreateRaceString(EQ_Equipment*), CItemDisplayWnd__CreateRaceString);
#endif
#ifdef CItemDisplayWnd__CreateClassString_x
FUNCTION_AT_ADDRESS(CXStr, CItemDisplayWnd::CreateClassString(EQ_Equipment*), CItemDisplayWnd__CreateClassString);
#endif
#ifdef CItemDisplayWnd__CreateMealSizeString_x
FUNCTION_AT_ADDRESS(CXStr, CItemDisplayWnd::CreateMealSizeString(EQ_Equipment*), CItemDisplayWnd__CreateMealSizeString);
#endif
#ifdef CItemDisplayWnd__CreateModString_x
FUNCTION_AT_ADDRESS(CXStr, CItemDisplayWnd::CreateModString(EQ_Equipment*, int, int, int*), CItemDisplayWnd__CreateModString);
#endif
#ifdef CItemDisplayWnd__CreateEquipmentStatusString_x
FUNCTION_AT_ADDRESS(CXStr, CItemDisplayWnd::CreateEquipmentStatusString(const ItemPtr&), CItemDisplayWnd__CreateEquipmentStatusString);
#endif

FUNCTION_AT_ADDRESS(void, CSpellDisplayWnd::SetSpell(int SpellID, bool HasSpellDescr, int), CSpellDisplayWnd__SetSpell);
FUNCTION_AT_ADDRESS(void, CSpellDisplayWnd::UpdateStrings(), CSpellDisplayWnd__UpdateStrings);

//----------------------------------------------------------------------------
// CKeyRingWnd
//----------------------------------------------------------------------------
#if HAS_KEYRING_WINDOW

#ifdef CKeyRingWnd__ExecuteRightClick_x
FUNCTION_AT_ADDRESS(int, CKeyRingWnd::ExecuteRightClick(KeyRingType keyRingType, const ItemPtr& pItem, int index), CKeyRingWnd__ExecuteRightClick);
#endif

#endif // HAS_KEYRING_WINDOW

//----------------------------------------------------------------------------
// CLootWnd
//----------------------------------------------------------------------------

#ifdef CLootWnd__CLootWnd_x
FUNCTION_AT_ADDRESS(CLootWnd::CLootWnd(CXWnd*), CLootWnd__CLootWnd);
#endif
#ifdef CLootWnd__Init_x
FUNCTION_AT_ADDRESS(void, CLootWnd::Init(), CLootWnd__Init);
#endif
#ifdef CLootWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CLootWnd::Activate(unsigned char, long, long, long, long), CLootWnd__Activate);
#endif
#ifdef CLootWnd__Deactivate1_x
FUNCTION_AT_ADDRESS(void, CLootWnd::Deactivate(bool), CLootWnd__Deactivate1);
#endif
#ifdef CLootWnd__LootAll_x
FUNCTION_AT_ADDRESS(void, CLootWnd::LootAll(bool), CLootWnd__LootAll);
#endif
#ifdef CLootWnd__FinalizeLoot_x
FUNCTION_AT_ADDRESS(void, CLootWnd::FinalizeLoot(), CLootWnd__FinalizeLoot);
#endif
#ifdef CLootWnd__AddItemToLootArray_x
FUNCTION_AT_ADDRESS(void, CLootWnd::AddItemToLootArray(const ItemPtr&), CLootWnd__AddItemToLootArray);
#endif
#ifdef CLootWnd__RequestLootSlot_x
FUNCTION_AT_ADDRESS(void, CLootWnd::RequestLootSlot(int, bool), CLootWnd__RequestLootSlot);
#endif
#ifdef CLootWnd__SlotLooted_x
FUNCTION_AT_ADDRESS(void, CLootWnd::SlotLooted(int), CLootWnd__SlotLooted);
#endif

//----------------------------------------------------------------------------
// CMapViewWnd
//----------------------------------------------------------------------------

#ifdef CMapViewWnd__IsMappingEnabled_x
FUNCTION_AT_ADDRESS(bool, CMapViewWnd::IsMappingEnabled(), CMapViewWnd__IsMappingEnabled);
#endif
#ifdef CMapViewWnd__Init_x
FUNCTION_AT_ADDRESS(void, CMapViewWnd::Init(), CMapViewWnd__Init);
#endif
#ifdef CMapViewWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CMapViewWnd::Activate(), CMapViewWnd__Activate);
#endif
#ifdef CMapViewWnd__ActivateAutoMapping_x
FUNCTION_AT_ADDRESS(void, CMapViewWnd::ActivateAutoMapping(), CMapViewWnd__ActivateAutoMapping);
#endif
#ifdef CMapViewWnd__DeactivateAutoMapping_x
FUNCTION_AT_ADDRESS(void, CMapViewWnd::DeactivateAutoMapping(), CMapViewWnd__DeactivateAutoMapping);
#endif

#ifdef CMapViewWnd__HandleLButtonDown_x
FUNCTION_AT_ADDRESS(int, MapViewMap::HandleLButtonDown(const CXPoint&, uint32_t), CMapViewWnd__HandleLButtonDown);
#endif
#ifdef MapViewMap__Clear_x
FUNCTION_AT_ADDRESS(void, MapViewMap::Clear(), MapViewMap__Clear);
#endif
#ifdef MapViewMap__StartLine_x
FUNCTION_AT_ADDRESS(void, MapViewMap::StartLine(float, float, float), MapViewMap__StartLine);
#endif
#ifdef MapViewMap__EndLine_x
FUNCTION_AT_ADDRESS(void, MapViewMap::EndLine(float, float, float), MapViewMap__EndLine);
#endif
#ifdef MapViewMap__RemoveLine_x
FUNCTION_AT_ADDRESS(void, MapViewMap::RemoveLine(), MapViewMap__RemoveLine);
#endif
#ifdef MapViewMap__AddPoint_x
FUNCTION_AT_ADDRESS(void, MapViewMap::AddPoint(float, float, float), MapViewMap__AddPoint);
#endif
#ifdef MapViewMap__AddLabel_x
FUNCTION_AT_ADDRESS(void, MapViewMap::AddLabel(float, float, float, unsigned long, int, char*), MapViewMap__AddLabel);
#endif
#ifdef MapViewMap__RecalcLabelExtents_x
FUNCTION_AT_ADDRESS(void, MapViewMap::RecalcLabelExtents(struct _mapviewlabel*), MapViewMap__RecalcLabelExtents);
#endif
#ifdef MapViewMap__RemoveLabel_x
FUNCTION_AT_ADDRESS(void, MapViewMap::RemoveLabel(), MapViewMap__RemoveLabel);
#endif
#ifdef MapViewMap__MoveLabel_x
FUNCTION_AT_ADDRESS(void, MapViewMap::MoveLabel(struct _mapviewlabel*, float, float, float), MapViewMap__MoveLabel);
#endif
#ifdef MapViewMap__CalcLabelRenderOffsets_x
FUNCTION_AT_ADDRESS(void, MapViewMap::CalcLabelRenderOffsets(CXRect), MapViewMap__CalcLabelRenderOffsets);
#endif
#ifdef MapViewMap__IsLayerVisible_x
FUNCTION_AT_ADDRESS(bool, MapViewMap::IsLayerVisible(int), MapViewMap__IsLayerVisible);
#endif
#ifdef MapViewMap__PointInMapViewArea_x
FUNCTION_AT_ADDRESS(bool, MapViewMap::PointInMapViewArea(CXPoint, CXRect), MapViewMap__PointInMapViewArea);
#endif
#ifdef MapViewMap__PreCalcRenderValues_x
FUNCTION_AT_ADDRESS(void, MapViewMap::PreCalcRenderValues(), MapViewMap__PreCalcRenderValues);
#endif
#ifdef MapViewMap__TransformPoint_x
FUNCTION_AT_ADDRESS(void, MapViewMap::TransformPoint(struct T3D_XYZ*), MapViewMap__TransformPoint);
#endif
#ifdef MapViewMap__Draw_x
FUNCTION_AT_ADDRESS(void, MapViewMap::Draw(CXRect), MapViewMap__Draw);
#endif
#ifdef MapViewMap__DrawClippedLine_x
FUNCTION_AT_ADDRESS(bool, MapViewMap::DrawClippedLine(struct T3D_XYZ*, struct T3D_RGB, CXRect), MapViewMap__DrawClippedLine);
#endif
#ifdef MapViewMap__Save_x
FUNCTION_AT_ADDRESS(void, MapViewMap::Save(char*), MapViewMap__Save);
#endif
//#ifdef MapViewMap__SaveEx_x
//FUNCTION_AT_ADDRESS(void, MapViewMap::SaveEx(char*, int), MapViewMap__SaveEx);
//#endif
#ifdef MapViewMap__Load_x
FUNCTION_AT_ADDRESS(void, MapViewMap::Load(char*), MapViewMap__Load);
#endif
#ifdef MapViewMap__LoadEx_x
FUNCTION_AT_ADDRESS(bool, MapViewMap::LoadEx(char*, int), MapViewMap__LoadEx);
#endif
#ifdef MapViewMap__GetCurrentColor_x
FUNCTION_AT_ADDRESS(unsigned long, MapViewMap::GetCurrentColor(), MapViewMap__GetCurrentColor);
#endif
#ifdef MapViewMap__SetCurrentColor_x
FUNCTION_AT_ADDRESS(void, MapViewMap::SetCurrentColor(unsigned long), MapViewMap__SetCurrentColor);
#endif
#ifdef MapViewMap__SetMarkedLine_x
FUNCTION_AT_ADDRESS(void, MapViewMap::SetMarkedLine(struct _mapviewline*), MapViewMap__SetMarkedLine);
#endif
#ifdef MapViewMap__SetMarkedLineColor_x
FUNCTION_AT_ADDRESS(void, MapViewMap::SetMarkedLineColor(unsigned long), MapViewMap__SetMarkedLineColor);
#endif
#ifdef MapViewMap__GetMarkedLineColor_x
FUNCTION_AT_ADDRESS(unsigned long, MapViewMap::GetMarkedLineColor(), MapViewMap__GetMarkedLineColor);
#endif
#ifdef MapViewMap__ClearActiveLayer_x
FUNCTION_AT_ADDRESS(void, MapViewMap::ClearActiveLayer(), MapViewMap__ClearActiveLayer);
#endif
#ifdef MapViewMap__RemoveLine1_x
FUNCTION_AT_ADDRESS(void, MapViewMap::RemoveLine(struct _mapviewline*), MapViewMap__RemoveLine1);
#endif
#ifdef MapViewMap__RemoveLabel1_x
FUNCTION_AT_ADDRESS(void, MapViewMap::RemoveLabel(struct _mapviewlabel*), MapViewMap__RemoveLabel1);
#endif
#ifdef MapViewMap__JoinLinesAtIntersect_x
FUNCTION_AT_ADDRESS(void, MapViewMap::JoinLinesAtIntersect(bool), MapViewMap__JoinLinesAtIntersect);
#endif
#ifdef MapViewMap__SetZoneExtents_x
FUNCTION_AT_ADDRESS(void, MapViewMap::SetZoneExtents(int, int, int, int), MapViewMap__SetZoneExtents);
#endif
#ifdef MapViewMap__SetZoom_x
FUNCTION_AT_ADDRESS(void, MapViewMap::SetZoom(float), MapViewMap__SetZoom);
#endif
#ifdef MapViewMap__GetMinZ_x
FUNCTION_AT_ADDRESS(int, MapViewMap::GetMinZ(), MapViewMap__GetMinZ);
#endif
#ifdef MapViewMap__GetMaxZ_x
FUNCTION_AT_ADDRESS(int, MapViewMap::GetMaxZ(), MapViewMap__GetMaxZ);
#endif

//----------------------------------------------------------------------------
// CMerchantWnd
//----------------------------------------------------------------------------

#ifdef CMerchantWnd__CMerchantWnd_x
FUNCTION_AT_ADDRESS(CMerchantWnd::CMerchantWnd(CXWnd*), CMerchantWnd__CMerchantWnd);
#endif
#ifdef CMerchantWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::Activate(EQPlayer*, float), CMerchantWnd__Activate);
#endif
#ifdef CMerchantWnd__HandleBuy_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::HandleBuy(int), CMerchantWnd__HandleBuy);
#endif
#ifdef CMerchantWnd__HandleSell_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::HandleSell(int), CMerchantWnd__HandleSell);
#endif
#ifdef CMerchantWnd__UpdateBuySellButtons_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::UpdateBuySellButtons(), CMerchantWnd__UpdateBuySellButtons);
#endif
#ifdef CMerchantWnd__SelectBuySellSlot_x
FUNCTION_AT_ADDRESS(int, CMerchantWnd::SelectBuySellSlot(const ItemGlobalIndex&), CMerchantWnd__SelectBuySellSlot);
#endif
#ifdef CMerchantWnd__DisplayBuyOrSellPrice_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::DisplayBuyOrSellPrice(const ItemPtr& item, bool buy), CMerchantWnd__DisplayBuyOrSellPrice);
#endif
#ifdef CMerchantWnd__PurchasePageHandler__RequestGetItem_x
//FUNCTION_AT_ADDRESS(bool, CMerchantWnd::PurchasePageHandler::RequestGetItem(int), CMerchantWnd__PurchasePageHandler__RequestGetItem);
#endif
#ifdef CMerchantWnd__FinishBuyingItem_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::FinishBuyingItem(struct _sell_msg*), CMerchantWnd__FinishBuyingItem);
#endif
#ifdef CMerchantWnd__PurchasePageHandler__RequestPutItem_x
//FUNCTION_AT_ADDRESS(void, CMerchantWnd::PurchasePageHandler::RequestPutItem(int), CMerchantWnd__PurchasePageHandler__RequestPutItem);
#endif
#ifdef CMerchantWnd__FinishSellingItem_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::FinishSellingItem(struct _sell_msg*), CMerchantWnd__FinishSellingItem);
#endif
#ifdef CMerchantWnd__AddEquipmentToMercArray_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::AddEquipmentToMercArray(EQ_Equipment*), CMerchantWnd__AddEquipmentToMercArray);
#endif
#ifdef CMerchantWnd__AddNoteToMercArray_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::AddNoteToMercArray(EQ_Note*), CMerchantWnd__AddNoteToMercArray);
#endif
#ifdef CMerchantWnd__AddContainerToMercArray_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::AddContainerToMercArray(EQ_Container*), CMerchantWnd__AddContainerToMercArray);
#endif
#ifdef CMerchantWnd__ClearMerchantSlot_x
FUNCTION_AT_ADDRESS(void, CMerchantWnd::ClearMerchantSlot(int), CMerchantWnd__ClearMerchantSlot);
#endif

//----------------------------------------------------------------------------
// CMusicPlayerWnd
//----------------------------------------------------------------------------

#ifdef CMusicPlayerWnd__AutoStart_x
FUNCTION_AT_ADDRESS(void, CMusicPlayerWnd::AutoStart(), CMusicPlayerWnd__AutoStart);
#endif
#ifdef CMusicPlayerWnd__Update_x
FUNCTION_AT_ADDRESS(void, CMusicPlayerWnd::Update(), CMusicPlayerWnd__Update);
#endif
#ifdef CMusicPlayerWnd__UpdateButtons_x
FUNCTION_AT_ADDRESS(void, CMusicPlayerWnd::UpdateButtons(), CMusicPlayerWnd__UpdateButtons);
#endif

//----------------------------------------------------------------------------
// CNoteWnd
//----------------------------------------------------------------------------

#ifdef CNoteWnd__CheckNote_x
FUNCTION_AT_ADDRESS(bool, CNoteWnd::CheckNote(EQ_Note*), CNoteWnd__CheckNote);
#endif
#ifdef CNoteWnd__SetNote_x
FUNCTION_AT_ADDRESS(void, CNoteWnd::SetNote(char*), CNoteWnd__SetNote);
#endif

//----------------------------------------------------------------------------
// COptionsWnd
//----------------------------------------------------------------------------

#ifdef COptionsWnd__FillChatFilterList_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::FillChatFilterList(), COptionsWnd__FillChatFilterList);
#endif
#ifdef COptionsWnd__SyncGeneralPage_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::SyncGeneralPage(), COptionsWnd__SyncGeneralPage);
#endif
#ifdef COptionsWnd__SyncDisplayPage_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::SyncDisplayPage(), COptionsWnd__SyncDisplayPage);
#endif
#ifdef COptionsWnd__SyncMousePage_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::SyncMousePage(), COptionsWnd__SyncMousePage);
#endif
#ifdef COptionsWnd__SyncChatPage_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::SyncChatPage(), COptionsWnd__SyncChatPage);
#endif
#ifdef COptionsWnd__SyncColorPage_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::SyncColorPage(), COptionsWnd__SyncColorPage);
#endif
#ifdef COptionsWnd__InitKeyboardPage_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::InitKeyboardPage(), COptionsWnd__InitKeyboardPage);
#endif
#ifdef COptionsWnd__InitKeyboardAssignments_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::InitKeyboardAssignments(), COptionsWnd__InitKeyboardAssignments);
#endif
#ifdef COptionsWnd__RefreshCurrentKeyboardAssignmentList_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::RefreshCurrentKeyboardAssignmentList(), COptionsWnd__RefreshCurrentKeyboardAssignmentList);
#endif
#ifdef COptionsWnd__AddKeyboardAssignment_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::AddKeyboardAssignment(int, int, int), COptionsWnd__AddKeyboardAssignment);
#endif
#ifdef COptionsWnd__ResetKeysToDefault_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::ResetKeysToDefault(), COptionsWnd__ResetKeysToDefault);
#endif
#ifdef COptionsWnd__RedirectOnProcessFrameTo_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::RedirectOnProcessFrameTo(CPageWnd*), COptionsWnd__RedirectOnProcessFrameTo);
#endif
#ifdef COptionsWnd__RedirectWndNotificationTo_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::RedirectWndNotificationTo(CPageWnd*, CXWnd*, uint32_t, void*), COptionsWnd__RedirectWndNotificationTo);
#endif
#ifdef COptionsWnd__RedirectHandleKeyboardMsgTo_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::RedirectHandleKeyboardMsgTo(CPageWnd*, uint32_t, uint32_t, bool), COptionsWnd__RedirectHandleKeyboardMsgTo);
#endif
#ifdef COptionsWnd__RedirectDeactivateTo_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::RedirectDeactivateTo(CPageWnd*), COptionsWnd__RedirectDeactivateTo);
#endif
#ifdef COptionsWnd__GeneralPageOnProcessFrame_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::GeneralPageOnProcessFrame(), COptionsWnd__GeneralPageOnProcessFrame);
#endif
#ifdef COptionsWnd__GeneralPageWndNotification_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::GeneralPageWndNotification(CXWnd*, uint32_t, void*), COptionsWnd__GeneralPageWndNotification);
#endif
#ifdef COptionsWnd__DisplayPageOnProcessFrame_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::DisplayPageOnProcessFrame(), COptionsWnd__DisplayPageOnProcessFrame);
#endif
#ifdef COptionsWnd__DisplayPageWndNotification_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::DisplayPageWndNotification(CXWnd*, uint32_t, void*), COptionsWnd__DisplayPageWndNotification);
#endif
#ifdef COptionsWnd__MousePageOnProcessFrame_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::MousePageOnProcessFrame(), COptionsWnd__MousePageOnProcessFrame);
#endif
#ifdef COptionsWnd__MousePageWndNotification_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::MousePageWndNotification(CXWnd*, uint32_t, void*), COptionsWnd__MousePageWndNotification);
#endif
#ifdef COptionsWnd__KeyboardPageWndNotification_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::KeyboardPageWndNotification(CXWnd*, uint32_t, void*), COptionsWnd__KeyboardPageWndNotification);
#endif
#ifdef COptionsWnd__KeyboardPageHandleKeyboardMsg_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::KeyboardPageHandleKeyboardMsg(uint32_t, uint32_t, bool), COptionsWnd__KeyboardPageHandleKeyboardMsg);
#endif
#ifdef COptionsWnd__KeyboardPageDeactivate_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::KeyboardPageDeactivate(), COptionsWnd__KeyboardPageDeactivate);
#endif
#ifdef COptionsWnd__KeyboardPageCancelKeypressAssignment_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::KeyboardPageCancelKeypressAssignment(), COptionsWnd__KeyboardPageCancelKeypressAssignment);
#endif
#ifdef COptionsWnd__ChatPageOnProcessFrame_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::ChatPageOnProcessFrame(), COptionsWnd__ChatPageOnProcessFrame);
#endif
#ifdef COptionsWnd__ColorPageOnProcessFrame_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::ColorPageOnProcessFrame(), COptionsWnd__ColorPageOnProcessFrame);
#endif
#ifdef COptionsWnd__ChatPageWndNotification_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::ChatPageWndNotification(CXWnd*, uint32_t, void*), COptionsWnd__ChatPageWndNotification);
#endif
#ifdef COptionsWnd__ColorPageWndNotification_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::ColorPageWndNotification(CXWnd*, uint32_t, void*), COptionsWnd__ColorPageWndNotification);
#endif
#ifdef COptionsWnd__RestoreDefaultColors_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::RestoreDefaultColors(), COptionsWnd__RestoreDefaultColors);
#endif
#ifdef COptionsWnd__SetBagOptions_x
FUNCTION_AT_ADDRESS(void, COptionsWnd::SetBagOptions(int, int), COptionsWnd__SetBagOptions);
#endif
#ifdef COptionsWnd__KeyboardPageOnProcessFrame_x
FUNCTION_AT_ADDRESS(int, COptionsWnd::KeyboardPageOnProcessFrame(), COptionsWnd__KeyboardPageOnProcessFrame);
#endif

//----------------------------------------------------------------------------
// CPlayerNotesWnd
//----------------------------------------------------------------------------

#ifdef CPlayerNotesWnd__SaveNotes_x
FUNCTION_AT_ADDRESS(void, CPlayerNotesWnd::SaveNotes(), CPlayerNotesWnd__SaveNotes);
#endif
#ifdef CPlayerNotesWnd__AppendText_x
FUNCTION_AT_ADDRESS(void, CPlayerNotesWnd::AppendText(char*), CPlayerNotesWnd__AppendText);
#endif

//----------------------------------------------------------------------------
// CPlayerWnd
//----------------------------------------------------------------------------

#ifdef CPlayerWnd__CreateLocalMenu_x
FUNCTION_AT_ADDRESS(void, CPlayerWnd::CreateLocalMenu(), CPlayerWnd__CreateLocalMenu);
#endif
#ifdef CPlayerWnd__UpdateContextMenu_x
FUNCTION_AT_ADDRESS(void, CPlayerWnd::UpdateContextMenu(), CPlayerWnd__UpdateContextMenu);
#endif

//----------------------------------------------------------------------------
// CQuantityWnd
//----------------------------------------------------------------------------

#ifdef CQuantityWnd__CheckMaxEditWnd_x
FUNCTION_AT_ADDRESS(void, CQuantityWnd::CheckMaxEditWnd(), CQuantityWnd__CheckMaxEditWnd);
#endif
#ifdef CQuantityWnd__Open_x
FUNCTION_AT_ADDRESS(void, CQuantityWnd::Open(CXWnd*, int, int, int, int, int, int, bool), CQuantityWnd__Open);
#endif
#ifdef CQuantityWnd__UpdateEditWndFromSlider_x
FUNCTION_AT_ADDRESS(void, CQuantityWnd::UpdateEditWndFromSlider(), CQuantityWnd__UpdateEditWndFromSlider);
#endif
#ifdef CQuantityWnd__UpdateSliderFromEditWnd_x
FUNCTION_AT_ADDRESS(void, CQuantityWnd::UpdateSliderFromEditWnd(), CQuantityWnd__UpdateSliderFromEditWnd);
#endif

//----------------------------------------------------------------------------
// CRaidOptionsWnd
//----------------------------------------------------------------------------

#ifdef CRaidOptionsWnd__AddLooterToList_x
FUNCTION_AT_ADDRESS(void, CRaidOptionsWnd::AddLooterToList(char*), CRaidOptionsWnd__AddLooterToList);
#endif
#ifdef CRaidOptionsWnd__ClearLooterList_x
FUNCTION_AT_ADDRESS(void, CRaidOptionsWnd::ClearLooterList(), CRaidOptionsWnd__ClearLooterList);
#endif
#ifdef CRaidOptionsWnd__UpdateComponents_x
FUNCTION_AT_ADDRESS(void, CRaidOptionsWnd::UpdateComponents(), CRaidOptionsWnd__UpdateComponents);
#endif
#ifdef CRaidOptionsWnd__InitializeClassColors_x
FUNCTION_AT_ADDRESS(void, CRaidOptionsWnd::InitializeClassColors(), CRaidOptionsWnd__InitializeClassColors);
#endif

//----------------------------------------------------------------------------
// CRaidWnd
//----------------------------------------------------------------------------

#ifdef CRaidWnd__AddPlayertoList_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::AddPlayertoList(char*, char*, char*, char*, int, int, bool), CRaidWnd__AddPlayertoList);
#endif
#ifdef CRaidWnd__RemovePlayerFromList_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::RemovePlayerFromList(char*, int), CRaidWnd__RemovePlayerFromList);
#endif
#ifdef CRaidWnd__SetRaidCount_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::SetRaidCount(int), CRaidWnd__SetRaidCount);
#endif
#ifdef CRaidWnd__ClearPlayerList_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::ClearPlayerList(), CRaidWnd__ClearPlayerList);
#endif
#ifdef CRaidWnd__AddSeparator_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::AddSeparator(), CRaidWnd__AddSeparator);
#endif
#ifdef CRaidWnd__SetRaidMemberRank_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::SetRaidMemberRank(char*, char*, int), CRaidWnd__SetRaidMemberRank);
#endif
#ifdef CRaidWnd__ChangePosition_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::ChangePosition(char*, int, int, int, bool), CRaidWnd__ChangePosition);
#endif
#ifdef CRaidWnd__ChangeRaidGroupLeader_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::ChangeRaidGroupLeader(char*, int, char*), CRaidWnd__ChangeRaidGroupLeader);
#endif
#ifdef CRaidWnd__UpdateMemberName_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::UpdateMemberName(char*, char*, int), CRaidWnd__UpdateMemberName);
#endif
#ifdef CRaidWnd__SetRaidTarget_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::SetRaidTarget(char*, int, char*, int), CRaidWnd__SetRaidTarget);
#endif
#ifdef CRaidWnd__UpdateLevelAverage_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::UpdateLevelAverage(int), CRaidWnd__UpdateLevelAverage);
#endif
#ifdef CRaidWnd__UpdateButtons_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::UpdateButtons(), CRaidWnd__UpdateButtons);
#endif
#ifdef CRaidWnd__InitializeClassColors_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::InitializeClassColors(), CRaidWnd__InitializeClassColors);
#endif
#ifdef CRaidWnd__SetPlayerClassColor_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::SetPlayerClassColor(int, int, int), CRaidWnd__SetPlayerClassColor);
#endif
#ifdef CRaidWnd__SetPlayerClassColor1_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::SetPlayerClassColor(char*, int, int), CRaidWnd__SetPlayerClassColor1);
#endif
#ifdef CRaidWnd__SetClassColor_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::SetClassColor(int, unsigned long), CRaidWnd__SetClassColor);
#endif
#ifdef CRaidWnd__ResortRaidGroupList_x
FUNCTION_AT_ADDRESS(void, CRaidWnd::ResortRaidGroupList(int, int), CRaidWnd__ResortRaidGroupList);
#endif
#ifdef CRaidWnd__FindOpenIndexInGroup_x
FUNCTION_AT_ADDRESS(int, CRaidWnd::FindOpenIndexInGroup(int), CRaidWnd__FindOpenIndexInGroup);
#endif
#ifdef CRaidWnd__FindIndexNotInGroupList_x
FUNCTION_AT_ADDRESS(int, CRaidWnd::FindIndexNotInGroupList(char*), CRaidWnd__FindIndexNotInGroupList);
#endif
#ifdef CRaidWnd__FindPlayerIndexInGroup_x
FUNCTION_AT_ADDRESS(int, CRaidWnd::FindPlayerIndexInGroup(char*, int), CRaidWnd__FindPlayerIndexInGroup);
#endif

//----------------------------------------------------------------------------
// CSelectorWnd
//----------------------------------------------------------------------------

#ifdef CSelectorWnd__KeyMapUpdated_x
FUNCTION_AT_ADDRESS(void, CSelectorWnd::KeyMapUpdated(), CSelectorWnd__KeyMapUpdated);
#endif

//----------------------------------------------------------------------------
// CSkillsSelectWnd
//----------------------------------------------------------------------------

#ifdef CSkillsSelectWnd__Refresh_x
FUNCTION_AT_ADDRESS(void, CSkillsSelectWnd::Refresh(), CSkillsSelectWnd__Refresh);
#endif
#ifdef CSkillsSelectWnd__UpdateAll_x
FUNCTION_AT_ADDRESS(void, CSkillsSelectWnd::UpdateAll(), CSkillsSelectWnd__UpdateAll);
#endif
#ifdef CSkillsSelectWnd__UpdateSkill_x
FUNCTION_AT_ADDRESS(void, CSkillsSelectWnd::UpdateSkill(int), CSkillsSelectWnd__UpdateSkill);
#endif
#ifdef CSkillsSelectWnd__SetTypesToDisplay_x
FUNCTION_AT_ADDRESS(void, CSkillsSelectWnd::SetTypesToDisplay(int), CSkillsSelectWnd__SetTypesToDisplay);
#endif

//----------------------------------------------------------------------------
// CSkillsWnd
//----------------------------------------------------------------------------

#ifdef CSkillsWnd__SkillImproveOccurred_x
FUNCTION_AT_ADDRESS(void, CSkillsWnd::SkillImproveOccurred(int), CSkillsWnd__SkillImproveOccurred);
#endif
#ifdef CSkillsWnd__UpdateAll_x
FUNCTION_AT_ADDRESS(void, CSkillsWnd::UpdateAll(), CSkillsWnd__UpdateAll);
#endif
#ifdef CSkillsWnd__UpdateSkill_x
FUNCTION_AT_ADDRESS(void, CSkillsWnd::UpdateSkill(int), CSkillsWnd__UpdateSkill);
#endif

//----------------------------------------------------------------------------
// CStoryWnd
//----------------------------------------------------------------------------

#ifdef CStoryWnd__SaveIni_x
FUNCTION_AT_ADDRESS(void, CStoryWnd::SaveIni(), CStoryWnd__SaveIni);
#endif
#ifdef CStoryWnd__ShowAuto_x
FUNCTION_AT_ADDRESS(bool, CStoryWnd::ShowAuto(), CStoryWnd__ShowAuto);
#endif
#ifdef CStoryWnd__HasNew_x
FUNCTION_AT_ADDRESS(bool, CStoryWnd::HasNew(), CStoryWnd__HasNew);
#endif
#ifdef CStoryWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CStoryWnd::Activate(), CStoryWnd__Activate);
#endif
#ifdef CStoryWnd__SelectOldestNew_x
FUNCTION_AT_ADDRESS(void, CStoryWnd::SelectOldestNew(), CStoryWnd__SelectOldestNew);
#endif
#ifdef CStoryWnd__SelectIndex_x
FUNCTION_AT_ADDRESS(void, CStoryWnd::SelectIndex(int), CStoryWnd__SelectIndex);
#endif

//----------------------------------------------------------------------------
// CSocialEditWnd
//----------------------------------------------------------------------------

#ifdef CSocialEditWnd__ClickedAccept_x
FUNCTION_AT_ADDRESS(void, CSocialEditWnd::ClickedAccept(), CSocialEditWnd__ClickedAccept);
#endif
#ifdef CSocialEditWnd__ClickedClear_x
FUNCTION_AT_ADDRESS(void, CSocialEditWnd::ClickedClear(), CSocialEditWnd__ClickedClear);
#endif
#ifdef CSocialEditWnd__ClickedTextColorButton_x
FUNCTION_AT_ADDRESS(void, CSocialEditWnd::ClickedTextColorButton(int), CSocialEditWnd__ClickedTextColorButton);
#endif
#ifdef CSocialEditWnd__GetSocialTextColor_x
FUNCTION_AT_ADDRESS(unsigned long, CSocialEditWnd::GetSocialTextColor(int), CSocialEditWnd__GetSocialTextColor);
#endif
#ifdef CSocialEditWnd__UpdateControlsFromSocial_x
FUNCTION_AT_ADDRESS(void, CSocialEditWnd::UpdateControlsFromSocial(), CSocialEditWnd__UpdateControlsFromSocial);
#endif

//----------------------------------------------------------------------------
// CSpellBookWnd
//----------------------------------------------------------------------------

#ifdef CSpellBookWnd__GetBookSlot_x
FUNCTION_AT_ADDRESS(int __cdecl, CSpellBookWnd::GetBookSlot(int), CSpellBookWnd__GetBookSlot);
#endif
#ifdef CSpellBookWnd__MemorizeSet_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::MemorizeSet(int*, int), CSpellBookWnd__MemorizeSet);
#endif
#ifdef CSpellBookWnd__ContinueSetMem_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::ContinueSetMem(), CSpellBookWnd__ContinueSetMem);
#endif
#ifdef CSpellBookWnd__DelayedSpellMem_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::DelayedSpellMem(int, int, int), CSpellBookWnd__DelayedSpellMem);
#endif
#ifdef CSpellBookWnd__EndSetMem_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::EndSetMem(), CSpellBookWnd__EndSetMem);
#endif
#ifdef CSpellBookWnd__AutoMemSpell_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::AutoMemSpell(int, int), CSpellBookWnd__AutoMemSpell);
#endif
#ifdef CSpellBookWnd__HandleLeftClickOnSpell_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::HandleLeftClickOnSpell(int), CSpellBookWnd__HandleLeftClickOnSpell);
#endif
#ifdef CSpellBookWnd__HandleRightClickOnSpell_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::HandleRightClickOnSpell(int), CSpellBookWnd__HandleRightClickOnSpell);
#endif
#ifdef CSpellBookWnd__CanStartMemming_x
FUNCTION_AT_ADDRESS(bool, CSpellBookWnd::CanStartMemming(int), CSpellBookWnd__CanStartMemming);
#endif
#ifdef CSpellBookWnd__StartSpellMemorizationDrag_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::StartSpellMemorizationDrag(int, CButtonWnd*), CSpellBookWnd__StartSpellMemorizationDrag);
#endif
#ifdef CSpellBookWnd__StartSpellMemorization_x
FUNCTION_AT_ADDRESS(bool, CSpellBookWnd::StartSpellMemorization(int, int, bool), CSpellBookWnd__StartSpellMemorization);
#endif
#ifdef CSpellBookWnd__FinishMemorizing_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::FinishMemorizing(int, int), CSpellBookWnd__FinishMemorizing);
#endif
#ifdef CSpellBookWnd__GetSpellMemTicksLeft_x
FUNCTION_AT_ADDRESS(int, CSpellBookWnd::GetSpellMemTicksLeft(), CSpellBookWnd__GetSpellMemTicksLeft);
#endif
#ifdef CSpellBookWnd__StartSpellScribe_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::StartSpellScribe(int), CSpellBookWnd__StartSpellScribe);
#endif
#ifdef CSpellBookWnd__FinishScribing_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::FinishScribing(int, int), CSpellBookWnd__FinishScribing);
#endif
#ifdef CSpellBookWnd__GetSpellScribeTicksLeft_x
FUNCTION_AT_ADDRESS(int, CSpellBookWnd::GetSpellScribeTicksLeft(), CSpellBookWnd__GetSpellScribeTicksLeft);
#endif
#ifdef CSpellBookWnd__SwapSpellBookSlots_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::SwapSpellBookSlots(int, int), CSpellBookWnd__SwapSpellBookSlots);
#endif
#ifdef CSpellBookWnd__HandleSpellInfoDisplay_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::HandleSpellInfoDisplay(CXWnd*), CSpellBookWnd__HandleSpellInfoDisplay);
#endif
#ifdef CSpellBookWnd__DisplaySpellInfo_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::DisplaySpellInfo(int), CSpellBookWnd__DisplaySpellInfo);
#endif
#ifdef CSpellBookWnd__TurnToPage_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::TurnToPage(int), CSpellBookWnd__TurnToPage);
#endif
#ifdef CSpellBookWnd__UpdateSpellBookDisplay_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::UpdateSpellBookDisplay(), CSpellBookWnd__UpdateSpellBookDisplay);
#endif
#ifdef CSpellBookWnd__StopSpellBookAction_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::StopSpellBookAction(), CSpellBookWnd__StopSpellBookAction);
#endif
#ifdef CSpellBookWnd__GetSpellDeletionConfirmation_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::GetSpellDeletionConfirmation(int), CSpellBookWnd__GetSpellDeletionConfirmation);
#endif
#ifdef CSpellBookWnd__RequestSpellDeletion_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::RequestSpellDeletion(int), CSpellBookWnd__RequestSpellDeletion);
#endif
#ifdef CSpellBookWnd__DeleteSpellFromBook_x
FUNCTION_AT_ADDRESS(void, CSpellBookWnd::DeleteSpellFromBook(int, int), CSpellBookWnd__DeleteSpellFromBook);
#endif

//----------------------------------------------------------------------------
// CSpellGemWnd
//----------------------------------------------------------------------------

#ifdef CSpellGemWnd__CSpellGemWnd_x
FUNCTION_AT_ADDRESS(CSpellGemWnd::CSpellGemWnd(CXWnd*, uint32_t, CXRect, CTextureAnimation*, CTextureAnimation*, CTextureAnimation*, int, int, unsigned long), CSpellGemWnd__CSpellGemWnd);
#endif
#ifdef CSpellGemWnd__SetSpellIconIndex_x
FUNCTION_AT_ADDRESS(void, CSpellGemWnd::SetSpellIconIndex(int), CSpellGemWnd__SetSpellIconIndex);
#endif
#ifdef CSpellGemWnd__SetSpellGemTint_x
FUNCTION_AT_ADDRESS(void, CSpellGemWnd::SetSpellGemTint(unsigned long), CSpellGemWnd__SetSpellGemTint);
#endif
#ifdef CSpellGemWnd__SetGemTintStage_x
FUNCTION_AT_ADDRESS(void, CSpellGemWnd::SetGemTintStage(int), CSpellGemWnd__SetGemTintStage);
#endif
#ifdef CSpellGemWnd__SetCheck_x
FUNCTION_AT_ADDRESS(void, CSpellGemWnd::SetCheck(bool), CSpellGemWnd__SetCheck);
#endif

//----------------------------------------------------------------------------
// CTargetWnd
//----------------------------------------------------------------------------

#ifdef CTargetWnd__RefreshTargetBuffs_x
FUNCTION_AT_ADDRESS(void, CTargetWnd::RefreshTargetBuffs(CUnSerializeBuffer&), CTargetWnd__RefreshTargetBuffs);
#endif
#ifdef CTargetWnd__HandleBuffRemoveRequest_x
FUNCTION_AT_ADDRESS(void, CTargetWnd::HandleBuffRemoveRequest(CXWnd*), CTargetWnd__HandleBuffRemoveRequest);
#endif
#ifdef CTargetWnd__GetBuffCaster_x
FUNCTION_AT_ADDRESS(CXStr*, CTargetWnd::GetBuffCaster(int), CTargetWnd__GetBuffCaster);
#endif

//----------------------------------------------------------------------------
// CTaskWnd
//----------------------------------------------------------------------------

#ifdef CTaskWnd__UpdateTaskTimers_x
FUNCTION_AT_ADDRESS(int, CTaskWnd::UpdateTaskTimers(unsigned long), CTaskWnd__UpdateTaskTimers);
#endif

//----------------------------------------------------------------------------
// CTextEntryWnd
//----------------------------------------------------------------------------

#ifdef CTextEntryWnd__CTextEntryWnd_x
FUNCTION_AT_ADDRESS(CTextEntryWnd::CTextEntryWnd(CXWnd*), CTextEntryWnd__CTextEntryWnd);
#endif
#ifdef CTextEntryWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CTextEntryWnd::Activate(CXWnd*, int, char*, int, int, char*), CTextEntryWnd__Activate);
#endif
#ifdef CTextEntryWnd__Callback_x
FUNCTION_AT_ADDRESS(void, CTextEntryWnd::Callback(bool), CTextEntryWnd__Callback);
#endif
#ifdef CTextEntryWnd__UpdateButtons_x
FUNCTION_AT_ADDRESS(void, CTextEntryWnd::UpdateButtons(), CTextEntryWnd__UpdateButtons);
#endif
#ifdef CTextEntryWnd__GetEntryText_x
FUNCTION_AT_ADDRESS(CXStr, CTextEntryWnd::GetEntryText(), CTextEntryWnd__GetEntryText);
#endif

//----------------------------------------------------------------------------
// CTipWnd
//----------------------------------------------------------------------------

#ifdef CTipWnd__CTipWnd_x
FUNCTION_AT_ADDRESS(CTipWnd::CTipWnd(CXWnd*, int), CTipWnd__CTipWnd);
#endif
#ifdef CTipWnd__Activate_x
FUNCTION_AT_ADDRESS(bool, CTipWnd::Activate(int, bool), CTipWnd__Activate);
#endif
#ifdef CTipWnd__UpdateButtons_x
FUNCTION_AT_ADDRESS(void, CTipWnd::UpdateButtons(), CTipWnd__UpdateButtons);
#endif
#ifdef CTipWnd__InitializeTipSettings_x
FUNCTION_AT_ADDRESS(void, CTipWnd::InitializeTipSettings(), CTipWnd__InitializeTipSettings);
#endif
#ifdef CTipWnd__CleanDayTips_x
FUNCTION_AT_ADDRESS(void, CTipWnd::CleanDayTips(), CTipWnd__CleanDayTips);
#endif
#ifdef CTipWnd__SelectRandomTip_x
FUNCTION_AT_ADDRESS(int, CTipWnd::SelectRandomTip(), CTipWnd__SelectRandomTip);
#endif
#ifdef CTipWnd__SetTOTD_x
FUNCTION_AT_ADDRESS(void, CTipWnd::SetTOTD(int), CTipWnd__SetTOTD);
#endif
#ifdef CTipWnd__IsRecentTOTD_x
FUNCTION_AT_ADDRESS(bool, CTipWnd::IsRecentTOTD(int), CTipWnd__IsRecentTOTD);
#endif
#ifdef CTipWnd__AddContextTip_x
FUNCTION_AT_ADDRESS(void, CTipWnd::AddContextTip(int), CTipWnd__AddContextTip);
#endif
#ifdef CTipWnd__ShowHistoryTip_x
FUNCTION_AT_ADDRESS(void, CTipWnd::ShowHistoryTip(int), CTipWnd__ShowHistoryTip);
#endif
#ifdef CTipWnd__LoadINISettings_x
FUNCTION_AT_ADDRESS(void, CTipWnd::LoadINISettings(), CTipWnd__LoadINISettings);
#endif
#ifdef CTipWnd__LoadDayTips_x
FUNCTION_AT_ADDRESS(void, CTipWnd::LoadDayTips(), CTipWnd__LoadDayTips);
#endif

//----------------------------------------------------------------------------
// CTrackingWnd
//----------------------------------------------------------------------------

#ifdef CTrackingWnd__CTrackingWnd_x
FUNCTION_AT_ADDRESS(CTrackingWnd::CTrackingWnd(CXWnd*), CTrackingWnd__CTrackingWnd);
#endif
#ifdef CTrackingWnd__Init_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::Init(), CTrackingWnd__Init);
#endif
#ifdef CTrackingWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::Activate(), CTrackingWnd__Activate);
#endif
#ifdef CTrackingWnd__NotifyServerOfTrackingTarget_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::NotifyServerOfTrackingTarget(int), CTrackingWnd__NotifyServerOfTrackingTarget);
#endif
#ifdef CTrackingWnd__UpdateTrackingControls_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::UpdateTrackingControls(), CTrackingWnd__UpdateTrackingControls);
#endif
#ifdef CTrackingWnd__GetTrackColor_x
FUNCTION_AT_ADDRESS(unsigned long, CTrackingWnd::GetTrackColor(int), CTrackingWnd__GetTrackColor);
#endif
#ifdef CTrackingWnd__UpdateTrackingList_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::UpdateTrackingList(bool), CTrackingWnd__UpdateTrackingList);
#endif
#ifdef CTrackingWnd__GenerateTrackingList_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::GenerateTrackingList(), CTrackingWnd__GenerateTrackingList);
#endif
#ifdef CTrackingWnd__SetTrackingList_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::SetTrackingList(struct TrackingHit*, int), CTrackingWnd__SetTrackingList);
#endif
#ifdef CTrackingWnd__DoTrackSort_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::DoTrackSort(bool), CTrackingWnd__DoTrackSort);
#endif
#ifdef CTrackingWnd__DoTrackFilter_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::DoTrackFilter(bool), CTrackingWnd__DoTrackFilter);
#endif
#ifdef CTrackingWnd__RemovePlayerFromTracking_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::RemovePlayerFromTracking(EQPlayer*), CTrackingWnd__RemovePlayerFromTracking);
#endif
#ifdef CTrackingWnd__RemovePlayerFromTracking1_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::RemovePlayerFromTracking(int), CTrackingWnd__RemovePlayerFromTracking1);
#endif
#ifdef CTrackingWnd__RemoveFromListWndByData_x
FUNCTION_AT_ADDRESS(void, CTrackingWnd::RemoveFromListWndByData(unsigned int), CTrackingWnd__RemoveFromListWndByData);
#endif
#ifdef CTrackingWnd__GetListIdByData_x
FUNCTION_AT_ADDRESS(int, CTrackingWnd::GetListIdByData(unsigned int), CTrackingWnd__GetListIdByData);
#endif

//----------------------------------------------------------------------------
// CTradeWnd
//----------------------------------------------------------------------------

#ifdef CTradeWnd__CTradeWnd_x
FUNCTION_AT_ADDRESS(CTradeWnd::CTradeWnd(CXWnd*), CTradeWnd__CTradeWnd);
#endif
#ifdef CTradeWnd__Init_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::Init(), CTradeWnd__Init);
#endif
#ifdef CTradeWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::Activate(EQPlayer*, bool), CTradeWnd__Activate);
#endif
#ifdef CTradeWnd__ClickedCancelButton_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::ClickedCancelButton(), CTradeWnd__ClickedCancelButton);
#endif
#ifdef CTradeWnd__ClickedTradeButton_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::ClickedTradeButton(), CTradeWnd__ClickedTradeButton);
#endif
#ifdef CTradeWnd__ClickedMoneyButton_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::ClickedMoneyButton(int), CTradeWnd__ClickedMoneyButton);
#endif
#ifdef CTradeWnd__UpdateTradeDisplay_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::UpdateTradeDisplay(), CTradeWnd__UpdateTradeDisplay);
#endif
#ifdef CTradeWnd__IsMyTradeSlot_x
FUNCTION_AT_ADDRESS(bool, CTradeWnd::IsMyTradeSlot(int, bool*), CTradeWnd__IsMyTradeSlot);
#endif
#ifdef CTradeWnd__TradeItemChanged_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::TradeItemChanged(int, int), CTradeWnd__TradeItemChanged);
#endif
#ifdef CTradeWnd__CompleteTrade_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::CompleteTrade(), CTradeWnd__CompleteTrade);
#endif
#ifdef CTradeWnd__AddEquipmentToHisTradeArray_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::AddEquipmentToHisTradeArray(EQ_Equipment*), CTradeWnd__AddEquipmentToHisTradeArray);
#endif
#ifdef CTradeWnd__AddNoteToHisTradeArray_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::AddNoteToHisTradeArray(EQ_Note*), CTradeWnd__AddNoteToHisTradeArray);
#endif
#ifdef CTradeWnd__AddContainerToHisTradeArray_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::AddContainerToHisTradeArray(EQ_Container*), CTradeWnd__AddContainerToHisTradeArray);
#endif
#ifdef CTradeWnd__DeleteItemFromHisTradeArray_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::DeleteItemFromHisTradeArray(int), CTradeWnd__DeleteItemFromHisTradeArray);
#endif
#ifdef CTradeWnd__DropItemIntoTrade_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::DropItemIntoTrade(), CTradeWnd__DropItemIntoTrade);
#endif
#ifdef CTradeWnd__SetMyReadyTrade_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::SetMyReadyTrade(bool), CTradeWnd__SetMyReadyTrade);
#endif
#ifdef CTradeWnd__SetHisReadyTrade_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::SetHisReadyTrade(bool), CTradeWnd__SetHisReadyTrade);
#endif
#ifdef CTradeWnd__SetHisMoney_x
FUNCTION_AT_ADDRESS(void, CTradeWnd::SetHisMoney(int, long), CTradeWnd__SetHisMoney);
#endif

//----------------------------------------------------------------------------
// CTrainWnd
//----------------------------------------------------------------------------

#ifdef CTrainWnd__CTrainWnd_x
FUNCTION_AT_ADDRESS(CTrainWnd::CTrainWnd(CXWnd*), CTrainWnd__CTrainWnd);
#endif
#ifdef CTrainWnd__Activate_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::Activate(), CTrainWnd__Activate);
#endif
#ifdef CTrainWnd__UpdateRight_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::UpdateRight(), CTrainWnd__UpdateRight);
#endif
#ifdef CTrainWnd__UpdateAll_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::UpdateAll(bool), CTrainWnd__UpdateAll);
#endif
#ifdef CTrainWnd__SkillName_x
FUNCTION_AT_ADDRESS(char*, CTrainWnd::SkillName(int), CTrainWnd__SkillName);
#endif
#ifdef CTrainWnd__SkillValue_x
FUNCTION_AT_ADDRESS(int, CTrainWnd::SkillValue(int), CTrainWnd__SkillValue);
#endif
#ifdef CTrainWnd__SwapSkill_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::SwapSkill(int, int), CTrainWnd__SwapSkill);
#endif
#ifdef CTrainWnd__SortNames_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::SortNames(int), CTrainWnd__SortNames);
#endif
#ifdef CTrainWnd__SortSkill_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::SortSkill(int), CTrainWnd__SortSkill);
#endif
#ifdef CTrainWnd__UpdateSkill_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::UpdateSkill(int), CTrainWnd__UpdateSkill);
#endif
#ifdef CTrainWnd__SkillChanged_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::SkillChanged(int), CTrainWnd__SkillChanged);
#endif
#ifdef CTrainWnd__SetGMData_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::SetGMData(int*, unsigned char*, float), CTrainWnd__SetGMData);
#endif
#ifdef CTrainWnd__Train_x
FUNCTION_AT_ADDRESS(void, CTrainWnd::Train(), CTrainWnd__Train);
#endif

//----------------------------------------------------------------------------
// CVideoModesWnd
//----------------------------------------------------------------------------

#ifdef CVideoModesWnd__Update_x
FUNCTION_AT_ADDRESS(void, CVideoModesWnd::Update(), CVideoModesWnd__Update);
#endif
#ifdef CVideoModesWnd__UpdateSelection_x
FUNCTION_AT_ADDRESS(void, CVideoModesWnd::UpdateSelection(unsigned int), CVideoModesWnd__UpdateSelection);
#endif
#ifdef CVideoModesWnd__RestoreOldMode_x
FUNCTION_AT_ADDRESS(void, CVideoModesWnd::RestoreOldMode(), CVideoModesWnd__RestoreOldMode);
#endif

//----------------------------------------------------------------------------
// CChatWindowManager
//----------------------------------------------------------------------------

#ifdef CChatWindowManager__FreeChatWindow_x
FUNCTION_AT_ADDRESS(void, CChatWindowManager::FreeChatWindow(CChatWindow*), CChatWindowManager__FreeChatWindow);
#endif
#ifdef CChatWindowManager__GetRGBAFromIndex_x
FUNCTION_AT_ADDRESS(COLORREF, CChatWindowManager::GetRGBAFromIndex(int), CChatWindowManager__GetRGBAFromIndex);
#endif
#ifdef CChatWindowManager__InitContextMenu_x
FUNCTION_AT_ADDRESS(int, CChatWindowManager::InitContextMenu(CChatWindow*), CChatWindowManager__InitContextMenu);
#endif

#ifdef CChatWindowManager__SetLockedActiveChatWindow_x
FUNCTION_AT_ADDRESS(void, CChatWindowManager::SetLockedActiveChatWindow(CChatWindow*), CChatWindowManager__SetLockedActiveChatWindow);
#endif
#ifdef CChatWindowManager__CreateChatWindow_x
FUNCTION_AT_ADDRESS(void, CChatWindowManager::CreateChatWindow(CXWnd* pParentWnd, int ID, char* Name, int Language, int DefaultChannel, int ChatChannel, char* szTellTarget, int FontStyle, bool bScrollbar, bool bHighLight, COLORREF HighlightColor), CChatWindowManager__CreateChatWindow);
#endif

//----------------------------------------------------------------------------
// CChatWindow
//----------------------------------------------------------------------------

#ifdef CChatWindow__AddOutputText_x
FUNCTION_AT_ADDRESS(void, CChatWindow::AddOutputText(PCXSTR, int), CChatWindow__AddOutputText);
#endif
#ifdef CChatWindow__HistoryBack_x
FUNCTION_AT_ADDRESS(void, CChatWindow::HistoryBack(), CChatWindow__HistoryBack);
#endif
#ifdef CChatWindow__HistoryForward_x
FUNCTION_AT_ADDRESS(void, CChatWindow::HistoryForward(), CChatWindow__HistoryForward);
#endif
#ifdef CChatWindow__AddHistory_x
// defined in ExceptionsDisabled.cpp
#endif
#ifdef CChatWindow__GetInputText_x
FUNCTION_AT_ADDRESS(CXStr, CChatWindow::GetInputText(), CChatWindow__GetInputText);
#endif
#ifdef CChatWindow__PageUp_x
FUNCTION_AT_ADDRESS(void, CChatWindow::PageUp(), CChatWindow__PageUp);
#endif
#ifdef CChatWindow__PageDown_x
FUNCTION_AT_ADDRESS(void, CChatWindow::PageDown(), CChatWindow__PageDown);
#endif
#ifdef CChatWindow__SetChatFont_x
FUNCTION_AT_ADDRESS(void, CChatWindow::SetChatFont(int), CChatWindow__SetChatFont);
#endif
#ifdef CChatWindow__Clear_x
FUNCTION_AT_ADDRESS(void, CChatWindow::Clear(), CChatWindow__Clear);
#endif
#ifdef CChatWindow__GetInputWnd_x
FUNCTION_AT_ADDRESS(CEditWnd*, CChatWindow::GetInputWnd(), CChatWindow__GetInputWnd);
#endif
#ifdef CChatWindow__WndNotification_x
FUNCTION_AT_ADDRESS(int, CChatWindow::WndNotification(CXWnd*, uint32_t, void*), CChatWindow__WndNotification);
#endif

//----------------------------------------------------------------------------
// CSidlManagerBase
//----------------------------------------------------------------------------

#ifdef CSidlManagerBase__FindButtonDrawTemplate_x
FUNCTION_AT_ADDRESS(CButtonDrawTemplate*, CSidlManagerBase::FindButtonDrawTemplate(uint32_t) const, CSidlManagerBase__FindButtonDrawTemplate);
#endif
#ifdef CSidlManagerBase__FindAnimation1_x
FUNCTION_AT_ADDRESS(CTextureAnimation*, CSidlManagerBase::FindAnimation(const CXStr&) const, CSidlManagerBase__FindAnimation1);
#endif
#ifdef CSidlManagerBase__FindScreenPieceTemplate_x
FUNCTION_AT_ADDRESS(CScreenPieceTemplate*, CSidlManagerBase::FindScreenPieceTemplate(uint32_t) const, CSidlManagerBase__FindScreenPieceTemplate);
#endif
#ifdef CSidlManagerBase__FindScreenPieceTemplate1_x
FUNCTION_AT_ADDRESS(CScreenPieceTemplate*, CSidlManagerBase::FindScreenPieceTemplate(const CXStr&) const, CSidlManagerBase__FindScreenPieceTemplate1);
#endif
#ifdef CSidlManagerBase__CreateXWndFromTemplate_x
FUNCTION_AT_ADDRESS(CXWnd*, CSidlManagerBase::CreateXWndFromTemplate(CXWnd*, CControlTemplate*), CSidlManagerBase__CreateXWndFromTemplate);
#endif
#ifdef CSidlManagerBase__CreateXWndFromTemplate1_x
FUNCTION_AT_ADDRESS(CXWnd*, CSidlManagerBase::CreateXWndFromTemplate(CXWnd*, const CXStr&), CSidlManagerBase__CreateXWndFromTemplate1);
#endif
#ifdef CSidlManagerBase__CreateXWnd_x
FUNCTION_AT_ADDRESS(CXWnd*, CSidlManagerBase::CreateXWnd(CXWnd* pwndParent, CControlTemplate* pControl), CSidlManagerBase__CreateXWnd);
#endif

//----------------------------------------------------------------------------
// CSidlManager
//----------------------------------------------------------------------------

#ifdef CSidlManager__CreateHotButtonWnd_x
FUNCTION_AT_ADDRESS(CXWnd*, CSidlManager::CreateHotButtonWnd(CXWnd* pwndParent, CControlTemplate* pControl), CSidlManager__CreateHotButtonWnd);
#endif

//----------------------------------------------------------------------------
// CascadeItemBase and friends
//----------------------------------------------------------------------------

// CWndDisplayManager
FUNCTION_AT_ADDRESS(int, CWndDisplayManager::FindWindow(bool bNewWnd), CWndDisplayManager__FindWindow);

// CItemDisplayManager
FUNCTION_AT_ADDRESS(int, CItemDisplayManager::CreateWindowInstance(), CItemDisplayManager__CreateWindowInstance);

FUNCTION_AT_ADDRESS(ZoneGuideManagerClient&, ZoneGuideManagerClient::Instance(), ZoneGuideManagerClient__Instance);

//============================================================================
// Function Addresses: UITextures
//============================================================================

//----------------------------------------------------------------------------
// CTextureAnimation
//----------------------------------------------------------------------------

#ifdef CTextureAnimation__SetCurCell_x
FUNCTION_AT_ADDRESS(void, CTextureAnimation::SetCurCell(int), CTextureAnimation__SetCurCell)
#endif
#ifdef CTextureAnimation__Draw_x
FUNCTION_AT_ADDRESS(int, CTextureAnimation::Draw(const CXRect& rect, const CXRect& clip, COLORREF color, COLORREF color2) const, CTextureAnimation__Draw)
#endif

//============================================================================
// Function Addresses: XMLData
//============================================================================

//----------------------------------------------------------------------------
// CXMLDataManager
//----------------------------------------------------------------------------

#ifdef CXMLDataManager__IsDerivedFrom_x
FUNCTION_AT_ADDRESS(bool, CXMLDataManager::IsDerivedFrom(int, int), CXMLDataManager__IsDerivedFrom);
#endif

#ifdef CXMLSOMDocumentBase__XMLRead_x
FUNCTION_AT_ADDRESS(bool, CXMLSOMDocumentBase::XMLRead(const CXStr&, const CXStr&, const CXStr&), CXMLSOMDocumentBase__XMLRead);
#endif

}
