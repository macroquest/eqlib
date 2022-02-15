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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "pch.h"
#include "EverQuest.h"
#include "Globals.h"

namespace eqlib {

//============================================================================
// CEverQuest
//============================================================================

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
FUNCTION_AT_ADDRESS(int, CEverQuest::Follow(int), CEverQuest__Follow);
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
#ifdef CEverQuest__EnterZone_x
FUNCTION_AT_ADDRESS(void, CEverQuest::EnterZone(struct HWND__*), CEverQuest__EnterZone);
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
#ifdef CEverQuest__DeleteTargetIndicator_x
FUNCTION_AT_ADDRESS(int, CEverQuest::DeleteTargetIndicator(), CEverQuest__DeleteTargetIndicator);
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
FUNCTION_AT_ADDRESS(void, CEverQuest::IssuePetCommand(ePetCommandType, int, bool, bool), CEverQuest__IssuePetCommand);
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
// EverQuestInfo
//============================================================================

#ifdef _EverQuestinfo__SetAutoAttack_x
FUNCTION_AT_ADDRESS(void, _EverQuestinfo::SetAutoAttack(bool), _EverQuestinfo__SetAutoAttack);
#endif

//============================================================================
//============================================================================

} // namespace eqlib
