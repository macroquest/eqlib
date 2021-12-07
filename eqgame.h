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
#define __ExpectedVersionDate                                     "Dec  1 2021"
#define __ExpectedVersionTime                                     "10:42:10"
#define __ActualVersionDate_x                                      0xB516A4
#define __ActualVersionTime_x                                      0xB51698
#define __ActualVersionBuild_x                                     0xB4187C

// Memory Protection
#define __MemChecker0_x                                            0x663250
#define __MemChecker1_x                                            0x94FEF0
#define __MemChecker2_x                                            0x6DDEB0
#define __MemChecker3_x                                            0x6DDE20
#define __MemChecker4_x                                            0x636300
#define __EncryptPad0_x                                            0xE51BF0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDACDC8
#define __ScreenY_x                                                0xDACDD0
#define __ScreenX_x                                                0xDACDD4
#define __ScreenXMax_x                                             0xDACDD8
#define __ScreenYMax_x                                             0xDACDDC
#define __InChatMode_x                                             0xDACE1C
#define __RunWalkState_x                                           0xDACE20
#define DI8__Mouse_Copy_x                                          0xDACE34
#define __MouseLook_x                                              0xDACEB2
#define __NetStatusToggle_x                                        0xDACEB5
#define __pulAutoRun_x                                             0xDACED0
#define __Clicks_x                                                 0xDACEEC
#define __RMouseHeldTime_x                                         0xDACF54
#define __LMouseHeldTime_x                                         0xDACF58
#define __ZoneType_x                                               0xDAD2B0
#define __ShiftKeyDown_x                                           0xDAD4B0
#define __AutoSkillArray_x                                         0xDAD950
#define __RangeAttackReady_x                                       0xDADC34
#define __AttackOnAssist_x                                         0xDADDAC
#define __ShowNames_x                                              0xDADDF0
#define __PCNames_x                                                0xDADF40
#define __UseTellWindows_x                                         0xDAE0D8
#define __pulForward_x                                             0xDAE110
#define __pulBackward_x                                            0xDAE114
#define __pulTurnRight_x                                           0xDAE118
#define __pulTurnLeft_x                                            0xDAE11C
#define __pulStrafeLeft_x                                          0xDAE120
#define __pulStrafeRight_x                                         0xDAE124
#define __LastTell_x                                               0xDAE990
#define __ServerName_x                                             0xDE3254
#define __DoAbilityList_x                                          0xDE3294
#define __SocialChangedList_x                                      0xDE32DC
#define __Socials_x                                                0xDE3354
#define __Inviter_x                                                0xE4B6F0
#define __Attack_x                                                 0xE4B773
#define __Autofire_x                                               0xE4B774

// Misc Globals
#define __do_loot_x                                                0x5E0580
#define __gfMaxZoomCameraDistance_x                                0xB4951C
#define __gfMaxCameraDistance_x                                    0xB71EE0
#define __CurrentSocial_x                                          0xC5D460
#define __BindList_x                                               0xDA24E8
#define g_eqCommandStates_x                                        0xDA3250
#define __CommandList_x                                            0xDA3DD8
#define __ScreenMode_x                                             0xEDF184
#define __GroupCount_x                                             0xF92E7A
#define __gWorld_x                                                 0xF9308C
#define __gpbCommandEvent_x                                        0xF93198
#define __ServerHost_x                                             0xF93363
#define __Guilds_x                                                 0xF972E0
#define __MouseEventTime_x                                         0xF98D0C
#define DI8__Mouse_Check_x                                         0xF9D844
#define __heqmain_x                                                0xF9FCD8
#define DI8__Mouse_x                                               0xF9FCE4
#define __HWnd_x                                                   0xF9FCE8
#define __Mouse_x                                                  0xF9FD70
#define DI8__Main_x                                                0xF9FD84
#define DI8__Keyboard_x                                            0xF9FD88
#define __LoginName_x                                              0xFA0454
#define __CurrentMapLabel_x                                        0xFB08E4
#define __TargetAggroHolder_x                                      0xFB3298
#define __GroupAggro_x                                             0xFB32D8
#define __SubscriptionType_x                                       0xFE7538

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF93678
#define instEQZoneInfo_x                                           0xDAD0A8
#define pinstActiveBanker_x                                        0xF90D78
#define pinstActiveCorpse_x                                        0xF90D70
#define pinstActiveGMaster_x                                       0xF90D74
#define pinstActiveMerchant_x                                      0xF90D6C
#define pinstAltAdvManager_x                                       0xEDFF88
#define pinstBandageTarget_x                                       0xF90D88
#define pinstCEverQuest_x                                          0xF9FCEC
#define pinstCamActor_x                                            0xEDF178
#define pinstCDBStr_x                                              0xEDECF8
#define pinstCDisplay_x                                            0xF90DF4
#define pinstControlledMissile_x                                   0xF90DCC
#define pinstControlledPlayer_x                                    0xF90DC0
#define pinstCResolutionHandler_x                                  0x1622408
#define pinstCSidlManager_x                                        0x16213A4
#define pinstCXWndManager_x                                        0x162139C
#define instDynamicZone_x                                          0xF971B8
#define pinstDZMember_x                                            0xF972C8
#define pinstDZTimerInfo_x                                         0xF972CC
#define pinstEqLogin_x                                             0xF9FDA0
#define instEQMisc_x                                               0xD968D8
#define pinstEQSoundManager_x                                      0xEE0898
#define pinstEQSpellStrings_x                                      0xECF998
#define instExpeditionLeader_x                                     0xF97202
#define instExpeditionName_x                                       0xF97242
#define pinstSGraphicsEngine_x                                     0x16221D4
#define pinstGroup_x                                               0xF92E76
#define pinstImeManager_x                                          0x16213A0
#define pinstLocalPC_x                                             0xF90DE4
#define pinstLocalPlayer_x                                         0xF90D68
#define pinstMercenaryData_x                                       0xF9A7FC
#define pinstMercenaryStats_x                                      0xFB3364
#define pinstModelPlayer_x                                         0xF90D80
#define pinstRenderInterface_x                                     0x16221E0
#define pinstSkillMgr_x                                            0xF9C8F0
#define pinstSpawnManager_x                                        0xF9B3C8
#define pinstSpellManager_x                                        0xF9CB30
#define pinstSpellSets_x                                           0xE4439C
#define pinstStringTable_x                                         0xF90DF0
#define pinstSwitchManager_x                                       0xF90C18
#define pinstTarget_x                                              0xF90DBC
#define pinstTargetObject_x                                        0xF90DDC
#define pinstTargetSwitch_x                                        0xF90DE0
#define pinstTaskMember_x                                          0xD96420
#define pinstTrackTarget_x                                         0xF90DC4
#define pinstTradeTarget_x                                         0xF90D7C
#define instTributeActive_x                                        0xD968F9
#define pinstViewActor_x                                           0xEDF174
#define pinstWorldData_x                                           0xF90DEC
#define pinstZoneAddr_x                                            0xDAD348
#define pinstPlayerPath_x                                          0xF9B460
#define pinstTargetIndicator_x                                     0xF9CD98
#define EQObject_Top_x                                             0xF90DD8

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEDEDAC
#define pinstCAchievementsWnd_x                                    0xEDEE54
#define pinstCActionsWnd_x                                         0xEDF16C
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDF194
#define pinstCAdvancedLootWnd_x                                    0xEDF170
#define pinstCAdventureLeaderboardWnd_x                            0xFAA108
#define pinstCAdventureRequestWnd_x                                0xFAA1B8
#define pinstCAdventureStatsWnd_x                                  0xFAA268
#define pinstCAggroMeterWnd_x                                      0xEDEEE4
#define pinstCAlarmWnd_x                                           0xEDEDA4
#define pinstCAlertHistoryWnd_x                                    0xEDF150
#define pinstCAlertStackWnd_x                                      0xEDF130
#define pinstCAlertWnd_x                                           0xEDF138
#define pinstCAltStorageWnd_x                                      0xFAA5C8
#define pinstCAudioTriggersWindow_x                                0xEC1CC8
#define pinstCAuraWnd_x                                            0xEDF1B4
#define pinstCAvaZoneWnd_x                                         0xEDEE3C
#define pinstCBandolierWnd_x                                       0xEDF1C4
#define pinstCBankWnd_x                                            0xEDF154
#define pinstCBarterMerchantWnd_x                                  0xFAB808
#define pinstCBarterSearchWnd_x                                    0xFAB8B8
#define pinstCBarterWnd_x                                          0xFAB968
#define pinstCBazaarConfirmationWnd_x                              0xEDEDB8
#define pinstCBazaarSearchWnd_x                                    0xEDEE80
#define pinstCBazaarWnd_x                                          0xEDEE28
#define pinstCBlockedBuffWnd_x                                     0xEDEEAC
#define pinstCBlockedPetBuffWnd_x                                  0xEDEEB4
#define pinstCBodyTintWnd_x                                        0xEDEDD8
#define pinstCBookWnd_x                                            0xEDF15C
#define pinstCBreathWnd_x                                          0xEDEDB0
#define pinstCBuffWindowNORMAL_x                                   0xEDEEA4
#define pinstCBuffWindowSHORT_x                                    0xEDEEA8
#define pinstCBugReportWnd_x                                       0xEDEE60
#define pinstCButtonWnd_x                                          0x1621608
#define pinstCCastingWnd_x                                         0xEDEEE0
#define pinstCCastSpellWnd_x                                       0xEDEEF0
#define pinstCCharacterListWnd_x                                   0xEDEE84
#define pinstCChatWindowManager_x                                  0xFAC410
#define pinstCClaimWnd_x                                           0xFAC568
#define pinstCColorPickerWnd_x                                     0xEDEE98
#define pinstCCombatAbilityWnd_x                                   0xEDF1A8
#define pinstCCombatSkillsSelectWnd_x                              0xEDF1A4
#define pinstCCompassWnd_x                                         0xEDF1B8
#define pinstCConfirmationDialog_x                                 0xFB1430
#define pinstCContainerMgr_x                                       0xEDEDA8
#define pinstCContextMenuManager_x                                 0x1621358
#define pinstCCursorAttachment_x                                   0xEDEED8
#define pinstCDynamicZoneWnd_x                                     0xFACB30
#define pinstCEditLabelWnd_x                                       0xEDEE44
#define pinstCEQMainWnd_x                                          0xFACD78
#define pinstCEventCalendarWnd_x                                   0xEDED9C
#define pinstCExtendedTargetWnd_x                                  0xEDEEDC
#define pinstCPlayerCustomizationWnd_x                             0xEDEE8C
#define pinstCFactionWnd_x                                         0xEDEEEC
#define pinstCFellowshipWnd_x                                      0xFACF78
#define pinstCFileSelectionWnd_x                                   0xEDF1B0
#define pinstCFindItemWnd_x                                        0xEDEDE0
#define pinstCFindLocationWnd_x                                    0xFAD0D0
#define pinstCFriendsWnd_x                                         0xEDF1AC
#define pinstCGemsGameWnd_x                                        0xEDED98
#define pinstCGiveWnd_x                                            0xEDEE34
#define pinstCGroupSearchFiltersWnd_x                              0xEDEEC4
#define pinstCGroupSearchWnd_x                                     0xFAD4C8
#define pinstCGroupWnd_x                                           0xFAD578
#define pinstCGuildBankWnd_x                                       0xFAD628
#define pinstCGuildCreationWnd_x                                   0xFAD6D8
#define pinstCGuildMgmtWnd_x                                       0xFAD788
#define pinstCharacterCreation_x                                   0xEDEED4
#define pinstCHelpWnd_x                                            0xEDF13C
#define pinstCHeritageSelectionWnd_x                               0xEDEE90
#define pinstCHotButtonWnd_x                                       0xFAF8E0
#define pinstCHotButtonWnd1_x                                      0xFAF8E0
#define pinstCHotButtonWnd2_x                                      0xFAF8E4
#define pinstCHotButtonWnd3_x                                      0xFAF8E8
#define pinstCHotButtonWnd4_x                                      0xFAF8EC
#define pinstCIconSelectionWnd_x                                   0xEDEE5C
#define pinstCInspectWnd_x                                         0xEDEE50
#define pinstCInventoryWnd_x                                       0xEDF140
#define pinstCInvSlotMgr_x                                         0xEDF1C8
#define pinstCItemDisplayManager_x                                 0xFAFE38
#define pinstCItemExpTransferWnd_x                                 0xFAFF68
#define pinstCItemOverflowWnd_x                                    0xEDEE14
#define pinstCJournalCatWnd_x                                      0xEDEDC8
#define pinstCJournalNPCWnd_x                                      0xEDEDBC
#define pinstCJournalTextWnd_x                                     0xEDEDBC
#define pinstCKeyRingWnd_x                                         0xEDF148
#define pinstCLargeDialogWnd_x                                     0xFB20B0
#define pinstCLayoutCopyWnd_x                                      0xFB02B8
#define pinstCLFGuildWnd_x                                         0xFB0368
#define pinstCLoadskinWnd_x                                        0xEDEDA0
#define pinstCLootFiltersCopyWnd_x                                 0xEDE208
#define pinstCLootFiltersWnd_x                                     0xEDEDC0
#define pinstCLootSettingsWnd_x                                    0xEDEDC4
#define pinstCLootWnd_x                                            0xEDF160
#define pinstCMailAddressBookWnd_x                                 0xEDEE74
#define pinstCMailCompositionWnd_x                                 0xEDEE6C
#define pinstCMailIgnoreListWnd_x                                  0xEDEE78
#define pinstCMailWnd_x                                            0xEDEE64
#define pinstCManageLootWnd_x                                      0xEE0408
#define pinstCMapToolbarWnd_x                                      0xEDEE38
#define pinstCMapViewWnd_x                                         0xEDEE2C
#define pinstCMarketplaceWnd_x                                     0xEDEE08
#define pinstCMerchantWnd_x                                        0xEDEE0C
#define pinstCMIZoneSelectWnd_x                                    0xFB0BA0
#define pinstCMusicPlayerWnd_x                                     0xEDF1CC
#define pinstCNameChangeMercWnd_x                                  0xEDEF10
#define pinstCNameChangePetWnd_x                                   0xEDEF00
#define pinstCNameChangeWnd_x                                      0xEDEE68
#define pinstCNoteWnd_x                                            0xEDF134
#define pinstCObjectPreviewWnd_x                                   0xEDEE7C
#define pinstCOptionsWnd_x                                         0xEDEE9C
#define pinstCOverseerWnd_x                                        0xEDEE04
#define pinstCPetInfoWnd_x                                         0xEDF164
#define pinstCPetitionQWnd_x                                       0xEDEEB8
#define pinstCPlayerNotesWnd_x                                     0xEDF1BC
#define pinstCPlayerWnd_x                                          0xEDEDDC
#define pinstCPopupWndManager_x                                    0xFB1430
#define pinstCProgressionSelectionWnd_x                            0xFB14E0
#define pinstCPurchaseGroupWnd_x                                   0xEDEE18
#define pinstCPurchaseWnd_x                                        0xEDEE10
#define pinstCPvPLeaderboardWnd_x                                  0xFB1590
#define pinstCPvPStatsWnd_x                                        0xFB1640
#define pinstCQuantityWnd_x                                        0xEDF158
#define pinstCRaceChangeWnd_x                                      0xEDEE70
#define pinstCRaidOptionsWnd_x                                     0xEDEEE8
#define pinstCRaidWnd_x                                            0xEDEEF4
#define pinstCRealEstateItemsWnd_x                                 0xEDEE94
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDEED0
#define pinstCRealEstateManageWnd_x                                0xEDEEBC
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDEEC0
#define pinstCRealEstatePlotSearchWnd_x                            0xEDEEC8
#define pinstCRealEstatePurchaseWnd_x                              0xEDEECC
#define pinstCRespawnWnd_x                                         0xEDF1C0
#define pinstCRewardSelectionWnd_x                                 0xFB1D88
#define pinstCSelectorWnd_x                                        0xEDEE20
#define pinstCSendMoneyWnd_x                                       0xEDEE40
#define pinstCServerListWnd_x                                      0xEDF1A0
#define pinstCSkillsSelectWnd_x                                    0xEDF19C
#define pinstCSkillsWnd_x                                          0xEDF190
#define pinstCSocialEditWnd_x                                      0xEDEE58
#define pinstCSocialWnd_x                                          0xEDEDB4
#define pinstCSpellBookWnd_x                                       0xEDEF18
#define pinstCSpellDisplayMgr_x                                    0xFB2560
#define pinstCStoryWnd_x                                           0xEDEDD0
#define pinstCTargetOfTargetWnd_x                                  0xFB33E8
#define pinstCTargetWnd_x                                          0xEDEE4C
#define pinstCTaskOverlayWnd_x                                     0xEDEDCC
#define pinstCTaskSelectWnd_x                                      0xFB3540
#define pinstCTaskManager_x                                        0xC68268
#define pinstCTaskTemplateSelectWnd_x                              0xFB35F0
#define pinstCTaskWnd_x                                            0xFB36A0
#define pinstCTextEntryWnd_x                                       0xEDF198
#define pinstCTimeLeftWnd_x                                        0xEDEEB0
#define pinstCTipWndCONTEXT_x                                      0xFB38A4
#define pinstCTipWndOFDAY_x                                        0xFB38A0
#define pinstCTitleWnd_x                                           0xFB3950
#define pinstCTrackingWnd_x                                        0xEDEE48
#define pinstCTradeskillWnd_x                                      0xFB3AB8
#define pinstCTradeWnd_x                                           0xEDEE1C
#define pinstCTrainWnd_x                                           0xEDF168
#define pinstCTributeBenefitWnd_x                                  0xFB3CB8
#define pinstCTributeMasterWnd_x                                   0xFB3D68
#define pinstCTributeTrophyWnd_x                                   0xFB3E18
#define pinstCVideoModesWnd_x                                      0xEDEE24
#define pinstCVoiceMacroWnd_x                                      0xF9D1B0
#define pinstCVoteResultsWnd_x                                     0xEDEEFC
#define pinstCVoteWnd_x                                            0xEDEEF8
#define pinstCZoneGuideWnd_x                                       0xEDF144
#define pinstCZonePathWnd_x                                        0xEDF14C
#define pinstEQSuiteTextureLoader_x                                0xEAC9D8
#define pinstItemIconCache_x                                       0xFACD30
#define pinstLootFiltersManager_x                                  0xEDE2B8
#define pinstRewardSelectionWnd_x                                  0xFB1D88

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DB860
#define __CastRay2_x                                               0x5DBAF0
#define __ConvertItemTags_x                                        0x5F8D10
#define __CleanItemTags_x                                          0x47DA70
#define __CreateCascadeMenuItems_x                                 0x56FB50
#define __DoesFileExist_x                                          0x952E80
#define __EQGetTime_x                                              0x94FB60
#define __ExecuteCmd_x                                             0x5D3C50
#define __FixHeading_x                                             0x9EE340
#define __FlushDxKeyboard_x                                        0x6D91A0
#define __GameLoop_x                                               0x6DCAB0
#define __get_bearing_x                                            0x5DB400
#define __get_melee_range_x                                        0x5DBD30
#define __GetAnimationCache_x                                      0x74B600
#define __GetGaugeValueFromEQ_x                                    0x85BA50
#define __GetLabelFromEQ_x                                         0x85D460
#define __GetXTargetType_x                                         0x9F06B0
#define __HandleMouseWheel_x                                       0x6DDF40
#define __HeadingDiff_x                                            0x9EE3A0
#define __HelpPath_x                                               0xF989CC
#define __ExecuteFrontEnd_x                                        0x6D9980
#define __NewUIINI_x                                               0x85B730
#define __ProcessGameEvents_x                                      0x6423A0
#define __ProcessKeyboardEvents_x                                  0x6DB0F0
#define __ProcessMouseEvents_x                                     0x641AA0
#define __SaveColors_x                                             0x56F9F0
#define __STMLToText_x                                             0x98BF10
#define __WndProc_x                                                0x6DBBB0
#define CMemoryMappedFile__SetFile_x                               0xADDDB0
#define CrashDetected_x                                            0x6DB6B0
#define DrawNetStatus_x                                            0x6718D0
#define Expansion_HoT_x                                            0xDADD98
#define Teleport_Table_Size_x                                      0xF93220
#define Teleport_Table_x                                           0xF90DF8
#define Util__FastTime_x                                           0x94F720
#define __eq_delete_x                                              0x9F7203
#define __eq_new_x                                                 0x9F7774
#define __CopyLayout_x                                             0x65E490
#define __ThrottleFrameRate_x                                      0x62B1B3
#define __ThrottleFrameRateEnd_x                                   0x62B20F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EA650
#define CAAWnd__Update_x                                           0x6E9970
#define CAAWnd__UpdateSelected_x                                   0x6E6CE0

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B520
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B3A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4956A0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948E0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x578A80
#define AltAdvManager__IsAbilityReady_x                            0x577660
#define AltAdvManager__GetAAById_x                                 0x577A00
#define AltAdvManager__CanTrainAbility_x                           0x577A70
#define AltAdvManager__CanSeeAbility_x                             0x577E20

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDF30
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC820
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CCA00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1410
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D18A0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAF00
#define CharacterZoneClient__GetCurrentMod_x                       0x4EBF20
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFEE0
#define CharacterZoneClient__GetEffect_x                           0x4C1350
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC5C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6EA0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8BC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFDA0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFCA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC660
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5380
#define CharacterZoneClient__GetModCap_x                           0x4EBE20
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC510
#define CharacterZoneClient__HasSkill_x                            0x4DD030
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C30
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE7A0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4E7EC0
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA610

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x706EF0
#define CBankWnd__WndNotification_x                                0x706C90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7119E0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C620
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A5F0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716120

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x9894B0
#define CButtonWnd__CButtonWnd_x                                   0x987E30
#define CButtonWnd__dCButtonWnd_x                                  0x9880D0
#define CButtonWnd__vftable_x                                      0xB8CB38

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x738B30
#define CChatWindowManager__InitContextMenu_x                      0x731A50
#define CChatWindowManager__FreeChatWindow_x                       0x7376F0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x738810
#define CChatWindowManager__CreateChatWindow_x                     0x737D20

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFDC0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x7394B0
#define CChatWindow__Clear_x                                       0x73A930
#define CChatWindow__WndNotification_x                             0x73B0C0
#define CChatWindow__AddHistory_x                                  0x73A170

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x99F2D0
#define CContextMenu__dCContextMenu_x                              0x99F500
#define CContextMenu__AddMenuItem_x                                0x99F510
#define CContextMenu__RemoveMenuItem_x                             0x99F810
#define CContextMenu__RemoveAllMenuItems_x                         0x99F830
#define CContextMenu__CheckMenuItem_x                              0x99F890
#define CContextMenu__SetMenuItem_x                                0x99F740
#define CContextMenu__AddSeparator_x                               0x99F6A0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99FE10
#define CContextMenuManager__RemoveMenu_x                          0x99FE80
#define CContextMenuManager__PopupMenu_x                           0x99FF40
#define CContextMenuManager__Flush_x                               0x99FDB0
#define CContextMenuManager__GetMenu_x                             0x49DA10
#define CContextMenuManager__CreateDefaultMenu_x                   0x745460

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A5A0
#define CChatService__GetFriendName_x                              0x92A5B0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99C3B0
#define CComboWnd__Draw_x                                          0x99B860
#define CComboWnd__GetCurChoice_x                                  0x99C180
#define CComboWnd__GetListRect_x                                   0x99BD00
#define CComboWnd__GetTextRect_x                                   0x99C410
#define CComboWnd__InsertChoice_x                                  0x99BE90
#define CComboWnd__SetColors_x                                     0x99BE60
#define CComboWnd__SetChoice_x                                     0x99C160
#define CComboWnd__GetItemCount_x                                  0x99C190
#define CComboWnd__GetCurChoiceText_x                              0x99C1C0
#define CComboWnd__GetChoiceText_x                                 0x99C1A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99BF20

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x742AA0
#define CContainerWnd__vftable_x                                   0xB5A944
#define CContainerWnd__SetContainer_x                              0x744300

// CDisplay
#define CDisplay__cameraType_x                                     0xEDEF1C
#define CDisplay__ZoneMainUI_x                                     0x56A230
#define CDisplay__PreZoneMainUI_x                                  0x56A240
#define CDisplay__CleanGameUI_x                                    0x56F7D0
#define CDisplay__GetClickedActor_x                                0x562000
#define CDisplay__GetUserDefinedColor_x                            0x559D80
#define CDisplay__GetWorldFilePath_x                               0x563B10
#define CDisplay__ReloadUI_x                                       0x569550
#define CDisplay__WriteTextHD2_x                                   0x55E680
#define CDisplay__TrueDistance_x                                   0x565AF0
#define CDisplay__SetViewActor_x                                   0x561920
#define CDisplay__GetFloorHeight_x                                 0x55E950
#define CDisplay__SetRenderWindow_x                                0x55D300
#define CDisplay__ToggleScreenshotMode_x                           0x5613F0
#define CDisplay__RealRender_World_x                               0x55C610

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C1B00

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A2DC0
#define CEditWnd__EnsureCaretVisible_x                             0x9A5110
#define CEditWnd__GetCaretPt_x                                     0x9A3F80
#define CEditWnd__GetCharIndexPt_x                                 0x9A3D40
#define CEditWnd__GetDisplayString_x                               0x9A3BE0
#define CEditWnd__GetHorzOffset_x                                  0x9A2320
#define CEditWnd__GetLineForPrintableChar_x                        0x9A5020
#define CEditWnd__GetSelStartPt_x                                  0x9A3FE0
#define CEditWnd__GetSTMLSafeText_x                                0x9A39F0
#define CEditWnd__PointFromPrintableChar_x                         0x9A4C70
#define CEditWnd__ReplaceSelection_x                               0x9A4830
#define CEditWnd__SelectableCharFromPoint_x                        0x9A4DD0
#define CEditWnd__SetEditable_x                                    0x9A40B0
#define CEditWnd__SetWindowText_x                                  0x9A3740

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62D9A0
#define CEverQuest__ClickedPlayer_x                                0x61EEC0
#define CEverQuest__CreateTargetIndicator_x                        0x63F310
#define CEverQuest__DeleteTargetIndicator_x                        0x63F3A0
#define CEverQuest__DoTellWindow_x                                 0x4EFEC0
#define CEverQuest__OutputTextToLog_x                              0x4F0190
#define CEverQuest__DropHeldItemOnGround_x                         0x613F90
#define CEverQuest__dsp_chat_x                                     0x4F0560
#define CEverQuest__trimName_x                                     0x63A900
#define CEverQuest__Emote_x                                        0x62E060
#define CEverQuest__EnterZone_x                                    0x627D00
#define CEverQuest__GetBodyTypeDesc_x                              0x6335C0
#define CEverQuest__GetClassDesc_x                                 0x633C00
#define CEverQuest__GetClassThreeLetterCode_x                      0x634200
#define CEverQuest__GetDeityDesc_x                                 0x63DAC0
#define CEverQuest__GetLangDesc_x                                  0x6343C0
#define CEverQuest__GetRaceDesc_x                                  0x633BE0
#define CEverQuest__InterpretCmd_x                                 0x63E130
#define CEverQuest__LeftClickedOnPlayer_x                          0x618480
#define CEverQuest__LMouseUp_x                                     0x616540
#define CEverQuest__RightClickedOnPlayer_x                         0x619070
#define CEverQuest__RMouseUp_x                                     0x617800
#define CEverQuest__SetGameState_x                                 0x613D10
#define CEverQuest__UPCNotificationFlush_x                         0x63A820
#define CEverQuest__IssuePetCommand_x                              0x6359C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x62EE60
#define CEverQuest__ReportSuccessfulHit_x                          0x62F940

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7565A0
#define CGaugeWnd__CalcLinesFillRect_x                             0x756600
#define CGaugeWnd__Draw_x                                          0x755BB0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B49F0
#define CGuild__GetGuildName_x                                     0x4B3210
#define CGuild__GetGuildIndex_x                                    0x4B3930

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x773A60

//CHotButton
#define CHotButton__SetButtonSize_x                                0x652D30
#define CHotButton__SetCheck_x                                     0x652970

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x780D10
#define CInvSlotMgr__MoveItem_x                                    0x77F950
#define CInvSlotMgr__SelectSlot_x                                  0x780DD0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77E160
#define CInvSlot__SliderComplete_x                                 0x77B3A0
#define CInvSlot__GetItemBase_x                                    0x77AC40
#define CInvSlot__UpdateItem_x                                     0x77AE30

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x781C00
#define CInvSlotWnd__HandleLButtonUp_x                             0x782610

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x79AB00
#define CItemDisplayWnd__UpdateStrings_x                           0x79A400
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78F3C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78F910
#define CItemDisplayWnd__RequestConvertItem_x                      0x79B920

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x855ED0
#define CSpellDisplayWnd__UpdateStrings_x                          0x855E40

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x88B380

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A19C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x528EA0

// CLabel
#define CLabel__UpdateText_x                                       0x7A8500

// CListWnd
#define CListWnd__CListWnd_x                                       0x96E950
#define CListWnd__dCListWnd_x                                      0x96EC40
#define CListWnd__vftable_x                                        0xB8C410
#define CListWnd__AddColumn_x                                      0x973810
#define CListWnd__AddColumn1_x                                     0x973930
#define CListWnd__AddLine_x                                        0x973CA0
#define CListWnd__AddString_x                                      0x973AA0
#define CListWnd__CalculateFirstVisibleLine_x                      0x9735C0
#define CListWnd__CalculateVSBRange_x                              0x9733A0
#define CListWnd__ClearSel_x                                       0x974590
#define CListWnd__ClearAllSel_x                                    0x9745E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x975070
#define CListWnd__Compare_x                                        0x972B30
#define CListWnd__Draw_x                                           0x96EE00
#define CListWnd__DrawColumnSeparators_x                           0x971920
#define CListWnd__DrawHeader_x                                     0x971D80
#define CListWnd__DrawItem_x                                       0x9723D0
#define CListWnd__DrawLine_x                                       0x971A90
#define CListWnd__DrawSeparator_x                                  0x9719C0
#define CListWnd__EnableLine_x                                     0x9711E0
#define CListWnd__EnsureVisible_x                                  0x974FA0
#define CListWnd__ExtendSel_x                                      0x9744D0
#define CListWnd__GetColumnTooltip_x                               0x970D60
#define CListWnd__GetColumnMinWidth_x                              0x970DD0
#define CListWnd__GetColumnWidth_x                                 0x970CE0
#define CListWnd__GetCurSel_x                                      0x970680
#define CListWnd__GetItemAtPoint_x                                 0x971450
#define CListWnd__GetItemAtPoint1_x                                0x9714C0
#define CListWnd__GetItemData_x                                    0x970700
#define CListWnd__GetItemHeight_x                                  0x970AB0
#define CListWnd__GetItemIcon_x                                    0x970880
#define CListWnd__GetItemRect_x                                    0x9712D0
#define CListWnd__GetItemText_x                                    0x970740
#define CListWnd__GetSelList_x                                     0x974630
#define CListWnd__GetSeparatorRect_x                               0x971730
#define CListWnd__InsertLine_x                                     0x974100
#define CListWnd__RemoveLine_x                                     0x974320
#define CListWnd__SetColors_x                                      0x973380
#define CListWnd__SetColumnJustification_x                         0x9730B0
#define CListWnd__SetColumnLabel_x                                 0x973A40
#define CListWnd__SetColumnWidth_x                                 0x972FC0
#define CListWnd__SetCurSel_x                                      0x974420
#define CListWnd__SetItemColor_x                                   0x974C70
#define CListWnd__SetItemData_x                                    0x974C30
#define CListWnd__SetItemText_x                                    0x974850
#define CListWnd__ShiftColumnSeparator_x                           0x973170
#define CListWnd__Sort_x                                           0x972E20
#define CListWnd__ToggleSel_x                                      0x974450
#define CListWnd__SetColumnsSizable_x                              0x973210
#define CListWnd__SetItemWnd_x                                     0x974AF0
#define CListWnd__GetItemWnd_x                                     0x9708D0
#define CListWnd__SetItemIcon_x                                    0x9748D0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9736C0
#define CListWnd__SetVScrollPos_x                                  0x972FA0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7BF970

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7BABF0
#define MapViewMap__dMapViewMap_x                                  0x7BAD30
#define MapViewMap__vftable_x                                      0xB61D50
#define MapViewMap__Clear_x                                        0x7BB640
#define MapViewMap__SetZoom_x                                      0x7C4860
#define MapViewMap__HandleLButtonDown_x                            0x7BAE40
#define MapViewMap__GetWorldCoordinates_x                          0x7BDFB0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E2FB0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E3910
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E3FA0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7280
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E1A30
#define CMerchantWnd__SelectBuySellSlot_x                          0x7ED480
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E2C00

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F7070
#define CPacketScrambler__hton_x                                   0x8F7060

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x997660
#define CSidlManagerBase__CreatePageWnd_x                          0x996E40
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x992310
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9922A0
#define CSidlManagerBase__FindAnimation1_x                         0x992590
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x992960
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x992790
#define CSidlManagerBase__CreateLabel_x                            0x84BBF0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x995E10
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x9960A0
#define CSidlManagerBase__CreateXWnd_x                             0x9960E0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84C030
#define CSidlManager__CreateXWnd_x                                 0x84B660

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98E2C0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98E1C0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BBD50
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98DB40
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98D830
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98D900
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98D9D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98EB80
#define CSidlScreenWnd__EnableIniStorage_x                         0x98F060
#define CSidlScreenWnd__GetChildItem_x                             0x98EFE0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98ED70
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97D4D0
#define CSidlScreenWnd__Init1_x                                    0x98D2E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x98F0B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98FC80
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98C6E0
#define CSidlScreenWnd__m_layoutCopy_x                             0x1621228
#define CSidlScreenWnd__StoreIniInfo_x                             0x98F800
#define CSidlScreenWnd__StoreIniVis_x                              0x98FB70
#define CSidlScreenWnd__vftable_x                                  0xB8CDE4
#define CSidlScreenWnd__WndNotification_x                          0x98EA50

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0CA0
#define CSkillMgr__GetSkillCap_x                                   0x6C0E70
#define CSkillMgr__GetNameToken_x                                  0x6C04B0
#define CSkillMgr__IsActivatedSkill_x                              0x6C05A0
#define CSkillMgr__IsCombatSkill_x                                 0x6C0510

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9A0F00
#define CSliderWnd__SetValue_x                                     0x9A0D30
#define CSliderWnd__SetNumTicks_x                                  0x9A0D90

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x8528B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AA400
#define CStmlWnd__CalculateHSBRange_x                              0x9AB380
#define CStmlWnd__CalculateVSBRange_x                              0x9AB2F0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B01C0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B0E60
#define CStmlWnd__ForceParseNow_x                                  0x9AA970
#define CStmlWnd__GetNextTagPiece_x                                0x9B0120
#define CStmlWnd__GetVisibleText_x                                 0x9AA990
#define CStmlWnd__InitializeWindowVariables_x                      0x9B0CB0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A9AA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A9B10
#define CStmlWnd__SetSTMLText_x                                    0x9A8880
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B2080
#define CStmlWnd__UpdateHistoryString_x                            0x9B1060

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A7730
#define CTabWnd__DrawCurrentPage_x                                 0x9A80C0
#define CTabWnd__DrawTab_x                                         0x9A7CB0
#define CTabWnd__GetCurrentPage_x                                  0x9A6E90
#define CTabWnd__GetCurrentTabIndex_x                              0x9A6E80
#define CTabWnd__GetPageFromTabIndex_x                             0x9A7BF0
#define CTabWnd__GetPageInnerRect_x                                0x9A70C0
#define CTabWnd__GetTabInnerRect_x                                 0x9A7000
#define CTabWnd__GetTabRect_x                                      0x9A6EC0
#define CTabWnd__InsertPage_x                                      0x9A72B0
#define CTabWnd__RemovePage_x                                      0x9A7400
#define CTabWnd__SetPage_x                                         0x9A7140
#define CTabWnd__SetPageRect_x                                     0x9A7630
#define CTabWnd__UpdatePage_x                                      0x9A7AA0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A6880
#define CPageWnd__SetTabText_x                                     0x9A6820


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4ACA20

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x979A10
#define CTextureFont__DrawWrappedText1_x                           0x979940
#define CTextureFont__DrawWrappedText2_x                           0x979B00
#define CTextureFont__GetTextExtent_x                              0x979D10

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9B8800

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x964400

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x541C60
#define CXStr__CXStr1_x                                            0x482740
#define CXStr__CXStr3_x                                            0x94BAB0
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94BCF0
#define CXStr__operator_equal1_x                                   0x94BD30
#define CXStr__operator_plus_equal1_x                              0x94C790
#define CXStr__SetString_x                                         0x94E630
#define CXStr__operator_char_p_x                                   0x94C1E0
#define CXStr__GetChar_x                                           0x94DF90
#define CXStr__Delete_x                                            0x94D860
#define CXStr__GetUnicode_x                                        0x94E000
#define CXStr__Insert_x                                            0x94E060
#define CXStr__FindNext_x                                          0x94DCB0
#define CXStr__gFreeLists_x                                        0xEAC3B0
#define CXStr__gCXStrAccess_x                                      0x1620AB0

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99EF30

// CXWnd
#define CXWnd__BringToTop_x                                        0x980F10
#define CXWnd__ClrFocus_x                                          0x9808B0
#define CXWnd__Destroy_x                                           0x980940
#define CXWnd__DoAllDrawing_x                                      0x97CB20
#define CXWnd__DrawChildren_x                                      0x97CAF0
#define CXWnd__DrawColoredRect_x                                   0x97D0B0
#define CXWnd__DrawTooltip_x                                       0x97B0F0
#define CXWnd__DrawTooltipAtPoint_x                                0x97B1B0
#define CXWnd__GetBorderFrame_x                                    0x97CD50
#define CXWnd__GetChildItem_x                                      0x981130
#define CXWnd__GetChildWndAt_x                                     0x980FB0
#define CXWnd__GetClientClipRect_x                                 0x97F0C0
#define CXWnd__GetRelativeRect_x                                   0x97F430
#define CXWnd__GetScreenClipRect_x                                 0x97F190
#define CXWnd__GetScreenRect_x                                     0x97F360
#define CXWnd__GetTooltipRect_x                                    0x97D100
#define CXWnd__GetWindowTextA_x                                    0x4EFD60
#define CXWnd__IsActive_x                                          0x97D850
#define CXWnd__IsDescendantOf_x                                    0x97FDC0
#define CXWnd__IsReallyVisible_x                                   0x97FDF0
#define CXWnd__IsType_x                                            0x981720
#define CXWnd__Minimize_x                                          0x980540
#define CXWnd__Move_x                                              0x97FE60
#define CXWnd__Move1_x                                             0x97FF60
#define CXWnd__ProcessTransition_x                                 0x980A20
#define CXWnd__Refade_x                                            0x980230
#define CXWnd__Resize_x                                            0x9804D0
#define CXWnd__Right_x                                             0x980D00
#define CXWnd__SetFocus_x                                          0x980870
#define CXWnd__SetFont_x                                           0x9808E0
#define CXWnd__SetKeyTooltip_x                                     0x981500
#define CXWnd__SetMouseOver_x                                      0x97E1E0
#define CXWnd__SetParent_x                                         0x97FB00
#define CXWnd__StartFade_x                                         0x97FCB0
#define CXWnd__vftable_x                                           0xB8C858
#define CXWnd__CXWnd_x                                             0x979FD0
#define CXWnd__dCXWnd_x                                            0x97A6C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BCDA0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x983F80
#define CXWndManager__DrawWindows_x                                0x9840D0
#define CXWndManager__GetKeyboardFlags_x                           0x986A70
#define CXWndManager__HandleKeyboardMsg_x                          0x986650
#define CXWndManager__RemoveWnd_x                                  0x986D30
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9871D0

// CDBStr
#define CDBStr__GetString_x                                        0x558850

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E11F0
#define CharacterZoneClient__CastSpell_x                           0x4C5D00
#define CharacterZoneClient__Cur_HP_x                              0x4D9C80
#define CharacterZoneClient__Cur_Mana_x                            0x4E0EC0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCDF0
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDD90
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C9320
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E6F50
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B87D0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8920
#define CharacterZoneClient__GetHPRegen_x                          0x4E6990
#define CharacterZoneClient__GetManaRegen_x                        0x4E7390
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4CA150
#define CharacterZoneClient__Max_Endurance_x                       0x6813C0
#define CharacterZoneClient__Max_HP_x                              0x4D9AB0
#define CharacterZoneClient__Max_Mana_x                            0x6811A0
#define CharacterZoneClient__SpellDuration_x                       0x4C9B90
#define CharacterZoneClient__TotalEffect_x                         0x4CD820
#define CharacterZoneClient__UseSkill_x                            0x4E8560

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917C20

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6997A0

// PcClient
#define PcClient__PcClient_x                                       0x676790
#define PcClient__GetConLevel_x                                    0x679510

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C02E0
#define CCharacterListWnd__EnterWorld_x                            0x4BFCB0
#define CCharacterListWnd__Quit_x                                  0x4BF9D0
#define CCharacterListWnd__UpdateList_x                            0x4BFEA0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658B50
#define EQ_Item__CreateItemTagString_x                             0x8EFD40
#define EQ_Item__IsStackable_x                                     0x8F4FF0
#define EQ_Item__GetImageNum_x                                     0x8F1A90
#define EQ_Item__CreateItemClient_x                                0x657AF0
#define EQ_Item__GetItemValue_x                                    0x8F2CD0
#define EQ_Item__ValueSellMerchant_x                               0x8F6D80
#define EQ_Item__IsKeyRingItem_x                                   0x8F4770
#define EQ_Item__CanGemFitInSlot_x                                 0x8EF520
#define EQ_Item__CanGoInBag_x                                      0x658C70
#define EQ_Item__IsEmpty_x                                         0x8F4140
#define EQ_Item__GetMaxItemCount_x                                 0x8F30F0
#define EQ_Item__GetHeldItem_x                                     0x8F1940
#define ItemClient__dItemClient_x                                  0x657A40

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x579890
#define EQ_LoadingS__Array_x                                       0xD9AD30

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x900F00
#define EQ_PC__GetCombatAbility_x                                  0x901480
#define EQ_PC__GetCombatAbilityTimer_x                             0x9014F0
#define EQ_PC__GetItemRecastTimer_x                                0x684540
#define EQ_PC__HasLoreItem_x                                       0x679E70
#define EQ_PC__AlertInventoryChanged_x                             0x678DD0
#define EQ_PC__GetPcZoneClient_x                                   0x6A9EB0
#define EQ_PC__RemoveMyAffect_x                                    0x687DA0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x901B40
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9022B0

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D8830
#define EQItemList__add_object_x                                   0x608E80
#define EQItemList__add_item_x                                     0x5D8E10
#define EQItemList__delete_item_x                                  0x5D8E60
#define EQItemList__FreeItemList_x                                 0x5D8D70

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554BC0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B1D0
#define EQPlayer__dEQPlayer_x                                      0x68D900
#define EQPlayer__DoAttack_x                                       0x6A3BE0
#define EQPlayer__EQPlayer_x                                       0x68E150
#define EQPlayer__SetNameSpriteState_x                             0x692710
#define EQPlayer__SetNameSpriteTint_x                              0x6935E0
#define PlayerBase__HasProperty_j_x                                0x9EC700
#define EQPlayer__IsTargetable_x                                   0x9ECC60
#define EQPlayer__CanSee_x                                         0x9ECA50
#define EQPlayer__CanSee1_x                                        0x9ECB20
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EC7C0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A79A0
#define PlayerZoneClient__GetLevel_x                               0x6A9EF0
#define PlayerZoneClient__IsValidTeleport_x                        0x60A330
#define PlayerZoneClient__LegalPlayerRace_x                        0x571830

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E380
#define EQPlayerManager__GetSpawnByName_x                          0x69E430
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E4C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C450
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C520
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C560
#define KeypressHandler__ClearCommandStateArray_x                  0x65DA20
#define KeypressHandler__HandleKeyDown_x                           0x65DA40
#define KeypressHandler__HandleKeyUp_x                             0x65DAE0
#define KeypressHandler__SaveKeymapping_x                          0x65E090

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x915AB0

// StringTable
#define StringTable__getString_x                                   0x910800

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x683F40
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x682100
#define PcZoneClient__GetPcSkillLimit_x                            0x6879F0
#define PcZoneClient__RemovePetEffect_x                            0x688050
#define PcZoneClient__HasAlternateAbility_x                        0x681000
#define PcZoneClient__CanEquipItem_x                               0x6816D0
#define PcZoneClient__GetItemByID_x                                0x684A70
#define PcZoneClient__RemoveBuffEffect_x                           0x688100
#define PcZoneClient__BandolierSwap_x                              0x6826B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6844E0

// Doors
#define EQSwitch__UseSwitch_x                                      0x60EF50

// IconCache
#define IconCache__GetIcon_x                                       0x74AFA0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x741970
#define CContainerMgr__CloseContainer_x                            0x741C90
#define CContainerMgr__OpenExperimentContainer_x                   0x7427F0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81AF30

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651100

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7B0860
#define CLootWnd__RequestLootSlot_x                                0x7AFA80

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3AA0
#define EQ_Spell__SpellAffects_x                                   0x5A3FB0
#define EQ_Spell__SpellAffectBase_x                                0x5A3CD0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1230
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D11E0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4F30
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A41C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4F60
#define __IsResEffectSpell_x                                       0x4D09E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1780

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x867BA0
#define CTargetWnd__WndNotification_x                              0x867340
#define CTargetWnd__RefreshTargetBuffs_x                           0x8676A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866140

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86C730
#define CTaskWnd__ConfirmAbandonTask_x                             0x86F800

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x552790
#define CTaskManager__HandleMessage_x                              0x550660
#define CTaskManager__GetTaskStatus_x                              0x552840
#define CTaskManager__GetElementDescription_x                      0x5528C0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E6B0
#define EqSoundManager__PlayScriptMp3_x                            0x59E8B0
#define EqSoundManager__SoundAssistPlay_x                          0x6C5140
#define EqSoundManager__WaveInstancePlay_x                         0x6C4630

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541910

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A5EE0
#define CTextureAnimation__SetCurCell_x                            0x9A5CA0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581E90
#define CAltAbilityData__GetMercMaxRank_x                          0x581E20

// CTargetRing
#define CTargetRing__Cast_x                                        0x64E910

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x645060
#define CharacterBase__GetItemByGlobalIndex_x                      0x928290
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9282E0
#define CharacterBase__GetMemorizedSpell_x                         0x657940
#define CharacterBase__IsExpansionFlag_x                           0x5D2480

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726780
#define CCastSpellWnd__IsBardSongPlaying_x                         0x727040
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x7270F0

// messages
#define msg_spell_worn_off_x                                       0x5C9C30
#define msg_new_text_x                                             0x5BD5E0
#define __msgTokenTextParam_x                                      0x5CC090
#define msgTokenText_x                                             0x5CC4A0

// SpellManager
#define SpellManager__vftable_x                                    0xB38574
#define SpellManager__SpellManager_x                               0x6C8D60
#define Spellmanager__LoadTextSpells_x                             0x6C9660
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8F30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F0F60

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x921120
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x921470

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A8970

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746700
#define CCursorAttachment__AttachToCursor1_x                       0x746740
#define CCursorAttachment__Deactivate_x                            0x747E20

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B6C70
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B73D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B7050

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5223A0
#define CFindItemWnd__WndNotification_x                            0x523270
#define CFindItemWnd__Update_x                                     0x523EC0
#define CFindItemWnd__PickupSelectedItem_x                         0x521A70

// IString
#define IString__Append_x                                          0x5582D0

// Camera
#define EverQuest__Cameras_x                                       0xDAE0E4

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D3E0
#define LootFiltersManager__GetItemFilterData_x                    0x52CD10
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CD40
#define LootFiltersManager__SetItemLootFilter_x                    0x52CF50

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x807910

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F6C20
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF5B0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73E2F0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92BF70
#define CDistillerInfo__Instance_x                                 0x92BEB0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7611B0
#define CGroupWnd__UpdateDisplay_x                                 0x760400

// ItemBase
#define ItemBase__IsLore_x                                         0x8F4830
#define ItemBase__IsLoreEquipped_x                                 0x8F48B0

#define MultipleItemMoveManager__ProcessMove_x                     0x66D790

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608DE0
#define EQPlacedItemManager__GetItemByGuid_x                       0x608F20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608F80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3D10

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517DC0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502830
#define FactionManagerClient__HandleFactionMessage_x               0x503050
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503870
#define FactionManagerClient__GetMaxFaction_x                      0x50388F
#define FactionManagerClient__GetMinFaction_x                      0x503840

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F6E0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x978680

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E430

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F950

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x581060
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x581A90

// CTargetManager
#define CTargetManager__Get_x                                      0x6CCCE0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3D10

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC7E0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8D10

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4B778

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DD510

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D230

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x6DEAB0

// AchievementManager
#define AchievementManager__Instance_x                             0x47E380

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
