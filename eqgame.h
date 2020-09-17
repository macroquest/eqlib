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
#define __ExpectedVersionDate                                     "Sep 14 2020"
#define __ExpectedVersionTime                                     "12:05:59"
#define __ActualVersionDate_x                                      0xAF22A8
#define __ActualVersionTime_x                                      0xAF229C
#define __ActualVersionBuild_x                                     0xAE02C4

// Memory Protection
#define __MemChecker0_x                                            0x641430
#define __MemChecker1_x                                            0x8F3A00
#define __MemChecker2_x                                            0x6B17B0
#define __MemChecker3_x                                            0x6B1700
#define __MemChecker4_x                                            0x84A710
#define __EncryptPad0_x                                            0xC274E8
#define __EncryptPad1_x                                            0xC84D28
#define __EncryptPad2_x                                            0xC378B8
#define __EncryptPad3_x                                            0xC374B8
#define __EncryptPad4_x                                            0xC752C8
#define __EncryptPad5_x                                            0xF470B0
#define __AC1_x                                                    0x808E76
#define __AC2_x                                                    0x5FAE4F
#define __AC3_x                                                    0x6024A0
#define __AC4_x                                                    0x606450
#define __AC5_x                                                    0x60C73F
#define __AC6_x                                                    0x610BF6
#define __AC7_x                                                    0x5FA8C0
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x191CDC

// Direct Input
#define DI8__Main_x                                                0xF470D0
#define DI8__Keyboard_x                                            0xF470D4
#define DI8__Mouse_x                                               0xF470EC
#define DI8__Mouse_Copy_x                                          0xEA044C
#define DI8__Mouse_Check_x                                         0xF44C04
#define __AutoSkillArray_x                                         0xEA1368
#define __Attack_x                                                 0xF3F18B
#define __Autofire_x                                               0xF3F18C
#define __BindList_x                                               0xC15F38
#define g_eqCommandStates_x                                        0xC16CB8
#define __Clicks_x                                                 0xEA0504
#define __CommandList_x                                            0xC17878
#define __CurrentMapLabel_x                                        0xF57AA4
#define __CurrentSocial_x                                          0xBFF7C8
#define __DoAbilityList_x                                          0xED6CAC
#define __do_loot_x                                                0x5C6AF0
#define __DrawHandler_x                                            0x15D6A98
#define __GroupCount_x                                             0xE9B522
#define __Guilds_x                                                 0xE9F388
#define __gWorld_x                                                 0xE9B4B4
#define __HWnd_x                                                   0xF470F0
#define __heqmain_x                                                0xF47098
#define __InChatMode_x                                             0xEA0434
#define __LastTell_x                                               0xEA23A8
#define __LMouseHeldTime_x                                         0xEA0570
#define __Mouse_x                                                  0xF470BC
#define __MouseLook_x                                              0xEA04CA
#define __MouseEventTime_x                                         0xF3FC6C
#define __gpbCommandEvent_x                                        0xE98E20
#define __NetStatusToggle_x                                        0xEA04CD
#define __PCNames_x                                                0xEA1958
#define __RangeAttackReady_x                                       0xEA164C
#define __RMouseHeldTime_x                                         0xEA056C
#define __RunWalkState_x                                           0xEA0438
#define __ScreenMode_x                                             0xDE67B8
#define __ScreenX_x                                                0xEA03EC
#define __ScreenY_x                                                0xEA03E8
#define __ScreenXMax_x                                             0xEA03F0
#define __ScreenYMax_x                                             0xEA03F4
#define __ServerHost_x                                             0xE98FEB
#define __ServerName_x                                             0xED6C6C
#define __ShiftKeyDown_x                                           0xEA0AC8
#define __ShowNames_x                                              0xEA1808
#define __SocialChangedList_x                                      0xED6CF4
#define __Socials_x                                                0xED6D6C
#define __SubscriptionType_x                                       0xF9BD68
#define __TargetAggroHolder_x                                      0xF5A458
#define __ZoneType_x                                               0xEA08C8
#define __GroupAggro_x                                             0xF5A498
#define __LoginName_x                                              0xF4782C
#define __Inviter_x                                                0xF3F108
#define __AttackOnAssist_x                                         0xEA17C4
#define __UseTellWindows_x                                         0xEA1AF0
#define __gfMaxZoomCameraDistance_x                                0xAE9EC0
#define __gfMaxCameraDistance_x                                    0xB12B40
#define __pulAutoRun_x                                             0xEA04E8
#define __pulForward_x                                             0xEA1B28
#define __pulBackward_x                                            0xEA1B2C
#define __pulTurnRight_x                                           0xEA1B30
#define __pulTurnLeft_x                                            0xEA1B34
#define __pulStrafeLeft_x                                          0xEA1B38
#define __pulStrafeRight_x                                         0xEA1B3C

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xE9B720
#define instEQZoneInfo_x                                           0xEA06C0
#define pinstActiveBanker_x                                        0xE9930C
#define pinstActiveCorpse_x                                        0xE99304
#define pinstActiveGMaster_x                                       0xE99308
#define pinstActiveMerchant_x                                      0xE99300
#define pinstAltAdvManager_x                                       0xDE7950
#define pinstBandageTarget_x                                       0xE9931C
#define pinstCamActor_x                                            0xDE67A8
#define pinstCDBStr_x                                              0xDE666C
#define pinstCDisplay_x                                            0xE9B374
#define pinstCEverQuest_x                                          0xF470E8
#define pinstEverQuestInfo_x                                       0xEA03E0
#define pinstCharData_x                                            0xE9B710
#define pinstCharSpawn_x                                           0xE99354
#define pinstControlledMissile_x                                   0xE99364
#define pinstControlledPlayer_x                                    0xE99354
#define pinstCResolutionHandler_x                                  0x15D6CC8
#define pinstCSidlManager_x                                        0x15D5C60
#define pinstCXWndManager_x                                        0x15D5C5C
#define instDynamicZone_x                                          0xE9F260
#define pinstDZMember_x                                            0xE9F370
#define pinstDZTimerInfo_x                                         0xE9F374
#define pinstEqLogin_x                                             0xF47178
#define instEQMisc_x                                               0xDE65B0
#define pinstEQSoundManager_x                                      0xDE8920
#define pinstEQSpellStrings_x                                      0xCA8F68
#define instExpeditionLeader_x                                     0xE9F2AA
#define instExpeditionName_x                                       0xE9F2EA
#define pinstSGraphicsEngine_x                                     0x15D6A8C
#define pinstGroup_x                                               0xE9B51E
#define pinstImeManager_x                                          0x15D5C58
#define pinstLocalPlayer_x                                         0xE992FC
#define pinstMercenaryData_x                                       0xF41758
#define pinstMercenaryStats_x                                      0xF5A524
#define pinstModelPlayer_x                                         0xE99314
#define pinstPCData_x                                              0xE9B710
#define pinstSkillMgr_x                                            0xF438C8
#define pinstSpawnManager_x                                        0xF42370
#define pinstSpellManager_x                                        0xF43B08
#define pinstSpellSets_x                                           0xF37DB4
#define pinstStringTable_x                                         0xE9B718
#define pinstSwitchManager_x                                       0xE98CC0
#define pinstTarget_x                                              0xE99350
#define pinstTargetObject_x                                        0xE9935C
#define pinstTargetSwitch_x                                        0xE9936C
#define pinstTaskMember_x                                          0xDE6440
#define pinstTrackTarget_x                                         0xE99358
#define pinstTradeTarget_x                                         0xE99310
#define instTributeActive_x                                        0xDE65D1
#define pinstViewActor_x                                           0xDE67A4
#define pinstWorldData_x                                           0xE98E10
#define pinstZoneAddr_x                                            0xEA0960
#define pinstPlayerPath_x                                          0xF42408
#define pinstTargetIndicator_x                                     0xF43D70
#define EQObject_Top_x                                             0xE990F4

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xDE6AEC
#define pinstCAchievementsWnd_x                                    0xDE6744
#define pinstCActionsWnd_x                                         0xDE6F80
#define pinstCAdvancedDisplayOptionsWnd_x                          0xDE6804
#define pinstCAdvancedLootWnd_x                                    0xDE679C
#define pinstCAdventureLeaderboardWnd_x                            0xF51278
#define pinstCAdventureRequestWnd_x                                0xF51328
#define pinstCAdventureStatsWnd_x                                  0xF513D8
#define pinstCAggroMeterWnd_x                                      0xDE67EC
#define pinstCAlarmWnd_x                                           0xDE676C
#define pinstCAlertHistoryWnd_x                                    0xDE687C
#define pinstCAlertStackWnd_x                                      0xDE67D4
#define pinstCAlertWnd_x                                           0xDE67E8
#define pinstCAltStorageWnd_x                                      0xF51738
#define pinstCAudioTriggersWindow_x                                0xC9B298
#define pinstCAuraWnd_x                                            0xDE67A0
#define pinstCAvaZoneWnd_x                                         0xDE6850
#define pinstCBandolierWnd_x                                       0xDE6800
#define pinstCBankWnd_x                                            0xDE6834
#define pinstCBarterMerchantWnd_x                                  0xF52978
#define pinstCBarterSearchWnd_x                                    0xF52A28
#define pinstCBarterWnd_x                                          0xF52AD8
#define pinstCBazaarConfirmationWnd_x                              0xDE6780
#define pinstCBazaarSearchWnd_x                                    0xDE6AF0
#define pinstCBazaarWnd_x                                          0xDE6750
#define pinstCBlockedBuffWnd_x                                     0xDE67C8
#define pinstCBlockedPetBuffWnd_x                                  0xDE67F0
#define pinstCBodyTintWnd_x                                        0xDE6F94
#define pinstCBookWnd_x                                            0xDE682C
#define pinstCBreathWnd_x                                          0xDE6B74
#define pinstCBuffWindowNORMAL_x                                   0xDE6794
#define pinstCBuffWindowSHORT_x                                    0xDE6798
#define pinstCBugReportWnd_x                                       0xDE6830
#define pinstCButtonWnd_x                                          0x15D5EC8
#define pinstCCastingWnd_x                                         0xDE6820
#define pinstCCastSpellWnd_x                                       0xDE6AFC
#define pinstCCharacterListWnd_x                                   0xDE6FA0
#define pinstCChatWindowManager_x                                  0xF53598
#define pinstCClaimWnd_x                                           0xF536F0
#define pinstCColorPickerWnd_x                                     0xDE6A98
#define pinstCCombatAbilityWnd_x                                   0xDE6760
#define pinstCCombatSkillsSelectWnd_x                              0xDE6718
#define pinstCCompassWnd_x                                         0xDE6F84
#define pinstCConfirmationDialog_x                                 0xF585F0
#define pinstCContainerMgr_x                                       0xDE6F90
#define pinstCContextMenuManager_x                                 0x15D5C18
#define pinstCCursorAttachment_x                                   0xDE6814
#define pinstCDynamicZoneWnd_x                                     0xF53CB8
#define pinstCEditLabelWnd_x                                       0xDE6790
#define pinstCEQMainWnd_x                                          0xF53F00
#define pinstCEventCalendarWnd_x                                   0xDE6AF4
#define pinstCExtendedTargetWnd_x                                  0xDE67D0
#define pinstCFacePick_x                                           0xDE671C
#define pinstCFactionWnd_x                                         0xDE673C
#define pinstCFellowshipWnd_x                                      0xF54100
#define pinstCFileSelectionWnd_x                                   0xDE6A94
#define pinstCFindItemWnd_x                                        0xDE672C
#define pinstCFindLocationWnd_x                                    0xF54258
#define pinstCFriendsWnd_x                                         0xDE6730
#define pinstCGemsGameWnd_x                                        0xDE6738
#define pinstCGiveWnd_x                                            0xDE6770
#define pinstCGroupSearchFiltersWnd_x                              0xDE6808
#define pinstCGroupSearchWnd_x                                     0xF54650
#define pinstCGroupWnd_x                                           0xF54700
#define pinstCGuildBankWnd_x                                       0xEA17A8
#define pinstCGuildCreationWnd_x                                   0xF54860
#define pinstCGuildMgmtWnd_x                                       0xF54910
#define pinstCharacterCreation_x                                   0xDE6724
#define pinstCHelpWnd_x                                            0xDE6774
#define pinstCHeritageSelectionWnd_x                               0xDE6728
#define pinstCHotButtonWnd_x                                       0xF56A68
#define pinstCHotButtonWnd1_x                                      0xF56A68
#define pinstCHotButtonWnd2_x                                      0xF56A6C
#define pinstCHotButtonWnd3_x                                      0xF56A70
#define pinstCHotButtonWnd4_x                                      0xF56A74
#define pinstCIconSelectionWnd_x                                   0xDE6810
#define pinstCInspectWnd_x                                         0xDE67F4
#define pinstCInventoryWnd_x                                       0xDE67AC
#define pinstCInvSlotMgr_x                                         0xDE6ADC
#define pinstCItemDisplayManager_x                                 0xF56FF8
#define pinstCItemExpTransferWnd_x                                 0xF57128
#define pinstCItemOverflowWnd_x                                    0xDE6AF8
#define pinstCJournalCatWnd_x                                      0xDE6AAC
#define pinstCJournalTextWnd_x                                     0xDE6868
#define pinstCKeyRingWnd_x                                         0xDE681C
#define pinstCLargeDialogWnd_x                                     0xF59270
#define pinstCLayoutCopyWnd_x                                      0xF57478
#define pinstCLFGuildWnd_x                                         0xF57528
#define pinstCLoadskinWnd_x                                        0xDE6754
#define pinstCLootFiltersCopyWnd_x                                 0xCB7948
#define pinstCLootFiltersWnd_x                                     0xDE67D8
#define pinstCLootSettingsWnd_x                                    0xDE67FC
#define pinstCLootWnd_x                                            0xDE6AB0
#define pinstCMailAddressBookWnd_x                                 0xDE6AE4
#define pinstCMailCompositionWnd_x                                 0xDE6AA0
#define pinstCMailIgnoreListWnd_x                                  0xDE6AE8
#define pinstCMailWnd_x                                            0xDE6A8C
#define pinstCManageLootWnd_x                                      0xDE7E00
#define pinstCMapToolbarWnd_x                                      0xDE677C
#define pinstCMapViewWnd_x                                         0xDE6748
#define pinstCMarketplaceWnd_x                                     0xDE67DC
#define pinstCMerchantWnd_x                                        0xDE6ABC
#define pinstCMIZoneSelectWnd_x                                    0xF57D60
#define pinstCMusicPlayerWnd_x                                     0xDE6A88
#define pinstCNameChangeMercWnd_x                                  0xDE6778
#define pinstCNameChangePetWnd_x                                   0xDE674C
#define pinstCNameChangeWnd_x                                      0xDE678C
#define pinstCNoteWnd_x                                            0xDE6758
#define pinstCObjectPreviewWnd_x                                   0xDE67F8
#define pinstCOptionsWnd_x                                         0xDE6764
#define pinstCPetInfoWnd_x                                         0xDE6884
#define pinstCPetitionQWnd_x                                       0xDE6714
//#define pinstCPlayerCustomizationWnd_x                           0xDA8E24
#define pinstCPlayerNotesWnd_x                                     0xDE6F98
#define pinstCPlayerWnd_x                                          0xDE6878
#define pinstCPopupWndManager_x                                    0xF585F0
#define pinstCProgressionSelectionWnd_x                            0xF586A0
#define pinstCPurchaseGroupWnd_x                                   0xDE684C
#define pinstCPurchaseWnd_x                                        0xDE6824
#define pinstCPvPLeaderboardWnd_x                                  0xF58750
#define pinstCPvPStatsWnd_x                                        0xF58800
#define pinstCQuantityWnd_x                                        0xDE6864
#define pinstCRaceChangeWnd_x                                      0xDE67BC
#define pinstCRaidOptionsWnd_x                                     0xDE680C
#define pinstCRaidWnd_x                                            0xDE6AB8
#define pinstCRealEstateItemsWnd_x                                 0xDE6740
#define pinstCRealEstateLayoutDetailsWnd_x                         0xDE6F88
#define pinstCRealEstateManageWnd_x                                0xDE6854
#define pinstCRealEstateNeighborhoodWnd_x                          0xDE6870
#define pinstCRealEstatePlotSearchWnd_x                            0xDE6A90
#define pinstCRealEstatePurchaseWnd_x                              0xDE6AA8
#define pinstCRespawnWnd_x                                         0xDE67E4
//#define pinstCRewardSelectionWnd_x                               0x10205B0
#define pinstCSelectorWnd_x                                        0xDE6710
#define pinstCSendMoneyWnd_x                                       0xDE6784
#define pinstCServerListWnd_x                                      0xDE6AB4
#define pinstCSkillsSelectWnd_x                                    0xDE670C
#define pinstCSkillsWnd_x                                          0xDE6F8C
#define pinstCSocialEditWnd_x                                      0xDE6818
#define pinstCSocialWnd_x                                          0xDE6768
#define pinstCSpellBookWnd_x                                       0xDE675C
#define pinstCStoryWnd_x                                           0xDE6F7C
#define pinstCTargetOfTargetWnd_x                                  0xF5A5A8
#define pinstCTargetWnd_x                                          0xDE67E0
#define pinstCTaskOverlayWnd_x                                     0xDE6844
#define pinstCTaskSelectWnd_x                                      0xF5A700
#define pinstCTaskManager_x                                        0xCB8288
#define pinstCTaskTemplateSelectWnd_x                              0xF5A7B0
#define pinstCTaskWnd_x                                            0xF5A860
#define pinstCTextEntryWnd_x                                       0xDE6828
#define pinstCTimeLeftWnd_x                                        0xDE6708
#define pinstCTipWndCONTEXT_x                                      0xF5AA64
#define pinstCTipWndOFDAY_x                                        0xF5AA60
#define pinstCTitleWnd_x                                           0xF5AB10
#define pinstCTrackingWnd_x                                        0xDE67CC
#define pinstCTradeskillWnd_x                                      0xF5AC78
#define pinstCTradeWnd_x                                           0xDE6F9C
#define pinstCTrainWnd_x                                           0xDE6AA4
#define pinstCTributeBenefitWnd_x                                  0xF5AE78
#define pinstCTributeMasterWnd_x                                   0xF5AF28
#define pinstCTributeTrophyWnd_x                                   0xF5AFD8
#define pinstCVideoModesWnd_x                                      0xDE6874
#define pinstCVoiceMacroWnd_x                                      0xF44328
#define pinstCVoteResultsWnd_x                                     0xDE6734
#define pinstCVoteWnd_x                                            0xDE6720
#define pinstCWebManager_x                                         0xF449A4
#define pinstCZoneGuideWnd_x                                       0xDE6848
#define pinstCZonePathWnd_x                                        0xDE6860
#define pinstEQSuiteTextureLoader_x                                0xC85648
#define pinstItemIconCache_x                                       0xF53EB8
#define pinstLootFiltersManager_x                                  0xCB79F8
#define pinstRewardSelectionWnd_x                                  0xF58F48

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5C21F0
#define __CastRay2_x                                               0x5C2240
#define __ConvertItemTags_x                                        0x5DDD30
#define __CleanItemTags_x                                          0x47CCA0
#define __CreateCascadeMenuItems_x                                 0x55AD40
#define __DoesFileExist_x                                          0x8F6AE0
#define __EQGetTime_x                                              0x8F3630
#define __ExecuteCmd_x                                             0x5BAB80
#define __FixHeading_x                                             0x988B60
#define __FlushDxKeyboard_x                                        0x6AD650
#define __GameLoop_x                                               0x6B0980
#define __get_bearing_x                                            0x5C1D50
#define __get_melee_range_x                                        0x5C2430
#define __GetAnimationCache_x                                      0x715C60
#define __GetGaugeValueFromEQ_x                                    0x807320
#define __GetLabelFromEQ_x                                         0x808E00
#define __GetXTargetType_x                                         0x98A540
#define __HandleMouseWheel_x                                       0x6B1860
#define __HeadingDiff_x                                            0x988BD0
#define __HelpPath_x                                               0xF3F85C
#define __LoadFrontEnd_x                                           0x6ADC90
#define __NewUIINI_x                                               0x806FF0
#define __ProcessGameEvents_x                                      0x622840
#define __ProcessKeyboardEvents_x                                  0x6AF1E0
#define __ProcessMouseEvents_x                                     0x621FD0
#define __SaveColors_x                                             0x55AC20
#define __STMLToText_x                                             0x92BD40
#define __WndProc_x                                                0x6AFC40
#define CMemoryMappedFile__SetFile_x                               0xA77F60
#define CrashDetected_x                                            0x6AF740
#define DrawNetStatus_x                                            0x64E800
#define Expansion_HoT_x                                            0xEA17B0
#define Teleport_Table_Size_x                                      0xE98EA8
#define Teleport_Table_x                                           0xE99370
#define Util__FastTime_x                                           0x8F3200
#define __eq_delete_x                                              0x99102E
#define __eq_new_x                                                 0x9915E4
#define __CopyLayout_x                                             0x63CB40
#define __ThrottleFrameRate_x                                      0x625F50

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6BDB90
#define CAAWnd__Update_x                                           0x6BCEB0
#define CAAWnd__UpdateSelected_x                                   0x6BA400

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x490030
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x499020
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x498DF0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4935C0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x492A10

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x562DD0
#define AltAdvManager__IsAbilityReady_x                            0x561B70
#define AltAdvManager__GetAAById_x                                 0x561F00
#define AltAdvManager__CanTrainAbility_x                           0x561F70
#define AltAdvManager__CanSeeAbility_x                             0x5622D0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C7020
#define CharacterZoneClient__CalcAffectChange_x                    0x4C58D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C5AB0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4BB9A0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4CAC80
#define CharacterZoneClient__FindAffectSlot_x                      0x4C45F0
#define CharacterZoneClient__FindItemByGuid_x                      0x4D8180
#define CharacterZoneClient__FindItemByRecord_x                    0x4D7C00
#define CharacterZoneClient__GetCurrentMod_x                       0x4E5A40
#define CharacterZoneClient__GetCursorItemCount_x                  0x4D9DA0
#define CharacterZoneClient__GetEffect_x                           0x4BB8E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C5730
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B1CA0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B3730
#define CharacterZoneClient__GetItemCountInInventory_x             0x4D9CC0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4D9BE0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C5780
#define CharacterZoneClient__GetMaxEffects_x                       0x4BF3B0
#define CharacterZoneClient__GetModCap_x                           0x4E5940
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C5660
#define CharacterZoneClient__HasSkill_x                            0x4D5B00
#define CharacterZoneClient__IsStackBlocked_x                      0x4C2510
#define CharacterZoneClient__MakeMeVisible_x                       0x4D7220

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6D7470
#define CBankWnd__WndNotification_x                                0x6D7250

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x6E4D10

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x929510
#define CButtonWnd__CButtonWnd_x                                   0x9280E0
#define CButtonWnd__dCButtonWnd_x                                  0x9283C0
#define CButtonWnd__vftable_x                                      0xB2E028

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x704EA0
#define CChatWindowManager__InitContextMenu_x                      0x6FDFE0
#define CChatWindowManager__FreeChatWindow_x                       0x7039E0
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E9610
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x704B20
#define CChatWindowManager__CreateChatWindow_x                     0x704020

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E9720

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x7056D0
#define CChatWindow__Clear_x                                       0x706990
#define CChatWindow__WndNotification_x                             0x707120
#define CChatWindow__AddHistory_x                                  0x706250

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x93C6E0
#define CContextMenu__dCContextMenu_x                              0x93C910
#define CContextMenu__AddMenuItem_x                                0x93C920
#define CContextMenu__RemoveMenuItem_x                             0x93CC30
#define CContextMenu__RemoveAllMenuItems_x                         0x93CC50
#define CContextMenu__CheckMenuItem_x                              0x93CCD0
#define CContextMenu__SetMenuItem_x                                0x93CB50
#define CContextMenu__AddSeparator_x                               0x93CAB0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x93D270
#define CContextMenuManager__RemoveMenu_x                          0x93D2E0
#define CContextMenuManager__PopupMenu_x                           0x93D3A0
#define CContextMenuManager__Flush_x                               0x93D210
#define CContextMenuManager__GetMenu_x                             0x49B1C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x7105C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x897180
#define CChatService__GetFriendName_x                              0x8CE450

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x939B50
#define CComboWnd__Draw_x                                          0x939050
#define CComboWnd__GetCurChoice_x                                  0x939990
#define CComboWnd__GetListRect_x                                   0x939500
#define CComboWnd__GetTextRect_x                                   0x939BC0
#define CComboWnd__InsertChoice_x                                  0x939690
#define CComboWnd__SetColors_x                                     0x939660
#define CComboWnd__SetChoice_x                                     0x939960
#define CComboWnd__GetItemCount_x                                  0x9399A0
#define CComboWnd__GetCurChoiceText_x                              0x9399E0
#define CComboWnd__GetChoiceText_x                                 0x9399B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x939720

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x70DFE0
#define CContainerWnd__vftable_x                                   0xAFB494
#define CContainerWnd__SetContainer_x                              0x70F530

// CDisplay
#define CDisplay__cameraType_x                                     0xDE6880
#define CDisplay__ZoneMainUI_x                                     0x5555D0
#define CDisplay__PreZoneMainUI_x                                  0x5555E0
#define CDisplay__CleanGameUI_x                                    0x55A9E0
#define CDisplay__GetClickedActor_x                                0x54DA30
#define CDisplay__GetUserDefinedColor_x                            0x5460A0
#define CDisplay__GetWorldFilePath_x                               0x54F4A0
#define CDisplay__is3dON_x                                         0x54A690
#define CDisplay__ReloadUI_x                                       0x554AE0
#define CDisplay__WriteTextHD2_x                                   0x54A480
#define CDisplay__TrueDistance_x                                   0x551160
#define CDisplay__SetViewActor_x                                   0x54D350
#define CDisplay__GetFloorHeight_x                                 0x54A750
#define CDisplay__SetRenderWindow_x                                0x5490D0
#define CDisplay__ToggleScreenshotMode_x                           0x54CE20
#define CDisplay__RealRender_World_x                               0x548530

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x95C660

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x93FBD0
#define CEditWnd__EnsureCaretVisible_x                             0x941DA0
#define CEditWnd__GetCaretPt_x                                     0x940D50
#define CEditWnd__GetCharIndexPt_x                                 0x940B00
#define CEditWnd__GetDisplayString_x                               0x9409A0
#define CEditWnd__GetHorzOffset_x                                  0x93F270
#define CEditWnd__GetLineForPrintableChar_x                        0x941CA0
#define CEditWnd__GetSelStartPt_x                                  0x940DB0
#define CEditWnd__GetSTMLSafeText_x                                0x9407C0
#define CEditWnd__PointFromPrintableChar_x                         0x9418D0
#define CEditWnd__ReplaceSelection_x                               0x941540
#define CEditWnd__SelectableCharFromPoint_x                        0x941A40
#define CEditWnd__SetEditable_x                                    0x940E80
#define CEditWnd__SetWindowTextA_x                                 0x940540

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x6100D0
#define CEverQuest__ClickedPlayer_x                                0x602280
#define CEverQuest__CreateTargetIndicator_x                        0x61F9B0
#define CEverQuest__DeleteTargetIndicator_x                        0x61FA40
#define CEverQuest__DoTellWindow_x                                 0x4E9800
#define CEverQuest__OutputTextToLog_x                              0x4E9AD0
#define CEverQuest__DropHeldItemOnGround_x                         0x5F73D0
#define CEverQuest__dsp_chat_x                                     0x4E9E60
#define CEverQuest__trimName_x                                     0x61BBA0
#define CEverQuest__Emote_x                                        0x610930
#define CEverQuest__EnterZone_x                                    0x60AA30
#define CEverQuest__GetBodyTypeDesc_x                              0x615130
#define CEverQuest__GetClassDesc_x                                 0x615770
#define CEverQuest__GetClassThreeLetterCode_x                      0x615D70
#define CEverQuest__GetDeityDesc_x                                 0x61E200
#define CEverQuest__GetLangDesc_x                                  0x615F30
#define CEverQuest__GetRaceDesc_x                                  0x615750
#define CEverQuest__InterpretCmd_x                                 0x61E7D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x5FB570
#define CEverQuest__LMouseUp_x                                     0x5F98F0
#define CEverQuest__RightClickedOnPlayer_x                         0x5FBE50
#define CEverQuest__RMouseUp_x                                     0x5FA880
#define CEverQuest__SetGameState_x                                 0x5F7160
#define CEverQuest__UPCNotificationFlush_x                         0x61BAA0
#define CEverQuest__IssuePetCommand_x                              0x617340
#define CEverQuest__ReportSuccessfulHeal_x                         0x611650
#define CEverQuest__ReportSuccessfulHit_x                          0x611C80

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x71FCB0
#define CGaugeWnd__CalcLinesFillRect_x                             0x71FD10
#define CGaugeWnd__Draw_x                                          0x71F330

// CGuild
#define CGuild__FindMemberByName_x                                 0x4AFA80
#define CGuild__GetGuildName_x                                     0x4AE530
#define CGuild__GetGuildIndex_x                                    0x4AEB30

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x739930

//CHotButton
#define CHotButton__SetButtonSize_x                                0x631410
#define CHotButton__SetCheck_x                                     0x631050

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x746980
#define CInvSlotMgr__MoveItem_x                                    0x745690
#define CInvSlotMgr__SelectSlot_x                                  0x746A50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x743EC0
#define CInvSlot__SliderComplete_x                                 0x741C00
#define CInvSlot__GetItemBase_x                                    0x7415A0
#define CInvSlot__UpdateItem_x                                     0x741710

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x7484D0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x747670
#define CInvSlotWnd__HandleLButtonUp_x                             0x748050

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x8026A0
#define CItemDisplayWnd__UpdateStrings_x                           0x756BD0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x750930
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x750E30
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x7571E0
#define CItemDisplayWnd__AboutToShow_x                             0x756810
#define CItemDisplayWnd__WndNotification_x                         0x758440
#define CItemDisplayWnd__RequestConvertItem_x                      0x757D80
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x755870
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x756630

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x8331B0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x75C970

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x5193D0

// CLabel
#define CLabel__Draw_x                                             0x762380

// CListWnd
#define CListWnd__CListWnd_x                                       0x912300
#define CListWnd__dCListWnd_x                                      0x912620
#define CListWnd__vftable_x                                        0xB2D900
#define CListWnd__AddColumn_x                                      0x916AA0
#define CListWnd__AddColumn1_x                                     0x916AF0
#define CListWnd__AddLine_x                                        0x916E80
#define CListWnd__AddString_x                                      0x916C80
#define CListWnd__CalculateFirstVisibleLine_x                      0x916860
#define CListWnd__CalculateVSBRange_x                              0x916650
#define CListWnd__ClearSel_x                                       0x917660
#define CListWnd__ClearAllSel_x                                    0x9176C0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9180D0
#define CListWnd__Compare_x                                        0x915F80
#define CListWnd__Draw_x                                           0x912750
#define CListWnd__DrawColumnSeparators_x                           0x914F50
#define CListWnd__DrawHeader_x                                     0x9153C0
#define CListWnd__DrawItem_x                                       0x9158C0
#define CListWnd__DrawLine_x                                       0x9150C0
#define CListWnd__DrawSeparator_x                                  0x914FF0
#define CListWnd__EnableLine_x                                     0x914820
#define CListWnd__EnsureVisible_x                                  0x917FF0
#define CListWnd__ExtendSel_x                                      0x917590
#define CListWnd__GetColumnTooltip_x                               0x914360
#define CListWnd__GetColumnMinWidth_x                              0x9143D0
#define CListWnd__GetColumnWidth_x                                 0x9142D0
#define CListWnd__GetCurSel_x                                      0x913C60
#define CListWnd__GetItemAtPoint_x                                 0x914AA0
#define CListWnd__GetItemAtPoint1_x                                0x914B10
#define CListWnd__GetItemData_x                                    0x913CE0
#define CListWnd__GetItemHeight_x                                  0x9140A0
#define CListWnd__GetItemIcon_x                                    0x913E70
#define CListWnd__GetItemRect_x                                    0x914910
#define CListWnd__GetItemText_x                                    0x913D20
#define CListWnd__GetSelList_x                                     0x917710
#define CListWnd__GetSeparatorRect_x                               0x914D50
#define CListWnd__InsertLine_x                                     0x917270
#define CListWnd__RemoveLine_x                                     0x9173C0
#define CListWnd__SetColors_x                                      0x916620
#define CListWnd__SetColumnJustification_x                         0x916350
#define CListWnd__SetColumnLabel_x                                 0x916C20
#define CListWnd__SetColumnWidth_x                                 0x916270
#define CListWnd__SetCurSel_x                                      0x9174D0
#define CListWnd__SetItemColor_x                                   0x917CA0
#define CListWnd__SetItemData_x                                    0x917C60
#define CListWnd__SetItemText_x                                    0x917880
#define CListWnd__ShiftColumnSeparator_x                           0x916410
#define CListWnd__Sort_x                                           0x916100
#define CListWnd__ToggleSel_x                                      0x917500
#define CListWnd__SetColumnsSizable_x                              0x9164C0
#define CListWnd__SetItemWnd_x                                     0x917B30
#define CListWnd__GetItemWnd_x                                     0x913EC0
#define CListWnd__SetItemIcon_x                                    0x917900
#define CListWnd__CalculateCustomWindowPositions_x                 0x916960
#define CListWnd__SetVScrollPos_x                                  0x916250

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x777A90

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x772F90
#define MapViewMap__dMapViewMap_x                                  0x7730D0
#define MapViewMap__vftable_x                                      0xB02A50
#define MapViewMap__Clear_x                                        0x773900
#define MapViewMap__SaveEx_x                                       0x776CC0
#define MapViewMap__SetZoom_x                                      0x77B380
#define MapViewMap__HandleLButtonDown_x                            0x7731E0
#define MapViewMap__GetWorldCoordinates_x                          0x7761A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x797E00
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7986E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x798C10
#define CMerchantWnd__SelectRecoverySlot_x                         0x79BBC0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x796960
#define CMerchantWnd__SelectBuySellSlot_x                          0x7A1780
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x797A10

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x89C440
#define CPacketScrambler__hton_x                                   0x89C430

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x935690
#define CSidlManagerBase__CreatePageWnd_x                          0x934EA0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x931150
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9310E0
#define CSidlManagerBase__FindAnimation1_x                         0x931330
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x931740
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x931530
#define CSidlManagerBase__CreateLabel_x                            0x7F9880
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x9346A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x934870
#define CSidlManagerBase__CreateXWnd_x                             0x7F97B0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x7F9D60

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x92DE00
#define CSidlScreenWnd__CalculateVSBRange_x                        0x92DD00
#define CSidlScreenWnd__ConvertToRes_x                             0x9571B0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92D800
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92D4F0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92D5C0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92D690
#define CSidlScreenWnd__DrawSidlPiece_x                            0x92E2A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x92E770
#define CSidlScreenWnd__GetChildItem_x                             0x92E6F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x92E490
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91DF40
#define CSidlScreenWnd__Init1_x                                    0x92D0F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x92E7C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x92F310
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92C500
#define CSidlScreenWnd__m_layoutCopy_x                             0x15D5AE8
#define CSidlScreenWnd__StoreIniInfo_x                             0x92EE90
#define CSidlScreenWnd__StoreIniVis_x                              0x92F1F0
#define CSidlScreenWnd__vftable_x                                  0xB2E2B8
#define CSidlScreenWnd__WndNotification_x                          0x92E1B0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x696A10
#define CSkillMgr__GetSkillCap_x                                   0x696BF0
#define CSkillMgr__GetNameToken_x                                  0x696190
#define CSkillMgr__IsActivatedSkill_x                              0x6962D0
#define CSkillMgr__IsCombatSkill_x                                 0x696210

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x93E050
#define CSliderWnd__SetValue_x                                     0x93DEC0
#define CSliderWnd__SetNumTicks_x                                  0x93DF20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x7FF9A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x946990
#define CStmlWnd__CalculateHSBRange_x                              0x947A70
#define CStmlWnd__CalculateVSBRange_x                              0x9479E0
#define CStmlWnd__CanBreakAtCharacter_x                            0x94BDA0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x94CA30
#define CStmlWnd__ForceParseNow_x                                  0x946F30
#define CStmlWnd__GetNextTagPiece_x                                0x94BD00
#define CStmlWnd__GetSTMLText_x                                    0x50A900
#define CStmlWnd__GetVisibleText_x                                 0x946F50
#define CStmlWnd__InitializeWindowVariables_x                      0x94C880
#define CStmlWnd__MakeStmlColorTag_x                               0x946000
#define CStmlWnd__MakeWndNotificationTag_x                         0x946070
#define CStmlWnd__SetSTMLText_x                                    0x9450B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x94DB30
#define CStmlWnd__UpdateHistoryString_x                            0x94CC40

// CTabWnd
#define CTabWnd__Draw_x                                            0x944200
#define CTabWnd__DrawCurrentPage_x                                 0x944930
#define CTabWnd__DrawTab_x                                         0x944650
#define CTabWnd__GetCurrentPage_x                                  0x943A10
#define CTabWnd__GetCurrentTabIndex_x                              0x943A00
#define CTabWnd__GetPageFromTabIndex_x                             0x944590
#define CTabWnd__GetPageInnerRect_x                                0x943C50
#define CTabWnd__GetTabInnerRect_x                                 0x943B90
#define CTabWnd__GetTabRect_x                                      0x943A40
#define CTabWnd__InsertPage_x                                      0x943E60
#define CTabWnd__RemovePage_x                                      0x943FD0
#define CTabWnd__SetPage_x                                         0x943CD0
#define CTabWnd__SetPageRect_x                                     0x944140
#define CTabWnd__UpdatePage_x                                      0x944510

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9435C0
#define CPageWnd__GetTabText_x                                     0x75CD80
#define CPageWnd__SetTabText_x                                     0x943560


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A8E00

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91ADF0
#define CTextureFont__DrawWrappedText1_x                           0x91AD20
#define CTextureFont__DrawWrappedText2_x                           0x91AE40
#define CTextureFont__GetTextExtent_x                              0x91AFB0

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x6AAB20
#define CHtmlComponentWnd__ValidateUri_x                           0x73B320
#define CHtmlWnd__SetClientCallbacks_x                             0x6364B0
#define CHtmlWnd__AddObserver_x                                    0x6364D0
#define CHtmlWnd__RemoveObserver_x                                 0x636530
#define Window__getProgress_x                                      0x851D50
#define Window__getStatus_x                                        0x851D70
#define Window__getURI_x                                           0x851D80

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x953FC0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x907E50

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E9450
#define CXStr__CXStr1_x                                            0x505A30
#define CXStr__CXStr3_x                                            0x8EF5F0
#define CXStr__dCXStr_x                                            0x477EC0
#define CXStr__operator_equal_x                                    0x8EF820
#define CXStr__operator_equal1_x                                   0x8EF860
#define CXStr__operator_plus_equal1_x                              0x8F02F0
#define CXStr__SetString_x                                         0x8F21E0
#define CXStr__operator_char_p_x                                   0x8EFD60
#define CXStr__GetChar_x                                           0x8F1B30
#define CXStr__Delete_x                                            0x8F13E0
#define CXStr__GetUnicode_x                                        0x8F1BA0
#define CXStr__GetLength_x                                         0x4A8BB0
#define CXStr__Mid_x                                               0x47D050
#define CXStr__Insert_x                                            0x8F1C00
#define CXStr__FindNext_x                                          0x8F1850
#define CXStr__gFreeLists_x                                        0xC84C58
#define CXStr__gCXStrAccess_x                                      0x15D534C

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x93C300

// CXWnd
#define CXWnd__BringToTop_x                                        0x921670
#define CXWnd__Center_x                                            0x9211F0
#define CXWnd__ClrFocus_x                                          0x921010
#define CXWnd__Destroy_x                                           0x9210B0
#define CXWnd__DoAllDrawing_x                                      0x91D6E0
#define CXWnd__DrawChildren_x                                      0x91D6B0
#define CXWnd__DrawColoredRect_x                                   0x91DB30
#define CXWnd__DrawTooltip_x                                       0x91C200
#define CXWnd__DrawTooltipAtPoint_x                                0x91C2C0
#define CXWnd__GetBorderFrame_x                                    0x91D990
#define CXWnd__GetChildItem_x                                      0x921880
#define CXWnd__GetChildWndAt_x                                     0x921710
#define CXWnd__GetClientClipRect_x                                 0x91F980
#define CXWnd__GetRelativeRect_x                                   0x91FCD0
#define CXWnd__GetScreenClipRect_x                                 0x91FA50
#define CXWnd__GetScreenRect_x                                     0x91FC10
#define CXWnd__GetTooltipRect_x                                    0x91DB80
#define CXWnd__GetWindowTextA_x                                    0x49C940
#define CXWnd__IsActive_x                                          0x91E2B0
#define CXWnd__IsDescendantOf_x                                    0x920600
#define CXWnd__IsReallyVisible_x                                   0x920630
#define CXWnd__IsType_x                                            0x921D70
#define CXWnd__Minimize_x                                          0x920CC0
#define CXWnd__Move_x                                              0x9206A0
#define CXWnd__Move1_x                                             0x920750
#define CXWnd__ProcessTransition_x                                 0x9211A0
#define CXWnd__Refade_x                                            0x920A10
#define CXWnd__Resize_x                                            0x920C60
#define CXWnd__Right_x                                             0x921430
#define CXWnd__SetFocus_x                                          0x920FD0
#define CXWnd__SetFont_x                                           0x921040
#define CXWnd__SetKeyTooltip_x                                     0x921BA0
#define CXWnd__SetMouseOver_x                                      0x91EAF0
#define CXWnd__SetParent_x                                         0x9203A0
#define CXWnd__StartFade_x                                         0x9204E0
#define CXWnd__vftable_x                                           0xB2DD44
#define CXWnd__CXWnd_x                                             0x91B2D0
#define CXWnd__dCXWnd_x                                            0x91B7F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x958230

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x924560
#define CXWndManager__DrawWindows_x                                0x924580
#define CXWndManager__GetKeyboardFlags_x                           0x926D60
#define CXWndManager__HandleKeyboardMsg_x                          0x926920
#define CXWndManager__RemoveWnd_x                                  0x926F90
#define CXWndManager__RemovePendingDeletionWnd_x                   0x927510

// CDBStr
#define CDBStr__GetString_x                                        0x545050

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4DA5B0
#define CharacterZoneClient__CastSpell_x                           0x4BFB10
#define CharacterZoneClient__Cur_HP_x                              0x4D2B40
#define CharacterZoneClient__Cur_Mana_x                            0x4DA2A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D58C0
#define CharacterZoneClient__GetBaseSkill_x                        0x4D6860
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C2B80
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E06E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B3370
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B34C0
#define CharacterZoneClient__GetHPRegen_x                          0x4E00E0
#define CharacterZoneClient__GetManaRegen_x                        0x4E0B20
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C38D0
#define CharacterZoneClient__Max_Endurance_x                       0x65CD50
#define CharacterZoneClient__Max_HP_x                              0x4D2970
#define CharacterZoneClient__Max_Mana_x                            0x65CB50
#define CharacterZoneClient__SpellDuration_x                       0x4C3400
#define CharacterZoneClient__TotalEffect_x                         0x4C6910
#define CharacterZoneClient__UseSkill_x                            0x4E2920

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8BB510

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6730A0

// PcClient
#define PcClient__PcClient_x                                       0x652F10
#define PcClient__GetConLevel_x                                    0x6557A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BA570
#define CCharacterListWnd__EnterWorld_x                            0x4B9F40
#define CCharacterListWnd__Quit_x                                  0x4B9C90
#define CCharacterListWnd__UpdateList_x                            0x4BA130

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x637690
#define EQ_Item__CreateItemTagString_x                             0x895A10
#define EQ_Item__IsStackable_x                                     0x89A690
#define EQ_Item__GetImageNum_x                                     0x897590
#define EQ_Item__CreateItemClient_x                                0x6368D0
#define EQ_Item__GetItemValue_x                                    0x898880
#define EQ_Item__ValueSellMerchant_x                               0x89C020
#define EQ_Item__IsKeyRingItem_x                                   0x899FB0
#define EQ_Item__CanGoInBag_x                                      0x6377B0
#define EQ_Item__IsEmpty_x                                         0x899AE0
#define EQ_Item__GetMaxItemCount_x                                 0x898C90
#define EQ_Item__GetHeldItem_x                                     0x897460
#define EQ_Item__GetAugmentFitBySlot_x                             0x895270
#define ItemClient__ItemClient_x                                   0x5B7610
#define ItemClient__dItemClient_x                                  0x636820

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x563AA0
#define EQ_LoadingS__Array_x                                       0xC0EC68

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8A5030
#define EQ_PC__GetCombatAbility_x                                  0x8A56A0
#define EQ_PC__GetCombatAbilityTimer_x                             0x8A5710
#define EQ_PC__GetItemRecastTimer_x                                0x65F6C0
#define EQ_PC__HasLoreItem_x                                       0x655FB0
#define EQ_PC__AlertInventoryChanged_x                             0x6550E0
#define EQ_PC__GetPcZoneClient_x                                   0x682200
#define EQ_PC__RemoveMyAffect_x                                    0x6628F0
#define EQ_PC__GetKeyRingItems_x                                   0x8A5FA0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8A5D30
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8A62A0

// EQItemList
#define EQItemList__EQItemList_x                                   0x5BF780
#define EQItemList__add_object_x                                   0x5ECB80
#define EQItemList__add_item_x                                     0x5BFCE0
#define EQItemList__delete_item_x                                  0x5BFD30
#define EQItemList__FreeItemList_x                                 0x5BFC30

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x541BE0

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x6749A0
#define EQPlayer__dEQPlayer_x                                      0x667D20
#define EQPlayer__DoAttack_x                                       0x67C990
#define EQPlayer__EQPlayer_x                                       0x6683E0
#define EQPlayer__SetNameSpriteState_x                             0x66C6B0
#define EQPlayer__SetNameSpriteTint_x                              0x66D590
#define PlayerBase__HasProperty_j_x                                0x986F20
#define EQPlayer__IsTargetable_x                                   0x9873C0
#define EQPlayer__CanSee_x                                         0x987220
#define EQPlayer__CanSee1_x                                        0x9872F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x986FE0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x67FC90
#define PlayerZoneClient__GetLevel_x                               0x682240
#define PlayerZoneClient__IsValidTeleport_x                        0x5EDCF0
#define PlayerZoneClient__LegalPlayerRace_x                        0x55C8A0

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x6778B0
#define EQPlayerManager__GetSpawnByName_x                          0x677960
#define EQPlayerManager__GetPlayerFromPartialName_x                0x6779F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x63ADA0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x63AE20
#define KeypressHandler__AttachKeyToEqCommand_x                    0x63AE60
#define KeypressHandler__ClearCommandStateArray_x                  0x63C250
#define KeypressHandler__HandleKeyDown_x                           0x63C270
#define KeypressHandler__HandleKeyUp_x                             0x63C310
#define KeypressHandler__SaveKeymapping_x                          0x63C760

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8B9580

// StringTable
#define StringTable__getString_x                                   0x8B43D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x65F140
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x65D650
#define PcZoneClient__GetPcSkillLimit_x                            0x662560
#define PcZoneClient__RemovePetEffect_x                            0x662B90
#define PcZoneClient__HasAlternateAbility_x                        0x65C980
#define PcZoneClient__CanEquipItem_x                               0x65D030
#define PcZoneClient__GetItemByID_x                                0x65FB30
#define PcZoneClient__GetItemByItemClass_x                         0x65FC80
#define PcZoneClient__RemoveBuffEffect_x                           0x662BB0
#define PcZoneClient__BandolierSwap_x                              0x65DC10
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x65F660

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F2860

// IconCache
#define IconCache__GetIcon_x                                       0x715660

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x70D180
#define CContainerMgr__CloseContainer_x                            0x70D450
#define CContainerMgr__OpenExperimentContainer_x                   0x70DED0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7CC000

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x62F820

// CLootWnd
#define CLootWnd__LootAll_x                                        0x769E10
#define CLootWnd__RequestLootSlot_x                                0x7690E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x58B4D0
#define EQ_Spell__SpellAffects_x                                   0x58B940
#define EQ_Spell__SpellAffectBase_x                                0x58B700
#define EQ_Spell__IsStackable_x                                    0x4CA580
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4CA370
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B7840
#define EQ_Spell__IsSPAStacking_x                                  0x58C790
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x58BCA0
#define EQ_Spell__IsNoRemove_x                                     0x4CA560
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58C7A0
#define __IsResEffectSpell_x                                       0x4C9840

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4ACFB0

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8C3A90

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x812DB0
#define CTargetWnd__WndNotification_x                              0x8125F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x8128C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x811760

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x817400
#define CTaskWnd__ConfirmAbandonTask_x                             0x81A040

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x53F600
#define CTaskManager__HandleMessage_x                              0x53DA60
#define CTaskManager__GetTaskStatus_x                              0x53F6B0
#define CTaskManager__GetElementDescription_x                      0x53F730

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x586670
#define EqSoundManager__PlayScriptMp3_x                            0x586930
#define EqSoundManager__SoundAssistPlay_x                          0x69A930
#define EqSoundManager__WaveInstancePlay_x                         0x699EA0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x530BA0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x942C70
#define CTextureAnimation__SetCurCell_x                            0x942A70

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56B630
#define CAltAbilityData__GetMercMaxRank_x                          0x56B5C0
#define CAltAbilityData__GetMaxRank_x                              0x5609F0

// CTargetRing
#define CTargetRing__Cast_x                                        0x62D940

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x5175E0
#define CharacterBase__CreateItemIndex_x                           0x635A60
#define CharacterBase__GetItemByGlobalIndex_x                      0x8CC100
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8CC160
#define CharacterBase__GetItemPossession_x                         0x5032F0
#define CharacterBase__GetMemorizedSpell_x                         0x4CA350
#define CharacterBase__IsExpansionFlag_x                           0x5B9390

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x6F4290
#define CCastSpellWnd__IsBardSongPlaying_x                         0x6F4AC0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x6F4B70

// messages
#define msg_spell_worn_off_x                                       0x5B12D0
#define msg_new_text_x                                             0x5A5C50
#define __msgTokenTextParam_x                                      0x5B3560
#define msgTokenText_x                                             0x5B37B0

// SpellManager
#define SpellManager__vftable_x                                    0xAD72CC
#define SpellManager__SpellManager_x                               0x69DC60
#define Spellmanager__LoadTextSpells_x                             0x69E550
#define SpellManager__GetSpellByGroupAndRank_x                     0x69DE30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x98AE30

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8C4430
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8C46B0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7626C0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x711860
#define CCursorAttachment__AttachToCursor1_x                       0x7118A0
#define CCursorAttachment__Deactivate_x                            0x712890

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x952050
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9527D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x952490

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x514B90
#define CFindItemWnd__WndNotification_x                            0x515670
#define CFindItemWnd__Update_x                                     0x5161B0
#define CFindItemWnd__PickupSelectedItem_x                         0x5143C0

// IString
#define IString__Append_x                                          0x504B40

// Camera
#define EverQuest__Cameras_x                                       0xEA1AFC

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x51D570
#define LootFiltersManager__GetItemFilterData_x                    0x51CE70
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51CEA0
#define LootFiltersManager__SetItemLootFilter_x                    0x51D0C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7B9E50

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x990AA0
#define CResolutionHandler__GetWindowedStyle_x                     0x695380

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x709E30

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8D9A60
#define CDistillerInfo__Instance_x                                 0x8D9A00

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x728C60
#define CGroupWnd__UpdateDisplay_x                                 0x727FC0

// ItemBase
#define ItemBase__IsLore_x                                         0x89A060
#define ItemBase__IsLoreEquipped_x                                 0x89A0D0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5ECAE0
#define EQPlacedItemManager__GetItemByGuid_x                       0x5ECC20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5ECC80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x68A930
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x68E2A0

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50AF00

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F7270
#define FactionManagerClient__HandleFactionMessage_x               0x4F78E0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4F7EA0
#define FactionManagerClient__GetMaxFaction_x                      0x4F7EBF
#define FactionManagerClient__GetMinFaction_x                      0x4F7E70

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x5032C0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x919D70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49BC50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x503550

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x56AAE0

// CTargetManager
#define CTargetManager__Get_x                                      0x6A1490

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x68A930

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A8BC0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5BFBD0

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF3F190

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x904520

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x482D20

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

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x10089F00
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x100199B0
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x1007C1F0
#define EQMain__LoginController__FlushDxKeyboard_x                 0x100152E0
#define EQMain__LoginController__GiveTime_x                        0x10015340
#define EQMain__LoginServerAPI__JoinServer_x                       0x10016E10
#define EQMain__WndProc_x                                          0x1000BF40

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x10166D38
#define EQMain__pinstCLoginViewManager_x                           0x1016D3B4
#define EQMain__pinstCXWndManager_x                                0x1037F8AC
#define EQMain__pinstCSidlManager_x                                0x1037F8B0
#define EQMain__pinstLoginController_x                             0x1016D3B8
#define EQMain__pinstLoginServerAPI_x                              0x1016D3A8
