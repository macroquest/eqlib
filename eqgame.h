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
#define __ExpectedVersionDate                                     "May 14 2021"
#define __ExpectedVersionTime                                     "14:19:57"
#define __ActualVersionDate_x                                      0xB53114
#define __ActualVersionTime_x                                      0xB53108
#define __ActualVersionBuild_x                                     0xB432CC

// Memory Protection
#define __MemChecker0_x                                            0x6650B0
#define __MemChecker1_x                                            0x950050
#define __MemChecker2_x                                            0x6DF390
#define __MemChecker3_x                                            0x6DF300
#define __MemChecker4_x                                            0x638240
#define __EncryptPad0_x                                            0xE55B50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0xDB0D20
#define __ScreenY_x                                                0xDB0D28
#define __ScreenX_x                                                0xDB0D2C
#define __ScreenXMax_x                                             0xDB0D30
#define __ScreenYMax_x                                             0xDB0D34
#define __InChatMode_x                                             0xDB0D74
#define __RunWalkState_x                                           0xDB0D78
#define DI8__Mouse_Copy_x                                          0xDB0D8C
#define __MouseLook_x                                              0xDB0E0A
#define __NetStatusToggle_x                                        0xDB0E0D
#define __pulAutoRun_x                                             0xDB0E28
#define __Clicks_x                                                 0xDB0E44
#define __RMouseHeldTime_x                                         0xDB0EAC
#define __LMouseHeldTime_x                                         0xDB0EB0
#define __ZoneType_x                                               0xDB1208
#define __ShiftKeyDown_x                                           0xDB1408
#define __AutoSkillArray_x                                         0xDB18A8
#define __RangeAttackReady_x                                       0xDB1B8C
#define __AttackOnAssist_x                                         0xDB1D04
#define __ShowNames_x                                              0xDB1D48
#define __PCNames_x                                                0xDB1EA4
#define __UseTellWindows_x                                         0xDB203C
#define __pulForward_x                                             0xDB2074
#define __pulBackward_x                                            0xDB2078
#define __pulTurnRight_x                                           0xDB207C
#define __pulTurnLeft_x                                            0xDB2080
#define __pulStrafeLeft_x                                          0xDB2084
#define __pulStrafeRight_x                                         0xDB2088
#define __LastTell_x                                               0xDB28F4
#define __ServerName_x                                             0xDE71B8
#define __DoAbilityList_x                                          0xDE71F8
#define __SocialChangedList_x                                      0xDE7240
#define __Socials_x                                                0xDE72B8
#define __Inviter_x                                                0xE4F654
#define __Attack_x                                                 0xE4F6D7
#define __Autofire_x                                               0xE4F6D8

// Misc Globals
#define __do_loot_x                                                0x5E2490
#define __gfMaxZoomCameraDistance_x                                0xB4AF9C
#define __gfMaxCameraDistance_x                                    0xB7387C
#define __CurrentSocial_x                                          0xC6146C
#define __BindList_x                                               0xDA6458
#define g_eqCommandStates_x                                        0xDA71C0
#define __CommandList_x                                            0xDA7D48
#define __ScreenMode_x                                             0xEE307C
#define __GroupCount_x                                             0xF96D42
#define __gWorld_x                                                 0xF96F54
#define __gpbCommandEvent_x                                        0xF97060
#define __ServerHost_x                                             0xF9722B
#define __Guilds_x                                                 0xF9B218
#define __MouseEventTime_x                                         0xF9CC44
#define DI8__Mouse_Check_x                                         0xFA177C
#define __heqmain_x                                                0xFA3C10
#define DI8__Mouse_x                                               0xFA3C34
#define __HWnd_x                                                   0xFA3C38
#define __Mouse_x                                                  0xFA3CC0
#define DI8__Main_x                                                0xFA3CD4
#define DI8__Keyboard_x                                            0xFA3CD8
#define __LoginName_x                                              0xFA43A4
#define __CurrentMapLabel_x                                        0xFB46D4
#define __TargetAggroHolder_x                                      0xFB7088
#define __GroupAggro_x                                             0xFB70C8
#define __SubscriptionType_x                                       0xFE87B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF975B0
#define instEQZoneInfo_x                                           0xDB1000
#define pinstActiveBanker_x                                        0xF9754C
#define pinstActiveCorpse_x                                        0xF97544
#define pinstActiveGMaster_x                                       0xF97548
#define pinstActiveMerchant_x                                      0xF97540
#define pinstAltAdvManager_x                                       0xEE3EC0
#define pinstBandageTarget_x                                       0xF9755C
#define pinstCEverQuest_x                                          0xFA3C3C
#define pinstCamActor_x                                            0xEE3070
#define pinstCDBStr_x                                              0xEE2C40
#define pinstCDisplay_x                                            0xF94CBC
#define pinstControlledMissile_x                                   0xF975A0
#define pinstControlledPlayer_x                                    0xF97594
#define pinstCResolutionHandler_x                                  0x1623650
#define pinstCSidlManager_x                                        0x16225EC
#define pinstCXWndManager_x                                        0x16225E4
#define instDynamicZone_x                                          0xF9B0F0
#define pinstDZMember_x                                            0xF9B200
#define pinstDZTimerInfo_x                                         0xF9B204
#define pinstEqLogin_x                                             0xFA3CF0
#define instEQMisc_x                                               0xD9A8D8
#define pinstEQSoundManager_x                                      0xEE47D0
#define pinstEQSpellStrings_x                                      0xED38E0
#define instExpeditionLeader_x                                     0xF9B13A
#define instExpeditionName_x                                       0xF9B17A
#define pinstSGraphicsEngine_x                                     0x162341C
#define pinstGroup_x                                               0xF96D3E
#define pinstImeManager_x                                          0x16225E8
#define pinstLocalPC_x                                             0xF94CAC
#define pinstLocalPlayer_x                                         0xF9753C
#define pinstMercenaryData_x                                       0xF9E73C
#define pinstMercenaryStats_x                                      0xFB7154
#define pinstModelPlayer_x                                         0xF97554
#define pinstRenderInterface_x                                     0x1623428
#define pinstSkillMgr_x                                            0xFA0828
#define pinstSpawnManager_x                                        0xF9F300
#define pinstSpellManager_x                                        0xFA0A68
#define pinstSpellSets_x                                           0xE48300
#define pinstStringTable_x                                         0xF94CB4
#define pinstSwitchManager_x                                       0xF94B50
#define pinstTarget_x                                              0xF97590
#define pinstTargetObject_x                                        0xF94CA4
#define pinstTargetSwitch_x                                        0xF94CA8
#define pinstTaskMember_x                                          0xD9A420
#define pinstTrackTarget_x                                         0xF97598
#define pinstTradeTarget_x                                         0xF97550
#define instTributeActive_x                                        0xD9A8F9
#define pinstViewActor_x                                           0xEE306C
#define pinstWorldData_x                                           0xF94CB8
#define pinstZoneAddr_x                                            0xDB12A0
#define pinstPlayerPath_x                                          0xF9F398
#define pinstTargetIndicator_x                                     0xFA0CD0
#define EQObject_Top_x                                             0xF94CA0

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xEE30D0
#define pinstCAchievementsWnd_x                                    0xEE2D50
#define pinstCActionsWnd_x                                         0xEE3058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE3064
#define pinstCAdvancedLootWnd_x                                    0xEE305C
#define pinstCAdventureLeaderboardWnd_x                            0xFADEF8
#define pinstCAdventureRequestWnd_x                                0xFADFA8
#define pinstCAdventureStatsWnd_x                                  0xFAE058
#define pinstCAggroMeterWnd_x                                      0xEE2DE0
#define pinstCAlarmWnd_x                                           0xEE30C8
#define pinstCAlertHistoryWnd_x                                    0xEE303C
#define pinstCAlertStackWnd_x                                      0xEE2E08
#define pinstCAlertWnd_x                                           0xEE2E0C
#define pinstCAltStorageWnd_x                                      0xFAE3B8
#define pinstCAudioTriggersWindow_x                                0xEC5C10
#define pinstCAuraWnd_x                                            0xEE30A0
#define pinstCAvaZoneWnd_x                                         0xEE2D30
#define pinstCBandolierWnd_x                                       0xEE30B0
#define pinstCBankWnd_x                                            0xEE3040
#define pinstCBarterMerchantWnd_x                                  0xFAF5F8
#define pinstCBarterSearchWnd_x                                    0xFAF6A8
#define pinstCBarterWnd_x                                          0xFAF758
#define pinstCBazaarConfirmationWnd_x                              0xEE30DC
#define pinstCBazaarSearchWnd_x                                    0xEE2D7C
#define pinstCBazaarWnd_x                                          0xEE2D20
#define pinstCBlockedBuffWnd_x                                     0xEE2DA8
#define pinstCBlockedPetBuffWnd_x                                  0xEE2DB0
#define pinstCBodyTintWnd_x                                        0xEE3100
#define pinstCBookWnd_x                                            0xEE3048
#define pinstCBreathWnd_x                                          0xEE30D4
#define pinstCBuffWindowNORMAL_x                                   0xEE2DA0
#define pinstCBuffWindowSHORT_x                                    0xEE2DA4
#define pinstCBugReportWnd_x                                       0xEE2D5C
#define pinstCButtonWnd_x                                          0x1622850
#define pinstCCastingWnd_x                                         0xEE2DDC
#define pinstCCastSpellWnd_x                                       0xEE2DEC
#define pinstCCharacterListWnd_x                                   0xEE2D80
#define pinstCChatWindowManager_x                                  0xFB0200
#define pinstCClaimWnd_x                                           0xFB0358
#define pinstCColorPickerWnd_x                                     0xEE2D94
#define pinstCCombatAbilityWnd_x                                   0xEE308C
#define pinstCCombatSkillsSelectWnd_x                              0xEE3094
#define pinstCCompassWnd_x                                         0xEE30A8
#define pinstCConfirmationDialog_x                                 0xFB5220
#define pinstCContainerMgr_x                                       0xEE30CC
#define pinstCContextMenuManager_x                                 0x16225A0
#define pinstCCursorAttachment_x                                   0xEE2DD4
#define pinstCDynamicZoneWnd_x                                     0xFB0920
#define pinstCEditLabelWnd_x                                       0xEE2D3C
#define pinstCEQMainWnd_x                                          0xFB0B68
#define pinstCEventCalendarWnd_x                                   0xEE30B8
#define pinstCExtendedTargetWnd_x                                  0xEE2DD8
#define pinstCPlayerCustomizationWnd_x                             0xEE2D84
#define pinstCFactionWnd_x                                         0xEE2DE8
#define pinstCFellowshipWnd_x                                      0xFB0D68
#define pinstCFileSelectionWnd_x                                   0xEE309C
#define pinstCFindItemWnd_x                                        0xEE3104
#define pinstCFindLocationWnd_x                                    0xFB0EC0
#define pinstCFriendsWnd_x                                         0xEE3098
#define pinstCGemsGameWnd_x                                        0xEE30C0
#define pinstCGiveWnd_x                                            0xEE2D2C
#define pinstCGroupSearchFiltersWnd_x                              0xEE2DC4
#define pinstCGroupSearchWnd_x                                     0xFB12B8
#define pinstCGroupWnd_x                                           0xFB1368
#define pinstCGuildBankWnd_x                                       0xFB1418
#define pinstCGuildCreationWnd_x                                   0xFB14C8
#define pinstCGuildMgmtWnd_x                                       0xFB1578
#define pinstCharacterCreation_x                                   0xEE2DD0
#define pinstCHelpWnd_x                                            0xEE2E24
#define pinstCHeritageSelectionWnd_x                               0xEE2D88
#define pinstCHotButtonWnd_x                                       0xFB36D0
#define pinstCHotButtonWnd1_x                                      0xFB36D0
#define pinstCHotButtonWnd2_x                                      0xFB36D4
#define pinstCHotButtonWnd3_x                                      0xFB36D8
#define pinstCHotButtonWnd4_x                                      0xFB36DC
#define pinstCIconSelectionWnd_x                                   0xEE2D58
#define pinstCInspectWnd_x                                         0xEE2D4C
#define pinstCInventoryWnd_x                                       0xEE2E20
#define pinstCInvSlotMgr_x                                         0xEE30B4
#define pinstCItemDisplayManager_x                                 0xFB3C28
#define pinstCItemExpTransferWnd_x                                 0xFB3D5C
#define pinstCItemOverflowWnd_x                                    0xEE2D10
#define pinstCJournalCatWnd_x                                      0xEE30EC
#define pinstCJournalNPCWnd_x                                      0xEE30E4
#define pinstCJournalTextWnd_x                                     0xEE30E4
#define pinstCKeyRingWnd_x                                         0xEE3034
#define pinstCLargeDialogWnd_x                                     0xFB5EA0
#define pinstCLayoutCopyWnd_x                                      0xFB40A8
#define pinstCLFGuildWnd_x                                         0xFB4158
#define pinstCLoadskinWnd_x                                        0xEE30C4
#define pinstCLootFiltersCopyWnd_x                                 0xEE2150
#define pinstCLootFiltersWnd_x                                     0xEE30E0
#define pinstCLootSettingsWnd_x                                    0xEE30E8
#define pinstCLootWnd_x                                            0xEE304C
#define pinstCMailAddressBookWnd_x                                 0xEE2D70
#define pinstCMailCompositionWnd_x                                 0xEE2D6C
#define pinstCMailIgnoreListWnd_x                                  0xEE2D74
#define pinstCMailWnd_x                                            0xEE2D64
#define pinstCManageLootWnd_x                                      0xEE4340
#define pinstCMapToolbarWnd_x                                      0xEE2D34
#define pinstCMapViewWnd_x                                         0xEE2D24
#define pinstCMarketplaceWnd_x                                     0xEE2D04
#define pinstCMerchantWnd_x                                        0xEE2D08
#define pinstCMIZoneSelectWnd_x                                    0xFB4990
#define pinstCMusicPlayerWnd_x                                     0xEE30BC
#define pinstCNameChangeMercWnd_x                                  0xEE2E00
#define pinstCNameChangePetWnd_x                                   0xEE2DFC
#define pinstCNameChangeWnd_x                                      0xEE2D60
#define pinstCNoteWnd_x                                            0xEE2E10
#define pinstCObjectPreviewWnd_x                                   0xEE2D78
#define pinstCOptionsWnd_x                                         0xEE2D98
#define pinstCOverseerWnd_x                                        0xEE2D00
#define pinstCPetInfoWnd_x                                         0xEE3050
#define pinstCPetitionQWnd_x                                       0xEE2DB8
#define pinstCPlayerNotesWnd_x                                     0xEE30AC
#define pinstCPlayerWnd_x                                          0xEE30FC
#define pinstCPopupWndManager_x                                    0xFB5220
#define pinstCProgressionSelectionWnd_x                            0xFB52D0
#define pinstCPurchaseGroupWnd_x                                   0xEE2D14
#define pinstCPurchaseWnd_x                                        0xEE2D0C
#define pinstCPvPLeaderboardWnd_x                                  0xFB5380
#define pinstCPvPStatsWnd_x                                        0xFB5430
#define pinstCQuantityWnd_x                                        0xEE3044
#define pinstCRaceChangeWnd_x                                      0xEE2D68
#define pinstCRaidOptionsWnd_x                                     0xEE2DE4
#define pinstCRaidWnd_x                                            0xEE2DF0
#define pinstCRealEstateItemsWnd_x                                 0xEE2D90
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE2DCC
#define pinstCRealEstateManageWnd_x                                0xEE2DB4
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE2DBC
#define pinstCRealEstatePlotSearchWnd_x                            0xEE2DC0
#define pinstCRealEstatePurchaseWnd_x                              0xEE2DC8
#define pinstCRespawnWnd_x                                         0xEE30A4
#define pinstCRewardSelectionWnd_x                                 0xFB5B78
#define pinstCSelectorWnd_x                                        0xEE2D1C
#define pinstCSendMoneyWnd_x                                       0xEE2D38
#define pinstCServerListWnd_x                                      0xEE3090
#define pinstCSkillsSelectWnd_x                                    0xEE3068
#define pinstCSkillsWnd_x                                          0xEE3060
#define pinstCSocialEditWnd_x                                      0xEE2D54
#define pinstCSocialWnd_x                                          0xEE30D8
#define pinstCSpellBookWnd_x                                       0xEE2E04
#define pinstCStoryWnd_x                                           0xEE30F8
#define pinstCTargetOfTargetWnd_x                                  0xFB71D8
#define pinstCTargetWnd_x                                          0xEE2D48
#define pinstCTaskOverlayWnd_x                                     0xEE30F0
#define pinstCTaskSelectWnd_x                                      0xFB7330
#define pinstCTaskManager_x                                        0xC6C268
#define pinstCTaskTemplateSelectWnd_x                              0xFB73E0
#define pinstCTaskWnd_x                                            0xFB7490
#define pinstCTextEntryWnd_x                                       0xEE3088
#define pinstCTimeLeftWnd_x                                        0xEE2DAC
#define pinstCTipWndCONTEXT_x                                      0xFB7694
#define pinstCTipWndOFDAY_x                                        0xFB7690
#define pinstCTitleWnd_x                                           0xFB7740
#define pinstCTrackingWnd_x                                        0xEE2D40
#define pinstCTradeskillWnd_x                                      0xFB78A8
#define pinstCTradeWnd_x                                           0xEE2D18
#define pinstCTrainWnd_x                                           0xEE3054
#define pinstCTributeBenefitWnd_x                                  0xFB7AA8
#define pinstCTributeMasterWnd_x                                   0xFB7B58
#define pinstCTributeTrophyWnd_x                                   0xFB7C08
#define pinstCVideoModesWnd_x                                      0xEE2D44
#define pinstCVoiceMacroWnd_x                                      0xFA10E8
#define pinstCVoteResultsWnd_x                                     0xEE2DF8
#define pinstCVoteWnd_x                                            0xEE2DF4
#define pinstCZoneGuideWnd_x                                       0xEE3030
#define pinstCZonePathWnd_x                                        0xEE3038
#define pinstEQSuiteTextureLoader_x                                0xEB0920
#define pinstItemIconCache_x                                       0xFB0B20
#define pinstLootFiltersManager_x                                  0xEE2200
#define pinstRewardSelectionWnd_x                                  0xFB5B78

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DD750
#define __CastRay2_x                                               0x5DD9E0
#define __ConvertItemTags_x                                        0x5FAB50
#define __CleanItemTags_x                                          0x47DA80
#define __CreateCascadeMenuItems_x                                 0x571B50
#define __DoesFileExist_x                                          0x952FE0
#define __EQGetTime_x                                              0x94FCC0
#define __ExecuteCmd_x                                             0x5D5B70
#define __FixHeading_x                                             0x9EDFF0
#define __FlushDxKeyboard_x                                        0x6DA690
#define __GameLoop_x                                               0x6DDF90
#define __get_bearing_x                                            0x5DD2F0
#define __get_melee_range_x                                        0x5DDC20
#define __GetAnimationCache_x                                      0x74CE90
#define __GetGaugeValueFromEQ_x                                    0x85C450
#define __GetLabelFromEQ_x                                         0x85DF90
#define __GetXTargetType_x                                         0x9F0360
#define __HandleMouseWheel_x                                       0x6DF420
#define __HeadingDiff_x                                            0x9EE050
#define __HelpPath_x                                               0xF9C904
#define __ExecuteFrontEnd_x                                        0x6DAE70
#define __NewUIINI_x                                               0x85C120
#define __ProcessGameEvents_x                                      0x644210
#define __ProcessKeyboardEvents_x                                  0x6DC5E0
#define __ProcessMouseEvents_x                                     0x643910
#define __SaveColors_x                                             0x571A30
#define __STMLToText_x                                             0x98BBD0
#define __WndProc_x                                                0x6DD0A0
#define CMemoryMappedFile__SetFile_x                               0xADE780
#define CrashDetected_x                                            0x6DCBA0
#define DrawNetStatus_x                                            0x673730
#define Expansion_HoT_x                                            0xDB1CF0
#define Teleport_Table_Size_x                                      0xF970E8
#define Teleport_Table_x                                           0xF94CC0
#define Util__FastTime_x                                           0x94F880
#define __eq_delete_x                                              0x9F6EB5
#define __eq_new_x                                                 0x9F7424
#define __CopyLayout_x                                             0x660330
#define __ThrottleFrameRate_x                                      0x62D093
#define __ThrottleFrameRateEnd_x                                   0x62D0EF

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EBB50
#define CAAWnd__Update_x                                           0x6EAE70
#define CAAWnd__UpdateSelected_x                                   0x6E81E0

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B520
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B3A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4956A0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948E0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x57AA40
#define AltAdvManager__IsAbilityReady_x                            0x579640
#define AltAdvManager__GetAAById_x                                 0x5799E0
#define AltAdvManager__CanTrainAbility_x                           0x579A50
#define AltAdvManager__CanSeeAbility_x                             0x579DE0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CDCC0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC5D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC7B0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1230
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1630
#define CharacterZoneClient__FindAffectSlot_x                      0x4CACB0
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF680
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEFD0
#define CharacterZoneClient__GetCurrentMod_x                       0x4EE660
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E15C0
#define CharacterZoneClient__GetEffect_x                           0x4C1170
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC370
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6D00
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8A30
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E14C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E13C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC410
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5170
#define CharacterZoneClient__GetModCap_x                           0x4EE560
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC2C0
#define CharacterZoneClient__HasSkill_x                            0x4DCDA0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8A70
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE4E0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4EA830
#define CharacterZoneClient__RemovePCAffectex_x                    0x4CA450

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x708330
#define CBankWnd__WndNotification_x                                0x7080D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712D50

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D9A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70B970

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717440

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x989170
#define CButtonWnd__CButtonWnd_x                                   0x987B40
#define CButtonWnd__dCButtonWnd_x                                  0x987DE0
#define CButtonWnd__vftable_x                                      0xB8E1A8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x73A630
#define CChatWindowManager__InitContextMenu_x                      0x733580
#define CChatWindowManager__FreeChatWindow_x                       0x739200
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x73A310
#define CChatWindowManager__CreateChatWindow_x                     0x739830

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2420

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x73AF90
#define CChatWindow__Clear_x                                       0x73C3E0
#define CChatWindow__WndNotification_x                             0x73CB60
#define CChatWindow__AddHistory_x                                  0x73BC40

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x99EFA0
#define CContextMenu__dCContextMenu_x                              0x99F1E0
#define CContextMenu__AddMenuItem_x                                0x99F1F0
#define CContextMenu__RemoveMenuItem_x                             0x99F500
#define CContextMenu__RemoveAllMenuItems_x                         0x99F520
#define CContextMenu__CheckMenuItem_x                              0x99F580
#define CContextMenu__SetMenuItem_x                                0x99F420
#define CContextMenu__AddSeparator_x                               0x99F380

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99FB10
#define CContextMenuManager__RemoveMenu_x                          0x99FB80
#define CContextMenuManager__PopupMenu_x                           0x99FC40
#define CContextMenuManager__Flush_x                               0x99FAB0
#define CContextMenuManager__GetMenu_x                             0x49D910
#define CContextMenuManager__CreateDefaultMenu_x                   0x746E60

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A410
#define CChatService__GetFriendName_x                              0x92A420

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x99C070
#define CComboWnd__Draw_x                                          0x99B500
#define CComboWnd__GetCurChoice_x                                  0x99BE40
#define CComboWnd__GetListRect_x                                   0x99B9B0
#define CComboWnd__GetTextRect_x                                   0x99C0E0
#define CComboWnd__InsertChoice_x                                  0x99BB40
#define CComboWnd__SetColors_x                                     0x99BB10
#define CComboWnd__SetChoice_x                                     0x99BE20
#define CComboWnd__GetItemCount_x                                  0x99BE50
#define CComboWnd__GetCurChoiceText_x                              0x99BE80
#define CComboWnd__GetChoiceText_x                                 0x99BE60
#define CComboWnd__InsertChoiceAtIndex_x                           0x99BBE0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x744500
#define CContainerWnd__vftable_x                                   0xB5C364
#define CContainerWnd__SetContainer_x                              0x745D20

// CDisplay
#define CDisplay__cameraType_x                                     0xEE2E2C
#define CDisplay__ZoneMainUI_x                                     0x56C230
#define CDisplay__PreZoneMainUI_x                                  0x56C240
#define CDisplay__CleanGameUI_x                                    0x571810
#define CDisplay__GetClickedActor_x                                0x564110
#define CDisplay__GetUserDefinedColor_x                            0x55BE80
#define CDisplay__GetWorldFilePath_x                               0x565C20
#define CDisplay__is3dON_x                                         0x5609A0
#define CDisplay__ReloadUI_x                                       0x56B550
#define CDisplay__WriteTextHD2_x                                   0x560790
#define CDisplay__TrueDistance_x                                   0x567AF0
#define CDisplay__SetViewActor_x                                   0x563A30
#define CDisplay__GetFloorHeight_x                                 0x560A60
#define CDisplay__SetRenderWindow_x                                0x55F3E0
#define CDisplay__ToggleScreenshotMode_x                           0x563500
#define CDisplay__RealRender_World_x                               0x55E6D0

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9C17E0

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x9A2AA0
#define CEditWnd__EnsureCaretVisible_x                             0x9A4E00
#define CEditWnd__GetCaretPt_x                                     0x9A3C70
#define CEditWnd__GetCharIndexPt_x                                 0x9A3A20
#define CEditWnd__GetDisplayString_x                               0x9A38D0
#define CEditWnd__GetHorzOffset_x                                  0x9A2000
#define CEditWnd__GetLineForPrintableChar_x                        0x9A4D10
#define CEditWnd__GetSelStartPt_x                                  0x9A3CD0
#define CEditWnd__GetSTMLSafeText_x                                0x9A36E0
#define CEditWnd__PointFromPrintableChar_x                         0x9A4960
#define CEditWnd__ReplaceSelection_x                               0x9A4520
#define CEditWnd__SelectableCharFromPoint_x                        0x9A4AC0
#define CEditWnd__SetEditable_x                                    0x9A3DA0
#define CEditWnd__SetWindowText_x                                  0x9A3430

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62F870
#define CEverQuest__ClickedPlayer_x                                0x620DA0
#define CEverQuest__CreateTargetIndicator_x                        0x641190
#define CEverQuest__DeleteTargetIndicator_x                        0x641220
#define CEverQuest__DoTellWindow_x                                 0x4F2520
#define CEverQuest__OutputTextToLog_x                              0x4F27F0
#define CEverQuest__DropHeldItemOnGround_x                         0x615DB0
#define CEverQuest__dsp_chat_x                                     0x4F2BC0
#define CEverQuest__trimName_x                                     0x63C780
#define CEverQuest__Emote_x                                        0x62FF30
#define CEverQuest__EnterZone_x                                    0x629BB0
#define CEverQuest__GetBodyTypeDesc_x                              0x6354C0
#define CEverQuest__GetClassDesc_x                                 0x635B00
#define CEverQuest__GetClassThreeLetterCode_x                      0x636100
#define CEverQuest__GetDeityDesc_x                                 0x63F940
#define CEverQuest__GetLangDesc_x                                  0x6362C0
#define CEverQuest__GetRaceDesc_x                                  0x635AE0
#define CEverQuest__InterpretCmd_x                                 0x63FFB0
#define CEverQuest__LeftClickedOnPlayer_x                          0x61A330
#define CEverQuest__LMouseUp_x                                     0x618360
#define CEverQuest__RightClickedOnPlayer_x                         0x61AF20
#define CEverQuest__RMouseUp_x                                     0x619620
#define CEverQuest__SetGameState_x                                 0x615B30
#define CEverQuest__UPCNotificationFlush_x                         0x63C6A0
#define CEverQuest__IssuePetCommand_x                              0x6378C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x630D60
#define CEverQuest__ReportSuccessfulHit_x                          0x631840

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757DE0
#define CGaugeWnd__CalcLinesFillRect_x                             0x757E40
#define CGaugeWnd__Draw_x                                          0x7573F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4850
#define CGuild__GetGuildName_x                                     0x4B3070
#define CGuild__GetGuildIndex_x                                    0x4B3790

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x775270

//CHotButton
#define CHotButton__SetButtonSize_x                                0x654B60
#define CHotButton__SetCheck_x                                     0x6547A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x782250
#define CInvSlotMgr__MoveItem_x                                    0x780E30
#define CInvSlotMgr__SelectSlot_x                                  0x782310

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F680
#define CInvSlot__SliderComplete_x                                 0x77CB70
#define CInvSlot__GetItemBase_x                                    0x77C430
#define CInvSlot__UpdateItem_x                                     0x77C620

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x783F90
#define CInvSlotWnd__CInvSlotWnd_x                                 0x783170
#define CInvSlotWnd__HandleLButtonUp_x                             0x783B10

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x8568B0
#define CItemDisplayWnd__UpdateStrings_x                           0x79B4B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790890
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790DE0
#define CItemDisplayWnd__SetItem_x                                 0x79BB40
#define CItemDisplayWnd__AboutToShow_x                             0x79B0B0
#define CItemDisplayWnd__WndNotification_x                         0x79D260
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C960
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79A010
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79AEA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88B9B0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2930

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x52AE00

// CLabel
#define CLabel__UpdateText_x                                       0x7A9480

// CListWnd
#define CListWnd__CListWnd_x                                       0x96E620
#define CListWnd__dCListWnd_x                                      0x96E920
#define CListWnd__vftable_x                                        0xB8DA80
#define CListWnd__AddColumn_x                                      0x973500
#define CListWnd__AddColumn1_x                                     0x973620
#define CListWnd__AddLine_x                                        0x973990
#define CListWnd__AddString_x                                      0x973790
#define CListWnd__CalculateFirstVisibleLine_x                      0x9732B0
#define CListWnd__CalculateVSBRange_x                              0x973090
#define CListWnd__ClearSel_x                                       0x974280
#define CListWnd__ClearAllSel_x                                    0x9742D0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x974D70
#define CListWnd__Compare_x                                        0x972810
#define CListWnd__Draw_x                                           0x96EAE0
#define CListWnd__DrawColumnSeparators_x                           0x971610
#define CListWnd__DrawHeader_x                                     0x971A70
#define CListWnd__DrawItem_x                                       0x9720B0
#define CListWnd__DrawLine_x                                       0x971780
#define CListWnd__DrawSeparator_x                                  0x9716B0
#define CListWnd__EnableLine_x                                     0x970ED0
#define CListWnd__EnsureVisible_x                                  0x974C90
#define CListWnd__ExtendSel_x                                      0x9741C0
#define CListWnd__GetColumnTooltip_x                               0x970A50
#define CListWnd__GetColumnMinWidth_x                              0x970AC0
#define CListWnd__GetColumnWidth_x                                 0x9709D0
#define CListWnd__GetCurSel_x                                      0x970380
#define CListWnd__GetItemAtPoint_x                                 0x971150
#define CListWnd__GetItemAtPoint1_x                                0x9711C0
#define CListWnd__GetItemData_x                                    0x970400
#define CListWnd__GetItemHeight_x                                  0x9707A0
#define CListWnd__GetItemIcon_x                                    0x970580
#define CListWnd__GetItemRect_x                                    0x970FC0
#define CListWnd__GetItemText_x                                    0x970440
#define CListWnd__GetSelList_x                                     0x974320
#define CListWnd__GetSeparatorRect_x                               0x971430
#define CListWnd__InsertLine_x                                     0x973DF0
#define CListWnd__RemoveLine_x                                     0x974010
#define CListWnd__SetColors_x                                      0x973060
#define CListWnd__SetColumnJustification_x                         0x972D90
#define CListWnd__SetColumnLabel_x                                 0x973730
#define CListWnd__SetColumnWidth_x                                 0x972CA0
#define CListWnd__SetCurSel_x                                      0x974110
#define CListWnd__SetItemColor_x                                   0x974950
#define CListWnd__SetItemData_x                                    0x974910
#define CListWnd__SetItemText_x                                    0x974540
#define CListWnd__ShiftColumnSeparator_x                           0x972E50
#define CListWnd__Sort_x                                           0x972B00
#define CListWnd__ToggleSel_x                                      0x974140
#define CListWnd__SetColumnsSizable_x                              0x972EF0
#define CListWnd__SetItemWnd_x                                     0x9747E0
#define CListWnd__GetItemWnd_x                                     0x9705D0
#define CListWnd__SetItemIcon_x                                    0x9745C0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9733B0
#define CListWnd__SetVScrollPos_x                                  0x972C80

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7C08C0

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7BBB10
#define MapViewMap__dMapViewMap_x                                  0x7BBC60
#define MapViewMap__vftable_x                                      0xB63758
#define MapViewMap__Clear_x                                        0x7BC570
#define MapViewMap__SaveEx_x                                       0x7BFAAF
#define MapViewMap__SetZoom_x                                      0x7C56F0
#define MapViewMap__HandleLButtonDown_x                            0x7BBD70
#define MapViewMap__GetWorldCoordinates_x                          0x7BEEE0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3B10
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4470
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4AB0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7CB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E25A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EDE10
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3760

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F7570
#define CPacketScrambler__hton_x                                   0x8F7560

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x9972F0
#define CSidlManagerBase__CreatePageWnd_x                          0x996AD0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x991FA0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x991F30
#define CSidlManagerBase__FindAnimation1_x                         0x992220
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x9925F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x992420
#define CSidlManagerBase__CreateLabel_x                            0x84C5E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x995AA0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x995D30
#define CSidlManagerBase__CreateXWnd_x                             0x995D70

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x84CA20
#define CSidlManager__CreateXWnd_x                                 0x84C050

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98DF70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98DE70
#define CSidlScreenWnd__ConvertToRes_x                             0x9BBA30
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98D7F0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98D4E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98D5B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98D680
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98E830
#define CSidlScreenWnd__EnableIniStorage_x                         0x98ED10
#define CSidlScreenWnd__GetChildItem_x                             0x98EC90
#define CSidlScreenWnd__GetSidlPiece_x                             0x98EA20
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97D2D0
#define CSidlScreenWnd__Init1_x                                    0x98CF90
#define CSidlScreenWnd__LoadIniInfo_x                              0x98ED60
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98F910
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98C3A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x1622470
#define CSidlScreenWnd__StoreIniInfo_x                             0x98F490
#define CSidlScreenWnd__StoreIniVis_x                              0x98F800
#define CSidlScreenWnd__vftable_x                                  0xB8E454
#define CSidlScreenWnd__WndNotification_x                          0x98E700

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C20D0
#define CSkillMgr__GetSkillCap_x                                   0x6C22A0
#define CSkillMgr__GetNameToken_x                                  0x6C1910
#define CSkillMgr__IsActivatedSkill_x                              0x6C1A00
#define CSkillMgr__IsCombatSkill_x                                 0x6C1970

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x9A0C00
#define CSliderWnd__SetValue_x                                     0x9A0A30
#define CSliderWnd__SetNumTicks_x                                  0x9A0A90

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x853290

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AA0F0
#define CStmlWnd__CalculateHSBRange_x                              0x9AB070
#define CStmlWnd__CalculateVSBRange_x                              0x9AAFE0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AFEE0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B0B80
#define CStmlWnd__ForceParseNow_x                                  0x9AA660
#define CStmlWnd__GetNextTagPiece_x                                0x9AFE40
#define CStmlWnd__GetVisibleText_x                                 0x9AA680
#define CStmlWnd__InitializeWindowVariables_x                      0x9B09D0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A9790
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A9800
#define CStmlWnd__SetSTMLText_x                                    0x9A8570
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B1DA0
#define CStmlWnd__UpdateHistoryString_x                            0x9B0D80

// CTabWnd
#define CTabWnd__Draw_x                                            0x9A7420
#define CTabWnd__DrawCurrentPage_x                                 0x9A7DB0
#define CTabWnd__DrawTab_x                                         0x9A79A0
#define CTabWnd__GetCurrentPage_x                                  0x9A6B80
#define CTabWnd__GetCurrentTabIndex_x                              0x9A6B70
#define CTabWnd__GetPageFromTabIndex_x                             0x9A78E0
#define CTabWnd__GetPageInnerRect_x                                0x9A6DB0
#define CTabWnd__GetTabInnerRect_x                                 0x9A6CF0
#define CTabWnd__GetTabRect_x                                      0x9A6BB0
#define CTabWnd__InsertPage_x                                      0x9A6FA0
#define CTabWnd__RemovePage_x                                      0x9A70F0
#define CTabWnd__SetPage_x                                         0x9A6E30
#define CTabWnd__SetPageRect_x                                     0x9A7320
#define CTabWnd__UpdatePage_x                                      0x9A7790

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9A6570
#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A6510

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC8C0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x979710
#define CTextureFont__DrawWrappedText1_x                           0x979640
#define CTextureFont__DrawWrappedText2_x                           0x979800
#define CTextureFont__GetTextExtent_x                              0x979A10

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9B84E0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x9640D0

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x544840
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x94BC10
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x94BE50
#define CXStr__operator_equal1_x                                   0x94BE90
#define CXStr__operator_plus_equal1_x                              0x94C8F0
#define CXStr__SetString_x                                         0x94E790
#define CXStr__operator_char_p_x                                   0x94C340
#define CXStr__GetChar_x                                           0x94E0F0
#define CXStr__Delete_x                                            0x94D9C0
#define CXStr__GetUnicode_x                                        0x94E160
#define CXStr__Insert_x                                            0x94E1C0
#define CXStr__FindNext_x                                          0x94DE10
#define CXStr__gFreeLists_x                                        0xEB02F8
#define CXStr__gCXStrAccess_x                                      0x1621CF8

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99EC00

// CXWnd
#define CXWnd__BringToTop_x                                        0x980CD0
#define CXWnd__ClrFocus_x                                          0x980660
#define CXWnd__Destroy_x                                           0x980700
#define CXWnd__DoAllDrawing_x                                      0x97C930
#define CXWnd__DrawChildren_x                                      0x97C900
#define CXWnd__DrawColoredRect_x                                   0x97CEB0
#define CXWnd__DrawTooltip_x                                       0x97AE50
#define CXWnd__DrawTooltipAtPoint_x                                0x97AF10
#define CXWnd__GetBorderFrame_x                                    0x97CB50
#define CXWnd__GetChildItem_x                                      0x980EF0
#define CXWnd__GetChildWndAt_x                                     0x980D70
#define CXWnd__GetClientClipRect_x                                 0x97EE60
#define CXWnd__GetRelativeRect_x                                   0x97F1C0
#define CXWnd__GetScreenClipRect_x                                 0x97EF30
#define CXWnd__GetScreenRect_x                                     0x97F0F0
#define CXWnd__GetTooltipRect_x                                    0x97CF00
#define CXWnd__GetWindowTextA_x                                    0x4F23C0
#define CXWnd__IsActive_x                                          0x97D650
#define CXWnd__IsDescendantOf_x                                    0x97FB90
#define CXWnd__IsReallyVisible_x                                   0x97FBC0
#define CXWnd__IsType_x                                            0x981500
#define CXWnd__Minimize_x                                          0x980300
#define CXWnd__Move_x                                              0x97FC20
#define CXWnd__Move1_x                                             0x97FD20
#define CXWnd__ProcessTransition_x                                 0x9807E0
#define CXWnd__Refade_x                                            0x980000
#define CXWnd__Resize_x                                            0x980290
#define CXWnd__Right_x                                             0x980AC0
#define CXWnd__SetFocus_x                                          0x980620
#define CXWnd__SetFont_x                                           0x980690
#define CXWnd__SetKeyTooltip_x                                     0x9812C0
#define CXWnd__SetMouseOver_x                                      0x97DFB0
#define CXWnd__SetParent_x                                         0x97F8A0
#define CXWnd__StartFade_x                                         0x97FA70
#define CXWnd__vftable_x                                           0xB8DEC8
#define CXWnd__CXWnd_x                                             0x979D20
#define CXWnd__dCXWnd_x                                            0x97A420

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BCA80

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x983D90
#define CXWndManager__DrawWindows_x                                0x983EE0
#define CXWndManager__GetKeyboardFlags_x                           0x986780
#define CXWndManager__HandleKeyboardMsg_x                          0x986360
#define CXWndManager__RemoveWnd_x                                  0x986A40
#define CXWndManager__RemovePendingDeletionWnd_x                   0x986EF0

// CDBStr
#define CDBStr__GetString_x                                        0x55A9A0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E1E20
#define CharacterZoneClient__CastSpell_x                           0x4C5AF0
#define CharacterZoneClient__Cur_HP_x                              0x4D9A10
#define CharacterZoneClient__Cur_Mana_x                            0x4E1AF0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DCB60
#define CharacterZoneClient__GetBaseSkill_x                        0x4DDB00
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C9160
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E8A90
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B8640
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8790
#define CharacterZoneClient__GetHPRegen_x                          0x4E84D0
#define CharacterZoneClient__GetManaRegen_x                        0x4E8ED0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C9F90
#define CharacterZoneClient__Max_Endurance_x                       0x683260
#define CharacterZoneClient__Max_HP_x                              0x4D9840
#define CharacterZoneClient__Max_Mana_x                            0x683050
#define CharacterZoneClient__SpellDuration_x                       0x4C99D0
#define CharacterZoneClient__TotalEffect_x                         0x4CD5D0
#define CharacterZoneClient__UseSkill_x                            0x4EAED0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9178D0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69AC90

// PcClient
#define PcClient__PcClient_x                                       0x6785F0
#define PcClient__GetConLevel_x                                    0x67B380

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0100
#define CCharacterListWnd__EnterWorld_x                            0x4BFAD0
#define CCharacterListWnd__Quit_x                                  0x4BF7F0
#define CCharacterListWnd__UpdateList_x                            0x4BFCC0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65A9C0
#define EQ_Item__CreateItemTagString_x                             0x8F0300
#define EQ_Item__IsStackable_x                                     0x8F5540
#define EQ_Item__GetImageNum_x                                     0x8F1F90
#define EQ_Item__CreateItemClient_x                                0x659930
#define EQ_Item__GetItemValue_x                                    0x8F3280
#define EQ_Item__ValueSellMerchant_x                               0x8F72A0
#define EQ_Item__IsKeyRingItem_x                                   0x8F4D10
#define EQ_Item__CanGemFitInSlot_x                                 0x8EFB30
#define EQ_Item__CanGoInBag_x                                      0x65AAE0
#define EQ_Item__IsEmpty_x                                         0x8F46E0
#define EQ_Item__GetMaxItemCount_x                                 0x8F3680
#define EQ_Item__GetHeldItem_x                                     0x8F1E40
#define ItemClient__dItemClient_x                                  0x659880

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x57B840
#define EQ_LoadingS__Array_x                                       0xD9ED10

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x9011E0
#define EQ_PC__GetCombatAbility_x                                  0x901760
#define EQ_PC__GetCombatAbilityTimer_x                             0x9017D0
#define EQ_PC__GetItemRecastTimer_x                                0x686190
#define EQ_PC__HasLoreItem_x                                       0x67BD30
#define EQ_PC__AlertInventoryChanged_x                             0x67AC40
#define EQ_PC__GetPcZoneClient_x                                   0x6AB380
#define EQ_PC__RemoveMyAffect_x                                    0x6896B0
#define EQ_PC__GetKeyRingItems_x                                   0x902260
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x901DC0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9023B0

// EQItemList
#define EQItemList__EQItemList_x                                   0x5DA750
#define EQItemList__add_object_x                                   0x60AC50
#define EQItemList__add_item_x                                     0x5DAD30
#define EQItemList__delete_item_x                                  0x5DAD80
#define EQItemList__FreeItemList_x                                 0x5DAC90

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556AE0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C6C0
#define EQPlayer__dEQPlayer_x                                      0x68EF60
#define EQPlayer__DoAttack_x                                       0x6A50C0
#define EQPlayer__EQPlayer_x                                       0x68F7B0
#define EQPlayer__SetNameSpriteState_x                             0x693D70
#define EQPlayer__SetNameSpriteTint_x                              0x694C40
#define PlayerBase__HasProperty_j_x                                0x9EC3C0
#define EQPlayer__IsTargetable_x                                   0x9EC920
#define EQPlayer__CanSee_x                                         0x9EC710
#define EQPlayer__CanSee1_x                                        0x9EC7E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EC480

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8E80
#define PlayerZoneClient__GetLevel_x                               0x6AB3C0
#define PlayerZoneClient__IsValidTeleport_x                        0x60C0F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x5737F0

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F860
#define EQPlayerManager__GetSpawnByName_x                          0x69F910
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69F9A0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65E2F0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65E3C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65E400
#define KeypressHandler__ClearCommandStateArray_x                  0x65F8C0
#define KeypressHandler__HandleKeyDown_x                           0x65F8E0
#define KeypressHandler__HandleKeyUp_x                             0x65F980
#define KeypressHandler__SaveKeymapping_x                          0x65FF30

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x915760

// StringTable
#define StringTable__getString_x                                   0x910640

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x685B90
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x683D50
#define PcZoneClient__GetPcSkillLimit_x                            0x689300
#define PcZoneClient__RemovePetEffect_x                            0x689960
#define PcZoneClient__HasAlternateAbility_x                        0x682EB0
#define PcZoneClient__CanEquipItem_x                               0x683560
#define PcZoneClient__GetItemByID_x                                0x686660
#define PcZoneClient__GetItemByItemClass_x                         0x6867A0
#define PcZoneClient__RemoveBuffEffect_x                           0x689A10
#define PcZoneClient__BandolierSwap_x                              0x684300
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x686130

// Doors
#define EQSwitch__UseSwitch_x                                      0x610C40

// IconCache
#define IconCache__GetIcon_x                                       0x74C830

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x743410
#define CContainerMgr__CloseContainer_x                            0x7436F0
#define CContainerMgr__OpenExperimentContainer_x                   0x744250

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BA70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x652F30

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7B17C0
#define CLootWnd__RequestLootSlot_x                                0x7B09F0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A5E80
#define EQ_Spell__SpellAffects_x                                   0x5A6380
#define EQ_Spell__SpellAffectBase_x                                0x5A60A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0FC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F70
#define EQ_Spell__IsSPAStacking_x                                  0x5A7130
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6580
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7140
#define __IsResEffectSpell_x                                       0x4D0770

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1600

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868370
#define CTargetWnd__WndNotification_x                              0x867B00
#define CTargetWnd__RefreshTargetBuffs_x                           0x867E60
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866900

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86CEF0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86FFC0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x554690
#define CTaskManager__HandleMessage_x                              0x552570
#define CTaskManager__GetTaskStatus_x                              0x554740
#define CTaskManager__GetElementDescription_x                      0x5547C0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0A50
#define EqSoundManager__PlayScriptMp3_x                            0x5A0C50
#define EqSoundManager__SoundAssistPlay_x                          0x6C6590
#define EqSoundManager__WaveInstancePlay_x                         0x6C5A80

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5444F0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x9A5BD0
#define CTextureAnimation__SetCurCell_x                            0x9A5990

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x583E20
#define CAltAbilityData__GetMercMaxRank_x                          0x583DB0
#define CAltAbilityData__GetMaxRank_x                              0x5781C0

// CTargetRing
#define CTargetRing__Cast_x                                        0x650740

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x646E60
#define CharacterBase__GetItemByGlobalIndex_x                      0x927D30
#define CharacterBase__GetItemByGlobalIndex1_x                     0x927D80
#define CharacterBase__GetItemPossession_x                         0x659760
#define CharacterBase__GetMemorizedSpell_x                         0x659780
#define CharacterBase__IsExpansionFlag_x                           0x5D43D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728300
#define CCastSpellWnd__IsBardSongPlaying_x                         0x728BC0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728C70

// messages
#define msg_spell_worn_off_x                                       0x5CBD80
#define msg_new_text_x                                             0x5BFB90
#define __msgTokenTextParam_x                                      0x5CE1E0
#define msgTokenText_x                                             0x5CE5F0

// SpellManager
#define SpellManager__vftable_x                                    0xB3A4B4
#define SpellManager__SpellManager_x                               0x6CA1C0
#define Spellmanager__LoadTextSpells_x                             0x6CAAC0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CA390

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9F0C10

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x920BD0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x920F20

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A98F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7480E0
#define CCursorAttachment__AttachToCursor1_x                       0x748120
#define CCursorAttachment__Deactivate_x                            0x7496B0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9B6950
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B70B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B6D30

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524680
#define CFindItemWnd__WndNotification_x                            0x525540
#define CFindItemWnd__Update_x                                     0x526120
#define CFindItemWnd__PickupSelectedItem_x                         0x523D90

// IString
#define IString__Append_x                                          0x513920

// Camera
#define EverQuest__Cameras_x                                       0xDB2048

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F340
#define LootFiltersManager__GetItemFilterData_x                    0x52EC70
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52ECA0
#define LootFiltersManager__SetItemLootFilter_x                    0x52EEB0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808570

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F68D0
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0A10

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73FD90

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92C0C0
#define CDistillerInfo__Instance_x                                 0x92C000

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7629D0
#define CGroupWnd__UpdateDisplay_x                                 0x761C20

// ItemBase
#define ItemBase__IsLore_x                                         0x8F4DB0
#define ItemBase__IsLoreEquipped_x                                 0x8F4E20

#define MultipleItemMoveManager__ProcessMove_x                     0x66F610

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60ABB0
#define EQPlacedItemManager__GetItemByGuid_x                       0x60ACF0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60AD50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5140
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9A30

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A0E0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x504EC0
#define FactionManagerClient__HandleFactionMessage_x               0x5056E0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x505ED0
#define FactionManagerClient__GetMaxFaction_x                      0x505EEF
#define FactionManagerClient__GetMinFaction_x                      0x505EA0

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511AB0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x978380

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E330

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511D20

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x582FF0

// CTargetManager
#define CTargetManager__Get_x                                      0x6CE140

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5140

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC680

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DAC30

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4F6DC

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x5DF440

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
