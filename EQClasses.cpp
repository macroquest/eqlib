/*
 * MacroQuest2: The extension platform for EverQuest
 * Copyright (C) 2002-2019 MacroQuest Authors
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

// Nothing apart from FUNCTION_AT_ADDRESS call should go into this file!

#pragma warning(push)
#pragma warning(disable:4740) // warning C4740: flow in or out of inline asm code suppresses global optimization
#pragma warning(disable:4530) // warning C4530: c++ exception handler used, but unwind semantics are not enabled. Specify /EHsc

namespace eqlib {

//============================================================================
// Global Functions
//============================================================================

#ifdef __IsResEffectSpell_x
FUNCTION_AT_ADDRESS(bool IsResEffectSpell(int), __IsResEffectSpell);
#endif

//============================================================================
// AggroMeterManagerClient
//============================================================================

#ifdef AggroMeterManagerClient__Instance_x
FUNCTION_AT_ADDRESS(AggroMeterManagerClient& AggroMeterManagerClient::Instance(), AggroMeterManagerClient__Instance);
#endif

//============================================================================
// AltAdvManager
//============================================================================

#ifdef AltAdvManager__AltAdvManager_x
FUNCTION_AT_ADDRESS(AltAdvManager::AltAdvManager(), AltAdvManager__AltAdvManager);
#endif
#ifdef AltAdvManager__GetAAById_x
FUNCTION_AT_ADDRESS(ALTABILITY* AltAdvManager::GetAAById(int, int), AltAdvManager__GetAAById);
#endif
#ifdef AltAdvManager__IsAbilityReady_x
FUNCTION_AT_ADDRESS(bool AltAdvManager::IsAbilityReady(PcZoneClient*, ALTABILITY*, int*, int*), AltAdvManager__IsAbilityReady);
#endif
#ifdef AltAdvManager__CalculateHideTimeReduce_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateHideTimeReduce(EQ_PC*), AltAdvManager__CalculateHideTimeReduce);
#endif
#ifdef AltAdvManager__GetCalculatedTimer_x
FUNCTION_AT_ADDRESS(unsigned long AltAdvManager::GetCalculatedTimer(PcZoneClient*, ALTABILITY*), AltAdvManager__GetCalculatedTimer);
#endif
#ifdef AltAdvManager__GetNextAbilityCost_x
FUNCTION_AT_ADDRESS(int AltAdvManager::GetNextAbilityCost(int, int), AltAdvManager__GetNextAbilityCost);
#endif
#ifdef AltAdvManager__TotalPointsInSkill_x
FUNCTION_AT_ADDRESS(int AltAdvManager::TotalPointsInSkill(int, int), AltAdvManager__TotalPointsInSkill);
#endif
#ifdef AltAdvManager__CalculateStalwartEnduranceChance_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateStalwartEnduranceChance(EQ_PC*), AltAdvManager__CalculateStalwartEnduranceChance);
#endif
#ifdef AltAdvManager__CalculateLoHHarmTouchReuseTimer_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateLoHHarmTouchReuseTimer(EQ_PC*, int), AltAdvManager__CalculateLoHHarmTouchReuseTimer);
#endif
#ifdef AltAdvManager__CalculateSingingMasteryMod_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateSingingMasteryMod(EQ_PC*, int), AltAdvManager__CalculateSingingMasteryMod);
#endif
#ifdef AltAdvManager__CalculateInstrumentMasteryMod_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateInstrumentMasteryMod(EQ_PC*), AltAdvManager__CalculateInstrumentMasteryMod);
#endif
#ifdef AltAdvManager__CalculateFleetOfFoot_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateFleetOfFoot(EQ_PC*), AltAdvManager__CalculateFleetOfFoot);
#endif
#ifdef AltAdvManager__CalculateNimbleEvasionChance_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateNimbleEvasionChance(EQ_PC*), AltAdvManager__CalculateNimbleEvasionChance);
#endif
#ifdef AltAdvManager__CalculateDoubleAttackChance_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateDoubleAttackChance(EQ_PC*, int, unsigned char), AltAdvManager__CalculateDoubleAttackChance);
#endif
#ifdef AltAdvManager__CalculateMitigationBoost_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateMitigationBoost(EQ_PC*, int), AltAdvManager__CalculateMitigationBoost);
#endif
#ifdef AltAdvManager__CalculateSpellCastingMastery_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateSpellCastingMastery(EQ_PC*), AltAdvManager__CalculateSpellCastingMastery);
#endif
#ifdef AltAdvManager__CalculateMaxHPAA_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateMaxHPAA(EQ_PC*, int), AltAdvManager__CalculateMaxHPAA);
#endif
#ifdef AltAdvManager__CalculateMaxStatAA_x
FUNCTION_AT_ADDRESS(int AltAdvManager::CalculateMaxStatAA(EQ_PC*, int), AltAdvManager__CalculateMaxStatAA);
#endif
#ifdef AltAdvManager__GetAbilityTitle_x
FUNCTION_AT_ADDRESS(int AltAdvManager::GetAbilityTitle(EQPlayer*), AltAdvManager__GetAbilityTitle);
#endif
#ifdef AltAdvManager__AltSkillReqs_x
FUNCTION_AT_ADDRESS(int AltAdvManager::AltSkillReqs(EQ_PC*, int), AltAdvManager__AltSkillReqs);
#endif
#ifdef AltAdvManager__GetAALevelNeeded_x
FUNCTION_AT_ADDRESS(int AltAdvManager::GetAALevelNeeded(EQ_PC*, int), AltAdvManager__GetAALevelNeeded);
#endif
#ifdef AltAdvManager__MeetsPoPLevelReqs_x
FUNCTION_AT_ADDRESS(int AltAdvManager::MeetsPoPLevelReqs(EQ_PC*, int, int), AltAdvManager__MeetsPoPLevelReqs);
#endif
#ifdef AltAdvManager__CanTrainAbility_x
FUNCTION_AT_ADDRESS(bool AltAdvManager::CanTrainAbility(PcZoneClient*, CAltAbilityData*, bool, bool, bool), AltAdvManager__CanTrainAbility);
#endif
#ifdef AltAdvManager__CanSeeAbility_x
FUNCTION_AT_ADDRESS(bool AltAdvManager::CanSeeAbility(PcZoneClient*, CAltAbilityData*), AltAdvManager__CanSeeAbility);
#endif
#ifdef AltAdvManager__AbilitiesByClass_x
FUNCTION_AT_ADDRESS(int AltAdvManager::AbilitiesByClass(int, int), AltAdvManager__AbilitiesByClass);
#endif
#ifdef AltAdvManager__GetAbilityReqs_x
FUNCTION_AT_ADDRESS(void AltAdvManager::GetAbilityReqs(char*, int), AltAdvManager__GetAbilityReqs);
#endif

//============================================================================
// CAltAbilityData
//============================================================================

#ifdef CAltAbilityData__GetMercCurrentRank_x
FUNCTION_AT_ADDRESS(int CAltAbilityData::GetMercCurrentRank(int), CAltAbilityData__GetMercCurrentRank);
#endif
#ifdef CAltAbilityData__GetMercMaxRank_x
FUNCTION_AT_ADDRESS(int CAltAbilityData::GetMercMaxRank(int), CAltAbilityData__GetMercMaxRank);
#endif
#ifdef CAltAbilityData__GetMaxRank_x
FUNCTION_AT_ADDRESS(int CAltAbilityData::GetMaxRank(), CAltAbilityData__GetMaxRank);
#endif

//============================================================================
// CBroadcast
//============================================================================

#ifdef CBroadcast__Get_x
FUNCTION_AT_ADDRESS(CBroadcast* CBroadcast::Get(), CBroadcast__Get);
#endif

//============================================================================
// CChatService
//============================================================================

#ifdef CChatService__GetNumberOfFriends_x
FUNCTION_AT_ADDRESS(int CChatService::GetNumberOfFriends(), CChatService__GetNumberOfFriends);
#endif
#ifdef CChatService__GetFriendName_x
FUNCTION_AT_ADDRESS(const char* CChatService::GetFriendName(int), CChatService__GetFriendName);
#endif

//============================================================================
// CDBStr
//============================================================================

#ifdef CDBStr__GetString_x
FUNCTION_AT_ADDRESS(const char* CDBStr::GetString(int, eDatabaseStringType type, bool*), CDBStr__GetString); // GetString(index, subindex, &success)
#endif

//============================================================================
// CDistillerInfo
//============================================================================

#ifdef CDistillerInfo__GetIDFromRecordNum_x
FUNCTION_AT_ADDRESS(int CDistillerInfo::GetIDFromRecordNum(int ID, bool bWhat), CDistillerInfo__GetIDFromRecordNum);
#endif
#ifdef CDistillerInfo__Instance_x
FUNCTION_AT_ADDRESS(CDistillerInfo& CDistillerInfo::Instance(), CDistillerInfo__Instance);
#endif

//============================================================================
// CEverQuest
//============================================================================

#ifdef CEverQuest__InitCommands_x
FUNCTION_AT_ADDRESS(void CEverQuest::InitCommands(), CEverQuest__InitCommands);
#endif
#ifdef CEverQuest__msgStartIcon_x
FUNCTION_AT_ADDRESS(int CEverQuest::msgStartIcon(void*), CEverQuest__msgStartIcon);
#endif
#ifdef CEverQuest__msgStartInotes_x
FUNCTION_AT_ADDRESS(int CEverQuest::msgStartInotes(void*), CEverQuest__msgStartInotes);
#endif
#ifdef CEverQuest__msgStartIeq_x
FUNCTION_AT_ADDRESS(int CEverQuest::msgStartIeq(void*), CEverQuest__msgStartIeq);
#endif
#ifdef CEverQuest__HandleItems_x
FUNCTION_AT_ADDRESS(int CEverQuest::HandleItems(void*, int), CEverQuest__HandleItems);
#endif
#ifdef CEverQuest__HandleWorldMessage_x
FUNCTION_AT_ADDRESS(unsigned char CEverQuest::HandleWorldMessage(struct connection_t*, uint32_t, char*, uint32_t), CEverQuest__HandleWorldMessage);
#endif
#ifdef CEverQuest__ChatServerGiveTime_x
FUNCTION_AT_ADDRESS(void CEverQuest::ChatServerGiveTime(), CEverQuest__ChatServerGiveTime);
#endif
#ifdef CEverQuest__ChatServerNotificationAdd_x
FUNCTION_AT_ADDRESS(void CEverQuest::ChatServerNotificationAdd(bool, char*, char*, int), CEverQuest__ChatServerNotificationAdd);
#endif
#ifdef CEverQuest__ChatServerNotificationFlush_x
FUNCTION_AT_ADDRESS(void CEverQuest::ChatServerNotificationFlush(), CEverQuest__ChatServerNotificationFlush);
#endif
#ifdef CEverQuest__ChatServerConnect_x
FUNCTION_AT_ADDRESS(void CEverQuest::ChatServerConnect(char*, int, char*, char*), CEverQuest__ChatServerConnect);
#endif
#ifdef CEverQuest__ChatServerMessage_x
FUNCTION_AT_ADDRESS(void CEverQuest::ChatServerMessage(char*), CEverQuest__ChatServerMessage);
#endif
#ifdef CEverQuest__ChatServerDisconnect_x
FUNCTION_AT_ADDRESS(void CEverQuest::ChatServerDisconnect(), CEverQuest__ChatServerDisconnect);
#endif
#ifdef CEverQuest__ResetVisionRGBs_x
FUNCTION_AT_ADDRESS(void CEverQuest::ResetVisionRGBs(), CEverQuest__ResetVisionRGBs);
#endif
#ifdef CEverQuest__GetMaxLightRadius_x
FUNCTION_AT_ADDRESS(float CEverQuest::GetMaxLightRadius(), CEverQuest__GetMaxLightRadius);
#endif
#ifdef CEverQuest__LoadStringTables_x
FUNCTION_AT_ADDRESS(void CEverQuest::LoadStringTables(), CEverQuest__LoadStringTables);
#endif
#ifdef CEverQuest__CEverQuest_x
FUNCTION_AT_ADDRESS(CEverQuest::CEverQuest(struct HWND__*), CEverQuest__CEverQuest);
#endif
#ifdef CEverQuest__dCEverQuest_x
FUNCTION_AT_ADDRESS(CEverQuest::~CEverQuest(), CEverQuest__dCEverQuest);
#endif
#ifdef CEverQuest__ProcessMBox_x
FUNCTION_AT_ADDRESS(int CEverQuest::ProcessMBox(), CEverQuest__ProcessMBox);
#endif
#ifdef CEverQuest__UseCharge_x
FUNCTION_AT_ADDRESS(void CEverQuest::UseCharge(unsigned long), CEverQuest__UseCharge);
#endif
#ifdef CEverQuest__LeaveGuildMaster_x
FUNCTION_AT_ADDRESS(void CEverQuest::LeaveGuildMaster(), CEverQuest__LeaveGuildMaster);
#endif
#ifdef CEverQuest__LeaveBankMode_x
FUNCTION_AT_ADDRESS(void CEverQuest::LeaveBankMode(bool), CEverQuest__LeaveBankMode);
#endif
#ifdef CEverQuest__ReportDeath_x
FUNCTION_AT_ADDRESS(void CEverQuest::ReportDeath(struct _EQPlayerDeath*), CEverQuest__ReportDeath);
#endif
#ifdef CEverQuest__SetDefaultDamageDescByRace_x
FUNCTION_AT_ADDRESS(void CEverQuest::SetDefaultDamageDescByRace(char*, int, unsigned char), CEverQuest__SetDefaultDamageDescByRace);
#endif
#ifdef CEverQuest__ReportSuccessfulHeal_x
FUNCTION_AT_ADDRESS(int CEverQuest::ReportSuccessfulHeal(EQSuccessfulHeal*), CEverQuest__ReportSuccessfulHeal);
#endif
#ifdef CEverQuest__ReportSuccessfulHit_x
FUNCTION_AT_ADDRESS(bool CEverQuest::ReportSuccessfulHit(EQSuccessfulHit*, bool, int), CEverQuest__ReportSuccessfulHit);
#endif
#ifdef CEverQuest__GetCombatSound_x
FUNCTION_AT_ADDRESS(int CEverQuest::GetCombatSound(EQPlayer*, EQPlayer*), CEverQuest__GetCombatSound);
#endif
#ifdef CEverQuest__LocalDeath_x
FUNCTION_AT_ADDRESS(void CEverQuest::LocalDeath(struct _EQPlayerDeath*, unsigned char), CEverQuest__LocalDeath);
#endif
#ifdef CEverQuest__PrepareLocalPCForRepop_x
FUNCTION_AT_ADDRESS(void CEverQuest::PrepareLocalPCForRepop(), CEverQuest__PrepareLocalPCForRepop);
#endif
#ifdef CEverQuest__SavePCForce_x
FUNCTION_AT_ADDRESS(void CEverQuest::SavePCForce(int), CEverQuest__SavePCForce);
#endif
#ifdef CEverQuest__StartCasting_x
FUNCTION_AT_ADDRESS(void CEverQuest::StartCasting(void*), CEverQuest__StartCasting);
#endif
#ifdef CEverQuest__Consider_x
FUNCTION_AT_ADDRESS(void CEverQuest::Consider(EQPlayer*, void*), CEverQuest__Consider);
#endif
#ifdef CEverQuest__GetClassDesc_x
FUNCTION_AT_ADDRESS(const char* CEverQuest::GetClassDesc(int), CEverQuest__GetClassDesc);
#endif
#ifdef CEverQuest__GetClassThreeLetterCode_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GetClassThreeLetterCode(int), CEverQuest__GetClassThreeLetterCode);
#endif
#ifdef CEverQuest__GetItemClassDesc_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GetItemClassDesc(int), CEverQuest__GetItemClassDesc);
#endif
#ifdef CEverQuest__GetBodyTypeDesc_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GetBodyTypeDesc(int), CEverQuest__GetBodyTypeDesc);
#endif
#ifdef CEverQuest__GetLangDesc_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GetLangDesc(int), CEverQuest__GetLangDesc);
#endif
#ifdef CEverQuest__GetRaceDesc_x
FUNCTION_AT_ADDRESS(const char* CEverQuest::GetRaceDesc(int), CEverQuest__GetRaceDesc);
#endif
#ifdef CEverQuest__GetDeityDesc_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GetDeityDesc(int), CEverQuest__GetDeityDesc);
#endif
#ifdef CEverQuest__GuildInvite_x
FUNCTION_AT_ADDRESS(void CEverQuest::GuildInvite(char*, char*), CEverQuest__GuildInvite);
#endif
#ifdef CEverQuest__GuildRemove_x
FUNCTION_AT_ADDRESS(void CEverQuest::GuildRemove(char*), CEverQuest__GuildRemove);
#endif
#ifdef CEverQuest__GuildDelete_x
FUNCTION_AT_ADDRESS(void CEverQuest::GuildDelete(), CEverQuest__GuildDelete);
#endif
#ifdef CEverQuest__GuildStatus_x
FUNCTION_AT_ADDRESS(void CEverQuest::GuildStatus(char*), CEverQuest__GuildStatus);
#endif
#ifdef CEverQuest__GuildLeader_x
FUNCTION_AT_ADDRESS(void CEverQuest::GuildLeader(char*), CEverQuest__GuildLeader);
#endif
#ifdef CEverQuest__GuildSay_x
FUNCTION_AT_ADDRESS(void CEverQuest::GuildSay(char*), CEverQuest__GuildSay);
#endif
#ifdef CEverQuest__Who_x
FUNCTION_AT_ADDRESS(void CEverQuest::Who(char*), CEverQuest__Who);
#endif
#ifdef CEverQuest__GetInnateDesc_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GetInnateDesc(int), CEverQuest__GetInnateDesc);
#endif
#ifdef CEverQuest__InviteOk_x
FUNCTION_AT_ADDRESS(void CEverQuest::InviteOk(char*), CEverQuest__InviteOk);
#endif
#ifdef CEverQuest__doUnInvite_x
FUNCTION_AT_ADDRESS(void CEverQuest::doUnInvite(char*), CEverQuest__doUnInvite);
#endif
#ifdef CEverQuest__Invite_x
FUNCTION_AT_ADDRESS(void CEverQuest::Invite(int), CEverQuest__Invite);
#endif
#ifdef CEverQuest__doInvite_x
FUNCTION_AT_ADDRESS(void CEverQuest::doInvite(uint32_t, char*), CEverQuest__doInvite);
#endif
#ifdef CEverQuest__Follow_x
FUNCTION_AT_ADDRESS(int CEverQuest::Follow(int), CEverQuest__Follow);
#endif
#ifdef CEverQuest__Disband_x
FUNCTION_AT_ADDRESS(void CEverQuest::Disband(), CEverQuest__Disband);
#endif
#ifdef CEverQuest__GuildWar_x
FUNCTION_AT_ADDRESS(void CEverQuest::GuildWar(char*, int), CEverQuest__GuildWar);
#endif
#ifdef CEverQuest__GuildPeace_x
FUNCTION_AT_ADDRESS(void CEverQuest::GuildPeace(char*), CEverQuest__GuildPeace);
#endif
#ifdef CEverQuest__Sit_x
FUNCTION_AT_ADDRESS(void CEverQuest::Sit(), CEverQuest__Sit);
#endif
#ifdef CEverQuest__Camp_x
FUNCTION_AT_ADDRESS(void CEverQuest::Camp(), CEverQuest__Camp);
#endif
#ifdef CEverQuest__DropHeldItemOnGround_x
FUNCTION_AT_ADDRESS(void CEverQuest::DropHeldItemOnGround(int), CEverQuest__DropHeldItemOnGround);
#endif
#ifdef CEverQuest__MoveMoney_x
FUNCTION_AT_ADDRESS(int CEverQuest::MoveMoney(int, int, int, int, int, bool), CEverQuest__MoveMoney);
#endif
#ifdef CEverQuest__DropHeldMoneyOnGround_x
FUNCTION_AT_ADDRESS(void CEverQuest::DropHeldMoneyOnGround(int), CEverQuest__DropHeldMoneyOnGround);
#endif
#ifdef CEverQuest__LMouseUp_x
FUNCTION_AT_ADDRESS(void CEverQuest::LMouseUp(int, int), CEverQuest__LMouseUp);
#endif
#ifdef CEverQuest__LeftClickedOnPlayer_x
FUNCTION_AT_ADDRESS(void CEverQuest::LeftClickedOnPlayer(PlayerClient*), CEverQuest__LeftClickedOnPlayer);
#endif
#ifdef CEverQuest__DropItemOrMoneyOnPlayer_x
FUNCTION_AT_ADDRESS(void CEverQuest::DropItemOrMoneyOnPlayer(PlayerClient*), CEverQuest__DropItemOrMoneyOnPlayer);
#endif
#ifdef CEverQuest__RightClickedOnPlayer_x
FUNCTION_AT_ADDRESS(void CEverQuest::RightClickedOnPlayer(PlayerClient*, int), CEverQuest__RightClickedOnPlayer);
#endif
#ifdef CEverQuest__send_social_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_social(int, char*, char*), CEverQuest__send_social);
#endif
#ifdef CEverQuest__SavePC_x
FUNCTION_AT_ADDRESS(void CEverQuest::SavePC(int, int, unsigned char), CEverQuest__SavePC);
#endif
#ifdef CEverQuest__send_tell_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_tell(char*, char*), CEverQuest__send_tell);
#endif
#ifdef CEverQuest__send_petition_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_petition(), CEverQuest__send_petition);
#endif
#ifdef CEverQuest__send_private_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_private(), CEverQuest__send_private);
#endif
#ifdef CEverQuest__WriteIntToClientINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::WriteIntToClientINI(int, char*, char*), CEverQuest__WriteIntToClientINI);
#endif
#ifdef CEverQuest__WriteFloatToClientINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::WriteFloatToClientINI(float, char*, char*), CEverQuest__WriteFloatToClientINI);
#endif
#ifdef CEverQuest__WriteBoolToClientINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::WriteBoolToClientINI(bool, char*, char*), CEverQuest__WriteBoolToClientINI);
#endif
#ifdef CEverQuest__WriteStringToClientINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::WriteStringToClientINI(char*, char*, char*), CEverQuest__WriteStringToClientINI);
#endif
#ifdef CEverQuest__ReadClientINIString_x
FUNCTION_AT_ADDRESS(char* CEverQuest::ReadClientINIString(char*, char*, char*, char*, int), CEverQuest__ReadClientINIString);
#endif
#ifdef CEverQuest__ReadClientINIInt_x
FUNCTION_AT_ADDRESS(int CEverQuest::ReadClientINIInt(char*, char*, int), CEverQuest__ReadClientINIInt);
#endif
#ifdef CEverQuest__ReadClientINIFloat_x
FUNCTION_AT_ADDRESS(float CEverQuest::ReadClientINIFloat(char*, char*, float), CEverQuest__ReadClientINIFloat);
#endif
#ifdef CEverQuest__ReadClientINIBool_x
FUNCTION_AT_ADDRESS(bool CEverQuest::ReadClientINIBool(char*, char*, bool), CEverQuest__ReadClientINIBool);
#endif
#ifdef CEverQuest__WriteIntToUIINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::WriteIntToUIINI(int, char*, char*), CEverQuest__WriteIntToUIINI);
#endif
#ifdef CEverQuest__WriteBoolToUIINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::WriteBoolToUIINI(bool, char*, char*), CEverQuest__WriteBoolToUIINI);
#endif
#ifdef CEverQuest__WriteStringToUIINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::WriteStringToUIINI(char*, char*, char*), CEverQuest__WriteStringToUIINI);
#endif
#ifdef CEverQuest__ReadUIINIString_x
FUNCTION_AT_ADDRESS(char* CEverQuest::ReadUIINIString(char*, char*, char*, char*, int), CEverQuest__ReadUIINIString);
#endif
#ifdef CEverQuest__ReadUIINIInt_x
FUNCTION_AT_ADDRESS(int CEverQuest::ReadUIINIInt(char*, char*, int), CEverQuest__ReadUIINIInt);
#endif
#ifdef CEverQuest__ReadUIINIBool_x
FUNCTION_AT_ADDRESS(bool CEverQuest::ReadUIINIBool(char*, char*, bool), CEverQuest__ReadUIINIBool);
#endif
#ifdef CEverQuest__SaveCamerasToINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::SaveCamerasToINI(), CEverQuest__SaveCamerasToINI);
#endif
#ifdef CEverQuest__saveOptions_x
FUNCTION_AT_ADDRESS(void CEverQuest::saveOptions(), CEverQuest__saveOptions);
#endif
#ifdef CEverQuest__saveOptions2_x
FUNCTION_AT_ADDRESS(void CEverQuest::saveOptions2(), CEverQuest__saveOptions2);
#endif
#ifdef CEverQuest__send_update_filters_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_update_filters(), CEverQuest__send_update_filters);
#endif
#ifdef CEverQuest__loadOptions_x
FUNCTION_AT_ADDRESS(void CEverQuest::loadOptions(), CEverQuest__loadOptions);
#endif
#ifdef CEverQuest__DoSplit_x
FUNCTION_AT_ADDRESS(void CEverQuest::DoSplit(char*), CEverQuest__DoSplit);
#endif
#ifdef CEverQuest__BeingIgnored_x
FUNCTION_AT_ADDRESS(int CEverQuest::BeingIgnored(char*), CEverQuest__BeingIgnored);
#endif
#ifdef CEverQuest__IsFriend_x
FUNCTION_AT_ADDRESS(int CEverQuest::IsFriend(const char*), CEverQuest__IsFriend);
#endif
#ifdef CEverQuest__ToggleAutoSplit_x
FUNCTION_AT_ADDRESS(void CEverQuest::ToggleAutoSplit(), CEverQuest__ToggleAutoSplit);
#endif
#ifdef CEverQuest__procMouse_x
FUNCTION_AT_ADDRESS(void CEverQuest::procMouse(int), CEverQuest__procMouse);
#endif
#ifdef CEverQuest__StripShipName_x
FUNCTION_AT_ADDRESS(char* CEverQuest::StripShipName(char*, char*), CEverQuest__StripShipName);
#endif
#ifdef CEverQuest__trimName_x
FUNCTION_AT_ADDRESS(char* CEverQuest::trimName(char*), CEverQuest__trimName);
#endif
#ifdef CEverQuest__CancelSneakHide_x
FUNCTION_AT_ADDRESS(void CEverQuest::CancelSneakHide(), CEverQuest__CancelSneakHide);
#endif
#ifdef CEverQuest__stripName_x
FUNCTION_AT_ADDRESS(char* CEverQuest::stripName(char*), CEverQuest__stripName);
#endif
#ifdef CEverQuest__clr_chat_input_x
FUNCTION_AT_ADDRESS(void CEverQuest::clr_chat_input(), CEverQuest__clr_chat_input);
#endif
#ifdef CEverQuest__dsp_chat_x
FUNCTION_AT_ADDRESS(void CEverQuest::dsp_chat(const char* line, int color, bool bLogIsOk, bool bConvertPercent, char* SomeStr), CEverQuest__dsp_chat);
#endif
#ifdef CEverQuest__OutputTextToLog_x
FUNCTION_AT_ADDRESS(void CEverQuest::OutputTextToLog(const char* Text), CEverQuest__OutputTextToLog);
#endif
#ifdef CEverQuest__DoTellWindow_x
FUNCTION_AT_ADDRESS(void CEverQuest::DoTellWindow(char* message, char* name, char* name2, void* unknown, int color, bool b), CEverQuest__DoTellWindow);
#endif
#ifdef CEverQuest__dsp_chat1_x
FUNCTION_AT_ADDRESS(void CEverQuest::dsp_chat(const char*), CEverQuest__dsp_chat1);
#endif
#ifdef CEverQuest__DoPercentConvert_x
FUNCTION_AT_ADDRESS(void CEverQuest::DoPercentConvert(char*, bool), CEverQuest__DoPercentConvert);
#endif
#ifdef CEverQuest__Emote_x
FUNCTION_AT_ADDRESS(void CEverQuest::Emote(), CEverQuest__Emote);
#endif
#ifdef CEverQuest__send_broadcast_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_broadcast(), CEverQuest__send_broadcast);
#endif
#ifdef CEverQuest__send_chat_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_chat(), CEverQuest__send_chat);
#endif
#ifdef CEverQuest__send_gsay_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_gsay(), CEverQuest__send_gsay);
#endif
#ifdef CEverQuest__reqChannel_x
FUNCTION_AT_ADDRESS(void CEverQuest::reqChannel(), CEverQuest__reqChannel);
#endif
#ifdef CEverQuest__send_shout_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_shout(), CEverQuest__send_shout);
#endif
#ifdef CEverQuest__send_auction_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_auction(), CEverQuest__send_auction);
#endif
#ifdef CEverQuest__send_ooc_x
FUNCTION_AT_ADDRESS(void CEverQuest::send_ooc(), CEverQuest__send_ooc);
#endif
#ifdef CEverQuest__GetCurrentLanguage_x
FUNCTION_AT_ADDRESS(int CEverQuest::GetCurrentLanguage() const, CEverQuest__GetCurrentLanguage);
#endif
#ifdef CEverQuest__SendNewText_x
FUNCTION_AT_ADDRESS(void CEverQuest::SendNewText(int, char*, char*), CEverQuest__SendNewText);
#endif
#ifdef CEverQuest__DisplayScreen_x
FUNCTION_AT_ADDRESS(void CEverQuest::DisplayScreen(char*), CEverQuest__DisplayScreen);
#endif
#ifdef CEverQuest__IsValidName_x
FUNCTION_AT_ADDRESS(int CEverQuest::IsValidName(char*), CEverQuest__IsValidName);
#endif
#ifdef CEverQuest__DoNewCharacterCreation_x
FUNCTION_AT_ADDRESS(void CEverQuest::DoNewCharacterCreation(), CEverQuest__DoNewCharacterCreation);
#endif
#ifdef CEverQuest__RemoveCharacterOptionFile_x
FUNCTION_AT_ADDRESS(void CEverQuest::RemoveCharacterOptionFile(char*), CEverQuest__RemoveCharacterOptionFile);
#endif
#ifdef CEverQuest__SetDefaultGameValues_x
FUNCTION_AT_ADDRESS(void CEverQuest::SetDefaultGameValues(), CEverQuest__SetDefaultGameValues);
#endif
#ifdef CEverQuest__SetPlayerAppearanceFromPInfo_x
FUNCTION_AT_ADDRESS(void CEverQuest::SetPlayerAppearanceFromPInfo(EQPlayer*, int, bool), CEverQuest__SetPlayerAppearanceFromPInfo);
#endif
#ifdef CEverQuest__DoCharacterSelection_x
FUNCTION_AT_ADDRESS(void CEverQuest::DoCharacterSelection(), CEverQuest__DoCharacterSelection);
#endif
#ifdef CEverQuest__DoLogin_x
FUNCTION_AT_ADDRESS(int CEverQuest::DoLogin(struct HWND__*, struct HINSTANCE__*), CEverQuest__DoLogin);
#endif
#ifdef CEverQuest__SetupCharSelectCamera_x
FUNCTION_AT_ADDRESS(void CEverQuest::SetupCharSelectCamera(), CEverQuest__SetupCharSelectCamera);
#endif
#ifdef CEverQuest__CreateDataSubdirectories_x
FUNCTION_AT_ADDRESS(void CEverQuest::CreateDataSubdirectories(), CEverQuest__CreateDataSubdirectories);
#endif
#ifdef CEverQuest__CreateFilenameServerCode_x
FUNCTION_AT_ADDRESS(void CEverQuest::CreateFilenameServerCode(char*), CEverQuest__CreateFilenameServerCode);
#endif
#ifdef CEverQuest__CreateIniFilenames_x
FUNCTION_AT_ADDRESS(void CEverQuest::CreateIniFilenames(), CEverQuest__CreateIniFilenames);
#endif
#ifdef CEverQuest__StartNetworkGame_x
FUNCTION_AT_ADDRESS(void CEverQuest::StartNetworkGame(struct HWND__*, struct HINSTANCE__*, char*), CEverQuest__StartNetworkGame);
#endif
#ifdef CEverQuest__GetZoneInfoFromNetwork_x
FUNCTION_AT_ADDRESS(void CEverQuest::GetZoneInfoFromNetwork(char*), CEverQuest__GetZoneInfoFromNetwork);
#endif
#ifdef CEverQuest__EnterZone_x
FUNCTION_AT_ADDRESS(void CEverQuest::EnterZone(struct HWND__*), CEverQuest__EnterZone);
#endif
#ifdef CEverQuest__Surname_x
FUNCTION_AT_ADDRESS(void CEverQuest::Surname(char*), CEverQuest__Surname);
#endif
#ifdef CEverQuest__Kill_x
FUNCTION_AT_ADDRESS(void CEverQuest::Kill(char*, char*), CEverQuest__Kill);
#endif
#ifdef CEverQuest__UpdateMyAppearance_x
FUNCTION_AT_ADDRESS(void CEverQuest::UpdateMyAppearance(), CEverQuest__UpdateMyAppearance);
#endif
#ifdef CEverQuest__IFoundMyVehicle_x
FUNCTION_AT_ADDRESS(unsigned char CEverQuest::IFoundMyVehicle(), CEverQuest__IFoundMyVehicle);
#endif
#ifdef CEverQuest__ProcessLocalPCIni_x
FUNCTION_AT_ADDRESS(void CEverQuest::ProcessLocalPCIni(int), CEverQuest__ProcessLocalPCIni);
#endif
#ifdef CEverQuest__DoMainLoop_x
FUNCTION_AT_ADDRESS(void CEverQuest::DoMainLoop(struct HWND__*), CEverQuest__DoMainLoop);
#endif
#ifdef CEverQuest__ProcessControls_x
FUNCTION_AT_ADDRESS(void CEverQuest::ProcessControls(), CEverQuest__ProcessControls);
#endif
#ifdef CEverQuest__TypingMode_x
FUNCTION_AT_ADDRESS(int CEverQuest::TypingMode(), CEverQuest__TypingMode);
#endif
#ifdef CEverQuest__IsInTypingMode_x
FUNCTION_AT_ADDRESS(bool CEverQuest::IsInTypingMode(), CEverQuest__IsInTypingMode);
#endif
#ifdef CEverQuest__doInspect_x
FUNCTION_AT_ADDRESS(void CEverQuest::doInspect(EQPlayer*), CEverQuest__doInspect);
#endif
#ifdef __do_loot_x
FUNCTION_AT_ADDRESS(void CEverQuest::doLoot(), __do_loot);
#endif
#ifdef CEverQuest__SendLightInfo_x
FUNCTION_AT_ADDRESS(void CEverQuest::SendLightInfo(EQPlayer*, unsigned char), CEverQuest__SendLightInfo);
#endif
#ifdef CEverQuest__SetTimedFog_x
FUNCTION_AT_ADDRESS(void CEverQuest::SetTimedFog(int), CEverQuest__SetTimedFog);
#endif
#ifdef CEverQuest__ProcessGame_x
FUNCTION_AT_ADDRESS(void CEverQuest::ProcessGame(struct HWND__*, struct HINSTANCE__*), CEverQuest__ProcessGame);
#endif
#ifdef CEverQuest__DoLoadScreenProgressBar_x
FUNCTION_AT_ADDRESS(void __cdecl CEverQuest::DoLoadScreenProgressBar(int, const char*, ...), CEverQuest__DoLoadScreenProgressBar);
#endif
#ifdef CEverQuest__DoLoadScreen_x
FUNCTION_AT_ADDRESS(void CEverQuest::DoLoadScreen(int), CEverQuest__DoLoadScreen);
#endif
#ifdef CEverQuest__CleanupBadFiles_x
FUNCTION_AT_ADDRESS(void CEverQuest::CleanupBadFiles(), CEverQuest__CleanupBadFiles);
#endif
#ifdef CEverQuest__CreateInitialActors_x
FUNCTION_AT_ADDRESS(void CEverQuest::CreateInitialActors(), CEverQuest__CreateInitialActors);
#endif
#ifdef CEverQuest__CreateTargetIndicator_x
FUNCTION_AT_ADDRESS(void CEverQuest::CreateTargetIndicator(int Slot, PSPELL pSpell, const ItemGlobalIndex& ItemLoc, ItemSpellTypes spelltype), CEverQuest__CreateTargetIndicator);
#endif
#ifdef CEverQuest__DeleteTargetIndicator_x
FUNCTION_AT_ADDRESS(int CEverQuest::DeleteTargetIndicator(), CEverQuest__DeleteTargetIndicator);
#endif
#ifdef CEverQuest__GetSndDriver_x
FUNCTION_AT_ADDRESS(void CEverQuest::GetSndDriver(), CEverQuest__GetSndDriver);
#endif
#ifdef CEverQuest__InterpretCmd_x
FUNCTION_AT_ADDRESS(void CEverQuest::InterpretCmd(PlayerClient*, char*), CEverQuest__InterpretCmd);
#endif
#ifdef CEverQuest__GrabFirstWord_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GrabFirstWord(char*, char*), CEverQuest__GrabFirstWord);
#endif
#ifdef CEverQuest__GrabFirstWord2_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GrabFirstWord2(char*, char*, int), CEverQuest__GrabFirstWord2);
#endif
#ifdef CEverQuest__CopyFirstWord_x
FUNCTION_AT_ADDRESS(void CEverQuest::CopyFirstWord(char*, char*), CEverQuest__CopyFirstWord);
#endif
#ifdef CEverQuest__ApplyPoison_x
FUNCTION_AT_ADDRESS(void CEverQuest::ApplyPoison(unsigned long), CEverQuest__ApplyPoison);
#endif
#ifdef CEverQuest__DeacSpellScreen_x
FUNCTION_AT_ADDRESS(void CEverQuest::DeacSpellScreen(), CEverQuest__DeacSpellScreen);
#endif
#ifdef CEverQuest__MoveToZone_x
FUNCTION_AT_ADDRESS(void CEverQuest::MoveToZone(int EQZoneIndex, char*, int, int ZONE_REQ_REASON, float, float, float, int), CEverQuest__MoveToZone);
#endif
#ifdef CEverQuest__LMouseDown_x
FUNCTION_AT_ADDRESS(void CEverQuest::LMouseDown(int, int), CEverQuest__LMouseDown);
#endif
#ifdef CEverQuest__RMouseDown_x
FUNCTION_AT_ADDRESS(void CEverQuest::RMouseDown(int, int), CEverQuest__RMouseDown);
#endif
#ifdef CEverQuest__RMouseUp_x
FUNCTION_AT_ADDRESS(void CEverQuest::RMouseUp(int, int), CEverQuest__RMouseUp);
#endif
#ifdef CEverQuest__MouseWheelScrolled_x
FUNCTION_AT_ADDRESS(void CEverQuest::MouseWheelScrolled(int), CEverQuest__MouseWheelScrolled);
#endif
#ifdef CEverQuest__ClickedSwitch_x
FUNCTION_AT_ADDRESS(EQSwitch* CEverQuest::ClickedSwitch(int, int), CEverQuest__ClickedSwitch);
#endif
#ifdef CEverQuest__ClickedPlayer_x
FUNCTION_AT_ADDRESS(PlayerClient* CEverQuest::ClickedPlayer(int, int), CEverQuest__ClickedPlayer);
#endif
#ifdef CEverQuest__WhatTimeIsIt_x
FUNCTION_AT_ADDRESS(void CEverQuest::WhatTimeIsIt(), CEverQuest__WhatTimeIsIt);
#endif
#ifdef CEverQuest__FreeSwitches_x
FUNCTION_AT_ADDRESS(void CEverQuest::FreeSwitches(), CEverQuest__FreeSwitches);
#endif
#ifdef CEverQuest__SetLfgPlayerStatus_x
FUNCTION_AT_ADDRESS(void CEverQuest::SetLfgPlayerStatus(struct LfgPlayerStatus*), CEverQuest__SetLfgPlayerStatus);
#endif
#ifdef CEverQuest__SetLfgGroupStatus_x
FUNCTION_AT_ADDRESS(void CEverQuest::SetLfgGroupStatus(struct LfgGroupStatus*), CEverQuest__SetLfgGroupStatus);
#endif
#ifdef CEverQuest__IssueLfgPlayerQuery_x
FUNCTION_AT_ADDRESS(void CEverQuest::IssueLfgPlayerQuery(struct LfgPlayerQuery*), CEverQuest__IssueLfgPlayerQuery);
#endif
#ifdef CEverQuest__IssueLfgGroupQuery_x
FUNCTION_AT_ADDRESS(void CEverQuest::IssueLfgGroupQuery(struct LfgGroupQuery*), CEverQuest__IssueLfgGroupQuery);
#endif
#ifdef CEverQuest__IssuePetCommand_x
FUNCTION_AT_ADDRESS(void CEverQuest::IssuePetCommand(ePetCommandType, int, bool, bool), CEverQuest__IssuePetCommand);
#endif
#ifdef CEverQuest__LootCorpse_x
FUNCTION_AT_ADDRESS(int CEverQuest::LootCorpse(EQPlayer*, int), CEverQuest__LootCorpse);
#endif
#ifdef CEverQuest__loadSoundsGame_x
FUNCTION_AT_ADDRESS(void CEverQuest::loadSoundsGame(), CEverQuest__loadSoundsGame);
#endif
#ifdef CEverQuest__GetSingleMessage_x
FUNCTION_AT_ADDRESS(char* CEverQuest::GetSingleMessage(uint32_t, int, int*, char*), CEverQuest__GetSingleMessage);
#endif
#ifdef CEverQuest__SetGameState_x
FUNCTION_AT_ADDRESS(void CEverQuest::SetGameState(int), CEverQuest__SetGameState);
#endif
#ifdef CEverQuest__IsOkToTransact_x
FUNCTION_AT_ADDRESS(bool CEverQuest::IsOkToTransact(), CEverQuest__IsOkToTransact);
#endif
#ifdef CEverQuest__SortSpellLoadouts_x
FUNCTION_AT_ADDRESS(void CEverQuest::SortSpellLoadouts(), CEverQuest__SortSpellLoadouts);
#endif
#ifdef CEverQuest__saveCustom_x
FUNCTION_AT_ADDRESS(void CEverQuest::saveCustom(), CEverQuest__saveCustom);
#endif
#ifdef CEverQuest__loadCustomFromINI_x
FUNCTION_AT_ADDRESS(void CEverQuest::loadCustomFromINI(char*), CEverQuest__loadCustomFromINI);
#endif
#ifdef CEverQuest__loadCustom_x
FUNCTION_AT_ADDRESS(void CEverQuest::loadCustom(), CEverQuest__loadCustom);
#endif
#ifdef CEverQuest__initCustom_x
FUNCTION_AT_ADDRESS(void CEverQuest::initCustom(), CEverQuest__initCustom);
#endif

//============================================================================
// CGuild
//============================================================================

#ifdef CGuild__GetGuildMotd_x
FUNCTION_AT_ADDRESS(char* CGuild::GetGuildMotd(), CGuild__GetGuildMotd);
#endif
#ifdef CGuild__GetGuildMotdAuthor_x
FUNCTION_AT_ADDRESS(char* CGuild::GetGuildMotdAuthor(), CGuild__GetGuildMotdAuthor);
#endif
#ifdef CGuild__GetGuildName_x
FUNCTION_AT_ADDRESS(const char* CGuild::GetGuildName(int64_t, ServerGuildName, int, bool) const, CGuild__GetGuildName);
#endif
#ifdef CGuild__GetGuildIndex_x
FUNCTION_AT_ADDRESS(int64_t CGuild::GetGuildIndex(char*), CGuild__GetGuildIndex);
#endif
#ifdef CGuild__ValidGuildName_x
FUNCTION_AT_ADDRESS(bool CGuild::ValidGuildName(int), CGuild__ValidGuildName);
#endif
#ifdef CGuild__SendPublicCommentChange_x
FUNCTION_AT_ADDRESS(void CGuild::SendPublicCommentChange(char*, char*), CGuild__SendPublicCommentChange);
#endif
#ifdef CGuild__DemoteMember_x
FUNCTION_AT_ADDRESS(void CGuild::DemoteMember(GuildMember*), CGuild__DemoteMember);
#endif
#ifdef CGuild__SetGuildMotd_x
FUNCTION_AT_ADDRESS(void CGuild::SetGuildMotd(guildmotdSet*), CGuild__SetGuildMotd);
#endif
#ifdef CGuild__HandleGuildMessage_x
FUNCTION_AT_ADDRESS(void CGuild::HandleGuildMessage(connection_t*, uint32_t, char*, uint32_t), CGuild__HandleGuildMessage);
#endif
#ifdef CGuild__InitializeFromDump_x
FUNCTION_AT_ADDRESS(void CGuild::InitializeFromDump(char*), CGuild__InitializeFromDump);
#endif
#ifdef CGuild__AddGuildMember_x
FUNCTION_AT_ADDRESS(void CGuild::AddGuildMember(GuildMember*), CGuild__AddGuildMember);
#endif
#ifdef CGuild__DeleteAllMembers_x
FUNCTION_AT_ADDRESS(void CGuild::DeleteAllMembers(), CGuild__DeleteAllMembers);
#endif
#ifdef CGuild__HandleGuildInvite_x
FUNCTION_AT_ADDRESS(void CGuild::HandleGuildInvite(connection_t*, uint32_t, char*, uint32_t), CGuild__HandleGuildInvite);
#endif
#ifdef CGuild__HandleAddGuildMember_x
FUNCTION_AT_ADDRESS(void CGuild::HandleAddGuildMember(char*, int), CGuild__HandleAddGuildMember);
#endif
#ifdef CGuild__HandleRemoveGuildMember_x
FUNCTION_AT_ADDRESS(void CGuild::HandleRemoveGuildMember(char*, int), CGuild__HandleRemoveGuildMember);
#endif
#ifdef CGuild__HandleDeleteGuildResponse_x
FUNCTION_AT_ADDRESS(void CGuild::HandleDeleteGuildResponse(char*), CGuild__HandleDeleteGuildResponse);
#endif
#ifdef CGuild__UpdatePublicComment_x
FUNCTION_AT_ADDRESS(void CGuild::UpdatePublicComment(char*), CGuild__UpdatePublicComment);
#endif
#ifdef CGuild__UpdateMemberStatus_x
FUNCTION_AT_ADDRESS(void CGuild::UpdateMemberStatus(char*), CGuild__UpdateMemberStatus);
#endif
#ifdef CGuild__HandleMemberLevelUpdate_x
FUNCTION_AT_ADDRESS(void CGuild::HandleMemberLevelUpdate(char*), CGuild__HandleMemberLevelUpdate);
#endif
#ifdef CGuild__UpdateGuildMemberOnWindow_x
FUNCTION_AT_ADDRESS(void CGuild::UpdateGuildMemberOnWindow(GuildMember*), CGuild__UpdateGuildMemberOnWindow);
#endif
#ifdef CGuild__ChangeGuildMemberName_x
FUNCTION_AT_ADDRESS(void CGuild::ChangeGuildMemberName(char*), CGuild__ChangeGuildMemberName);
#endif
#ifdef CGuild__FindMemberByName_x
FUNCTION_AT_ADDRESS(GuildMember* CGuild::FindMemberByName(const char*), CGuild__FindMemberByName);
#endif

//============================================================================
// ChatManagerClient
//============================================================================

#ifdef ChatManagerClient__Instance_x
FUNCTION_AT_ADDRESS(ChatManagerClient& ChatManagerClient::Instance(), ChatManagerClient__Instance);
#endif

//============================================================================
// ClientSOIManager
//============================================================================

#ifdef ClientSOIManager__GetSingleton_x
FUNCTION_AT_ADDRESS(ClientSOIManager* ClientSOIManager::GetSingleton(), ClientSOIManager__GetSingleton);
#endif

//============================================================================
// ClientSpellManager
//============================================================================

FUNCTION_AT_VIRTUAL_ADDRESS(bool ClientSpellManager::LoadSpells(const char*, const char*, const char*), 0x04);
FUNCTION_AT_VIRTUAL_ADDRESS(bool ClientSpellManager::LoadSpellStackingData(const char*), 0x08);
FUNCTION_AT_VIRTUAL_ADDRESS(bool ClientSpellManager::DoesMeetRequirement(PlayerZoneClient*, int), 0x0c);
FUNCTION_AT_VIRTUAL_ADDRESS(void ClientSpellManager::PrintFailedRequirementString(int, int), 0x10);
FUNCTION_AT_VIRTUAL_ADDRESS(int ClientSpellManager::GetSpellStackingGroupID(int), 0x14);
FUNCTION_AT_VIRTUAL_ADDRESS(int ClientSpellManager::GetSpellStackingGroupRank(int), 0x18);
FUNCTION_AT_VIRTUAL_ADDRESS(ESpellStackingRules ClientSpellManager::GetSpellStackingGroupRule(int), 0x1c);
FUNCTION_AT_VIRTUAL_ADDRESS(PSPELL ClientSpellManager::GetSpellByID(int), 0x20);
FUNCTION_AT_VIRTUAL_ADDRESS(SPELLCALCINFO* ClientSpellManager::GetSpellAffect(int), 0x24);
FUNCTION_AT_VIRTUAL_ADDRESS(bool ClientSpellManager::GetSpellAffectEmpty(bool), 0x28);

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
FUNCTION_AT_ADDRESS(void ConversationJournal::Clean(), ConversationJournal__Clean);
#endif
#ifdef ConversationJournal__AllocateNPCArray_x
FUNCTION_AT_ADDRESS(void ConversationJournal::AllocateNPCArray(), ConversationJournal__AllocateNPCArray);
#endif
#ifdef ConversationJournal__AllocateCatArray_x
FUNCTION_AT_ADDRESS(void ConversationJournal::AllocateCatArray(), ConversationJournal__AllocateCatArray);
#endif
#ifdef ConversationJournal__GetNPC_x
FUNCTION_AT_ADDRESS(JournalNPC* ConversationJournal::GetNPC(int), ConversationJournal__GetNPC);
#endif
#ifdef ConversationJournal__FindNPCByNameZone_x
FUNCTION_AT_ADDRESS(JournalNPC* ConversationJournal::FindNPCByNameZone(char*, int), ConversationJournal__FindNPCByNameZone);
#endif
#ifdef ConversationJournal__DeleteNPC_x
FUNCTION_AT_ADDRESS(int ConversationJournal::DeleteNPC(char*, int), ConversationJournal__DeleteNPC);
#endif
#ifdef ConversationJournal__AddNPC_x
FUNCTION_AT_ADDRESS(JournalNPC* ConversationJournal::AddNPC(char*, int), ConversationJournal__AddNPC);
#endif
#ifdef ConversationJournal__AddEntry_x
FUNCTION_AT_ADDRESS(int ConversationJournal::AddEntry(char*, int, long, float, float, float, char*, int), ConversationJournal__AddEntry);
#endif
#ifdef ConversationJournal__AddCategory_x
FUNCTION_AT_ADDRESS(JournalCategory* ConversationJournal::AddCategory(int), ConversationJournal__AddCategory);
#endif
#ifdef ConversationJournal__FindFreeID_x
FUNCTION_AT_ADDRESS(int ConversationJournal::FindFreeID(), ConversationJournal__FindFreeID);
#endif
#ifdef ConversationJournal__AddCategory1_x
FUNCTION_AT_ADDRESS(JournalCategory* ConversationJournal::AddCategory(char*, char*, int), ConversationJournal__AddCategory1);
#endif
#ifdef ConversationJournal__DeleteCategory_x
FUNCTION_AT_ADDRESS(void ConversationJournal::DeleteCategory(int), ConversationJournal__DeleteCategory);
#endif
#ifdef ConversationJournal__GetCategory_x
FUNCTION_AT_ADDRESS(JournalCategory* ConversationJournal::GetCategory(int), ConversationJournal__GetCategory);
#endif
#ifdef ConversationJournal__GetCategory1_x
FUNCTION_AT_ADDRESS(JournalCategory* ConversationJournal::GetCategory(char*), ConversationJournal__GetCategory1);
#endif
#ifdef ConversationJournal__GetCategoryList_x
FUNCTION_AT_ADDRESS(JournalCategory** ConversationJournal::GetCategoryList(), ConversationJournal__GetCategoryList);
#endif
#ifdef ConversationJournal__Save_x
FUNCTION_AT_ADDRESS(int ConversationJournal::Save(char*), ConversationJournal__Save);
#endif
#ifdef ConversationJournal__Load_x
FUNCTION_AT_ADDRESS(int ConversationJournal::Load(char*), ConversationJournal__Load);
#endif
#ifdef ConversationJournal__ReadCategory_x
FUNCTION_AT_ADDRESS(void ConversationJournal::ReadCategory(_iobuf*), ConversationJournal__ReadCategory);
#endif
#ifdef ConversationJournal__ReadNPC_x
FUNCTION_AT_ADDRESS(JournalNPC* ConversationJournal::ReadNPC(_iobuf*), ConversationJournal__ReadNPC);
#endif

//============================================================================
// CRaid
//============================================================================

#ifdef CRaid__CRaid_x
FUNCTION_AT_ADDRESS(CRaid::CRaid(), CRaid__CRaid);
#endif
#ifdef CRaid__HandleS2CRaidMessage_x
FUNCTION_AT_ADDRESS(void CRaid::HandleS2CRaidMessage(char*), CRaid__HandleS2CRaidMessage);
#endif
#ifdef CRaid__HandleC2SRaidMessage_x
FUNCTION_AT_ADDRESS(void CRaid::HandleC2SRaidMessage(char*), CRaid__HandleC2SRaidMessage);
#endif
#ifdef CRaid__IsInRaid_x
FUNCTION_AT_ADDRESS(bool CRaid::IsInRaid(), CRaid__IsInRaid);
#endif
#ifdef CRaid__IsInvited_x
FUNCTION_AT_ADDRESS(bool CRaid::IsInvited(), CRaid__IsInvited);
#endif
#ifdef CRaid__ClearInvitedState_x
FUNCTION_AT_ADDRESS(void CRaid::ClearInvitedState(), CRaid__ClearInvitedState);
#endif
#ifdef CRaid__IsRaidLeader_x
FUNCTION_AT_ADDRESS(bool CRaid::IsRaidLeader(), CRaid__IsRaidLeader);
#endif
#ifdef CRaid__IsRaidGroupLeader_x
FUNCTION_AT_ADDRESS(bool CRaid::IsRaidGroupLeader(), CRaid__IsRaidGroupLeader);
#endif
#ifdef CRaid__SetTargetRaidPlayer_x
FUNCTION_AT_ADDRESS(void CRaid::SetTargetRaidPlayer(char*), CRaid__SetTargetRaidPlayer);
#endif
#ifdef CRaid__InitializeRaid_x
FUNCTION_AT_ADDRESS(void CRaid::InitializeRaid(char*), CRaid__InitializeRaid);
#endif
#ifdef CRaid__RaidCreated_x
FUNCTION_AT_ADDRESS(void CRaid::RaidCreated(CreateRaidMessage*), CRaid__RaidCreated);
#endif
#ifdef CRaid__AddRaidMember_x
FUNCTION_AT_ADDRESS(void CRaid::AddRaidMember(RaidAddMember*), CRaid__AddRaidMember);
#endif
#ifdef CRaid__DeleteRaidMember_x
FUNCTION_AT_ADDRESS(void CRaid::DeleteRaidMember(SCRaidMessage*), CRaid__DeleteRaidMember);
#endif
#ifdef CRaid__ChangeLeadership_x
FUNCTION_AT_ADDRESS(void CRaid::ChangeLeadership(char*), CRaid__ChangeLeadership);
#endif
#ifdef CRaid__RenameMember_x
FUNCTION_AT_ADDRESS(void CRaid::RenameMember(RenameRaidMember*), CRaid__RenameMember);
#endif
#ifdef CRaid__HandlePositionChange_x
FUNCTION_AT_ADDRESS(void CRaid::HandlePositionChange(SCRaidMessage*), CRaid__HandlePositionChange);
#endif
#ifdef CRaid__RaidGroupLeaderChange_x
FUNCTION_AT_ADDRESS(void CRaid::RaidGroupLeaderChange(SCRaidMessage*), CRaid__RaidGroupLeaderChange);
#endif
#ifdef CRaid__SetLootTypeResponse_x
FUNCTION_AT_ADDRESS(void CRaid::SetLootTypeResponse(SCRaidMessage*), CRaid__SetLootTypeResponse);
#endif
#ifdef CRaid__HandleSetLootType_x
FUNCTION_AT_ADDRESS(void CRaid::HandleSetLootType(int), CRaid__HandleSetLootType);
#endif
#ifdef CRaid__HandleAddLooter_x
FUNCTION_AT_ADDRESS(void CRaid::HandleAddLooter(char*), CRaid__HandleAddLooter);
#endif
#ifdef CRaid__HandleRemoveLooter_x
FUNCTION_AT_ADDRESS(void CRaid::HandleRemoveLooter(char*), CRaid__HandleRemoveLooter);
#endif
#ifdef CRaid__CreateInviteRaid_x
FUNCTION_AT_ADDRESS(void CRaid::CreateInviteRaid(), CRaid__CreateInviteRaid);
#endif
#ifdef CRaid__SendInviteResponse_x
FUNCTION_AT_ADDRESS(void CRaid::SendInviteResponse(bool), CRaid__SendInviteResponse);
#endif
#ifdef CRaid__SendLeadershipChange_x
FUNCTION_AT_ADDRESS(void CRaid::SendLeadershipChange(char*), CRaid__SendLeadershipChange);
#endif
#ifdef CRaid__RemoveRaidMember_x
FUNCTION_AT_ADDRESS(void CRaid::RemoveRaidMember(), CRaid__RemoveRaidMember);
#endif
#ifdef CRaid__SetLootType_x
FUNCTION_AT_ADDRESS(void CRaid::SetLootType(char*), CRaid__SetLootType);
#endif
#ifdef CRaid__GetLootType_x
FUNCTION_AT_ADDRESS(int CRaid::GetLootType(), CRaid__GetLootType);
#endif
#ifdef CRaid__AddRaidLooter_x
FUNCTION_AT_ADDRESS(void CRaid::AddRaidLooter(), CRaid__AddRaidLooter);
#endif
#ifdef CRaid__RemoveRaidLooter_x
FUNCTION_AT_ADDRESS(void CRaid::RemoveRaidLooter(), CRaid__RemoveRaidLooter);
#endif
#ifdef CRaid__SendRaidChat_x
FUNCTION_AT_ADDRESS(void CRaid::SendRaidChat(char*), CRaid__SendRaidChat);
#endif
#ifdef CRaid__ResetWindow_x
FUNCTION_AT_ADDRESS(void CRaid::ResetWindow(), CRaid__ResetWindow);
#endif
#ifdef CRaid__UpdateClassColor_x
FUNCTION_AT_ADDRESS(void CRaid::UpdateClassColor(int, unsigned long), CRaid__UpdateClassColor);
#endif
#ifdef CRaid__HandleCreateInviteRaid_x
FUNCTION_AT_ADDRESS(void CRaid::HandleCreateInviteRaid(CSRaidMessage*), CRaid__HandleCreateInviteRaid);
#endif
#ifdef CRaid__GetNumRaidMembers_x
FUNCTION_AT_ADDRESS(int CRaid::GetNumRaidMembers(), CRaid__GetNumRaidMembers);
#endif
#ifdef CRaid__GetRaidMemberAt_x
FUNCTION_AT_ADDRESS(RaidMember* CRaid::GetRaidMemberAt(int), CRaid__GetRaidMemberAt);
#endif
#ifdef CRaid__SetRaidLeader_x
FUNCTION_AT_ADDRESS(void CRaid::SetRaidLeader(char*), CRaid__SetRaidLeader);
#endif
#ifdef CRaid__FindPlayerIndex_x
FUNCTION_AT_ADDRESS(int CRaid::FindPlayerIndex(char*), CRaid__FindPlayerIndex);
#endif
#ifdef CRaid__IsRaidMember_x
FUNCTION_AT_ADDRESS(bool CRaid::IsRaidMember(char*), CRaid__IsRaidMember);
#endif
#ifdef CRaid__FindOpenIndex_x
FUNCTION_AT_ADDRESS(int CRaid::FindOpenIndex(), CRaid__FindOpenIndex);
#endif
#ifdef CRaid__FindRaidGroupLeader_x
FUNCTION_AT_ADDRESS(int CRaid::FindRaidGroupLeader(int), CRaid__FindRaidGroupLeader);
#endif
#ifdef CRaid__ResetRaid_x
FUNCTION_AT_ADDRESS(void CRaid::ResetRaid(), CRaid__ResetRaid);
#endif
#ifdef CRaid__DetermineRaidChanges_x
FUNCTION_AT_ADDRESS(void CRaid::DetermineRaidChanges(char*), CRaid__DetermineRaidChanges);
#endif
#ifdef CRaid__SendRaidMsg_x
FUNCTION_AT_ADDRESS(void CRaid::SendRaidMsg(int, char*, char*, int), CRaid__SendRaidMsg);
#endif
#ifdef CRaid__UpdateOptionsWindow_x
FUNCTION_AT_ADDRESS(void CRaid::UpdateOptionsWindow(), CRaid__UpdateOptionsWindow);
#endif
#ifdef CRaid__IsRaidLooter_x
FUNCTION_AT_ADDRESS(bool CRaid::IsRaidLooter(char*), CRaid__IsRaidLooter);
#endif
#ifdef CRaid__UpdateLevelAverage_x
FUNCTION_AT_ADDRESS(void CRaid::UpdateLevelAverage(), CRaid__UpdateLevelAverage);
#endif

//============================================================================
// CResolutionHandler
//============================================================================

#ifdef CResolutionHandler__Init_x
FUNCTION_AT_ADDRESS(int CResolutionHandler::Init(), CResolutionHandler__Init);
#endif
#ifdef CResolutionHandler__Shutdown_x
FUNCTION_AT_ADDRESS(void CResolutionHandler::Shutdown(), CResolutionHandler__Shutdown);
#endif
#ifdef CResolutionHandler__SaveSettings_x
FUNCTION_AT_ADDRESS(void CResolutionHandler::SaveSettings(), CResolutionHandler__SaveSettings);
#endif
#ifdef CResolutionHandler__ToggleScreenMode_x
FUNCTION_AT_ADDRESS(void CResolutionHandler::ToggleScreenMode(), CResolutionHandler__ToggleScreenMode);
#endif
#ifdef CResolutionHandler__ChangeToResolution_x
FUNCTION_AT_ADDRESS(void CResolutionHandler::ChangeToResolution(int, int, int, int, int), CResolutionHandler__ChangeToResolution);
#endif
#ifdef CResolutionHandler__UpdateWindowPosition_x
FUNCTION_AT_ADDRESS(void CResolutionHandler::UpdateWindowPosition(), CResolutionHandler__UpdateWindowPosition);
#endif
#ifdef CResolutionHandler__UpdateResolution_x
FUNCTION_AT_ADDRESS(void CResolutionHandler::UpdateResolution(ResolutionUpdateData& data), CResolutionHandler__UpdateResolution);
#endif
#ifdef CResolutionHandler__GetWindowedStyle_x
FUNCTION_AT_ADDRESS(DWORD CResolutionHandler::GetWindowedStyle() const, CResolutionHandler__GetWindowedStyle);
#endif
#ifdef CResolutionHandler__GetDesktopWidth_x
FUNCTION_AT_ADDRESS(int CResolutionHandler::GetDesktopWidth(), CResolutionHandler__GetDesktopWidth);
#endif
#ifdef CResolutionHandler__GetDesktopHeight_x
FUNCTION_AT_ADDRESS(int CResolutionHandler::GetDesktopHeight(), CResolutionHandler__GetDesktopHeight);
#endif
#ifdef CResolutionHandler__GetDesktopBitsPerPixel_x
FUNCTION_AT_ADDRESS(int CResolutionHandler::GetDesktopBitsPerPixel(), CResolutionHandler__GetDesktopBitsPerPixel);
#endif
#ifdef CResolutionHandler__GetDesktopRefreshRate_x
FUNCTION_AT_ADDRESS(int CResolutionHandler::GetDesktopRefreshRate(), CResolutionHandler__GetDesktopRefreshRate);
#endif
#ifdef CResolutionHandler__GetWidth_x
FUNCTION_AT_ADDRESS(int CResolutionHandler::GetWidth(), CResolutionHandler__GetWidth);
#endif
#ifdef CResolutionHandler__GetHeight_x
FUNCTION_AT_ADDRESS(int CResolutionHandler::GetHeight(), CResolutionHandler__GetHeight);
#endif
#ifdef CResolutionHandler__IsFullscreenAvailable_x
FUNCTION_AT_ADDRESS(bool CResolutionHandler::IsFullscreenAvailable(), CResolutionHandler__IsFullscreenAvailable);
#endif

//============================================================================
// CSkillMgr
//============================================================================

#ifdef CSkillMgr__GetNameToken_x
FUNCTION_AT_ADDRESS(int SkillManager::GetNameToken(int), CSkillMgr__GetNameToken);
#endif
#ifdef CSkillMgr__IsCombatSkill_x
FUNCTION_AT_ADDRESS(bool SkillManager::IsCombatSkill(int), CSkillMgr__IsCombatSkill);
#endif
#ifdef CSkillMgr__GetSkillCap_x
FUNCTION_AT_ADDRESS(unsigned long SkillManager::GetSkillCap(PcZoneClient*, int, int, int, bool, bool, bool), CSkillMgr__GetSkillCap)
#endif
#ifdef CSkillMgr__SkillAvailableAtLevel_x
FUNCTION_AT_ADDRESS(unsigned long SkillManager::SkillAvailableAtLevel(int, int), CSkillMgr__SkillAvailableAtLevel);
#endif
#ifdef CSkillMgr__IsActivatedSkill_x
FUNCTION_AT_ADDRESS(bool SkillManager::IsActivatedSkill(int), CSkillMgr__IsActivatedSkill);
#endif
#ifdef CSkillMgr__GetBaseDamage_x
FUNCTION_AT_ADDRESS(unsigned long SkillManager::GetBaseDamage(int), CSkillMgr__GetBaseDamage);
#endif
#ifdef CSkillMgr__GetReuseTime_x
FUNCTION_AT_ADDRESS(unsigned long SkillManager::GetReuseTime(int), CSkillMgr__GetReuseTime);
#endif
#ifdef CSkillMgr__IsAvailable_x
FUNCTION_AT_ADDRESS(bool SkillManager::IsAvailable(int), CSkillMgr__IsAvailable);
#endif

//============================================================================
// CTargetManager
//============================================================================

#ifdef CTargetManager__Get_x
FUNCTION_AT_ADDRESS(CTargetManager* CTargetManager::Get(), CTargetManager__Get);
#endif

//============================================================================
// CTargetRing
//============================================================================

#ifdef CTargetRing__Cast_x
FUNCTION_AT_ADDRESS(int CTargetRing::Cast(const CVector3&), CTargetRing__Cast);
#endif

//============================================================================
// CTaskManager
//============================================================================

#ifdef CTaskManager__GetEntry_x
FUNCTION_AT_ADDRESS(CTaskEntry* CTaskManager::GetEntry(int Index, int System, bool bCheckEmpty), CTaskManager__GetEntry);
#endif
#ifdef CTaskManager__GetTaskStatus_x
FUNCTION_AT_ADDRESS(PCTaskStatus* CTaskManager::GetTaskStatus(PcClient* pMe, int Index, TaskSystemType System),CTaskManager__GetTaskStatus);
#endif
#ifdef CTaskManager__GetElementDescription_x
FUNCTION_AT_ADDRESS(void CTaskManager::GetElementDescription(const CTaskElement* pElement, char* Out),CTaskManager__GetElementDescription);
#endif

//============================================================================
// CTextOverlay
//============================================================================

#ifdef CTextOverlay__DisplayText_x
//this is really:
//MQLIB_OBJECT void CBroadcast::BroadcastString(const char* Str, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime);
FUNCTION_AT_ADDRESS(void CBroadcast::DisplayText(const char* Str, int TextColor, int Priority, int MaxAlpha, UINT FadeInTime, UINT FadeOutTime, UINT DisplayTime), CTextOverlay__DisplayText);
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
FUNCTION_AT_ADDRESS(void EmitterManager::GiveTime(), EmitterManager__GiveTime);
#endif
#ifdef EmitterManager__GetEffectsLevel_x
FUNCTION_AT_ADDRESS(float EmitterManager::GetEffectsLevel(), EmitterManager__GetEffectsLevel);
#endif
#ifdef EmitterManager__GetVolumeLevel_x
FUNCTION_AT_ADDRESS(float EmitterManager::GetVolumeLevel(), EmitterManager__GetVolumeLevel);
#endif
#ifdef EmitterManager__SetEffectsLevel_x
FUNCTION_AT_ADDRESS(void EmitterManager::SetEffectsLevel(float), EmitterManager__SetEffectsLevel);
#endif
#ifdef EmitterManager__GetListenerLocation_x
FUNCTION_AT_ADDRESS(void EmitterManager::GetListenerLocation(float*, float*, float*, float*), EmitterManager__GetListenerLocation);
#endif
#ifdef EmitterManager__SetVolumeLevel_x
FUNCTION_AT_ADDRESS(void EmitterManager::SetVolumeLevel(float), EmitterManager__SetVolumeLevel);
#endif

//============================================================================
// EQ_Affect
//============================================================================

#ifdef EQ_Affect__Reset_x
FUNCTION_AT_ADDRESS(void EQ_Affect::Reset(), EQ_Affect__Reset);
#endif
#ifdef EQ_Affect__GetAffectData_x
FUNCTION_AT_ADDRESS(int EQ_Affect::GetAffectData(int) const, EQ_Affect__GetAffectData);
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
FUNCTION_AT_ADDRESS(unsigned char EQ_Container::Open(), EQ_Container__Open);
#endif
#ifdef EQ_Container__Close_x
FUNCTION_AT_ADDRESS(unsigned char EQ_Container::Close(), EQ_Container__Close);
#endif
#ifdef EQ_Container__IsOpen_x
FUNCTION_AT_ADDRESS(unsigned char EQ_Container::IsOpen(), EQ_Container__IsOpen);
#endif
#ifdef EQ_Equipment__EQ_Equipment_x
FUNCTION_AT_ADDRESS(EQ_Equipment::EQ_Equipment(), EQ_Equipment__EQ_Equipment);
#endif
#ifdef EQ_Equipment__IsWeapon_x
FUNCTION_AT_ADDRESS(int EQ_Equipment::IsWeapon(), EQ_Equipment__IsWeapon);
#endif
#ifdef EQ_Equipment__IsInstrument_x
FUNCTION_AT_ADDRESS(int EQ_Equipment::IsInstrument(), EQ_Equipment__IsInstrument);
#endif
#ifdef EQ_Equipment__SendTextRequestMsg_x
FUNCTION_AT_ADDRESS(void EQ_Equipment::SendTextRequestMsg(), EQ_Equipment__SendTextRequestMsg);
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
FUNCTION_AT_ADDRESS(void EQ_LoadingS::DrawBackground(), EQ_LoadingS__DrawBackground);
#endif
#ifdef EQ_LoadingS__draw_x
FUNCTION_AT_ADDRESS(void EQ_LoadingS::draw(), EQ_LoadingS__draw);
#endif
#ifdef EQ_LoadingS__WriteTextHD_x
FUNCTION_AT_ADDRESS(void EQ_LoadingS::WriteTextHD(char*, int, int, int), EQ_LoadingS__WriteTextHD);
#endif
#ifdef EQ_LoadingS__SetProgressBar_x
FUNCTION_AT_ADDRESS(void EQ_LoadingS::SetProgressBar(int, const char*), EQ_LoadingS__SetProgressBar);
#endif

//============================================================================
// EQ_Spell
//============================================================================

#ifdef EQ_Spell__IsStackableDot_x
FUNCTION_AT_ADDRESS(bool EQ_Spell::IsStackableDot() const, EQ_Spell__IsStackableDot);
#endif
#ifdef EQ_Spell__IsStackable_x
FUNCTION_AT_ADDRESS(bool EQ_Spell::IsStackable() const, EQ_Spell__IsStackable);
#endif
#ifdef EQ_Spell__GetSpellAffectBySlot_x
FUNCTION_AT_ADDRESS(const SpellAffectData* EQ_Spell::GetSpellAffectBySlot(int) const, EQ_Spell__GetSpellAffectBySlot);
#endif
#ifdef EQ_Spell__GetSpellAffectByIndex_x
FUNCTION_AT_ADDRESS(const SpellAffectData* EQ_Spell::GetSpellAffectByIndex(int) const, EQ_Spell__GetSpellAffectByIndex);
#endif
#ifdef EQ_Spell__IsSPAStacking_x
FUNCTION_AT_ADDRESS(bool EQ_Spell::IsSPAStacking(int) , EQ_Spell__IsSPAStacking);
#endif
#ifdef EQ_Spell__IsSPAIgnoredByStacking_x
FUNCTION_AT_ADDRESS(bool EQ_Spell::IsSPAIgnoredByStacking(int) , EQ_Spell__IsSPAIgnoredByStacking);
#endif
#ifdef EQ_Spell__IsNoRemove_x
FUNCTION_AT_ADDRESS(bool EQ_Spell::IsNoRemove() const, EQ_Spell__IsNoRemove);
#endif
#ifdef EQ_Spell__IsDegeneratingLevelMod_x
FUNCTION_AT_ADDRESS(bool EQ_Spell::IsDegeneratingLevelMod(int) , EQ_Spell__IsDegeneratingLevelMod);
#endif
#ifdef EQ_Spell__SpellUsesDragonBreathEffect_x
FUNCTION_AT_ADDRESS(int EQ_Spell::SpellUsesDragonBreathEffect(), EQ_Spell__SpellUsesDragonBreathEffect);
#endif
#ifdef EQ_Spell__EQ_Spell_x
FUNCTION_AT_ADDRESS(EQ_Spell::EQ_Spell(char*), EQ_Spell__EQ_Spell);
#endif
#ifdef EQ_Spell__dEQ_Spell_x
FUNCTION_AT_ADDRESS(EQ_Spell::~EQ_Spell(), EQ_Spell__dEQ_Spell);
#endif
#ifdef EQ_Spell__SpellAffects_x
FUNCTION_AT_ADDRESS(unsigned char EQ_Spell::SpellAffects(int) const, EQ_Spell__SpellAffects);
#endif
#ifdef EQ_Spell__IsPermIllusionSpell_x
FUNCTION_AT_ADDRESS(int EQ_Spell::IsPermIllusionSpell() const, EQ_Spell__IsPermIllusionSpell);
#endif
#ifdef EQ_Spell__GetSpellLevelNeeded_x
FUNCTION_AT_ADDRESS(unsigned char EQ_Spell::GetSpellLevelNeeded(int) const, EQ_Spell__GetSpellLevelNeeded);
#endif
#ifdef EQ_Spell__SpellAffectBase_x
FUNCTION_AT_ADDRESS(int EQ_Spell::SpellAffectBase(int) const, EQ_Spell__SpellAffectBase);
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
FUNCTION_AT_ADDRESS(void EqEmitterData::SetLoadString(char*), EqEmitterData__SetLoadString);
#endif

//============================================================================
// EQGroundItemListManager
//============================================================================

#ifdef EQGroundItemListManager__Instance_x
FUNCTION_AT_ADDRESS(EQGroundItemListManager& EQGroundItemListManager::Instance(), EQGroundItemListManager__Instance);
#endif

//============================================================================
// EQItemList
//============================================================================

#ifdef EQItemList__EQItemList_x
FUNCTION_AT_ADDRESS(EQItemList::EQItemList(), EQItemList__EQItemList);
#endif
#ifdef EQItemList__dEQItemList_x
FUNCTION_AT_ADDRESS(EQItemList::~EQItemList(), EQItemList__dEQItemList);
#endif
#ifdef EQItemList__get_item_x
FUNCTION_AT_ADDRESS(EQItemList* EQItemList::get_item(long), EQItemList__get_item);
#endif
#ifdef EQItemList__is_item_actor_x
FUNCTION_AT_ADDRESS(EQItemList* EQItemList::is_item_actor(struct T3D_tagACTORINSTANCE*), EQItemList__is_item_actor);
#endif

//============================================================================
// EQMisc
//============================================================================

#ifdef EQMisc__GetActiveFavorCost_x
FUNCTION_AT_ADDRESS(int EQMisc::GetActiveFavorCost(), EQMisc__GetActiveFavorCost);
#endif

//============================================================================
// EQMissile
//============================================================================

#ifdef EQMissile__LeaveTrail_x
FUNCTION_AT_ADDRESS(void EQMissile::LeaveTrail(), EQMissile__LeaveTrail);
#endif
#ifdef EQMissile__EQMissile_x
FUNCTION_AT_ADDRESS(EQMissile::EQMissile(EQ_Equipment*, PlayerZoneClient*, EQMissile*, char*, unsigned char, unsigned int), EQMissile__EQMissile);
#endif
#ifdef EQMissile__dEQMissile_x
FUNCTION_AT_ADDRESS(EQMissile::~EQMissile(), EQMissile__dEQMissile);
#endif
#ifdef EQMissile__CleanUpMyEffects_x
FUNCTION_AT_ADDRESS(void EQMissile::CleanUpMyEffects(), EQMissile__CleanUpMyEffects);
#endif
#ifdef EQMissile__is_missile_actor_x
FUNCTION_AT_ADDRESS(EQMissile* EQMissile::is_missile_actor(struct T3D_tagACTORINSTANCE*), EQMissile__is_missile_actor);
#endif
#ifdef EQMissile__HitActor_x
FUNCTION_AT_ADDRESS(void EQMissile::HitActor(struct T3D_tagACTORINSTANCE*, bool), EQMissile__HitActor);
#endif
#ifdef EQMissile__ProcessMissile_x
FUNCTION_AT_ADDRESS(void EQMissile::ProcessMissile(), EQMissile__ProcessMissile);
#endif
#ifdef EQMissile__MissileAI_x
FUNCTION_AT_ADDRESS(void EQMissile::MissileAI(), EQMissile__MissileAI);
#endif

//============================================================================
// EqMobileEmitter
//============================================================================

#ifdef EqMobileEmitter__Move_x
FUNCTION_AT_ADDRESS(void EqMobileEmitter::Move(float, float, float), EqMobileEmitter__Move);
#endif
#ifdef EqMobileEmitter__SetWave_x
FUNCTION_AT_ADDRESS(void EqMobileEmitter::SetWave(int, char*), EqMobileEmitter__SetWave);
#endif
#ifdef EqMobileEmitter__SetNpcHeight_x
FUNCTION_AT_ADDRESS(void EqMobileEmitter::SetNpcHeight(float), EqMobileEmitter__SetNpcHeight);
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
FUNCTION_AT_ADDRESS(EQMoneyList* EQMoneyList::get_money(long), EQMoneyList__get_money);
#endif

//============================================================================
// EQ_Note
//============================================================================

#ifdef EQ_Note__EQ_Note_x
FUNCTION_AT_ADDRESS(EQ_Note::EQ_Note(), EQ_Note__EQ_Note);
#endif
#ifdef EQ_Note__SendTextRequestMsg_x
FUNCTION_AT_ADDRESS(void EQ_Note::SendTextRequestMsg(), EQ_Note__SendTextRequestMsg);
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
FUNCTION_AT_ADDRESS(EQPlacedItemManager& EQPlacedItemManager::Instance(), EQPlacedItemManager__Instance);
#endif
#ifdef EQPlacedItemManager__GetItemByGuid_x
FUNCTION_AT_ADDRESS(EQPlacedItem* EQPlacedItemManager::GetItemByGuid(const EqItemGuid& ItemGuid), EQPlacedItemManager__GetItemByGuid);
#endif
#ifdef EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x
FUNCTION_AT_ADDRESS(EQPlacedItem* EQPlacedItemManager::GetItemByRealEstateAndRealEstateItemIds(int RealEstateID, int RealEstateItemID), EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds);
#endif

//============================================================================
// EQPMInfo
//============================================================================

#ifdef EQPMInfo__SetApplyGravity_x
FUNCTION_AT_ADDRESS(void EQPMInfo::SetApplyGravity(bool), EQPMInfo__SetApplyGravity);
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
FUNCTION_AT_ADDRESS(void EqSoundManager::LoadGlobalEmitters(), EqSoundManager__LoadGlobalEmitters);
#endif
#ifdef EqSoundManager__GetMusicId_x
FUNCTION_AT_ADDRESS(int EqSoundManager::GetMusicId(), EqSoundManager__GetMusicId);
#endif
#ifdef EqSoundManager__LoadGlobalWaves_x
FUNCTION_AT_ADDRESS(void EqSoundManager::LoadGlobalWaves(), EqSoundManager__LoadGlobalWaves);
#endif
#ifdef EqSoundManager__LoadListOfWaveFiles_x
FUNCTION_AT_ADDRESS(void EqSoundManager::LoadListOfWaveFiles(char**, int), EqSoundManager__LoadListOfWaveFiles);
#endif
#ifdef EqSoundManager__WaveLoad_x
FUNCTION_AT_ADDRESS(void EqSoundManager::WaveLoad(char*, int, bool), EqSoundManager__WaveLoad);
#endif
#ifdef EqSoundManager__WaveIsPlaying_x
FUNCTION_AT_ADDRESS(bool EqSoundManager::WaveIsPlaying(int), EqSoundManager__WaveIsPlaying);
#endif
#ifdef EqSoundManager__WavePlay_x
FUNCTION_AT_ADDRESS(void EqSoundManager::WavePlay(int, SoundControl*), EqSoundManager__WavePlay);
#endif
#ifdef EqSoundManager__WaveStop_x
FUNCTION_AT_ADDRESS(void EqSoundManager::WaveStop(int), EqSoundManager__WaveStop);
#endif
#ifdef EqSoundManager__WaveGet_x
FUNCTION_AT_ADDRESS(SoundAsset* EqSoundManager::WaveGet(int), EqSoundManager__WaveGet);
#endif
#ifdef EqSoundManager__LoadGlobalMusic_x
FUNCTION_AT_ADDRESS(void EqSoundManager::LoadGlobalMusic(), EqSoundManager__LoadGlobalMusic);
#endif
#ifdef EqSoundManager__SetMusicSelection_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetMusicSelection(int, bool), EqSoundManager__SetMusicSelection);
#endif
#ifdef EqSoundManager__GiveTime_x
FUNCTION_AT_ADDRESS(void EqSoundManager::GiveTime(), EqSoundManager__GiveTime);
#endif
#ifdef EqSoundManager__SetCurrentZone_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetCurrentZone(char*), EqSoundManager__SetCurrentZone);
#endif
#ifdef EqSoundManager__LoadOldEmitters_x
FUNCTION_AT_ADDRESS(void EqSoundManager::LoadOldEmitters(), EqSoundManager__LoadOldEmitters);
#endif
#ifdef EqSoundManager__GetAsset_x
FUNCTION_AT_ADDRESS(SoundAsset* EqSoundManager::GetAsset(char*), EqSoundManager__GetAsset);
#endif
#ifdef EqSoundManager__ReleaseZoneSpecificMidi_x
FUNCTION_AT_ADDRESS(void EqSoundManager::ReleaseZoneSpecificMidi(), EqSoundManager__ReleaseZoneSpecificMidi);
#endif
#ifdef EqSoundManager__ReleaseZoneSpecificWaves_x
FUNCTION_AT_ADDRESS(void EqSoundManager::ReleaseZoneSpecificWaves(), EqSoundManager__ReleaseZoneSpecificWaves);
#endif
#ifdef EqSoundManager__ReleaseZoneSpecificEmitters_x
FUNCTION_AT_ADDRESS(void EqSoundManager::ReleaseZoneSpecificEmitters(), EqSoundManager__ReleaseZoneSpecificEmitters);
#endif
#ifdef EqSoundManager__SetEffectsLevel_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetEffectsLevel(float), EqSoundManager__SetEffectsLevel);
#endif
#ifdef EqSoundManager__SetMixAhead_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetMixAhead(int), EqSoundManager__SetMixAhead);
#endif
#ifdef EqSoundManager__SetWaveVolume_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetWaveVolume(float), EqSoundManager__SetWaveVolume);
#endif
#ifdef EqSoundManager__SetMusicVolume_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetMusicVolume(float), EqSoundManager__SetMusicVolume);
#endif
#ifdef EqSoundManager__SetListenerEnvironmentLow_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetListenerEnvironmentLow(), EqSoundManager__SetListenerEnvironmentLow);
#endif
#ifdef EqSoundManager__SetListenerEnvironmentHigh_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetListenerEnvironmentHigh(), EqSoundManager__SetListenerEnvironmentHigh);
#endif
#ifdef EqSoundManager__SetListenerEnvironmentOutside_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetListenerEnvironmentOutside(), EqSoundManager__SetListenerEnvironmentOutside);
#endif
#ifdef EqSoundManager__SetListenerLocation_x
FUNCTION_AT_ADDRESS(void EqSoundManager::SetListenerLocation(float, float, float, float), EqSoundManager__SetListenerLocation);
#endif
#ifdef EqSoundManager__EmitterSetRaining_x
FUNCTION_AT_ADDRESS(void EqSoundManager::EmitterSetRaining(bool), EqSoundManager__EmitterSetRaining);
#endif
#ifdef EqSoundManager__EmitterSetWind_x
FUNCTION_AT_ADDRESS(void EqSoundManager::EmitterSetWind(bool), EqSoundManager__EmitterSetWind);
#endif
#ifdef EqSoundManager__EmitterSetNight_x
FUNCTION_AT_ADDRESS(void EqSoundManager::EmitterSetNight(bool), EqSoundManager__EmitterSetNight);
#endif
#ifdef EqSoundManager__EmitterSetUserDisabled_x
FUNCTION_AT_ADDRESS(void EqSoundManager::EmitterSetUserDisabled(bool), EqSoundManager__EmitterSetUserDisabled);
#endif
#ifdef EqSoundManager__EmitterSetIndoors_x
FUNCTION_AT_ADDRESS(void EqSoundManager::EmitterSetIndoors(bool), EqSoundManager__EmitterSetIndoors);
#endif
#ifdef EqSoundManager__UpdateEmitterStates_x
FUNCTION_AT_ADDRESS(void EqSoundManager::UpdateEmitterStates(), EqSoundManager__UpdateEmitterStates);
#endif
#ifdef EqSoundManager__OldMp3ClearSelections_x
FUNCTION_AT_ADDRESS(void EqSoundManager::OldMp3ClearSelections(), EqSoundManager__OldMp3ClearSelections);
#endif
#ifdef EqSoundManager__OldMp3Init_x
FUNCTION_AT_ADDRESS(void EqSoundManager::OldMp3Init(), EqSoundManager__OldMp3Init);
#endif
#ifdef EqSoundManager__OldMp3Terminate_x
FUNCTION_AT_ADDRESS(void EqSoundManager::OldMp3Terminate(), EqSoundManager__OldMp3Terminate);
#endif
#ifdef EqSoundManager__OldMp3GetSelection_x
FUNCTION_AT_ADDRESS(SoundAsset* EqSoundManager::OldMp3GetSelection(int), EqSoundManager__OldMp3GetSelection);
#endif
#ifdef EqSoundManager__PlayScriptMp3_x
FUNCTION_AT_ADDRESS(void EqSoundManager::PlayScriptMp3(char* Name, float Vol), EqSoundManager__PlayScriptMp3);
#endif
#ifdef EqSoundManager__EmitterLoad_x
FUNCTION_AT_ADDRESS(bool EqSoundManager::EmitterLoad(char*), EqSoundManager__EmitterLoad);
#endif
#ifdef EqSoundManager__EmitterAdd_x
FUNCTION_AT_ADDRESS(void EqSoundManager::EmitterAdd(EqEmitterData*), EqSoundManager__EmitterAdd);
#endif

//============================================================================
// EQSpellStrings
//============================================================================

#ifdef EQSpellStrings__GetString_x
FUNCTION_AT_ADDRESS(const char* EQSpellStrings::GetString(int SpellID, int StrIndex), EQSpellStrings__GetString);
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
FUNCTION_AT_ADDRESS(void EQSwitch::PreInit(), EQSwitch__PreInit);
#endif
#ifdef EQSwitch__PostInit_x
FUNCTION_AT_ADDRESS(void EQSwitch::PostInit(), EQSwitch__PostInit);
#endif
#ifdef EQSwitch__dEQSwitch_x
FUNCTION_AT_ADDRESS(EQSwitch::~EQSwitch(), EQSwitch__dEQSwitch);
#endif
#ifdef EQSwitch__ResetSwitchState_x
FUNCTION_AT_ADDRESS(void EQSwitch::ResetSwitchState(unsigned char), EQSwitch__ResetSwitchState);
#endif
#ifdef EQSwitch__RepopSwitch_x
FUNCTION_AT_ADDRESS(void EQSwitch::RepopSwitch(), EQSwitch__RepopSwitch);
#endif
#ifdef EQSwitch__TopSpeed_x
FUNCTION_AT_ADDRESS(float EQSwitch::TopSpeed(float*), EQSwitch__TopSpeed);
#endif
#ifdef EQSwitch__RepopFrequency_x
FUNCTION_AT_ADDRESS(unsigned int EQSwitch::RepopFrequency(), EQSwitch__RepopFrequency);
#endif
#ifdef EQSwitch__GetSwitchDamage_x
FUNCTION_AT_ADDRESS(int EQSwitch::GetSwitchDamage(), EQSwitch__GetSwitchDamage);
#endif
#ifdef EQSwitch__ChangeState_x
FUNCTION_AT_ADDRESS(void EQSwitch::ChangeState(unsigned char, EQPlayer*, bool), EQSwitch__ChangeState);
#endif
#ifdef EQSwitch__SwitchWasOpened_x
FUNCTION_AT_ADDRESS(unsigned char EQSwitch::SwitchWasOpened(int, int, EQPlayer*, bool*), EQSwitch__SwitchWasOpened);
#endif
#ifdef EQSwitch__SwitchWasOpenedActual_x
FUNCTION_AT_ADDRESS(unsigned char EQSwitch::SwitchWasOpenedActual(int, int, EQPlayer*, bool*), EQSwitch__SwitchWasOpenedActual);
#endif
#ifdef EQSwitch__SwitchIsNotUsable_x
FUNCTION_AT_ADDRESS(unsigned char EQSwitch::SwitchIsNotUsable(int), EQSwitch__SwitchIsNotUsable);
#endif
#ifdef EQSwitch__UseSwitch_x
FUNCTION_AT_ADDRESS(void EQSwitch::UseSwitch(UINT, int, int, const CVector3*), EQSwitch__UseSwitch);
#endif
#ifdef EQSwitch__LoadSwitchSounds_x
FUNCTION_AT_ADDRESS(void EQSwitch::LoadSwitchSounds(int), EQSwitch__LoadSwitchSounds);
#endif
#ifdef EQSwitch__GetCustomMoveDistance_x
FUNCTION_AT_ADDRESS(float EQSwitch::GetCustomMoveDistance(), EQSwitch__GetCustomMoveDistance);
#endif

//============================================================================
// EqSwitchManager
//============================================================================

#ifdef EqSwitchManager__EqSwitchManager_x
FUNCTION_AT_ADDRESS(EqSwitchManager::EqSwitchManager(), EqSwitchManager__EqSwitchManager);
#endif
#ifdef EqSwitchManager__dEqSwitchManager_x
FUNCTION_AT_ADDRESS(EqSwitchManager::~EqSwitchManager(), EqSwitchManager__dEqSwitchManager);
#endif
#ifdef EqSwitchManager__DeleteAll_x
FUNCTION_AT_ADDRESS(void EqSwitchManager::DeleteAll(), EqSwitchManager__DeleteAll);
#endif
#ifdef EqSwitchManager__Load_x
FUNCTION_AT_ADDRESS(void EqSwitchManager::Load(char*, bool), EqSwitchManager__Load);
#endif
#ifdef EqSwitchManager__LoadOld_x
FUNCTION_AT_ADDRESS(void EqSwitchManager::LoadOld(char*, bool), EqSwitchManager__LoadOld);
#endif
#ifdef EqSwitchManager__GetCount_x
FUNCTION_AT_ADDRESS(int EqSwitchManager::GetCount(), EqSwitchManager__GetCount);
#endif
#ifdef EqSwitchManager__GetSwitchByActor_x
FUNCTION_AT_ADDRESS(EQSwitch* EqSwitchManager::GetSwitchByActor(struct T3D_tagACTORINSTANCE*), EqSwitchManager__GetSwitchByActor);
#endif
#ifdef EqSwitchManager__GetSwitch_x
FUNCTION_AT_ADDRESS(EQSwitch* EqSwitchManager::GetSwitch(int), EqSwitchManager__GetSwitch);
#endif
#ifdef EqSwitchManager__GetSwitchById_x
FUNCTION_AT_ADDRESS(EQSwitch* EqSwitchManager::GetSwitchById(int, bool), EqSwitchManager__GetSwitchById);
#endif
#ifdef EqSwitchManager__AddSwitch_x
FUNCTION_AT_ADDRESS(void EqSwitchManager::AddSwitch(EQSwitch*), EqSwitchManager__AddSwitch);
#endif

//============================================================================
// EQUtil
//============================================================================

#ifdef EQUtil__FormatCharName_x
FUNCTION_AT_ADDRESS(char* __cdecl EQUtil::FormatCharName(char*, char*, int), EQUtil__FormatCharName);
#endif

//============================================================================
// EQWorldData
//============================================================================

#ifdef EQWorldData__EQWorldData_x
FUNCTION_AT_ADDRESS(EQWorldData::EQWorldData(), EQWorldData__EQWorldData);
#endif
#ifdef EQWorldData__AdvanceTime_x
FUNCTION_AT_ADDRESS(void EQWorldData::AdvanceTime(unsigned int), EQWorldData__AdvanceTime);
#endif
#ifdef EQWorldData__CurrentGameTime_x
FUNCTION_AT_ADDRESS(void EQWorldData::CurrentGameTime(char*), EQWorldData__CurrentGameTime);
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
FUNCTION_AT_ADDRESS(FactionManagerClient& FactionManagerClient::Instance(), FactionManagerClient__Instance)
#endif
#ifdef FactionManagerClient__HandleFactionMessage_x
FUNCTION_AT_ADDRESS(void FactionManagerClient::HandleFactionMessage(UINT MessageID, char* pData, unsigned int DataLength), FactionManagerClient__HandleFactionMessage)
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
FUNCTION_AT_ADDRESS(CTextureAnimation* IconCache::GetIcon(int), IconCache__GetIcon);
#endif

//============================================================================
// IString
//============================================================================

#ifdef IString__Append_x
FUNCTION_AT_ADDRESS(void SoeUtil::IString<char>::Append(char* c), IString__Append);
#endif

//============================================================================
// ItemBase
//============================================================================

#ifdef ItemBase__IsLoreEquipped_x
FUNCTION_AT_ADDRESS(bool ItemBase::IsLoreEquipped(bool bIncludeSockets) const, ItemBase__IsLoreEquipped);
#endif
#ifdef ItemBase__IsLore_x
FUNCTION_AT_ADDRESS(bool ItemBase::IsLore(bool bIncludeSockets) const, ItemBase__IsLore);
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
FUNCTION_AT_ADDRESS(void JournalNPC::AllocateArray(), JournalNPC__AllocateArray);
#endif
#ifdef JournalNPC__CleanEntries_x
FUNCTION_AT_ADDRESS(void JournalNPC::CleanEntries(), JournalNPC__CleanEntries);
#endif
#ifdef JournalNPC__GetText_x
FUNCTION_AT_ADDRESS(char* __cdecl JournalNPC::GetText(int), JournalNPC__GetText);
#endif
#ifdef JournalNPC__GetEntry_x
FUNCTION_AT_ADDRESS(JournalEntry* JournalNPC::GetEntry(int), JournalNPC__GetEntry);
#endif
#ifdef JournalNPC__FindEntryByHash_x
FUNCTION_AT_ADDRESS(JournalEntry* JournalNPC::FindEntryByHash(int), JournalNPC__FindEntryByHash);
#endif
#ifdef JournalNPC__FindEntryByCategory_x
FUNCTION_AT_ADDRESS(JournalEntry* JournalNPC::FindEntryByCategory(int, int), JournalNPC__FindEntryByCategory);
#endif
#ifdef JournalNPC__FindThisText_x
FUNCTION_AT_ADDRESS(int JournalNPC::FindThisText(char*, bool, int), JournalNPC__FindThisText);
#endif
#ifdef JournalNPC__AddEntry_x
FUNCTION_AT_ADDRESS(int JournalNPC::AddEntry(long, float, float, float, int, int), JournalNPC__AddEntry);
#endif
#ifdef JournalNPC__AddEntry1_x
FUNCTION_AT_ADDRESS(int JournalNPC::AddEntry(long, float, float, float, char*, int), JournalNPC__AddEntry1);
#endif
#ifdef JournalNPC__DeleteEntryByIndex_x
FUNCTION_AT_ADDRESS(int JournalNPC::DeleteEntryByIndex(int), JournalNPC__DeleteEntryByIndex);
#endif
#ifdef JournalNPC__DeleteEntryByHash_x
FUNCTION_AT_ADDRESS(int JournalNPC::DeleteEntryByHash(int), JournalNPC__DeleteEntryByHash);
#endif
#ifdef JournalNPC__ConvertCategory_x
FUNCTION_AT_ADDRESS(void JournalNPC::ConvertCategory(int, int), JournalNPC__ConvertCategory);
#endif
#ifdef JournalNPC__ComputeLatestTime_x
FUNCTION_AT_ADDRESS(void JournalNPC::ComputeLatestTime(), JournalNPC__ComputeLatestTime);
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
FUNCTION_AT_ADDRESS(unsigned int KeyCombo::GetKey() const, KeyCombo__GetKey);
#endif
#ifdef KeyCombo__UsesCtrl_x
FUNCTION_AT_ADDRESS(bool KeyCombo::UsesCtrl() const, KeyCombo__UsesCtrl);
#endif
#ifdef KeyCombo__UsesShift_x
FUNCTION_AT_ADDRESS(bool KeyCombo::UsesShift() const, KeyCombo__UsesShift);
#endif
#ifdef KeyCombo__UsesAlt_x
FUNCTION_AT_ADDRESS(bool KeyCombo::UsesAlt() const, KeyCombo__UsesAlt);
#endif
#ifdef KeyCombo__GetTextDescription_x
FUNCTION_AT_ADDRESS(CXStr KeyCombo::GetTextDescription() const, KeyCombo__GetTextDescription);
#endif
#ifdef KeyCombo__GetPrintableLetter_x
FUNCTION_AT_ADDRESS(bool KeyCombo::GetPrintableLetter(unsigned short*) const, KeyCombo__GetPrintableLetter);
#endif
#ifdef KeyCombo__operator_equal_equal_x
FUNCTION_AT_ADDRESS(int KeyCombo::operator==(const KeyCombo&) const, KeyCombo__operator_equal_equal);
#endif
#ifdef KeyCombo__operator_equal_x
FUNCTION_AT_ADDRESS(const KeyCombo& KeyCombo::operator=(int), KeyCombo__operator_equal);
#endif
#ifdef KeyCombo__operator_int_x
//FUNCTION_AT_ADDRESS(KeyCombo::operator int() const, KeyCombo__operator_int);
#endif
#ifdef KeyCombo__GetVirtualKeyFromScanCode_x
FUNCTION_AT_ADDRESS(bool KeyCombo::GetVirtualKeyFromScanCode(unsigned char, int*) const, KeyCombo__GetVirtualKeyFromScanCode);
#endif
#ifdef KeyCombo__GetPrintableLetterFromScanCode_x
FUNCTION_AT_ADDRESS(bool KeyCombo::GetPrintableLetterFromScanCode(unsigned char, bool, bool, unsigned short*) const, KeyCombo__GetPrintableLetterFromScanCode);
#endif
#ifdef KeyCombo__GetScanCodeFromVirtualKey_x
FUNCTION_AT_ADDRESS(bool KeyCombo::GetScanCodeFromVirtualKey(unsigned int, unsigned int, unsigned char*) const, KeyCombo__GetScanCodeFromVirtualKey);
#endif
#ifdef KeyCombo__GetPrintableLetterFromVirtualKey_x
FUNCTION_AT_ADDRESS(bool KeyCombo::GetPrintableLetterFromVirtualKey(unsigned int, unsigned int, bool, bool, unsigned short*) const, KeyCombo__GetPrintableLetterFromVirtualKey);
#endif

//============================================================================
// KeypressHandler
//============================================================================

#ifdef KeypressHandler__KeypressHandler_x
FUNCTION_AT_ADDRESS(KeypressHandler::KeypressHandler(), KeypressHandler__KeypressHandler);
#endif
#ifdef KeypressHandler__AttachKeyToEqCommand_x
FUNCTION_AT_ADDRESS(bool KeypressHandler::AttachKeyToEqCommand(const KeyCombo&, unsigned int), KeypressHandler__AttachKeyToEqCommand);
#endif
#ifdef KeypressHandler__AttachAltKeyToEqCommand_x
FUNCTION_AT_ADDRESS(bool KeypressHandler::AttachAltKeyToEqCommand(const KeyCombo&, unsigned int), KeypressHandler__AttachAltKeyToEqCommand);
#endif
#ifdef KeypressHandler__HandleKeyDown_x
FUNCTION_AT_ADDRESS(bool KeypressHandler::HandleKeyDown(const KeyCombo&), KeypressHandler__HandleKeyDown);
#endif
#ifdef KeypressHandler__HandleKeyUp_x
FUNCTION_AT_ADDRESS(bool KeypressHandler::HandleKeyUp(const KeyCombo&), KeypressHandler__HandleKeyUp);
#endif
#ifdef KeypressHandler__Get_x
FUNCTION_AT_ADDRESS(KeypressHandler& KeypressHandler::Get(), KeypressHandler__Get);
#endif
#ifdef KeypressHandler__GetKeyAttachedToEqCommand_x
FUNCTION_AT_ADDRESS(const KeyCombo& KeypressHandler::GetKeyAttachedToEqCommand(unsigned int) const, KeypressHandler__GetKeyAttachedToEqCommand);
#endif
#ifdef KeypressHandler__GetAltKeyAttachedToEqCommand_x
FUNCTION_AT_ADDRESS(const KeyCombo& KeypressHandler::GetAltKeyAttachedToEqCommand(unsigned int) const, KeypressHandler__GetAltKeyAttachedToEqCommand);
#endif
#ifdef KeypressHandler__ResetKeysToEqDefaults_x
FUNCTION_AT_ADDRESS(void KeypressHandler::ResetKeysToEqDefaults(), KeypressHandler__ResetKeysToEqDefaults);
#endif
#ifdef KeypressHandler__MapKeyToEqCommand_x
FUNCTION_AT_ADDRESS(bool KeypressHandler::MapKeyToEqCommand(const KeyCombo&, int, unsigned int), KeypressHandler__MapKeyToEqCommand);
#endif
#ifdef KeypressHandler__IsReservedKey_x
FUNCTION_AT_ADDRESS(bool KeypressHandler::IsReservedKey(const KeyCombo&) const, KeypressHandler__IsReservedKey);
#endif
#ifdef KeypressHandler__LoadAndSetKeymappings_x
FUNCTION_AT_ADDRESS(void KeypressHandler::LoadAndSetKeymappings(), KeypressHandler__LoadAndSetKeymappings);
#endif
#ifdef KeypressHandler__LoadKeymapping_x
FUNCTION_AT_ADDRESS(bool KeypressHandler::LoadKeymapping(unsigned int, int, KeyCombo*), KeypressHandler__LoadKeymapping);
#endif
#ifdef KeypressHandler__SaveKeymapping_x
FUNCTION_AT_ADDRESS(void KeypressHandler::SaveKeymapping(unsigned int, KeyCombo const&, int), KeypressHandler__SaveKeymapping);
#endif
#ifdef KeypressHandler__GetEqCommandSaveName_x
FUNCTION_AT_ADDRESS(CXStr KeypressHandler::GetEqCommandSaveName(unsigned int, int) const, KeypressHandler__GetEqCommandSaveName);
#endif
#ifdef KeypressHandler__LoadAndConvertOldKeymappingFormat_x
FUNCTION_AT_ADDRESS(bool KeypressHandler::LoadAndConvertOldKeymappingFormat(unsigned int, int, KeyCombo*), KeypressHandler__LoadAndConvertOldKeymappingFormat);
#endif
#ifdef KeypressHandler__ClearCommandStateArray_x
FUNCTION_AT_ADDRESS(void KeypressHandler::ClearCommandStateArray(), KeypressHandler__ClearCommandStateArray);
#endif

//============================================================================
// LootFiltersManager
//============================================================================

#ifdef LootFiltersManager__AddItemLootFilter_x
FUNCTION_AT_ADDRESS(bool LootFiltersManager::AddItemLootFilter(int, int, const char*, int, bool), LootFiltersManager__AddItemLootFilter);
#endif
#ifdef LootFiltersManager__GetItemFilterData_x
FUNCTION_AT_ADDRESS(const ItemFilterData* LootFiltersManager::GetItemFilterData(int), LootFiltersManager__GetItemFilterData);
#endif
#ifdef LootFiltersManager__RemoveItemLootFilter_x
FUNCTION_AT_ADDRESS(bool LootFiltersManager::RemoveItemLootFilter(int, int), LootFiltersManager__RemoveItemLootFilter);
#endif
#ifdef LootFiltersManager__SetItemLootFilter_x
FUNCTION_AT_ADDRESS(bool LootFiltersManager::SetItemLootFilter(int, int, const char*, int, bool, bool), LootFiltersManager__SetItemLootFilter);
#endif

//============================================================================
// MercenaryAlternateAdvancementManagerClient
//============================================================================

#ifdef MercenaryAlternateAdvancementManagerClient__Instance_x
FUNCTION_AT_ADDRESS(MercenaryAlternateAdvancementManagerClient& MercenaryAlternateAdvancementManagerClient::Instance(), MercenaryAlternateAdvancementManagerClient__Instance);
#endif

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
FUNCTION_AT_ADDRESS(void Mp3Manager::Stop(), Mp3Manager__Stop);
#endif
#ifdef Mp3Manager__Play_x
FUNCTION_AT_ADDRESS(void Mp3Manager::Play(), Mp3Manager__Play);
#endif
#ifdef Mp3Manager__Pause_x
FUNCTION_AT_ADDRESS(void Mp3Manager::Pause(), Mp3Manager__Pause);
#endif
#ifdef Mp3Manager__GiveTime_x
FUNCTION_AT_ADDRESS(void Mp3Manager::GiveTime(), Mp3Manager__GiveTime);
#endif
#ifdef Mp3Manager__Next_x
FUNCTION_AT_ADDRESS(void Mp3Manager::Next(), Mp3Manager__Next);
#endif
#ifdef Mp3Manager__Back_x
FUNCTION_AT_ADDRESS(void Mp3Manager::Back(), Mp3Manager__Back);
#endif
#ifdef Mp3Manager__GetSongLength_x
FUNCTION_AT_ADDRESS(int Mp3Manager::GetSongLength(), Mp3Manager__GetSongLength);
#endif
#ifdef Mp3Manager__GetSongPosition_x
FUNCTION_AT_ADDRESS(int Mp3Manager::GetSongPosition(), Mp3Manager__GetSongPosition);
#endif
#ifdef Mp3Manager__SetSongPosition_x
FUNCTION_AT_ADDRESS(void Mp3Manager::SetSongPosition(int), Mp3Manager__SetSongPosition);
#endif
#ifdef Mp3Manager__GetName_x
FUNCTION_AT_ADDRESS(char* Mp3Manager::GetName(int), Mp3Manager__GetName);
#endif
#ifdef Mp3Manager__Count_x
FUNCTION_AT_ADDRESS(int Mp3Manager::Count(), Mp3Manager__Count);
#endif
#ifdef Mp3Manager__SetPosition_x
FUNCTION_AT_ADDRESS(void Mp3Manager::SetPosition(int), Mp3Manager__SetPosition);
#endif
#ifdef Mp3Manager__SetVolumeLevel_x
FUNCTION_AT_ADDRESS(void Mp3Manager::SetVolumeLevel(float), Mp3Manager__SetVolumeLevel);
#endif
#ifdef Mp3Manager__GetVolumeLevel_x
FUNCTION_AT_ADDRESS(float Mp3Manager::GetVolumeLevel(), Mp3Manager__GetVolumeLevel);
#endif
#ifdef Mp3Manager__DeleteAll_x
FUNCTION_AT_ADDRESS(void Mp3Manager::DeleteAll(), Mp3Manager__DeleteAll);
#endif
#ifdef Mp3Manager__Delete_x
FUNCTION_AT_ADDRESS(void Mp3Manager::Delete(int), Mp3Manager__Delete);
#endif
#ifdef Mp3Manager__SaveList_x
FUNCTION_AT_ADDRESS(void Mp3Manager::SaveList(char*), Mp3Manager__SaveList);
#endif
#ifdef Mp3Manager__Add_x
FUNCTION_AT_ADDRESS(int Mp3Manager::Add(char*), Mp3Manager__Add);
#endif
#ifdef Mp3Manager__InternalAdd_x
FUNCTION_AT_ADDRESS(int Mp3Manager::InternalAdd(char*, char*, int), Mp3Manager__InternalAdd);
#endif
#ifdef Mp3Manager__GetPosition_x
FUNCTION_AT_ADDRESS(int Mp3Manager::GetPosition(), Mp3Manager__GetPosition);
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
FUNCTION_AT_ADDRESS(void MusicManager::GiveTime(), MusicManager__GiveTime);
#endif
#ifdef MusicManager__Clear_x
FUNCTION_AT_ADDRESS(void MusicManager::Clear(SoundAsset*), MusicManager__Clear);
#endif
#ifdef MusicManager__SetVolumeLevel_x
FUNCTION_AT_ADDRESS(void MusicManager::SetVolumeLevel(float), MusicManager__SetVolumeLevel);
#endif
#ifdef MusicManager__Clear1_x
FUNCTION_AT_ADDRESS(void MusicManager::Clear(int), MusicManager__Clear1);
#endif
#ifdef MusicManager__Set_x
FUNCTION_AT_ADDRESS(void MusicManager::Set(int, SoundAsset*, int, float, int, int, int, int, int, int), MusicManager__Set);
#endif
#ifdef MusicManager__Play_x
FUNCTION_AT_ADDRESS(void MusicManager::Play(int), MusicManager__Play);
#endif
#ifdef MusicManager__Stop_x
FUNCTION_AT_ADDRESS(void MusicManager::Stop(int), MusicManager__Stop);
#endif
#ifdef MusicManager__Enable_x
FUNCTION_AT_ADDRESS(void MusicManager::Enable(bool), MusicManager__Enable);
#endif

//============================================================================
// PlayerPointManager
//============================================================================

#ifdef PlayerPointManager__GetAltCurrency_x
FUNCTION_AT_ADDRESS(unsigned long CPlayerPointManager::GetAltCurrency(unsigned long, unsigned long), PlayerPointManager__GetAltCurrency);
#endif

//============================================================================
// RealEstateManagerClient
//============================================================================

#ifdef RealEstateManagerClient__Instance_x
FUNCTION_AT_ADDRESS(RealEstateManagerClient& RealEstateManagerClient::Instance(), RealEstateManagerClient__Instance)
#endif
#ifdef RealEstateManagerClient__GetItemByRealEstateAndItemIds_x
FUNCTION_AT_ADDRESS(const RealEstateItemClient* RealEstateManagerClient::GetItemByRealEstateAndItemIds(int realEstateID, int realEstateItemID) const, RealEstateManagerClient__GetItemByRealEstateAndItemIds)
#endif

//============================================================================
// SoundManager
//============================================================================

#ifdef SoundManager__dSoundManager_x
FUNCTION_AT_ADDRESS(SoundManager::~SoundManager(), SoundManager__dSoundManager);
#endif
#ifdef SoundManager__GiveTime_x
FUNCTION_AT_ADDRESS(void SoundManager::GiveTime(), SoundManager__GiveTime);
#endif
#ifdef SoundManager__SetMixAhead_x
FUNCTION_AT_ADDRESS(void SoundManager::SetMixAhead(int), SoundManager__SetMixAhead);
#endif
#ifdef SoundManager__SetListenerLocation_x
FUNCTION_AT_ADDRESS(void SoundManager::SetListenerLocation(float, float, float, float), SoundManager__SetListenerLocation);
#endif
#ifdef SoundManager__GetListenerLocation_x
FUNCTION_AT_ADDRESS(void SoundManager::GetListenerLocation(float*, float*, float*, float*), SoundManager__GetListenerLocation);
#endif
#ifdef SoundManager__ReturnInstance_x
FUNCTION_AT_ADDRESS(void SoundManager::ReturnInstance(SoundInstance*), SoundManager__ReturnInstance);
#endif
#ifdef SoundManager__AssetGiveTime_x
FUNCTION_AT_ADDRESS(void SoundManager::AssetGiveTime(), SoundManager__AssetGiveTime);
#endif
#ifdef SoundManager__AssetAdd_x
FUNCTION_AT_ADDRESS(void SoundManager::AssetAdd(SoundAsset*), SoundManager__AssetAdd);
#endif
#ifdef SoundManager__AssetRemove_x
FUNCTION_AT_ADDRESS(void SoundManager::AssetRemove(SoundAsset*), SoundManager__AssetRemove);
#endif
#ifdef SoundManager__AssetGet_x
FUNCTION_AT_ADDRESS(SoundAsset* SoundManager::AssetGet(char*), SoundManager__AssetGet);
#endif
#ifdef SoundManager__StreamingPlay_x
FUNCTION_AT_ADDRESS(void SoundManager::StreamingPlay(char*), SoundManager__StreamingPlay);
#endif
#ifdef SoundManager__StreamingPause_x
FUNCTION_AT_ADDRESS(void SoundManager::StreamingPause(), SoundManager__StreamingPause);
#endif
#ifdef SoundManager__StreamingStop_x
FUNCTION_AT_ADDRESS(void SoundManager::StreamingStop(), SoundManager__StreamingStop);
#endif
#ifdef SoundManager__StreamingSetVolumeLevel_x
FUNCTION_AT_ADDRESS(void SoundManager::StreamingSetVolumeLevel(float), SoundManager__StreamingSetVolumeLevel);
#endif
#ifdef SoundManager__StreamingGetVolumeLevel_x
FUNCTION_AT_ADDRESS(float SoundManager::StreamingGetVolumeLevel(), SoundManager__StreamingGetVolumeLevel);
#endif
#ifdef SoundManager__StreamingSetSongPosition_x
FUNCTION_AT_ADDRESS(void SoundManager::StreamingSetSongPosition(int), SoundManager__StreamingSetSongPosition);
#endif
#ifdef SoundManager__StreamingGetSongPosition_x
FUNCTION_AT_ADDRESS(int SoundManager::StreamingGetSongPosition(), SoundManager__StreamingGetSongPosition);
#endif
#ifdef SoundManager__StreamingGetSongLength_x
FUNCTION_AT_ADDRESS(int SoundManager::StreamingGetSongLength(), SoundManager__StreamingGetSongLength);
#endif

//============================================================================
// SpellManager
//============================================================================

//#ifdef SpellManager__SpellManager_x
//FUNCTION_AT_ADDRESS(SpellManager::SpellManager(char*), SpellManager__SpellManager);
//#endif
//#ifdef SpellManager__dSpellManager_x
//FUNCTION_AT_ADDRESS(SpellManager::~SpellManager(), SpellManager__dSpellManager);
//#endif
#ifdef SpellManager__GetSpellByGroupAndRank_x
FUNCTION_AT_ADDRESS(const EQ_Spell* SpellManager::GetSpellByGroupAndRank(int Group, int SubGroup, int Rank, bool bLesserRanksOk), SpellManager__GetSpellByGroupAndRank);
#endif

//============================================================================
// StringTable
//============================================================================

#ifdef StringTable__getString_x
FUNCTION_AT_ADDRESS(const char* StringTable::getString(uint32_t, bool*), StringTable__getString);
#endif

//============================================================================
// Util
//============================================================================

#ifdef Util__GetNextToken_x
FUNCTION_AT_ADDRESS(int __cdecl Util::GetNextToken(char*, int*, char*), Util__GetNextToken);
#endif
#ifdef Util__GetNextToken1_x
FUNCTION_AT_ADDRESS(int __cdecl Util::GetNextToken(char*, short*, char*), Util__GetNextToken1);
#endif
#ifdef Util__GetNextToken2_x
FUNCTION_AT_ADDRESS(int __cdecl Util::GetNextToken(char*, char*, char*), Util__GetNextToken2);
#endif
#ifdef Util__GetNextToken3_x
FUNCTION_AT_ADDRESS(int __cdecl Util::GetNextToken(char*, unsigned char*, char*), Util__GetNextToken3);
#endif
#ifdef Util__AllocateString_x
FUNCTION_AT_ADDRESS(char* __cdecl Util::AllocateString(char*), Util__AllocateString);
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
// MISC
//============================================================================

#ifdef _EverQuestinfo__SetAutoAttack_x
FUNCTION_AT_ADDRESS(void _EverQuestinfo::SetAutoAttack(bool), _EverQuestinfo__SetAutoAttack);
#endif

//============================================================================
//============================================================================

#pragma warning(pop)

} // namespace eqlib
