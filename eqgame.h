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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "May 21 2020"
#define __ExpectedVersionTime                                     "09:48:09"
#define __ActualVersionDate_x                                      0xB1C430
#define __ActualVersionTime_x                                      0xB1C424
#define __ActualVersionBuild_x                                     0xB0811C

// Memory Protection
#define __MemChecker0_x                                            0x63FC10
#define __MemChecker1_x                                            0x914140
#define __MemChecker2_x                                            0x6CEAF0
#define __MemChecker3_x                                            0x6CEA40
#define __MemChecker4_x                                            0x86A7E0
#define __EncryptPad0_x                                            0xC54500
#define __EncryptPad1_x                                            0xCB2668
#define __EncryptPad2_x                                            0xC64D98
#define __EncryptPad3_x                                            0xC64998
#define __EncryptPad4_x                                            0xCA2C18
#define __EncryptPad5_x                                            0xF7386C
#define __AC1_x                                                    0x826EA6
#define __AC2_x                                                    0x5F96BF
#define __AC3_x                                                    0x600D0F
#define __AC4_x                                                    0x604CD0
#define __AC5_x                                                    0x60AF7F
#define __AC6_x                                                    0x60F486
#define __AC7_x                                                    0x5F9130
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x76F58

// Direct Input
#define DI8__Main_x                                                0xF7388C
#define DI8__Keyboard_x                                            0xF73890
#define DI8__Mouse_x                                               0xF738AC
#define DI8__Mouse_Copy_x                                          0xECEF14
#define DI8__Mouse_Check_x                                         0xF74358
#define __AutoSkillArray_x                                         0xECFE2C
#define __Attack_x                                                 0xF6DC53
#define __Autofire_x                                               0xF6DC54
#define __BindList_x                                               0xC42F30
#define g_eqCommandStates_x                                        0xC43CB0
#define __Clicks_x                                                 0xECEFCC
#define __CommandList_x                                            0xC44870
#define __CurrentMapLabel_x                                        0xF8671C
#define __CurrentSocial_x                                          0xC2C7CC
#define __DoAbilityList_x                                          0xF05774
#define __do_loot_x                                                0x5C4FA0
#define __DrawHandler_x                                            0x1605A98
#define __GroupCount_x                                             0xEC9F1A
#define __Guilds_x                                                 0xECDE50
#define __gWorld_x                                                 0xEC9F04
#define __HWnd_x                                                   0xF73930
#define __heqmain_x                                                0xF767EC
#define __InChatMode_x                                             0xECEEFC
#define __LastTell_x                                               0xED0E70
#define __LMouseHeldTime_x                                         0xECF038
#define __Mouse_x                                                  0xF73878
#define __MouseLook_x                                              0xECEF92
#define __MouseEventTime_x                                         0xF6E734
#define __gpbCommandEvent_x                                        0xECA118
#define __NetStatusToggle_x                                        0xECEF95
#define __PCNames_x                                                0xED041C
#define __RangeAttackReady_x                                       0xED0110
#define __RMouseHeldTime_x                                         0xECF034
#define __RunWalkState_x                                           0xECEF00
#define __ScreenMode_x                                             0xE15254
#define __ScreenX_x                                                0xECEEB4
#define __ScreenY_x                                                0xECEEB0
#define __ScreenXMax_x                                             0xECEEB8
#define __ScreenYMax_x                                             0xECEEBC
#define __ServerHost_x                                             0xEC79FB
#define __ServerName_x                                             0xF05734
#define __ShiftKeyDown_x                                           0xECF58C
#define __ShowNames_x                                              0xED02CC
#define __SocialChangedList_x                                      0xF057BC
#define __Socials_x                                                0xF05834
#define __SubscriptionType_x                                       0xFCAC28
#define __TargetAggroHolder_x                                      0xF890D0
#define __ZoneType_x                                               0xECF390
#define __GroupAggro_x                                             0xF89110
#define __LoginName_x                                              0xF73FEC
#define __Inviter_x                                                0xF6DBD0
#define __AttackOnAssist_x                                         0xED0288
#define __UseTellWindows_x                                         0xED05B8
#define __gfMaxZoomCameraDistance_x                                0xB11D78
#define __gfMaxCameraDistance_x                                    0xB3E1F4
#define __pulAutoRun_x                                             0xECEFB0
#define __pulForward_x                                             0xED05F0
#define __pulBackward_x                                            0xED05F4
#define __pulTurnRight_x                                           0xED05F8
#define __pulTurnLeft_x                                            0xED05FC
#define __pulStrafeLeft_x                                          0xED0600
#define __pulStrafeRight_x                                         0xED0604

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xECA1E8
#define instEQZoneInfo_x                                           0xECF188
#define pinstActiveBanker_x                                        0xEC78EC
#define pinstActiveCorpse_x                                        0xEC78E4
#define pinstActiveGMaster_x                                       0xEC78E8
#define pinstActiveMerchant_x                                      0xEC78E0
#define pinstAltAdvManager_x                                       0xE16418
#define pinstBandageTarget_x                                       0xEC7D0C
#define pinstCamActor_x                                            0xE15244
#define pinstCDBStr_x                                              0xE15134
#define pinstCDisplay_x                                            0xEC9D68
#define pinstCEverQuest_x                                          0xF738A8
#define pinstEverQuestInfo_x                                       0xECEEA8
#define pinstCharData_x                                            0xECA108
#define pinstCharSpawn_x                                           0xEC7D44
#define pinstControlledMissile_x                                   0xEC7D54
#define pinstControlledPlayer_x                                    0xEC7D44
#define pinstCResolutionHandler_x                                  0x1605CC8
#define pinstCSidlManager_x                                        0x1604C60
#define pinstCXWndManager_x                                        0x1604C5C
#define instDynamicZone_x                                          0xECDD28
#define pinstDZMember_x                                            0xECDE38
#define pinstDZTimerInfo_x                                         0xECDE3C
#define pinstEqLogin_x                                             0xF73938
#define instEQMisc_x                                               0xE15078
#define pinstEQSoundManager_x                                      0xE173E8
#define pinstEQSpellStrings_x                                      0xCD7A90
#define instExpeditionLeader_x                                     0xECDD72
#define instExpeditionName_x                                       0xECDDB2
#define pinstSGraphicsEngine_x                                     0x1605A8C
#define pinstGroup_x                                               0xEC9F16
#define pinstImeManager_x                                          0x1604C58
#define pinstLocalPlayer_x                                         0xEC78DC
#define pinstMercenaryData_x                                       0xF7022C
#define pinstMercenaryStats_x                                      0xF8921C
#define pinstModelPlayer_x                                         0xEC78F4
#define pinstPCData_x                                              0xECA108
#define pinstSkillMgr_x                                            0xF72390
#define pinstSpawnManager_x                                        0xF70E38
#define pinstSpellManager_x                                        0xF725D0
#define pinstSpellSets_x                                           0xF6687C
#define pinstStringTable_x                                         0xECA110
#define pinstSwitchManager_x                                       0xEC7788
#define pinstTarget_x                                              0xEC7D40
#define pinstTargetObject_x                                        0xEC7D4C
#define pinstTargetSwitch_x                                        0xEC9D60
#define pinstTaskMember_x                                          0xE14F08
#define pinstTrackTarget_x                                         0xEC7D48
#define pinstTradeTarget_x                                         0xEC78F0
#define instTributeActive_x                                        0xE15099
#define pinstViewActor_x                                           0xE15240
#define pinstWorldData_x                                           0xEC7D5C
#define pinstZoneAddr_x                                            0xECF428
#define pinstPlayerPath_x                                          0xF70ED0
#define pinstTargetIndicator_x                                     0xF72838
#define EQObject_Top_x                                             0xEC78D8

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xE159BC
#define pinstCAchievementsWnd_x                                    0xE15A34
#define pinstCActionsWnd_x                                         0xE159E4
#define pinstCAdvancedDisplayOptionsWnd_x                          0xE15258
#define pinstCAdvancedLootWnd_x                                    0xE151F8
#define pinstCAdventureLeaderboardWnd_x                            0xF7FEF0
#define pinstCAdventureRequestWnd_x                                0xF7FFA0
#define pinstCAdventureStatsWnd_x                                  0xF80050
#define pinstCAggroMeterWnd_x                                      0xE15264
#define pinstCAlarmWnd_x                                           0xE151D0
#define pinstCAlertHistoryWnd_x                                    0xE152C0
#define pinstCAlertStackWnd_x                                      0xE15200
#define pinstCAlertWnd_x                                           0xE15220
#define pinstCAltStorageWnd_x                                      0xF803B0
#define pinstCAudioTriggersWindow_x                                0xCC9DC0
#define pinstCAuraWnd_x                                            0xE15204
#define pinstCAvaZoneWnd_x                                         0xE1527C
#define pinstCBandolierWnd_x                                       0xE15248
#define pinstCBankWnd_x                                            0xE152A8
#define pinstCBarterMerchantWnd_x                                  0xF815F0
#define pinstCBarterSearchWnd_x                                    0xF816A0
#define pinstCBarterWnd_x                                          0xF81750
#define pinstCBazaarConfirmationWnd_x                              0xE151E0
#define pinstCBazaarSearchWnd_x                                    0xE159C0
#define pinstCBazaarWnd_x                                          0xE15A50
#define pinstCBlockedBuffWnd_x                                     0xE15214
#define pinstCBlockedPetBuffWnd_x                                  0xE15238
#define pinstCBodyTintWnd_x                                        0xE159F0
#define pinstCBookWnd_x                                            0xE15290
#define pinstCBreathWnd_x                                          0xE159D0
#define pinstCBuffWindowNORMAL_x                                   0xE151F0
#define pinstCBuffWindowSHORT_x                                    0xE151F4
#define pinstCBugReportWnd_x                                       0xE152A0
#define pinstCButtonWnd_x                                          0x1604EC8
#define pinstCCastingWnd_x                                         0xE15280
#define pinstCCastSpellWnd_x                                       0xE159C8
#define pinstCCharacterListWnd_x                                   0xE15A08
#define pinstCChatWindowManager_x                                  0xF82210
#define pinstCClaimWnd_x                                           0xF82368
#define pinstCColorPickerWnd_x                                     0xE15308
#define pinstCCombatAbilityWnd_x                                   0xE15A64
#define pinstCCombatSkillsSelectWnd_x                              0xE15A18
#define pinstCCompassWnd_x                                         0xE159E8
#define pinstCConfirmationDialog_x                                 0xF87268
#define pinstCContainerMgr_x                                       0xE15A04
#define pinstCContextMenuManager_x                                 0x1604C18
#define pinstCCursorAttachment_x                                   0xE15270
#define pinstCDynamicZoneWnd_x                                     0xF82930
#define pinstCEditLabelWnd_x                                       0xE151EC
#define pinstCEQMainWnd_x                                          0xF82B78
#define pinstCEventCalendarWnd_x                                   0xE159B8
#define pinstCExtendedTargetWnd_x                                  0xE15234
#define pinstCFacePick_x                                           0xE15A2C
#define pinstCFactionWnd_x                                         0xE15A40
#define pinstCFellowshipWnd_x                                      0xF82D78
#define pinstCFileSelectionWnd_x                                   0xE152E8
#define pinstCFindItemWnd_x                                        0xE15A24
#define pinstCFindLocationWnd_x                                    0xF82ED0
#define pinstCFriendsWnd_x                                         0xE15A28
#define pinstCGemsGameWnd_x                                        0xE15A38
#define pinstCGiveWnd_x                                            0xE151DC
#define pinstCGroupSearchFiltersWnd_x                              0xE15288
#define pinstCGroupSearchWnd_x                                     0xF832C8
#define pinstCGroupWnd_x                                           0xF83378
#define pinstCGuildBankWnd_x                                       0xED026C
#define pinstCGuildCreationWnd_x                                   0xF834D8
#define pinstCGuildMgmtWnd_x                                       0xF83588
#define pinstCharacterCreation_x                                   0xE15A1C
#define pinstCHelpWnd_x                                            0xE151D4
#define pinstCHeritageSelectionWnd_x                               0xE15A44
#define pinstCHotButtonWnd_x                                       0xF856E0
#define pinstCHotButtonWnd1_x                                      0xF856E0
#define pinstCHotButtonWnd2_x                                      0xF856E4
#define pinstCHotButtonWnd3_x                                      0xF856E8
#define pinstCHotButtonWnd4_x                                      0xF856EC
#define pinstCIconSelectionWnd_x                                   0xE15268
#define pinstCInspectWnd_x                                         0xE1523C
#define pinstCInventoryWnd_x                                       0xE1520C
#define pinstCInvSlotMgr_x                                         0xE159C4
#define pinstCItemDisplayManager_x                                 0xF85C70
#define pinstCItemExpTransferWnd_x                                 0xF85DA0
#define pinstCItemOverflowWnd_x                                    0xE159CC
#define pinstCJournalCatWnd_x                                      0xE1532C
#define pinstCJournalTextWnd_x                                     0xE152C4
#define pinstCKeyRingWnd_x                                         0xE15278
#define pinstCLargeDialogWnd_x                                     0xF87EE8
#define pinstCLayoutCopyWnd_x                                      0xF860F0
#define pinstCLFGuildWnd_x                                         0xF861A0
#define pinstCLoadskinWnd_x                                        0xE15A4C
#define pinstCLootFiltersCopyWnd_x                                 0xCE6410
#define pinstCLootFiltersWnd_x                                     0xE15208
#define pinstCLootSettingsWnd_x                                    0xE15230
#define pinstCLootWnd_x                                            0xE155A4
#define pinstCMailAddressBookWnd_x                                 0xE159D4
#define pinstCMailCompositionWnd_x                                 0xE159B4
#define pinstCMailIgnoreListWnd_x                                  0xE152EC
#define pinstCMailWnd_x                                            0xE15318
#define pinstCManageLootWnd_x                                      0xE168C8
#define pinstCMapToolbarWnd_x                                      0xE151D8
#define pinstCMapViewWnd_x                                         0xE15A48
#define pinstCMarketplaceWnd_x                                     0xE15210
#define pinstCMerchantWnd_x                                        0xE155AC
#define pinstCMIZoneSelectWnd_x                                    0xF869D8
#define pinstCMusicPlayerWnd_x                                     0xE152B4
#define pinstCNameChangeMercWnd_x                                  0xE15A5C
#define pinstCNameChangePetWnd_x                                   0xE15A3C
#define pinstCNameChangeWnd_x                                      0xE151E4
#define pinstCNoteWnd_x                                            0xE15A58
#define pinstCObjectPreviewWnd_x                                   0xE1522C
#define pinstCOptionsWnd_x                                         0xE15A68
#define pinstCPetInfoWnd_x                                         0xE152E0
#define pinstCPetitionQWnd_x                                       0xE15A0C
//#define pinstCPlayerCustomizationWnd_x                           0xDA8E24
#define pinstCPlayerNotesWnd_x                                     0xE159F4
#define pinstCPlayerWnd_x                                          0xE152E4
#define pinstCPopupWndManager_x                                    0xF87268
#define pinstCProgressionSelectionWnd_x                            0xF87318
#define pinstCPurchaseGroupWnd_x                                   0xE15298
#define pinstCPurchaseWnd_x                                        0xE1526C
#define pinstCPvPLeaderboardWnd_x                                  0xF873C8
#define pinstCPvPStatsWnd_x                                        0xF87478
#define pinstCQuantityWnd_x                                        0xE152C8
#define pinstCRaceChangeWnd_x                                      0xE151FC
#define pinstCRaidOptionsWnd_x                                     0xE1528C
#define pinstCRaidWnd_x                                            0xE155A8
#define pinstCRealEstateItemsWnd_x                                 0xE15A30
#define pinstCRealEstateLayoutDetailsWnd_x                         0xE159E0
#define pinstCRealEstateManageWnd_x                                0xE152A4
#define pinstCRealEstateNeighborhoodWnd_x                          0xE152BC
#define pinstCRealEstatePlotSearchWnd_x                            0xE152DC
#define pinstCRealEstatePurchaseWnd_x                              0xE15314
#define pinstCRespawnWnd_x                                         0xE15228
//#define pinstCRewardSelectionWnd_x                               0x10205B0
#define pinstCSelectorWnd_x                                        0xE15A10
#define pinstCSendMoneyWnd_x                                       0xE151E8
#define pinstCServerListWnd_x                                      0xE15320
#define pinstCSkillsSelectWnd_x                                    0xE15A00
#define pinstCSkillsWnd_x                                          0xE159EC
#define pinstCSocialEditWnd_x                                      0xE15274
#define pinstCSocialWnd_x                                          0xE15A54
#define pinstCSpellBookWnd_x                                       0xE15A60
#define pinstCStoryWnd_x                                           0xE159DC
#define pinstCTargetOfTargetWnd_x                                  0xF892A0
#define pinstCTargetWnd_x                                          0xE15224
#define pinstCTaskOverlayWnd_x                                     0xE15294
#define pinstCTaskSelectWnd_x                                      0xF893F8
#define pinstCTaskManager_x                                        0xCE6D50
#define pinstCTaskTemplateSelectWnd_x                              0xF894A8
#define pinstCTaskWnd_x                                            0xF89558
#define pinstCTextEntryWnd_x                                       0xE15284
#define pinstCTimeLeftWnd_x                                        0xE159F8
#define pinstCTipWndCONTEXT_x                                      0xF8975C
#define pinstCTipWndOFDAY_x                                        0xF89758
#define pinstCTitleWnd_x                                           0xF89808
#define pinstCTrackingWnd_x                                        0xE15218
#define pinstCTradeskillWnd_x                                      0xF89970
#define pinstCTradeWnd_x                                           0xE159FC
#define pinstCTrainWnd_x                                           0xE15324
#define pinstCTributeBenefitWnd_x                                  0xF89B70
#define pinstCTributeMasterWnd_x                                   0xF89C20
#define pinstCTributeTrophyWnd_x                                   0xF89CD0
#define pinstCVideoModesWnd_x                                      0xE1531C
#define pinstCVoiceMacroWnd_x                                      0xF72FA0
#define pinstCVoteResultsWnd_x                                     0xE15A20
#define pinstCVoteWnd_x                                            0xE15A14
#define pinstCWebManager_x                                         0xF7361C
#define pinstCZoneGuideWnd_x                                       0xE1529C
#define pinstCZonePathWnd_x                                        0xE152AC
#define pinstEQSuiteTextureLoader_x                                0xCB4140
#define pinstItemIconCache_x                                       0xF82B30
#define pinstLootFiltersManager_x                                  0xCE64C0
#define pinstRewardSelectionWnd_x                                  0xF87BC0

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5C0370
#define __CastRay2_x                                               0x5C03C0
#define __ConvertItemTags_x                                        0x5DC200
#define __CleanItemTags_x                                          0x47CF20
#define __CreateCascadeMenuItems_x                                 0x5596C0
#define __DoesFileExist_x                                          0x917170
#define __EQGetTime_x                                              0x913C10
#define __ExecuteCmd_x                                             0x5B8BF0
#define __FixHeading_x                                             0x9AE3A0
#define __FlushDxKeyboard_x                                        0x6CA9B0
#define __GameLoop_x                                               0x6CDCC0
#define __get_bearing_x                                            0x5BFEE0
#define __get_melee_range_x                                        0x5C05B0
#define __GetAnimationCache_x                                      0x733220
#define __GetGaugeValueFromEQ_x                                    0x825350
#define __GetLabelFromEQ_x                                         0x826E30
#define __GetXTargetType_x                                         0x9AFD80
#define __HandleMouseWheel_x                                       0x6CEBA0
#define __HeadingDiff_x                                            0x9AE410
#define __HelpPath_x                                               0xF6E324
#define __LoadFrontEnd_x                                           0x6CAFE0
#define __NewUIINI_x                                               0x825020
#define __ProcessGameEvents_x                                      0x621040
#define __ProcessKeyboardEvents_x                                  0x6CC520
#define __ProcessMouseEvents_x                                     0x620800
#define __SaveColors_x                                             0x5595A0
#define __STMLToText_x                                             0x951760
#define __WndProc_x                                                0x6CCF80
#define CMemoryMappedFile__SetFile_x                               0xA9D6D0
#define CrashDetected_x                                            0x6CCA80
#define DrawNetStatus_x                                            0x64CE50
#define Expansion_HoT_x                                            0xED0274
#define Teleport_Table_Size_x                                      0xECA1A4
#define Teleport_Table_x                                           0xEC7D60
#define Util__FastTime_x                                           0x9137E0
#define __eq_delete_x                                              0x9B685E
#define __eq_new_x                                                 0x9B6E24

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6DAF10
#define CAAWnd__Update_x                                           0x6DA230
#define CAAWnd__UpdateSelected_x                                   0x6D7780

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4902D0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x4991D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x498FA0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x493860
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x492CB0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x561840
#define AltAdvManager__IsAbilityReady_x                            0x5605E0
#define AltAdvManager__GetAAById_x                                 0x560970
#define AltAdvManager__CanTrainAbility_x                           0x5609E0
#define AltAdvManager__CanSeeAbility_x                             0x560D40

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C6770
#define CharacterZoneClient__CalcAffectChange_x                    0x4C4EB0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C5080
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4BBB20
#define CharacterZoneClient__CharacterZoneClient_x                 0x4CAD30
#define CharacterZoneClient__FindAffectSlot_x                      0x4C3BF0
#define CharacterZoneClient__FindItemByGuid_x                      0x4D8230
#define CharacterZoneClient__FindItemByRecord_x                    0x4D7CB0
#define CharacterZoneClient__GetCurrentMod_x                       0x4E59B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4D9E10
#define CharacterZoneClient__GetEffect_x                           0x4BBA60
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C4D10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B1D60
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B37F0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4D9D30
#define CharacterZoneClient__GetItemCountWorn_x                    0x4D9C50
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C4D60
#define CharacterZoneClient__GetMaxEffects_x                       0x4BBBF0
#define CharacterZoneClient__GetModCap_x                           0x4E58B0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C4C40
#define CharacterZoneClient__HasSkill_x                            0x4D5BB0
#define CharacterZoneClient__IsStackBlocked_x                      0x4BF4F0
#define CharacterZoneClient__MakeMeVisible_x                       0x4D72D0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6F48E0
#define CBankWnd__WndNotification_x                                0x6F46C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x702190

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x62F890
#define CButtonWnd__CButtonWnd_x                                   0x94DB10
#define CButtonWnd__dCButtonWnd_x                                  0x94DDF0
#define CButtonWnd__vftable_x                                      0xB56EC8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x7222C0
#define CChatWindowManager__InitContextMenu_x                      0x71B3F0
#define CChatWindowManager__FreeChatWindow_x                       0x720E00
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E92E0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x721F40
#define CChatWindowManager__CreateChatWindow_x                     0x721440

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E93F0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x722B30
#define CChatWindow__Clear_x                                       0x723DF0
#define CChatWindow__WndNotification_x                             0x724580
#define CChatWindow__AddHistory_x                                  0x7236B0

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x9621C0
#define CContextMenu__dCContextMenu_x                              0x9623F0
#define CContextMenu__AddMenuItem_x                                0x962400
#define CContextMenu__RemoveMenuItem_x                             0x962710
#define CContextMenu__RemoveAllMenuItems_x                         0x962730
#define CContextMenu__CheckMenuItem_x                              0x9627B0
#define CContextMenu__SetMenuItem_x                                0x962630
#define CContextMenu__AddSeparator_x                               0x962590

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x962D40
#define CContextMenuManager__RemoveMenu_x                          0x962DB0
#define CContextMenuManager__PopupMenu_x                           0x962E70
#define CContextMenuManager__Flush_x                               0x962CE0
#define CContextMenuManager__GetMenu_x                             0x49B300
#define CContextMenuManager__CreateDefaultMenu_x                   0x72DA10

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8EED00
#define CChatService__GetFriendName_x                              0x8EED10

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x95F620
#define CComboWnd__Draw_x                                          0x95EB30
#define CComboWnd__GetCurChoice_x                                  0x95F460
#define CComboWnd__GetListRect_x                                   0x95EFD0
#define CComboWnd__GetTextRect_x                                   0x95F690
#define CComboWnd__InsertChoice_x                                  0x95F160
#define CComboWnd__SetColors_x                                     0x95F130
#define CComboWnd__SetChoice_x                                     0x95F430
#define CComboWnd__GetItemCount_x                                  0x95F470
#define CComboWnd__GetCurChoiceText_x                              0x95F4B0
#define CComboWnd__GetChoiceText_x                                 0x95F480
#define CComboWnd__InsertChoiceAtIndex_x                           0x95F1F0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x72B430
#define CContainerWnd__vftable_x                                   0xB2561C
#define CContainerWnd__SetContainer_x                              0x72C980

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x553F50
#define CDisplay__PreZoneMainUI_x                                  0x553F60
#define CDisplay__CleanGameUI_x                                    0x559360
#define CDisplay__GetClickedActor_x                                0x54C310
#define CDisplay__GetUserDefinedColor_x                            0x544970
#define CDisplay__GetWorldFilePath_x                               0x54DD80
#define CDisplay__is3dON_x                                         0x548F70
#define CDisplay__ReloadUI_x                                       0x5533D0
#define CDisplay__WriteTextHD2_x                                   0x548D60
#define CDisplay__TrueDistance_x                                   0x54FA40
#define CDisplay__SetViewActor_x                                   0x54BC30
#define CDisplay__GetFloorHeight_x                                 0x549030
#define CDisplay__SetRenderWindow_x                                0x547990
#define CDisplay__ToggleScreenshotMode_x                           0x54B700

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x982100

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x965730
#define CEditWnd__EnsureCaretVisible_x                             0x967900
#define CEditWnd__GetCaretPt_x                                     0x9668B0
#define CEditWnd__GetCharIndexPt_x                                 0x966660
#define CEditWnd__GetDisplayString_x                               0x966500
#define CEditWnd__GetHorzOffset_x                                  0x964D70
#define CEditWnd__GetLineForPrintableChar_x                        0x967800
#define CEditWnd__GetSelStartPt_x                                  0x966910
#define CEditWnd__GetSTMLSafeText_x                                0x966320
#define CEditWnd__PointFromPrintableChar_x                         0x967430
#define CEditWnd__ReplaceSelection_x                               0x9670A0
#define CEditWnd__SelectableCharFromPoint_x                        0x9675A0
#define CEditWnd__SetEditable_x                                    0x9669E0
#define CEditWnd__SetWindowTextA_x                                 0x9660A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x60E960
#define CEverQuest__ClickedPlayer_x                                0x600AF0
#define CEverQuest__CreateTargetIndicator_x                        0x61E2D0
#define CEverQuest__DeleteTargetIndicator_x                        0x61E360
#define CEverQuest__DoTellWindow_x                                 0x4E94D0
#define CEverQuest__OutputTextToLog_x                              0x4E97A0
#define CEverQuest__DropHeldItemOnGround_x                         0x5F5C50
#define CEverQuest__dsp_chat_x                                     0x4E9B30
#define CEverQuest__trimName_x                                     0x61A4E0
#define CEverQuest__Emote_x                                        0x60F1C0
#define CEverQuest__EnterZone_x                                    0x609250
#define CEverQuest__GetBodyTypeDesc_x                              0x613A80
#define CEverQuest__GetClassDesc_x                                 0x6140C0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6146C0
#define CEverQuest__GetDeityDesc_x                                 0x61CB20
#define CEverQuest__GetLangDesc_x                                  0x614880
#define CEverQuest__GetRaceDesc_x                                  0x6140A0
#define CEverQuest__InterpretCmd_x                                 0x61D0F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x5F9DE0
#define CEverQuest__LMouseUp_x                                     0x5F8170
#define CEverQuest__RightClickedOnPlayer_x                         0x5FA6C0
#define CEverQuest__RMouseUp_x                                     0x5F90F0
#define CEverQuest__SetGameState_x                                 0x5F59E0
#define CEverQuest__UPCNotificationFlush_x                         0x61A3E0
#define CEverQuest__IssuePetCommand_x                              0x615C80
#define CEverQuest__ReportSuccessfulHeal_x                         0x60FEE0
#define CEverQuest__ReportSuccessfulHit_x                          0x610510

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x73D3C0
#define CGaugeWnd__CalcLinesFillRect_x                             0x73D420
#define CGaugeWnd__Draw_x                                          0x73CA40

// CGuild
#define CGuild__FindMemberByName_x                                 0x4AFAA0
#define CGuild__GetGuildName_x                                     0x4AE550
#define CGuild__GetGuildIndex_x                                    0x4AEB50

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x7575D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x62FC50

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x7645E0
#define CInvSlotMgr__MoveItem_x                                    0x763300
#define CInvSlotMgr__SelectSlot_x                                  0x7646B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x761B70
#define CInvSlot__SliderComplete_x                                 0x75F8E0
#define CInvSlot__GetItemBase_x                                    0x75F260
#define CInvSlot__UpdateItem_x                                     0x75F3D0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x766130
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7652D0
#define CInvSlotWnd__HandleLButtonUp_x                             0x765CB0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x8206B0
#define CItemDisplayWnd__UpdateStrings_x                           0x774810
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x76E4C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x76E9F0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x774E10
#define CItemDisplayWnd__AboutToShow_x                             0x774470
#define CItemDisplayWnd__WndNotification_x                         0x775F40
#define CItemDisplayWnd__RequestConvertItem_x                      0x7759C0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x7734E0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x774290

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x859540

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x77A460

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x51A500

// CLabel
#define CLabel__Draw_x                                             0x77FEA0

// CListWnd
#define CListWnd__CListWnd_x                                       0x937EB0
#define CListWnd__dCListWnd_x                                      0x9381D0
#define CListWnd__vftable_x                                        0xB567A0
#define CListWnd__AddColumn_x                                      0x93C630
#define CListWnd__AddColumn1_x                                     0x93C680
#define CListWnd__AddLine_x                                        0x93CA10
#define CListWnd__AddString_x                                      0x93C810
#define CListWnd__CalculateFirstVisibleLine_x                      0x93C3F0
#define CListWnd__CalculateVSBRange_x                              0x93C1D0
#define CListWnd__ClearSel_x                                       0x93D1F0
#define CListWnd__ClearAllSel_x                                    0x93D250
#define CListWnd__CloseAndUpdateEditWindow_x                       0x93DC70
#define CListWnd__Compare_x                                        0x93BB10
#define CListWnd__Draw_x                                           0x938300
#define CListWnd__DrawColumnSeparators_x                           0x93AAE0
#define CListWnd__DrawHeader_x                                     0x93AF50
#define CListWnd__DrawItem_x                                       0x93B450
#define CListWnd__DrawLine_x                                       0x93AC50
#define CListWnd__DrawSeparator_x                                  0x93AB80
#define CListWnd__EnableLine_x                                     0x93A3C0
#define CListWnd__EnsureVisible_x                                  0x93DB90
#define CListWnd__ExtendSel_x                                      0x93D120
#define CListWnd__GetColumnTooltip_x                               0x939F00
#define CListWnd__GetColumnMinWidth_x                              0x939F70
#define CListWnd__GetColumnWidth_x                                 0x939E70
#define CListWnd__GetCurSel_x                                      0x939800
#define CListWnd__GetItemAtPoint_x                                 0x93A640
#define CListWnd__GetItemAtPoint1_x                                0x93A6B0
#define CListWnd__GetItemData_x                                    0x939880
#define CListWnd__GetItemHeight_x                                  0x939C40
#define CListWnd__GetItemIcon_x                                    0x939A10
#define CListWnd__GetItemRect_x                                    0x93A4B0
#define CListWnd__GetItemText_x                                    0x9398C0
#define CListWnd__GetSelList_x                                     0x93D2A0
#define CListWnd__GetSeparatorRect_x                               0x93A8F0
#define CListWnd__InsertLine_x                                     0x93CE00
#define CListWnd__RemoveLine_x                                     0x93CF50
#define CListWnd__SetColors_x                                      0x93C1B0
#define CListWnd__SetColumnJustification_x                         0x93BEE0
#define CListWnd__SetColumnLabel_x                                 0x93C7B0
#define CListWnd__SetColumnWidth_x                                 0x93BE00
#define CListWnd__SetCurSel_x                                      0x93D060
#define CListWnd__SetItemColor_x                                   0x93D840
#define CListWnd__SetItemData_x                                    0x93D800
#define CListWnd__SetItemText_x                                    0x93D410
#define CListWnd__ShiftColumnSeparator_x                           0x93BFA0
#define CListWnd__Sort_x                                           0x93BC90
#define CListWnd__ToggleSel_x                                      0x93D090
#define CListWnd__SetColumnsSizable_x                              0x93C050
#define CListWnd__SetItemWnd_x                                     0x93D6C0
#define CListWnd__GetItemWnd_x                                     0x939A60
#define CListWnd__SetItemIcon_x                                    0x93D490
#define CListWnd__CalculateCustomWindowPositions_x                 0x93C4F0
#define CListWnd__SetVScrollPos_x                                  0x93BDE0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7955C0

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x790AB0
#define MapViewMap__dMapViewMap_x                                  0x790C00
#define MapViewMap__vftable_x                                      0xB2CC60
#define MapViewMap__Clear_x                                        0x791430
#define MapViewMap__SaveEx_x                                       0x7947F0
#define MapViewMap__SetZoom_x                                      0x798EB0
#define MapViewMap__HandleLButtonDown_x                            0x790D10
#define MapViewMap__GetWorldCoordinates_x                          0x793CD0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7B59E0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7B62C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7B67F0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7B9770
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7B4560
#define CMerchantWnd__SelectBuySellSlot_x                          0x7BF320
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7B5600

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8BC940
#define CPacketScrambler__hton_x                                   0x8BC930

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x95B140
#define CSidlManagerBase__CreatePageWnd_x                          0x95A930
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x956BB0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x956B40
#define CSidlManagerBase__FindAnimation1_x                         0x956D90
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x9571A0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x956F90
#define CSidlManagerBase__CreateLabel_x                            0x817910
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x95A100
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x95A2E0
#define CSidlManagerBase__CreateXWnd_x                             0x817840

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x817E10

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x953870
#define CSidlScreenWnd__CalculateVSBRange_x                        0x953770
#define CSidlScreenWnd__ConvertToRes_x                             0x97CBA0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x953200
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x952EF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x952FC0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x953090
#define CSidlScreenWnd__DrawSidlPiece_x                            0x953D10
#define CSidlScreenWnd__EnableIniStorage_x                         0x9541E0
#define CSidlScreenWnd__GetChildItem_x                             0x954160
#define CSidlScreenWnd__GetSidlPiece_x                             0x953F00
#define CSidlScreenWnd__HandleLButtonUp_x                          0x943A30
#define CSidlScreenWnd__Init1_x                                    0x952AF0
#define CSidlScreenWnd__LoadIniInfo_x                              0x954230
#define CSidlScreenWnd__LoadIniListWnd_x                           0x954D70
#define CSidlScreenWnd__LoadSidlScreen_x                           0x951F10
#define CSidlScreenWnd__m_layoutCopy_x                             0x1604AE8
#define CSidlScreenWnd__StoreIniInfo_x                             0x9548F0
#define CSidlScreenWnd__StoreIniVis_x                              0x954C50
#define CSidlScreenWnd__vftable_x                                  0xB57158
#define CSidlScreenWnd__WndNotification_x                          0x953C20

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x694AF0
#define CSkillMgr__GetSkillCap_x                                   0x694CD0
#define CSkillMgr__GetNameToken_x                                  0x694270
#define CSkillMgr__IsActivatedSkill_x                              0x6943B0
#define CSkillMgr__IsCombatSkill_x                                 0x6942F0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x963B40
#define CSliderWnd__SetValue_x                                     0x9639B0
#define CSliderWnd__SetNumTicks_x                                  0x963A10

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x81DA40

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x96C360
#define CStmlWnd__CalculateHSBRange_x                              0x96D440
#define CStmlWnd__CalculateVSBRange_x                              0x96D3B0
#define CStmlWnd__CanBreakAtCharacter_x                            0x971780
#define CStmlWnd__FastForwardToEndOfTag_x                          0x972410
#define CStmlWnd__ForceParseNow_x                                  0x96C900
#define CStmlWnd__GetNextTagPiece_x                                0x9716E0
#define CStmlWnd__GetSTMLText_x                                    0x509DE0
#define CStmlWnd__GetVisibleText_x                                 0x96C920
#define CStmlWnd__InitializeWindowVariables_x                      0x972260
#define CStmlWnd__MakeStmlColorTag_x                               0x96B9D0
#define CStmlWnd__MakeWndNotificationTag_x                         0x96BA40
#define CStmlWnd__SetSTMLText_x                                    0x96AA80
#define CStmlWnd__StripFirstSTMLLines_x                            0x973510
#define CStmlWnd__UpdateHistoryString_x                            0x972620

// CTabWnd
#define CTabWnd__Draw_x                                            0x969BD0
#define CTabWnd__DrawCurrentPage_x                                 0x96A300
#define CTabWnd__DrawTab_x                                         0x96A020
#define CTabWnd__GetCurrentPage_x                                  0x9693D0
#define CTabWnd__GetCurrentTabIndex_x                              0x9693C0
#define CTabWnd__GetPageFromTabIndex_x                             0x969F60
#define CTabWnd__GetPageInnerRect_x                                0x969610
#define CTabWnd__GetTabInnerRect_x                                 0x969550
#define CTabWnd__GetTabRect_x                                      0x969400
#define CTabWnd__InsertPage_x                                      0x969820
#define CTabWnd__RemovePage_x                                      0x969990
#define CTabWnd__SetPage_x                                         0x969690
#define CTabWnd__SetPageRect_x                                     0x969B10
#define CTabWnd__UpdatePage_x                                      0x969EE0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x968F70
#define CPageWnd__GetTabText_x                                     0x77A830
#define CPageWnd__SetTabText_x                                     0x968F10


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A8DA0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x9408F0
#define CTextureFont__DrawWrappedText1_x                           0x940820
#define CTextureFont__DrawWrappedText2_x                           0x940940
#define CTextureFont__GetTextExtent_x                              0x940AB0

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x6C7E90
#define CHtmlComponentWnd__ValidateUri_x                           0x758FC0
#define CHtmlWnd__SetClientCallbacks_x                             0x634CD0
#define CHtmlWnd__AddObserver_x                                    0x634CF0
#define CHtmlWnd__RemoveObserver_x                                 0x634D50
#define Window__getProgress_x                                      0x871E20
#define Window__getStatus_x                                        0x871E40
#define Window__getURI_x                                           0x871E50

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9799B0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x92DB80

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E91D0
#define CXStr__CXStr1_x                                            0x4B7270
#define CXStr__CXStr3_x                                            0x90FD70
#define CXStr__dCXStr_x                                            0x478630
#define CXStr__operator_equal_x                                    0x90FFA0
#define CXStr__operator_equal1_x                                   0x90FFE0
#define CXStr__operator_plus_equal1_x                              0x910A70
#define CXStr__SetString_x                                         0x912960
#define CXStr__operator_char_p_x                                   0x9104B0
#define CXStr__GetChar_x                                           0x9122B0
#define CXStr__Delete_x                                            0x911B60
#define CXStr__GetUnicode_x                                        0x912320
#define CXStr__GetLength_x                                         0x47D2D0
#define CXStr__Mid_x                                               0x47D2E0
#define CXStr__Insert_x                                            0x912380
#define CXStr__FindNext_x                                          0x911FD0
#define CXStr__gFreeLists_x                                        0xCB2598
#define CXStr__gCXStrAccess_x                                      0x160420C

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x961DE0

// CXWnd
#define CXWnd__BringToTop_x                                        0x947110
#define CXWnd__Center_x                                            0x946C90
#define CXWnd__ClrFocus_x                                          0x946AB0
#define CXWnd__Destroy_x                                           0x946B50
#define CXWnd__DoAllDrawing_x                                      0x9431C0
#define CXWnd__DrawChildren_x                                      0x943190
#define CXWnd__DrawColoredRect_x                                   0x943620
#define CXWnd__DrawTooltip_x                                       0x941D00
#define CXWnd__DrawTooltipAtPoint_x                                0x941DC0
#define CXWnd__GetBorderFrame_x                                    0x943480
#define CXWnd__GetChildItem_x                                      0x947320
#define CXWnd__GetChildWndAt_x                                     0x9471B0
#define CXWnd__GetClientClipRect_x                                 0x9453E0
#define CXWnd__GetRelativeRect_x                                   0x945730
#define CXWnd__GetScreenClipRect_x                                 0x9454B0
#define CXWnd__GetScreenRect_x                                     0x945670
#define CXWnd__GetTooltipRect_x                                    0x943670
#define CXWnd__GetWindowTextA_x                                    0x49C9E0
#define CXWnd__IsActive_x                                          0x943DB0
#define CXWnd__IsDescendantOf_x                                    0x946060
#define CXWnd__IsReallyVisible_x                                   0x946090
#define CXWnd__IsType_x                                            0x947830
#define CXWnd__Minimize_x                                          0x946770
#define CXWnd__Move_x                                              0x9460F0
#define CXWnd__Move1_x                                             0x9461A0
#define CXWnd__ProcessTransition_x                                 0x946C40
#define CXWnd__Refade_x                                            0x946470
#define CXWnd__Resize_x                                            0x946710
#define CXWnd__Right_x                                             0x946ED0
#define CXWnd__SetFocus_x                                          0x946A70
#define CXWnd__SetFont_x                                           0x946AE0
#define CXWnd__SetKeyTooltip_x                                     0x947640
#define CXWnd__SetMouseOver_x                                      0x9445D0
#define CXWnd__SetParent_x                                         0x945E10
#define CXWnd__StartFade_x                                         0x945F50
#define CXWnd__vftable_x                                           0xB56BE4
#define CXWnd__CXWnd_x                                             0x940DE0
#define CXWnd__dCXWnd_x                                            0x941300

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x97DC20

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x949FB0
#define CXWndManager__DrawWindows_x                                0x949FD0
#define CXWndManager__GetKeyboardFlags_x                           0x94C7A0
#define CXWndManager__HandleKeyboardMsg_x                          0x94C350
#define CXWndManager__RemoveWnd_x                                  0x94C9C0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x94CF30

// CDBStr
#define CDBStr__GetString_x                                        0x543930

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4DA620
#define CharacterZoneClient__CastSpell_x                           0x4BCB00
#define CharacterZoneClient__Cur_HP_x                              0x4D2BF0
#define CharacterZoneClient__Cur_Mana_x                            0x4DA310
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D5970
#define CharacterZoneClient__GetBaseSkill_x                        0x4D6910
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4BFB40
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E06D0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B3430
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B3580
#define CharacterZoneClient__GetHPRegen_x                          0x4E00D0
#define CharacterZoneClient__GetManaRegen_x                        0x4E0B10
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C0890
#define CharacterZoneClient__Max_Endurance_x                       0x65B420
#define CharacterZoneClient__Max_HP_x                              0x4D2A20
#define CharacterZoneClient__Max_Mana_x                            0x65B220
#define CharacterZoneClient__SpellDuration_x                       0x4C03C0
#define CharacterZoneClient__TotalEffect_x                         0x4C5EB0
#define CharacterZoneClient__UseSkill_x                            0x4E28F0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8DBC70

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x671790

// PcClient
#define PcClient__PcClient_x                                       0x6515D0
#define PcClient__GetConLevel_x                                    0x653E70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BA6D0
#define CCharacterListWnd__EnterWorld_x                            0x4BA0B0
#define CCharacterListWnd__Quit_x                                  0x4B9E00
#define CCharacterListWnd__UpdateList_x                            0x4BA2A0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x635E90
#define EQ_Item__CreateItemTagString_x                             0x8B5F90
#define EQ_Item__IsStackable_x                                     0x8BABE0
#define EQ_Item__GetImageNum_x                                     0x8B7AF0
#define EQ_Item__CreateItemClient_x                                0x6350D0
#define EQ_Item__GetItemValue_x                                    0x8B8DF0
#define EQ_Item__ValueSellMerchant_x                               0x8BC520
#define EQ_Item__IsKeyRingItem_x                                   0x8BA500
#define EQ_Item__CanGoInBag_x                                      0x635FB0
#define EQ_Item__IsEmpty_x                                         0x8BA050
#define EQ_Item__GetMaxItemCount_x                                 0x8B9200
#define EQ_Item__GetHeldItem_x                                     0x8B79C0
#define EQ_Item__GetAugmentFitBySlot_x                             0x8B58E0
#define ItemClient__ItemClient_x                                   0x5B5800
#define ItemClient__dItemClient_x                                  0x635020

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x562520
#define EQ_LoadingS__Array_x                                       0xC3BC60

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8C5990
#define EQ_PC__GetCombatAbility_x                                  0x8C6000
#define EQ_PC__GetCombatAbilityTimer_x                             0x8C6070
#define EQ_PC__GetItemRecastTimer_x                                0x65DDC0
#define EQ_PC__HasLoreItem_x                                       0x654680
#define EQ_PC__AlertInventoryChanged_x                             0x6537A0
#define EQ_PC__GetPcZoneClient_x                                   0x680230
#define EQ_PC__RemoveMyAffect_x                                    0x660FF0
#define EQ_PC__GetKeyRingItems_x                                   0x8C6900
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8C6690
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8C6C00

// EQItemList
#define EQItemList__EQItemList_x                                   0x5BD8F0
#define EQItemList__add_object_x                                   0x5EB540
#define EQItemList__add_item_x                                     0x5BDE50
#define EQItemList__delete_item_x                                  0x5BDEA0
#define EQItemList__FreeItemList_x                                 0x5BDDA0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x540530

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x673010
#define EQPlayer__dEQPlayer_x                                      0x6664D0
#define EQPlayer__DoAttack_x                                       0x67AEF0
#define EQPlayer__EQPlayer_x                                       0x666B90
#define EQPlayer__SetNameSpriteState_x                             0x66AE10
#define EQPlayer__SetNameSpriteTint_x                              0x66BCF0
#define PlayerBase__HasProperty_j_x                                0x9AC7B0
#define EQPlayer__IsTargetable_x                                   0x9ACC50
#define EQPlayer__CanSee_x                                         0x9ACAB0
#define EQPlayer__CanSee1_x                                        0x9ACB80
#define PlayerBase__GetVisibilityLineSegment_x                     0x9AC870

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x67DCD0
#define PlayerZoneClient__GetLevel_x                               0x680270
#define PlayerZoneClient__IsValidTeleport_x                        0x5EC6B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x55B1C0

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x675E00
#define EQPlayerManager__GetSpawnByName_x                          0x675EB0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x675F40

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x6395D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x639650
#define KeypressHandler__AttachKeyToEqCommand_x                    0x639690
#define KeypressHandler__ClearCommandStateArray_x                  0x63AAA0
#define KeypressHandler__HandleKeyDown_x                           0x63AAC0
#define KeypressHandler__HandleKeyUp_x                             0x63AB60
#define KeypressHandler__SaveKeymapping_x                          0x63AFB0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8D9CA0

// StringTable
#define StringTable__getString_x                                   0x8D4AB0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x65D840
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x65BD60
#define PcZoneClient__GetPcSkillLimit_x                            0x660C60
#define PcZoneClient__RemovePetEffect_x                            0x661290
#define PcZoneClient__HasAlternateAbility_x                        0x65B050
#define PcZoneClient__CanEquipItem_x                               0x65B700
#define PcZoneClient__GetItemByID_x                                0x65E230
#define PcZoneClient__GetItemByItemClass_x                         0x65E380
#define PcZoneClient__RemoveBuffEffect_x                           0x6612B0
#define PcZoneClient__BandolierSwap_x                              0x65C310
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x65DD60

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F1160

// IconCache
#define IconCache__GetIcon_x                                       0x732AC0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x72A5D0
#define CContainerMgr__CloseContainer_x                            0x72A8A0
#define CContainerMgr__OpenExperimentContainer_x                   0x72B320

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7E9BD0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x62E070

// CLootWnd
#define CLootWnd__LootAll_x                                        0x787990
#define CLootWnd__RequestLootSlot_x                                0x786BC0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x589170
#define EQ_Spell__SpellAffects_x                                   0x5895E0
#define EQ_Spell__SpellAffectBase_x                                0x5893A0
#define EQ_Spell__IsStackable_x                                    0x4CA600
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4CA450
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B7910
#define EQ_Spell__IsSPAStacking_x                                  0x58A430
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x589940
#define EQ_Spell__IsNoRemove_x                                     0x4CA5E0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58A440
#define __IsResEffectSpell_x                                       0x4C9930

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4ACFE0

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8E4310

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x830E90
#define CTargetWnd__WndNotification_x                              0x8306D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x8309A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x82F840

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x8354D0
#define CTaskWnd__ConfirmAbandonTask_x                             0x838110

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x53DF40
#define CTaskManager__HandleMessage_x                              0x53C3E0
#define CTaskManager__GetTaskStatus_x                              0x53DFF0
#define CTaskManager__GetElementDescription_x                      0x53E070

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x584370
#define EqSoundManager__PlayScriptMp3_x                            0x584630
#define EqSoundManager__SoundAssistPlay_x                          0x698A30
#define EqSoundManager__WaveInstancePlay_x                         0x697FA0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x52F500

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x968620
#define CTextureAnimation__SetCurCell_x                            0x968420

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56A010
#define CAltAbilityData__GetMercMaxRank_x                          0x569FA0
#define CAltAbilityData__GetMaxRank_x                              0x55F460

// CTargetRing
#define CTargetRing__Cast_x                                        0x62C190

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x516AE0
#define CharacterBase__CreateItemIndex_x                           0x634280
#define CharacterBase__GetItemByGlobalIndex_x                      0x8EC980
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8EC9E0
#define CharacterBase__GetItemPossession_x                         0x5026C0
#define CharacterBase__GetMemorizedSpell_x                         0x4CA430
#define CharacterBase__IsExpansionFlag_x                           0x5B73B0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x7116C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x711EF0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x711FA0

// messages
#define msg_spell_worn_off_x                                       0x5AF490
#define msg_new_text_x                                             0x5A3E80
#define __msgTokenTextParam_x                                      0x5B1730
#define msgTokenText_x                                             0x5B1980

// SpellManager
#define SpellManager__vftable_x                                    0xAFF158
#define SpellManager__SpellManager_x                               0x69BD60
#define Spellmanager__LoadTextSpells_x                             0x69C650
#define SpellManager__GetSpellByGroupAndRank_x                     0x69BF30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9B0670

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8E4CB0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8E4F30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7801E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x72ECB0
#define CCursorAttachment__AttachToCursor1_x                       0x72ECF0
#define CCursorAttachment__Deactivate_x                            0x72FCE0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x977A40
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9781C0
#define CEQSuiteTextureLoader__GetTexture_x                        0x977E80

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x514080
#define CFindItemWnd__WndNotification_x                            0x514B60
#define CFindItemWnd__Update_x                                     0x5156D0
#define CFindItemWnd__PickupSelectedItem_x                         0x5138C0

// IString
#define IString__Append_x                                          0x503EF0

// Camera
#define CDisplay__cameraType_x                                     0xE15328
#define EverQuest__Cameras_x                                       0xED05C4

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x51C890
#define LootFiltersManager__GetItemFilterData_x                    0x51C1A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51C1D0
#define LootFiltersManager__SetItemLootFilter_x                    0x51C3F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7D79D0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9B62D0
#define CResolutionHandler__GetWindowedStyle_x                     0x6934F0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x727290

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8FA230
#define CDistillerInfo__Instance_x                                 0x8FA1D0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x746380
#define CGroupWnd__UpdateDisplay_x                                 0x7456E0

// ItemBase
#define ItemBase__IsLore_x                                         0x8BA5B0
#define ItemBase__IsLoreEquipped_x                                 0x8BA620

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5EB4A0
#define EQPlacedItemManager__GetItemByGuid_x                       0x5EB5E0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5EB640

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x688940
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x68C2B0

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50A420

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F6A90
#define FactionManagerClient__HandleFactionMessage_x               0x4F7100
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4F7700
#define FactionManagerClient__GetMaxFaction_x                      0x4F771F
#define FactionManagerClient__GetMinFaction_x                      0x4F76D0

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x502690

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x93F910

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49BCF0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x502900

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5694B0

// CTargetManager
#define CTargetManager__Get_x                                      0x69F680

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x688940

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A8B60

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5BDD40

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF6DC58

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x92A2D0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x483010

//
// EQGraphicsDX9.dll offsets (maybe this should go in eqgraphics.h?)
//

#define __eqgraphics_fopen_x                                       0x10147468
#define CParticleSystem__Render_x                                  0x10071190

//
// eqmain.dll offsets
//

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x100892D0
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x10019900
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x1007B5C0
#define EQMain__LoginController__FlushDxKeyboard_x                 0x10015190
#define EQMain__LoginController__GiveTime_x                        0x100151F0
#define EQMain__LoginServerAPI__JoinServer_x                       0x10016D50
#define EQMain__WndProc_x                                          0x1000BEA0

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x10163EB0
#define EQMain__pinstCLoginViewManager_x                           0x1016A524
#define EQMain__pinstCXWndManager_x                                0x1037CA1C
#define EQMain__pinstCSidlManager_x                                0x1037CA20
#define EQMain__pinstLoginController_x                             0x1016A528
#define EQMain__pinstLoginServerAPI_x                              0x1016A518
