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
#define __ExpectedVersionDate                                     "Feb 11 2021"
#define __ExpectedVersionTime                                     "12:44:52"
#define __ActualVersionDate_x                                      0xB45EE4
#define __ActualVersionTime_x                                      0xB45ED8
#define __ActualVersionBuild_x                                     0xB360C4

// Memory Protection
#define __MemChecker0_x                                            0x663CD0
#define __MemChecker1_x                                            0x945230
#define __MemChecker2_x                                            0x6DE100
#define __MemChecker3_x                                            0x6DE070
#define __MemChecker4_x                                            0x8987B0
#define __EncryptPad0_x                                            0xE46F40
#define __EncryptPad1_x                                            0xEA1740
#define __EncryptPad2_x                                            0xE56158
#define __EncryptPad3_x                                            0xE55D58
#define __EncryptPad4_x                                            0xE92550
#define __EncryptPad5_x                                            0xF95020
#define __AC1_x                                                    0x8533B0
#define __AC2_x                                                    0x618BDF
#define __AC3_x                                                    0x61FFC1
#define __AC4_x                                                    0x624130
#define __AC5_x                                                    0x62A9EF
#define __AC6_x                                                    0x62F136
#define __AC7_x                                                    0x618640
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x24D588

// Direct Input
#define DI8__Main_x                                                0xF950CC
#define DI8__Keyboard_x                                            0xF950D0
#define DI8__Mouse_x                                               0xF9502C
#define DI8__Mouse_Copy_x                                          0xDA1D7C
#define DI8__Mouse_Check_x                                         0xF92B74
#define __AutoSkillArray_x                                         0xDA2C98
#define __Attack_x                                                 0xE40AC7
#define __Autofire_x                                               0xE40AC8
#define __BindList_x                                               0xD97448
#define g_eqCommandStates_x                                        0xD981B0
#define __Clicks_x                                                 0xDA1E34
#define __CommandList_x                                            0xD98D38
#define __CurrentMapLabel_x                                        0xFA5ACC
#define __CurrentSocial_x                                          0xC5246C
#define __DoAbilityList_x                                          0xDD85E8
#define __do_loot_x                                                0x5E1760
#define __DrawHandler_x                                            0x1614820
#define __GroupCount_x                                             0xF8813A
#define __Guilds_x                                                 0xF8C610
#define __gWorld_x                                                 0xF8834C
#define __HWnd_x                                                   0xF95000
#define __heqmain_x                                                0xF95008
#define __InChatMode_x                                             0xDA1D64
#define __LastTell_x                                               0xDA3CE4
#define __LMouseHeldTime_x                                         0xDA1EA0
#define __Mouse_x                                                  0xF950B8
#define __MouseLook_x                                              0xDA1DFA
#define __MouseEventTime_x                                         0xF8E03C
#define __gpbCommandEvent_x                                        0xF88458
#define __NetStatusToggle_x                                        0xDA1DFD
#define __PCNames_x                                                0xDA3294
#define __RangeAttackReady_x                                       0xDA2F7C
#define __RMouseHeldTime_x                                         0xDA1E9C
#define __RunWalkState_x                                           0xDA1D68
#define __ScreenMode_x                                             0xED445C
#define __ScreenX_x                                                0xDA1D1C
#define __ScreenY_x                                                0xDA1D18
#define __ScreenXMax_x                                             0xDA1D20
#define __ScreenYMax_x                                             0xDA1D24
#define __ServerHost_x                                             0xF88623
#define __ServerName_x                                             0xDD85A8
#define __ShiftKeyDown_x                                           0xDA23F8
#define __ShowNames_x                                              0xDA3138
#define __SocialChangedList_x                                      0xDD8630
#define __Socials_x                                                0xDD86A8
#define __SubscriptionType_x                                       0xFD9BA8
#define __TargetAggroHolder_x                                      0xFA8480
#define __ZoneType_x                                               0xDA21F8
#define __GroupAggro_x                                             0xFA84C0
#define __LoginName_x                                              0xF9579C
#define __Inviter_x                                                0xE40A44
#define __AttackOnAssist_x                                         0xDA30F4
#define __UseTellWindows_x                                         0xDA342C
#define __gfMaxZoomCameraDistance_x                                0xB3DDC8
#define __gfMaxCameraDistance_x                                    0xB66504
#define __pulAutoRun_x                                             0xDA1E18
#define __pulForward_x                                             0xDA3464
#define __pulBackward_x                                            0xDA3468
#define __pulTurnRight_x                                           0xDA346C
#define __pulTurnLeft_x                                            0xDA3470
#define __pulStrafeLeft_x                                          0xDA3474
#define __pulStrafeRight_x                                         0xDA3478

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xF889A8
#define instEQZoneInfo_x                                           0xDA1FF0
#define pinstActiveBanker_x                                        0xF88944
#define pinstActiveCorpse_x                                        0xF8893C
#define pinstActiveGMaster_x                                       0xF88940
#define pinstActiveMerchant_x                                      0xF88938
#define pinstAltAdvManager_x                                       0xED52A0
#define pinstBandageTarget_x                                       0xF88954
#define pinstCamActor_x                                            0xED4450
#define pinstCDBStr_x                                              0xED4028
#define pinstCDisplay_x                                            0xF860B4
#define pinstCEverQuest_x                                          0xF95034
#define pinstEverQuestInfo_x                                       0xDA1D10
#define pinstCharData_x                                            0xF860A4
#define pinstCharSpawn_x                                           0xF8898C
#define pinstControlledMissile_x                                   0xF88998
#define pinstControlledPlayer_x                                    0xF8898C
#define pinstCResolutionHandler_x                                  0x1614A48
#define pinstCSidlManager_x                                        0x16139E4
#define pinstCXWndManager_x                                        0x16139DC
#define instDynamicZone_x                                          0xF8C4E8
#define pinstDZMember_x                                            0xF8C5F8
#define pinstDZTimerInfo_x                                         0xF8C5FC
#define pinstEqLogin_x                                             0xF950E8
#define instEQMisc_x                                               0xD8B8D8
#define pinstEQSoundManager_x                                      0xED5BB0
#define pinstEQSpellStrings_x                                      0xEC4CC8
#define instExpeditionLeader_x                                     0xF8C532
#define instExpeditionName_x                                       0xF8C572
#define pinstSGraphicsEngine_x                                     0x1614814
#define pinstGroup_x                                               0xF88136
#define pinstImeManager_x                                          0x16139E0
#define pinstLocalPlayer_x                                         0xF88934
#define pinstMercenaryData_x                                       0xF8FB34
#define pinstMercenaryStats_x                                      0xFA854C
#define pinstModelPlayer_x                                         0xF8894C
#define pinstPCData_x                                              0xF860A4
#define pinstSkillMgr_x                                            0xF91C20
#define pinstSpawnManager_x                                        0xF906F8
#define pinstSpellManager_x                                        0xF91E60
#define pinstSpellSets_x                                           0xE396F0
#define pinstStringTable_x                                         0xF860AC
#define pinstSwitchManager_x                                       0xF85F48
#define pinstTarget_x                                              0xF88988
#define pinstTargetObject_x                                        0xF8609C
#define pinstTargetSwitch_x                                        0xF860A0
#define pinstTaskMember_x                                          0xD8B420
#define pinstTrackTarget_x                                         0xF88990
#define pinstTradeTarget_x                                         0xF88948
#define instTributeActive_x                                        0xD8B8F9
#define pinstViewActor_x                                           0xED444C
#define pinstWorldData_x                                           0xF860B0
#define pinstZoneAddr_x                                            0xDA2290
#define pinstPlayerPath_x                                          0xF90790
#define pinstTargetIndicator_x                                     0xF920C8
#define EQObject_Top_x                                             0xF86098

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xED4490
#define pinstCAchievementsWnd_x                                    0xED4120
#define pinstCActionsWnd_x                                         0xED4420
#define pinstCAdvancedDisplayOptionsWindow_x                       0xED442C
#define pinstCAdvancedLootWnd_x                                    0xED4424
#define pinstCAdventureLeaderboardWnd_x                            0xF9F2F0
#define pinstCAdventureRequestWnd_x                                0xF9F3A0
#define pinstCAdventureStatsWnd_x                                  0xF9F450
#define pinstCAggroMeterWnd_x                                      0xED41A8
#define pinstCAlarmWnd_x                                           0xED4488
#define pinstCAlertHistoryWnd_x                                    0xED420C
#define pinstCAlertStackWnd_x                                      0xED41DC
#define pinstCAlertWnd_x                                           0xED41E0
#define pinstCAltStorageWnd_x                                      0xF9F7B0
#define pinstCAudioTriggersWindow_x                                0xEB6FF8
#define pinstCAuraWnd_x                                            0xED4468
#define pinstCAvaZoneWnd_x                                         0xED4108
#define pinstCBandolierWnd_x                                       0xED4478
#define pinstCBankWnd_x                                            0xED41E8
#define pinstCBarterMerchantWnd_x                                  0xFA09F0
#define pinstCBarterSearchWnd_x                                    0xFA0AA0
#define pinstCBarterWnd_x                                          0xFA0B50
#define pinstCBazaarConfirmationWnd_x                              0xED44A8
#define pinstCBazaarSearchWnd_x                                    0xED4130
#define pinstCBazaarWnd_x                                          0xED40E8
#define pinstCBlockedBuffWnd_x                                     0xED416C
#define pinstCBlockedPetBuffWnd_x                                  0xED4174
#define pinstCBodyTintWnd_x                                        0xED44BC
#define pinstCBookWnd_x                                            0xED4200
#define pinstCBreathWnd_x                                          0xED4494
#define pinstCBuffWindowNORMAL_x                                   0xED4164
#define pinstCBuffWindowSHORT_x                                    0xED4168
#define pinstCBugReportWnd_x                                       0xED411C
#define pinstCButtonWnd_x                                          0x1613C48
#define pinstCCastingWnd_x                                         0xED41A4
#define pinstCCastSpellWnd_x                                       0xED41B4
#define pinstCCharacterListWnd_x                                   0xED4148
#define pinstCChatWindowManager_x                                  0xFA15F8
#define pinstCClaimWnd_x                                           0xFA1750
#define pinstCColorPickerWnd_x                                     0xED415C
#define pinstCCombatAbilityWnd_x                                   0xED4438
#define pinstCCombatSkillsSelectWnd_x                              0xED443C
#define pinstCCompassWnd_x                                         0xED446C
#define pinstCConfirmationDialog_x                                 0xFA6618
#define pinstCContainerMgr_x                                       0xED449C
#define pinstCContextMenuManager_x                                 0x1613998
#define pinstCCursorAttachment_x                                   0xED419C
#define pinstCDynamicZoneWnd_x                                     0xFA1D18
#define pinstCEditLabelWnd_x                                       0xED40FC
#define pinstCEQMainWnd_x                                          0xFA1F60
#define pinstCEventCalendarWnd_x                                   0xED448C
#define pinstCExtendedTargetWnd_x                                  0xED41A0
#define pinstCPlayerCustomizationWnd_x                             0xED414C
#define pinstCFactionWnd_x                                         0xED41B0
#define pinstCFellowshipWnd_x                                      0xFA2160
#define pinstCFileSelectionWnd_x                                   0xED4444
#define pinstCFindItemWnd_x                                        0xED44C8
#define pinstCFindLocationWnd_x                                    0xFA22B8
#define pinstCFriendsWnd_x                                         0xED4440
#define pinstCGemsGameWnd_x                                        0xED4480
#define pinstCGiveWnd_x                                            0xED40F0
#define pinstCGroupSearchFiltersWnd_x                              0xED417C
#define pinstCGroupSearchWnd_x                                     0xFA26B0
#define pinstCGroupWnd_x                                           0xFA2760
#define pinstCGuildBankWnd_x                                       0xFA2810
#define pinstCGuildCreationWnd_x                                   0xFA28C0
#define pinstCGuildMgmtWnd_x                                       0xFA2970
#define pinstCharacterCreation_x                                   0xED4198
#define pinstCHelpWnd_x                                            0xED41D8
#define pinstCHeritageSelectionWnd_x                               0xED4150
#define pinstCHotButtonWnd_x                                       0xFA4AC8
#define pinstCHotButtonWnd1_x                                      0xFA4AC8
#define pinstCHotButtonWnd2_x                                      0xFA4ACC
#define pinstCHotButtonWnd3_x                                      0xFA4AD0
#define pinstCHotButtonWnd4_x                                      0xFA4AD4
#define pinstCIconSelectionWnd_x                                   0xED4118
#define pinstCInspectWnd_x                                         0xED4110
#define pinstCInventoryWnd_x                                       0xED41D4
#define pinstCInvSlotMgr_x                                         0xED4498
#define pinstCItemDisplayManager_x                                 0xFA5020
#define pinstCItemExpTransferWnd_x                                 0xFA5154
#define pinstCItemOverflowWnd_x                                    0xED40D0
#define pinstCJournalCatWnd_x                                      0xED44AC
#define pinstCJournalNPCWnd_x                                      0xED44A4
#define pinstCJournalTextWnd_x                                     0xED44A4
#define pinstCKeyRingWnd_x                                         0xED41E4
#define pinstCLargeDialogWnd_x                                     0xFA7298
#define pinstCLayoutCopyWnd_x                                      0xFA54A0
#define pinstCLFGuildWnd_x                                         0xFA5550
#define pinstCLoadskinWnd_x                                        0xED4484
#define pinstCLootFiltersCopyWnd_x                                 0xED3538
#define pinstCLootFiltersWnd_x                                     0xED44B0
#define pinstCLootSettingsWnd_x                                    0xED44B4
#define pinstCLootWnd_x                                            0xED4214
#define pinstCMailAddressBookWnd_x                                 0xED4140
#define pinstCMailCompositionWnd_x                                 0xED413C
#define pinstCMailIgnoreListWnd_x                                  0xED4144
#define pinstCMailWnd_x                                            0xED4138
#define pinstCManageLootWnd_x                                      0xED5720
#define pinstCMapToolbarWnd_x                                      0xED40F4
#define pinstCMapViewWnd_x                                         0xED40EC
#define pinstCMarketplaceWnd_x                                     0xED40D4
#define pinstCMerchantWnd_x                                        0xED40CC
#define pinstCMIZoneSelectWnd_x                                    0xFA5D88
#define pinstCMusicPlayerWnd_x                                     0xED447C
#define pinstCNameChangeMercWnd_x                                  0xED41CC
#define pinstCNameChangePetWnd_x                                   0xED41C8
#define pinstCNameChangeWnd_x                                      0xED4128
#define pinstCNoteWnd_x                                            0xED41D0
#define pinstCObjectPreviewWnd_x                                   0xED4134
#define pinstCOptionsWnd_x                                         0xED4160
#define pinstCPetInfoWnd_x                                         0xED4418
#define pinstCPetitionQWnd_x                                       0xED4184
#define pinstCPlayerNotesWnd_x                                     0xED4474
#define pinstCPlayerWnd_x                                          0xED44CC
#define pinstCPopupWndManager_x                                    0xFA6618
#define pinstCProgressionSelectionWnd_x                            0xFA66C8
#define pinstCPurchaseGroupWnd_x                                   0xED40E0
#define pinstCPurchaseWnd_x                                        0xED40DC
#define pinstCPvPLeaderboardWnd_x                                  0xFA6778
#define pinstCPvPStatsWnd_x                                        0xFA6828
#define pinstCQuantityWnd_x                                        0xED41FC
#define pinstCRaceChangeWnd_x                                      0xED412C
#define pinstCRaidOptionsWnd_x                                     0xED41AC
#define pinstCRaidWnd_x                                            0xED41B8
#define pinstCRealEstateItemsWnd_x                                 0xED4158
#define pinstCRealEstateLayoutDetailsWnd_x                         0xED4194
#define pinstCRealEstateManageWnd_x                                0xED4180
#define pinstCRealEstateNeighborhoodWnd_x                          0xED4188
#define pinstCRealEstatePlotSearchWnd_x                            0xED418C
#define pinstCRealEstatePurchaseWnd_x                              0xED4190
#define pinstCRespawnWnd_x                                         0xED4470
#define pinstCRewardSelectionWnd_x                                 0xFA6F70
#define pinstCSelectorWnd_x                                        0xED40E4
#define pinstCSendMoneyWnd_x                                       0xED40F8
#define pinstCServerListWnd_x                                      0xED4448
#define pinstCSkillsSelectWnd_x                                    0xED4430
#define pinstCSkillsWnd_x                                          0xED4428
#define pinstCSocialEditWnd_x                                      0xED4114
#define pinstCSocialWnd_x                                          0xED44A0
#define pinstCSpellBookWnd_x                                       0xED41C4
#define pinstCStoryWnd_x                                           0xED44B8
#define pinstCTargetOfTargetWnd_x                                  0xFA85D0
#define pinstCTargetWnd_x                                          0xED410C
#define pinstCTaskOverlayWnd_x                                     0xED44C0
#define pinstCTaskSelectWnd_x                                      0xFA8728
#define pinstCTaskManager_x                                        0xC5D268
#define pinstCTaskTemplateSelectWnd_x                              0xFA87D8
#define pinstCTaskWnd_x                                            0xFA8888
#define pinstCTextEntryWnd_x                                       0xED4434
#define pinstCTimeLeftWnd_x                                        0xED4178
#define pinstCTipWndCONTEXT_x                                      0xFA8A8C
#define pinstCTipWndOFDAY_x                                        0xFA8A88
#define pinstCTitleWnd_x                                           0xFA8B38
#define pinstCTrackingWnd_x                                        0xED4100
#define pinstCTradeskillWnd_x                                      0xFA8CA0
#define pinstCTradeWnd_x                                           0xED40D8
#define pinstCTrainWnd_x                                           0xED441C
#define pinstCTributeBenefitWnd_x                                  0xFA8EA0
#define pinstCTributeMasterWnd_x                                   0xFA8F50
#define pinstCTributeTrophyWnd_x                                   0xFA9000
#define pinstCVideoModesWnd_x                                      0xED4124
#define pinstCVoiceMacroWnd_x                                      0xF924E0
#define pinstCVoteResultsWnd_x                                     0xED41C0
#define pinstCVoteWnd_x                                            0xED41BC
#define pinstCZoneGuideWnd_x                                       0xED41EC
#define pinstCZonePathWnd_x                                        0xED4204
#define pinstEQSuiteTextureLoader_x                                0xEA1D00
#define pinstItemIconCache_x                                       0xFA1F18
#define pinstLootFiltersManager_x                                  0xED35E8
#define pinstRewardSelectionWnd_x                                  0xFA6F70

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5DCA20
#define __CastRay2_x                                               0x5DCCB0
#define __ConvertItemTags_x                                        0x5F9D20
#define __CleanItemTags_x                                          0x47DA80
#define __CreateCascadeMenuItems_x                                 0x5711B0
#define __DoesFileExist_x                                          0x9481C0
#define __EQGetTime_x                                              0x944EA0
#define __ExecuteCmd_x                                             0x5D4E90
#define __FixHeading_x                                             0x9E1D40
#define __FlushDxKeyboard_x                                        0x6D9400
#define __GameLoop_x                                               0x6DCD00
#define __get_bearing_x                                            0x5DC5C0
#define __get_melee_range_x                                        0x5DCEF0
#define __GetAnimationCache_x                                      0x74B9C0
#define __GetGaugeValueFromEQ_x                                    0x8517F0
#define __GetLabelFromEQ_x                                         0x853330
#define __GetXTargetType_x                                         0x9E40B0
#define __HandleMouseWheel_x                                       0x6DE190
#define __HeadingDiff_x                                            0x9E1DA0
#define __HelpPath_x                                               0xF8DCFC
#define __ExecuteFrontEnd_x                                        0x6D9BE0
#define __NewUIINI_x                                               0x8514C0
#define __ProcessGameEvents_x                                      0x642E00
#define __ProcessKeyboardEvents_x                                  0x6DB350
#define __ProcessMouseEvents_x                                     0x642500
#define __SaveColors_x                                             0x571090
#define __STMLToText_x                                             0x97F9C0
#define __WndProc_x                                                0x6DBE10
#define CMemoryMappedFile__SetFile_x                               0xAD24E0
#define CrashDetected_x                                            0x6DB910
#define DrawNetStatus_x                                            0x672390
#define Expansion_HoT_x                                            0xDA30E0
#define Teleport_Table_Size_x                                      0xF884E0
#define Teleport_Table_x                                           0xF860B8
#define Util__FastTime_x                                           0x944A60
#define __eq_delete_x                                              0x9EAC15
#define __eq_new_x                                                 0x9EB184
#define __CopyLayout_x                                             0x65EFE0
#define __ThrottleFrameRate_x                                      0x62BFD3
#define __ThrottleFrameRateEnd_x                                   0x62C02F

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6EA8B0
#define CAAWnd__Update_x                                           0x6E9BE0
#define CAAWnd__UpdateSelected_x                                   0x6E6F50

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B1B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B030
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495710
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494950

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x57A0A0
#define AltAdvManager__IsAbilityReady_x                            0x578C90
#define AltAdvManager__GetAAById_x                                 0x579030
#define AltAdvManager__CanTrainAbility_x                           0x5790A0
#define AltAdvManager__CanSeeAbility_x                             0x579430

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4CD810
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC110
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC2F0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C0D70
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D11B0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CA7F0
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF200
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEB50
#define CharacterZoneClient__GetCurrentMod_x                       0x4EE200
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E1140
#define CharacterZoneClient__GetEffect_x                           0x4C0CB0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CBEB0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B6870
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B85A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E1040
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E0F40
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CBF50
#define CharacterZoneClient__GetMaxEffects_x                       0x4C4CB0
#define CharacterZoneClient__GetModCap_x                           0x4EE100
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CBE00
#define CharacterZoneClient__HasSkill_x                            0x4DC920
#define CharacterZoneClient__IsStackBlocked_x                      0x4C85B0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE060
#define CharacterZoneClient__NotifyPCAffectChange_x                0x4EA3D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x4C9F90

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x706E70
#define CBankWnd__WndNotification_x                                0x706C10

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x715EC0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x97CF60
#define CButtonWnd__CButtonWnd_x                                   0x97B8B0
#define CButtonWnd__dCButtonWnd_x                                  0x97BB50
#define CButtonWnd__vftable_x                                      0xB80E18

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x739150
#define CChatWindowManager__InitContextMenu_x                      0x732030
#define CChatWindowManager__FreeChatWindow_x                       0x737D20
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x738E30
#define CChatWindowManager__CreateChatWindow_x                     0x738340

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F1FB0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x739AB0
#define CChatWindow__Clear_x                                       0x73AF00
#define CChatWindow__WndNotification_x                             0x73B680
#define CChatWindow__AddHistory_x                                  0x73A760

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x992E00
#define CContextMenu__dCContextMenu_x                              0x993030
#define CContextMenu__AddMenuItem_x                                0x993040
#define CContextMenu__RemoveMenuItem_x                             0x993350
#define CContextMenu__RemoveAllMenuItems_x                         0x993370
#define CContextMenu__CheckMenuItem_x                              0x9933D0
#define CContextMenu__SetMenuItem_x                                0x993270
#define CContextMenu__AddSeparator_x                               0x9931D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x993950
#define CContextMenuManager__RemoveMenu_x                          0x9939C0
#define CContextMenuManager__PopupMenu_x                           0x993A80
#define CContextMenuManager__Flush_x                               0x9938F0
#define CContextMenuManager__GetMenu_x                             0x49D4E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x745990

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x91F5B0
#define CChatService__GetFriendName_x                              0x91F5C0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x98FE10
#define CComboWnd__Draw_x                                          0x98F2C0
#define CComboWnd__GetCurChoice_x                                  0x98FBE0
#define CComboWnd__GetListRect_x                                   0x98F760
#define CComboWnd__GetTextRect_x                                   0x98FE80
#define CComboWnd__InsertChoice_x                                  0x98F8F0
#define CComboWnd__SetColors_x                                     0x98F8C0
#define CComboWnd__SetChoice_x                                     0x98FBC0
#define CComboWnd__GetItemCount_x                                  0x98FBF0
#define CComboWnd__GetCurChoiceText_x                              0x98FC20
#define CComboWnd__GetChoiceText_x                                 0x98FC00
#define CComboWnd__InsertChoiceAtIndex_x                           0x98F980

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x743020
#define CContainerWnd__vftable_x                                   0xB4F104
#define CContainerWnd__SetContainer_x                              0x744860

// CDisplay
#define CDisplay__cameraType_x                                     0xED4210
#define CDisplay__ZoneMainUI_x                                     0x56BC60
#define CDisplay__PreZoneMainUI_x                                  0x56BC70
#define CDisplay__CleanGameUI_x                                    0x570E70
#define CDisplay__GetClickedActor_x                                0x563B40
#define CDisplay__GetUserDefinedColor_x                            0x55B8B0
#define CDisplay__GetWorldFilePath_x                               0x565650
#define CDisplay__is3dON_x                                         0x5603D0
#define CDisplay__ReloadUI_x                                       0x56AF80
#define CDisplay__WriteTextHD2_x                                   0x5601C0
#define CDisplay__TrueDistance_x                                   0x567520
#define CDisplay__SetViewActor_x                                   0x563460
#define CDisplay__GetFloorHeight_x                                 0x560490
#define CDisplay__SetRenderWindow_x                                0x55EE10
#define CDisplay__ToggleScreenshotMode_x                           0x562F30
#define CDisplay__RealRender_World_x                               0x55E100

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x9B5590

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x996910
#define CEditWnd__EnsureCaretVisible_x                             0x998C80
#define CEditWnd__GetCaretPt_x                                     0x997AF0
#define CEditWnd__GetCharIndexPt_x                                 0x9978A0
#define CEditWnd__GetDisplayString_x                               0x997740
#define CEditWnd__GetHorzOffset_x                                  0x995E60
#define CEditWnd__GetLineForPrintableChar_x                        0x998B90
#define CEditWnd__GetSelStartPt_x                                  0x997B50
#define CEditWnd__GetSTMLSafeText_x                                0x997550
#define CEditWnd__PointFromPrintableChar_x                         0x9987E0
#define CEditWnd__ReplaceSelection_x                               0x9983A0
#define CEditWnd__SelectableCharFromPoint_x                        0x998940
#define CEditWnd__SetEditable_x                                    0x997C20
#define CEditWnd__SetWindowTextA_x                                 0x9972A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x62E7B0
#define CEverQuest__ClickedPlayer_x                                0x61FDA0
#define CEverQuest__CreateTargetIndicator_x                        0x63FD70
#define CEverQuest__DeleteTargetIndicator_x                        0x63FE00
#define CEverQuest__DoTellWindow_x                                 0x4F20B0
#define CEverQuest__OutputTextToLog_x                              0x4F2380
#define CEverQuest__DropHeldItemOnGround_x                         0x614D90
#define CEverQuest__dsp_chat_x                                     0x4F2710
#define CEverQuest__trimName_x                                     0x63B590
#define CEverQuest__Emote_x                                        0x62EE70
#define CEverQuest__EnterZone_x                                    0x628BB0
#define CEverQuest__GetBodyTypeDesc_x                              0x6342D0
#define CEverQuest__GetClassDesc_x                                 0x634910
#define CEverQuest__GetClassThreeLetterCode_x                      0x634F10
#define CEverQuest__GetDeityDesc_x                                 0x63E520
#define CEverQuest__GetLangDesc_x                                  0x6350D0
#define CEverQuest__GetRaceDesc_x                                  0x6348F0
#define CEverQuest__InterpretCmd_x                                 0x63EB90
#define CEverQuest__LeftClickedOnPlayer_x                          0x619310
#define CEverQuest__LMouseUp_x                                     0x617340
#define CEverQuest__RightClickedOnPlayer_x                         0x619F00
#define CEverQuest__RMouseUp_x                                     0x618600
#define CEverQuest__SetGameState_x                                 0x614B10
#define CEverQuest__UPCNotificationFlush_x                         0x63B4B0
#define CEverQuest__IssuePetCommand_x                              0x6366D0
#define CEverQuest__ReportSuccessfulHeal_x                         0x62FCA0
#define CEverQuest__ReportSuccessfulHit_x                          0x630780

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756940
#define CGaugeWnd__CalcLinesFillRect_x                             0x7569A0
#define CGaugeWnd__Draw_x                                          0x755F50

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B43E0
#define CGuild__GetGuildName_x                                     0x4B2C00
#define CGuild__GetGuildIndex_x                                    0x4B3320

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x773DE0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x653790
#define CHotButton__SetCheck_x                                     0x6533D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x780E10
#define CInvSlotMgr__MoveItem_x                                    0x77F9B0
#define CInvSlotMgr__SelectSlot_x                                  0x780ED0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77E200
#define CInvSlot__SliderComplete_x                                 0x77B6F0
#define CInvSlot__GetItemBase_x                                    0x77AFA0
#define CInvSlot__UpdateItem_x                                     0x77B190

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x782B30
#define CInvSlotWnd__CInvSlotWnd_x                                 0x781D10
#define CInvSlotWnd__HandleLButtonUp_x                             0x7826B0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x84BAF0
#define CItemDisplayWnd__UpdateStrings_x                           0x791C90
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78B620
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78BBA0
#define CItemDisplayWnd__SetItem_x                                 0x792290
#define CItemDisplayWnd__AboutToShow_x                             0x7918E0
#define CItemDisplayWnd__WndNotification_x                         0x793810
#define CItemDisplayWnd__RequestConvertItem_x                      0x7930C0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x790900
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x791700

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x880D50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x798130

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x52A8A0

// CLabel
#define CLabel__UpdateText_x                                       0x79E850

// CListWnd
#define CListWnd__CListWnd_x                                       0x9639F0
#define CListWnd__dCListWnd_x                                      0x963CF0
#define CListWnd__vftable_x                                        0xB80700
#define CListWnd__AddColumn_x                                      0x968720
#define CListWnd__AddColumn1_x                                     0x968840
#define CListWnd__AddLine_x                                        0x968BB0
#define CListWnd__AddString_x                                      0x9689B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x9684D0
#define CListWnd__CalculateVSBRange_x                              0x9682D0
#define CListWnd__ClearSel_x                                       0x9694A0
#define CListWnd__ClearAllSel_x                                    0x9694F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x969F80
#define CListWnd__Compare_x                                        0x967C00
#define CListWnd__Draw_x                                           0x963EB0
#define CListWnd__DrawColumnSeparators_x                           0x9669F0
#define CListWnd__DrawHeader_x                                     0x966E50
#define CListWnd__DrawItem_x                                       0x9674A0
#define CListWnd__DrawLine_x                                       0x966B60
#define CListWnd__DrawSeparator_x                                  0x966A90
#define CListWnd__EnableLine_x                                     0x9662B0
#define CListWnd__EnsureVisible_x                                  0x969EB0
#define CListWnd__ExtendSel_x                                      0x9693E0
#define CListWnd__GetColumnTooltip_x                               0x965E30
#define CListWnd__GetColumnMinWidth_x                              0x965EA0
#define CListWnd__GetColumnWidth_x                                 0x965DB0
#define CListWnd__GetCurSel_x                                      0x965750
#define CListWnd__GetItemAtPoint_x                                 0x966520
#define CListWnd__GetItemAtPoint1_x                                0x966590
#define CListWnd__GetItemData_x                                    0x9657D0
#define CListWnd__GetItemHeight_x                                  0x965B80
#define CListWnd__GetItemIcon_x                                    0x965950
#define CListWnd__GetItemRect_x                                    0x9663A0
#define CListWnd__GetItemText_x                                    0x965810
#define CListWnd__GetSelList_x                                     0x969540
#define CListWnd__GetSeparatorRect_x                               0x966800
#define CListWnd__InsertLine_x                                     0x969010
#define CListWnd__RemoveLine_x                                     0x969230
#define CListWnd__SetColors_x                                      0x9682A0
#define CListWnd__SetColumnJustification_x                         0x967FD0
#define CListWnd__SetColumnLabel_x                                 0x968950
#define CListWnd__SetColumnWidth_x                                 0x967EE0
#define CListWnd__SetCurSel_x                                      0x969330
#define CListWnd__SetItemColor_x                                   0x969B70
#define CListWnd__SetItemData_x                                    0x969B30
#define CListWnd__SetItemText_x                                    0x969760
#define CListWnd__ShiftColumnSeparator_x                           0x968090
#define CListWnd__Sort_x                                           0x967D90
#define CListWnd__ToggleSel_x                                      0x969360
#define CListWnd__SetColumnsSizable_x                              0x968130
#define CListWnd__SetItemWnd_x                                     0x969A00
#define CListWnd__GetItemWnd_x                                     0x9659A0
#define CListWnd__SetItemIcon_x                                    0x9697E0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9685D0
#define CListWnd__SetVScrollPos_x                                  0x967EC0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7B5C50

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7B0EB0
#define MapViewMap__dMapViewMap_x                                  0x7B0FF0
#define MapViewMap__vftable_x                                      0xB56478
#define MapViewMap__Clear_x                                        0x7B1900
#define MapViewMap__SaveEx_x                                       0x7B4E3F
#define MapViewMap__SetZoom_x                                      0x7BAA80
#define MapViewMap__HandleLButtonDown_x                            0x7B1100
#define MapViewMap__GetWorldCoordinates_x                          0x7B4270

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7D8E50
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7D97B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7D9DF0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7DCFD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7D78E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7E3140
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7D8AA0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8EC6D0
#define CPacketScrambler__hton_x                                   0x8EC6C0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x98B0C0
#define CSidlManagerBase__CreatePageWnd_x                          0x98A8C0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x985DA0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x985D30
#define CSidlManagerBase__FindAnimation1_x                         0x986020
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x9863F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x986220
#define CSidlManagerBase__CreateLabel_x                            0x841810
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x9898A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x989B30
#define CSidlManagerBase__CreateXWnd_x                             0x989B70

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x841C40
#define CSidlManager__CreateXWnd_x                                 0x841290

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x981D60
#define CSidlScreenWnd__CalculateVSBRange_x                        0x981C70
#define CSidlScreenWnd__ConvertToRes_x                             0x9AF7E0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x9815F0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x9812E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x9813B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x981480
#define CSidlScreenWnd__DrawSidlPiece_x                            0x9825F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x982AD0
#define CSidlScreenWnd__GetChildItem_x                             0x982A50
#define CSidlScreenWnd__GetSidlPiece_x                             0x9827E0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x970FF0
#define CSidlScreenWnd__Init1_x                                    0x980D90
#define CSidlScreenWnd__LoadIniInfo_x                              0x982B20
#define CSidlScreenWnd__LoadIniListWnd_x                           0x983710
#define CSidlScreenWnd__LoadSidlScreen_x                           0x980190
#define CSidlScreenWnd__m_layoutCopy_x                             0x1613868
#define CSidlScreenWnd__StoreIniInfo_x                             0x983280
#define CSidlScreenWnd__StoreIniVis_x                              0x983600
#define CSidlScreenWnd__vftable_x                                  0xB810C4
#define CSidlScreenWnd__WndNotification_x                          0x9824C0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0E10
#define CSkillMgr__GetSkillCap_x                                   0x6C0FE0
#define CSkillMgr__GetNameToken_x                                  0x6C0650
#define CSkillMgr__IsActivatedSkill_x                              0x6C0740
#define CSkillMgr__IsCombatSkill_x                                 0x6C06B0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x994A40
#define CSliderWnd__SetValue_x                                     0x994870
#define CSliderWnd__SetNumTicks_x                                  0x9948D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x8484D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x99DE90
#define CStmlWnd__CalculateHSBRange_x                              0x99EE40
#define CStmlWnd__CalculateVSBRange_x                              0x99EDC0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9A3CA0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9A4940
#define CStmlWnd__ForceParseNow_x                                  0x99E450
#define CStmlWnd__GetNextTagPiece_x                                0x9A3C00
#define CStmlWnd__GetVisibleText_x                                 0x99E470
#define CStmlWnd__InitializeWindowVariables_x                      0x9A4790
#define CStmlWnd__MakeStmlColorTag_x                               0x99D530
#define CStmlWnd__MakeWndNotificationTag_x                         0x99D5A0
#define CStmlWnd__SetSTMLText_x                                    0x99C310
#define CStmlWnd__StripFirstSTMLLines_x                            0x9A5B60
#define CStmlWnd__UpdateHistoryString_x                            0x9A4B40

// CTabWnd
#define CTabWnd__Draw_x                                            0x99B260
#define CTabWnd__DrawCurrentPage_x                                 0x99BBF0
#define CTabWnd__DrawTab_x                                         0x99B7E0
#define CTabWnd__GetCurrentPage_x                                  0x99A9D0
#define CTabWnd__GetCurrentTabIndex_x                              0x99A9C0
#define CTabWnd__GetPageFromTabIndex_x                             0x99B720
#define CTabWnd__GetPageInnerRect_x                                0x99AC00
#define CTabWnd__GetTabInnerRect_x                                 0x99AB40
#define CTabWnd__GetTabRect_x                                      0x99AA00
#define CTabWnd__InsertPage_x                                      0x99ADF0
#define CTabWnd__RemovePage_x                                      0x99AF30
#define CTabWnd__SetPage_x                                         0x99AC80
#define CTabWnd__SetPageRect_x                                     0x99B5D0
#define CTabWnd__UpdatePage_x                                      0x99B5D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x99A3C0
#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x99A360


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4AC480

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x96D4F0
#define CTextureFont__DrawWrappedText1_x                           0x96D420
#define CTextureFont__DrawWrappedText2_x                           0x96D5E0
#define CTextureFont__GetTextExtent_x                              0x96D7F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x9AC290

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x9594A0

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x5442D0
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x940DF0
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x941030
#define CXStr__operator_equal1_x                                   0x941070
#define CXStr__operator_plus_equal1_x                              0x941AD0
#define CXStr__SetString_x                                         0x943970
#define CXStr__operator_char_p_x                                   0x941520
#define CXStr__GetChar_x                                           0x9432D0
#define CXStr__Delete_x                                            0x942BA0
#define CXStr__GetUnicode_x                                        0x943340
#define CXStr__Insert_x                                            0x9433A0
#define CXStr__FindNext_x                                          0x942FF0
#define CXStr__gFreeLists_x                                        0xEA16D8
#define CXStr__gCXStrAccess_x                                      0x16130F0

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x992A60

// CXWnd
#define CXWnd__BringToTop_x                                        0x9749B0
#define CXWnd__ClrFocus_x                                          0x974340
#define CXWnd__Destroy_x                                           0x9743E0
#define CXWnd__DoAllDrawing_x                                      0x970670
#define CXWnd__DrawChildren_x                                      0x970640
#define CXWnd__DrawColoredRect_x                                   0x970BD0
#define CXWnd__DrawTooltip_x                                       0x96EC30
#define CXWnd__DrawTooltipAtPoint_x                                0x96ECF0
#define CXWnd__GetBorderFrame_x                                    0x970890
#define CXWnd__GetChildItem_x                                      0x974BD0
#define CXWnd__GetChildWndAt_x                                     0x974A50
#define CXWnd__GetClientClipRect_x                                 0x972BC0
#define CXWnd__GetRelativeRect_x                                   0x972EB0
#define CXWnd__GetScreenClipRect_x                                 0x972C70
#define CXWnd__GetScreenRect_x                                     0x972DF0
#define CXWnd__GetTooltipRect_x                                    0x970C20
#define CXWnd__GetWindowTextA_x                                    0x4F1F50
#define CXWnd__IsActive_x                                          0x971350
#define CXWnd__IsDescendantOf_x                                    0x973870
#define CXWnd__IsReallyVisible_x                                   0x9738A0
#define CXWnd__IsType_x                                            0x9751D0
#define CXWnd__Minimize_x                                          0x973FE0
#define CXWnd__Move_x                                              0x973910
#define CXWnd__Move1_x                                             0x973A10
#define CXWnd__ProcessTransition_x                                 0x9744C0
#define CXWnd__Refade_x                                            0x973CD0
#define CXWnd__Resize_x                                            0x973F70
#define CXWnd__Right_x                                             0x9747A0
#define CXWnd__SetFocus_x                                          0x974300
#define CXWnd__SetFont_x                                           0x974370
#define CXWnd__SetKeyTooltip_x                                     0x974F90
#define CXWnd__SetMouseOver_x                                      0x971CE0
#define CXWnd__SetParent_x                                         0x973580
#define CXWnd__StartFade_x                                         0x973750
#define CXWnd__vftable_x                                           0xB80B34
#define CXWnd__CXWnd_x                                             0x96DB00
#define CXWnd__dCXWnd_x                                            0x96E200

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9B0830

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x977A20
#define CXWndManager__DrawWindows_x                                0x977B70
#define CXWndManager__GetKeyboardFlags_x                           0x97A4E0
#define CXWndManager__HandleKeyboardMsg_x                          0x97A0D0
#define CXWndManager__RemoveWnd_x                                  0x97A7B0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x97AC70

// CDBStr
#define CDBStr__GetString_x                                        0x55A3F0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4E19A0
#define CharacterZoneClient__CastSpell_x                           0x4C5630
#define CharacterZoneClient__Cur_HP_x                              0x4D9590
#define CharacterZoneClient__Cur_Mana_x                            0x4E1670
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4DC6E0
#define CharacterZoneClient__GetBaseSkill_x                        0x4DD680
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C8CA0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E8610
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B81B0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B8300
#define CharacterZoneClient__GetHPRegen_x                          0x4E8050
#define CharacterZoneClient__GetManaRegen_x                        0x4E8A50
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C9AD0
#define CharacterZoneClient__Max_Endurance_x                       0x681EF0
#define CharacterZoneClient__Max_HP_x                              0x4D93C0
#define CharacterZoneClient__Max_Mana_x                            0x681CE0
#define CharacterZoneClient__SpellDuration_x                       0x4C9510
#define CharacterZoneClient__TotalEffect_x                         0x4CD120
#define CharacterZoneClient__UseSkill_x                            0x4EAA70

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x90CA10

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699960

// PcClient
#define PcClient__PcClient_x                                       0x677260
#define PcClient__GetConLevel_x                                    0x679FF0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BFC50
#define CCharacterListWnd__EnterWorld_x                            0x4BF620
#define CCharacterListWnd__Quit_x                                  0x4BF340
#define CCharacterListWnd__UpdateList_x                            0x4BF810

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6595F0
#define EQ_Item__CreateItemTagString_x                             0x8E5790
#define EQ_Item__IsStackable_x                                     0x8EA730
#define EQ_Item__GetImageNum_x                                     0x8E7430
#define EQ_Item__CreateItemClient_x                                0x658560
#define EQ_Item__GetItemValue_x                                    0x8E8720
#define EQ_Item__ValueSellMerchant_x                               0x8EC400
#define EQ_Item__IsKeyRingItem_x                                   0x8E9F20
#define EQ_Item__CanGemFitInSlot_x                                 0x8E4FB0
#define EQ_Item__CanGoInBag_x                                      0x659710
#define EQ_Item__IsEmpty_x                                         0x8E99F0
#define EQ_Item__GetMaxItemCount_x                                 0x8E8B20
#define EQ_Item__GetHeldItem_x                                     0x8E72F0
#define ItemClient__dItemClient_x                                  0x6584B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x57AEA0
#define EQ_LoadingS__Array_x                                       0xD8FD00

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8F6320
#define EQ_PC__GetCombatAbility_x                                  0x8F68A0
#define EQ_PC__GetCombatAbilityTimer_x                             0x8F6910
#define EQ_PC__GetItemRecastTimer_x                                0x684E30
#define EQ_PC__HasLoreItem_x                                       0x67A9B0
#define EQ_PC__AlertInventoryChanged_x                             0x6798B0
#define EQ_PC__GetPcZoneClient_x                                   0x6AA080
#define EQ_PC__RemoveMyAffect_x                                    0x688350
#define EQ_PC__GetKeyRingItems_x                                   0x8F73A0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8F6F00
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8F74F0

// EQItemList
#define EQItemList__EQItemList_x                                   0x5D9A80
#define EQItemList__add_object_x                                   0x609C30
#define EQItemList__add_item_x                                     0x5DA060
#define EQItemList__delete_item_x                                  0x5DA0B0
#define EQItemList__FreeItemList_x                                 0x5D9FC0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556560

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B390
#define EQPlayer__dEQPlayer_x                                      0x68DC20
#define EQPlayer__DoAttack_x                                       0x6A3DB0
#define EQPlayer__EQPlayer_x                                       0x68E470
#define EQPlayer__SetNameSpriteState_x                             0x692A40
#define EQPlayer__SetNameSpriteTint_x                              0x693910
#define PlayerBase__HasProperty_j_x                                0x9E0100
#define EQPlayer__IsTargetable_x                                   0x9E0660
#define EQPlayer__CanSee_x                                         0x9E0450
#define EQPlayer__CanSee1_x                                        0x9E0520
#define PlayerBase__GetVisibilityLineSegment_x                     0x9E01C0

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7B70
#define PlayerZoneClient__GetLevel_x                               0x6AA0C0
#define PlayerZoneClient__IsValidTeleport_x                        0x60B0D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x572E50

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E540
#define EQPlayerManager__GetSpawnByName_x                          0x69E5F0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E680

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65CFA0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65D070
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65D0B0
#define KeypressHandler__ClearCommandStateArray_x                  0x65E570
#define KeypressHandler__HandleKeyDown_x                           0x65E590
#define KeypressHandler__HandleKeyUp_x                             0x65E630
#define KeypressHandler__SaveKeymapping_x                          0x65EBE0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x90A8A0

// StringTable
#define StringTable__getString_x                                   0x905780

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x684830
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x6829E0
#define PcZoneClient__GetPcSkillLimit_x                            0x687FA0
#define PcZoneClient__RemovePetEffect_x                            0x688600
#define PcZoneClient__HasAlternateAbility_x                        0x681B40
#define PcZoneClient__CanEquipItem_x                               0x6821F0
#define PcZoneClient__GetItemByID_x                                0x685300
#define PcZoneClient__GetItemByItemClass_x                         0x685440
#define PcZoneClient__RemoveBuffEffect_x                           0x6886B0
#define PcZoneClient__BandolierSwap_x                              0x682FA0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x684DD0

// Doors
#define EQSwitch__UseSwitch_x                                      0x60FC20

// IconCache
#define IconCache__GetIcon_x                                       0x74B360

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x741F30
#define CContainerMgr__CloseContainer_x                            0x742210
#define CContainerMgr__OpenExperimentContainer_x                   0x742D70

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x810D30

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651B50

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7A6B70
#define CLootWnd__RequestLootSlot_x                                0x7A5DA0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A53B0
#define EQ_Spell__SpellAffects_x                                   0x5A58B0
#define EQ_Spell__SpellAffectBase_x                                0x5A55D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0B20
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0AD0
#define EQ_Spell__IsSPAStacking_x                                  0x5A67C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A5C10
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A67D0
#define __IsResEffectSpell_x                                       0x4D02D0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B11A0

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x915320

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x85D720
#define CTargetWnd__WndNotification_x                              0x85CEB0
#define CTargetWnd__RefreshTargetBuffs_x                           0x85D210
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x85BC90

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x8622A0
#define CTaskWnd__ConfirmAbandonTask_x                             0x865370

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x554130
#define CTaskManager__HandleMessage_x                              0x552010
#define CTaskManager__GetTaskStatus_x                              0x5541E0
#define CTaskManager__GetElementDescription_x                      0x554260

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59FFE0
#define EqSoundManager__PlayScriptMp3_x                            0x5A01E0
#define EqSoundManager__SoundAssistPlay_x                          0x6C52D0
#define EqSoundManager__WaveInstancePlay_x                         0x6C47C0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x543F80

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x999A30
#define CTextureAnimation__SetCurCell_x                            0x9997F0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x583470
#define CAltAbilityData__GetMercMaxRank_x                          0x583400
#define CAltAbilityData__GetMaxRank_x                              0x577810

// CTargetRing
#define CTargetRing__Cast_x                                        0x64F360

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x645A70
#define CharacterBase__GetItemByGlobalIndex_x                      0x91CEA0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x91CEF0
#define CharacterBase__GetItemPossession_x                         0x658390
#define CharacterBase__GetMemorizedSpell_x                         0x6583B0
#define CharacterBase__IsExpansionFlag_x                           0x5D36D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726DA0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x727660
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x727710

// messages
#define msg_spell_worn_off_x                                       0x5CB000
#define msg_new_text_x                                             0x5BEDE0
#define __msgTokenTextParam_x                                      0x5CD470
#define msgTokenText_x                                             0x5CD880

// SpellManager
#define SpellManager__vftable_x                                    0xB2D2FC
#define SpellManager__SpellManager_x                               0x6C8F00
#define Spellmanager__LoadTextSpells_x                             0x6C9800
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C90D0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9E4960

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x915D20
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x916070

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x79ECC0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746C10
#define CCursorAttachment__AttachToCursor1_x                       0x746C50
#define CCursorAttachment__Deactivate_x                            0x7481E0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9AA700
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9AAE60
#define CEQSuiteTextureLoader__GetTexture_x                        0x9AAAE0

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524220
#define CFindItemWnd__WndNotification_x                            0x5250E0
#define CFindItemWnd__Update_x                                     0x525CC0
#define CFindItemWnd__PickupSelectedItem_x                         0x523920

// IString
#define IString__Append_x                                          0x513510

// Camera
#define EverQuest__Cameras_x                                       0xDA3438

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52EDD0
#define LootFiltersManager__GetItemFilterData_x                    0x52E710
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52E740
#define LootFiltersManager__SetItemLootFilter_x                    0x52E950

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7FD8B0

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9EA630
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF740

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73E8B0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x921220
#define CDistillerInfo__Instance_x                                 0x921160

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761560
#define CGroupWnd__UpdateDisplay_x                                 0x7607C0

// ItemBase
#define ItemBase__IsLore_x                                         0x8E9FC0
#define ItemBase__IsLoreEquipped_x                                 0x8EA030

#define MultipleItemMoveManager__ProcessMove_x                     0x66E230

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x609B90
#define EQPlacedItemManager__GetItemByGuid_x                       0x609CD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x609D30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3E30
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8760

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x519CB0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x504A90
#define FactionManagerClient__HandleFactionMessage_x               0x5052B0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x505AD0
#define FactionManagerClient__GetMaxFaction_x                      0x505AEF
#define FactionManagerClient__GetMinFaction_x                      0x505AA0

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x5116A0

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x96C180

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49DF00

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511910

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x582620

// CTargetManager
#define CTargetManager__Get_x                                      0x6CCE80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3E30

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC240

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D9F60

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE40ACC

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x955870

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240
