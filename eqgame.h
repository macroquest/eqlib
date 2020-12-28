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
#define __ExpectedVersionDate                                     "Dec  5 2020"
#define __ExpectedVersionTime                                     "00:41:50"
#define __ActualVersionDate_x                                      0xAF6560
#define __ActualVersionTime_x                                      0xAF6554
#define __ActualVersionBuild_x                                     0xAE4574

// Memory Protection
#define __MemChecker0_x                                            0x644470
#define __MemChecker1_x                                            0x8F7DB0
#define __MemChecker2_x                                            0x6B4E00
#define __MemChecker3_x                                            0x6B4D50
#define __MemChecker4_x                                            0x84E390
#define __EncryptPad0_x                                            0xC2C9C8
#define __EncryptPad1_x                                            0xC8A210
#define __EncryptPad2_x                                            0xC3CD90
#define __EncryptPad3_x                                            0xC3C990
#define __EncryptPad4_x                                            0xC7A7A0
#define __EncryptPad5_x                                            0xF4D0F0
#define __AC1_x                                                    0x80CD96
#define __AC2_x                                                    0x5FD9FF
#define __AC3_x                                                    0x605050
#define __AC4_x                                                    0x609000
#define __AC5_x                                                    0x60F2FF
#define __AC6_x                                                    0x6137B6
#define __AC7_x                                                    0x5FD470
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x1912E0

// Direct Input
#define DI8__Main_x                                                0xF4D118
#define DI8__Keyboard_x                                            0xF4D11C
#define DI8__Mouse_x                                               0xF4D0FC
#define DI8__Mouse_Copy_x                                          0xEA59E4
#define DI8__Mouse_Check_x                                         0xF4AC44
#define __AutoSkillArray_x                                         0xEA6900
#define __Attack_x                                                 0xF4472F
#define __Autofire_x                                               0xF44730
#define __BindList_x                                               0xC1B400
#define g_eqCommandStates_x                                        0xC1C180
#define __Clicks_x                                                 0xEA5A9C
#define __CommandList_x                                            0xC1CD40
#define __CurrentMapLabel_x                                        0xF5D14C
#define __CurrentSocial_x                                          0xC047D4
#define __DoAbilityList_x                                          0xEDC250
#define __do_loot_x                                                0x5C9440
#define __DrawHandler_x                                            0x15DC140
#define __GroupCount_x                                             0xE9E502
#define __Guilds_x                                                 0xEA4920
#define __gWorld_x                                                 0xE9EC98
#define __HWnd_x                                                   0xF4D100
#define __heqmain_x                                                0xF4D0D8
#define __InChatMode_x                                             0xEA59CC
#define __LastTell_x                                               0xEA794C
#define __LMouseHeldTime_x                                         0xEA5B08
#define __Mouse_x                                                  0xF4D104
#define __MouseLook_x                                              0xEA5A62
#define __MouseEventTime_x                                         0xF45214
#define __gpbCommandEvent_x                                        0xE9E758
#define __NetStatusToggle_x                                        0xEA5A65
#define __PCNames_x                                                0xEA6EFC
#define __RangeAttackReady_x                                       0xEA6BE4
#define __RMouseHeldTime_x                                         0xEA5B04
#define __RunWalkState_x                                           0xEA59D0
#define __ScreenMode_x                                             0xDEC4B0
#define __ScreenX_x                                                0xEA5984
#define __ScreenY_x                                                0xEA5980
#define __ScreenXMax_x                                             0xEA5988
#define __ScreenYMax_x                                             0xEA598C
#define __ServerHost_x                                             0xE9E92B
#define __ServerName_x                                             0xEDC210
#define __ShiftKeyDown_x                                           0xEA6060
#define __ShowNames_x                                              0xEA6DA0
#define __SocialChangedList_x                                      0xEDC298
#define __Socials_x                                                0xEDC310
#define __SubscriptionType_x                                       0xFA1410
#define __TargetAggroHolder_x                                      0xF5FB00
#define __ZoneType_x                                               0xEA5E60
#define __GroupAggro_x                                             0xF5FB40
#define __LoginName_x                                              0xF4A8D4
#define __Inviter_x                                                0xF446AC
#define __AttackOnAssist_x                                         0xEA6D5C
#define __UseTellWindows_x                                         0xEA7094
#define __gfMaxZoomCameraDistance_x                                0xAEE170
#define __gfMaxCameraDistance_x                                    0xB16E00
#define __pulAutoRun_x                                             0xEA5A80
#define __pulForward_x                                             0xEA70CC
#define __pulBackward_x                                            0xEA70D0
#define __pulTurnRight_x                                           0xEA70D4
#define __pulTurnLeft_x                                            0xEA70D8
#define __pulStrafeLeft_x                                          0xEA70DC
#define __pulStrafeRight_x                                         0xEA70E0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xEA0CB8
#define instEQZoneInfo_x                                           0xEA5C58
#define pinstActiveBanker_x                                        0xE9EC44
#define pinstActiveCorpse_x                                        0xE9EC3C
#define pinstActiveGMaster_x                                       0xE9EC40
#define pinstActiveMerchant_x                                      0xE9EA34
#define pinstAltAdvManager_x                                       0xDECEF0
#define pinstBandageTarget_x                                       0xE9EC54
#define pinstCamActor_x                                            0xDEC4A4
#define pinstCDBStr_x                                              0xDEBC0C
#define pinstCDisplay_x                                            0xE9ECA4
#define pinstCEverQuest_x                                          0xF4A19C
#define pinstEverQuestInfo_x                                       0xEA5978
#define pinstCharData_x                                            0xE9E744
#define pinstCharSpawn_x                                           0xE9EC8C
#define pinstControlledMissile_x                                   0xE9ECA0
#define pinstControlledPlayer_x                                    0xE9EC8C
#define pinstCResolutionHandler_x                                  0x15DC370
#define pinstCSidlManager_x                                        0x15DB308
#define pinstCXWndManager_x                                        0x15DB304
#define instDynamicZone_x                                          0xEA47F8
#define pinstDZMember_x                                            0xEA4908
#define pinstDZTimerInfo_x                                         0xEA490C
#define pinstEqLogin_x                                             0xF4A220
#define instEQMisc_x                                               0xDEBB50
#define pinstEQSoundManager_x                                      0xDEDEC0
#define pinstEQSpellStrings_x                                      0xCAE448
#define instExpeditionLeader_x                                     0xEA4842
#define instExpeditionName_x                                       0xEA4882
#define pinstSGraphicsEngine_x                                     0x15DC134
#define pinstGroup_x                                               0xE9E4FE
#define pinstImeManager_x                                          0x15DB300
#define pinstLocalPlayer_x                                         0xE9E824
#define pinstMercenaryData_x                                       0xF46D08
#define pinstMercenaryStats_x                                      0xF5FBCC
#define pinstModelPlayer_x                                         0xE9EC4C
#define pinstPCData_x                                              0xE9E744
#define pinstSkillMgr_x                                            0xF48E68
#define pinstSpawnManager_x                                        0xF47910
#define pinstSpellManager_x                                        0xF490A8
#define pinstSpellSets_x                                           0xF3D358
#define pinstStringTable_x                                         0xE9E74C
#define pinstSwitchManager_x                                       0xE9E258
#define pinstTarget_x                                              0xE9EC88
#define pinstTargetObject_x                                        0xE9EC94
#define pinstTargetSwitch_x                                        0xE9ECAC
#define pinstTaskMember_x                                          0xDEB9E0
#define pinstTrackTarget_x                                         0xE9EC90
#define pinstTradeTarget_x                                         0xE9EC48
#define instTributeActive_x                                        0xDEBB71
#define pinstViewActor_x                                           0xDEC4A0
#define pinstWorldData_x                                           0xE9E3A8
#define pinstZoneAddr_x                                            0xEA5EF8
#define pinstPlayerPath_x                                          0xF479A8
#define pinstTargetIndicator_x                                     0xF49310
#define EQObject_Top_x                                             0xE9E820

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xDEBF44
#define pinstCAchievementsWnd_x                                    0xDEC45C
#define pinstCActionsWnd_x                                         0xDEBF80
#define pinstCAdvancedDisplayOptionsWindow_x                       0xDEC51C
#define pinstCAdvancedLootWnd_x                                    0xDEC4CC
#define pinstCAdventureLeaderboardWnd_x                            0xF56920
#define pinstCAdventureRequestWnd_x                                0xF569D0
#define pinstCAdventureStatsWnd_x                                  0xF56A80
#define pinstCAggroMeterWnd_x                                      0xDEC500
#define pinstCAlarmWnd_x                                           0xDEC488
#define pinstCAlertHistoryWnd_x                                    0xDEBEF4
#define pinstCAlertStackWnd_x                                      0xDEC4E8
#define pinstCAlertWnd_x                                           0xDEC4FC
#define pinstCAltStorageWnd_x                                      0xF56DE0
#define pinstCAudioTriggersWindow_x                                0xCA0778
#define pinstCAuraWnd_x                                            0xDEC4D0
#define pinstCAvaZoneWnd_x                                         0xDEBEF8
#define pinstCBandolierWnd_x                                       0xDEC514
#define pinstCBankWnd_x                                            0xDEBCB8
#define pinstCBarterMerchantWnd_x                                  0xF58020
#define pinstCBarterSearchWnd_x                                    0xF580D0
#define pinstCBarterWnd_x                                          0xF58180
#define pinstCBazaarConfirmationWnd_x                              0xDEC498
#define pinstCBazaarSearchWnd_x                                    0xDEBF48
#define pinstCBazaarWnd_x                                          0xDEC464
#define pinstCBlockedBuffWnd_x                                     0xDEC4DC
#define pinstCBlockedPetBuffWnd_x                                  0xDEC504
#define pinstCBodyTintWnd_x                                        0xDEC40C
#define pinstCBookWnd_x                                            0xDEBCAC
#define pinstCBreathWnd_x                                          0xDEBF58
#define pinstCBuffWindowNORMAL_x                                   0xDEC4C4
#define pinstCBuffWindowSHORT_x                                    0xDEC4C8
#define pinstCBugReportWnd_x                                       0xDEBCB4
#define pinstCButtonWnd_x                                          0x15DB570
#define pinstCCastingWnd_x                                         0xDEC540
#define pinstCCastSpellWnd_x                                       0xDEBF54
#define pinstCCharacterListWnd_x                                   0xDEC418
#define pinstCChatWindowManager_x                                  0xF58C40
#define pinstCClaimWnd_x                                           0xF58D98
#define pinstCColorPickerWnd_x                                     0xDEBF0C
#define pinstCCombatAbilityWnd_x                                   0xDEC478
#define pinstCCombatSkillsSelectWnd_x                              0xDEC42C
#define pinstCCompassWnd_x                                         0xDEBF84
#define pinstCConfirmationDialog_x                                 0xF5DC98
#define pinstCContainerMgr_x                                       0xDEC408
#define pinstCContextMenuManager_x                                 0x15DB2C0
#define pinstCCursorAttachment_x                                   0xDEC534
#define pinstCDynamicZoneWnd_x                                     0xF59360
#define pinstCEditLabelWnd_x                                       0xDEC4C0
#define pinstCEQMainWnd_x                                          0xF595A8
#define pinstCEventCalendarWnd_x                                   0xDEBF4C
#define pinstCExtendedTargetWnd_x                                  0xDEC4E0
#define pinstCPlayerCustomizationWnd_x                             0xDEC430
#define pinstCFactionWnd_x                                         0xDEC450
#define pinstCFellowshipWnd_x                                      0xF597A8
#define pinstCFileSelectionWnd_x                                   0xDEBF08
#define pinstCFindItemWnd_x                                        0xDEC444
#define pinstCFindLocationWnd_x                                    0xF59900
#define pinstCFriendsWnd_x                                         0xDEC440
#define pinstCGemsGameWnd_x                                        0xDEC44C
#define pinstCGiveWnd_x                                            0xDEC48C
#define pinstCGroupSearchFiltersWnd_x                              0xDEC518
#define pinstCGroupSearchWnd_x                                     0xF59CF8
#define pinstCGroupWnd_x                                           0xF59DA8
#define pinstCGuildBankWnd_x                                       0xF59E58
#define pinstCGuildCreationWnd_x                                   0xF59F08
#define pinstCGuildMgmtWnd_x                                       0xF59FB8
#define pinstCharacterCreation_x                                   0xDEC438
#define pinstCHelpWnd_x                                            0xDEC484
#define pinstCHeritageSelectionWnd_x                               0xDEC43C
#define pinstCHotButtonWnd_x                                       0xF5C110
#define pinstCHotButtonWnd1_x                                      0xF5C110
#define pinstCHotButtonWnd2_x                                      0xF5C114
#define pinstCHotButtonWnd3_x                                      0xF5C118
#define pinstCHotButtonWnd4_x                                      0xF5C11C
#define pinstCIconSelectionWnd_x                                   0xDEC528
#define pinstCInspectWnd_x                                         0xDEC508
#define pinstCInventoryWnd_x                                       0xDEC4D4
#define pinstCInvSlotMgr_x                                         0xDEBF38
#define pinstCItemDisplayManager_x                                 0xF5C6A0
#define pinstCItemExpTransferWnd_x                                 0xF5C7D0
#define pinstCItemOverflowWnd_x                                    0xDEBF50
#define pinstCJournalCatWnd_x                                      0xDEBF24
#define pinstCJournalNPCWnd_x                                      0xDEBEE4
#define pinstCJournalTextWnd_x                                     0xDEBEE4
#define pinstCKeyRingWnd_x                                         0xDEC53C
#define pinstCLargeDialogWnd_x                                     0xF5E918
#define pinstCLayoutCopyWnd_x                                      0xF5CB20
#define pinstCLFGuildWnd_x                                         0xF5CBD0
#define pinstCLoadskinWnd_x                                        0xDEC468
#define pinstCLootFiltersCopyWnd_x                                 0xCBCEE8
#define pinstCLootFiltersWnd_x                                     0xDEC4EC
#define pinstCLootSettingsWnd_x                                    0xDEC510
#define pinstCLootWnd_x                                            0xDEBF28
#define pinstCMailAddressBookWnd_x                                 0xDEBF3C
#define pinstCMailCompositionWnd_x                                 0xDEBF14
#define pinstCMailIgnoreListWnd_x                                  0xDEBF40
#define pinstCMailWnd_x                                            0xDEBF00
#define pinstCManageLootWnd_x                                      0xDED3A0
#define pinstCMapToolbarWnd_x                                      0xDEC490
#define pinstCMapViewWnd_x                                         0xDEC458
#define pinstCMarketplaceWnd_x                                     0xDEC4F0
#define pinstCMerchantWnd_x                                        0xDEBF34
#define pinstCMIZoneSelectWnd_x                                    0xF5D408
#define pinstCMusicPlayerWnd_x                                     0xDEBED4
#define pinstCNameChangeMercWnd_x                                  0xDEC494
#define pinstCNameChangePetWnd_x                                   0xDEC460
#define pinstCNameChangeWnd_x                                      0xDEC4BC
#define pinstCNoteWnd_x                                            0xDEC470
#define pinstCObjectPreviewWnd_x                                   0xDEC50C
#define pinstCOptionsWnd_x                                         0xDEC47C
#define pinstCPetInfoWnd_x                                         0xDEBEFC
#define pinstCPetitionQWnd_x                                       0xDEC428
#define pinstCPlayerNotesWnd_x                                     0xDEC410
#define pinstCPlayerWnd_x                                          0xDEBEF0
#define pinstCPopupWndManager_x                                    0xF5DC98
#define pinstCProgressionSelectionWnd_x                            0xF5DD48
#define pinstCPurchaseGroupWnd_x                                   0xDEBCC8
#define pinstCPurchaseWnd_x                                        0xDEC544
#define pinstCPvPLeaderboardWnd_x                                  0xF5DDF8
#define pinstCPvPStatsWnd_x                                        0xF5DEA8
#define pinstCQuantityWnd_x                                        0xDEBEE0
#define pinstCRaceChangeWnd_x                                      0xDEC4D8
#define pinstCRaidOptionsWnd_x                                     0xDEC520
#define pinstCRaidWnd_x                                            0xDEBF30
#define pinstCRealEstateItemsWnd_x                                 0xDEC454
#define pinstCRealEstateLayoutDetailsWnd_x                         0xDEC000
#define pinstCRealEstateManageWnd_x                                0xDEBED0
#define pinstCRealEstateNeighborhoodWnd_x                          0xDEBEEC
#define pinstCRealEstatePlotSearchWnd_x                            0xDEBF04
#define pinstCRealEstatePurchaseWnd_x                              0xDEBF20
#define pinstCRespawnWnd_x                                         0xDEC4F8
#define pinstCRewardSelectionWnd_x                                 0xF5E5F0
#define pinstCSelectorWnd_x                                        0xDEC424
#define pinstCSendMoneyWnd_x                                       0xDEC49C
#define pinstCServerListWnd_x                                      0xDEBF2C
#define pinstCSkillsSelectWnd_x                                    0xDEC420
#define pinstCSkillsWnd_x                                          0xDEBFFC
#define pinstCSocialEditWnd_x                                      0xDEC538
#define pinstCSocialWnd_x                                          0xDEC480
#define pinstCSpellBookWnd_x                                       0xDEC474
#define pinstCStoryWnd_x                                           0xDEBF7C
#define pinstCTargetOfTargetWnd_x                                  0xF5FC50
#define pinstCTargetWnd_x                                          0xDEC4F4
#define pinstCTaskOverlayWnd_x                                     0xDEBCC0
#define pinstCTaskSelectWnd_x                                      0xF5FDA8
#define pinstCTaskManager_x                                        0xCBD828
#define pinstCTaskTemplateSelectWnd_x                              0xF5FE58
#define pinstCTaskWnd_x                                            0xF5FF08
#define pinstCTextEntryWnd_x                                       0xDEBCA8
#define pinstCTimeLeftWnd_x                                        0xDEC41C
#define pinstCTipWndCONTEXT_x                                      0xF6010C
#define pinstCTipWndOFDAY_x                                        0xF60108
#define pinstCTitleWnd_x                                           0xF601B8
#define pinstCTrackingWnd_x                                        0xDEC4E4
#define pinstCTradeskillWnd_x                                      0xF60320
#define pinstCTradeWnd_x                                           0xDEC414
#define pinstCTrainWnd_x                                           0xDEBF18
#define pinstCTributeBenefitWnd_x                                  0xF60520
#define pinstCTributeMasterWnd_x                                   0xF605D0
#define pinstCTributeTrophyWnd_x                                   0xF60680
#define pinstCVideoModesWnd_x                                      0xDEBCBC
#define pinstCVoiceMacroWnd_x                                      0xF498C8
#define pinstCVoteResultsWnd_x                                     0xDEC448
#define pinstCVoteWnd_x                                            0xDEC434
#define pinstCWebManager_x                                         0xF49F44
#define pinstCZoneGuideWnd_x                                       0xDEBCC4
#define pinstCZonePathWnd_x                                        0xDEBEDC
#define pinstEQSuiteTextureLoader_x                                0xC8AB30
#define pinstItemIconCache_x                                       0xF59560
#define pinstLootFiltersManager_x                                  0xCBCF98
#define pinstRewardSelectionWnd_x                                  0xF5E5F0

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5C4B30
#define __CastRay2_x                                               0x5C4B80
#define __ConvertItemTags_x                                        0x5E0830
#define __CleanItemTags_x                                          0x47D1E0
#define __CreateCascadeMenuItems_x                                 0x55D8A0
#define __DoesFileExist_x                                          0x8FAEE0
#define __EQGetTime_x                                              0x8F79E0
#define __ExecuteCmd_x                                             0x5BD4A0
#define __FixHeading_x                                             0x98C960
#define __FlushDxKeyboard_x                                        0x6B0CA0
#define __GameLoop_x                                               0x6B3FD0
#define __get_bearing_x                                            0x5C4690
#define __get_melee_range_x                                        0x5C4D70
#define __GetAnimationCache_x                                      0x7194B0
#define __GetGaugeValueFromEQ_x                                    0x80B240
#define __GetLabelFromEQ_x                                         0x80CD20
#define __GetXTargetType_x                                         0x98E340
#define __HandleMouseWheel_x                                       0x6B4EB0
#define __HeadingDiff_x                                            0x98C9D0
#define __HelpPath_x                                               0xF44E04
#define __LoadFrontEnd_x                                           0x6B12E0
#define __NewUIINI_x                                               0x80AF10
#define __ProcessGameEvents_x                                      0x625690
#define __ProcessKeyboardEvents_x                                  0x6B2830
#define __ProcessMouseEvents_x                                     0x624E20
#define __SaveColors_x                                             0x55D780
#define __STMLToText_x                                             0x92FB90
#define __WndProc_x                                                0x6B3290
#define CMemoryMappedFile__SetFile_x                               0xA7BBE0
#define CrashDetected_x                                            0x6B2D90
#define DrawNetStatus_x                                            0x651970
#define Expansion_HoT_x                                            0xEA6D48
#define Teleport_Table_Size_x                                      0xE9E7E0
#define Teleport_Table_x                                           0xE9ECB0
#define Util__FastTime_x                                           0x8F75B0
#define __eq_delete_x                                              0x994D6E
#define __eq_new_x                                                 0x995324
#define __CopyLayout_x                                             0x63FB20
#define __ThrottleFrameRate_x                                      0x628E70

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6C11F0
#define CAAWnd__Update_x                                           0x6C0510
#define CAAWnd__UpdateSelected_x                                   0x6BDA60

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x490550
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x499550
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x499320
#define CAdvancedLootWnd__AddPlayerToList_x                        0x493AF0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x492F40

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x565A10
#define AltAdvManager__IsAbilityReady_x                            0x5647B0
#define AltAdvManager__GetAAById_x                                 0x564B40
#define AltAdvManager__CanTrainAbility_x                           0x564BB0
#define AltAdvManager__CanSeeAbility_x                             0x564F10

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C72C0
#define CharacterZoneClient__CalcAffectChange_x                    0x4C5B70
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C5D50
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4BBC30
#define CharacterZoneClient__CharacterZoneClient_x                 0x4CB040
#define CharacterZoneClient__FindAffectSlot_x                      0x4C4890
#define CharacterZoneClient__FindItemByGuid_x                      0x4D8540
#define CharacterZoneClient__FindItemByRecord_x                    0x4D7FC0
#define CharacterZoneClient__GetCurrentMod_x                       0x4E5EC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DA150
#define CharacterZoneClient__GetEffect_x                           0x4BBB70
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C59D0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B2120
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B3BB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DA070
#define CharacterZoneClient__GetItemCountWorn_x                    0x4D9F90
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C5A20
#define CharacterZoneClient__GetMaxEffects_x                       0x4BF640
#define CharacterZoneClient__GetModCap_x                           0x4E5DC0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C5900
#define CharacterZoneClient__HasSkill_x                            0x4D5EC0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C27A0
#define CharacterZoneClient__MakeMeVisible_x                       0x4D75E0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E2720
#define CharacterZoneClient__RemovePCAffectex_x                    0x4C4000

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6DAA90
#define CBankWnd__WndNotification_x                                0x6DA860

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x6E82A0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x92D390
#define CButtonWnd__CButtonWnd_x                                   0x92BF60
#define CButtonWnd__dCButtonWnd_x                                  0x92C240
#define CButtonWnd__vftable_x                                      0xB32418

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x708550
#define CChatWindowManager__InitContextMenu_x                      0x701680
#define CChatWindowManager__FreeChatWindow_x                       0x707090
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E9910
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x7081D0
#define CChatWindowManager__CreateChatWindow_x                     0x7076D0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E9A20

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x708D80
#define CChatWindow__Clear_x                                       0x70A050
#define CChatWindow__WndNotification_x                             0x70A7E0
#define CChatWindow__AddHistory_x                                  0x709910

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x940600
#define CContextMenu__dCContextMenu_x                              0x940840
#define CContextMenu__AddMenuItem_x                                0x940850
#define CContextMenu__RemoveMenuItem_x                             0x940B60
#define CContextMenu__RemoveAllMenuItems_x                         0x940B80
#define CContextMenu__CheckMenuItem_x                              0x940C00
#define CContextMenu__SetMenuItem_x                                0x940A80
#define CContextMenu__AddSeparator_x                               0x9409E0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x941190
#define CContextMenuManager__RemoveMenu_x                          0x941200
#define CContextMenuManager__PopupMenu_x                           0x9412C0
#define CContextMenuManager__Flush_x                               0x941130
#define CContextMenuManager__GetMenu_x                             0x49B7F0
#define CContextMenuManager__CreateDefaultMenu_x                   0x713DD0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x89D070
#define CChatService__GetFriendName_x                              0x8D27E0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x93DA50
#define CComboWnd__Draw_x                                          0x93CF40
#define CComboWnd__GetCurChoice_x                                  0x93D890
#define CComboWnd__GetListRect_x                                   0x93D3F0
#define CComboWnd__GetTextRect_x                                   0x93DAC0
#define CComboWnd__InsertChoice_x                                  0x93D580
#define CComboWnd__SetColors_x                                     0x93D550
#define CComboWnd__SetChoice_x                                     0x93D860
#define CComboWnd__GetItemCount_x                                  0x93D8A0
#define CComboWnd__GetCurChoiceText_x                              0x93D8E0
#define CComboWnd__GetChoiceText_x                                 0x93D8B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x93D620

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x7117E0
#define CContainerWnd__vftable_x                                   0xAFF764
#define CContainerWnd__SetContainer_x                              0x712D30

// CDisplay
#define CDisplay__cameraType_x                                     0xDEBCCC
#define CDisplay__ZoneMainUI_x                                     0x5580E0
#define CDisplay__PreZoneMainUI_x                                  0x5580F0
#define CDisplay__CleanGameUI_x                                    0x55D540
#define CDisplay__GetClickedActor_x                                0x550540
#define CDisplay__GetUserDefinedColor_x                            0x548BB0
#define CDisplay__GetWorldFilePath_x                               0x551FB0
#define CDisplay__is3dON_x                                         0x54D1A0
#define CDisplay__ReloadUI_x                                       0x5575F0
#define CDisplay__WriteTextHD2_x                                   0x54CF90
#define CDisplay__TrueDistance_x                                   0x553C70
#define CDisplay__SetViewActor_x                                   0x54FE60
#define CDisplay__GetFloorHeight_x                                 0x54D260
#define CDisplay__SetRenderWindow_x                                0x54BBE0
#define CDisplay__ToggleScreenshotMode_x                           0x54F930
#define CDisplay__RealRender_World_x                               0x54B040

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9605F0

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x943AF0
#define CEditWnd__EnsureCaretVisible_x                             0x945CC0
#define CEditWnd__GetCaretPt_x                                     0x944C70
#define CEditWnd__GetCharIndexPt_x                                 0x944A20
#define CEditWnd__GetDisplayString_x                               0x9448C0
#define CEditWnd__GetHorzOffset_x                                  0x943190
#define CEditWnd__GetLineForPrintableChar_x                        0x945BC0
#define CEditWnd__GetSelStartPt_x                                  0x944CD0
#define CEditWnd__GetSTMLSafeText_x                                0x9446E0
#define CEditWnd__PointFromPrintableChar_x                         0x9457F0
#define CEditWnd__ReplaceSelection_x                               0x945460
#define CEditWnd__SelectableCharFromPoint_x                        0x945960
#define CEditWnd__SetEditable_x                                    0x944DA0
#define CEditWnd__SetWindowTextA_x                                 0x944460

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x612C90
#define CEverQuest__ClickedPlayer_x                                0x604E30
#define CEverQuest__CreateTargetIndicator_x                        0x622800
#define CEverQuest__DeleteTargetIndicator_x                        0x622890
#define CEverQuest__DoTellWindow_x                                 0x4E9B00
#define CEverQuest__OutputTextToLog_x                              0x4E9DD0
#define CEverQuest__DropHeldItemOnGround_x                         0x5F9F80
#define CEverQuest__dsp_chat_x                                     0x4EA160
#define CEverQuest__trimName_x                                     0x61E9B0
#define CEverQuest__Emote_x                                        0x6134F0
#define CEverQuest__EnterZone_x                                    0x60D5F0
#define CEverQuest__GetBodyTypeDesc_x                              0x617F40
#define CEverQuest__GetClassDesc_x                                 0x618580
#define CEverQuest__GetClassThreeLetterCode_x                      0x618B80
#define CEverQuest__GetDeityDesc_x                                 0x621050
#define CEverQuest__GetLangDesc_x                                  0x618D40
#define CEverQuest__GetRaceDesc_x                                  0x618560
#define CEverQuest__InterpretCmd_x                                 0x621620
#define CEverQuest__LeftClickedOnPlayer_x                          0x5FE120
#define CEverQuest__LMouseUp_x                                     0x5FC4A0
#define CEverQuest__RightClickedOnPlayer_x                         0x5FEA00
#define CEverQuest__RMouseUp_x                                     0x5FD430
#define CEverQuest__SetGameState_x                                 0x5F9D10
#define CEverQuest__UPCNotificationFlush_x                         0x61E8B0
#define CEverQuest__IssuePetCommand_x                              0x61A150
#define CEverQuest__ReportSuccessfulHeal_x                         0x614210
#define CEverQuest__ReportSuccessfulHit_x                          0x614840

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7234F0
#define CGaugeWnd__CalcLinesFillRect_x                             0x723550
#define CGaugeWnd__Draw_x                                          0x722B80

// CGuild
#define CGuild__FindMemberByName_x                                 0x4AFE50
#define CGuild__GetGuildName_x                                     0x4AE900
#define CGuild__GetGuildIndex_x                                    0x4AEF00

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x73D1E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x634370
#define CHotButton__SetCheck_x                                     0x633FB0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x74A450
#define CInvSlotMgr__MoveItem_x                                    0x749160
#define CInvSlotMgr__SelectSlot_x                                  0x74A520

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x747950
#define CInvSlot__SliderComplete_x                                 0x745680
#define CInvSlot__GetItemBase_x                                    0x745000
#define CInvSlot__UpdateItem_x                                     0x745170

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x74BFB0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x74B140
#define CInvSlotWnd__HandleLButtonUp_x                             0x74BB30

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x8065D0
#define CItemDisplayWnd__UpdateStrings_x                           0x75A670
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x7543B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x7548B0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x75AC80
#define CItemDisplayWnd__AboutToShow_x                             0x75A2B0
#define CItemDisplayWnd__WndNotification_x                         0x75BED0
#define CItemDisplayWnd__RequestConvertItem_x                      0x75B820
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x759310
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x75A0D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x836F90

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x760400

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x51BFE0

// CLabel
#define CLabel__Draw_x                                             0x765E60

// CListWnd
#define CListWnd__CListWnd_x                                       0x916360
#define CListWnd__dCListWnd_x                                      0x916680
#define CListWnd__vftable_x                                        0xB31CE8
#define CListWnd__AddColumn_x                                      0x91AAF0
#define CListWnd__AddColumn1_x                                     0x91AB40
#define CListWnd__AddLine_x                                        0x91AED0
#define CListWnd__AddString_x                                      0x91ACD0
#define CListWnd__CalculateFirstVisibleLine_x                      0x91A8B0
#define CListWnd__CalculateVSBRange_x                              0x91A6A0
#define CListWnd__ClearSel_x                                       0x91B6B0
#define CListWnd__ClearAllSel_x                                    0x91B710
#define CListWnd__CloseAndUpdateEditWindow_x                       0x91C130
#define CListWnd__Compare_x                                        0x919FD0
#define CListWnd__Draw_x                                           0x9167B0
#define CListWnd__DrawColumnSeparators_x                           0x918FA0
#define CListWnd__DrawHeader_x                                     0x919410
#define CListWnd__DrawItem_x                                       0x919910
#define CListWnd__DrawLine_x                                       0x919110
#define CListWnd__DrawSeparator_x                                  0x919040
#define CListWnd__EnableLine_x                                     0x918870
#define CListWnd__EnsureVisible_x                                  0x91C050
#define CListWnd__ExtendSel_x                                      0x91B5E0
#define CListWnd__GetColumnTooltip_x                               0x9183B0
#define CListWnd__GetColumnMinWidth_x                              0x918420
#define CListWnd__GetColumnWidth_x                                 0x918320
#define CListWnd__GetCurSel_x                                      0x917CB0
#define CListWnd__GetItemAtPoint_x                                 0x918AF0
#define CListWnd__GetItemAtPoint1_x                                0x918B60
#define CListWnd__GetItemData_x                                    0x917D30
#define CListWnd__GetItemHeight_x                                  0x9180F0
#define CListWnd__GetItemIcon_x                                    0x917EC0
#define CListWnd__GetItemRect_x                                    0x918960
#define CListWnd__GetItemText_x                                    0x917D70
#define CListWnd__GetSelList_x                                     0x91B760
#define CListWnd__GetSeparatorRect_x                               0x918DA0
#define CListWnd__InsertLine_x                                     0x91B2C0
#define CListWnd__RemoveLine_x                                     0x91B410
#define CListWnd__SetColors_x                                      0x91A670
#define CListWnd__SetColumnJustification_x                         0x91A3A0
#define CListWnd__SetColumnLabel_x                                 0x91AC70
#define CListWnd__SetColumnWidth_x                                 0x91A2C0
#define CListWnd__SetCurSel_x                                      0x91B520
#define CListWnd__SetItemColor_x                                   0x91BD00
#define CListWnd__SetItemData_x                                    0x91BCC0
#define CListWnd__SetItemText_x                                    0x91B8D0
#define CListWnd__ShiftColumnSeparator_x                           0x91A460
#define CListWnd__Sort_x                                           0x91A150
#define CListWnd__ToggleSel_x                                      0x91B550
#define CListWnd__SetColumnsSizable_x                              0x91A510
#define CListWnd__SetItemWnd_x                                     0x91BB80
#define CListWnd__GetItemWnd_x                                     0x917F10
#define CListWnd__SetItemIcon_x                                    0x91B950
#define CListWnd__CalculateCustomWindowPositions_x                 0x91A9B0
#define CListWnd__SetVScrollPos_x                                  0x91A2A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x77B650

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x776B40
#define MapViewMap__dMapViewMap_x                                  0x776C90
#define MapViewMap__vftable_x                                      0xB06D20
#define MapViewMap__Clear_x                                        0x7774C0
#define MapViewMap__SaveEx_x                                       0x77A880
#define MapViewMap__SetZoom_x                                      0x77EF40
#define MapViewMap__HandleLButtonDown_x                            0x776DA0
#define MapViewMap__GetWorldCoordinates_x                          0x779D60

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x79BAF0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x79C3D0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x79C900
#define CMerchantWnd__SelectRecoverySlot_x                         0x79F8B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x79A660
#define CMerchantWnd__SelectBuySellSlot_x                          0x7A5470
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x79B710

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8A0200
#define CPacketScrambler__hton_x                                   0x8A01F0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x9394E0
#define CSidlManagerBase__CreatePageWnd_x                          0x938CE0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x934F60
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x934EF0
#define CSidlManagerBase__FindAnimation1_x                         0x935140
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x935550
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x935340
#define CSidlManagerBase__CreateLabel_x                            0x7FD870
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x9384B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x938690
#define CSidlManagerBase__CreateXWnd_x                             0x7FD7A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x7FDD60

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x931C50
#define CSidlScreenWnd__CalculateVSBRange_x                        0x931B50
#define CSidlScreenWnd__ConvertToRes_x                             0x95B140
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x931640
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x931330
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x931400
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x9314D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x9320F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x9325C0
#define CSidlScreenWnd__GetChildItem_x                             0x932540
#define CSidlScreenWnd__GetSidlPiece_x                             0x9322E0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x921E70
#define CSidlScreenWnd__Init1_x                                    0x930F30
#define CSidlScreenWnd__LoadIniInfo_x                              0x932610
#define CSidlScreenWnd__LoadIniListWnd_x                           0x933110
#define CSidlScreenWnd__LoadSidlScreen_x                           0x930340
#define CSidlScreenWnd__m_layoutCopy_x                             0x15DB190
#define CSidlScreenWnd__StoreIniInfo_x                             0x932CA0
#define CSidlScreenWnd__StoreIniVis_x                              0x932FF0
#define CSidlScreenWnd__vftable_x                                  0xB326A8
#define CSidlScreenWnd__WndNotification_x                          0x932000

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x699C90
#define CSkillMgr__GetSkillCap_x                                   0x699E70
#define CSkillMgr__GetNameToken_x                                  0x699410
#define CSkillMgr__IsActivatedSkill_x                              0x699550
#define CSkillMgr__IsCombatSkill_x                                 0x699490

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x941F70
#define CSliderWnd__SetValue_x                                     0x941DE0
#define CSliderWnd__SetNumTicks_x                                  0x941E40

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x803960

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94A8C0
#define CStmlWnd__CalculateHSBRange_x                              0x94B9F0
#define CStmlWnd__CalculateVSBRange_x                              0x94B960
#define CStmlWnd__CanBreakAtCharacter_x                            0x94FD20
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9509B0
#define CStmlWnd__ForceParseNow_x                                  0x94AEB0
#define CStmlWnd__GetNextTagPiece_x                                0x94FC80
#define CStmlWnd__GetSTMLText_x                                    0x50D4C0
#define CStmlWnd__GetVisibleText_x                                 0x94AED0
#define CStmlWnd__InitializeWindowVariables_x                      0x950800
#define CStmlWnd__MakeStmlColorTag_x                               0x949F30
#define CStmlWnd__MakeWndNotificationTag_x                         0x949FA0
#define CStmlWnd__SetSTMLText_x                                    0x948FE0
#define CStmlWnd__StripFirstSTMLLines_x                            0x951AB0
#define CStmlWnd__UpdateHistoryString_x                            0x950BC0

// CTabWnd
#define CTabWnd__Draw_x                                            0x948130
#define CTabWnd__DrawCurrentPage_x                                 0x948860
#define CTabWnd__DrawTab_x                                         0x948580
#define CTabWnd__GetCurrentPage_x                                  0x947930
#define CTabWnd__GetCurrentTabIndex_x                              0x947920
#define CTabWnd__GetPageFromTabIndex_x                             0x9484C0
#define CTabWnd__GetPageInnerRect_x                                0x947B70
#define CTabWnd__GetTabInnerRect_x                                 0x947AB0
#define CTabWnd__GetTabRect_x                                      0x947960
#define CTabWnd__InsertPage_x                                      0x947D80
#define CTabWnd__RemovePage_x                                      0x947EF0
#define CTabWnd__SetPage_x                                         0x947BF0
#define CTabWnd__SetPageRect_x                                     0x948070
#define CTabWnd__UpdatePage_x                                      0x948440

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9474D0
#define CPageWnd__GetTabText_x                                     0x760830
#define CPageWnd__SetTabText_x                                     0x947470


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A9150

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91ED80
#define CTextureFont__DrawWrappedText1_x                           0x91ECB0
#define CTextureFont__DrawWrappedText2_x                           0x91EDD0
#define CTextureFont__GetTextExtent_x                              0x91EF40

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x6ADE80
#define CHtmlComponentWnd__ValidateUri_x                           0x73EBD0
#define CHtmlWnd__SetClientCallbacks_x                             0x639410
#define CHtmlWnd__AddObserver_x                                    0x639430
#define CHtmlWnd__RemoveObserver_x                                 0x639490
#define Window__getProgress_x                                      0x855930
#define Window__getStatus_x                                        0x855950
#define Window__getURI_x                                           0x855960

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x957F50

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x90BF50

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E97D0
#define CXStr__CXStr1_x                                            0x4816E0
#define CXStr__CXStr3_x                                            0x8F39A0
#define CXStr__dCXStr_x                                            0x478360
#define CXStr__operator_equal_x                                    0x8F3BD0
#define CXStr__operator_equal1_x                                   0x8F3C10
#define CXStr__operator_plus_equal1_x                              0x8F46A0
#define CXStr__SetString_x                                         0x8F6590
#define CXStr__operator_char_p_x                                   0x8F40E0
#define CXStr__GetChar_x                                           0x8F5EC0
#define CXStr__Delete_x                                            0x8F5790
#define CXStr__GetUnicode_x                                        0x8F5F30
#define CXStr__GetLength_x                                         0x4A8F00
#define CXStr__Mid_x                                               0x47D590
#define CXStr__Insert_x                                            0x8F5F90
#define CXStr__FindNext_x                                          0x8F5C00
#define CXStr__gFreeLists_x                                        0xC8A140
#define CXStr__gCXStrAccess_x                                      0x15DA9F4

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x940210

// CXWnd
#define CXWnd__BringToTop_x                                        0x9255B0
#define CXWnd__Center_x                                            0x925130
#define CXWnd__ClrFocus_x                                          0x924F40
#define CXWnd__Destroy_x                                           0x924FF0
#define CXWnd__DoAllDrawing_x                                      0x921600
#define CXWnd__DrawChildren_x                                      0x9215D0
#define CXWnd__DrawColoredRect_x                                   0x921A60
#define CXWnd__DrawTooltip_x                                       0x920140
#define CXWnd__DrawTooltipAtPoint_x                                0x920200
#define CXWnd__GetBorderFrame_x                                    0x9218C0
#define CXWnd__GetChildItem_x                                      0x9257C0
#define CXWnd__GetChildWndAt_x                                     0x925650
#define CXWnd__GetClientClipRect_x                                 0x923870
#define CXWnd__GetRelativeRect_x                                   0x923BD0
#define CXWnd__GetScreenClipRect_x                                 0x923940
#define CXWnd__GetScreenRect_x                                     0x923B10
#define CXWnd__GetTooltipRect_x                                    0x921AB0
#define CXWnd__GetWindowTextA_x                                    0x49CED0
#define CXWnd__IsActive_x                                          0x9221F0
#define CXWnd__IsDescendantOf_x                                    0x9244E0
#define CXWnd__IsReallyVisible_x                                   0x924510
#define CXWnd__IsType_x                                            0x925CC0
#define CXWnd__Minimize_x                                          0x924BE0
#define CXWnd__Move_x                                              0x924580
#define CXWnd__Move1_x                                             0x924630
#define CXWnd__ProcessTransition_x                                 0x9250E0
#define CXWnd__Refade_x                                            0x9248E0
#define CXWnd__Resize_x                                            0x924B70
#define CXWnd__Right_x                                             0x925370
#define CXWnd__SetFocus_x                                          0x924F00
#define CXWnd__SetFont_x                                           0x924F70
#define CXWnd__SetKeyTooltip_x                                     0x925AD0
#define CXWnd__SetMouseOver_x                                      0x922A00
#define CXWnd__SetParent_x                                         0x924280
#define CXWnd__StartFade_x                                         0x9243D0
#define CXWnd__vftable_x                                           0xB32134
#define CXWnd__CXWnd_x                                             0x91F260
#define CXWnd__dCXWnd_x                                            0x91F750

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95C1C0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x9284A0
#define CXWndManager__DrawWindows_x                                0x9284C0
#define CXWndManager__GetKeyboardFlags_x                           0x92ABE0
#define CXWndManager__HandleKeyboardMsg_x                          0x92A790
#define CXWndManager__RemoveWnd_x                                  0x92AE10
#define CXWndManager__RemovePendingDeletionWnd_x                   0x92B380

// CDBStr
#define CDBStr__GetString_x                                        0x547B60

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4DA960
#define CharacterZoneClient__CastSpell_x                           0x4BFDA0
#define CharacterZoneClient__Cur_HP_x                              0x4D2F00
#define CharacterZoneClient__Cur_Mana_x                            0x4DA650
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D5C80
#define CharacterZoneClient__GetBaseSkill_x                        0x4D6C20
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C2E10
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E0B50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B37F0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B3940
#define CharacterZoneClient__GetHPRegen_x                          0x4E0550
#define CharacterZoneClient__GetManaRegen_x                        0x4E0F90
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C3B60
#define CharacterZoneClient__Max_Endurance_x                       0x65FD20
#define CharacterZoneClient__Max_HP_x                              0x4D2D30
#define CharacterZoneClient__Max_Mana_x                            0x65FB20
#define CharacterZoneClient__SpellDuration_x                       0x4C3690
#define CharacterZoneClient__TotalEffect_x                         0x4C6BB0
#define CharacterZoneClient__UseSkill_x                            0x4E2DA0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8BF5D0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x676060

// PcClient
#define PcClient__PcClient_x                                       0x656060
#define PcClient__GetConLevel_x                                    0x6588F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BA810
#define CCharacterListWnd__EnterWorld_x                            0x4BA1E0
#define CCharacterListWnd__Quit_x                                  0x4B9F30
#define CCharacterListWnd__UpdateList_x                            0x4BA3D0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x63A600
#define EQ_Item__CreateItemTagString_x                             0x899690
#define EQ_Item__IsStackable_x                                     0x89E3E0
#define EQ_Item__GetImageNum_x                                     0x89B270
#define EQ_Item__CreateItemClient_x                                0x639830
#define EQ_Item__GetItemValue_x                                    0x89C570
#define EQ_Item__ValueSellMerchant_x                               0x89FDE0
#define EQ_Item__IsKeyRingItem_x                                   0x89DC90
#define EQ_Item__CanGoInBag_x                                      0x63A720
#define EQ_Item__IsEmpty_x                                         0x89D7C0
#define EQ_Item__GetMaxItemCount_x                                 0x89C980
#define EQ_Item__GetHeldItem_x                                     0x89B140
#define EQ_Item__GetAugmentFitBySlot_x                             0x898F00
#define ItemClient__ItemClient_x                                   0x5B9EE0
#define ItemClient__dItemClient_x                                  0x639780

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x5666E0
#define EQ_LoadingS__Array_x                                       0xC14130

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8A90D0
#define EQ_PC__GetCombatAbility_x                                  0x8A9740
#define EQ_PC__GetCombatAbilityTimer_x                             0x8A97B0
#define EQ_PC__GetItemRecastTimer_x                                0x662690
#define EQ_PC__HasLoreItem_x                                       0x659110
#define EQ_PC__AlertInventoryChanged_x                             0x658230
#define EQ_PC__GetPcZoneClient_x                                   0x685120
#define EQ_PC__RemoveMyAffect_x                                    0x6658C0
#define EQ_PC__GetKeyRingItems_x                                   0x8AA080
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8A9E00
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8AA380

// EQItemList
#define EQItemList__EQItemList_x                                   0x5C20A0
#define EQItemList__add_object_x                                   0x5EF760
#define EQItemList__add_item_x                                     0x5C2600
#define EQItemList__delete_item_x                                  0x5C2650
#define EQItemList__FreeItemList_x                                 0x5C2550

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x544700

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x677960
#define EQPlayer__dEQPlayer_x                                      0x66ACD0
#define EQPlayer__DoAttack_x                                       0x67F8B0
#define EQPlayer__EQPlayer_x                                       0x66B390
#define EQPlayer__SetNameSpriteState_x                             0x66F670
#define EQPlayer__SetNameSpriteTint_x                              0x670550
#define PlayerBase__HasProperty_j_x                                0x98AD60
#define EQPlayer__IsTargetable_x                                   0x98B200
#define EQPlayer__CanSee_x                                         0x98B060
#define EQPlayer__CanSee1_x                                        0x98B130
#define PlayerBase__GetVisibilityLineSegment_x                     0x98AE20

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x682BB0
#define PlayerZoneClient__GetLevel_x                               0x685160
#define PlayerZoneClient__IsValidTeleport_x                        0x5F08D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x55F400

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x67A740
#define EQPlayerManager__GetSpawnByName_x                          0x67A7F0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x67A880

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x63DD80
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x63DE00
#define KeypressHandler__AttachKeyToEqCommand_x                    0x63DE40
#define KeypressHandler__ClearCommandStateArray_x                  0x63F230
#define KeypressHandler__HandleKeyDown_x                           0x63F250
#define KeypressHandler__HandleKeyUp_x                             0x63F2F0
#define KeypressHandler__SaveKeymapping_x                          0x63F740

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8BD630

// StringTable
#define StringTable__getString_x                                   0x8B84D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x662110
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x660620
#define PcZoneClient__GetPcSkillLimit_x                            0x665530
#define PcZoneClient__RemovePetEffect_x                            0x665B60
#define PcZoneClient__HasAlternateAbility_x                        0x65F950
#define PcZoneClient__CanEquipItem_x                               0x660000
#define PcZoneClient__GetItemByID_x                                0x662B00
#define PcZoneClient__GetItemByItemClass_x                         0x662C50
#define PcZoneClient__RemoveBuffEffect_x                           0x665B80
#define PcZoneClient__BandolierSwap_x                              0x660BE0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x662630

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F54B0

// IconCache
#define IconCache__GetIcon_x                                       0x718EB0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x710980
#define CContainerMgr__CloseContainer_x                            0x710C50
#define CContainerMgr__OpenExperimentContainer_x                   0x7116D0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7CFDB0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x632760

// CLootWnd
#define CLootWnd__LootAll_x                                        0x76D8F0
#define CLootWnd__RequestLootSlot_x                                0x76CBC0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x58E2A0
#define EQ_Spell__SpellAffects_x                                   0x58E710
#define EQ_Spell__SpellAffectBase_x                                0x58E4D0
#define EQ_Spell__IsStackable_x                                    0x4CA960
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4CA780
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B7AB0
#define EQ_Spell__IsSPAStacking_x                                  0x58F560
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x58EA70
#define EQ_Spell__IsNoRemove_x                                     0x4CA940
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58F570
#define __IsResEffectSpell_x                                       0x4C9BE0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4AD3A0

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8C7D10

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x816CB0
#define CTargetWnd__WndNotification_x                              0x8164F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x8167C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x815650

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x81B320
#define CTaskWnd__ConfirmAbandonTask_x                             0x81DF60

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x542120
#define CTaskManager__HandleMessage_x                              0x540580
#define CTaskManager__GetTaskStatus_x                              0x5421D0
#define CTaskManager__GetElementDescription_x                      0x542250

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x589420
#define EqSoundManager__PlayScriptMp3_x                            0x5896E0
#define EqSoundManager__SoundAssistPlay_x                          0x69DBC0
#define EqSoundManager__WaveInstancePlay_x                         0x69D130

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5334D0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x946B80
#define CTextureAnimation__SetCurCell_x                            0x946980

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56E2B0
#define CAltAbilityData__GetMercMaxRank_x                          0x56E240
#define CAltAbilityData__GetMaxRank_x                              0x563630

// CTargetRing
#define CTargetRing__Cast_x                                        0x630870

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x51A1B0
#define CharacterBase__CreateItemIndex_x                           0x6389C0
#define CharacterBase__GetItemByGlobalIndex_x                      0x8D03A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8D0400
#define CharacterBase__GetItemPossession_x                         0x505FA0
#define CharacterBase__GetMemorizedSpell_x                         0x4CA760
#define CharacterBase__IsExpansionFlag_x                           0x5BBC40

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x6F78C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x6F80F0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x6F81A0

// messages
#define msg_spell_worn_off_x                                       0x5B3B00
#define msg_new_text_x                                             0x5A8480
#define __msgTokenTextParam_x                                      0x5B5D90
#define msgTokenText_x                                             0x5B5FE0

// SpellManager
#define SpellManager__vftable_x                                    0xADB53C
#define SpellManager__SpellManager_x                               0x6A0EF0
#define Spellmanager__LoadTextSpells_x                             0x6A17E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6A10C0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x98EC30

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8C86D0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8C8860

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7661A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x715080
#define CCursorAttachment__AttachToCursor1_x                       0x7150C0
#define CCursorAttachment__Deactivate_x                            0x7160B0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x956290
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x956A10
#define CEQSuiteTextureLoader__GetTexture_x                        0x9566D0

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x517470
#define CFindItemWnd__WndNotification_x                            0x5180B0
#define CFindItemWnd__Update_x                                     0x518C20
#define CFindItemWnd__PickupSelectedItem_x                         0x516CA0

// IString
#define IString__Append_x                                          0x507800

// Camera
#define EverQuest__Cameras_x                                       0xEA70A0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x520120
#define LootFiltersManager__GetItemFilterData_x                    0x51FA30
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51FA60
#define LootFiltersManager__SetItemLootFilter_x                    0x51FC80

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7BDBC0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9947E0
#define CResolutionHandler__GetWindowedStyle_x                     0x698810

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x70D500

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8D4260
#define CDistillerInfo__Instance_x                                 0x8D4200

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x72C520
#define CGroupWnd__UpdateDisplay_x                                 0x72B870

// ItemBase
#define ItemBase__IsLore_x                                         0x89DD40
#define ItemBase__IsLoreEquipped_x                                 0x89DDB0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5EF6C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x5EF800
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5EF860

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x68D870
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6911F0

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50DAC0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F9F20
#define FactionManagerClient__HandleFactionMessage_x               0x4FA590
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4FAB50
#define FactionManagerClient__GetMaxFaction_x                      0x4FAB6F
#define FactionManagerClient__GetMinFaction_x                      0x4FAB20

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x505F70

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x91DDA0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49C1E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x506210

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x56D740

// CTargetManager
#define CTargetManager__Get_x                                      0x6A4720

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x68D870

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A8F10

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5C24F0

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF44734

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x9084F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x483220

//
// EQGraphicsDX9.dll offsets (maybe this should go in eqgraphics.h?)
//

#define __eqgraphics_fopen_x                                       0x10147CD8

#define CParticleSystem__Render_x                                  0x100710F0

#define CRender__RenderScene_x                                     0x10093240
#define CRender__ResetDevice_x                                     0x10092AB0
#define CRender__UpdateDisplay_x                                   0x100938D0

//
// eqmain.dll offsets
//

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x1008AD30
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x10019910
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x1007CF30
#define EQMain__LoginController__FlushDxKeyboard_x                 0x10015240
#define EQMain__LoginController__GiveTime_x                        0x100152A0
#define EQMain__LoginServerAPI__JoinServer_x                       0x10016D60
#define EQMain__WndProc_x                                          0x1000BEA0

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x10167D38
#define EQMain__pinstCLoginViewManager_x                           0x1016E3B4
#define EQMain__pinstCXWndManager_x                                0x103808AC
#define EQMain__pinstCSidlManager_x                                0x103808B0
#define EQMain__pinstLoginController_x                             0x1016E3B8
#define EQMain__pinstLoginServerAPI_x                              0x1016E3A8
