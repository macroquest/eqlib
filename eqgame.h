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
#define __ExpectedVersionDate                                     "May 18 2020"
#define __ExpectedVersionTime                                     "17:44:08"
#define __ActualVersionDate_x                                      0xB1C420
#define __ActualVersionTime_x                                      0xB1C414
#define __ActualVersionBuild_x                                     0xB08104

// Memory Protection
#define __MemChecker0_x                                            0x63F200
#define __MemChecker1_x                                            0x913150
#define __MemChecker2_x                                            0x6CDF60
#define __MemChecker3_x                                            0x6CDEB0
#define __MemChecker4_x                                            0x869630
#define __EncryptPad0_x                                            0xC54500
#define __EncryptPad1_x                                            0xCB2668
#define __EncryptPad2_x                                            0xC64D98
#define __EncryptPad3_x                                            0xC64998
#define __EncryptPad4_x                                            0xCA2C18
#define __EncryptPad5_x                                            0xF7386C
#define __AC1_x                                                    0x8262C6
#define __AC2_x                                                    0x5F8D2F
#define __AC3_x                                                    0x60037F
#define __AC4_x                                                    0x604340
#define __AC5_x                                                    0x60A5EF
#define __AC6_x                                                    0x60EAF6
#define __AC7_x                                                    0x5F87A0
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
#define __do_loot_x                                                0x5C4570
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
#define __gfMaxZoomCameraDistance_x                                0xB11D60
#define __gfMaxCameraDistance_x                                    0xB3E1EC
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
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
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
//#define pinstCJournalNPCWnd_x                                    0xDA93B0
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
#define __CastRay_x                                                0x5BF940
#define __CastRay2_x                                               0x5BF990
#define __ConvertItemTags_x                                        0x5DB7C0
#define __CleanItemTags_x                                          0x47D170
#define __CreateCascadeMenuItems_x                                 0x5597E0
#define __DoesFileExist_x                                          0x9161E0
#define __EQGetTime_x                                              0x912C20
#define __ExecuteCmd_x                                             0x5B81D0
#define __FixHeading_x                                             0x9AE220
#define __FlushDxKeyboard_x                                        0x6C9E20
#define __GameLoop_x                                               0x6CD130
#define __get_bearing_x                                            0x5BF4B0
#define __get_melee_range_x                                        0x5BFB80
#define __GetAnimationCache_x                                      0x732500
#define __GetGaugeValueFromEQ_x                                    0x824770
#define __GetLabelFromEQ_x                                         0x826250
#define __GetXTargetType_x                                         0x9AFC70
#define __HandleMouseWheel_x                                       0x6CE010
#define __HeadingDiff_x                                            0x9AE290
#define __HelpPath_x                                               0xF6E324
#define __LoadFrontEnd_x                                           0x6CA450
#define __NewUIINI_x                                               0x824440
#define __ProcessGameEvents_x                                      0x6206A0
#define __ProcessKeyboardEvents_x                                  0x6CB990
#define __ProcessMouseEvents_x                                     0x61FE60
#define __SaveColors_x                                             0x5596C0
#define __STMLToText_x                                             0x951520
#define __WndProc_x                                                0x6CC3F0
#define CMemoryMappedFile__SetFile_x                               0xA9D690
#define CrashDetected_x                                            0x6CBEF0
#define DrawNetStatus_x                                            0x64C3C0
#define Expansion_HoT_x                                            0xED0274
#define Teleport_Table_Size_x                                      0xECA1A4
#define Teleport_Table_x                                           0xEC7D60
#define Util__FastTime_x                                           0x9127F0
#define __eq_delete_x                                              0x9B676E
#define __eq_new_x                                                 0x9B6D24

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6DA2C0
#define CAAWnd__Update_x                                           0x6D95E0
#define CAAWnd__UpdateSelected_x                                   0x6D6B30

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4904D0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x4993F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x4991C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x493A70
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x492EC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x561830
#define AltAdvManager__IsAbilityReady_x                            0x5605D0
#define AltAdvManager__GetAAById_x                                 0x560960
#define AltAdvManager__CanTrainAbility_x                           0x5609D0
#define AltAdvManager__CanSeeAbility_x                             0x560D30

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C69A0
#define CharacterZoneClient__CalcAffectChange_x                    0x4C50E0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C52B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4BBD50
#define CharacterZoneClient__CharacterZoneClient_x                 0x4CB000
#define CharacterZoneClient__FindAffectSlot_x                      0x4C3E20
#define CharacterZoneClient__FindItemByGuid_x                      0x4D8500
#define CharacterZoneClient__FindItemByRecord_x                    0x4D7F80
#define CharacterZoneClient__GetCurrentMod_x                       0x4E5C30
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DA0B0
#define CharacterZoneClient__GetEffect_x                           0x4BBC90
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C4F40
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B2000
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B3A90
#define CharacterZoneClient__GetItemCountInInventory_x             0x4D9FD0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4D9EF0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C4F90
#define CharacterZoneClient__GetMaxEffects_x                       0x4BBE20
#define CharacterZoneClient__GetModCap_x                           0x4E5B30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C4E70
#define CharacterZoneClient__HasSkill_x                            0x4D5E80
#define CharacterZoneClient__IsStackBlocked_x                      0x4BF720
#define CharacterZoneClient__MakeMeVisible_x                       0x4D75A0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6F3B60
#define CBankWnd__WndNotification_x                                0x6F3940

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x7014C0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x62EE20
#define CButtonWnd__CButtonWnd_x                                   0x94D8E0
#define CButtonWnd__dCButtonWnd_x                                  0x94DBC0
#define CButtonWnd__vftable_x                                      0xB56EC8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x721530
#define CChatWindowManager__InitContextMenu_x                      0x71A660
#define CChatWindowManager__FreeChatWindow_x                       0x720070
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E95C0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x7211B0
#define CChatWindowManager__CreateChatWindow_x                     0x7206B0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E96D0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x721DA0
#define CChatWindow__Clear_x                                       0x723060
#define CChatWindow__WndNotification_x                             0x7237F0
#define CChatWindow__AddHistory_x                                  0x722920

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x961F10
#define CContextMenu__dCContextMenu_x                              0x962140
#define CContextMenu__AddMenuItem_x                                0x962150
#define CContextMenu__RemoveMenuItem_x                             0x962450
#define CContextMenu__RemoveAllMenuItems_x                         0x962470
#define CContextMenu__CheckMenuItem_x                              0x9624F0
#define CContextMenu__SetMenuItem_x                                0x962380
#define CContextMenu__AddSeparator_x                               0x9622E0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x962A90
#define CContextMenuManager__RemoveMenu_x                          0x962B00
#define CContextMenuManager__PopupMenu_x                           0x962BC0
#define CContextMenuManager__Flush_x                               0x962A30
#define CContextMenuManager__GetMenu_x                             0x49B550
#define CContextMenuManager__CreateDefaultMenu_x                   0x72CD00

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8EDE60
#define CChatService__GetFriendName_x                              0x8EDE70

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x95F370
#define CComboWnd__Draw_x                                          0x95E870
#define CComboWnd__GetCurChoice_x                                  0x95F1B0
#define CComboWnd__GetListRect_x                                   0x95ED20
#define CComboWnd__GetTextRect_x                                   0x95F3D0
#define CComboWnd__InsertChoice_x                                  0x95EEB0
#define CComboWnd__SetColors_x                                     0x95EE80
#define CComboWnd__SetChoice_x                                     0x95F180
#define CComboWnd__GetItemCount_x                                  0x95F1C0
#define CComboWnd__GetCurChoiceText_x                              0x95F200
#define CComboWnd__GetChoiceText_x                                 0x95F1D0
#define CComboWnd__InsertChoiceAtIndex_x                           0x95EF40

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x72A720
#define CContainerWnd__vftable_x                                   0xB25604
#define CContainerWnd__SetContainer_x                              0x72BC70

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x554070
#define CDisplay__PreZoneMainUI_x                                  0x554080
#define CDisplay__CleanGameUI_x                                    0x559480
#define CDisplay__GetClickedActor_x                                0x54C430
#define CDisplay__GetUserDefinedColor_x                            0x544A90
#define CDisplay__GetWorldFilePath_x                               0x54DEA0
#define CDisplay__is3dON_x                                         0x549090
#define CDisplay__ReloadUI_x                                       0x5534F0
#define CDisplay__WriteTextHD2_x                                   0x548E80
#define CDisplay__TrueDistance_x                                   0x54FB60
#define CDisplay__SetViewActor_x                                   0x54BD50
#define CDisplay__GetFloorHeight_x                                 0x549150
#define CDisplay__SetRenderWindow_x                                0x547AB0
#define CDisplay__ToggleScreenshotMode_x                           0x54B820

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x981C80

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x965460
#define CEditWnd__EnsureCaretVisible_x                             0x967620
#define CEditWnd__GetCaretPt_x                                     0x9665D0
#define CEditWnd__GetCharIndexPt_x                                 0x966380
#define CEditWnd__GetDisplayString_x                               0x966220
#define CEditWnd__GetHorzOffset_x                                  0x964AA0
#define CEditWnd__GetLineForPrintableChar_x                        0x967520
#define CEditWnd__GetSelStartPt_x                                  0x966630
#define CEditWnd__GetSTMLSafeText_x                                0x966040
#define CEditWnd__PointFromPrintableChar_x                         0x967150
#define CEditWnd__ReplaceSelection_x                               0x966DC0
#define CEditWnd__SelectableCharFromPoint_x                        0x9672C0
#define CEditWnd__SetEditable_x                                    0x966700
#define CEditWnd__SetWindowTextA_x                                 0x965DC0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x60DFD0
#define CEverQuest__ClickedPlayer_x                                0x600160
#define CEverQuest__CreateTargetIndicator_x                        0x61D940
#define CEverQuest__DeleteTargetIndicator_x                        0x61D9D0
#define CEverQuest__DoTellWindow_x                                 0x4E97B0
#define CEverQuest__OutputTextToLog_x                              0x4E9A80
#define CEverQuest__DropHeldItemOnGround_x                         0x5F52C0
#define CEverQuest__dsp_chat_x                                     0x4E9E10
#define CEverQuest__trimName_x                                     0x619B50
#define CEverQuest__Emote_x                                        0x60E830
#define CEverQuest__EnterZone_x                                    0x6088C0
#define CEverQuest__GetBodyTypeDesc_x                              0x6130F0
#define CEverQuest__GetClassDesc_x                                 0x613730
#define CEverQuest__GetClassThreeLetterCode_x                      0x613D30
#define CEverQuest__GetDeityDesc_x                                 0x61C190
#define CEverQuest__GetLangDesc_x                                  0x613EF0
#define CEverQuest__GetRaceDesc_x                                  0x613710
#define CEverQuest__InterpretCmd_x                                 0x61C760
#define CEverQuest__LeftClickedOnPlayer_x                          0x5F9450
#define CEverQuest__LMouseUp_x                                     0x5F77E0
#define CEverQuest__RightClickedOnPlayer_x                         0x5F9D30
#define CEverQuest__RMouseUp_x                                     0x5F8760
#define CEverQuest__SetGameState_x                                 0x5F5050
#define CEverQuest__UPCNotificationFlush_x                         0x619A50
#define CEverQuest__IssuePetCommand_x                              0x6152F0
#define CEverQuest__ReportSuccessfulHeal_x                         0x60F550
#define CEverQuest__ReportSuccessfulHit_x                          0x60FB80

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x73C620
#define CGaugeWnd__CalcLinesFillRect_x                             0x73C680
#define CGaugeWnd__Draw_x                                          0x73BCA0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4AFD30
#define CGuild__GetGuildName_x                                     0x4AE7E0
#define CGuild__GetGuildIndex_x                                    0x4AEDE0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x756900

//CHotButton
#define CHotButton__SetButtonSize_x                                0x62F1E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x7638D0
#define CInvSlotMgr__MoveItem_x                                    0x762640
#define CInvSlotMgr__SelectSlot_x                                  0x7639A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x760E70
#define CInvSlot__SliderComplete_x                                 0x75EBE0
#define CInvSlot__GetItemBase_x                                    0x75E570
#define CInvSlot__UpdateItem_x                                     0x75E6E0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x765430
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7645C0
#define CInvSlotWnd__HandleLButtonUp_x                             0x764FB0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x81FAC0
#define CItemDisplayWnd__UpdateStrings_x                           0x773AA0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x76D770
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x76DC90
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x774090
#define CItemDisplayWnd__AboutToShow_x                             0x7736F0
#define CItemDisplayWnd__WndNotification_x                         0x7751B0
#define CItemDisplayWnd__RequestConvertItem_x                      0x774C30
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x772750
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x773510

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x858700

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7796B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x51A800

// CLabel
#define CLabel__Draw_x                                             0x77F0D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x937B30
#define CListWnd__dCListWnd_x                                      0x937E50
#define CListWnd__vftable_x                                        0xB567A0
#define CListWnd__AddColumn_x                                      0x93C2B0
#define CListWnd__AddColumn1_x                                     0x93C300
#define CListWnd__AddLine_x                                        0x93C690
#define CListWnd__AddString_x                                      0x93C490
#define CListWnd__CalculateFirstVisibleLine_x                      0x93C070
#define CListWnd__CalculateVSBRange_x                              0x93BE50
#define CListWnd__ClearSel_x                                       0x93CE70
#define CListWnd__ClearAllSel_x                                    0x93CED0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x93D8D0
#define CListWnd__Compare_x                                        0x93B790
#define CListWnd__Draw_x                                           0x937F80
#define CListWnd__DrawColumnSeparators_x                           0x93A760
#define CListWnd__DrawHeader_x                                     0x93ABD0
#define CListWnd__DrawItem_x                                       0x93B0D0
#define CListWnd__DrawLine_x                                       0x93A8D0
#define CListWnd__DrawSeparator_x                                  0x93A800
#define CListWnd__EnableLine_x                                     0x93A040
#define CListWnd__EnsureVisible_x                                  0x93D800
#define CListWnd__ExtendSel_x                                      0x93CDA0
#define CListWnd__GetColumnTooltip_x                               0x939B80
#define CListWnd__GetColumnMinWidth_x                              0x939BF0
#define CListWnd__GetColumnWidth_x                                 0x939AF0
#define CListWnd__GetCurSel_x                                      0x939480
#define CListWnd__GetItemAtPoint_x                                 0x93A2B0
#define CListWnd__GetItemAtPoint1_x                                0x93A320
#define CListWnd__GetItemData_x                                    0x939500
#define CListWnd__GetItemHeight_x                                  0x9398C0
#define CListWnd__GetItemIcon_x                                    0x939690
#define CListWnd__GetItemRect_x                                    0x93A130
#define CListWnd__GetItemText_x                                    0x939540
#define CListWnd__GetSelList_x                                     0x93CF20
#define CListWnd__GetSeparatorRect_x                               0x93A560
#define CListWnd__InsertLine_x                                     0x93CA80
#define CListWnd__RemoveLine_x                                     0x93CBD0
#define CListWnd__SetColors_x                                      0x93BE30
#define CListWnd__SetColumnJustification_x                         0x93BB60
#define CListWnd__SetColumnLabel_x                                 0x93C430
#define CListWnd__SetColumnWidth_x                                 0x93BA80
#define CListWnd__SetCurSel_x                                      0x93CCE0
#define CListWnd__SetItemColor_x                                   0x93D4C0
#define CListWnd__SetItemData_x                                    0x93D480
#define CListWnd__SetItemText_x                                    0x93D090
#define CListWnd__ShiftColumnSeparator_x                           0x93BC20
#define CListWnd__Sort_x                                           0x93B910
#define CListWnd__ToggleSel_x                                      0x93CD10
#define CListWnd__SetColumnsSizable_x                              0x93BCD0
#define CListWnd__SetItemWnd_x                                     0x93D340
#define CListWnd__GetItemWnd_x                                     0x9396E0
#define CListWnd__SetItemIcon_x                                    0x93D110
#define CListWnd__CalculateCustomWindowPositions_x                 0x93C170
#define CListWnd__SetVScrollPos_x                                  0x93BA60

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x794880

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x78FD70
#define MapViewMap__dMapViewMap_x                                  0x78FEC0
#define MapViewMap__vftable_x                                      0xB2CC48
#define MapViewMap__Clear_x                                        0x7906F0
#define MapViewMap__SaveEx_x                                       0x793AB0
#define MapViewMap__SetZoom_x                                      0x798170
#define MapViewMap__HandleLButtonDown_x                            0x78FFD0
#define MapViewMap__GetWorldCoordinates_x                          0x792F90

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7B4B60
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7B5440
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7B5970
#define CMerchantWnd__SelectRecoverySlot_x                         0x7B88F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7B36E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7BE4A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7B4780

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8BBA90
#define CPacketScrambler__hton_x                                   0x8BBA80

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x95AF10
#define CSidlManagerBase__CreatePageWnd_x                          0x95A700
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x956980
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x956910
#define CSidlManagerBase__FindAnimation1_x                         0x956B60
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x956F70
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x956D60
#define CSidlManagerBase__CreateLabel_x                            0x816C90
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x959ED0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x95A0B0
#define CSidlManagerBase__CreateXWnd_x                             0x816BC0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x817190

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x953640
#define CSidlScreenWnd__CalculateVSBRange_x                        0x953540
#define CSidlScreenWnd__ConvertToRes_x                             0x97C770
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x952FD0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x952CC0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x952D90
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x952E60
#define CSidlScreenWnd__DrawSidlPiece_x                            0x953AE0
#define CSidlScreenWnd__EnableIniStorage_x                         0x953FB0
#define CSidlScreenWnd__GetChildItem_x                             0x953F30
#define CSidlScreenWnd__GetSidlPiece_x                             0x953CD0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x943660
#define CSidlScreenWnd__Init1_x                                    0x9528C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x954000
#define CSidlScreenWnd__LoadIniListWnd_x                           0x954B40
#define CSidlScreenWnd__LoadSidlScreen_x                           0x951CD0
#define CSidlScreenWnd__m_layoutCopy_x                             0x1604AE8
#define CSidlScreenWnd__StoreIniInfo_x                             0x9546C0
#define CSidlScreenWnd__StoreIniVis_x                              0x954A20
#define CSidlScreenWnd__vftable_x                                  0xB57158
#define CSidlScreenWnd__WndNotification_x                          0x9539F0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x693F10
#define CSkillMgr__GetSkillCap_x                                   0x6940F0
#define CSkillMgr__GetNameToken_x                                  0x693690
#define CSkillMgr__IsActivatedSkill_x                              0x6937D0
#define CSkillMgr__IsCombatSkill_x                                 0x693710

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x963880
#define CSliderWnd__SetValue_x                                     0x9636F0
#define CSliderWnd__SetNumTicks_x                                  0x963750

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x81CDD0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x96C070
#define CStmlWnd__CalculateHSBRange_x                              0x96D150
#define CStmlWnd__CalculateVSBRange_x                              0x96D0C0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9714A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x972130
#define CStmlWnd__ForceParseNow_x                                  0x96C610
#define CStmlWnd__GetNextTagPiece_x                                0x971400
#define CStmlWnd__GetSTMLText_x                                    0x50A0A0
#define CStmlWnd__GetVisibleText_x                                 0x96C630
#define CStmlWnd__InitializeWindowVariables_x                      0x971F80
#define CStmlWnd__MakeStmlColorTag_x                               0x96B6E0
#define CStmlWnd__MakeWndNotificationTag_x                         0x96B750
#define CStmlWnd__SetSTMLText_x                                    0x96A790
#define CStmlWnd__StripFirstSTMLLines_x                            0x973230
#define CStmlWnd__UpdateHistoryString_x                            0x972340

// CTabWnd
#define CTabWnd__Draw_x                                            0x9698E0
#define CTabWnd__DrawCurrentPage_x                                 0x96A010
#define CTabWnd__DrawTab_x                                         0x969D30
#define CTabWnd__GetCurrentPage_x                                  0x9690E0
#define CTabWnd__GetCurrentTabIndex_x                              0x9690D0
#define CTabWnd__GetPageFromTabIndex_x                             0x969C70
#define CTabWnd__GetPageInnerRect_x                                0x969320
#define CTabWnd__GetTabInnerRect_x                                 0x969260
#define CTabWnd__GetTabRect_x                                      0x969110
#define CTabWnd__InsertPage_x                                      0x969530
#define CTabWnd__RemovePage_x                                      0x9696A0
#define CTabWnd__SetPage_x                                         0x9693A0
#define CTabWnd__SetPageRect_x                                     0x969820
#define CTabWnd__UpdatePage_x                                      0x969BF0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x968C90
#define CPageWnd__GetTabText_x                                     0x779AC0
#define CPageWnd__SetTabText_x                                     0x968C30


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A8FE0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x940520
#define CTextureFont__DrawWrappedText1_x                           0x940450
#define CTextureFont__DrawWrappedText2_x                           0x940570
#define CTextureFont__GetTextExtent_x                              0x9406E0

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x6C72E0
#define CHtmlComponentWnd__ValidateUri_x                           0x7582F0
#define CHtmlWnd__SetClientCallbacks_x                             0x634250
#define CHtmlWnd__AddObserver_x                                    0x634270
#define CHtmlWnd__RemoveObserver_x                                 0x6342D0
#define Window__getProgress_x                                      0x870BF0
#define Window__getStatus_x                                        0x870C10
#define Window__getURI_x                                           0x870C20

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x979580

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x92D700

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E9300
#define CXStr__CXStr1_x                                            0xA04A50
#define CXStr__CXStr3_x                                            0x90ED80
#define CXStr__dCXStr_x                                            0x478820
#define CXStr__operator_equal_x                                    0x90EFB0
#define CXStr__operator_equal1_x                                   0x90EFF0
#define CXStr__operator_plus_equal1_x                              0x90FA80
#define CXStr__SetString_x                                         0x911970
#define CXStr__operator_char_p_x                                   0x90F4C0
#define CXStr__GetChar_x                                           0x9112A0
#define CXStr__Delete_x                                            0x910B70
#define CXStr__GetUnicode_x                                        0x911310
#define CXStr__GetLength_x                                         0x4A8D90
#define CXStr__Mid_x                                               0x47D520
#define CXStr__Insert_x                                            0x911370
#define CXStr__FindNext_x                                          0x910FE0
#define CXStr__gFreeLists_x                                        0xCB2598
#define CXStr__gCXStrAccess_x                                      0x160420C

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x961B20

// CXWnd
#define CXWnd__BringToTop_x                                        0x946E10
#define CXWnd__Center_x                                            0x946990
#define CXWnd__ClrFocus_x                                          0x9467B0
#define CXWnd__Destroy_x                                           0x946850
#define CXWnd__DoAllDrawing_x                                      0x942DF0
#define CXWnd__DrawChildren_x                                      0x942DC0
#define CXWnd__DrawColoredRect_x                                   0x943250
#define CXWnd__DrawTooltip_x                                       0x941930
#define CXWnd__DrawTooltipAtPoint_x                                0x9419F0
#define CXWnd__GetBorderFrame_x                                    0x9430B0
#define CXWnd__GetChildItem_x                                      0x947020
#define CXWnd__GetChildWndAt_x                                     0x946EB0
#define CXWnd__GetClientClipRect_x                                 0x9450C0
#define CXWnd__GetRelativeRect_x                                   0x9453F0
#define CXWnd__GetScreenClipRect_x                                 0x945190
#define CXWnd__GetScreenRect_x                                     0x945330
#define CXWnd__GetTooltipRect_x                                    0x9432A0
#define CXWnd__GetWindowTextA_x                                    0x49CC30
#define CXWnd__IsActive_x                                          0x9439E0
#define CXWnd__IsDescendantOf_x                                    0x945D30
#define CXWnd__IsReallyVisible_x                                   0x945D60
#define CXWnd__IsType_x                                            0x947520
#define CXWnd__Minimize_x                                          0x946440
#define CXWnd__Move_x                                              0x945DC0
#define CXWnd__Move1_x                                             0x945E70
#define CXWnd__ProcessTransition_x                                 0x946940
#define CXWnd__Refade_x                                            0x946140
#define CXWnd__Resize_x                                            0x9463D0
#define CXWnd__Right_x                                             0x946BD0
#define CXWnd__SetFocus_x                                          0x946770
#define CXWnd__SetFont_x                                           0x9467E0
#define CXWnd__SetKeyTooltip_x                                     0x947340
#define CXWnd__SetMouseOver_x                                      0x944210
#define CXWnd__SetParent_x                                         0x945AD0
#define CXWnd__StartFade_x                                         0x945C10
#define CXWnd__vftable_x                                           0xB56BE4
#define CXWnd__CXWnd_x                                             0x940A00
#define CXWnd__dCXWnd_x                                            0x940F20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x97D7F0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x949D50
#define CXWndManager__DrawWindows_x                                0x949D70
#define CXWndManager__GetKeyboardFlags_x                           0x94C550
#define CXWndManager__HandleKeyboardMsg_x                          0x94C100
#define CXWndManager__RemoveWnd_x                                  0x94C780
#define CXWndManager__RemovePendingDeletionWnd_x                   0x94CD00

// CDBStr
#define CDBStr__GetString_x                                        0x543A60

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4DA8C0
#define CharacterZoneClient__CastSpell_x                           0x4BCD30
#define CharacterZoneClient__Cur_HP_x                              0x4D2EC0
#define CharacterZoneClient__Cur_Mana_x                            0x4DA5B0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D5C40
#define CharacterZoneClient__GetBaseSkill_x                        0x4D6BE0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4BFD70
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E0950
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B36D0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B3820
#define CharacterZoneClient__GetHPRegen_x                          0x4E0350
#define CharacterZoneClient__GetManaRegen_x                        0x4E0D90
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C0AC0
#define CharacterZoneClient__Max_Endurance_x                       0x65AA90
#define CharacterZoneClient__Max_HP_x                              0x4D2CF0
#define CharacterZoneClient__Max_Mana_x                            0x65A890
#define CharacterZoneClient__SpellDuration_x                       0x4C05F0
#define CharacterZoneClient__TotalEffect_x                         0x4C60E0
#define CharacterZoneClient__UseSkill_x                            0x4E2B70

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8DAE70

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x670E40

// PcClient
#define PcClient__PcClient_x                                       0x650A60
#define PcClient__GetConLevel_x                                    0x6532F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BA900
#define CCharacterListWnd__EnterWorld_x                            0x4BA2E0
#define CCharacterListWnd__Quit_x                                  0x4BA030
#define CCharacterListWnd__UpdateList_x                            0x4BA4D0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x635440
#define EQ_Item__CreateItemTagString_x                             0x8B50B0
#define EQ_Item__IsStackable_x                                     0x8B9CE0
#define EQ_Item__GetImageNum_x                                     0x8B6C00
#define EQ_Item__CreateItemClient_x                                0x634670
#define EQ_Item__GetItemValue_x                                    0x8B7F00
#define EQ_Item__ValueSellMerchant_x                               0x8BB670
#define EQ_Item__IsKeyRingItem_x                                   0x8B9600
#define EQ_Item__CanGoInBag_x                                      0x635560
#define EQ_Item__IsEmpty_x                                         0x8B9150
#define EQ_Item__GetMaxItemCount_x                                 0x8B8310
#define EQ_Item__GetHeldItem_x                                     0x8B6AD0
#define EQ_Item__GetAugmentFitBySlot_x                             0x8B4A00
#define ItemClient__ItemClient_x                                   0x5B4C50
#define ItemClient__dItemClient_x                                  0x6345C0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x562500
#define EQ_LoadingS__Array_x                                       0xC3BC60

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8C4AB0
#define EQ_PC__GetCombatAbility_x                                  0x8C5120
#define EQ_PC__GetCombatAbilityTimer_x                             0x8C5190
#define EQ_PC__GetItemRecastTimer_x                                0x65D430
#define EQ_PC__HasLoreItem_x                                       0x653AB0
#define EQ_PC__AlertInventoryChanged_x                             0x652C30
#define EQ_PC__GetPcZoneClient_x                                   0x67F960
#define EQ_PC__RemoveMyAffect_x                                    0x660660
#define EQ_PC__GetKeyRingItems_x                                   0x8C5A20
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8C57B0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8C5D20

// EQItemList
#define EQItemList__EQItemList_x                                   0x5BCED0
#define EQItemList__add_object_x                                   0x5EAAA0
#define EQItemList__add_item_x                                     0x5BD430
#define EQItemList__delete_item_x                                  0x5BD480
#define EQItemList__FreeItemList_x                                 0x5BD380

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5404E0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x6726C0
#define EQPlayer__dEQPlayer_x                                      0x665B80
#define EQPlayer__DoAttack_x                                       0x67A620
#define EQPlayer__EQPlayer_x                                       0x666240
#define EQPlayer__SetNameSpriteState_x                             0x66A4C0
#define EQPlayer__SetNameSpriteTint_x                              0x66B3A0
#define PlayerBase__HasProperty_j_x                                0x9AC630
#define EQPlayer__IsTargetable_x                                   0x9ACAD0
#define EQPlayer__CanSee_x                                         0x9AC930
#define EQPlayer__CanSee1_x                                        0x9ACA00
#define PlayerBase__GetVisibilityLineSegment_x                     0x9AC6F0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x67D400
#define PlayerZoneClient__GetLevel_x                               0x67F9A0
#define PlayerZoneClient__IsValidTeleport_x                        0x5EBC10
#define PlayerZoneClient__LegalPlayerRace_x                        0x55B310

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x675510
#define EQPlayerManager__GetSpawnByName_x                          0x6755C0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x675650

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x638AB0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x638B30
#define KeypressHandler__AttachKeyToEqCommand_x                    0x638B70
#define KeypressHandler__ClearCommandStateArray_x                  0x639F80
#define KeypressHandler__HandleKeyDown_x                           0x639FA0
#define KeypressHandler__HandleKeyUp_x                             0x63A040
#define KeypressHandler__SaveKeymapping_x                          0x63A490

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8D8E90

// StringTable
#define StringTable__getString_x                                   0x8D3CF0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x65CEB0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x65B3D0
#define PcZoneClient__GetPcSkillLimit_x                            0x6602D0
#define PcZoneClient__RemovePetEffect_x                            0x660900
#define PcZoneClient__HasAlternateAbility_x                        0x65A6C0
#define PcZoneClient__CanEquipItem_x                               0x65AD70
#define PcZoneClient__GetItemByID_x                                0x65D8A0
#define PcZoneClient__GetItemByItemClass_x                         0x65D9F0
#define PcZoneClient__RemoveBuffEffect_x                           0x660920
#define PcZoneClient__BandolierSwap_x                              0x65B980
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x65D3D0

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F07A0

// IconCache
#define IconCache__GetIcon_x                                       0x731DA0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7298C0
#define CContainerMgr__CloseContainer_x                            0x729B90
#define CContainerMgr__OpenExperimentContainer_x                   0x72A610

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7E8EE0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x62D600

// CLootWnd
#define CLootWnd__LootAll_x                                        0x786BC0
#define CLootWnd__RequestLootSlot_x                                0x785DF0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x589030
#define EQ_Spell__SpellAffects_x                                   0x5894A0
#define EQ_Spell__SpellAffectBase_x                                0x589260
#define EQ_Spell__IsStackable_x                                    0x4CA910
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4CA730
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B7BC0
#define EQ_Spell__IsSPAStacking_x                                  0x58A2F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x589800
#define EQ_Spell__IsNoRemove_x                                     0x4CA8F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58A300
#define __IsResEffectSpell_x                                       0x4C9B40

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4AD260

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8E34C0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x830230
#define CTargetWnd__WndNotification_x                              0x82FA70
#define CTargetWnd__RefreshTargetBuffs_x                           0x82FD40
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x82EBD0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x834870
#define CTaskWnd__ConfirmAbandonTask_x                             0x8374B0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x53DF10
#define CTaskManager__HandleMessage_x                              0x53C3A0
#define CTaskManager__GetTaskStatus_x                              0x53DFC0
#define CTaskManager__GetElementDescription_x                      0x53E040

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x584250
#define EqSoundManager__PlayScriptMp3_x                            0x584510
#define EqSoundManager__SoundAssistPlay_x                          0x697E40
#define EqSoundManager__WaveInstancePlay_x                         0x6973B0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x52F500

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x968340
#define CTextureAnimation__SetCurCell_x                            0x968140

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56A080
#define CAltAbilityData__GetMercMaxRank_x                          0x56A010
#define CAltAbilityData__GetMaxRank_x                              0x55F450

// CTargetRing
#define CTargetRing__Cast_x                                        0x62B720

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x516D90
#define CharacterBase__CreateItemIndex_x                           0x633800
#define CharacterBase__GetItemByGlobalIndex_x                      0x8EBB30
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8EBB90
#define CharacterBase__GetItemPossession_x                         0x502940
#define CharacterBase__GetMemorizedSpell_x                         0x4CA710
#define CharacterBase__IsExpansionFlag_x                           0x5B6980

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x710920
#define CCastSpellWnd__IsBardSongPlaying_x                         0x711150
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x711200

// messages
#define msg_spell_worn_off_x                                       0x5AE910
#define msg_new_text_x                                             0x5A3330
#define __msgTokenTextParam_x                                      0x5B0BB0
#define msgTokenText_x                                             0x5B0E00

// SpellManager
#define SpellManager__vftable_x                                    0xAFF168
#define SpellManager__SpellManager_x                               0x69B160
#define Spellmanager__LoadTextSpells_x                             0x69BA50
#define SpellManager__GetSpellByGroupAndRank_x                     0x69B330

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9B0560

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8E3E60
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8E40E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x77F410

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x72DFA0
#define CCursorAttachment__AttachToCursor1_x                       0x72DFE0
#define CCursorAttachment__Deactivate_x                            0x72EFD0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x977D80
#define CEQSuiteTextureLoader__GetTexture_x                        0x977A40

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x514330
#define CFindItemWnd__WndNotification_x                            0x514E10
#define CFindItemWnd__Update_x                                     0x515980
#define CFindItemWnd__PickupSelectedItem_x                         0x513B70

// IString
#define IString__Append_x                                          0x504230

// Camera
#define CDisplay__cameraType_x                                     0xE15328
#define EverQuest__Cameras_x                                       0xED05C4

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x51CB90
#define LootFiltersManager__GetItemFilterData_x                    0x51C4A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51C4D0
#define LootFiltersManager__SetItemLootFilter_x                    0x51C6F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7D6CF0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9B61E0
#define CResolutionHandler__GetWindowedStyle_x                     0x692860

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x726500

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8F93F0
#define CDistillerInfo__Instance_x                                 0x8F9390

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7455E0
#define CGroupWnd__UpdateDisplay_x                                 0x744940

// ItemBase
#define ItemBase__IsLore_x                                         0x8B96B0
#define ItemBase__IsLoreEquipped_x                                 0x8B9720

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5EAA00
#define EQPlacedItemManager__GetItemByGuid_x                       0x5EAB40
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5EABA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x688070
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x68B9E0

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50A6B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F6CD0
#define FactionManagerClient__HandleFactionMessage_x               0x4F7340
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4F7940
#define FactionManagerClient__GetMaxFaction_x                      0x4F795F
#define FactionManagerClient__GetMinFaction_x                      0x4F7910

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x502910

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x93F570

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49BF40

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x502C40

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x569540

// CTargetManager
#define CTargetManager__Get_x                                      0x69E980

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x688070

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A8DA0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5BD320

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF6DC58

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x929E50

//
// EQGraphicsDX9.dll offsets (maybe this should go in eqgraphics.h?)
//

#define __eqgraphics_fopen_x                                       0x10147468
#define CParticleSystem__Render_x                                  0x10071190
