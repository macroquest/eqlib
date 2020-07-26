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
#define __ExpectedVersionDate                                     "Jul 13 2020"
#define __ExpectedVersionTime                                     "14:18:57"
#define __ActualVersionDate_x                                      0xB1C664
#define __ActualVersionTime_x                                      0xB1C658
#define __ActualVersionBuild_x                                     0xB0832C

// Memory Protection
#define __MemChecker0_x                                            0x63EF90
#define __MemChecker1_x                                            0x919880
#define __MemChecker2_x                                            0x6CE910
#define __MemChecker3_x                                            0x6CE860
#define __MemChecker4_x                                            0x86FFA0
#define __EncryptPad0_x                                            0xC57520
#define __EncryptPad1_x                                            0xCB5700
#define __EncryptPad2_x                                            0xC67DB8
#define __EncryptPad3_x                                            0xC679B8
#define __EncryptPad4_x                                            0xCA5C90
#define __EncryptPad5_x                                            0xF77BD0
#define __AC1_x                                                    0x826B76
#define __AC2_x                                                    0x5F89CF
#define __AC3_x                                                    0x60001F
#define __AC4_x                                                    0x603FE0
#define __AC5_x                                                    0x60A29F
#define __AC6_x                                                    0x60E7A6
#define __AC7_x                                                    0x5F8440
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x70E0C

// Direct Input
#define DI8__Main_x                                                0xF77BF0
#define DI8__Keyboard_x                                            0xF77BF4
#define DI8__Mouse_x                                               0xF77C0C
#define DI8__Mouse_Copy_x                                          0xED0DBC
#define DI8__Mouse_Check_x                                         0xF75724
#define __AutoSkillArray_x                                         0xED1CD4
#define __Attack_x                                                 0xF6FAFB
#define __Autofire_x                                               0xF6FAFC
#define __BindList_x                                               0xC45F38
#define g_eqCommandStates_x                                        0xC46CB8
#define __Clicks_x                                                 0xED0E74
#define __CommandList_x                                            0xC47878
#define __CurrentMapLabel_x                                        0xF885C4
#define __CurrentSocial_x                                          0xC2F7C8
#define __DoAbilityList_x                                          0xF0761C
#define __do_loot_x                                                0x5C46F0
#define __DrawHandler_x                                            0x1607668
#define __GroupCount_x                                             0xECBE92
#define __Guilds_x                                                 0xECFCF8
#define __gWorld_x                                                 0xECBD1C
#define __HWnd_x                                                   0xF77C10
#define __heqmain_x                                                0xF77BB8
#define __InChatMode_x                                             0xED0DA4
#define __LastTell_x                                               0xED2D18
#define __LMouseHeldTime_x                                         0xED0EE0
#define __Mouse_x                                                  0xF77BDC
#define __MouseLook_x                                              0xED0E3A
#define __MouseEventTime_x                                         0xF705DC
#define __gpbCommandEvent_x                                        0xEC978C
#define __NetStatusToggle_x                                        0xED0E3D
#define __PCNames_x                                                0xED22C4
#define __RangeAttackReady_x                                       0xED1FB8
#define __RMouseHeldTime_x                                         0xED0EDC
#define __RunWalkState_x                                           0xED0DA8
#define __ScreenMode_x                                             0xE17134
#define __ScreenX_x                                                0xED0D5C
#define __ScreenY_x                                                0xED0D58
#define __ScreenXMax_x                                             0xED0D60
#define __ScreenYMax_x                                             0xED0D64
#define __ServerHost_x                                             0xEC9973
#define __ServerName_x                                             0xF075DC
#define __ShiftKeyDown_x                                           0xED1434
#define __ShowNames_x                                              0xED2174
#define __SocialChangedList_x                                      0xF07664
#define __Socials_x                                                0xF076DC
#define __SubscriptionType_x                                       0xFCC938
#define __TargetAggroHolder_x                                      0xF8AF78
#define __ZoneType_x                                               0xED1238
#define __GroupAggro_x                                             0xF8AFB8
#define __LoginName_x                                              0xF7834C
#define __Inviter_x                                                0xF6FA78
#define __AttackOnAssist_x                                         0xED2130
#define __UseTellWindows_x                                         0xED2460
#define __gfMaxZoomCameraDistance_x                                0xB11F90
#define __gfMaxCameraDistance_x                                    0xB3E408
#define __pulAutoRun_x                                             0xED0E58
#define __pulForward_x                                             0xED2498
#define __pulBackward_x                                            0xED249C
#define __pulTurnRight_x                                           0xED24A0
#define __pulTurnLeft_x                                            0xED24A4
#define __pulStrafeLeft_x                                          0xED24A8
#define __pulStrafeRight_x                                         0xED24AC

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0xECC090
#define instEQZoneInfo_x                                           0xED1030
#define pinstActiveBanker_x                                        0xEC9868
#define pinstActiveCorpse_x                                        0xEC9860
#define pinstActiveGMaster_x                                       0xEC9864
#define pinstActiveMerchant_x                                      0xEC985C
#define pinstAltAdvManager_x                                       0xE182C0
#define pinstBandageTarget_x                                       0xEC9C88
#define pinstCamActor_x                                            0xE17120
#define pinstCDBStr_x                                              0xE16FDC
#define pinstCDisplay_x                                            0xECBCE0
#define pinstCEverQuest_x                                          0xF77C08
#define pinstEverQuestInfo_x                                       0xED0D50
#define pinstCharData_x                                            0xECBE7C
#define pinstCharSpawn_x                                           0xEC9CC0
#define pinstControlledMissile_x                                   0xEC9CD0
#define pinstControlledPlayer_x                                    0xEC9CC0
#define pinstCResolutionHandler_x                                  0x1607898
#define pinstCSidlManager_x                                        0x1606830
#define pinstCXWndManager_x                                        0x160682C
#define instDynamicZone_x                                          0xECFBD0
#define pinstDZMember_x                                            0xECFCE0
#define pinstDZTimerInfo_x                                         0xECFCE4
#define pinstEqLogin_x                                             0xF77C98
#define instEQMisc_x                                               0xE16F20
#define pinstEQSoundManager_x                                      0xE19290
#define pinstEQSpellStrings_x                                      0xCD9938
#define instExpeditionLeader_x                                     0xECFC1A
#define instExpeditionName_x                                       0xECFC5A
#define pinstSGraphicsEngine_x                                     0x160765C
#define pinstGroup_x                                               0xECBE8E
#define pinstImeManager_x                                          0x1606828
#define pinstLocalPlayer_x                                         0xEC9858
#define pinstMercenaryData_x                                       0xF720D4
#define pinstMercenaryStats_x                                      0xF8B044
#define pinstModelPlayer_x                                         0xEC9A7C
#define pinstPCData_x                                              0xECBE7C
#define pinstSkillMgr_x                                            0xF74238
#define pinstSpawnManager_x                                        0xF72CE0
#define pinstSpellManager_x                                        0xF74478
#define pinstSpellSets_x                                           0xF68724
#define pinstStringTable_x                                         0xECC084
#define pinstSwitchManager_x                                       0xEC9630
#define pinstTarget_x                                              0xEC9CBC
#define pinstTargetObject_x                                        0xEC9CC8
#define pinstTargetSwitch_x                                        0xECBCD8
#define pinstTaskMember_x                                          0xE16DB0
#define pinstTrackTarget_x                                         0xEC9CC4
#define pinstTradeTarget_x                                         0xEC986C
#define instTributeActive_x                                        0xE16F41
#define pinstViewActor_x                                           0xE1711C
#define pinstWorldData_x                                           0xECC088
#define pinstZoneAddr_x                                            0xED12D0
#define pinstPlayerPath_x                                          0xF72D78
#define pinstTargetIndicator_x                                     0xF746E0
#define EQObject_Top_x                                             0xEC9854

////
//Section 2:  UI Related Offsets
////
#define pinstCAAWnd_x                                              0xE17444
#define pinstCAchievementsWnd_x                                    0xE170B4
#define pinstCActionsWnd_x                                         0xE178E4
#define pinstCAdvancedDisplayOptionsWnd_x                          0xE17164
#define pinstCAdvancedLootWnd_x                                    0xE17100
#define pinstCAdventureLeaderboardWnd_x                            0xF81D98
#define pinstCAdventureRequestWnd_x                                0xF81E48
#define pinstCAdventureStatsWnd_x                                  0xF81EF8
#define pinstCAggroMeterWnd_x                                      0xE17168
#define pinstCAlarmWnd_x                                           0xE170CC
#define pinstCAlertHistoryWnd_x                                    0xE171DC
#define pinstCAlertStackWnd_x                                      0xE17124
#define pinstCAlertWnd_x                                           0xE17154
#define pinstCAltStorageWnd_x                                      0xF82258
#define pinstCAudioTriggersWindow_x                                0xCCBC68
#define pinstCAuraWnd_x                                            0xE17104
#define pinstCAvaZoneWnd_x                                         0xE1719C
#define pinstCBandolierWnd_x                                       0xE1715C
#define pinstCBankWnd_x                                            0xE17198
#define pinstCBarterMerchantWnd_x                                  0xF83498
#define pinstCBarterSearchWnd_x                                    0xF83548
#define pinstCBarterWnd_x                                          0xF835F8
#define pinstCBazaarConfirmationWnd_x                              0xE170EC
#define pinstCBazaarSearchWnd_x                                    0xE17448
#define pinstCBazaarWnd_x                                          0xE170AC
#define pinstCBlockedBuffWnd_x                                     0xE17110
#define pinstCBlockedPetBuffWnd_x                                  0xE1714C
#define pinstCBodyTintWnd_x                                        0xE178F0
#define pinstCBookWnd_x                                            0xE1718C
#define pinstCBreathWnd_x                                          0xE174CC
#define pinstCBuffWindowNORMAL_x                                   0xE170F0
#define pinstCBuffWindowSHORT_x                                    0xE170F8
#define pinstCBugReportWnd_x                                       0xE17194
#define pinstCButtonWnd_x                                          0x1606A98
#define pinstCCastingWnd_x                                         0xE1717C
#define pinstCCastSpellWnd_x                                       0xE17454
#define pinstCCharacterListWnd_x                                   0xE1790C
#define pinstCChatWindowManager_x                                  0xF840B8
#define pinstCClaimWnd_x                                           0xF84210
#define pinstCColorPickerWnd_x                                     0xE173F8
#define pinstCCombatAbilityWnd_x                                   0xE170C4
#define pinstCCombatSkillsSelectWnd_x                              0xE17078
#define pinstCCompassWnd_x                                         0xE178E8
#define pinstCConfirmationDialog_x                                 0xF89110
#define pinstCContainerMgr_x                                       0xE17904
#define pinstCContextMenuManager_x                                 0x16067E8
#define pinstCCursorAttachment_x                                   0xE17170
#define pinstCDynamicZoneWnd_x                                     0xF847D8
#define pinstCEditLabelWnd_x                                       0xE170E8
#define pinstCEQMainWnd_x                                          0xF84A20
#define pinstCEventCalendarWnd_x                                   0xE174D0
#define pinstCExtendedTargetWnd_x                                  0xE17148
#define pinstCFacePick_x                                           0xE17090
#define pinstCFactionWnd_x                                         0xE1709C
#define pinstCFellowshipWnd_x                                      0xF84C20
#define pinstCFileSelectionWnd_x                                   0xE173F0
#define pinstCFindItemWnd_x                                        0xE17088
#define pinstCFindLocationWnd_x                                    0xF84D78
#define pinstCFriendsWnd_x                                         0xE1708C
#define pinstCGemsGameWnd_x                                        0xE17098
#define pinstCGiveWnd_x                                            0xE170D4
#define pinstCGroupSearchFiltersWnd_x                              0xE17180
#define pinstCGroupSearchWnd_x                                     0xF85170
#define pinstCGroupWnd_x                                           0xF85220
#define pinstCGuildBankWnd_x                                       0xED2114
#define pinstCGuildCreationWnd_x                                   0xF85380
#define pinstCGuildMgmtWnd_x                                       0xF85430
#define pinstCharacterCreation_x                                   0xE17080
#define pinstCHelpWnd_x                                            0xE170D0
#define pinstCHeritageSelectionWnd_x                               0xE170A0
#define pinstCHotButtonWnd_x                                       0xF87588
#define pinstCHotButtonWnd1_x                                      0xF87588
#define pinstCHotButtonWnd2_x                                      0xF8758C
#define pinstCHotButtonWnd3_x                                      0xF87590
#define pinstCHotButtonWnd4_x                                      0xF87594
#define pinstCIconSelectionWnd_x                                   0xE1716C
#define pinstCInspectWnd_x                                         0xE17150
#define pinstCInventoryWnd_x                                       0xE17108
#define pinstCInvSlotMgr_x                                         0xE17450
#define pinstCItemDisplayManager_x                                 0xF87B18
#define pinstCItemExpTransferWnd_x                                 0xF87C48
#define pinstCItemOverflowWnd_x                                    0xE1744C
#define pinstCJournalCatWnd_x                                      0xE17408
#define pinstCJournalTextWnd_x                                     0xE171C4
#define pinstCKeyRingWnd_x                                         0xE17178
#define pinstCLargeDialogWnd_x                                     0xF89D90
#define pinstCLayoutCopyWnd_x                                      0xF87F98
#define pinstCLFGuildWnd_x                                         0xF88048
#define pinstCLoadskinWnd_x                                        0xE170B0
#define pinstCLootFiltersCopyWnd_x                                 0xCE82B8
#define pinstCLootFiltersWnd_x                                     0xE17138
#define pinstCLootSettingsWnd_x                                    0xE17160
#define pinstCLootWnd_x                                            0xE1740C
#define pinstCMailAddressBookWnd_x                                 0xE174D4
#define pinstCMailCompositionWnd_x                                 0xE17420
#define pinstCMailIgnoreListWnd_x                                  0xE174D8
#define pinstCMailWnd_x                                            0xE173FC
#define pinstCManageLootWnd_x                                      0xE18770
#define pinstCMapToolbarWnd_x                                      0xE170D8
#define pinstCMapViewWnd_x                                         0xE170A4
#define pinstCMarketplaceWnd_x                                     0xE17144
#define pinstCMerchantWnd_x                                        0xE17418
#define pinstCMIZoneSelectWnd_x                                    0xF88880
#define pinstCMusicPlayerWnd_x                                     0xE171E4
#define pinstCNameChangeMercWnd_x                                  0xE170E0
#define pinstCNameChangePetWnd_x                                   0xE170BC
#define pinstCNameChangeWnd_x                                      0xE170F4
#define pinstCNoteWnd_x                                            0xE170B8
#define pinstCObjectPreviewWnd_x                                   0xE17158
#define pinstCOptionsWnd_x                                         0xE170C8
#define pinstCPetInfoWnd_x                                         0xE171D8
#define pinstCPetitionQWnd_x                                       0xE1707C
//#define pinstCPlayerCustomizationWnd_x                           0xDA8E24
#define pinstCPlayerNotesWnd_x                                     0xE178F8
#define pinstCPlayerWnd_x                                          0xE171E8
#define pinstCPopupWndManager_x                                    0xF89110
#define pinstCProgressionSelectionWnd_x                            0xF891C0
#define pinstCPurchaseGroupWnd_x                                   0xE171A8
#define pinstCPurchaseWnd_x                                        0xE17190
#define pinstCPvPLeaderboardWnd_x                                  0xF89270
#define pinstCPvPStatsWnd_x                                        0xF89320
#define pinstCQuantityWnd_x                                        0xE171C0
#define pinstCRaceChangeWnd_x                                      0xE17114
#define pinstCRaidOptionsWnd_x                                     0xE17188
#define pinstCRaidWnd_x                                            0xE17410
#define pinstCRealEstateItemsWnd_x                                 0xE170A8
#define pinstCRealEstateLayoutDetailsWnd_x                         0xE178F4
#define pinstCRealEstateManageWnd_x                                0xE171BC
#define pinstCRealEstateNeighborhoodWnd_x                          0xE171D4
#define pinstCRealEstatePlotSearchWnd_x                            0xE173F4
#define pinstCRealEstatePurchaseWnd_x                              0xE17414
#define pinstCRespawnWnd_x                                         0xE17128
//#define pinstCRewardSelectionWnd_x                               0x10205B0
#define pinstCSelectorWnd_x                                        0xE17910
#define pinstCSendMoneyWnd_x                                       0xE170E4
#define pinstCServerListWnd_x                                      0xE1741C
#define pinstCSkillsSelectWnd_x                                    0xE17900
#define pinstCSkillsWnd_x                                          0xE178EC
#define pinstCSocialEditWnd_x                                      0xE17174
#define pinstCSocialWnd_x                                          0xE170DC
#define pinstCSpellBookWnd_x                                       0xE170C0
#define pinstCStoryWnd_x                                           0xE178E0
#define pinstCTargetOfTargetWnd_x                                  0xF8B0C8
#define pinstCTargetWnd_x                                          0xE17118
#define pinstCTaskOverlayWnd_x                                     0xE171A0
#define pinstCTaskSelectWnd_x                                      0xF8B220
#define pinstCTaskManager_x                                        0xCE8BF8
#define pinstCTaskTemplateSelectWnd_x                              0xF8B2D0
#define pinstCTaskWnd_x                                            0xF8B380
#define pinstCTextEntryWnd_x                                       0xE17184
#define pinstCTimeLeftWnd_x                                        0xE17908
#define pinstCTipWndCONTEXT_x                                      0xF8B584
#define pinstCTipWndOFDAY_x                                        0xF8B580
#define pinstCTitleWnd_x                                           0xF8B630
#define pinstCTrackingWnd_x                                        0xE1710C
#define pinstCTradeskillWnd_x                                      0xF8B798
#define pinstCTradeWnd_x                                           0xE178FC
#define pinstCTrainWnd_x                                           0xE17404
#define pinstCTributeBenefitWnd_x                                  0xF8B998
#define pinstCTributeMasterWnd_x                                   0xF8BA48
#define pinstCTributeTrophyWnd_x                                   0xF8BAF8
#define pinstCVideoModesWnd_x                                      0xE171E0
#define pinstCVoiceMacroWnd_x                                      0xF74E48
#define pinstCVoteResultsWnd_x                                     0xE17094
#define pinstCVoteWnd_x                                            0xE17084
#define pinstCWebManager_x                                         0xF754C4
#define pinstCZoneGuideWnd_x                                       0xE171A4
#define pinstCZonePathWnd_x                                        0xE171C8
#define pinstEQSuiteTextureLoader_x                                0xCB6020
#define pinstItemIconCache_x                                       0xF849D8
#define pinstLootFiltersManager_x                                  0xCE8368
#define pinstRewardSelectionWnd_x                                  0xF89A68

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x5BFAC0
#define __CastRay2_x                                               0x5BFB10
#define __ConvertItemTags_x                                        0x5DB970
#define __CleanItemTags_x                                          0x47D470
#define __CreateCascadeMenuItems_x                                 0x55A700
#define __DoesFileExist_x                                          0x91C8B0
#define __EQGetTime_x                                              0x919350
#define __ExecuteCmd_x                                             0x5B8360
#define __FixHeading_x                                             0x9AE890
#define __FlushDxKeyboard_x                                        0x6CA7B0
#define __GameLoop_x                                               0x6CDAE0
#define __get_bearing_x                                            0x5BF620
#define __get_melee_range_x                                        0x5BFD00
#define __GetAnimationCache_x                                      0x732DB0
#define __GetGaugeValueFromEQ_x                                    0x825020
#define __GetLabelFromEQ_x                                         0x826B00
#define __GetXTargetType_x                                         0x9B03B0
#define __HandleMouseWheel_x                                       0x6CE9C0
#define __HeadingDiff_x                                            0x9AE900
#define __HelpPath_x                                               0xF701CC
#define __LoadFrontEnd_x                                           0x6CADF0
#define __NewUIINI_x                                               0x824CF0
#define __ProcessGameEvents_x                                      0x620390
#define __ProcessKeyboardEvents_x                                  0x6CC340
#define __ProcessMouseEvents_x                                     0x61FB20
#define __SaveColors_x                                             0x55A5E0
#define __STMLToText_x                                             0x951E30
#define __WndProc_x                                                0x6CCDA0
#define CMemoryMappedFile__SetFile_x                               0xA9DAE0
#define CrashDetected_x                                            0x6CC8A0
#define DrawNetStatus_x                                            0x64C5A0
#define Expansion_HoT_x                                            0xED211C
#define Teleport_Table_Size_x                                      0xEC9814
#define Teleport_Table_x                                           0xEC9CD8
#define Util__FastTime_x                                           0x918F20
#define __eq_delete_x                                              0x9B6D6E
#define __eq_new_x                                                 0x9B7324
#define __CopyLayout_x                                             0x63A6B0
#define __ThrottleFrameRate_x                                      0x623A70

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x6DACB0
#define CAAWnd__Update_x                                           0x6D9FD0
#define CAAWnd__UpdateSelected_x                                   0x6D7520

// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x490770
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x499750
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x499520
#define CAdvancedLootWnd__AddPlayerToList_x                        0x493D00
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x493150

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x5626F0
#define AltAdvManager__IsAbilityReady_x                            0x561490
#define AltAdvManager__GetAAById_x                                 0x561820
#define AltAdvManager__CanTrainAbility_x                           0x561890
#define AltAdvManager__CanSeeAbility_x                             0x561BF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x4C7500
#define CharacterZoneClient__CalcAffectChange_x                    0x4C5DB0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4C5F90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4BBEA0
#define CharacterZoneClient__CharacterZoneClient_x                 0x4CB1F0
#define CharacterZoneClient__FindAffectSlot_x                      0x4C4AF0
#define CharacterZoneClient__FindItemByGuid_x                      0x4D86F0
#define CharacterZoneClient__FindItemByRecord_x                    0x4D8170
#define CharacterZoneClient__GetCurrentMod_x                       0x4E5EF0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DA2D0
#define CharacterZoneClient__GetEffect_x                           0x4BBDE0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4C5C10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x4B2180
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B3C10
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DA1F0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DA110
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4C5C60
#define CharacterZoneClient__GetMaxEffects_x                       0x4BF8C0
#define CharacterZoneClient__GetModCap_x                           0x4E5DF0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4C5B40
#define CharacterZoneClient__HasSkill_x                            0x4D6070
#define CharacterZoneClient__IsStackBlocked_x                      0x4C2A10
#define CharacterZoneClient__MakeMeVisible_x                       0x4D7790

// CBankWnd
#define CBankWnd__GetNumBankSlots_x                                0x6F44F0
#define CBankWnd__WndNotification_x                                0x6F42D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleBazaarMsg_x                        0x701EA0

// CButtonWnd
#define CButtonWnd__SetCheck_x                                     0x62EC00
#define CButtonWnd__CButtonWnd_x                                   0x94E220
#define CButtonWnd__dCButtonWnd_x                                  0x94E500
#define CButtonWnd__vftable_x                                      0xB59918

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x721ED0
#define CChatWindowManager__InitContextMenu_x                      0x71B000
#define CChatWindowManager__FreeChatWindow_x                       0x720A10
#define CChatWindowManager__GetLockedActiveChatWindow_x            0x4E9A40
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x721B50
#define CChatWindowManager__CreateChatWindow_x                     0x721050

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4E9B50

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x722700
#define CChatWindow__Clear_x                                       0x7239C0
#define CChatWindow__WndNotification_x                             0x724150
#define CChatWindow__AddHistory_x                                  0x723280

// CContextMenu
#define CContextMenu__CContextMenu_x                               0x9627B0
#define CContextMenu__dCContextMenu_x                              0x9629F0
#define CContextMenu__AddMenuItem_x                                0x962A00
#define CContextMenu__RemoveMenuItem_x                             0x962D10
#define CContextMenu__RemoveAllMenuItems_x                         0x962D30
#define CContextMenu__CheckMenuItem_x                              0x962DB0
#define CContextMenu__SetMenuItem_x                                0x962C30
#define CContextMenu__AddSeparator_x                               0x962B90

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x963340
#define CContextMenuManager__RemoveMenu_x                          0x9633B0
#define CContextMenuManager__PopupMenu_x                           0x963470
#define CContextMenuManager__Flush_x                               0x9632E0
#define CContextMenuManager__GetMenu_x                             0x49B9F0
#define CContextMenuManager__CreateDefaultMenu_x                   0x72D5E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8F3FD0
#define CChatService__GetFriendName_x                              0x8F3FE0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x95FC10
#define CComboWnd__Draw_x                                          0x95F110
#define CComboWnd__GetCurChoice_x                                  0x95FA50
#define CComboWnd__GetListRect_x                                   0x95F5B0
#define CComboWnd__GetTextRect_x                                   0x95FC80
#define CComboWnd__InsertChoice_x                                  0x95F740
#define CComboWnd__SetColors_x                                     0x95F710
#define CComboWnd__SetChoice_x                                     0x95FA20
#define CComboWnd__GetItemCount_x                                  0x95FA60
#define CComboWnd__GetCurChoiceText_x                              0x95FAA0
#define CComboWnd__GetChoiceText_x                                 0x95FA70
#define CComboWnd__InsertChoiceAtIndex_x                           0x95F7E0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x72B000
#define CContainerWnd__vftable_x                                   0xB2584C
#define CContainerWnd__SetContainer_x                              0x72C550

// CDisplay
#define CDisplay__cameraType_x                                     0xE171EC
#define CDisplay__ZoneMainUI_x                                     0x554F90
#define CDisplay__PreZoneMainUI_x                                  0x554FA0
#define CDisplay__CleanGameUI_x                                    0x55A3A0
#define CDisplay__GetClickedActor_x                                0x54D360
#define CDisplay__GetUserDefinedColor_x                            0x5459E0
#define CDisplay__GetWorldFilePath_x                               0x54EDD0
#define CDisplay__is3dON_x                                         0x549FC0
#define CDisplay__ReloadUI_x                                       0x554410
#define CDisplay__WriteTextHD2_x                                   0x549DB0
#define CDisplay__TrueDistance_x                                   0x550A90
#define CDisplay__SetViewActor_x                                   0x54CC80
#define CDisplay__GetFloorHeight_x                                 0x54A080
#define CDisplay__SetRenderWindow_x                                0x548A00
#define CDisplay__ToggleScreenshotMode_x                           0x54C750
#define CDisplay__RealRender_World_x                               0x547E70

// CEditBaseWnd
#define CEditBaseWnd__SetSel_x                                     0x982540

// CEditWnd
#define CEditWnd__DrawCaret_x                                      0x965CB0
#define CEditWnd__EnsureCaretVisible_x                             0x967E80
#define CEditWnd__GetCaretPt_x                                     0x966E30
#define CEditWnd__GetCharIndexPt_x                                 0x966BE0
#define CEditWnd__GetDisplayString_x                               0x966A80
#define CEditWnd__GetHorzOffset_x                                  0x965350
#define CEditWnd__GetLineForPrintableChar_x                        0x967D80
#define CEditWnd__GetSelStartPt_x                                  0x966E90
#define CEditWnd__GetSTMLSafeText_x                                0x9668A0
#define CEditWnd__PointFromPrintableChar_x                         0x9679B0
#define CEditWnd__ReplaceSelection_x                               0x967620
#define CEditWnd__SelectableCharFromPoint_x                        0x967B20
#define CEditWnd__SetEditable_x                                    0x966F60
#define CEditWnd__SetWindowTextA_x                                 0x966620

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x60DC80
#define CEverQuest__ClickedPlayer_x                                0x5FFE00
#define CEverQuest__CreateTargetIndicator_x                        0x61D530
#define CEverQuest__DeleteTargetIndicator_x                        0x61D5C0
#define CEverQuest__DoTellWindow_x                                 0x4E9C30
#define CEverQuest__OutputTextToLog_x                              0x4E9F00
#define CEverQuest__DropHeldItemOnGround_x                         0x5F4F60
#define CEverQuest__dsp_chat_x                                     0x4EA290
#define CEverQuest__trimName_x                                     0x619740
#define CEverQuest__Emote_x                                        0x60E4E0
#define CEverQuest__EnterZone_x                                    0x608570
#define CEverQuest__GetBodyTypeDesc_x                              0x612CE0
#define CEverQuest__GetClassDesc_x                                 0x613320
#define CEverQuest__GetClassThreeLetterCode_x                      0x613920
#define CEverQuest__GetDeityDesc_x                                 0x61BD80
#define CEverQuest__GetLangDesc_x                                  0x613AE0
#define CEverQuest__GetRaceDesc_x                                  0x613300
#define CEverQuest__InterpretCmd_x                                 0x61C350
#define CEverQuest__LeftClickedOnPlayer_x                          0x5F90F0
#define CEverQuest__LMouseUp_x                                     0x5F7480
#define CEverQuest__RightClickedOnPlayer_x                         0x5F99D0
#define CEverQuest__RMouseUp_x                                     0x5F8400
#define CEverQuest__SetGameState_x                                 0x5F4CF0
#define CEverQuest__UPCNotificationFlush_x                         0x619640
#define CEverQuest__IssuePetCommand_x                              0x614EE0
#define CEverQuest__ReportSuccessfulHeal_x                         0x60F200
#define CEverQuest__ReportSuccessfulHit_x                          0x60F830

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x73D0B0
#define CGaugeWnd__CalcLinesFillRect_x                             0x73D110
#define CGaugeWnd__Draw_x                                          0x73C730

// CGuild
#define CGuild__FindMemberByName_x                                 0x4AFE90
#define CGuild__GetGuildName_x                                     0x4AE940
#define CGuild__GetGuildIndex_x                                    0x4AEF40

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x7572E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x62EFC0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x764310
#define CInvSlotMgr__MoveItem_x                                    0x763030
#define CInvSlotMgr__SelectSlot_x                                  0x7643E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x761850
#define CInvSlot__SliderComplete_x                                 0x75F5A0
#define CInvSlot__GetItemBase_x                                    0x75EF40
#define CInvSlot__UpdateItem_x                                     0x75F0B0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x765E40
#define CInvSlotWnd__CInvSlotWnd_x                                 0x764FE0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7659C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetSpell_x                                0x820390
#define CItemDisplayWnd__UpdateStrings_x                           0x774540
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x76E2B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x76E7B0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x774B50
#define CItemDisplayWnd__AboutToShow_x                             0x7741A0
#define CItemDisplayWnd__WndNotification_x                         0x775C70
#define CItemDisplayWnd__RequestConvertItem_x                      0x7756F0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x773200
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x773FC0

// CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x858F90

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x77A1B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x519550

// CLabel
#define CLabel__Draw_x                                             0x77FCD0

// CListWnd
#define CListWnd__CListWnd_x                                       0x938430
#define CListWnd__dCListWnd_x                                      0x938750
#define CListWnd__vftable_x                                        0xB591F0
#define CListWnd__AddColumn_x                                      0x93CBC0
#define CListWnd__AddColumn1_x                                     0x93CC10
#define CListWnd__AddLine_x                                        0x93CFA0
#define CListWnd__AddString_x                                      0x93CDA0
#define CListWnd__CalculateFirstVisibleLine_x                      0x93C980
#define CListWnd__CalculateVSBRange_x                              0x93C760
#define CListWnd__ClearSel_x                                       0x93D780
#define CListWnd__ClearAllSel_x                                    0x93D7E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x93E1F0
#define CListWnd__Compare_x                                        0x93C090
#define CListWnd__Draw_x                                           0x938880
#define CListWnd__DrawColumnSeparators_x                           0x93B060
#define CListWnd__DrawHeader_x                                     0x93B4D0
#define CListWnd__DrawItem_x                                       0x93B9D0
#define CListWnd__DrawLine_x                                       0x93B1D0
#define CListWnd__DrawSeparator_x                                  0x93B100
#define CListWnd__EnableLine_x                                     0x93A940
#define CListWnd__EnsureVisible_x                                  0x93E110
#define CListWnd__ExtendSel_x                                      0x93D6B0
#define CListWnd__GetColumnTooltip_x                               0x93A480
#define CListWnd__GetColumnMinWidth_x                              0x93A4F0
#define CListWnd__GetColumnWidth_x                                 0x93A3F0
#define CListWnd__GetCurSel_x                                      0x939D80
#define CListWnd__GetItemAtPoint_x                                 0x93ABC0
#define CListWnd__GetItemAtPoint1_x                                0x93AC30
#define CListWnd__GetItemData_x                                    0x939E00
#define CListWnd__GetItemHeight_x                                  0x93A1C0
#define CListWnd__GetItemIcon_x                                    0x939F90
#define CListWnd__GetItemRect_x                                    0x93AA30
#define CListWnd__GetItemText_x                                    0x939E40
#define CListWnd__GetSelList_x                                     0x93D830
#define CListWnd__GetSeparatorRect_x                               0x93AE70
#define CListWnd__InsertLine_x                                     0x93D390
#define CListWnd__RemoveLine_x                                     0x93D4E0
#define CListWnd__SetColors_x                                      0x93C730
#define CListWnd__SetColumnJustification_x                         0x93C460
#define CListWnd__SetColumnLabel_x                                 0x93CD40
#define CListWnd__SetColumnWidth_x                                 0x93C380
#define CListWnd__SetCurSel_x                                      0x93D5F0
#define CListWnd__SetItemColor_x                                   0x93DDC0
#define CListWnd__SetItemData_x                                    0x93DD80
#define CListWnd__SetItemText_x                                    0x93D9A0
#define CListWnd__ShiftColumnSeparator_x                           0x93C520
#define CListWnd__Sort_x                                           0x93C210
#define CListWnd__ToggleSel_x                                      0x93D620
#define CListWnd__SetColumnsSizable_x                              0x93C5D0
#define CListWnd__SetItemWnd_x                                     0x93DC50
#define CListWnd__GetItemWnd_x                                     0x939FE0
#define CListWnd__SetItemIcon_x                                    0x93DA20
#define CListWnd__CalculateCustomWindowPositions_x                 0x93CA80
#define CListWnd__SetVScrollPos_x                                  0x93C360

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x7952C0

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x7907B0
#define MapViewMap__dMapViewMap_x                                  0x790900
#define MapViewMap__vftable_x                                      0xB2CE88
#define MapViewMap__Clear_x                                        0x791130
#define MapViewMap__SaveEx_x                                       0x7944F0
#define MapViewMap__SetZoom_x                                      0x798BB0
#define MapViewMap__HandleLButtonDown_x                            0x790A10
#define MapViewMap__GetWorldCoordinates_x                          0x7939D0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7B54C0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7B5DA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7B62D0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7B9240
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7B4040
#define CMerchantWnd__SelectBuySellSlot_x                          0x7BEDE0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7B50E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8C2180
#define CPacketScrambler__hton_x                                   0x8C2170

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x95B7A0
#define CSidlManagerBase__CreatePageWnd_x                          0x95AFA0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x957230
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9571C0
#define CSidlManagerBase__FindAnimation1_x                         0x957410
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x957820
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x957610
#define CSidlManagerBase__CreateLabel_x                            0x817510
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x95A780
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x95A950
#define CSidlManagerBase__CreateXWnd_x                             0x817440

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x817A00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x953F00
#define CSidlScreenWnd__CalculateVSBRange_x                        0x953E00
#define CSidlScreenWnd__ConvertToRes_x                             0x97D030
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x9538F0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x9535E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x9536B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x953780
#define CSidlScreenWnd__DrawSidlPiece_x                            0x9543A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x954870
#define CSidlScreenWnd__GetChildItem_x                             0x9547F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x954590
#define CSidlScreenWnd__HandleLButtonUp_x                          0x943FE0
#define CSidlScreenWnd__Init1_x                                    0x9531E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x9548C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9553F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x9525F0
#define CSidlScreenWnd__m_layoutCopy_x                             0x16066B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x954F70
#define CSidlScreenWnd__StoreIniVis_x                              0x9552D0
#define CSidlScreenWnd__vftable_x                                  0xB59BA8
#define CSidlScreenWnd__WndNotification_x                          0x9542B0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6943E0
#define CSkillMgr__GetSkillCap_x                                   0x6945C0
#define CSkillMgr__GetNameToken_x                                  0x693B60
#define CSkillMgr__IsActivatedSkill_x                              0x693CA0
#define CSkillMgr__IsCombatSkill_x                                 0x693BE0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x964120
#define CSliderWnd__SetValue_x                                     0x963F90
#define CSliderWnd__SetNumTicks_x                                  0x963FF0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x81D720

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x96CA80
#define CStmlWnd__CalculateHSBRange_x                              0x96DB60
#define CStmlWnd__CalculateVSBRange_x                              0x96DAD0
#define CStmlWnd__CanBreakAtCharacter_x                            0x971EA0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x972B30
#define CStmlWnd__ForceParseNow_x                                  0x96D020
#define CStmlWnd__GetNextTagPiece_x                                0x971E00
#define CStmlWnd__GetSTMLText_x                                    0x50AA90
#define CStmlWnd__GetVisibleText_x                                 0x96D040
#define CStmlWnd__InitializeWindowVariables_x                      0x972980
#define CStmlWnd__MakeStmlColorTag_x                               0x96C0F0
#define CStmlWnd__MakeWndNotificationTag_x                         0x96C160
#define CStmlWnd__SetSTMLText_x                                    0x96B1A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x973C30
#define CStmlWnd__UpdateHistoryString_x                            0x972D40

// CTabWnd
#define CTabWnd__Draw_x                                            0x96A2F0
#define CTabWnd__DrawCurrentPage_x                                 0x96AA20
#define CTabWnd__DrawTab_x                                         0x96A740
#define CTabWnd__GetCurrentPage_x                                  0x969AF0
#define CTabWnd__GetCurrentTabIndex_x                              0x969AE0
#define CTabWnd__GetPageFromTabIndex_x                             0x96A680
#define CTabWnd__GetPageInnerRect_x                                0x969D30
#define CTabWnd__GetTabInnerRect_x                                 0x969C70
#define CTabWnd__GetTabRect_x                                      0x969B20
#define CTabWnd__InsertPage_x                                      0x969F40
#define CTabWnd__RemovePage_x                                      0x96A0B0
#define CTabWnd__SetPage_x                                         0x969DB0
#define CTabWnd__SetPageRect_x                                     0x96A230
#define CTabWnd__UpdatePage_x                                      0x96A600

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x969690
#define CPageWnd__GetTabText_x                                     0x77A5B0
#define CPageWnd__SetTabText_x                                     0x969630


// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x4A9240

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x940EE0
#define CTextureFont__DrawWrappedText1_x                           0x940E10
#define CTextureFont__DrawWrappedText2_x                           0x940F30
#define CTextureFont__GetTextExtent_x                              0x9410A0

// CWebManager
#define CWebManager__CreateHtmlWnd_x                               0x6C7960
#define CHtmlComponentWnd__ValidateUri_x                           0x758CD0
#define CHtmlWnd__SetClientCallbacks_x                             0x634050
#define CHtmlWnd__AddObserver_x                                    0x634070
#define CHtmlWnd__RemoveObserver_x                                 0x6340D0
#define Window__getProgress_x                                      0x8775C0
#define Window__getStatus_x                                        0x8775E0
#define Window__getURI_x                                           0x8775F0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x979E30

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x92E030

// CXStr
// WARNING:  Be sure that none of these offsets are identical!
//
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor.
#define CXStr__CXStr_x                                             0x4E9930
#define CXStr__CXStr1_x                                            0xA04F70
#define CXStr__CXStr3_x                                            0x915310
#define CXStr__dCXStr_x                                            0x478760
#define CXStr__operator_equal_x                                    0x915540
#define CXStr__operator_equal1_x                                   0x915580
#define CXStr__operator_plus_equal1_x                              0x916010
#define CXStr__SetString_x                                         0x917F00
#define CXStr__operator_char_p_x                                   0x915A50
#define CXStr__GetChar_x                                           0x917830
#define CXStr__Delete_x                                            0x917100
#define CXStr__GetUnicode_x                                        0x9178A0
#define CXStr__GetLength_x                                         0x4A8FF0
#define CXStr__Mid_x                                               0x47D820
#define CXStr__Insert_x                                            0x917900
#define CXStr__FindNext_x                                          0x917570
#define CXStr__gFreeLists_x                                        0xCB5630
#define CXStr__gCXStrAccess_x                                      0x1605F1C

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9623D0

// CXWnd
#define CXWnd__BringToTop_x                                        0x947790
#define CXWnd__Center_x                                            0x947310
#define CXWnd__ClrFocus_x                                          0x947120
#define CXWnd__Destroy_x                                           0x9471D0
#define CXWnd__DoAllDrawing_x                                      0x943780
#define CXWnd__DrawChildren_x                                      0x943750
#define CXWnd__DrawColoredRect_x                                   0x943BD0
#define CXWnd__DrawTooltip_x                                       0x9422C0
#define CXWnd__DrawTooltipAtPoint_x                                0x942380
#define CXWnd__GetBorderFrame_x                                    0x943A30
#define CXWnd__GetChildItem_x                                      0x9479A0
#define CXWnd__GetChildWndAt_x                                     0x947830
#define CXWnd__GetClientClipRect_x                                 0x9459A0
#define CXWnd__GetRelativeRect_x                                   0x945D00
#define CXWnd__GetScreenClipRect_x                                 0x945A70
#define CXWnd__GetScreenRect_x                                     0x945C30
#define CXWnd__GetTooltipRect_x                                    0x943C20
#define CXWnd__GetWindowTextA_x                                    0x49D0F0
#define CXWnd__IsActive_x                                          0x944360
#define CXWnd__IsDescendantOf_x                                    0x946650
#define CXWnd__IsReallyVisible_x                                   0x946680
#define CXWnd__IsType_x                                            0x947EB0
#define CXWnd__Minimize_x                                          0x946DB0
#define CXWnd__Move_x                                              0x9466F0
#define CXWnd__Move1_x                                             0x9467A0
#define CXWnd__ProcessTransition_x                                 0x9472C0
#define CXWnd__Refade_x                                            0x946A80
#define CXWnd__Resize_x                                            0x946D40
#define CXWnd__Right_x                                             0x947550
#define CXWnd__SetFocus_x                                          0x9470E0
#define CXWnd__SetFont_x                                           0x947150
#define CXWnd__SetKeyTooltip_x                                     0x947CC0
#define CXWnd__SetMouseOver_x                                      0x944B70
#define CXWnd__SetParent_x                                         0x9463F0
#define CXWnd__StartFade_x                                         0x946540
#define CXWnd__vftable_x                                           0xB59634
#define CXWnd__CXWnd_x                                             0x9413C0
#define CXWnd__dCXWnd_x                                            0x9418F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x97E0B0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x94A6A0
#define CXWndManager__DrawWindows_x                                0x94A6C0
#define CXWndManager__GetKeyboardFlags_x                           0x94CE70
#define CXWndManager__HandleKeyboardMsg_x                          0x94CA20
#define CXWndManager__RemoveWnd_x                                  0x94D0A0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x94D5F0

// CDBStr
#define CDBStr__GetString_x                                        0x544990

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x4DAAE0
#define CharacterZoneClient__CastSpell_x                           0x4C0020
#define CharacterZoneClient__Cur_HP_x                              0x4D30B0
#define CharacterZoneClient__Cur_Mana_x                            0x4DA7D0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x4D5E30
#define CharacterZoneClient__GetBaseSkill_x                        0x4D6DD0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x4C3070
#define CharacterZoneClient__GetEnduranceRegen_x                   0x4E0C10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x4B3850
#define CharacterZoneClient__GetFocusRangeModifier_x               0x4B39A0
#define CharacterZoneClient__GetHPRegen_x                          0x4E0610
#define CharacterZoneClient__GetManaRegen_x                        0x4E1050
#define CharacterZoneClient__GetPCSpellAffect_x                    0x4C3DC0
#define CharacterZoneClient__Max_Endurance_x                       0x65AE00
#define CharacterZoneClient__Max_HP_x                              0x4D2EE0
#define CharacterZoneClient__Max_Mana_x                            0x65AC00
#define CharacterZoneClient__SpellDuration_x                       0x4C38F0
#define CharacterZoneClient__TotalEffect_x                         0x4C6DF0
#define CharacterZoneClient__UseSkill_x                            0x4E2E40

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x8E0FF0

// PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x671180

// PcClient
#define PcClient__PcClient_x                                       0x650C40
#define PcClient__GetConLevel_x                                    0x6534E0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BAA50
#define CCharacterListWnd__EnterWorld_x                            0x4BA430
#define CCharacterListWnd__Quit_x                                  0x4BA180
#define CCharacterListWnd__UpdateList_x                            0x4BA620

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x635210
#define EQ_Item__CreateItemTagString_x                             0x8BB7A0
#define EQ_Item__IsStackable_x                                     0x8C0400
#define EQ_Item__GetImageNum_x                                     0x8BD310
#define EQ_Item__CreateItemClient_x                                0x634450
#define EQ_Item__GetItemValue_x                                    0x8BE5D0
#define EQ_Item__ValueSellMerchant_x                               0x8C1D60
#define EQ_Item__IsKeyRingItem_x                                   0x8BFD00
#define EQ_Item__CanGoInBag_x                                      0x635330
#define EQ_Item__IsEmpty_x                                         0x8BF860
#define EQ_Item__GetMaxItemCount_x                                 0x8BE9F0
#define EQ_Item__GetHeldItem_x                                     0x8BD1E0
#define EQ_Item__GetAugmentFitBySlot_x                             0x8BB0D0
#define ItemClient__ItemClient_x                                   0x5B4F50
#define ItemClient__dItemClient_x                                  0x6343A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x5633C0
#define EQ_LoadingS__Array_x                                       0xC3EC68

// EQ_PC
#define EQ_PC__GetAlternateAbilityId_x                             0x8CAD30
#define EQ_PC__GetCombatAbility_x                                  0x8CB3A0
#define EQ_PC__GetCombatAbilityTimer_x                             0x8CB410
#define EQ_PC__GetItemRecastTimer_x                                0x65D760
#define EQ_PC__HasLoreItem_x                                       0x653CA0
#define EQ_PC__AlertInventoryChanged_x                             0x652E10
#define EQ_PC__GetPcZoneClient_x                                   0x680190
#define EQ_PC__RemoveMyAffect_x                                    0x6609A0
#define EQ_PC__GetKeyRingItems_x                                   0x8CBCA0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8CBA30
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8CBFA0

// EQItemList
#define EQItemList__EQItemList_x                                   0x5BD010
#define EQItemList__add_object_x                                   0x5EA6D0
#define EQItemList__add_item_x                                     0x5BD570
#define EQItemList__delete_item_x                                  0x5BD5C0
#define EQItemList__FreeItemList_x                                 0x5BD4C0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x541470

// EQPlayer
#define EQPlayer__ChangeBoneStringSprite_x                         0x672A80
#define EQPlayer__dEQPlayer_x                                      0x665E20
#define EQPlayer__DoAttack_x                                       0x67A930
#define EQPlayer__EQPlayer_x                                       0x6664E0
#define EQPlayer__SetNameSpriteState_x                             0x66A7B0
#define EQPlayer__SetNameSpriteTint_x                              0x66B690
#define PlayerBase__HasProperty_j_x                                0x9ACCA0
#define EQPlayer__IsTargetable_x                                   0x9AD140
#define EQPlayer__CanSee_x                                         0x9ACFA0
#define EQPlayer__CanSee1_x                                        0x9AD070
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ACD60

// PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x67DC30
#define PlayerZoneClient__GetLevel_x                               0x6801D0
#define PlayerZoneClient__IsValidTeleport_x                        0x5EB840
#define PlayerZoneClient__LegalPlayerRace_x                        0x55C200

// EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x675840
#define EQPlayerManager__GetSpawnByName_x                          0x6758F0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x675980

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x6388F0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x638970
#define KeypressHandler__AttachKeyToEqCommand_x                    0x6389B0
#define KeypressHandler__ClearCommandStateArray_x                  0x639DC0
#define KeypressHandler__HandleKeyDown_x                           0x639DE0
#define KeypressHandler__HandleKeyUp_x                             0x639E80
#define KeypressHandler__SaveKeymapping_x                          0x63A2D0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x8DF060

// StringTable
#define StringTable__getString_x                                   0x8D9F20

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x65D1E0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x65B700
#define PcZoneClient__GetPcSkillLimit_x                            0x660610
#define PcZoneClient__RemovePetEffect_x                            0x660C40
#define PcZoneClient__HasAlternateAbility_x                        0x65AA30
#define PcZoneClient__CanEquipItem_x                               0x65B0E0
#define PcZoneClient__GetItemByID_x                                0x65DBE0
#define PcZoneClient__GetItemByItemClass_x                         0x65DD30
#define PcZoneClient__RemoveBuffEffect_x                           0x660C60
#define PcZoneClient__BandolierSwap_x                              0x65BCB0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x65D700

// Doors
#define EQSwitch__UseSwitch_x                                      0x5F03C0

// IconCache
#define IconCache__GetIcon_x                                       0x732650

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x72A1A0
#define CContainerMgr__CloseContainer_x                            0x72A470
#define CContainerMgr__OpenExperimentContainer_x                   0x72AEF0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x7E97A0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x62D3D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x7876E0
#define CLootWnd__RequestLootSlot_x                                0x7869C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x58A0D0
#define EQ_Spell__SpellAffects_x                                   0x58A540
#define EQ_Spell__SpellAffectBase_x                                0x58A300
#define EQ_Spell__IsStackable_x                                    0x4CAB00
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4CA920
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4B7D20
#define EQ_Spell__IsSPAStacking_x                                  0x58B390
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x58A8A0
#define EQ_Spell__IsNoRemove_x                                     0x4CAAE0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x58B3A0
#define __IsResEffectSpell_x                                       0x4C9D20

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4AD410

// EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x8E9640

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x830A90
#define CTargetWnd__WndNotification_x                              0x8302D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x8305A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x82F440

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x8350E0
#define CTaskWnd__ConfirmAbandonTask_x                             0x837D10

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x53EEB0
#define CTaskManager__HandleMessage_x                              0x53D350
#define CTaskManager__GetTaskStatus_x                              0x53EF60
#define CTaskManager__GetElementDescription_x                      0x53EFE0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x585280
#define EqSoundManager__PlayScriptMp3_x                            0x585540
#define EqSoundManager__SoundAssistPlay_x                          0x698340
#define EqSoundManager__WaveInstancePlay_x                         0x6978B0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x530400

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x968D40
#define CTextureAnimation__SetCurCell_x                            0x968B40

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x56AF60
#define CAltAbilityData__GetMercMaxRank_x                          0x56AEF0
#define CAltAbilityData__GetMaxRank_x                              0x560310

// CTargetRing
#define CTargetRing__Cast_x                                        0x62B4E0

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x517720
#define CharacterBase__CreateItemIndex_x                           0x633600
#define CharacterBase__GetItemByGlobalIndex_x                      0x8F1C80
#define CharacterBase__GetItemByGlobalIndex1_x                     0x8F1CE0
#define CharacterBase__GetItemPossession_x                         0x503460
#define CharacterBase__GetMemorizedSpell_x                         0x4CA900
#define CharacterBase__IsExpansionFlag_x                           0x5B6B70

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x711260
#define CCastSpellWnd__IsBardSongPlaying_x                         0x711A90
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x711B40

// messages
#define msg_spell_worn_off_x                                       0x5AEC10
#define msg_new_text_x                                             0x5A35D0
#define __msgTokenTextParam_x                                      0x5B0EB0
#define msgTokenText_x                                             0x5B1100

// SpellManager
#define SpellManager__vftable_x                                    0xAFF314
#define SpellManager__SpellManager_x                               0x69B670
#define Spellmanager__LoadTextSpells_x                             0x69BF60
#define SpellManager__GetSpellByGroupAndRank_x                     0x69B840

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x9B0CA0

// ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x8E9FE0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x8EA260

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x780010

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x72E870
#define CCursorAttachment__AttachToCursor1_x                       0x72E8B0
#define CCursorAttachment__Deactivate_x                            0x72F8A0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x9780E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x978860
#define CEQSuiteTextureLoader__GetTexture_x                        0x978520

// CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x514CA0
#define CFindItemWnd__WndNotification_x                            0x515780
#define CFindItemWnd__Update_x                                     0x5162F0
#define CFindItemWnd__PickupSelectedItem_x                         0x5144D0

// IString
#define IString__Append_x                                          0x504D70

// Camera
#define EverQuest__Cameras_x                                       0xED246C

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x51D6C0
#define LootFiltersManager__GetItemFilterData_x                    0x51CFD0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x51D000
#define LootFiltersManager__SetItemLootFilter_x                    0x51D220

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7D7590

// CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9B67E0
#define CResolutionHandler__GetWindowedStyle_x                     0x692FB0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x726E60

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x8FF650
#define CDistillerInfo__Instance_x                                 0x8FF5F0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x746080
#define CGroupWnd__UpdateDisplay_x                                 0x7453D0

// ItemBase
#define ItemBase__IsLore_x                                         0x8BFDB0
#define ItemBase__IsLoreEquipped_x                                 0x8BFE30

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x5EA630
#define EQPlacedItemManager__GetItemByGuid_x                       0x5EA770
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x5EA7D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x688890
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x68C210

// CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x50B090

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x4F71B0
#define FactionManagerClient__HandleFactionMessage_x               0x4F7820
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x4F7E20
#define FactionManagerClient__GetMaxFaction_x                      0x4F7E3F
#define FactionManagerClient__GetMinFaction_x                      0x4F7DF0

// BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x503430

// ArrayClass
#define ArrayClass__DeleteElement_x                                0x93FE90

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49C400

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x503780

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x56A420

// CTargetManager
#define CTargetManager__Get_x                                      0x69EEF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x688890

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4A9000

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5BD460

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xF6FB00

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x92A620

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x483520

//
// EQGraphicsDX9.dll offsets (maybe this should go in eqgraphics.h?)
//

#define __eqgraphics_fopen_x                                       0x10147B28

#define CParticleSystem__Render_x                                  0x10070F10

#define CRender__RenderScene_x                                     0x10093140
#define CRender__ResetDevice_x                                     0x100929B0

//
// eqmain.dll offsets
//

#define EQMain__CEQSuiteTextureLoader__GetTexture_x                0x1008A270
#define EQMain__CLoginViewManager__HandleLButtonUp_x               0x10019AB0
#define EQMain__CXWndManager__GetCursorToDisplay_x                 0x1007C550
#define EQMain__LoginController__FlushDxKeyboard_x                 0x100153B0
#define EQMain__LoginController__GiveTime_x                        0x10015410
#define EQMain__LoginServerAPI__JoinServer_x                       0x10016F00
#define EQMain__WndProc_x                                          0x1000BFA0

#define EQMain__pinstCEQSuiteTextureLoader_x                       0x10166D38
#define EQMain__pinstCLoginViewManager_x                           0x1016D3B4
#define EQMain__pinstCXWndManager_x                                0x1037F8AC
#define EQMain__pinstCSidlManager_x                                0x1037F8B0
#define EQMain__pinstLoginController_x                             0x1016D3B8
#define EQMain__pinstLoginServerAPI_x                              0x1016D3A8
