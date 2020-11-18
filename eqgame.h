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
#define __ExpectedVersionDate                                     "Nov 12 2020"
#define __ExpectedVersionTime                                     "11:39:17"
#define __ActualVersionDate_x                                      0xAF22AC
#define __ActualVersionTime_x                                      0xAF22A0
#define __ActualVersionBuild_x                                     0xAE02CC

// Memory Protection
#define __MemChecker0_x                                            0x640BE0
#define __MemChecker1_x                                            0x8F3770
#define __MemChecker2_x                                            0x6B12F0
#define __MemChecker3_x                                            0x6B1240
#define __MemChecker4_x                                            0x849CE0
#define __EncryptPad0_x                                            0xC27500
#define __EncryptPad1_x                                            0xC84D38
#define __EncryptPad2_x                                            0xC378C8
#define __EncryptPad3_x                                            0xC374C8
#define __EncryptPad4_x                                            0xC752D8
#define __EncryptPad5_x                                            0xF470B8
#define __AC1_x                                                    0x808986
#define __AC2_x                                                    0x5FA17F
#define __AC3_x                                                    0x6017D0
#define __AC4_x                                                    0x605780
#define __AC5_x                                                    0x60BA6F
#define __AC6_x                                                    0x60FF26
#define __AC7_x                                                    0x5F9BF0
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x0

// Direct Input
#define DI8__Main_x                                                0xF470D8
#define DI8__Keyboard_x                                            0xF470DC
#define DI8__Mouse_x                                               0xF470F4
#define DI8__Mouse_Copy_x                                          0xEA045C
#define DI8__Mouse_Check_x                                         0xF44C0C
#define __AutoSkillArray_x                                         0xEA1378
#define __Attack_x                                                 0xF3F19B
#define __Autofire_x                                               0xF3F19C
#define __BindList_x                                               0xC15F38
#define g_eqCommandStates_x                                        0xC16CB8
#define __Clicks_x                                                 0xEA0514
#define __CommandList_x                                            0xC17878
#define __CurrentMapLabel_x                                        0xF57AAC
#define __CurrentSocial_x                                          0xBFF7C8
#define __DoAbilityList_x                                          0xED6CBC
#define __do_loot_x                                                0x5C5AD0
#define __DrawHandler_x                                            0x15D6AA0
#define __GroupCount_x                                             0xE9B532
#define __Guilds_x                                                 0xE9F398
#define __gWorld_x                                                 0xE9B390
#define __HWnd_x                                                   0xF470F8
#define __heqmain_x                                                0xF470A0
#define __InChatMode_x                                             0xEA0444
#define __LastTell_x                                               0xEA23B8
#define __LMouseHeldTime_x                                         0xEA0580
#define __Mouse_x                                                  0xF470C4
#define __MouseLook_x                                              0xEA04DA
#define __MouseEventTime_x                                         0xF3FC7C
#define __gpbCommandEvent_x                                        0xE98E30
#define __NetStatusToggle_x                                        0xEA04DD
#define __PCNames_x                                                0xEA1968
#define __RangeAttackReady_x                                       0xEA165C
#define __RMouseHeldTime_x                                         0xEA057C
#define __RunWalkState_x                                           0xEA0448
#define __ScreenMode_x                                             0xDE67D4
#define __ScreenX_x                                                0xEA03FC
#define __ScreenY_x                                                0xEA03F8
#define __ScreenXMax_x                                             0xEA0400
#define __ScreenYMax_x                                             0xEA0404
#define __ServerHost_x                                             0xE98FFB
#define __ServerName_x                                             0xED6C7C
#define __ShiftKeyDown_x                                           0xEA0AD8
#define __ShowNames_x                                              0xEA1818
#define __SocialChangedList_x                                      0xED6D04
#define __Socials_x                                                0xED6D7C
#define __SubscriptionType_x                                       0xF9BD70
#define __TargetAggroHolder_x                                      0xF5A460
#define __ZoneType_x                                               0xEA08D8
#define __GroupAggro_x                                             0xF5A4A0
#define __LoginName_x                                              0xF47834
#define __Inviter_x                                                0xF3F118
#define __AttackOnAssist_x                                         0xEA17D4
#define __UseTellWindows_x                                         0xEA1B00
#define __gfMaxZoomCameraDistance_x                                0xAE9EC8
#define __gfMaxCameraDistance_x                                    0xB12B48
#define __pulAutoRun_x                                             0xEA04F8
#define __pulForward_x                                             0xEA1B38
#define __pulBackward_x                                            0xEA1B3C
#define __pulTurnRight_x                                           0xEA1B40
#define __pulTurnLeft_x                                            0xEA1B44
#define __pulStrafeLeft_x                                          0xEA1B48
#define __pulStrafeRight_x                                         0xEA1B4C

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xE9B730
#define instEQZoneInfo_x                                           0xEA06D0
#define pinstActiveBanker_x                                        0xE9931C
#define pinstActiveCorpse_x                                        0xE99314
#define pinstActiveGMaster_x                                       0xE99318
#define pinstActiveMerchant_x                                      0xE99310
#define pinstAltAdvManager_x                                       0xDE7960
#define pinstBandageTarget_x                                       0xE9932C
#define pinstCamActor_x                                            0xDE67C4
#define pinstCDBStr_x                                              0xDE667C
#define pinstCDisplay_x                                            0xE9B384
#define pinstCEverQuest_x                                          0xF470F0
#define pinstEverQuestInfo_x                                       0xEA03F0
#define pinstCharData_x                                            0xE9B720
#define pinstCharSpawn_x                                           0xE99364
#define pinstControlledMissile_x                                   0xE99374
#define pinstControlledPlayer_x                                    0xE99364
#define pinstCResolutionHandler_x                                  0x15D6CD0
#define pinstCSidlManager_x                                        0x15D5C68
#define pinstCXWndManager_x                                        0x15D5C64
#define instDynamicZone_x                                          0xE9F270
#define pinstDZMember_x                                            0xE9F380
#define pinstDZTimerInfo_x                                         0xE9F384
#define pinstEqLogin_x                                             0xF47180
#define instEQMisc_x                                               0xDE65C0
#define pinstEQSoundManager_x                                      0xDE8930
#define pinstEQSpellStrings_x                                      0xCA8F78
#define instExpeditionLeader_x                                     0xE9F2BA
#define instExpeditionName_x                                       0xE9F2FA
#define pinstSGraphicsEngine_x                                     0x15D6A94
#define pinstGroup_x                                               0xE9B52E
#define pinstImeManager_x                                          0x15D5C60
#define pinstLocalPlayer_x                                         0xE9930C
#define pinstMercenaryData_x                                       0xF41768
#define pinstMercenaryStats_x                                      0xF5A52C
#define pinstModelPlayer_x                                         0xE99324
#define pinstPCData_x                                              0xE9B720
#define pinstSkillMgr_x                                            0xF438D0
#define pinstSpawnManager_x                                        0xF42378
#define pinstSpellManager_x                                        0xF43B10
#define pinstSpellSets_x                                           0xF37DC4
#define pinstStringTable_x                                         0xE9B728
#define pinstSwitchManager_x                                       0xE98CD0
#define pinstTarget_x                                              0xE99360
#define pinstTargetObject_x                                        0xE9936C
#define pinstTargetSwitch_x                                        0xE9937C
#define pinstTaskMember_x                                          0xDE6450
#define pinstTrackTarget_x                                         0xE99368
#define pinstTradeTarget_x                                         0xE99320
#define instTributeActive_x                                        0xDE65E1
#define pinstViewActor_x                                           0xDE67BC
#define pinstWorldData_x                                           0xE98E20
#define pinstZoneAddr_x                                            0xEA0970
#define pinstPlayerPath_x                                          0xF42410
#define pinstTargetIndicator_x                                     0xF43D78
#define EQObject_Top_x                                             0xE99104

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xDE6B04
#define pinstCAchievementsWnd_x                                    0xDE675C
#define pinstCActionsWnd_x                                         0xDE6F98
#define pinstCAdvancedDisplayOptionsWnd_x                          0xDE681C
#define pinstCAdvancedLootWnd_x                                    0xDE67B4
#define pinstCAdventureLeaderboardWnd_x                            0xF51280
#define pinstCAdventureRequestWnd_x                                0xF51330
#define pinstCAdventureStatsWnd_x                                  0xF513E0
#define pinstCAggroMeterWnd_x                                      0xDE6804
#define pinstCAlarmWnd_x                                           0xDE6784
#define pinstCAlertHistoryWnd_x                                    0xDE6894
#define pinstCAlertStackWnd_x                                      0xDE67EC
#define pinstCAlertWnd_x                                           0xDE6800
#define pinstCAltStorageWnd_x                                      0xF51740
#define pinstCAudioTriggersWindow_x                                0xC9B2A8
#define pinstCAuraWnd_x                                            0xDE67B8
#define pinstCAvaZoneWnd_x                                         0xDE6868
#define pinstCBandolierWnd_x                                       0xDE6818
#define pinstCBankWnd_x                                            0xDE684C
#define pinstCBarterMerchantWnd_x                                  0xF52980
#define pinstCBarterSearchWnd_x                                    0xF52A30
#define pinstCBarterWnd_x                                          0xF52AE0
#define pinstCBazaarConfirmationWnd_x                              0xDE6798
#define pinstCBazaarSearchWnd_x                                    0xDE6B08
#define pinstCBazaarWnd_x                                          0xDE6768
#define pinstCBlockedBuffWnd_x                                     0xDE67E0
#define pinstCBlockedPetBuffWnd_x                                  0xDE6808
#define pinstCBodyTintWnd_x                                        0xDE6FAC
#define pinstCBookWnd_x                                            0xDE6844
#define pinstCBreathWnd_x                                          0xDE6B8C
#define pinstCBuffWindowNORMAL_x                                   0xDE67AC
#define pinstCBuffWindowSHORT_x                                    0xDE67B0
#define pinstCBugReportWnd_x                                       0xDE6848
#define pinstCButtonWnd_x                                          0x15D5ED0
#define pinstCCastingWnd_x                                         0xDE6838
#define pinstCCastSpellWnd_x                                       0xDE6B14
#define pinstCCharacterListWnd_x                                   0xDE671C
#define pinstCChatWindowManager_x                                  0xF535A0
#define pinstCClaimWnd_x                                           0xF536F8
#define pinstCColorPickerWnd_x                                     0xDE6AB0
#define pinstCCombatAbilityWnd_x                                   0xDE6778
#define pinstCCombatSkillsSelectWnd_x                              0xDE6730
#define pinstCCompassWnd_x                                         0xDE6F9C
#define pinstCConfirmationDialog_x                                 0xF585F8
#define pinstCContainerMgr_x                                       0xDE6FA8
#define pinstCContextMenuManager_x                                 0x15D5C20
#define pinstCCursorAttachment_x                                   0xDE682C
#define pinstCDynamicZoneWnd_x                                     0xF53CC0
#define pinstCEditLabelWnd_x                                       0xDE67A8
#define pinstCEQMainWnd_x                                          0xF53F08
#define pinstCEventCalendarWnd_x                                   0xDE6B0C
#define pinstCExtendedTargetWnd_x                                  0xDE67E8
#define pinstCFacePick_x                                           0xDE6734
#define pinstCFactionWnd_x                                         0xDE6754
#define pinstCFellowshipWnd_x                                      0xF54108
#define pinstCFileSelectionWnd_x                                   0xDE6AAC
#define pinstCFindItemWnd_x                                        0xDE6744
#define pinstCFindLocationWnd_x                                    0xF54260
#define pinstCFriendsWnd_x                                         0xDE6748
#define pinstCGemsGameWnd_x                                        0xDE6750
#define pinstCGiveWnd_x                                            0xDE6788
#define pinstCGroupSearchFiltersWnd_x                              0xDE6820
#define pinstCGroupSearchWnd_x                                     0xF54658
#define pinstCGroupWnd_x                                           0xF54708
#define pinstCGuildBankWnd_x                                       0xEA17B8
#define pinstCGuildCreationWnd_x                                   0xF54868
#define pinstCGuildMgmtWnd_x                                       0xF54918
#define pinstCharacterCreation_x                                   0xDE673C
#define pinstCHelpWnd_x                                            0xDE678C
#define pinstCHeritageSelectionWnd_x                               0xDE6740
#define pinstCHotButtonWnd_x                                       0xF56A70
#define pinstCHotButtonWnd1_x                                      0xF56A70
#define pinstCHotButtonWnd2_x                                      0xF56A74
#define pinstCHotButtonWnd3_x                                      0xF56A78
#define pinstCHotButtonWnd4_x                                      0xF56A7C
#define pinstCIconSelectionWnd_x                                   0xDE6828
#define pinstCInspectWnd_x                                         0xDE680C
#define pinstCInventoryWnd_x                                       0xDE67C0
#define pinstCInvSlotMgr_x                                         0xDE6AF4
#define pinstCItemDisplayManager_x                                 0xF57000
#define pinstCItemExpTransferWnd_x                                 0xF57134
#define pinstCItemOverflowWnd_x                                    0xDE6B10
#define pinstCJournalCatWnd_x                                      0xDE6AC4
#define pinstCJournalTextWnd_x                                     0xDE6880
#define pinstCKeyRingWnd_x                                         0xDE6834
#define pinstCLargeDialogWnd_x                                     0xF59278
#define pinstCLayoutCopyWnd_x                                      0xF57480
#define pinstCLFGuildWnd_x                                         0xF57530
#define pinstCLoadskinWnd_x                                        0xDE676C
#define pinstCLootFiltersCopyWnd_x                                 0xCB7958
#define pinstCLootFiltersWnd_x                                     0xDE67F0
#define pinstCLootSettingsWnd_x                                    0xDE6814
#define pinstCLootWnd_x                                            0xDE6AC8
#define pinstCMailAddressBookWnd_x                                 0xDE6AFC
#define pinstCMailCompositionWnd_x                                 0xDE6AB8
#define pinstCMailIgnoreListWnd_x                                  0xDE6B00
#define pinstCMailWnd_x                                            0xDE6AA4
#define pinstCManageLootWnd_x                                      0xDE7E10
#define pinstCMapToolbarWnd_x                                      0xDE6794
#define pinstCMapViewWnd_x                                         0xDE6760
#define pinstCMarketplaceWnd_x                                     0xDE67F4
#define pinstCMerchantWnd_x                                        0xDE6AD4
#define pinstCMIZoneSelectWnd_x                                    0xF57D68
#define pinstCMusicPlayerWnd_x                                     0xDE6AA0
#define pinstCNameChangeMercWnd_x                                  0xDE6790
#define pinstCNameChangePetWnd_x                                   0xDE6764
#define pinstCNameChangeWnd_x                                      0xDE67A4
#define pinstCNoteWnd_x                                            0xDE6770
#define pinstCObjectPreviewWnd_x                                   0xDE6810
#define pinstCOptionsWnd_x                                         0xDE677C
#define pinstCPetInfoWnd_x                                         0xDE689C
#define pinstCPetitionQWnd_x                                       0xDE672C
//#define pinstCPlayerCustomizationWnd_x                           0xDA8E24
#define pinstCPlayerNotesWnd_x                                     0xDE6FB0
#define pinstCPlayerWnd_x                                          0xDE688C
#define pinstCPopupWndManager_x                                    0xF585F8
#define pinstCProgressionSelectionWnd_x                            0xF586A8
#define pinstCPurchaseGroupWnd_x                                   0xDE6864
#define pinstCPurchaseWnd_x                                        0xDE683C
#define pinstCPvPLeaderboardWnd_x                                  0xF58758
#define pinstCPvPStatsWnd_x                                        0xF58808
#define pinstCQuantityWnd_x                                        0xDE687C
#define pinstCRaceChangeWnd_x                                      0xDE67D0
#define pinstCRaidOptionsWnd_x                                     0xDE6824
#define pinstCRaidWnd_x                                            0xDE6AD0
#define pinstCRealEstateItemsWnd_x                                 0xDE6758
#define pinstCRealEstateLayoutDetailsWnd_x                         0xDE6FA0
#define pinstCRealEstateManageWnd_x                                0xDE686C
#define pinstCRealEstateNeighborhoodWnd_x                          0xDE6888
#define pinstCRealEstatePlotSearchWnd_x                            0xDE6AA8
#define pinstCRealEstatePurchaseWnd_x                              0xDE6AC0
#define pinstCRespawnWnd_x                                         0xDE67FC
//#define pinstCRewardSelectionWnd_x                               0x10205B0
#define pinstCSelectorWnd_x                                        0xDE6728
#define pinstCSendMoneyWnd_x                                       0xDE679C
#define pinstCServerListWnd_x                                      0xDE6ACC
#define pinstCSkillsSelectWnd_x                                    0xDE6724
#define pinstCSkillsWnd_x                                          0xDE6FA4
#define pinstCSocialEditWnd_x                                      0xDE6830
#define pinstCSocialWnd_x                                          0xDE6780
#define pinstCSpellBookWnd_x                                       0xDE6774
#define pinstCStoryWnd_x                                           0xDE6F94
#define pinstCTargetOfTargetWnd_x                                  0xF5A5B0
#define pinstCTargetWnd_x                                          0xDE67F8
#define pinstCTaskOverlayWnd_x                                     0xDE685C
#define pinstCTaskSelectWnd_x                                      0xF5A708
#define pinstCTaskManager_x                                        0xCB8298
#define pinstCTaskTemplateSelectWnd_x                              0xF5A7B8
#define pinstCTaskWnd_x                                            0xF5A868
#define pinstCTextEntryWnd_x                                       0xDE6840
#define pinstCTimeLeftWnd_x                                        0xDE6720
#define pinstCTipWndCONTEXT_x                                      0xF5AA6C
#define pinstCTipWndOFDAY_x                                        0xF5AA68
#define pinstCTitleWnd_x                                           0xF5AB18
#define pinstCTrackingWnd_x                                        0xDE67E4
#define pinstCTradeskillWnd_x                                      0xF5AC80
#define pinstCTradeWnd_x                                           0xDE6718
#define pinstCTrainWnd_x                                           0xDE6ABC
#define pinstCTributeBenefitWnd_x                                  0xF5AE80
#define pinstCTributeMasterWnd_x                                   0xF5AF30
#define pinstCTributeTrophyWnd_x                                   0xF5AFE0
#define pinstCVideoModesWnd_x                                      0xDE6890
#define pinstCVoiceMacroWnd_x                                      0xF44330
#define pinstCVoteResultsWnd_x                                     0xDE674C
#define pinstCVoteWnd_x                                            0xDE6738
#define pinstCWebManager_x                                         0xF449AC
#define pinstCZoneGuideWnd_x                                       0xDE6860
#define pinstCZonePathWnd_x                                        0xDE6878
#define pinstEQSuiteTextureLoader_x                                0xC85658
#define pinstItemIconCache_x                                       0xF53EC0
#define pinstLootFiltersManager_x                                  0xCB7A08
#define pinstRewardSelectionWnd_x                                  0xF58F50

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5C11C0
#define __CastRay2_x                                               0x5C1210
#define __ConvertItemTags_x                                        0x5DCED0
#define __CleanItemTags_x                                          0x47CED0
#define __CreateCascadeMenuItems_x                                 0x55B180
#define __DoesFileExist_x                                          0x8F67F0
#define __EQGetTime_x                                              0x8F33A0
#define __ExecuteCmd_x                                             0x5B9B30
#define __FixHeading_x                                             0x988BD0
#define __FlushDxKeyboard_x                                        0x6AD190
#define __GameLoop_x                                               0x6B04C0
#define __get_bearing_x                                            0x5C0D20
#define __get_melee_range_x                                        0x5C1400
#define __GetAnimationCache_x                                      0x715930
#define __GetGaugeValueFromEQ_x                                    0x806E30
#define __GetLabelFromEQ_x                                         0x808910
#define __GetXTargetType_x                                         0x98A620
#define __HandleMouseWheel_x                                       0x6B13A0
#define __HeadingDiff_x                                            0x988C40
#define __HelpPath_x                                               0xF3F86C
#define __LoadFrontEnd_x                                           0x6AD7D0
#define __NewUIINI_x                                               0x806B00
#define __ProcessGameEvents_x                                      0x621E00
#define __ProcessKeyboardEvents_x                                  0x6AED20
#define __ProcessMouseEvents_x                                     0x621590
#define __SaveColors_x                                             0x55B060
#define __STMLToText_x                                             0x92C0C0
#define __WndProc_x                                                0x6AF780
#define CMemoryMappedFile__SetFile_x                               0xA77D20
#define CrashDetected_x                                            0x6AF280
#define DrawNetStatus_x                                            0x64E130
#define Expansion_HoT_x                                            0xEA17C0
#define Teleport_Table_Size_x                                      0xE98EB8
#define Teleport_Table_x                                           0xE99380
#define Util__FastTime_x                                           0x8F2F70
#define __eq_delete_x                                              0x990FCE
#define __eq_new_x                                                 0x991594
#define __CopyLayout_x                                             0x63C2B0
#define __ThrottleFrameRate_x                                      0x6255E0

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6BD690
#define CAAWnd__Update_x                                           0x6BC9B0
#define CAAWnd__UpdateSelected_x                                   0x6B9F00

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x490200
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x499200
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x498FD0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4937A0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x492BF0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x563220
#define AltAdvManager__IsAbilityReady_x                            0x561FC0
#define AltAdvManager__GetAAById_x                                 0x562350
#define AltAdvManager__CanTrainAbility_x                           0x5623C0
#define AltAdvManager__CanSeeAbility_x                             0x562720

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C70F0
#define CharacterZoneClient__CalcAffectChange_x                    0x4C59A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C5B80
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4BBA60
#define CharacterZoneClient__CharacterZoneClient_x                 0x4CAF70
#define CharacterZoneClient__FindAffectSlot_x                      0x4C46C0
#define CharacterZoneClient__FindItemByGuid_x                      0x4D8470
#define CharacterZoneClient__FindItemByRecord_x                    0x4D7EF0
#define CharacterZoneClient__GetCurrentMod_x                       0x4E5D70
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DA040
#define CharacterZoneClient__GetEffect_x                           0x4BB9A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C5800
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B1EE0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B3970
#define CharacterZoneClient__GetItemCountInInventory_x             0x4D9F60
#define CharacterZoneClient__GetItemCountWorn_x                    0x4D9E80
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C5850
#define CharacterZoneClient__GetMaxEffects_x                       0x4BF470
#define CharacterZoneClient__GetModCap_x                           0x4E5C70
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C5730
#define CharacterZoneClient__HasSkill_x                            0x4D5DF0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C25D0
#define CharacterZoneClient__MakeMeVisible_x                       0x4D7510

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6D6FC0
#define CBankWnd__WndNotification_x                                0x6D6DA0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x6E4760

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x9298A0
#define CButtonWnd__CButtonWnd_x                                   0x9284B0
#define CButtonWnd__dCButtonWnd_x                                  0x928790
#define CButtonWnd__vftable_x                                      0xB2E048

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x704B40
#define CChatWindowManager__InitContextMenu_x                      0x6FDC70
#define CChatWindowManager__FreeChatWindow_x                       0x703680
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E9750
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x7047C0
#define CChatWindowManager__CreateChatWindow_x                     0x703CC0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E9870

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x705370
#define CChatWindow__Clear_x                                       0x706630
#define CChatWindow__WndNotification_x                             0x706DC0
#define CChatWindow__AddHistory_x                                  0x705EF0

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x93CAA0
#define CContextMenu__dCContextMenu_x                              0x93CCE0
#define CContextMenu__AddMenuItem_x                                0x93CCF0
#define CContextMenu__RemoveMenuItem_x                             0x93D000
#define CContextMenu__RemoveAllMenuItems_x                         0x93D020
#define CContextMenu__CheckMenuItem_x                              0x93D0A0
#define CContextMenu__SetMenuItem_x                                0x93CF20
#define CContextMenu__AddSeparator_x                               0x93CE80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x93D640
#define CContextMenuManager__RemoveMenu_x                          0x93D6B0
#define CContextMenuManager__PopupMenu_x                           0x93D770
#define CContextMenuManager__Flush_x                               0x93D5E0
#define CContextMenuManager__GetMenu_x                             0x49B4D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x710280

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8CE070
#define CChatService__GetFriendName_x                              0x8CE080

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x939F00
#define CComboWnd__Draw_x                                          0x939400
#define CComboWnd__GetCurChoice_x                                  0x939D40
#define CComboWnd__GetListRect_x                                   0x9398B0
#define CComboWnd__GetTextRect_x                                   0x939F70
#define CComboWnd__InsertChoice_x                                  0x939A40
#define CComboWnd__SetColors_x                                     0x939A10
#define CComboWnd__SetChoice_x                                     0x939D10
#define CComboWnd__GetItemCount_x                                  0x939D50
#define CComboWnd__GetCurChoiceText_x                              0x939D90
#define CComboWnd__GetChoiceText_x                                 0x939D60
#define CComboWnd__InsertChoiceAtIndex_x                           0x939AD0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x70DC90
#define CContainerWnd__vftable_x                                   0xAFB49C
#define CContainerWnd__SetContainer_x                              0x70F1E0

// CDisplay
#define CDisplay__cameraType_x                                     0xDE6898
#define CDisplay__ZoneMainUI_x                                     0x555A10
#define CDisplay__PreZoneMainUI_x                                  0x555A20
#define CDisplay__CleanGameUI_x                                    0x55AE20
#define CDisplay__GetClickedActor_x                                0x54DE70
#define CDisplay__GetUserDefinedColor_x                            0x5464E0
#define CDisplay__GetWorldFilePath_x                               0x54F8E0
#define CDisplay__is3dON_x                                         0x54AAD0
#define CDisplay__ReloadUI_x                                       0x554F20
#define CDisplay__WriteTextHD2_x                                   0x54A8C0
#define CDisplay__TrueDistance_x                                   0x5515A0
#define CDisplay__SetViewActor_x                                   0x54D790
#define CDisplay__GetFloorHeight_x                                 0x54AB90
#define CDisplay__SetRenderWindow_x                                0x549510
#define CDisplay__ToggleScreenshotMode_x                           0x54D260
#define CDisplay__RealRender_World_x                               0x548970

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x95C880

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x93FFC0
#define CEditWnd__EnsureCaretVisible_x                             0x942190
#define CEditWnd__GetCaretPt_x                                     0x941140
#define CEditWnd__GetCharIndexPt_x                                 0x940EF0
#define CEditWnd__GetDisplayString_x                               0x940D90
#define CEditWnd__GetHorzOffset_x                                  0x93F670
#define CEditWnd__GetLineForPrintableChar_x                        0x942090
#define CEditWnd__GetSelStartPt_x                                  0x9411A0
#define CEditWnd__GetSTMLSafeText_x                                0x940BB0
#define CEditWnd__PointFromPrintableChar_x                         0x941CC0
#define CEditWnd__ReplaceSelection_x                               0x941930
#define CEditWnd__SelectableCharFromPoint_x                        0x941E30
#define CEditWnd__SetEditable_x                                    0x941270
#define CEditWnd__SetWindowTextA_x                                 0x940930

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x60F400
#define CEverQuest__ClickedPlayer_x                                0x6015B0
#define CEverQuest__CreateTargetIndicator_x                        0x61EF70
#define CEverQuest__DeleteTargetIndicator_x                        0x61F000
#define CEverQuest__DoTellWindow_x                                 0x4E9950
#define CEverQuest__OutputTextToLog_x                              0x4E9C20
#define CEverQuest__DropHeldItemOnGround_x                         0x5F6710
#define CEverQuest__dsp_chat_x                                     0x4E9FB0
#define CEverQuest__trimName_x                                     0x61B120
#define CEverQuest__Emote_x                                        0x60FC60
#define CEverQuest__EnterZone_x                                    0x609D60
#define CEverQuest__GetBodyTypeDesc_x                              0x6146B0
#define CEverQuest__GetClassDesc_x                                 0x614CF0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6152F0
#define CEverQuest__GetDeityDesc_x                                 0x61D7C0
#define CEverQuest__GetLangDesc_x                                  0x6154B0
#define CEverQuest__GetRaceDesc_x                                  0x614CD0
#define CEverQuest__InterpretCmd_x                                 0x61DD90
#define CEverQuest__LeftClickedOnPlayer_x                          0x5FA8A0
#define CEverQuest__LMouseUp_x                                     0x5F8C30
#define CEverQuest__RightClickedOnPlayer_x                         0x5FB180
#define CEverQuest__RMouseUp_x                                     0x5F9BB0
#define CEverQuest__SetGameState_x                                 0x5F64A0
#define CEverQuest__UPCNotificationFlush_x                         0x61B020
#define CEverQuest__IssuePetCommand_x                              0x6168C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x610980
#define CEverQuest__ReportSuccessfulHit_x                          0x610FB0

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x71F880
#define CGaugeWnd__CalcLinesFillRect_x                             0x71F8E0
#define CGaugeWnd__Draw_x                                          0x71EF00

// CGuild
#define CGuild__FindMemberByName_x                                 0x4AFC30
#define CGuild__GetGuildName_x                                     0x4AE6E0
#define CGuild__GetGuildIndex_x                                    0x4AECE0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x7394F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x630AB0
#define CHotButton__SetCheck_x                                     0x6306F0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x746580
#define CInvSlotMgr__MoveItem_x                                    0x745250
#define CInvSlotMgr__SelectSlot_x                                  0x746650

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x743A80
#define CInvSlot__SliderComplete_x                                 0x7417E0
#define CInvSlot__GetItemBase_x                                    0x741160
#define CInvSlot__UpdateItem_x                                     0x7412D0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x7480D0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x747270
#define CInvSlotWnd__HandleLButtonUp_x                             0x747C50

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x802190
#define CItemDisplayWnd__UpdateStrings_x                           0x7567F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x750470
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x7509A0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x756DF0
#define CItemDisplayWnd__AboutToShow_x                             0x756430
#define CItemDisplayWnd__WndNotification_x                         0x758060
#define CItemDisplayWnd__RequestConvertItem_x                      0x7579A0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x7554A0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x756250

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x832C50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x75C570

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x519930

// CLabel
#define CLabel__Draw_x                                             0x761FF0

// CListWnd
#define CListWnd__CListWnd_x                                       0x9125C0
#define CListWnd__dCListWnd_x                                      0x9128E0
#define CListWnd__vftable_x                                        0xB2D920
#define CListWnd__AddColumn_x                                      0x916D30
#define CListWnd__AddColumn1_x                                     0x916D80
#define CListWnd__AddLine_x                                        0x917110
#define CListWnd__AddString_x                                      0x916F10
#define CListWnd__CalculateFirstVisibleLine_x                      0x916AF0
#define CListWnd__CalculateVSBRange_x                              0x9168D0
#define CListWnd__ClearSel_x                                       0x9178F0
#define CListWnd__ClearAllSel_x                                    0x917950
#define CListWnd__CloseAndUpdateEditWindow_x                       0x918370
#define CListWnd__Compare_x                                        0x916210
#define CListWnd__Draw_x                                           0x912A10
#define CListWnd__DrawColumnSeparators_x                           0x9151F0
#define CListWnd__DrawHeader_x                                     0x915650
#define CListWnd__DrawItem_x                                       0x915B50
#define CListWnd__DrawLine_x                                       0x915350
#define CListWnd__DrawSeparator_x                                  0x915290
#define CListWnd__EnableLine_x                                     0x914AD0
#define CListWnd__EnsureVisible_x                                  0x918290
#define CListWnd__ExtendSel_x                                      0x917820
#define CListWnd__GetColumnTooltip_x                               0x914610
#define CListWnd__GetColumnMinWidth_x                              0x914680
#define CListWnd__GetColumnWidth_x                                 0x914580
#define CListWnd__GetCurSel_x                                      0x913F10
#define CListWnd__GetItemAtPoint_x                                 0x914D40
#define CListWnd__GetItemAtPoint1_x                                0x914DB0
#define CListWnd__GetItemData_x                                    0x913F90
#define CListWnd__GetItemHeight_x                                  0x914350
#define CListWnd__GetItemIcon_x                                    0x914120
#define CListWnd__GetItemRect_x                                    0x914BC0
#define CListWnd__GetItemText_x                                    0x913FD0
#define CListWnd__GetSelList_x                                     0x9179A0
#define CListWnd__GetSeparatorRect_x                               0x914FF0
#define CListWnd__InsertLine_x                                     0x917500
#define CListWnd__RemoveLine_x                                     0x917650
#define CListWnd__SetColors_x                                      0x9168B0
#define CListWnd__SetColumnJustification_x                         0x9165E0
#define CListWnd__SetColumnLabel_x                                 0x916EB0
#define CListWnd__SetColumnWidth_x                                 0x916500
#define CListWnd__SetCurSel_x                                      0x917760
#define CListWnd__SetItemColor_x                                   0x917F40
#define CListWnd__SetItemData_x                                    0x917F00
#define CListWnd__SetItemText_x                                    0x917B10
#define CListWnd__ShiftColumnSeparator_x                           0x9166A0
#define CListWnd__Sort_x                                           0x916390
#define CListWnd__ToggleSel_x                                      0x917790
#define CListWnd__SetColumnsSizable_x                              0x916750
#define CListWnd__SetItemWnd_x                                     0x917DC0
#define CListWnd__GetItemWnd_x                                     0x914170
#define CListWnd__SetItemIcon_x                                    0x917B90
#define CListWnd__CalculateCustomWindowPositions_x                 0x916BF0
#define CListWnd__SetVScrollPos_x                                  0x9164E0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x777650

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x772B40
#define MapViewMap__dMapViewMap_x                                  0x772C90
#define MapViewMap__vftable_x                                      0xB02A58
#define MapViewMap__Clear_x                                        0x7734C0
#define MapViewMap__SaveEx_x                                       0x776880
#define MapViewMap__SetZoom_x                                      0x77AF50
#define MapViewMap__HandleLButtonDown_x                            0x772DA0
#define MapViewMap__GetWorldCoordinates_x                          0x775D60

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x797AC0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7983A0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7988D0
#define CMerchantWnd__SelectRecoverySlot_x                         0x79B880
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x796640
#define CMerchantWnd__SelectBuySellSlot_x                          0x7A1440
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7976E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x89C0B0
#define CPacketScrambler__hton_x                                   0x89C0A0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x935A40
#define CSidlManagerBase__CreatePageWnd_x                          0x935230
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x9314C0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x931450
#define CSidlManagerBase__FindAnimation1_x                         0x9316A0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x931AB0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x9318A0
#define CSidlManagerBase__CreateLabel_x                            0x7F9380
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x934A10
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x934BE0
#define CSidlManagerBase__CreateXWnd_x                             0x7F92B0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x7F9880

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x92E180
#define CSidlScreenWnd__CalculateVSBRange_x                        0x92E080
#define CSidlScreenWnd__ConvertToRes_x                             0x957370
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92DB70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92D860
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92D930
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92DA00
#define CSidlScreenWnd__DrawSidlPiece_x                            0x92E620
#define CSidlScreenWnd__EnableIniStorage_x                         0x92EAF0
#define CSidlScreenWnd__GetChildItem_x                             0x92EA70
#define CSidlScreenWnd__GetSidlPiece_x                             0x92E810
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91E150
#define CSidlScreenWnd__Init1_x                                    0x92D460
#define CSidlScreenWnd__LoadIniInfo_x                              0x92EB40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x92F680
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92C870
#define CSidlScreenWnd__m_layoutCopy_x                             0x15D5AF0
#define CSidlScreenWnd__StoreIniInfo_x                             0x92F200
#define CSidlScreenWnd__StoreIniVis_x                              0x92F560
#define CSidlScreenWnd__vftable_x                                  0xB2E2D8
#define CSidlScreenWnd__WndNotification_x                          0x92E530

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6961F0
#define CSkillMgr__GetSkillCap_x                                   0x6963D0
#define CSkillMgr__GetNameToken_x                                  0x695970
#define CSkillMgr__IsActivatedSkill_x                              0x695AB0
#define CSkillMgr__IsCombatSkill_x                                 0x6959F0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x93E440
#define CSliderWnd__SetValue_x                                     0x93E2B0
#define CSliderWnd__SetNumTicks_x                                  0x93E310

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x7FF4D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x946D90
#define CStmlWnd__CalculateHSBRange_x                              0x947EB0
#define CStmlWnd__CalculateVSBRange_x                              0x947E20
#define CStmlWnd__CanBreakAtCharacter_x                            0x94C1E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x94CE70
#define CStmlWnd__ForceParseNow_x                                  0x947380
#define CStmlWnd__GetNextTagPiece_x                                0x94C140
#define CStmlWnd__GetSTMLText_x                                    0x50AC20
#define CStmlWnd__GetVisibleText_x                                 0x9473A0
#define CStmlWnd__InitializeWindowVariables_x                      0x94CCC0
#define CStmlWnd__MakeStmlColorTag_x                               0x946400
#define CStmlWnd__MakeWndNotificationTag_x                         0x946470
#define CStmlWnd__SetSTMLText_x                                    0x9454B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x94DF40
#define CStmlWnd__UpdateHistoryString_x                            0x94D080

// CTabWnd
#define CTabWnd__Draw_x                                            0x944600
#define CTabWnd__DrawCurrentPage_x                                 0x944D30
#define CTabWnd__DrawTab_x                                         0x944A50
#define CTabWnd__GetCurrentPage_x                                  0x943E00
#define CTabWnd__GetCurrentTabIndex_x                              0x943DF0
#define CTabWnd__GetPageFromTabIndex_x                             0x944990
#define CTabWnd__GetPageInnerRect_x                                0x944040
#define CTabWnd__GetTabInnerRect_x                                 0x943F80
#define CTabWnd__GetTabRect_x                                      0x943E30
#define CTabWnd__InsertPage_x                                      0x944250
#define CTabWnd__RemovePage_x                                      0x9443C0
#define CTabWnd__SetPage_x                                         0x9440C0
#define CTabWnd__SetPageRect_x                                     0x944540
#define CTabWnd__UpdatePage_x                                      0x944910

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x9439A0
#define CPageWnd__GetTabText_x                                     0x75C980
#define CPageWnd__SetTabText_x                                     0x943940


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A8F80

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91AFF0
#define CTextureFont__DrawWrappedText1_x                           0x91AF20
#define CTextureFont__DrawWrappedText2_x                           0x91B040
#define CTextureFont__GetTextExtent_x                              0x91B1B0

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x6AA370
#define CHtmlComponentWnd__ValidateUri_x                           0x73AEE0
#define CHtmlWnd__SetClientCallbacks_x                             0x635B20
#define CHtmlWnd__AddObserver_x                                    0x635B40
#define CHtmlWnd__RemoveObserver_x                                 0x635BA0
#define Window__getProgress_x                                      0x851270
#define Window__getStatus_x                                        0x851290
#define Window__getURI_x                                           0x8512A0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x954180

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x9081B0

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E9640
#define CXStr__CXStr1_x                                            0x4813D0
#define CXStr__CXStr3_x                                            0x8EF320
#define CXStr__dCXStr_x                                            0x477F60
#define CXStr__operator_equal_x                                    0x8EF550
#define CXStr__operator_equal1_x                                   0x8EF590
#define CXStr__operator_plus_equal1_x                              0x8F0020
#define CXStr__SetString_x                                         0x8F1F10
#define CXStr__operator_char_p_x                                   0x8EFA90
#define CXStr__GetChar_x                                           0x8F1860
#define CXStr__Delete_x                                            0x8F1110
#define CXStr__GetUnicode_x                                        0x8F18D0
#define CXStr__GetLength_x                                         0x4A8D30
#define CXStr__Mid_x                                               0x47D280
#define CXStr__Insert_x                                            0x8F1930
#define CXStr__FindNext_x                                          0x8F1580
#define CXStr__gFreeLists_x                                        0xC84C68
#define CXStr__gCXStrAccess_x                                      0x15D5354

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x93C6C0

// CXWnd
#define CXWnd__BringToTop_x                                        0x921900
#define CXWnd__Center_x                                            0x921480
#define CXWnd__ClrFocus_x                                          0x9212A0
#define CXWnd__Destroy_x                                           0x921340
#define CXWnd__DoAllDrawing_x                                      0x91D8F0
#define CXWnd__DrawChildren_x                                      0x91D8C0
#define CXWnd__DrawColoredRect_x                                   0x91DD40
#define CXWnd__DrawTooltip_x                                       0x91C410
#define CXWnd__DrawTooltipAtPoint_x                                0x91C4D0
#define CXWnd__GetBorderFrame_x                                    0x91DBA0
#define CXWnd__GetChildItem_x                                      0x921B10
#define CXWnd__GetChildWndAt_x                                     0x9219A0
#define CXWnd__GetClientClipRect_x                                 0x91FB90
#define CXWnd__GetRelativeRect_x                                   0x91FEE0
#define CXWnd__GetScreenClipRect_x                                 0x91FC60
#define CXWnd__GetScreenRect_x                                     0x91FE20
#define CXWnd__GetTooltipRect_x                                    0x91DD90
#define CXWnd__GetWindowTextA_x                                    0x49CBF0
#define CXWnd__IsActive_x                                          0x91E4D0
#define CXWnd__IsDescendantOf_x                                    0x920810
#define CXWnd__IsReallyVisible_x                                   0x920840
#define CXWnd__IsType_x                                            0x922010
#define CXWnd__Minimize_x                                          0x920F30
#define CXWnd__Move_x                                              0x9208A0
#define CXWnd__Move1_x                                             0x920950
#define CXWnd__ProcessTransition_x                                 0x921430
#define CXWnd__Refade_x                                            0x920C30
#define CXWnd__Resize_x                                            0x920EC0
#define CXWnd__Right_x                                             0x9216C0
#define CXWnd__SetFocus_x                                          0x921260
#define CXWnd__SetFont_x                                           0x9212D0
#define CXWnd__SetKeyTooltip_x                                     0x921E30
#define CXWnd__SetMouseOver_x                                      0x91ED00
#define CXWnd__SetParent_x                                         0x9205C0
#define CXWnd__StartFade_x                                         0x920700
#define CXWnd__vftable_x                                           0xB2DD64
#define CXWnd__CXWnd_x                                             0x91B4D0
#define CXWnd__dCXWnd_x                                            0x91B9F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9583F0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x924830
#define CXWndManager__DrawWindows_x                                0x924850
#define CXWndManager__GetKeyboardFlags_x                           0x927040
#define CXWndManager__HandleKeyboardMsg_x                          0x926BF0
#define CXWndManager__RemoveWnd_x                                  0x927260
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9277C0

// CDBStr
#define CDBStr__GetString_x                                        0x5454B0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4DA850
#define CharacterZoneClient__CastSpell_x                           0x4BFBD0
#define CharacterZoneClient__Cur_HP_x                              0x4D2E30
#define CharacterZoneClient__Cur_Mana_x                            0x4DA540
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D5BB0
#define CharacterZoneClient__GetBaseSkill_x                        0x4D6B50
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C2C40
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E0A10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B35B0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B3700
#define CharacterZoneClient__GetHPRegen_x                          0x4E0410
#define CharacterZoneClient__GetManaRegen_x                        0x4E0E50
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C3990
#define CharacterZoneClient__Max_Endurance_x                       0x65C8F0
#define CharacterZoneClient__Max_HP_x                              0x4D2C60
#define CharacterZoneClient__Max_Mana_x                            0x65C6F0
#define CharacterZoneClient__SpellDuration_x                       0x4C34C0
#define CharacterZoneClient__TotalEffect_x                         0x4C69E0
#define CharacterZoneClient__UseSkill_x                            0x4E2C50

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8BB170

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x672BF0

// PcClient
#define PcClient__PcClient_x                                       0x6527A0
#define PcClient__GetConLevel_x                                    0x655040

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BA610
#define CCharacterListWnd__EnterWorld_x                            0x4B9FE0
#define CCharacterListWnd__Quit_x                                  0x4B9D30
#define CCharacterListWnd__UpdateList_x                            0x4BA1D0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x636D00
#define EQ_Item__CreateItemTagString_x                             0x895610
#define EQ_Item__IsStackable_x                                     0x89A320
#define EQ_Item__GetImageNum_x                                     0x8971D0
#define EQ_Item__CreateItemClient_x                                0x635F40
#define EQ_Item__GetItemValue_x                                    0x8984C0
#define EQ_Item__ValueSellMerchant_x                               0x89BC90
#define EQ_Item__IsKeyRingItem_x                                   0x899C20
#define EQ_Item__CanGoInBag_x                                      0x636E20
#define EQ_Item__IsEmpty_x                                         0x899790
#define EQ_Item__GetMaxItemCount_x                                 0x8988E0
#define EQ_Item__GetHeldItem_x                                     0x8970A0
#define EQ_Item__GetAugmentFitBySlot_x                             0x894E60
#define ItemClient__ItemClient_x                                   0x5B65F0
#define ItemClient__dItemClient_x                                  0x635E90

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x563F40
#define EQ_LoadingS__Array_x                                       0xC0EC68

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8A4D90
#define EQ_PC__GetCombatAbility_x                                  0x8A5400
#define EQ_PC__GetCombatAbilityTimer_x                             0x8A5470
#define EQ_PC__GetItemRecastTimer_x                                0x65F260
#define EQ_PC__HasLoreItem_x                                       0x655850
#define EQ_PC__AlertInventoryChanged_x                             0x654970
#define EQ_PC__GetPcZoneClient_x                                   0x681C30
#define EQ_PC__RemoveMyAffect_x                                    0x662490
#define EQ_PC__GetKeyRingItems_x                                   0x8A5D00
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8A5A90
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8A6000

// EQItemList
#define EQItemList__EQItemList_x                                   0x5BE730
#define EQItemList__add_object_x                                   0x5EBDC0
#define EQItemList__add_item_x                                     0x5BEC90
#define EQItemList__delete_item_x                                  0x5BECE0
#define EQItemList__FreeItemList_x                                 0x5BEBE0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x542090

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x6744F0
#define EQPlayer__dEQPlayer_x                                      0x667830
#define EQPlayer__DoAttack_x                                       0x67C3D0
#define EQPlayer__EQPlayer_x                                       0x667EF0
#define EQPlayer__SetNameSpriteState_x                             0x66C200
#define EQPlayer__SetNameSpriteTint_x                              0x66D0E0
#define PlayerBase__HasProperty_j_x                                0x986FE0
#define EQPlayer__IsTargetable_x                                   0x987480
#define EQPlayer__CanSee_x                                         0x9872E0
#define EQPlayer__CanSee1_x                                        0x9873B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9870A0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x67F6D0
#define PlayerZoneClient__GetLevel_x                               0x681C70
#define PlayerZoneClient__IsValidTeleport_x                        0x5ECF30
#define PlayerZoneClient__LegalPlayerRace_x                        0x55CC50

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x6772C0
#define EQPlayerManager__GetSpawnByName_x                          0x677370
#define EQPlayerManager__GetPlayerFromPartialName_x                0x677400

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x63A510
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x63A590
#define KeypressHandler__AttachKeyToEqCommand_x                    0x63A5D0
#define KeypressHandler__ClearCommandStateArray_x                  0x63B9C0
#define KeypressHandler__HandleKeyDown_x                           0x63B9E0
#define KeypressHandler__HandleKeyUp_x                             0x63BA80
#define KeypressHandler__SaveKeymapping_x                          0x63BED0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8B91E0

// StringTable
#define StringTable__getString_x                                   0x8B3FF0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x65ECE0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x65D1F0
#define PcZoneClient__GetPcSkillLimit_x                            0x662100
#define PcZoneClient__RemovePetEffect_x                            0x662730
#define PcZoneClient__HasAlternateAbility_x                        0x65C520
#define PcZoneClient__CanEquipItem_x                               0x65CBD0
#define PcZoneClient__GetItemByID_x                                0x65F6D0
#define PcZoneClient__GetItemByItemClass_x                         0x65F820
#define PcZoneClient__RemoveBuffEffect_x                           0x662750
#define PcZoneClient__BandolierSwap_x                              0x65D7B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x65F200

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F1AF0

// IconCache
#define IconCache__GetIcon_x                                       0x715330

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x70CE30
#define CContainerMgr__CloseContainer_x                            0x70D100
#define CContainerMgr__OpenExperimentContainer_x                   0x70DB80

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7CBBB0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x62EED0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x769A70
#define CLootWnd__RequestLootSlot_x                                0x768D50

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x58B780
#define EQ_Spell__SpellAffects_x                                   0x58BBF0
#define EQ_Spell__SpellAffectBase_x                                0x58B9B0
#define EQ_Spell__IsStackable_x                                    0x4CA850
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4CA6A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B7890
#define EQ_Spell__IsSPAStacking_x                                  0x58CA40
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x58BF50
#define EQ_Spell__IsNoRemove_x                                     0x4CA830
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58CA50
#define __IsResEffectSpell_x                                       0x4C9A30

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4AD160

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8C3700

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x812890
#define CTargetWnd__WndNotification_x                              0x8120D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x8123A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x811240

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x816F00
#define CTaskWnd__ConfirmAbandonTask_x                             0x819B40

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x53FAA0
#define CTaskManager__HandleMessage_x                              0x53DEF0
#define CTaskManager__GetTaskStatus_x                              0x53FB50
#define CTaskManager__GetElementDescription_x                      0x53FBD0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5868D0
#define EqSoundManager__PlayScriptMp3_x                            0x586B90
#define EqSoundManager__SoundAssistPlay_x                          0x69A0E0
#define EqSoundManager__WaveInstancePlay_x                         0x699650

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x530E60

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x943050
#define CTextureAnimation__SetCurCell_x                            0x942E50

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56BA60
#define CAltAbilityData__GetMercMaxRank_x                          0x56B9F0
#define CAltAbilityData__GetMaxRank_x                              0x560E40

// CTargetRing
#define CTargetRing__Cast_x                                        0x62CFE0

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x517A70
#define CharacterBase__CreateItemIndex_x                           0x6350C0
#define CharacterBase__GetItemByGlobalIndex_x                      0x8CBD60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8CBDC0
#define CharacterBase__GetItemPossession_x                         0x5035E0
#define CharacterBase__GetMemorizedSpell_x                         0x4CA680
#define CharacterBase__IsExpansionFlag_x                           0x5B8300

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x6F3DC0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x6F45F0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x6F46A0

// messages
#define msg_spell_worn_off_x                                       0x5B0280
#define msg_new_text_x                                             0x5A4C00
#define __msgTokenTextParam_x                                      0x5B2520
#define msgTokenText_x                                             0x5B2770

// SpellManager
#define SpellManager__vftable_x                                    0xAD72C4
#define SpellManager__SpellManager_x                               0x69D410
#define Spellmanager__LoadTextSpells_x                             0x69DD00
#define SpellManager__GetSpellByGroupAndRank_x                     0x69D5E0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x98AF10

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8C40A0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8C4320

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x762330

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x711520
#define CCursorAttachment__AttachToCursor1_x                       0x711560
#define CCursorAttachment__Deactivate_x                            0x712550

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x952350
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x952AD0
#define CEQSuiteTextureLoader__GetTexture_x                        0x952790

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x514FF0
#define CFindItemWnd__WndNotification_x                            0x515AD0
#define CFindItemWnd__Update_x                                     0x516640
#define CFindItemWnd__PickupSelectedItem_x                         0x514820

// IString
#define IString__Append_x                                          0x504EF0

// Camera
#define EverQuest__Cameras_x                                       0xEA1B0C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x51DA90
#define LootFiltersManager__GetItemFilterData_x                    0x51D3A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51D3D0
#define LootFiltersManager__SetItemLootFilter_x                    0x51D5F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7B99B0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x990A40
#define CResolutionHandler__GetWindowedStyle_x                     0x694BF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x709AE0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8D96A0
#define CDistillerInfo__Instance_x                                 0x8D9640

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x728840
#define CGroupWnd__UpdateDisplay_x                                 0x727BA0

// ItemBase
#define ItemBase__IsLore_x                                         0x899CD0
#define ItemBase__IsLoreEquipped_x                                 0x899D50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5EBD20
#define EQPlacedItemManager__GetItemByGuid_x                       0x5EBE60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5EBEC0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x68A350
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x68DCE0

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50B340

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F75B0
#define FactionManagerClient__HandleFactionMessage_x               0x4F7C20
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4F8220
#define FactionManagerClient__GetMaxFaction_x                      0x4F823F
#define FactionManagerClient__GetMinFaction_x                      0x4F81F0

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x5035B0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x91A010

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49BED0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x503900

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x56AF00

// CTargetManager
#define CTargetManager__Get_x                                      0x6A0C50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x68A350

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A8D40

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5BEB80

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF3F1A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x904700

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x482EF0

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

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x1008A520
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x10019940
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x1007C7F0
#define EQMain__LoginController__FlushDxKeyboard_x                 0x10015270
#define EQMain__LoginController__GiveTime_x                        0x100152D0
#define EQMain__LoginServerAPI__JoinServer_x                       0x10016DA0
#define EQMain__WndProc_x                                          0x1000BFB0

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x10166D38
#define EQMain__pinstCLoginViewManager_x                           0x1016D3B4
#define EQMain__pinstCXWndManager_x                                0x1037F8AC
#define EQMain__pinstCSidlManager_x                                0x1037F8B0
#define EQMain__pinstLoginController_x                             0x1016D3B8
#define EQMain__pinstLoginServerAPI_x                              0x1016D3A8
