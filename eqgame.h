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

#pragma once

//
// eqgame.exe offsets
//

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Nov 12 2021"
#define __ExpectedVersionTime                                     "08:48:17"
#define __ActualVersionDate_x                                      0xB50574
#define __ActualVersionTime_x                                      0xB50568
#define __ActualVersionBuild_x                                     0xB4074C

// Memory Protection
#define __MemChecker0_x                                            0x662560
#define __MemChecker1_x                                            0x94EA70
#define __MemChecker2_x                                            0x6DCE70
#define __MemChecker3_x                                            0x6DCDE0
#define __MemChecker4_x                                            0x6356F0
#define __EncryptPad0_x                                            0xE4FBF0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDAADC8
#define __ScreenY_x                                                0xDAADD0
#define __ScreenX_x                                                0xDAADD4
#define __ScreenXMax_x                                             0xDAADD8
#define __ScreenYMax_x                                             0xDAADDC
#define __InChatMode_x                                             0xDAAE1C
#define __RunWalkState_x                                           0xDAAE20
#define DI8__Mouse_Copy_x                                          0xDAAE34
#define __MouseLook_x                                              0xDAAEB2
#define __NetStatusToggle_x                                        0xDAAEB5
#define __pulAutoRun_x                                             0xDAAED0
#define __Clicks_x                                                 0xDAAEEC
#define __RMouseHeldTime_x                                         0xDAAF54
#define __LMouseHeldTime_x                                         0xDAAF58
#define __ZoneType_x                                               0xDAB2B0
#define __ShiftKeyDown_x                                           0xDAB4B0
#define __AutoSkillArray_x                                         0xDAB950
#define __RangeAttackReady_x                                       0xDABC34
#define __AttackOnAssist_x                                         0xDABDAC
#define __ShowNames_x                                              0xDABDF0
#define __PCNames_x                                                0xDABF40
#define __UseTellWindows_x                                         0xDAC0D8
#define __pulForward_x                                             0xDAC110
#define __pulBackward_x                                            0xDAC114
#define __pulTurnRight_x                                           0xDAC118
#define __pulTurnLeft_x                                            0xDAC11C
#define __pulStrafeLeft_x                                          0xDAC120
#define __pulStrafeRight_x                                         0xDAC124
#define __LastTell_x                                               0xDAC990
#define __ServerName_x                                             0xDE1254
#define __DoAbilityList_x                                          0xDE1294
#define __SocialChangedList_x                                      0xDE12DC
#define __Socials_x                                                0xDE1354
#define __Inviter_x                                                0xE496F0
#define __Attack_x                                                 0xE49773
#define __Autofire_x                                               0xE49774

// Misc Globals
#define __do_loot_x                                                0x5DF930
#define __gfMaxZoomCameraDistance_x                                0xB483EC
#define __gfMaxCameraDistance_x                                    0xB70DC8
#define __CurrentSocial_x                                          0xC5B460
#define __BindList_x                                               0xDA04E8
#define g_eqCommandStates_x                                        0xDA1250
#define __CommandList_x                                            0xDA1DD8
#define __ScreenMode_x                                             0xEDD130
#define __GroupCount_x                                             0xF90E3A
#define __gWorld_x                                                 0xF9104C
#define __gpbCommandEvent_x                                        0xF91158
#define __ServerHost_x                                             0xF91323
#define __Guilds_x                                                 0xF952A0
#define __MouseEventTime_x                                         0xF96CCC
#define DI8__Mouse_Check_x                                         0xF9B804
#define __heqmain_x                                                0xF9DC98
#define DI8__Mouse_x                                               0xF9DCA4
#define __HWnd_x                                                   0xF9DCA8
#define __Mouse_x                                                  0xF9DD30
#define DI8__Main_x                                                0xF9DD44
#define DI8__Keyboard_x                                            0xF9DD48
#define __LoginName_x                                              0xF9E414
#define __CurrentMapLabel_x                                        0xFAE744
#define __TargetAggroHolder_x                                      0xFB10F8
#define __GroupAggro_x                                             0xFB1138
#define __SubscriptionType_x                                       0xFE2830

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF91638
#define instEQZoneInfo_x                                           0xDAB0A8
#define pinstActiveBanker_x                                        0xF8ED38
#define pinstActiveCorpse_x                                        0xF8ED30
#define pinstActiveGMaster_x                                       0xF8ED34
#define pinstActiveMerchant_x                                      0xF8ED2C
#define pinstAltAdvManager_x                                       0xEDDF48
#define pinstBandageTarget_x                                       0xF8ED48
#define pinstCEverQuest_x                                          0xF9DCAC
#define pinstCamActor_x                                            0xEDD124
#define pinstCDBStr_x                                              0xEDCCB8
#define pinstCDisplay_x                                            0xF8EDB4
#define pinstControlledMissile_x                                   0xF8ED8C
#define pinstControlledPlayer_x                                    0xF8ED80
#define pinstCResolutionHandler_x                                  0x161D700
#define pinstCSidlManager_x                                        0x161C69C
#define pinstCXWndManager_x                                        0x161C694
#define instDynamicZone_x                                          0xF95178
#define pinstDZMember_x                                            0xF95288
#define pinstDZTimerInfo_x                                         0xF9528C
#define pinstEqLogin_x                                             0xF9DD60
#define instEQMisc_x                                               0xD948D8
#define pinstEQSoundManager_x                                      0xEDE858
#define pinstEQSpellStrings_x                                      0xECD958
#define instExpeditionLeader_x                                     0xF951C2
#define instExpeditionName_x                                       0xF95202
#define pinstSGraphicsEngine_x                                     0x161D4CC
#define pinstGroup_x                                               0xF90E36
#define pinstImeManager_x                                          0x161C698
#define pinstLocalPC_x                                             0xF8EDA4
#define pinstLocalPlayer_x                                         0xF8ED28
#define pinstMercenaryData_x                                       0xF987B8
#define pinstMercenaryStats_x                                      0xFB11C4
#define pinstModelPlayer_x                                         0xF8ED40
#define pinstRenderInterface_x                                     0x161D4D8
#define pinstSkillMgr_x                                            0xF9A8B0
#define pinstSpawnManager_x                                        0xF99388
#define pinstSpellManager_x                                        0xF9AAF0
#define pinstSpellSets_x                                           0xE4239C
#define pinstStringTable_x                                         0xF8EDB0
#define pinstSwitchManager_x                                       0xF8EBD8
#define pinstTarget_x                                              0xF8ED7C
#define pinstTargetObject_x                                        0xF8ED9C
#define pinstTargetSwitch_x                                        0xF8EDA0
#define pinstTaskMember_x                                          0xD94420
#define pinstTrackTarget_x                                         0xF8ED84
#define pinstTradeTarget_x                                         0xF8ED3C
#define instTributeActive_x                                        0xD948F9
#define pinstViewActor_x                                           0xEDD120
#define pinstWorldData_x                                           0xF8EDAC
#define pinstZoneAddr_x                                            0xDAB348
#define pinstPlayerPath_x                                          0xF99420
#define pinstTargetIndicator_x                                     0xF9AD58
#define EQObject_Top_x                                             0xF8ED98

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEDCD58
#define pinstCAchievementsWnd_x                                    0xEDCDF8
#define pinstCActionsWnd_x                                         0xEDD118
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDD13C
#define pinstCAdvancedLootWnd_x                                    0xEDD11C
#define pinstCAdventureLeaderboardWnd_x                            0xFA7F68
#define pinstCAdventureRequestWnd_x                                0xFA8018
#define pinstCAdventureStatsWnd_x                                  0xFA80C8
#define pinstCAggroMeterWnd_x                                      0xEDCE90
#define pinstCAlarmWnd_x                                           0xEDD188
#define pinstCAlertHistoryWnd_x                                    0xEDD0FC
#define pinstCAlertStackWnd_x                                      0xEDCEC8
#define pinstCAlertWnd_x                                           0xEDD0E0
#define pinstCAltStorageWnd_x                                      0xFA8428
#define pinstCAudioTriggersWindow_x                                0xEBFC88
#define pinstCAuraWnd_x                                            0xEDD164
#define pinstCAvaZoneWnd_x                                         0xEDCDDC
#define pinstCBandolierWnd_x                                       0xEDD170
#define pinstCBankWnd_x                                            0xEDD100
#define pinstCBarterMerchantWnd_x                                  0xFA9668
#define pinstCBarterSearchWnd_x                                    0xFA9718
#define pinstCBarterWnd_x                                          0xFA97C8
#define pinstCBazaarConfirmationWnd_x                              0xEDCD64
#define pinstCBazaarSearchWnd_x                                    0xEDCE2C
#define pinstCBazaarWnd_x                                          0xEDCDD8
#define pinstCBlockedBuffWnd_x                                     0xEDCE5C
#define pinstCBlockedPetBuffWnd_x                                  0xEDCE64
#define pinstCBodyTintWnd_x                                        0xEDCD84
#define pinstCBookWnd_x                                            0xEDD108
#define pinstCBreathWnd_x                                          0xEDCD5C
#define pinstCBuffWindowNORMAL_x                                   0xEDCE50
#define pinstCBuffWindowSHORT_x                                    0xEDCE54
#define pinstCBugReportWnd_x                                       0xEDCE10
#define pinstCButtonWnd_x                                          0x161C900
#define pinstCCastingWnd_x                                         0xEDCE8C
#define pinstCCastSpellWnd_x                                       0xEDCE9C
#define pinstCCharacterListWnd_x                                   0xEDCE30
#define pinstCChatWindowManager_x                                  0xFAA270
#define pinstCClaimWnd_x                                           0xFAA3C8
#define pinstCColorPickerWnd_x                                     0xEDCE44
#define pinstCCombatAbilityWnd_x                                   0xEDD150
#define pinstCCombatSkillsSelectWnd_x                              0xEDD154
#define pinstCCompassWnd_x                                         0xEDD160
#define pinstCConfirmationDialog_x                                 0xFAF290
#define pinstCContainerMgr_x                                       0xEDD18C
#define pinstCContextMenuManager_x                                 0x161C650
#define pinstCCursorAttachment_x                                   0xEDCE84
#define pinstCDynamicZoneWnd_x                                     0xFAA990
#define pinstCEditLabelWnd_x                                       0xEDCDF0
#define pinstCEQMainWnd_x                                          0xFAABD8
#define pinstCEventCalendarWnd_x                                   0xEDD174
#define pinstCExtendedTargetWnd_x                                  0xEDCE88
#define pinstCPlayerCustomizationWnd_x                             0xEDCE38
#define pinstCFactionWnd_x                                         0xEDCE98
#define pinstCFellowshipWnd_x                                      0xFAADD8
#define pinstCFileSelectionWnd_x                                   0xEDD15C
#define pinstCFindItemWnd_x                                        0xEDCD8C
#define pinstCFindLocationWnd_x                                    0xFAAF30
#define pinstCFriendsWnd_x                                         0xEDD158
#define pinstCGemsGameWnd_x                                        0xEDD17C
#define pinstCGiveWnd_x                                            0xEDCDE4
#define pinstCGroupSearchFiltersWnd_x                              0xEDCE74
#define pinstCGroupSearchWnd_x                                     0xFAB328
#define pinstCGroupWnd_x                                           0xFAB3D8
#define pinstCGuildBankWnd_x                                       0xFAB488
#define pinstCGuildCreationWnd_x                                   0xFAB538
#define pinstCGuildMgmtWnd_x                                       0xFAB5E8
#define pinstCharacterCreation_x                                   0xEDCE80
#define pinstCHelpWnd_x                                            0xEDD0E8
#define pinstCHeritageSelectionWnd_x                               0xEDCE3C
#define pinstCHotButtonWnd_x                                       0xFAD740
#define pinstCHotButtonWnd1_x                                      0xFAD740
#define pinstCHotButtonWnd2_x                                      0xFAD744
#define pinstCHotButtonWnd3_x                                      0xFAD748
#define pinstCHotButtonWnd4_x                                      0xFAD74C
#define pinstCIconSelectionWnd_x                                   0xEDCE0C
#define pinstCInspectWnd_x                                         0xEDCE00
#define pinstCInventoryWnd_x                                       0xEDD0EC
#define pinstCInvSlotMgr_x                                         0xEDD178
#define pinstCItemDisplayManager_x                                 0xFADC98
#define pinstCItemExpTransferWnd_x                                 0xFADDC8
#define pinstCItemOverflowWnd_x                                    0xEDCDC4
#define pinstCJournalCatWnd_x                                      0xEDCD74
#define pinstCJournalNPCWnd_x                                      0xEDCD68
#define pinstCJournalTextWnd_x                                     0xEDCD68
#define pinstCKeyRingWnd_x                                         0xEDD0F8
#define pinstCLargeDialogWnd_x                                     0xFAFF10
#define pinstCLayoutCopyWnd_x                                      0xFAE118
#define pinstCLFGuildWnd_x                                         0xFAE1C8
#define pinstCLoadskinWnd_x                                        0xEDD184
#define pinstCLootFiltersCopyWnd_x                                 0xEDC1C8
#define pinstCLootFiltersWnd_x                                     0xEDCD6C
#define pinstCLootSettingsWnd_x                                    0xEDCD70
#define pinstCLootWnd_x                                            0xEDD10C
#define pinstCMailAddressBookWnd_x                                 0xEDCE24
#define pinstCMailCompositionWnd_x                                 0xEDCE1C
#define pinstCMailIgnoreListWnd_x                                  0xEDCE28
#define pinstCMailWnd_x                                            0xEDCE14
#define pinstCManageLootWnd_x                                      0xEDE3C8
#define pinstCMapToolbarWnd_x                                      0xEDCDE8
#define pinstCMapViewWnd_x                                         0xEDCDE0
#define pinstCMarketplaceWnd_x                                     0xEDCDB4
#define pinstCMerchantWnd_x                                        0xEDCDBC
#define pinstCMIZoneSelectWnd_x                                    0xFAEA00
#define pinstCMusicPlayerWnd_x                                     0xEDD180
#define pinstCNameChangeMercWnd_x                                  0xEDCEB0
#define pinstCNameChangePetWnd_x                                   0xEDCEAC
#define pinstCNameChangeWnd_x                                      0xEDCE08
#define pinstCNoteWnd_x                                            0xEDD0E4
#define pinstCObjectPreviewWnd_x                                   0xEDCE20
#define pinstCOptionsWnd_x                                         0xEDCE4C
#define pinstCOverseerWnd_x                                        0xEDCDB0
#define pinstCPetInfoWnd_x                                         0xEDD110
#define pinstCPetitionQWnd_x                                       0xEDCE68
#define pinstCPlayerNotesWnd_x                                     0xEDD168
#define pinstCPlayerWnd_x                                          0xEDCD88
#define pinstCPopupWndManager_x                                    0xFAF290
#define pinstCProgressionSelectionWnd_x                            0xFAF340
#define pinstCPurchaseGroupWnd_x                                   0xEDCDC0
#define pinstCPurchaseWnd_x                                        0xEDCDB8
#define pinstCPvPLeaderboardWnd_x                                  0xFAF3F0
#define pinstCPvPStatsWnd_x                                        0xFAF4A0
#define pinstCQuantityWnd_x                                        0xEDD104
#define pinstCRaceChangeWnd_x                                      0xEDCE18
#define pinstCRaidOptionsWnd_x                                     0xEDCE94
#define pinstCRaidWnd_x                                            0xEDCEA0
#define pinstCRealEstateItemsWnd_x                                 0xEDCE40
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDCE7C
#define pinstCRealEstateManageWnd_x                                0xEDCE60
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDCE6C
#define pinstCRealEstatePlotSearchWnd_x                            0xEDCE70
#define pinstCRealEstatePurchaseWnd_x                              0xEDCE78
#define pinstCRespawnWnd_x                                         0xEDD16C
#define pinstCRewardSelectionWnd_x                                 0xFAFBE8
#define pinstCSelectorWnd_x                                        0xEDCDCC
#define pinstCSendMoneyWnd_x                                       0xEDCDEC
#define pinstCServerListWnd_x                                      0xEDD14C
#define pinstCSkillsSelectWnd_x                                    0xEDD148
#define pinstCSkillsWnd_x                                          0xEDD140
#define pinstCSocialEditWnd_x                                      0xEDCE04
#define pinstCSocialWnd_x                                          0xEDCD60
#define pinstCSpellBookWnd_x                                       0xEDCEC4
#define pinstCSpellDisplayMgr_x                                    0xFB03C0
#define pinstCStoryWnd_x                                           0xEDCD7C
#define pinstCTargetOfTargetWnd_x                                  0xFB1248
#define pinstCTargetWnd_x                                          0xEDCDFC
#define pinstCTaskOverlayWnd_x                                     0xEDCD78
#define pinstCTaskSelectWnd_x                                      0xFB13A0
#define pinstCTaskManager_x                                        0xC66268
#define pinstCTaskTemplateSelectWnd_x                              0xFB1450
#define pinstCTaskWnd_x                                            0xFB1500
#define pinstCTextEntryWnd_x                                       0xEDD144
#define pinstCTimeLeftWnd_x                                        0xEDCE58
#define pinstCTipWndCONTEXT_x                                      0xFB1704
#define pinstCTipWndOFDAY_x                                        0xFB1700
#define pinstCTitleWnd_x                                           0xFB17B0
#define pinstCTrackingWnd_x                                        0xEDCDF4
#define pinstCTradeskillWnd_x                                      0xFB1918
#define pinstCTradeWnd_x                                           0xEDCDC8
#define pinstCTrainWnd_x                                           0xEDD114
#define pinstCTributeBenefitWnd_x                                  0xFB1B18
#define pinstCTributeMasterWnd_x                                   0xFB1BC8
#define pinstCTributeTrophyWnd_x                                   0xFB1C78
#define pinstCVideoModesWnd_x                                      0xEDCDD4
#define pinstCVoiceMacroWnd_x                                      0xF9B170
#define pinstCVoteResultsWnd_x                                     0xEDCEA8
#define pinstCVoteWnd_x                                            0xEDCEA4
#define pinstCZoneGuideWnd_x                                       0xEDD0F0
#define pinstCZonePathWnd_x                                        0xEDD0F4
#define pinstEQSuiteTextureLoader_x                                0xEAA9C0
#define pinstItemIconCache_x                                       0xFAAB90
#define pinstLootFiltersManager_x                                  0xEDC278
#define pinstRewardSelectionWnd_x                                  0xFAFBE8

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DAC10
#define __CastRay2_x                                               0x5DAEA0
#define __ConvertItemTags_x                                        0x5F80E0
#define __CleanItemTags_x                                          0x47DA60
#define __CreateCascadeMenuItems_x                                 0x56F680
#define __DoesFileExist_x                                          0x951A00
#define __EQGetTime_x                                              0x94E6E0
#define __ExecuteCmd_x                                             0x5D3030
#define __FixHeading_x                                             0x9ECEF0
#define __FlushDxKeyboard_x                                        0x6D8160
#define __GameLoop_x                                               0x6DBA70
#define __get_bearing_x                                            0x5DA7B0
#define __get_melee_range_x                                        0x5DB0E0
#define __GetAnimationCache_x                                      0x74A3B0
#define __GetGaugeValueFromEQ_x                                    0x85AA10
#define __GetLabelFromEQ_x                                         0x85C420
#define __GetXTargetType_x                                         0x9EF260
#define __HandleMouseWheel_x                                       0x6DCF00
#define __HeadingDiff_x                                            0x9ECF50
#define __HelpPath_x                                               0xF9698C
#define __ExecuteFrontEnd_x                                        0x6D8940
#define __NewUIINI_x                                               0x85A6F0
#define __ProcessGameEvents_x                                      0x6417A0
#define __ProcessKeyboardEvents_x                                  0x6DA0B0
#define __ProcessMouseEvents_x                                     0x640EA0
#define __SaveColors_x                                             0x56F520
#define __STMLToText_x                                             0x98A9F0
#define __WndProc_x                                                0x6DAB70
#define CMemoryMappedFile__SetFile_x                               0xADC960
#define CrashDetected_x                                            0x6DA670
#define DrawNetStatus_x                                            0x670AF0
#define Expansion_HoT_x                                            0xDABD98
#define Teleport_Table_Size_x                                      0xF911E0
#define Teleport_Table_x                                           0xF8EDB8
#define Util__FastTime_x                                           0x94E2A0
#define __eq_delete_x                                              0x9F5DB3
#define __eq_new_x                                                 0x9F6324
#define __CopyLayout_x                                             0x65D850
#define __ThrottleFrameRate_x                                      0x62A5A3
#define __ThrottleFrameRateEnd_x                                   0x62A5FF

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6E9640
#define CAAWnd__Update_x                                           0x6E8960
#define CAAWnd__UpdateSelected_x                                   0x6E5CD0

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919A0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B500
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B380
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495680
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948C0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x5785A0
#define AltAdvManager__IsAbilityReady_x                            0x577180
#define AltAdvManager__GetAAById_x                                 0x577520
#define AltAdvManager__CanTrainAbility_x                           0x577590
#define AltAdvManager__CanSeeAbility_x                             0x577940

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDEF0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC7D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC9B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C13C0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1830
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAEB0
#define CharacterZoneClient__GetCurrentMod_x                       0x4EBEB0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE50
#define CharacterZoneClient__GetEffect_x                           0x4C1300
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC570
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6E40
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8B60
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFD10
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFC10
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC610
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5330
#define CharacterZoneClient__GetModCap_x                           0x4EBDB0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC4C0
#define CharacterZoneClient__HasSkill_x                            0x4DCFA0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8BE0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE710
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E7E40
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA5C0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x705EC0
#define CBankWnd__WndNotification_x                                0x705C60

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7109A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70B5F0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x7095C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7150D0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x987F90
#define CButtonWnd__CButtonWnd_x                                   0x986900
#define CButtonWnd__dCButtonWnd_x                                  0x986BA0
#define CButtonWnd__vftable_x                                      0xB8B8C8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x737A30
#define CChatWindowManager__InitContextMenu_x                      0x730970
#define CChatWindowManager__FreeChatWindow_x                       0x736600
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x737710
#define CChatWindowManager__CreateChatWindow_x                     0x736C30

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD50

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x7383B0
#define CChatWindow__Clear_x                                       0x739820
#define CChatWindow__WndNotification_x                             0x739FA0
#define CChatWindow__AddHistory_x                                  0x739060

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x99DE00
#define CContextMenu__dCContextMenu_x                              0x99E040
#define CContextMenu__AddMenuItem_x                                0x99E050
#define CContextMenu__RemoveMenuItem_x                             0x99E360
#define CContextMenu__RemoveAllMenuItems_x                         0x99E380
#define CContextMenu__CheckMenuItem_x                              0x99E3E0
#define CContextMenu__SetMenuItem_x                                0x99E280
#define CContextMenu__AddSeparator_x                               0x99E1E0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99E970
#define CContextMenuManager__RemoveMenu_x                          0x99E9E0
#define CContextMenuManager__PopupMenu_x                           0x99EAA0
#define CContextMenuManager__Flush_x                               0x99E910
#define CContextMenuManager__GetMenu_x                             0x49D9F0
#define CContextMenuManager__CreateDefaultMenu_x                   0x744350

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x929170
#define CChatService__GetFriendName_x                              0x929180

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99AED0
#define CComboWnd__Draw_x                                          0x99A360
#define CComboWnd__GetCurChoice_x                                  0x99ACA0
#define CComboWnd__GetListRect_x                                   0x99A810
#define CComboWnd__GetTextRect_x                                   0x99AF40
#define CComboWnd__InsertChoice_x                                  0x99A9A0
#define CComboWnd__SetColors_x                                     0x99A970
#define CComboWnd__SetChoice_x                                     0x99AC80
#define CComboWnd__GetItemCount_x                                  0x99ACB0
#define CComboWnd__GetCurChoiceText_x                              0x99ACE0
#define CComboWnd__GetChoiceText_x                                 0x99ACC0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99AA40

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x741990
#define CContainerWnd__vftable_x                                   0xB59804
#define CContainerWnd__SetContainer_x                              0x7431F0

// CDisplay
#define CDisplay__cameraType_x                                     0xEDCECC
#define CDisplay__ZoneMainUI_x                                     0x569D60
#define CDisplay__PreZoneMainUI_x                                  0x569D70
#define CDisplay__CleanGameUI_x                                    0x56F300
#define CDisplay__GetClickedActor_x                                0x561B30
#define CDisplay__GetUserDefinedColor_x                            0x5598B0
#define CDisplay__GetWorldFilePath_x                               0x563640
#define CDisplay__ReloadUI_x                                       0x569080
#define CDisplay__WriteTextHD2_x                                   0x55E1B0
#define CDisplay__TrueDistance_x                                   0x565620
#define CDisplay__SetViewActor_x                                   0x561450
#define CDisplay__GetFloorHeight_x                                 0x55E480
#define CDisplay__SetRenderWindow_x                                0x55CE30
#define CDisplay__ToggleScreenshotMode_x                           0x560F20
#define CDisplay__RealRender_World_x                               0x55C140

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C06B0

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A1920
#define CEditWnd__EnsureCaretVisible_x                             0x9A3C80
#define CEditWnd__GetCaretPt_x                                     0x9A2AF0
#define CEditWnd__GetCharIndexPt_x                                 0x9A28A0
#define CEditWnd__GetDisplayString_x                               0x9A2750
#define CEditWnd__GetHorzOffset_x                                  0x9A0E80
#define CEditWnd__GetLineForPrintableChar_x                        0x9A3B90
#define CEditWnd__GetSelStartPt_x                                  0x9A2B50
#define CEditWnd__GetSTMLSafeText_x                                0x9A2560
#define CEditWnd__PointFromPrintableChar_x                         0x9A37E0
#define CEditWnd__ReplaceSelection_x                               0x9A33A0
#define CEditWnd__SelectableCharFromPoint_x                        0x9A3940
#define CEditWnd__SetEditable_x                                    0x9A2C20
#define CEditWnd__SetWindowText_x                                  0x9A22B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62CD90
#define CEverQuest__ClickedPlayer_x                                0x61E2B0
#define CEverQuest__CreateTargetIndicator_x                        0x63E700
#define CEverQuest__DeleteTargetIndicator_x                        0x63E790
#define CEverQuest__DoTellWindow_x                                 0x4EFE50
#define CEverQuest__OutputTextToLog_x                              0x4F0120
#define CEverQuest__DropHeldItemOnGround_x                         0x613380
#define CEverQuest__dsp_chat_x                                     0x4F04F0
#define CEverQuest__trimName_x                                     0x639CF0
#define CEverQuest__Emote_x                                        0x62D450
#define CEverQuest__EnterZone_x                                    0x6270F0
#define CEverQuest__GetBodyTypeDesc_x                              0x6329B0
#define CEverQuest__GetClassDesc_x                                 0x632FF0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6335F0
#define CEverQuest__GetDeityDesc_x                                 0x63CEB0
#define CEverQuest__GetLangDesc_x                                  0x6337B0
#define CEverQuest__GetRaceDesc_x                                  0x632FD0
#define CEverQuest__InterpretCmd_x                                 0x63D520
#define CEverQuest__LeftClickedOnPlayer_x                          0x617870
#define CEverQuest__LMouseUp_x                                     0x615930
#define CEverQuest__RightClickedOnPlayer_x                         0x618460
#define CEverQuest__RMouseUp_x                                     0x616BF0
#define CEverQuest__SetGameState_x                                 0x613100
#define CEverQuest__UPCNotificationFlush_x                         0x639C10
#define CEverQuest__IssuePetCommand_x                              0x634DB0
#define CEverQuest__ReportSuccessfulHeal_x                         0x62E250
#define CEverQuest__ReportSuccessfulHit_x                          0x62ED30

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x755350
#define CGaugeWnd__CalcLinesFillRect_x                             0x7553B0
#define CGaugeWnd__Draw_x                                          0x754960

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4990
#define CGuild__GetGuildName_x                                     0x4B31B0
#define CGuild__GetGuildIndex_x                                    0x4B38D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x772850

//CHotButton
#define CHotButton__SetButtonSize_x                                0x652120
#define CHotButton__SetCheck_x                                     0x651D60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x77F9F0
#define CInvSlotMgr__MoveItem_x                                    0x77E600
#define CInvSlotMgr__SelectSlot_x                                  0x77FAB0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77CE40
#define CInvSlot__SliderComplete_x                                 0x77A190
#define CInvSlot__GetItemBase_x                                    0x779A20
#define CInvSlot__UpdateItem_x                                     0x779C10

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7808D0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7812F0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x7998F0
#define CItemDisplayWnd__UpdateStrings_x                           0x7991D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78E120
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78E690
#define CItemDisplayWnd__RequestConvertItem_x                      0x79A720

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x854E50
#define CSpellDisplayWnd__UpdateStrings_x                          0x854DC0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x88A360

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A0800

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x528AB0

// CLabel
#define CLabel__UpdateText_x                                       0x7A7340

// CListWnd
#define CListWnd__CListWnd_x                                       0x96D270
#define CListWnd__dCListWnd_x                                      0x96D570
#define CListWnd__vftable_x                                        0xB8B1A0
#define CListWnd__AddColumn_x                                      0x972170
#define CListWnd__AddColumn1_x                                     0x972290
#define CListWnd__AddLine_x                                        0x972600
#define CListWnd__AddString_x                                      0x972400
#define CListWnd__CalculateFirstVisibleLine_x                      0x971F20
#define CListWnd__CalculateVSBRange_x                              0x971D00
#define CListWnd__ClearSel_x                                       0x972EF0
#define CListWnd__ClearAllSel_x                                    0x972F40
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9739F0
#define CListWnd__Compare_x                                        0x971480
#define CListWnd__Draw_x                                           0x96D730
#define CListWnd__DrawColumnSeparators_x                           0x970280
#define CListWnd__DrawHeader_x                                     0x9706E0
#define CListWnd__DrawItem_x                                       0x970D20
#define CListWnd__DrawLine_x                                       0x9703F0
#define CListWnd__DrawSeparator_x                                  0x970320
#define CListWnd__EnableLine_x                                     0x96FB30
#define CListWnd__EnsureVisible_x                                  0x973910
#define CListWnd__ExtendSel_x                                      0x972E30
#define CListWnd__GetColumnTooltip_x                               0x96F6B0
#define CListWnd__GetColumnMinWidth_x                              0x96F720
#define CListWnd__GetColumnWidth_x                                 0x96F630
#define CListWnd__GetCurSel_x                                      0x96EFD0
#define CListWnd__GetItemAtPoint_x                                 0x96FDB0
#define CListWnd__GetItemAtPoint1_x                                0x96FE20
#define CListWnd__GetItemData_x                                    0x96F050
#define CListWnd__GetItemHeight_x                                  0x96F400
#define CListWnd__GetItemIcon_x                                    0x96F1D0
#define CListWnd__GetItemRect_x                                    0x96FC20
#define CListWnd__GetItemText_x                                    0x96F090
#define CListWnd__GetSelList_x                                     0x972F90
#define CListWnd__GetSeparatorRect_x                               0x970090
#define CListWnd__InsertLine_x                                     0x972A60
#define CListWnd__RemoveLine_x                                     0x972C80
#define CListWnd__SetColors_x                                      0x971CD0
#define CListWnd__SetColumnJustification_x                         0x971A00
#define CListWnd__SetColumnLabel_x                                 0x9723A0
#define CListWnd__SetColumnWidth_x                                 0x971910
#define CListWnd__SetCurSel_x                                      0x972D80
#define CListWnd__SetItemColor_x                                   0x9735D0
#define CListWnd__SetItemData_x                                    0x973590
#define CListWnd__SetItemText_x                                    0x9731B0
#define CListWnd__ShiftColumnSeparator_x                           0x971AC0
#define CListWnd__Sort_x                                           0x971770
#define CListWnd__ToggleSel_x                                      0x972DB0
#define CListWnd__SetColumnsSizable_x                              0x971B60
#define CListWnd__SetItemWnd_x                                     0x973450
#define CListWnd__GetItemWnd_x                                     0x96F220
#define CListWnd__SetItemIcon_x                                    0x973230
#define CListWnd__CalculateCustomWindowPositions_x                 0x972020
#define CListWnd__SetVScrollPos_x                                  0x9718F0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7BE7D0

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7B9A50
#define MapViewMap__dMapViewMap_x                                  0x7B9B90
#define MapViewMap__vftable_x                                      0xB60C38
#define MapViewMap__Clear_x                                        0x7BA4A0
#define MapViewMap__SetZoom_x                                      0x7C36C0
#define MapViewMap__HandleLButtonDown_x                            0x7B9CA0
#define MapViewMap__GetWorldCoordinates_x                          0x7BCE10

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E1E20
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E2780
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E2E10
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E60F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E08A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EC310
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E1A70

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F5F40
#define CPacketScrambler__hton_x                                   0x8F5F30

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x996150
#define CSidlManagerBase__CreatePageWnd_x                          0x995930
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x990DF0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x990D80
#define CSidlManagerBase__FindAnimation1_x                         0x991070
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x991440
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x991270
#define CSidlManagerBase__CreateLabel_x                            0x84AB40
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x9948F0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x994B90
#define CSidlManagerBase__CreateXWnd_x                             0x994BD0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84AF80
#define CSidlManager__CreateXWnd_x                                 0x84A5B0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98CDB0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98CCB0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BA900
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98C630
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98C320
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98C3F0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98C4C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98D670
#define CSidlScreenWnd__EnableIniStorage_x                         0x98DB50
#define CSidlScreenWnd__GetChildItem_x                             0x98DAD0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98D860
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97BEF0
#define CSidlScreenWnd__Init1_x                                    0x98BDD0
#define CSidlScreenWnd__LoadIniInfo_x                              0x98DBA0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98E760
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98B1C0
#define CSidlScreenWnd__m_layoutCopy_x                             0x161C520
#define CSidlScreenWnd__StoreIniInfo_x                             0x98E2E0
#define CSidlScreenWnd__StoreIniVis_x                              0x98E650
#define CSidlScreenWnd__vftable_x                                  0xB8BB74
#define CSidlScreenWnd__WndNotification_x                          0x98D540

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6BFE80
#define CSkillMgr__GetSkillCap_x                                   0x6C0050
#define CSkillMgr__GetNameToken_x                                  0x6BF690
#define CSkillMgr__IsActivatedSkill_x                              0x6BF780
#define CSkillMgr__IsCombatSkill_x                                 0x6BF6F0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x99FA60
#define CSliderWnd__SetValue_x                                     0x99F890
#define CSliderWnd__SetNumTicks_x                                  0x99F8F0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x851820

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A8F70
#define CStmlWnd__CalculateHSBRange_x                              0x9A9EF0
#define CStmlWnd__CalculateVSBRange_x                              0x9A9E60
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AED60
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9AFA00
#define CStmlWnd__ForceParseNow_x                                  0x9A94E0
#define CStmlWnd__GetNextTagPiece_x                                0x9AECC0
#define CStmlWnd__GetVisibleText_x                                 0x9A9500
#define CStmlWnd__InitializeWindowVariables_x                      0x9AF850
#define CStmlWnd__MakeStmlColorTag_x                               0x9A8610
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A8680
#define CStmlWnd__SetSTMLText_x                                    0x9A73F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B0C20
#define CStmlWnd__UpdateHistoryString_x                            0x9AFC00

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A62A0
#define CTabWnd__DrawCurrentPage_x                                 0x9A6C30
#define CTabWnd__DrawTab_x                                         0x9A6820
#define CTabWnd__GetCurrentPage_x                                  0x9A5A00
#define CTabWnd__GetCurrentTabIndex_x                              0x9A59F0
#define CTabWnd__GetPageFromTabIndex_x                             0x9A6760
#define CTabWnd__GetPageInnerRect_x                                0x9A5C30
#define CTabWnd__GetTabInnerRect_x                                 0x9A5B70
#define CTabWnd__GetTabRect_x                                      0x9A5A30
#define CTabWnd__InsertPage_x                                      0x9A5E20
#define CTabWnd__RemovePage_x                                      0x9A5F70
#define CTabWnd__SetPage_x                                         0x9A5CB0
#define CTabWnd__SetPageRect_x                                     0x9A61A0
#define CTabWnd__UpdatePage_x                                      0x9A6610

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A53F0
#define CPageWnd__SetTabText_x                                     0x9A5390


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC9E0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x978390
#define CTextureFont__DrawWrappedText1_x                           0x9782C0
#define CTextureFont__DrawWrappedText2_x                           0x978480
#define CTextureFont__GetTextExtent_x                              0x978690

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9B73B0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x962D20

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x5417C0
#define CXStr__CXStr1_x                                            0x482730
#define CXStr__CXStr3_x                                            0x94A630
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94A870
#define CXStr__operator_equal1_x                                   0x94A8B0
#define CXStr__operator_plus_equal1_x                              0x94B310
#define CXStr__SetString_x                                         0x94D1B0
#define CXStr__operator_char_p_x                                   0x94AD60
#define CXStr__GetChar_x                                           0x94CB10
#define CXStr__Delete_x                                            0x94C3E0
#define CXStr__GetUnicode_x                                        0x94CB80
#define CXStr__Insert_x                                            0x94CBE0
#define CXStr__FindNext_x                                          0x94C830
#define CXStr__gFreeLists_x                                        0xEAA398
#define CXStr__gCXStrAccess_x                                      0x161BDA8

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99DA60

// CXWnd
#define CXWnd__BringToTop_x                                        0x97F9E0
#define CXWnd__ClrFocus_x                                          0x97F370
#define CXWnd__Destroy_x                                           0x97F410
#define CXWnd__DoAllDrawing_x                                      0x97B540
#define CXWnd__DrawChildren_x                                      0x97B510
#define CXWnd__DrawColoredRect_x                                   0x97BAD0
#define CXWnd__DrawTooltip_x                                       0x979A80
#define CXWnd__DrawTooltipAtPoint_x                                0x979B40
#define CXWnd__GetBorderFrame_x                                    0x97B770
#define CXWnd__GetChildItem_x                                      0x97FC00
#define CXWnd__GetChildWndAt_x                                     0x97FA80
#define CXWnd__GetClientClipRect_x                                 0x97DB60
#define CXWnd__GetRelativeRect_x                                   0x97DED0
#define CXWnd__GetScreenClipRect_x                                 0x97DC30
#define CXWnd__GetScreenRect_x                                     0x97DE00
#define CXWnd__GetTooltipRect_x                                    0x97BB20
#define CXWnd__GetWindowTextA_x                                    0x4EFCF0
#define CXWnd__IsActive_x                                          0x97C270
#define CXWnd__IsDescendantOf_x                                    0x97E890
#define CXWnd__IsReallyVisible_x                                   0x97E8C0
#define CXWnd__IsType_x                                            0x980200
#define CXWnd__Minimize_x                                          0x97F000
#define CXWnd__Move_x                                              0x97E930
#define CXWnd__Move1_x                                             0x97EA30
#define CXWnd__ProcessTransition_x                                 0x97F4F0
#define CXWnd__Refade_x                                            0x97ED00
#define CXWnd__Resize_x                                            0x97EF90
#define CXWnd__Right_x                                             0x97F7D0
#define CXWnd__SetFocus_x                                          0x97F330
#define CXWnd__SetFont_x                                           0x97F3A0
#define CXWnd__SetKeyTooltip_x                                     0x97FFD0
#define CXWnd__SetMouseOver_x                                      0x97CC10
#define CXWnd__SetParent_x                                         0x97E5A0
#define CXWnd__StartFade_x                                         0x97E770
#define CXWnd__vftable_x                                           0xB8B5E8
#define CXWnd__CXWnd_x                                             0x978950
#define CXWnd__dCXWnd_x                                            0x979040

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BB950

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x982A60
#define CXWndManager__DrawWindows_x                                0x982BB0
#define CXWndManager__GetKeyboardFlags_x                           0x985550
#define CXWndManager__HandleKeyboardMsg_x                          0x985130
#define CXWndManager__RemoveWnd_x                                  0x985810
#define CXWndManager__RemovePendingDeletionWnd_x                   0x985CC0

// CDBStr
#define CDBStr__GetString_x                                        0x5583B0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1170
#define CharacterZoneClient__CastSpell_x                           0x4C5CB0
#define CharacterZoneClient__Cur_HP_x                              0x4D9BF0
#define CharacterZoneClient__Cur_Mana_x                            0x4E0E40
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCD60
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDD00
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C92D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E6ED0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B8770
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B88C0
#define CharacterZoneClient__GetHPRegen_x                          0x4E6910
#define CharacterZoneClient__GetManaRegen_x                        0x4E7310
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4CA100
#define CharacterZoneClient__Max_Endurance_x                       0x6805E0
#define CharacterZoneClient__Max_HP_x                              0x4D9A20
#define CharacterZoneClient__Max_Mana_x                            0x6803C0
#define CharacterZoneClient__SpellDuration_x                       0x4C9B40
#define CharacterZoneClient__TotalEffect_x                         0x4CD7E0
#define CharacterZoneClient__UseSkill_x                            0x4E84E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9169C0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6989B0

// PcClient
#define PcClient__PcClient_x                                       0x6759B0
#define PcClient__GetConLevel_x                                    0x678730

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0290
#define CCharacterListWnd__EnterWorld_x                            0x4BFC60
#define CCharacterListWnd__Quit_x                                  0x4BF980
#define CCharacterListWnd__UpdateList_x                            0x4BFE50

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x657EC0
#define EQ_Item__CreateItemTagString_x                             0x8EED20
#define EQ_Item__IsStackable_x                                     0x8F3ED0
#define EQ_Item__GetImageNum_x                                     0x8F0A00
#define EQ_Item__CreateItemClient_x                                0x656E30
#define EQ_Item__GetItemValue_x                                    0x8F1C50
#define EQ_Item__ValueSellMerchant_x                               0x8F5C00
#define EQ_Item__IsKeyRingItem_x                                   0x8F36A0
#define EQ_Item__CanGemFitInSlot_x                                 0x8EE530
#define EQ_Item__CanGoInBag_x                                      0x657FE0
#define EQ_Item__IsEmpty_x                                         0x8F3070
#define EQ_Item__GetMaxItemCount_x                                 0x8F2050
#define EQ_Item__GetHeldItem_x                                     0x8F08B0
#define ItemClient__dItemClient_x                                  0x656D80

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x5793B0
#define EQ_LoadingS__Array_x                                       0xD98D30

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8FFDD0
#define EQ_PC__GetCombatAbility_x                                  0x900350
#define EQ_PC__GetCombatAbilityTimer_x                             0x9003C0
#define EQ_PC__GetItemRecastTimer_x                                0x683750
#define EQ_PC__HasLoreItem_x                                       0x679080
#define EQ_PC__AlertInventoryChanged_x                             0x677FF0
#define EQ_PC__GetPcZoneClient_x                                   0x6A90A0
#define EQ_PC__RemoveMyAffect_x                                    0x686FB0
#define EQ_PC__GetKeyRingItems_x                                   0x900EB0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x900A10
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x901090

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D7C10
#define EQItemList__add_object_x                                   0x608260
#define EQItemList__add_item_x                                     0x5D81F0
#define EQItemList__delete_item_x                                  0x5D8240
#define EQItemList__FreeItemList_x                                 0x5D8150

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554750

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69A3E0
#define EQPlayer__dEQPlayer_x                                      0x68CB20
#define EQPlayer__DoAttack_x                                       0x6A2DD0
#define EQPlayer__EQPlayer_x                                       0x68D370
#define EQPlayer__SetNameSpriteState_x                             0x691920
#define EQPlayer__SetNameSpriteTint_x                              0x6927F0
#define PlayerBase__HasProperty_j_x                                0x9EB2B0
#define EQPlayer__IsTargetable_x                                   0x9EB810
#define EQPlayer__CanSee_x                                         0x9EB600
#define EQPlayer__CanSee1_x                                        0x9EB6D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EB370

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A6B90
#define PlayerZoneClient__GetLevel_x                               0x6A90E0
#define PlayerZoneClient__IsValidTeleport_x                        0x609710
#define PlayerZoneClient__LegalPlayerRace_x                        0x571360

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69D580
#define EQPlayerManager__GetSpawnByName_x                          0x69D630
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69D6C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65B810
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65B8E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65B920
#define KeypressHandler__ClearCommandStateArray_x                  0x65CDE0
#define KeypressHandler__HandleKeyDown_x                           0x65CE00
#define KeypressHandler__HandleKeyUp_x                             0x65CEA0
#define KeypressHandler__SaveKeymapping_x                          0x65D450

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x914850

// StringTable
#define StringTable__getString_x                                   0x90F5A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x683150
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x681310
#define PcZoneClient__GetPcSkillLimit_x                            0x686C00
#define PcZoneClient__RemovePetEffect_x                            0x687260
#define PcZoneClient__HasAlternateAbility_x                        0x680220
#define PcZoneClient__CanEquipItem_x                               0x6808E0
#define PcZoneClient__GetItemByID_x                                0x683C80
#define PcZoneClient__RemoveBuffEffect_x                           0x687310
#define PcZoneClient__BandolierSwap_x                              0x6818C0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6836F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x60E330

// IconCache
#define IconCache__GetIcon_x                                       0x749D50

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x740860
#define CContainerMgr__CloseContainer_x                            0x740B80
#define CContainerMgr__OpenExperimentContainer_x                   0x7416E0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x819D90

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650520

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7AF6B0
#define CLootWnd__RequestLootSlot_x                                0x7AE8E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3680
#define EQ_Spell__SpellAffects_x                                   0x5A3B90
#define EQ_Spell__SpellAffectBase_x                                0x5A38B0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1200
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D11B0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4B10
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A3DA0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4B40
#define __IsResEffectSpell_x                                       0x4D09B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1740

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x866B60
#define CTargetWnd__WndNotification_x                              0x866300
#define CTargetWnd__RefreshTargetBuffs_x                           0x866660
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x865100

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86B6E0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86E7B0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x552300
#define CTaskManager__HandleMessage_x                              0x5501E0
#define CTaskManager__GetTaskStatus_x                              0x5523B0
#define CTaskManager__GetElementDescription_x                      0x552430

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E280
#define EqSoundManager__PlayScriptMp3_x                            0x59E480
#define EqSoundManager__SoundAssistPlay_x                          0x6C4350
#define EqSoundManager__WaveInstancePlay_x                         0x6C3840

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541470

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A4A50
#define CTextureAnimation__SetCurCell_x                            0x9A4810

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x5819B0
#define CAltAbilityData__GetMercMaxRank_x                          0x581940

// CTargetRing
#define CTargetRing__Cast_x                                        0x64DD30

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x644460
#define CharacterBase__GetItemByGlobalIndex_x                      0x926E80
#define CharacterBase__GetItemByGlobalIndex1_x                     0x926ED0
#define CharacterBase__GetMemorizedSpell_x                         0x656C70
#define CharacterBase__IsExpansionFlag_x                           0x5D1890

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x725700
#define CCastSpellWnd__IsBardSongPlaying_x                         0x725FC0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726070

// messages
#define msg_spell_worn_off_x                                       0x5C9050
#define msg_new_text_x                                             0x5BCA60
#define __msgTokenTextParam_x                                      0x5CB4B0
#define msgTokenText_x                                             0x5CB8C0

// SpellManager
#define SpellManager__vftable_x                                    0xB37520
#define SpellManager__SpellManager_x                               0x6C7F70
#define Spellmanager__LoadTextSpells_x                             0x6C8870
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8140

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9EFB10

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x91FD90
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9200E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A77B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7455F0
#define CCursorAttachment__AttachToCursor1_x                       0x745630
#define CCursorAttachment__Deactivate_x                            0x746BC0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B5820
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B5F80
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B5C00

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522270
#define CFindItemWnd__WndNotification_x                            0x523140
#define CFindItemWnd__Update_x                                     0x523D90
#define CFindItemWnd__PickupSelectedItem_x                         0x521910

// IString
#define IString__Append_x                                          0x557E30

// Camera
#define EverQuest__Cameras_x                                       0xDAC0E4

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CF50
#define LootFiltersManager__GetItemFilterData_x                    0x52C890
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C8C0
#define LootFiltersManager__SetItemLootFilter_x                    0x52CAD0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8067A0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F57D0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BE790

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73D1D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92AB40
#define CDistillerInfo__Instance_x                                 0x92AA80

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x75FF80
#define CGroupWnd__UpdateDisplay_x                                 0x75F1D0

// ItemBase
#define ItemBase__IsLore_x                                         0x8F3740
#define ItemBase__IsLoreEquipped_x                                 0x8F37B0

#define MultipleItemMoveManager__ProcessMove_x                     0x66C9B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x6081C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x608300
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608360

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B2EF0

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517C70

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502790
#define FactionManagerClient__HandleFactionMessage_x               0x502FB0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5037D0
#define FactionManagerClient__GetMaxFaction_x                      0x5037EF
#define FactionManagerClient__GetMinFaction_x                      0x5037A0

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F580

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x977000

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E410

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F7F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580B90
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x5815B0

// CTargetManager
#define CTargetManager__Get_x                                      0x6CBF00

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B2EF0

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC7A0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D80F0

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE49778

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DC8C0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D220

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6DDA70

// AchievementManager
#define AchievementManager__Instance_x                             0x47E370

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
