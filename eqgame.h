/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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

#define __ClientDate                                               20240724u
#define __ExpectedVersionDate                                     "Jul 24 2024"
#define __ExpectedVersionTime                                     "09:16:12"
#define __ActualVersionDate_x                                      0x140942B20
#define __ActualVersionTime_x                                      0x140942B10
#define __ActualVersionBuild_x                                     0x1408D9560

// Memory Protection
#define __MemChecker0_x                                            0x1402B0A60
#define __MemChecker1_x                                            0x14056DC60
#define __MemChecker4_x                                            0x14027F390
#define __EncryptPad0_x                                            0x140D0FE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E48A80
#define instEQZoneInfo_x                                           0x140E48C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140215FB0
#define __gfMaxZoomCameraDistance_x                                0x1408DA7D8
#define __gfMaxCameraDistance_x                                    0x140A7F314
#define __CurrentSocial_x                                          0x140BCB940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D07710
#define g_eqCommandStates_x                                        0x140D08780
#define __CommandList_x                                            0x140D089C0
#define __ScreenMode_x                                             0x140D90264
#define __gWorld_x                                                 0x140E40F00
#define __gpbCommandEvent_x                                        0x140E40F10
#define __ServerHost_x                                             0x140E410F8
#define __Guilds_x                                                 0x140E47630
#define __MemCheckBitmask_x                                        0x140E48FB7
#define __MemCheckActive_x                                         0x140E4A6A5
#define __MouseEventTime_x                                         0x140EBDFF0
#define DI8__MouseState_x                                          0x140EC2238
#define __heqmain_x                                                0x140EC46D8
#define DI8__Mouse_x                                               0x140EC2188
#define __HWnd_x                                                   0x140EC2210
#define __Mouse_x                                                  0x140EC2144
#define DI8__Keyboard_x                                            0x140EC2160
#define __LoginName_x                                              0x140EC4DBC
#define __CurrentMapLabel_x                                        0x140ED85C0
#define __LabelCache_x                                             0x140ED9190
#define __ChatFilterDefs_x                                         0x140A1A420
#define Teleport_Table_Size_x                                      0x140E40F18
#define Teleport_Table_x                                           0x140E41510

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E439C0
#define pinstActiveBanker_x                                        0x140E41428
#define pinstActiveCorpse_x                                        0x140E41418
#define pinstActiveGMaster_x                                       0x140E41420
#define pinstActiveMerchant_x                                      0x140E41410
#define pinstAltAdvManager_x                                       0x140D911D8
#define pinstCEverQuest_x                                          0x140EC2180
#define pinstCamActor_x                                            0x140D90248
#define pinstCDBStr_x                                              0x140D8FF90
#define pinstCDisplay_x                                            0x140E41500
#define pinstControlledPlayer_x                                    0x140E414B8
#define pinstCResolutionHandler_x                                  0x141549958
#define pinstCSidlManager_x                                        0x140EEA490
#define pinstCXWndManager_x                                        0x140EEA488
#define instDynamicZone_x                                          0x140E474F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4753E
#define instExpeditionName_x                                       0x140E4757E
#define pinstDZMember_x                                            0x140E47608
#define pinstDZTimerInfo_x                                         0x140E47610
#define pinstEqLogin_x                                             0x140EC4700
#define instTribute_x                                              0x140D02D50
#define pinstDeviceInputProxy_x                                    0x140E48ADC
#define pinstEQSoundManager_x                                      0x140D91558
#define pinstEQSpellStrings_x                                      0x140D74B60
#define pinstSGraphicsEngine_x                                     0x1415496D8
#define pinstLocalPC_x                                             0x140E414E8
#define pinstLocalPlayer_x                                         0x140E41408
#define pinstCMercenaryClientManager_x                             0x140EBF8E8
#define pinstModelPlayer_x                                         0x140E41438
#define pinstRenderInterface_x                                     0x1415496F0
#define pinstSkillMgr_x                                            0x140EC1580
#define pinstSpawnManager_x                                        0x140EBFCA0
#define pinstSpellManager_x                                        0x140EC15E8
#define pinstStringTable_x                                         0x140E41508
#define pinstSwitchManager_x                                       0x140E40E80
#define pinstTarget_x                                              0x140E414B0
#define pinstTaskMember_x                                          0x140D02D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E414C0
#define pinstTradeTarget_x                                         0x140E41430
#define instTributeActive_x                                        0x140D02D79
#define pinstViewActor_x                                           0x140D90240
#define pinstWorldData_x                                           0x140E414F8
#define pinstPlayerPath_x                                          0x140EBFCC8
#define pinstTargetIndicator_x                                     0x140EC1698
#define EQObject_Top_x                                             0x140E414D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED5718
#define pinstCContainerMgr_x                                       0x140D90520
#define pinstCContextMenuManager_x                                 0x140EEA170
#define pinstCInvSlotMgr_x                                         0x140D90518
#define pinstCItemDisplayManager_x                                 0x140ED8190
#define pinstCPopupWndManager_x                                    0x140ED8A20
#define pinstCSpellDisplayMgr_x                                    0x140ED9070
#define pinstCTaskManager_x                                        0x140BCBC80
#define pinstEQSuiteTextureLoader_x                                0x140D19530
#define pinstItemIconCache_x                                       0x140ED5A78
#define pinstLootFiltersManager_x                                  0x140D8F9D8
#define pinstGFViewListener_x                                      0x140EE9948


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023F180
#define __CastRay_x                                                0x1402375C0
#define __CastRay2_x                                               0x1402372C0
#define __compress_block_x                                         0x140523310
#define __ConvertItemTags_x                                        0x140237A20
#define __CleanItemTags_x                                          0x140088100
#define __CreateCascadeMenuItems_x                                 0x140186920
#define __decompress_block_x                                       0x1405694D0
#define __DoesFileExist_x                                          0x140571B10
#define __EQGetTime_x                                              0x14056E210
#define __ExecuteCmd_x                                             0x14020D8C0
#define __FixHeading_x                                             0x14069A5A0
#define __FlushDxKeyboard_x                                        0x140332CE0
#define __get_bearing_x                                            0x140241370
#define __get_melee_range_x                                        0x140241460
#define __GetAnimationCache_x                                      0x1403B02E0
#define __GetGaugeValueFromEQ_x                                    0x1404E4130
#define __GetLabelFromEQ_x                                         0x1404E5740
#define __GetXTargetType_x                                         0x14069B880   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069A620
#define __HelpPath_x                                               0x140EBDEB8   // Why?
#define __NewUIINI_x                                               0x1404F11D0   // Why?
#define __ProcessDeviceEvents_x                                    0x14027F9A0
#define __ProcessGameEvents_x                                      0x1402746C0
#define __ProcessKeyboardEvents_x                                  0x140334430
#define __ProcessMouseEvents_x                                     0x140275DA0
#define __SaveColors_x                                             0x140196910
#define __STMLToText_x                                             0x140576450
#define __WndProc_x                                                0x140331500
#define CMemoryMappedFile__SetFile_x                               0x1407D2A70
#define DrawNetStatus_x                                            0x1402BEF10
#define Util__FastTime_x                                           0x14056D7A0
#define __eq_delete_x                                              0x1406A2754
#define __eq_new_x                                                 0x1406A2710
#define __CopyLayout_x                                             0x1402ACE70
#define __ThrottleFrameRate_x                                      0x140263F24
#define __ThrottleFrameRateEnd_x                                   0x140263F84

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140343AB0
#define CAAWnd__Update_x                                           0x140343DB0
#define CAAWnd__UpdateSelected_x                                   0x140344DF0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA500
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2DF0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140827B38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADF0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1A20
#define AltAdvManager__IsAbilityReady_x                            0x1401A1CA0
#define AltAdvManager__GetAAById_x                                 0x1401A12F0
#define AltAdvManager__CanTrainAbility_x                           0x1401A1120
#define AltAdvManager__CanSeeAbility_x                             0x1401A0DE0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0F40
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1D80
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1FD0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5E90
#define CharacterZoneClient__CanUseItem_x                          0x1400E62C0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D29A0
#define CharacterZoneClient__CastSpell_x                           0x1400D2A40
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1DF0
#define CharacterZoneClient__Cur_HP_x                              0x1400E79D0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7B90
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D57E0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE060
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FCA90  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6C90
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5790
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFC20
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EEAF0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6E60
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7350
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8D20
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF230
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7640
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFEB0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6EE0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0C90
#define CharacterZoneClient__GetModCap_x                           0x1400F8250
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7170
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7380
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBE90
#define CharacterZoneClient__HasSkill_x                            0x1400F3C80
#define CharacterZoneClient__HitBySpell_x                          0x1400D7E30
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB5D0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7D30
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBC20  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8080
#define CharacterZoneClient__Max_Mana_x                            0x1402DBE40  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F84E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE980
#define CharacterZoneClient__SpellDuration_x                       0x1400DF680
#define CharacterZoneClient__TotalEffect_x                         0x1400E09D0
#define CharacterZoneClient__UseSkill_x                            0x1400FDA00


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361F20

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C270

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140368100
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036BCF0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036E920

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9E000

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391BF0
#define CChatWindowManager__InitContextMenu_x                      0x140391D80
#define CChatWindowManager__FreeChatWindow_x                       0x140390C70
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140399930
#define CChatWindowManager__CreateChatWindow_x                     0x1403905B0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105F50

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039A970
#define CChatWindow__Clear_x                                       0x14039B920
#define CChatWindow__WndNotification_x                             0x14039CB00
#define CChatWindow__AddHistory_x                                  0x14039B420

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AB680
#define CContextMenu__RemoveMenuItem_x                             0x1405ABA70
#define CContextMenu__RemoveAllMenuItems_x                         0x1405ABA40
#define CContextMenu__CheckMenuItem_x                              0x1405AB8B0
#define CContextMenu__SetMenuItem_x                                0x1405ABA90
#define CContextMenu__AddSeparator_x                               0x1405AB7F0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059D540
#define CContextMenuManager__RemoveMenu_x                          0x14059DB20
#define CContextMenuManager__PopupMenu_x                           0x14059D860
#define CContextMenuManager__Flush_x                               0x14059D5C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8220

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140663390
#define CChatService__GetFriendName_x                              0x1406633A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058E480
#define CComboWnd__Draw_x                                          0x14058E580
#define CComboWnd__GetCurChoice_x                                  0x14058E860  // unused
#define CComboWnd__GetListRect_x                                   0x14058E900
#define CComboWnd__InsertChoice_x                                  0x14058EC40
#define CComboWnd__SetColors_x                                     0x14058EFD0
#define CComboWnd__SetChoice_x                                     0x14058EF90
#define CComboWnd__GetItemCount_x                                  0x14058E8F0
#define CComboWnd__GetCurChoiceText_x                              0x14058E8A0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058E830
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058ED00

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5F90
#define CContainerWnd__SetContainer_x                              0x1403FB610
#define CContainerWnd__vftable_x                                   0x1409B6578

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8FFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C5830
#define CDisplay__PreZoneMainUI_x                                  0x140193830
#define CDisplay__CleanGameUI_x                                    0x140185A00
#define CDisplay__GetClickedActor_x                                0x140189B80
#define CDisplay__GetUserDefinedColor_x                            0x14018A7F0
#define CDisplay__InitCharSelectUI_x                               0x14018AAA0
#define CDisplay__ReloadUI_x                                       0x140195B20
#define CDisplay__RestartUI_x                                      0x1401F3F40
#define CDisplay__WriteTextHD2_x                                   0x14019CB40
#define CDisplay__TrueDistance_x                                   0x14019C7F0
#define CDisplay__SetViewActor_x                                   0x140199030
#define CDisplay__GetFloorHeight_x                                 0x140189DE0
#define CDisplay__ToggleScreenshotMode_x                           0x14019C2E0
#define CDisplay__RealRender_World_x                               0x140194F00

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CFA30
#define CEditWnd__DrawCaret_x                                      0x1405C1550  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C19F0
#define CEditWnd__GetCaretPt_x                                     0x1405C1C70  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C1CB0
#define CEditWnd__GetDisplayString_x                               0x1405C1F20
#define CEditWnd__GetHorzOffset_x                                  0x1405C2150
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C22A0
#define CEditWnd__GetSelStartPt_x                                  0x1405C2580  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C23D0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C3130
#define CEditWnd__ReplaceSelection_x                               0x1405C34E0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3980
#define CEditWnd__SetEditable_x                                    0x1405C3C00
#define CEditWnd__SetWindowText_x                                  0x1405C3C30

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265030
#define CEverQuest__ClickedPlayer_x                                0x14025AB30
#define CEverQuest__CreateTargetIndicator_x                        0x14025B3F0
#define CEverQuest__DoTellWindow_x                                 0x140105C60 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106520 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402669F0
#define CEverQuest__dsp_chat_x                                     0x140105690 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140290DB0
#define CEverQuest__Emote_x                                        0x1402673D0
#define CEverQuest__GetBodyTypeDesc_x                              0x140268180
#define CEverQuest__GetClassDesc_x                                 0x1402681E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402685B0
#define CEverQuest__GetDeityDesc_x                                 0x140268860
#define CEverQuest__GetLangDesc_x                                  0x140268C90
#define CEverQuest__GetRaceDesc_x                                  0x140269030
#define CEverQuest__InterpretCmd_x                                 0x14026A960
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027FA10
#define CEverQuest__LMouseUp_x                                     0x14026C350
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D230
#define CEverQuest__RMouseUp_x                                     0x140276930
#define CEverQuest__SetGameState_x                                 0x140281F50
#define CEverQuest__UPCNotificationFlush_x                         0x140287880 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026BFC0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140277CE0
#define CEverQuest__ReportSuccessfulHit_x                          0x140278B00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA6A0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C10A0
#define CGuild__GetGuildName_x                                     0x1400C10E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DCBD0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2980
#define CHotButton__SetCheck_x                                     0x1402A2C50

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4350
#define CInvSlotMgr__MoveItem_x                                    0x1403F4530
#define CInvSlotMgr__SelectSlot_x                                  0x1403F5EE0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F1540
#define CInvSlot__SliderComplete_x                                 0x1403F2A90
#define CInvSlot__GetItemBase_x                                    0x1403ED160
#define CInvSlot__UpdateItem_x                                     0x1403F2F50

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7270

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418770
#define CItemDisplayWnd__UpdateStrings_x                           0x14041B0E0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140415240
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404169B0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140417B80

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E0C70
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2960

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051C680

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140411960

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014E240

// CLabel
#define CLabel__UpdateText_x                                       0x1404224F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140591E10
#define CListWnd__dCListWnd_x                                      0x140592260
#define CListWnd__vftable_x                                        0x140A9C158
#define CListWnd__AddColumn_x                                      0x140592900
#define CListWnd__AddColumn1_x                                     0x1405929A0
#define CListWnd__AddLine_x                                        0x140592B00
#define CListWnd__AddString_x                                      0x140593090
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593600
#define CListWnd__CalculateVSBRange_x                              0x1405938E0
#define CListWnd__ClearSel_x                                       0x140593A90
#define CListWnd__ClearAllSel_x                                    0x140593A30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593AF0
#define CListWnd__Compare_x                                        0x140593CB0
#define CListWnd__Draw_x                                           0x140594180
#define CListWnd__DrawColumnSeparators_x                           0x140594D30
#define CListWnd__DrawHeader_x                                     0x140594DF0
#define CListWnd__DrawItem_x                                       0x1405954C0
#define CListWnd__DrawLine_x                                       0x140595E40
#define CListWnd__DrawSeparator_x                                  0x140596300
#define CListWnd__EnableLine_x                                     0x140596720
#define CListWnd__EnsureVisible_x                                  0x140596780
#define CListWnd__ExtendSel_x                                      0x140596880
#define CListWnd__GetColumnMinWidth_x                              0x140596BB0
#define CListWnd__GetColumnWidth_x                                 0x140596C30
#define CListWnd__GetCurSel_x                                      0x140596D30
#define CListWnd__GetItemData_x                                    0x1405970B0
#define CListWnd__GetItemHeight_x                                  0x1405970F0
#define CListWnd__GetItemRect_x                                    0x140597310
#define CListWnd__GetItemText_x                                    0x1405975B0
#define CListWnd__GetSelList_x                                     0x140597800
#define CListWnd__GetSeparatorRect_x                               0x1405979F0
#define CListWnd__InsertLine_x                                     0x140598E60
#define CListWnd__RemoveLine_x                                     0x1405994D0
#define CListWnd__SetColors_x                                      0x140599890
#define CListWnd__SetColumnJustification_x                         0x1405998B0
#define CListWnd__SetColumnLabel_x                                 0x140599930
#define CListWnd__SetColumnWidth_x                                 0x140599AD0
#define CListWnd__SetCurSel_x                                      0x140599BA0
#define CListWnd__SetItemColor_x                                   0x140599E10
#define CListWnd__SetItemData_x                                    0x140599EB0
#define CListWnd__SetItemText_x                                    0x14059A0F0
#define CListWnd__Sort_x                                           0x14059A500
#define CListWnd__ToggleSel_x                                      0x14059A670
#define CListWnd__SetColumnsSizable_x                              0x140599B20
#define CListWnd__SetItemWnd_x                                     0x14059A220
#define CListWnd__GetItemWnd_x                                     0x140597790
#define CListWnd__SetItemIcon_x                                    0x140599EF0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405933D0
#define CListWnd__SetVScrollPos_x                                  0x14059A460

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404357A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A03038
#define MapViewMap__Clear_x                                        0x140437320
#define MapViewMap__SetZoom_x                                      0x14043D970
#define MapViewMap__HandleLButtonDown_x                            0x14043A4B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045F020  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404655C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140465D60
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469580
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404688D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046D810

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063FE00
#define CPacketScrambler__hton_x                                   0x14063FDF0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BAE10
#define CSidlManagerBase__FindAnimation1_x                         0x1405BAD50
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BB440
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BB1F0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BA150
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BA0E0
#define CSidlManagerBase__CreateXWnd_x                             0x1405B9720

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D3C90
#define CSidlManager__CreateXWnd_x                                 0x1404D3E50

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F7C0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F8F0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9FA0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057FA70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057EF00
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057EFD0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057F1E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140580150
#define CSidlScreenWnd__EnableIniStorage_x                         0x140580380
#define CSidlScreenWnd__GetChildItem_x                             0x140580520
#define CSidlScreenWnd__GetSidlPiece_x                             0x140580770
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058A9C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580AE0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140580E50
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581710
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140582110
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE97E8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582790
#define CSidlScreenWnd__StoreIniVis_x                              0x140582F80
#define CSidlScreenWnd__vftable_x                                  0x140A9B3C8
#define CSidlScreenWnd__WndNotification_x                          0x140582FD0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C270 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C710 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C640
#define CSkillMgr__IsActivatedSkill_x                              0x14031CAC0
#define CSkillMgr__IsCombatSkill_x                                 0x14031CB00
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031CA30
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C690

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059AFF0
#define CSliderWnd__SetValue_x                                     0x14059B800
#define CSliderWnd__SetNumTicks_x                                  0x14059B680

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DA2C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059FFA0
#define CStmlWnd__CalculateHSBRange_x                              0x14058A390
#define CStmlWnd__CalculateVSBRange_x                              0x1405A0EC0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1940
#define CStmlWnd__ForceParseNow_x                                  0x1405A19E0
#define CStmlWnd__GetVisibleText_x                                 0x1405A20B0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3E10
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A3E50
#define CStmlWnd__SetSTMLText_x                                    0x1405AAE20
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AAFD0
#define CStmlWnd__UpdateHistoryString_x                            0x1405AB360

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059BBD0
#define CTabWnd__DrawCurrentPage_x                                 0x14059BC70
#define CTabWnd__DrawTab_x                                         0x14059C040
#define CTabWnd__GetTabRect_x                                      0x14059C6B0
#define CTabWnd__InsertPage_x                                      0x14059C980
#define CTabWnd__RemovePage_x                                      0x14059CC10
#define CTabWnd__SetPage_x                                         0x14059CD70
#define CTabWnd__UpdatePage_x                                      0x14059D070

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C4090
#define CPageWnd__SetTabText_x                                     0x1405C4100

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA7F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BAC00


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B27F0
#define CTextureFont__DrawWrappedText1_x                           0x1405B2700
#define CTextureFont__DrawWrappedText2_x                           0x1405B2920
#define CTextureFont__GetTextExtent_x                              0x1405B2CD0
#define CTextureFont__GetHeight_x                                  0x1405B2C90

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C8700

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057EAE0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D18EA0
#define CXStr__gCXStrAccess_x                                      0x140EE95E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585A00
#define CXWnd__ClrFocus_x                                          0x140585CF0
#define CXWnd__Destroy_x                                           0x140585E70
#define CXWnd__DoAllDrawing_x                                      0x140585F80
#define CXWnd__DrawColoredRect_x                                   0x140586750
#define CXWnd__DrawTooltip_x                                       0x140587DD0
#define CXWnd__DrawTooltipAtPoint_x                                0x140587E80
#define CXWnd__GetChildItem_x                                      0x140588790
#define CXWnd__GetChildWndAt_x                                     0x140588850
#define CXWnd__GetClientRect_x                                     0x140588AF0
#define CXWnd__GetClientClipRect_x                                 0x1405889C0
#define CXWnd__GetRelativeRect_x                                   0x14058A4B0
#define CXWnd__GetScreenClipRect_x                                 0x14058A5C0
#define CXWnd__GetScreenRect_x                                     0x14058A740
#define CXWnd__GetTooltipRect_x                                    0x14058A8C0
#define CXWnd__IsActive_x                                          0x14058AE80
#define CXWnd__IsDescendantOf_x                                    0x14058AEB0
#define CXWnd__IsReallyVisible_x                                   0x14058AF20
#define CXWnd__IsType_x                                            0x14058AF60
#define CXWnd__Minimize_x                                          0x14058B060
#define CXWnd__ProcessTransition_x                                 0x14058BF60
#define CXWnd__Resize_x                                            0x14058C070
#define CXWnd__Right_x                                             0x14058C110
#define CXWnd__SetFocus_x                                          0x14058C4D0
#define CXWnd__SetFont_x                                           0x14058C520
#define CXWnd__SetKeyTooltip_x                                     0x14058C630
#define CXWnd__SetMouseOver_x                                      0x14058C770
#define CXWnd__SetParent_x                                         0x14058C7F0
#define CXWnd__StartFade_x                                         0x14058CC40
#define CXWnd__vftable_x                                           0x140A9B9B8
#define CXWnd__CXWnd_x                                             0x140584590
#define CXWnd__dCXWnd_x                                            0x140584EE0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CF1B0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405ACC30
#define CXWndManager__DrawCursor_x                                 0x1405ACF10
#define CXWndManager__DrawWindows_x                                0x1405AD170
#define CXWndManager__GetKeyboardFlags_x                           0x1405AD840
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AD880
#define CXWndManager__RemoveWnd_x                                  0x1405B0EB0

// CDBStr
#define CDBStr__GetString_x                                        0x140183BB0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140649090

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CEAC0
#define CCharacterListWnd__EnterWorld_x                            0x1400CD7C0
#define CCharacterListWnd__Quit_x                                  0x1400CEAA0
#define CCharacterListWnd__UpdateList_x                            0x1400CF930

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406175F0
#define ItemBase__CreateItemTagString_x                            0x140618080
#define ItemBase__GetImageNum_x                                    0x14061A660
#define ItemBase__GetItemValue_x                                   0x14061C100
#define ItemBase__IsEmpty_x                                        0x14061DD00
#define ItemBase__IsKeyRingItem_x                                  0x14061E440
#define ItemBase__ValueSellMerchant_x                              0x140622630
#define ItemClient__CanDrop_x                                      0x1402A4F40
#define ItemClient__CanGoInBag_x                                   0x1402A5070
#define ItemClient__CreateItemClient_x                             0x1402A5350
#define ItemClient__dItemClient_x                                  0x1402A4DB0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A31C0
#define EQ_LoadingS__Array_x                                       0x140D05220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062EE60
#define PcBase__GetCombatAbility_x                                 0x14062F550
#define PcBase__GetCombatAbilityTimer_x                            0x14062F5F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062FD40
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140630830
#define PcClient__AlertInventoryChanged_x                          0x1402C74F0
#define PcClient__GetConLevel_x                                    0x1402C7B10  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA2B0
#define PcClient__HasLoreItem_x                                    0x1402CB280
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8BC0
#define PcZoneClient__RemoveMyAffect_x                             0x1402DCD60

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140211FD0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212180  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402122E0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212220  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C100  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E410

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068C940
#define PlayerBase__CanSee1_x                                      0x14068CA10
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068CED0
#define PlayerBase__HasProperty_x                                  0x14068D0A0
#define PlayerBase__IsTargetable_x                                 0x14068D160
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9850
#define PlayerClient__GetPcClient_x                                0x1402EC080
#define PlayerClient__PlayerClient_x                               0x1402E2B10
#define PlayerClient__SetNameSpriteState_x                         0x1402EF4D0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0490
#define PlayerZoneClient__ChangeHeight_x                           0x1402FEA40
#define PlayerZoneClient__DoAttack_x                               0x1402FF750
#define PlayerZoneClient__GetLevel_x                               0x140302E80
#define PlayerZoneClient__IsValidTeleport_x                        0x14024EE90
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401920B0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8360  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8410  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8510
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7E30
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068C500

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA370
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A9F70
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A9FE0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA300  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA490
#define KeypressHandler__HandleKeyUp_x                             0x1402AA5B0
#define KeypressHandler__SaveKeymapping_x                          0x1402AA210  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140646BD0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140641530

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1840  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D6BE0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D92C0
#define PcZoneClient__RemovePetEffect_x                            0x1402DCE60
#define PcZoneClient__HasAlternateAbility_x                        0x1402D9EB0
#define PcZoneClient__CanEquipItem_x                               0x1402D4F20
#define PcZoneClient__GetItemByID_x                                0x1402D7C80
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCBE0
#define PcZoneClient__BandolierSwap_x                              0x1402D3F00

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402539C0

// IconCache
#define IconCache__GetIcon_x                                       0x1403B0310

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4D40
#define CContainerMgr__CloseContainer_x                            0x1403A4680
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A50C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140498950

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D170

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404297C0
#define CLootWnd__RequestLootSlot_x                                0x14042A7E0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D23B0
#define EQ_Spell__SpellAffects_x                                   0x1401D3670
#define EQ_Spell__SpellAffectBase_x                                0x1401D35D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7550
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7500
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3290
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2E50
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D2720

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFCE0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F4990
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F40A0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F38A0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FC040  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017ADF0
#define CTaskManager__GetTaskStatus_x                              0x14017AF00
#define CTaskManager__GetElementDescription_x                      0x14017AA80

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D0720
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF560
#define EqSoundManager__SoundAssistPlay_x                          0x1403218C0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321C00  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058DA10
#define CTextureAnimation__SetCurCell_x                            0x14058DD20

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029B3D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140660AD0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140660B50
#define CharacterBase__IsExpansionFlag_x                           0x1401F3790

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140382B20
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140383490
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403849E0

// messages
#define msg_spell_worn_off_x                                       0x140208900
#define msg_new_text_x                                             0x140204190
#define __msgTokenTextParam_x                                      0x1401FBD00
#define msgTokenText_x                                             0x1401FBC20

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323280
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403231A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069BC60

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140422C30

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9A30
#define CCursorAttachment__IsOkToActivate_x                        0x1403AC9B0
#define CCursorAttachment__RemoveAttachment_x                      0x1403ACC60
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6BA0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C6D90
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6DA0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401494B0
#define CFindItemWnd__Update_x                                     0x140149E50
#define CFindItemWnd__PickupSelectedItem_x                         0x140143960

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152D40
#define LootFiltersManager__GetItemFilterData_x                    0x140153850
#define LootFiltersManager__RemoveItemLootFilter_x                 0x1401540F0
#define LootFiltersManager__SetItemLootFilter_x                    0x1401543A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047B7C0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031BE30
#define CResolutionHandler__UpdateResolution_x                     0x1406A0540

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A1090

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140664E50  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140664D40  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C5D60
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5940

// ItemBase
#define ItemBase__IsLore_x                                         0x14061E510
#define ItemBase__IsLoreEquipped_x                                 0x14061E5A0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD120

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C260
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C1F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C230

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316430

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123860
#define FactionManagerClient__HandleFactionMessage_x               0x140123C10
#define FactionManagerClient__GetFactionStanding_x                 0x140123030
#define FactionManagerClient__GetMaxFaction_x                      0x140123030
#define FactionManagerClient__GetMinFaction_x                      0x140122EE0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC9A0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F000

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABB10
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAE90
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB930  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB8B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403282F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316430

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212370

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405835C0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084FB0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339A20

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C980

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140649C10
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAF9E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529730

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
