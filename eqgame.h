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
#define __ExpectedVersionDate                                     "Aug 14 2020"
#define __ExpectedVersionTime                                     "19:29:54"
#define __ActualVersionDate_x                                      0xAF128C
#define __ActualVersionTime_x                                      0xAF1280
#define __ActualVersionBuild_x                                     0xADF2AC

// Memory Protection
#define __MemChecker0_x                                            0x6404E0
#define __MemChecker1_x                                            0x8F27B0
#define __MemChecker2_x                                            0x6B0A30
#define __MemChecker3_x                                            0x6B0980
#define __MemChecker4_x                                            0x849520
#define __EncryptPad0_x                                            0xC264E8
#define __EncryptPad1_x                                            0xC83D28
#define __EncryptPad2_x                                            0xC368B8
#define __EncryptPad3_x                                            0xC364B8
#define __EncryptPad4_x                                            0xC742C8
#define __EncryptPad5_x                                            0xF460B0
#define __AC1_x                                                    0x807D16
#define __AC2_x                                                    0x5F9DFF
#define __AC3_x                                                    0x601450
#define __AC4_x                                                    0x605400
#define __AC5_x                                                    0x60B6EF
#define __AC6_x                                                    0x60FBB6
#define __AC7_x                                                    0x5F9870
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x193CD8

// Direct Input
#define DI8__Main_x                                                0xF460D0
#define DI8__Keyboard_x                                            0xF460D4
#define DI8__Mouse_x                                               0xF460EC
#define DI8__Mouse_Copy_x                                          0xE9F44C
#define DI8__Mouse_Check_x                                         0xF43C04
#define __AutoSkillArray_x                                         0xEA0364
#define __Attack_x                                                 0xF3E187
#define __Autofire_x                                               0xF3E188
#define __BindList_x                                               0xC14F38
#define g_eqCommandStates_x                                        0xC15CB8
#define __Clicks_x                                                 0xE9F504
#define __CommandList_x                                            0xC16878
#define __CurrentMapLabel_x                                        0xF56AA4
#define __CurrentSocial_x                                          0xBFE7C8
#define __DoAbilityList_x                                          0xED5CA8
#define __do_loot_x                                                0x5C5AB0
#define __DrawHandler_x                                            0x15D5A98
#define __GroupCount_x                                             0xE9A522
#define __Guilds_x                                                 0xE9E388
#define __gWorld_x                                                 0xE9A4B4
#define __HWnd_x                                                   0xF460F0
#define __heqmain_x                                                0xF46098
#define __InChatMode_x                                             0xE9F434
#define __LastTell_x                                               0xEA13A4
#define __LMouseHeldTime_x                                         0xE9F570
#define __Mouse_x                                                  0xF460BC
#define __MouseLook_x                                              0xE9F4CA
#define __MouseEventTime_x                                         0xF3EC6C
#define __gpbCommandEvent_x                                        0xE97E20
#define __NetStatusToggle_x                                        0xE9F4CD
#define __PCNames_x                                                0xEA0954
#define __RangeAttackReady_x                                       0xEA0648
#define __RMouseHeldTime_x                                         0xE9F56C
#define __RunWalkState_x                                           0xE9F438
#define __ScreenMode_x                                             0xDE57B0
#define __ScreenX_x                                                0xE9F3EC
#define __ScreenY_x                                                0xE9F3E8
#define __ScreenXMax_x                                             0xE9F3F0
#define __ScreenYMax_x                                             0xE9F3F4
#define __ServerHost_x                                             0xE97FF3
#define __ServerName_x                                             0xED5C68
#define __ShiftKeyDown_x                                           0xE9FAC4
#define __ShowNames_x                                              0xEA0804
#define __SocialChangedList_x                                      0xED5CF0
#define __Socials_x                                                0xED5D68
#define __SubscriptionType_x                                       0xF9AD68
#define __TargetAggroHolder_x                                      0xF59458
#define __ZoneType_x                                               0xE9F8C8
#define __GroupAggro_x                                             0xF59498
#define __LoginName_x                                              0xF4682C
#define __Inviter_x                                                0xF3E104
#define __AttackOnAssist_x                                         0xEA07C0
#define __UseTellWindows_x                                         0xEA0AEC
#define __gfMaxZoomCameraDistance_x                                0xAE8EA8
#define __gfMaxCameraDistance_x                                    0xB11B18
#define __pulAutoRun_x                                             0xE9F4E8
#define __pulForward_x                                             0xEA0B24
#define __pulBackward_x                                            0xEA0B28
#define __pulTurnRight_x                                           0xEA0B2C
#define __pulTurnLeft_x                                            0xEA0B30
#define __pulStrafeLeft_x                                          0xEA0B34
#define __pulStrafeRight_x                                         0xEA0B38

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xE9A720
#define instEQZoneInfo_x                                           0xE9F6C0
#define pinstActiveBanker_x                                        0xE9830C
#define pinstActiveCorpse_x                                        0xE98304
#define pinstActiveGMaster_x                                       0xE98308
#define pinstActiveMerchant_x                                      0xE980FC
#define pinstAltAdvManager_x                                       0xDE6950
#define pinstBandageTarget_x                                       0xE9831C
#define pinstCamActor_x                                            0xDE57A4
#define pinstCDBStr_x                                              0xDE566C
#define pinstCDisplay_x                                            0xE9A374
#define pinstCEverQuest_x                                          0xF460E8
#define pinstEverQuestInfo_x                                       0xE9F3E0
#define pinstCharData_x                                            0xE9A710
#define pinstCharSpawn_x                                           0xE98354
#define pinstControlledMissile_x                                   0xE98364
#define pinstControlledPlayer_x                                    0xE98354
#define pinstCResolutionHandler_x                                  0x15D5CC8
#define pinstCSidlManager_x                                        0x15D4C60
#define pinstCXWndManager_x                                        0x15D4C5C
#define instDynamicZone_x                                          0xE9E260
#define pinstDZMember_x                                            0xE9E370
#define pinstDZTimerInfo_x                                         0xE9E374
#define pinstEqLogin_x                                             0xF46178
#define instEQMisc_x                                               0xDE55B0
#define pinstEQSoundManager_x                                      0xDE7920
#define pinstEQSpellStrings_x                                      0xCA7F68
#define instExpeditionLeader_x                                     0xE9E2AA
#define instExpeditionName_x                                       0xE9E2EA
#define pinstSGraphicsEngine_x                                     0x15D5A8C
#define pinstGroup_x                                               0xE9A51E
#define pinstImeManager_x                                          0x15D4C58
#define pinstLocalPlayer_x                                         0xE97EEC
#define pinstMercenaryData_x                                       0xF40764
#define pinstMercenaryStats_x                                      0xF59524
#define pinstModelPlayer_x                                         0xE98314
#define pinstPCData_x                                              0xE9A710
#define pinstSkillMgr_x                                            0xF428C8
#define pinstSpawnManager_x                                        0xF41370
#define pinstSpellManager_x                                        0xF42B08
#define pinstSpellSets_x                                           0xF36DB0
#define pinstStringTable_x                                         0xE9A718
#define pinstSwitchManager_x                                       0xE97CC0
#define pinstTarget_x                                              0xE98350
#define pinstTargetObject_x                                        0xE9835C
#define pinstTargetSwitch_x                                        0xE9836C
#define pinstTaskMember_x                                          0xDE5440
#define pinstTrackTarget_x                                         0xE98358
#define pinstTradeTarget_x                                         0xE98310
#define instTributeActive_x                                        0xDE55D1
#define pinstViewActor_x                                           0xDE579C
#define pinstWorldData_x                                           0xE97E10
#define pinstZoneAddr_x                                            0xE9F960
#define pinstPlayerPath_x                                          0xF41408
#define pinstTargetIndicator_x                                     0xF42D70
#define EQObject_Top_x                                             0xE97EE8

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xDE5AE4
#define pinstCAchievementsWnd_x                                    0xDE5740
#define pinstCActionsWnd_x                                         0xDE5F78
#define pinstCAdvancedDisplayOptionsWnd_x                          0xDE57FC
#define pinstCAdvancedLootWnd_x                                    0xDE5794
#define pinstCAdventureLeaderboardWnd_x                            0xF50278
#define pinstCAdventureRequestWnd_x                                0xF50328
#define pinstCAdventureStatsWnd_x                                  0xF503D8
#define pinstCAggroMeterWnd_x                                      0xDE57E4
#define pinstCAlarmWnd_x                                           0xDE5764
#define pinstCAlertHistoryWnd_x                                    0xDE5874
#define pinstCAlertStackWnd_x                                      0xDE57CC
#define pinstCAlertWnd_x                                           0xDE57E0
#define pinstCAltStorageWnd_x                                      0xF50738
#define pinstCAudioTriggersWindow_x                                0xC9A298
#define pinstCAuraWnd_x                                            0xDE5798
#define pinstCAvaZoneWnd_x                                         0xDE583C
#define pinstCBandolierWnd_x                                       0xDE57F8
#define pinstCBankWnd_x                                            0xDE582C
#define pinstCBarterMerchantWnd_x                                  0xF51978
#define pinstCBarterSearchWnd_x                                    0xF51A28
#define pinstCBarterWnd_x                                          0xF51AD8
#define pinstCBazaarConfirmationWnd_x                              0xDE577C
#define pinstCBazaarSearchWnd_x                                    0xDE5AE8
#define pinstCBazaarWnd_x                                          0xDE5744
#define pinstCBlockedBuffWnd_x                                     0xDE57C0
#define pinstCBlockedPetBuffWnd_x                                  0xDE57E8
#define pinstCBodyTintWnd_x                                        0xDE5F8C
#define pinstCBookWnd_x                                            0xDE5824
#define pinstCBreathWnd_x                                          0xDE5B6C
#define pinstCBuffWindowNORMAL_x                                   0xDE578C
#define pinstCBuffWindowSHORT_x                                    0xDE5790
#define pinstCBugReportWnd_x                                       0xDE5828
#define pinstCButtonWnd_x                                          0x15D4EC8
#define pinstCCastingWnd_x                                         0xDE5818
#define pinstCCastSpellWnd_x                                       0xDE5B68
#define pinstCCharacterListWnd_x                                   0xDE5F98
#define pinstCChatWindowManager_x                                  0xF52598
#define pinstCClaimWnd_x                                           0xF526F0
#define pinstCColorPickerWnd_x                                     0xDE5A94
#define pinstCCombatAbilityWnd_x                                   0xDE5758
#define pinstCCombatSkillsSelectWnd_x                              0xDE5710
#define pinstCCompassWnd_x                                         0xDE5F7C
#define pinstCConfirmationDialog_x                                 0xF575F0
#define pinstCContainerMgr_x                                       0xDE5F88
#define pinstCContextMenuManager_x                                 0x15D4C18
#define pinstCCursorAttachment_x                                   0xDE580C
#define pinstCDynamicZoneWnd_x                                     0xF52CB8
#define pinstCEditLabelWnd_x                                       0xDE5784
#define pinstCEQMainWnd_x                                          0xF52F00
#define pinstCEventCalendarWnd_x                                   0xDE5AFC
#define pinstCExtendedTargetWnd_x                                  0xDE57C8
#define pinstCFacePick_x                                           0xDE5714
#define pinstCFactionWnd_x                                         0xDE5734
#define pinstCFellowshipWnd_x                                      0xF53100
#define pinstCFileSelectionWnd_x                                   0xDE5A8C
#define pinstCFindItemWnd_x                                        0xDE5724
#define pinstCFindLocationWnd_x                                    0xF53258
#define pinstCFriendsWnd_x                                         0xDE5728
#define pinstCGemsGameWnd_x                                        0xDE5730
#define pinstCGiveWnd_x                                            0xDE5768
#define pinstCGroupSearchFiltersWnd_x                              0xDE5800
#define pinstCGroupSearchWnd_x                                     0xF53650
#define pinstCGroupWnd_x                                           0xF53700
#define pinstCGuildBankWnd_x                                       0xEA07A4
#define pinstCGuildCreationWnd_x                                   0xF53860
#define pinstCGuildMgmtWnd_x                                       0xF53910
#define pinstCharacterCreation_x                                   0xDE5718
#define pinstCHelpWnd_x                                            0xDE576C
#define pinstCHeritageSelectionWnd_x                               0xDE5720
#define pinstCHotButtonWnd_x                                       0xF55A68
#define pinstCHotButtonWnd1_x                                      0xF55A68
#define pinstCHotButtonWnd2_x                                      0xF55A6C
#define pinstCHotButtonWnd3_x                                      0xF55A70
#define pinstCHotButtonWnd4_x                                      0xF55A74
#define pinstCIconSelectionWnd_x                                   0xDE5808
#define pinstCInspectWnd_x                                         0xDE57EC
#define pinstCInventoryWnd_x                                       0xDE57A0
#define pinstCInvSlotMgr_x                                         0xDE5AD8
#define pinstCItemDisplayManager_x                                 0xF55FF8
#define pinstCItemExpTransferWnd_x                                 0xF56128
#define pinstCItemOverflowWnd_x                                    0xDE5B64
#define pinstCJournalCatWnd_x                                      0xDE5AA0
#define pinstCJournalTextWnd_x                                     0xDE5860
#define pinstCKeyRingWnd_x                                         0xDE5814
#define pinstCLargeDialogWnd_x                                     0xF58270
#define pinstCLayoutCopyWnd_x                                      0xF56478
#define pinstCLFGuildWnd_x                                         0xF56528
#define pinstCLoadskinWnd_x                                        0xDE5748
#define pinstCLootFiltersCopyWnd_x                                 0xCB6948
#define pinstCLootFiltersWnd_x                                     0xDE57D0
#define pinstCLootSettingsWnd_x                                    0xDE57F4
#define pinstCLootWnd_x                                            0xDE5AA8
#define pinstCMailAddressBookWnd_x                                 0xDE5ADC
#define pinstCMailCompositionWnd_x                                 0xDE5A98
#define pinstCMailIgnoreListWnd_x                                  0xDE5AE0
#define pinstCMailWnd_x                                            0xDE5A84
#define pinstCManageLootWnd_x                                      0xDE6E00
#define pinstCMapToolbarWnd_x                                      0xDE5770
#define pinstCMapViewWnd_x                                         0xDE573C
#define pinstCMarketplaceWnd_x                                     0xDE57D4
#define pinstCMerchantWnd_x                                        0xDE5AD0
#define pinstCMIZoneSelectWnd_x                                    0xF56D60
#define pinstCMusicPlayerWnd_x                                     0xDE5A80
#define pinstCNameChangeMercWnd_x                                  0xDE5774
#define pinstCNameChangePetWnd_x                                   0xDE574C
#define pinstCNameChangeWnd_x                                      0xDE5788
#define pinstCNoteWnd_x                                            0xDE5750
#define pinstCObjectPreviewWnd_x                                   0xDE57F0
#define pinstCOptionsWnd_x                                         0xDE575C
#define pinstCPetInfoWnd_x                                         0xDE587C
#define pinstCPetitionQWnd_x                                       0xDE570C
//#define pinstCPlayerCustomizationWnd_x                           0xDA8E24
#define pinstCPlayerNotesWnd_x                                     0xDE5F90
#define pinstCPlayerWnd_x                                          0xDE586C
#define pinstCPopupWndManager_x                                    0xF575F0
#define pinstCProgressionSelectionWnd_x                            0xF576A0
#define pinstCPurchaseGroupWnd_x                                   0xDE5848
#define pinstCPurchaseWnd_x                                        0xDE581C
#define pinstCPvPLeaderboardWnd_x                                  0xF57750
#define pinstCPvPStatsWnd_x                                        0xF57800
#define pinstCQuantityWnd_x                                        0xDE585C
#define pinstCRaceChangeWnd_x                                      0xDE57BC
#define pinstCRaidOptionsWnd_x                                     0xDE5804
#define pinstCRaidWnd_x                                            0xDE5AB0
#define pinstCRealEstateItemsWnd_x                                 0xDE5738
#define pinstCRealEstateLayoutDetailsWnd_x                         0xDE5F84
#define pinstCRealEstateManageWnd_x                                0xDE584C
#define pinstCRealEstateNeighborhoodWnd_x                          0xDE5868
#define pinstCRealEstatePlotSearchWnd_x                            0xDE5A88
#define pinstCRealEstatePurchaseWnd_x                              0xDE5AA4
#define pinstCRespawnWnd_x                                         0xDE57DC
//#define pinstCRewardSelectionWnd_x                               0x10205B0
#define pinstCSelectorWnd_x                                        0xDE5708
#define pinstCSendMoneyWnd_x                                       0xDE5778
#define pinstCServerListWnd_x                                      0xDE5AAC
#define pinstCSkillsSelectWnd_x                                    0xDE5FA0
#define pinstCSkillsWnd_x                                          0xDE5F80
#define pinstCSocialEditWnd_x                                      0xDE5810
#define pinstCSocialWnd_x                                          0xDE5760
#define pinstCSpellBookWnd_x                                       0xDE5754
#define pinstCStoryWnd_x                                           0xDE5F74
#define pinstCTargetOfTargetWnd_x                                  0xF595A8
#define pinstCTargetWnd_x                                          0xDE57D8
#define pinstCTaskOverlayWnd_x                                     0xDE5840
#define pinstCTaskSelectWnd_x                                      0xF59700
#define pinstCTaskManager_x                                        0xCB7288
#define pinstCTaskTemplateSelectWnd_x                              0xF597B0
#define pinstCTaskWnd_x                                            0xF59860
#define pinstCTextEntryWnd_x                                       0xDE5820
#define pinstCTimeLeftWnd_x                                        0xDE5F9C
#define pinstCTipWndCONTEXT_x                                      0xF59A64
#define pinstCTipWndOFDAY_x                                        0xF59A60
#define pinstCTitleWnd_x                                           0xF59B10
#define pinstCTrackingWnd_x                                        0xDE57C4
#define pinstCTradeskillWnd_x                                      0xF59C78
#define pinstCTradeWnd_x                                           0xDE5F94
#define pinstCTrainWnd_x                                           0xDE5A9C
#define pinstCTributeBenefitWnd_x                                  0xF59E78
#define pinstCTributeMasterWnd_x                                   0xF59F28
#define pinstCTributeTrophyWnd_x                                   0xF59FD8
#define pinstCVideoModesWnd_x                                      0xDE5870
#define pinstCVoiceMacroWnd_x                                      0xF43328
#define pinstCVoteResultsWnd_x                                     0xDE572C
#define pinstCVoteWnd_x                                            0xDE571C
#define pinstCWebManager_x                                         0xF439A4
#define pinstCZoneGuideWnd_x                                       0xDE5844
#define pinstCZonePathWnd_x                                        0xDE5858
#define pinstEQSuiteTextureLoader_x                                0xC84648
#define pinstItemIconCache_x                                       0xF52EB8
#define pinstLootFiltersManager_x                                  0xCB69F8
#define pinstRewardSelectionWnd_x                                  0xF57F48

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5C11B0
#define __CastRay2_x                                               0x5C1200
#define __ConvertItemTags_x                                        0x5DCDB0
#define __CleanItemTags_x                                          0x47CD50
#define __CreateCascadeMenuItems_x                                 0x55A910
#define __DoesFileExist_x                                          0x8F5890
#define __EQGetTime_x                                              0x8F23E0
#define __ExecuteCmd_x                                             0x5B9B40
#define __FixHeading_x                                             0x987EE0
#define __FlushDxKeyboard_x                                        0x6AC8D0
#define __GameLoop_x                                               0x6AFC00
#define __get_bearing_x                                            0x5C0D10
#define __get_melee_range_x                                        0x5C13F0
#define __GetAnimationCache_x                                      0x714EB0
#define __GetGaugeValueFromEQ_x                                    0x8061C0
#define __GetLabelFromEQ_x                                         0x807CA0
#define __GetXTargetType_x                                         0x9899F0
#define __HandleMouseWheel_x                                       0x6B0AE0
#define __HeadingDiff_x                                            0x987F50
#define __HelpPath_x                                               0xF3E85C
#define __LoadFrontEnd_x                                           0x6ACF10
#define __NewUIINI_x                                               0x805E90
#define __ProcessGameEvents_x                                      0x6217D0
#define __ProcessKeyboardEvents_x                                  0x6AE460
#define __ProcessMouseEvents_x                                     0x620F60
#define __SaveColors_x                                             0x55A7F0
#define __STMLToText_x                                             0x92B280
#define __WndProc_x                                                0x6AEEC0
#define CMemoryMappedFile__SetFile_x                               0xA773B0
#define CrashDetected_x                                            0x6AE9C0
#define DrawNetStatus_x                                            0x64D980
#define Expansion_HoT_x                                            0xEA07AC
#define Teleport_Table_Size_x                                      0xE97EA8
#define Teleport_Table_x                                           0xE98370
#define Util__FastTime_x                                           0x8F1FB0
#define __eq_delete_x                                              0x9904EE
#define __eq_new_x                                                 0x990AB4
#define __CopyLayout_x                                             0x63BBD0
#define __ThrottleFrameRate_x                                      0x624F00

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6BCE20
#define CAAWnd__Update_x                                           0x6BC140
#define CAAWnd__UpdateSelected_x                                   0x6B9690

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4900D0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x4990B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x498E80
#define CAdvancedLootWnd__AddPlayerToList_x                        0x493660
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x492AB0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x562A90
#define AltAdvManager__IsAbilityReady_x                            0x561830
#define AltAdvManager__GetAAById_x                                 0x561BC0
#define AltAdvManager__CanTrainAbility_x                           0x561C30
#define AltAdvManager__CanSeeAbility_x                             0x561F90

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C71D0
#define CharacterZoneClient__CalcAffectChange_x                    0x4C5A80
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C5C60
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4BBB60
#define CharacterZoneClient__CharacterZoneClient_x                 0x4CAF00
#define CharacterZoneClient__FindAffectSlot_x                      0x4C47C0
#define CharacterZoneClient__FindItemByGuid_x                      0x4D8400
#define CharacterZoneClient__FindItemByRecord_x                    0x4D7E80
#define CharacterZoneClient__GetCurrentMod_x                       0x4E5C80
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DA020
#define CharacterZoneClient__GetEffect_x                           0x4BBAA0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C58E0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B1DE0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B3870
#define CharacterZoneClient__GetItemCountInInventory_x             0x4D9F40
#define CharacterZoneClient__GetItemCountWorn_x                    0x4D9E60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C5930
#define CharacterZoneClient__GetMaxEffects_x                       0x4BF580
#define CharacterZoneClient__GetModCap_x                           0x4E5B80
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C5810
#define CharacterZoneClient__HasSkill_x                            0x4D5D80
#define CharacterZoneClient__IsStackBlocked_x                      0x4C26E0
#define CharacterZoneClient__MakeMeVisible_x                       0x4D74A0

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6D6650
#define CBankWnd__WndNotification_x                                0x6D6430

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x6E4010

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x928A60
#define CButtonWnd__CButtonWnd_x                                   0x927630
#define CButtonWnd__dCButtonWnd_x                                  0x927910
#define CButtonWnd__vftable_x                                      0xB2D008

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x7040F0
#define CChatWindowManager__InitContextMenu_x                      0x6FD230
#define CChatWindowManager__FreeChatWindow_x                       0x702C30
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E96A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x703D70
#define CChatWindowManager__CreateChatWindow_x                     0x703270

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E97B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x704920
#define CChatWindow__Clear_x                                       0x705BE0
#define CChatWindow__WndNotification_x                             0x706370
#define CChatWindow__AddHistory_x                                  0x7054A0

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x93BC90
#define CContextMenu__dCContextMenu_x                              0x93BEC0
#define CContextMenu__AddMenuItem_x                                0x93BED0
#define CContextMenu__RemoveMenuItem_x                             0x93C1E0
#define CContextMenu__RemoveAllMenuItems_x                         0x93C200
#define CContextMenu__CheckMenuItem_x                              0x93C280
#define CContextMenu__SetMenuItem_x                                0x93C100
#define CContextMenu__AddSeparator_x                               0x93C060

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x93C820
#define CContextMenuManager__RemoveMenu_x                          0x93C890
#define CContextMenuManager__PopupMenu_x                           0x93C950
#define CContextMenuManager__Flush_x                               0x93C7C0
#define CContextMenuManager__GetMenu_x                             0x49B350
#define CContextMenuManager__CreateDefaultMenu_x                   0x70F800

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x895FE0
#define CChatService__GetFriendName_x                              0x8CD0A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x9390F0
#define CComboWnd__Draw_x                                          0x9385F0
#define CComboWnd__GetCurChoice_x                                  0x938F30
#define CComboWnd__GetListRect_x                                   0x938AA0
#define CComboWnd__GetTextRect_x                                   0x939160
#define CComboWnd__InsertChoice_x                                  0x938C30
#define CComboWnd__SetColors_x                                     0x938C00
#define CComboWnd__SetChoice_x                                     0x938F00
#define CComboWnd__GetItemCount_x                                  0x938F40
#define CComboWnd__GetCurChoiceText_x                              0x938F80
#define CComboWnd__GetChoiceText_x                                 0x938F50
#define CComboWnd__InsertChoiceAtIndex_x                           0x938CC0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x70D230
#define CContainerWnd__vftable_x                                   0xAFA474
#define CContainerWnd__SetContainer_x                              0x70E780

// CDisplay
#define CDisplay__cameraType_x                                     0xDE5878
#define CDisplay__ZoneMainUI_x                                     0x5551A0
#define CDisplay__PreZoneMainUI_x                                  0x5551B0
#define CDisplay__CleanGameUI_x                                    0x55A5B0
#define CDisplay__GetClickedActor_x                                0x54D600
#define CDisplay__GetUserDefinedColor_x                            0x545C70
#define CDisplay__GetWorldFilePath_x                               0x54F070
#define CDisplay__is3dON_x                                         0x54A260
#define CDisplay__ReloadUI_x                                       0x5546B0
#define CDisplay__WriteTextHD2_x                                   0x54A050
#define CDisplay__TrueDistance_x                                   0x550D30
#define CDisplay__SetViewActor_x                                   0x54CF20
#define CDisplay__GetFloorHeight_x                                 0x54A320
#define CDisplay__SetRenderWindow_x                                0x548CA0
#define CDisplay__ToggleScreenshotMode_x                           0x54C9F0
#define CDisplay__RealRender_World_x                               0x548100

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x95BB40

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x93F180
#define CEditWnd__EnsureCaretVisible_x                             0x941350
#define CEditWnd__GetCaretPt_x                                     0x940300
#define CEditWnd__GetCharIndexPt_x                                 0x9400B0
#define CEditWnd__GetDisplayString_x                               0x93FF50
#define CEditWnd__GetHorzOffset_x                                  0x93E820
#define CEditWnd__GetLineForPrintableChar_x                        0x941250
#define CEditWnd__GetSelStartPt_x                                  0x940360
#define CEditWnd__GetSTMLSafeText_x                                0x93FD70
#define CEditWnd__PointFromPrintableChar_x                         0x940E80
#define CEditWnd__ReplaceSelection_x                               0x940AF0
#define CEditWnd__SelectableCharFromPoint_x                        0x940FF0
#define CEditWnd__SetEditable_x                                    0x940430
#define CEditWnd__SetWindowTextA_x                                 0x93FAF0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x60F090
#define CEverQuest__ClickedPlayer_x                                0x601230
#define CEverQuest__CreateTargetIndicator_x                        0x61E970
#define CEverQuest__DeleteTargetIndicator_x                        0x61EA00
#define CEverQuest__DoTellWindow_x                                 0x4E9890
#define CEverQuest__OutputTextToLog_x                              0x4E9B60
#define CEverQuest__DropHeldItemOnGround_x                         0x5F6380
#define CEverQuest__dsp_chat_x                                     0x4E9EF0
#define CEverQuest__trimName_x                                     0x61AB60
#define CEverQuest__Emote_x                                        0x60F8F0
#define CEverQuest__EnterZone_x                                    0x6099E0
#define CEverQuest__GetBodyTypeDesc_x                              0x6140F0
#define CEverQuest__GetClassDesc_x                                 0x614730
#define CEverQuest__GetClassThreeLetterCode_x                      0x614D30
#define CEverQuest__GetDeityDesc_x                                 0x61D1C0
#define CEverQuest__GetLangDesc_x                                  0x614EF0
#define CEverQuest__GetRaceDesc_x                                  0x614710
#define CEverQuest__InterpretCmd_x                                 0x61D790
#define CEverQuest__LeftClickedOnPlayer_x                          0x5FA520
#define CEverQuest__LMouseUp_x                                     0x5F88A0
#define CEverQuest__RightClickedOnPlayer_x                         0x5FAE00
#define CEverQuest__RMouseUp_x                                     0x5F9830
#define CEverQuest__SetGameState_x                                 0x5F6110
#define CEverQuest__UPCNotificationFlush_x                         0x61AA60
#define CEverQuest__IssuePetCommand_x                              0x616300
#define CEverQuest__ReportSuccessfulHeal_x                         0x610610
#define CEverQuest__ReportSuccessfulHit_x                          0x610C40

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x71EE60
#define CGaugeWnd__CalcLinesFillRect_x                             0x71EEC0
#define CGaugeWnd__Draw_x                                          0x71E4E0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4AFB10
#define CGuild__GetGuildName_x                                     0x4AE5C0
#define CGuild__GetGuildIndex_x                                    0x4AEBC0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x738A70

//CHotButton
#define CHotButton__SetButtonSize_x                                0x6303F0
#define CHotButton__SetCheck_x                                     0x928A60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x745AD0
#define CInvSlotMgr__MoveItem_x                                    0x7447E0
#define CInvSlotMgr__SelectSlot_x                                  0x745BA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x743010
#define CInvSlot__SliderComplete_x                                 0x740D50
#define CInvSlot__GetItemBase_x                                    0x7406F0
#define CInvSlot__UpdateItem_x                                     0x740860

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x747620
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7467C0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7471A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x801540
#define CItemDisplayWnd__UpdateStrings_x                           0x755D20
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x74FA80
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x74FF80
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x756330
#define CItemDisplayWnd__AboutToShow_x                             0x755960
#define CItemDisplayWnd__WndNotification_x                         0x757590
#define CItemDisplayWnd__RequestConvertItem_x                      0x756ED0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x7549C0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x755780

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x832020

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x75BAC0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x519370

// CLabel
#define CLabel__Draw_x                                             0x7614E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x9117E0
#define CListWnd__dCListWnd_x                                      0x911B00
#define CListWnd__vftable_x                                        0xB2C8D8
#define CListWnd__AddColumn_x                                      0x915F80
#define CListWnd__AddColumn1_x                                     0x915FD0
#define CListWnd__AddLine_x                                        0x916360
#define CListWnd__AddString_x                                      0x916160
#define CListWnd__CalculateFirstVisibleLine_x                      0x915D40
#define CListWnd__CalculateVSBRange_x                              0x915B30
#define CListWnd__ClearSel_x                                       0x916B40
#define CListWnd__ClearAllSel_x                                    0x916BA0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9175B0
#define CListWnd__Compare_x                                        0x915460
#define CListWnd__Draw_x                                           0x911C30
#define CListWnd__DrawColumnSeparators_x                           0x914430
#define CListWnd__DrawHeader_x                                     0x9148A0
#define CListWnd__DrawItem_x                                       0x914DA0
#define CListWnd__DrawLine_x                                       0x9145A0
#define CListWnd__DrawSeparator_x                                  0x9144D0
#define CListWnd__EnableLine_x                                     0x913D00
#define CListWnd__EnsureVisible_x                                  0x9174D0
#define CListWnd__ExtendSel_x                                      0x916A70
#define CListWnd__GetColumnTooltip_x                               0x913840
#define CListWnd__GetColumnMinWidth_x                              0x9138B0
#define CListWnd__GetColumnWidth_x                                 0x9137B0
#define CListWnd__GetCurSel_x                                      0x913140
#define CListWnd__GetItemAtPoint_x                                 0x913F80
#define CListWnd__GetItemAtPoint1_x                                0x913FF0
#define CListWnd__GetItemData_x                                    0x9131C0
#define CListWnd__GetItemHeight_x                                  0x913580
#define CListWnd__GetItemIcon_x                                    0x913350
#define CListWnd__GetItemRect_x                                    0x913DF0
#define CListWnd__GetItemText_x                                    0x913200
#define CListWnd__GetSelList_x                                     0x916BF0
#define CListWnd__GetSeparatorRect_x                               0x914230
#define CListWnd__InsertLine_x                                     0x916750
#define CListWnd__RemoveLine_x                                     0x9168A0
#define CListWnd__SetColors_x                                      0x915B00
#define CListWnd__SetColumnJustification_x                         0x915830
#define CListWnd__SetColumnLabel_x                                 0x916100
#define CListWnd__SetColumnWidth_x                                 0x915750
#define CListWnd__SetCurSel_x                                      0x9169B0
#define CListWnd__SetItemColor_x                                   0x917180
#define CListWnd__SetItemData_x                                    0x917140
#define CListWnd__SetItemText_x                                    0x916D60
#define CListWnd__ShiftColumnSeparator_x                           0x9158F0
#define CListWnd__Sort_x                                           0x9155E0
#define CListWnd__ToggleSel_x                                      0x9169E0
#define CListWnd__SetColumnsSizable_x                              0x9159A0
#define CListWnd__SetItemWnd_x                                     0x917010
#define CListWnd__GetItemWnd_x                                     0x9133A0
#define CListWnd__SetItemIcon_x                                    0x916DE0
#define CListWnd__CalculateCustomWindowPositions_x                 0x915E40
#define CListWnd__SetVScrollPos_x                                  0x915730

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x776B20

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x772020
#define MapViewMap__dMapViewMap_x                                  0x772160
#define MapViewMap__vftable_x                                      0xB01A30
#define MapViewMap__Clear_x                                        0x772990
#define MapViewMap__SaveEx_x                                       0x775D50
#define MapViewMap__SetZoom_x                                      0x77A410
#define MapViewMap__HandleLButtonDown_x                            0x772270
#define MapViewMap__GetWorldCoordinates_x                          0x775230

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x796DE0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7976C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x797BF0
#define CMerchantWnd__SelectRecoverySlot_x                         0x79ABA0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x795940
#define CMerchantWnd__SelectBuySellSlot_x                          0x7A0760
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7969F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x89B2A0
#define CPacketScrambler__hton_x                                   0x89B290

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x934BC0
#define CSidlManagerBase__CreatePageWnd_x                          0x9343D0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x930680
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x930610
#define CSidlManagerBase__FindAnimation1_x                         0x930860
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x930C70
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x930A60
#define CSidlManagerBase__CreateLabel_x                            0x7F87E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x933BD0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x933DA0
#define CSidlManagerBase__CreateXWnd_x                             0x7F8710

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x7F8CC0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x92D330
#define CSidlScreenWnd__CalculateVSBRange_x                        0x92D230
#define CSidlScreenWnd__ConvertToRes_x                             0x956680
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92CD30
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92CA20
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92CAF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92CBC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x92D7D0
#define CSidlScreenWnd__EnableIniStorage_x                         0x92DCA0
#define CSidlScreenWnd__GetChildItem_x                             0x92DC20
#define CSidlScreenWnd__GetSidlPiece_x                             0x92D9C0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91D440
#define CSidlScreenWnd__Init1_x                                    0x92C620
#define CSidlScreenWnd__LoadIniInfo_x                              0x92DCF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x92E840
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92BA30
#define CSidlScreenWnd__m_layoutCopy_x                             0x15D4AE8
#define CSidlScreenWnd__StoreIniInfo_x                             0x92E3C0
#define CSidlScreenWnd__StoreIniVis_x                              0x92E720
#define CSidlScreenWnd__vftable_x                                  0xB2D298
#define CSidlScreenWnd__WndNotification_x                          0x92D6E0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x695CE0
#define CSkillMgr__GetSkillCap_x                                   0x695EC0
#define CSkillMgr__GetNameToken_x                                  0x695460
#define CSkillMgr__IsActivatedSkill_x                              0x6955A0
#define CSkillMgr__IsCombatSkill_x                                 0x6954E0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x93D600
#define CSliderWnd__SetValue_x                                     0x93D470
#define CSliderWnd__SetNumTicks_x                                  0x93D4D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x7FE910

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x945F40
#define CStmlWnd__CalculateHSBRange_x                              0x947020
#define CStmlWnd__CalculateVSBRange_x                              0x946F90
#define CStmlWnd__CanBreakAtCharacter_x                            0x94B350
#define CStmlWnd__FastForwardToEndOfTag_x                          0x94BFE0
#define CStmlWnd__ForceParseNow_x                                  0x9464E0
#define CStmlWnd__GetNextTagPiece_x                                0x94B2B0
#define CStmlWnd__GetSTMLText_x                                    0x50A750
#define CStmlWnd__GetVisibleText_x                                 0x946500
#define CStmlWnd__InitializeWindowVariables_x                      0x94BE30
#define CStmlWnd__MakeStmlColorTag_x                               0x9455B0
#define CStmlWnd__MakeWndNotificationTag_x                         0x945620
#define CStmlWnd__SetSTMLText_x                                    0x944660
#define CStmlWnd__StripFirstSTMLLines_x                            0x94D0E0
#define CStmlWnd__UpdateHistoryString_x                            0x94C1F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x9437B0
#define CTabWnd__DrawCurrentPage_x                                 0x943EE0
#define CTabWnd__DrawTab_x                                         0x943C00
#define CTabWnd__GetCurrentPage_x                                  0x942FC0
#define CTabWnd__GetCurrentTabIndex_x                              0x942FB0
#define CTabWnd__GetPageFromTabIndex_x                             0x943B40
#define CTabWnd__GetPageInnerRect_x                                0x943200
#define CTabWnd__GetTabInnerRect_x                                 0x943140
#define CTabWnd__GetTabRect_x                                      0x942FF0
#define CTabWnd__InsertPage_x                                      0x943410
#define CTabWnd__RemovePage_x                                      0x943580
#define CTabWnd__SetPage_x                                         0x943280
#define CTabWnd__SetPageRect_x                                     0x9436F0
#define CTabWnd__UpdatePage_x                                      0x943AC0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x942B70
#define CPageWnd__GetTabText_x                                     0x75BED0
#define CPageWnd__SetTabText_x                                     0x942B10


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A8E00

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91A2F0
#define CTextureFont__DrawWrappedText1_x                           0x91A220
#define CTextureFont__DrawWrappedText2_x                           0x91A340
#define CTextureFont__GetTextExtent_x                              0x91A4B0

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x6A9DA0
#define CHtmlComponentWnd__ValidateUri_x                           0x73A460
#define CHtmlWnd__SetClientCallbacks_x                             0x635490
#define CHtmlWnd__AddObserver_x                                    0x6354B0
#define CHtmlWnd__RemoveObserver_x                                 0x635510
#define Window__getProgress_x                                      0x850B10
#define Window__getStatus_x                                        0x850B30
#define Window__getURI_x                                           0x850B40

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x953490

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x907340

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E9590
#define CXStr__CXStr1_x                                            0x9DE880
#define CXStr__CXStr3_x                                            0x8EE360
#define CXStr__dCXStr_x                                            0x477EE0
#define CXStr__operator_equal_x                                    0x8EE590
#define CXStr__operator_equal1_x                                   0x8EE5D0
#define CXStr__operator_plus_equal1_x                              0x8EF060
#define CXStr__SetString_x                                         0x8F0F50
#define CXStr__operator_char_p_x                                   0x8EEAA0
#define CXStr__GetChar_x                                           0x8F08A0
#define CXStr__Delete_x                                            0x8F0150
#define CXStr__GetUnicode_x                                        0x8F0910
#define CXStr__GetLength_x                                         0x47D100
#define CXStr__Mid_x                                               0x47D110
#define CXStr__Insert_x                                            0x8F0970
#define CXStr__FindNext_x                                          0x8F05C0
#define CXStr__gFreeLists_x                                        0xC83C58
#define CXStr__gCXStrAccess_x                                      0x15D434C

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x93B8A0

// CXWnd
#define CXWnd__BringToTop_x                                        0x920B70
#define CXWnd__Center_x                                            0x9206F0
#define CXWnd__ClrFocus_x                                          0x920510
#define CXWnd__Destroy_x                                           0x9205B0
#define CXWnd__DoAllDrawing_x                                      0x91CBE0
#define CXWnd__DrawChildren_x                                      0x91CBB0
#define CXWnd__DrawColoredRect_x                                   0x91D030
#define CXWnd__DrawTooltip_x                                       0x91B700
#define CXWnd__DrawTooltipAtPoint_x                                0x91B7C0
#define CXWnd__GetBorderFrame_x                                    0x91CE90
#define CXWnd__GetChildItem_x                                      0x920D80
#define CXWnd__GetChildWndAt_x                                     0x920C10
#define CXWnd__GetClientClipRect_x                                 0x91EE80
#define CXWnd__GetRelativeRect_x                                   0x91F1D0
#define CXWnd__GetScreenClipRect_x                                 0x91EF50
#define CXWnd__GetScreenRect_x                                     0x91F110
#define CXWnd__GetTooltipRect_x                                    0x91D080
#define CXWnd__GetWindowTextA_x                                    0x49CA50
#define CXWnd__IsActive_x                                          0x91D7B0
#define CXWnd__IsDescendantOf_x                                    0x91FB00
#define CXWnd__IsReallyVisible_x                                   0x91FB30
#define CXWnd__IsType_x                                            0x921270
#define CXWnd__Minimize_x                                          0x9201C0
#define CXWnd__Move_x                                              0x91FBA0
#define CXWnd__Move1_x                                             0x91FC50
#define CXWnd__ProcessTransition_x                                 0x9206A0
#define CXWnd__Refade_x                                            0x91FF10
#define CXWnd__Resize_x                                            0x920160
#define CXWnd__Right_x                                             0x920930
#define CXWnd__SetFocus_x                                          0x9204D0
#define CXWnd__SetFont_x                                           0x920540
#define CXWnd__SetKeyTooltip_x                                     0x9210A0
#define CXWnd__SetMouseOver_x                                      0x91DFF0
#define CXWnd__SetParent_x                                         0x91F8A0
#define CXWnd__StartFade_x                                         0x91F9E0
#define CXWnd__vftable_x                                           0xB2CD24
#define CXWnd__CXWnd_x                                             0x91A7D0
#define CXWnd__dCXWnd_x                                            0x91ACF0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x957700

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x923AB0
#define CXWndManager__DrawWindows_x                                0x923AD0
#define CXWndManager__GetKeyboardFlags_x                           0x9262B0
#define CXWndManager__HandleKeyboardMsg_x                          0x925E70
#define CXWndManager__RemoveWnd_x                                  0x9264E0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x926A60

// CDBStr
#define CDBStr__GetString_x                                        0x544C20

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4DA830
#define CharacterZoneClient__CastSpell_x                           0x4BFCE0
#define CharacterZoneClient__Cur_HP_x                              0x4D2DC0
#define CharacterZoneClient__Cur_Mana_x                            0x4DA520
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D5B40
#define CharacterZoneClient__GetBaseSkill_x                        0x4D6AE0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C2D50
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E0960
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B34B0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B3600
#define CharacterZoneClient__GetHPRegen_x                          0x4E0360
#define CharacterZoneClient__GetManaRegen_x                        0x4E0DA0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C3AA0
#define CharacterZoneClient__Max_Endurance_x                       0x65C0C0
#define CharacterZoneClient__Max_HP_x                              0x4D2BF0
#define CharacterZoneClient__Max_Mana_x                            0x65BEC0
#define CharacterZoneClient__SpellDuration_x                       0x4C35D0
#define CharacterZoneClient__TotalEffect_x                         0x4C6AC0
#define CharacterZoneClient__UseSkill_x                            0x4E2BA0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8BA0E0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x672460

// PcClient
#define PcClient__PcClient_x                                       0x652020
#define PcClient__GetConLevel_x                                    0x6548B0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BA710
#define CCharacterListWnd__EnterWorld_x                            0x4BA0F0
#define CCharacterListWnd__Quit_x                                  0x4B9E40
#define CCharacterListWnd__UpdateList_x                            0x4BA2E0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x636650
#define EQ_Item__CreateItemTagString_x                             0x894860
#define EQ_Item__IsStackable_x                                     0x8994F0
#define EQ_Item__GetImageNum_x                                     0x8963F0
#define EQ_Item__CreateItemClient_x                                0x635890
#define EQ_Item__GetItemValue_x                                    0x8976F0
#define EQ_Item__ValueSellMerchant_x                               0x89AE80
#define EQ_Item__IsKeyRingItem_x                                   0x898E10
#define EQ_Item__CanGoInBag_x                                      0x636770
#define EQ_Item__IsEmpty_x                                         0x898940
#define EQ_Item__GetMaxItemCount_x                                 0x897B00
#define EQ_Item__GetHeldItem_x                                     0x8962C0
#define EQ_Item__GetAugmentFitBySlot_x                             0x8940C0
#define ItemClient__ItemClient_x                                   0x5B6680
#define ItemClient__dItemClient_x                                  0x6357E0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x5637A0
#define EQ_LoadingS__Array_x                                       0xC0DC68

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8A3EE0
#define EQ_PC__GetCombatAbility_x                                  0x8A4550
#define EQ_PC__GetCombatAbilityTimer_x                             0x8A45C0
#define EQ_PC__GetItemRecastTimer_x                                0x65EA30
#define EQ_PC__HasLoreItem_x                                       0x6550C0
#define EQ_PC__AlertInventoryChanged_x                             0x6541F0
#define EQ_PC__GetPcZoneClient_x                                   0x681550
#define EQ_PC__RemoveMyAffect_x                                    0x661C60
#define EQ_PC__GetKeyRingItems_x                                   0x8A4E50
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8A4BE0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8A5150

// EQItemList
#define EQItemList__EQItemList_x                                   0x5BE740
#define EQItemList__add_object_x                                   0x5EBAD0
#define EQItemList__add_item_x                                     0x5BECA0
#define EQItemList__delete_item_x                                  0x5BECF0
#define EQItemList__FreeItemList_x                                 0x5BEBF0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5417B0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x673D60
#define EQPlayer__dEQPlayer_x                                      0x6670E0
#define EQPlayer__DoAttack_x                                       0x67BCE0
#define EQPlayer__EQPlayer_x                                       0x6677A0
#define EQPlayer__SetNameSpriteState_x                             0x66BA70
#define EQPlayer__SetNameSpriteTint_x                              0x66C950
#define PlayerBase__HasProperty_j_x                                0x9862F0
#define EQPlayer__IsTargetable_x                                   0x986790
#define EQPlayer__CanSee_x                                         0x9865F0
#define EQPlayer__CanSee1_x                                        0x9866C0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9863B0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x67EFE0
#define PlayerZoneClient__GetLevel_x                               0x681590
#define PlayerZoneClient__IsValidTeleport_x                        0x5ECC40
#define PlayerZoneClient__LegalPlayerRace_x                        0x55C470

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x676BD0
#define EQPlayerManager__GetSpawnByName_x                          0x676C80
#define EQPlayerManager__GetPlayerFromPartialName_x                0x676D10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x639E30
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x639EB0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x639EF0
#define KeypressHandler__ClearCommandStateArray_x                  0x63B2E0
#define KeypressHandler__HandleKeyDown_x                           0x63B300
#define KeypressHandler__HandleKeyUp_x                             0x63B3A0
#define KeypressHandler__SaveKeymapping_x                          0x63B7F0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8B8150

// StringTable
#define StringTable__getString_x                                   0x8B3010

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x65E4B0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x65C9C0
#define PcZoneClient__GetPcSkillLimit_x                            0x6618D0
#define PcZoneClient__RemovePetEffect_x                            0x661F00
#define PcZoneClient__HasAlternateAbility_x                        0x65BCF0
#define PcZoneClient__CanEquipItem_x                               0x65C3A0
#define PcZoneClient__GetItemByID_x                                0x65EEA0
#define PcZoneClient__GetItemByItemClass_x                         0x65EFF0
#define PcZoneClient__RemoveBuffEffect_x                           0x661F20
#define PcZoneClient__BandolierSwap_x                              0x65CF80
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x65E9D0

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F17E0

// IconCache
#define IconCache__GetIcon_x                                       0x7148B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x70C3D0
#define CContainerMgr__CloseContainer_x                            0x70C6A0
#define CContainerMgr__OpenExperimentContainer_x                   0x70D120

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7CAEE0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x62E810

// CLootWnd
#define CLootWnd__LootAll_x                                        0x768F40
#define CLootWnd__RequestLootSlot_x                                0x768210

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x58A550
#define EQ_Spell__SpellAffects_x                                   0x58A9C0
#define EQ_Spell__SpellAffectBase_x                                0x58A780
#define EQ_Spell__IsStackable_x                                    0x4CA820
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4CA670
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B79A0
#define EQ_Spell__IsSPAStacking_x                                  0x58B810
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x58AD20
#define EQ_Spell__IsNoRemove_x                                     0x4CA800
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58B820
#define __IsResEffectSpell_x                                       0x4C99F0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4AD040

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8C2740

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x811C40
#define CTargetWnd__WndNotification_x                              0x811480
#define CTargetWnd__RefreshTargetBuffs_x                           0x811750
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x8105F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x816290
#define CTaskWnd__ConfirmAbandonTask_x                             0x818ED0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x53F1E0
#define CTaskManager__HandleMessage_x                              0x53D650
#define CTaskManager__GetTaskStatus_x                              0x53F290
#define CTaskManager__GetElementDescription_x                      0x53F310

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5856D0
#define EqSoundManager__PlayScriptMp3_x                            0x585990
#define EqSoundManager__SoundAssistPlay_x                          0x699C00
#define EqSoundManager__WaveInstancePlay_x                         0x699170

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5307B0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x942220
#define CTextureAnimation__SetCurCell_x                            0x942020

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56B260
#define CAltAbilityData__GetMercMaxRank_x                          0x56B1F0
#define CAltAbilityData__GetMaxRank_x                              0x5606B0

// CTargetRing
#define CTargetRing__Cast_x                                        0x62C930

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x517480
#define CharacterBase__CreateItemIndex_x                           0x634A40
#define CharacterBase__GetItemByGlobalIndex_x                      0x8CAD90
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8CADF0
#define CharacterBase__GetItemPossession_x                         0x503210
#define CharacterBase__GetMemorizedSpell_x                         0x4CA650
#define CharacterBase__IsExpansionFlag_x                           0x5B8360

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x6F3420
#define CCastSpellWnd__IsBardSongPlaying_x                         0x6F3C50
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x6F3D00

// messages
#define msg_spell_worn_off_x                                       0x5B0330
#define msg_new_text_x                                             0x5A4CB0
#define __msgTokenTextParam_x                                      0x5B25C0
#define msgTokenText_x                                             0x5B2810

// SpellManager
#define SpellManager__vftable_x                                    0xAD62CC
#define SpellManager__SpellManager_x                               0x69CF20
#define Spellmanager__LoadTextSpells_x                             0x69D810
#define SpellManager__GetSpellByGroupAndRank_x                     0x69D0F0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x98A2E0

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8C30E0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8C3360

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x761820

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x710AA0
#define CCursorAttachment__AttachToCursor1_x                       0x710AE0
#define CCursorAttachment__Deactivate_x                            0x711AD0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9514A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x951C20
#define CEQSuiteTextureLoader__GetTexture_x                        0x9518E0

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x514A00
#define CFindItemWnd__WndNotification_x                            0x5154E0
#define CFindItemWnd__Update_x                                     0x516020
#define CFindItemWnd__PickupSelectedItem_x                         0x514230

// IString
#define IString__Append_x                                          0x504A30

// Camera
#define EverQuest__Cameras_x                                       0xEA0AF8

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x51D500
#define LootFiltersManager__GetItemFilterData_x                    0x51CE00
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51CE30
#define LootFiltersManager__SetItemLootFilter_x                    0x51D050

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7B8CB0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x98FF60
#define CResolutionHandler__GetWindowedStyle_x                     0x6946F0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x709080

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8D86A0
#define CDistillerInfo__Instance_x                                 0x8D8640

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x727DC0
#define CGroupWnd__UpdateDisplay_x                                 0x727120

// ItemBase
#define ItemBase__IsLore_x                                         0x898EC0
#define ItemBase__IsLoreEquipped_x                                 0x898F30

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5EBA30
#define EQPlacedItemManager__GetItemByGuid_x                       0x5EBB70
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5EBBD0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x689CB0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x68D620

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50AD50

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F7180
#define FactionManagerClient__HandleFactionMessage_x               0x4F77F0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4F7DB0
#define FactionManagerClient__GetMaxFaction_x                      0x4F7DCF
#define FactionManagerClient__GetMinFaction_x                      0x4F7D80

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x5031E0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x9192A0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49BD60

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x503440

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x56A710

// CTargetManager
#define CTargetManager__Get_x                                      0x6A0740

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x689CB0

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A8BC0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5BEB90

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF3E18C

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x9038B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x482D40

//
// EQGraphicsDX9.dll offsets (maybe this should go in eqgraphics.h?)
//

#define __eqgraphics_fopen_x                                       0x10147BE9

#define CParticleSystem__Render_x                                  0x10071260

#define CRender__RenderScene_x                                     0x100933A0
#define CRender__ResetDevice_x                                     0x10092C10
#define CRender__UpdateDisplay_x                                   0x10093A30

//
// eqmain.dll offsets
//

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x1008A3C0
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x10019A60
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x1007C6E0
#define EQMain__LoginController__FlushDxKeyboard_x                 0x10015360
#define EQMain__LoginController__GiveTime_x                        0x100153C0
#define EQMain__LoginServerAPI__JoinServer_x                       0x10016E90
#define EQMain__WndProc_x                                          0x1000BEC0

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x10166D38
#define EQMain__pinstCLoginViewManager_x                           0x1016D3B4
#define EQMain__pinstCXWndManager_x                                0x1037F8AC
#define EQMain__pinstCSidlManager_x                                0x1037F8B0
#define EQMain__pinstLoginController_x                             0x1016D3B8
#define EQMain__pinstLoginServerAPI_x                              0x1016D3A8
