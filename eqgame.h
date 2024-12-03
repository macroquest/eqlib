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

#define __ClientDate                                               20241202u
#define __ExpectedVersionDate                                     "Dec  2 2024"
#define __ExpectedVersionTime                                     "04:16:45"
#define __ActualVersionDate_x                                      0x14094CEE0
#define __ActualVersionTime_x                                      0x14094CED0
#define __ActualVersionBuild_x                                     0x1408E3770

// Memory Protection
#define __MemChecker0_x                                            0x1402B2B80
#define __MemChecker1_x                                            0x1405733A0
#define __MemChecker4_x                                            0x140281590
#define __EncryptPad0_x                                            0x140D19E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E52970
#define instEQZoneInfo_x                                           0x140E52B64 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140217EF0
#define __gfMaxZoomCameraDistance_x                                0x1408E49E8
#define __gfMaxCameraDistance_x                                    0x140A89718
#define __CurrentSocial_x                                          0x140BD5940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D11720
#define g_eqCommandStates_x                                        0x140D12790
#define __CommandList_x                                            0x140D129C0
#define __ScreenMode_x                                             0x140D9A244
#define __gWorld_x                                                 0x140E4D2A8
#define __gpbCommandEvent_x                                        0x140E4D2B4
#define __ServerHost_x                                             0x140E4D498
#define __Guilds_x                                                 0x140E51520
#define __MemCheckBitmask_x                                        0x140E52EAB
#define __MemCheckActive_x                                         0x140E5459D
#define __MouseEventTime_x                                         0x140EC7EE8
#define DI8__MouseState_x                                          0x140ECC118
#define __heqmain_x                                                0x140ECE5B8
#define DI8__Mouse_x                                               0x140ECC068
#define __HWnd_x                                                   0x140ECC0F0
#define __Mouse_x                                                  0x140ECC024
#define DI8__Keyboard_x                                            0x140ECC040
#define __LoginName_x                                              0x140ECEC9C
#define __CurrentMapLabel_x                                        0x140EE2530
#define __LabelCache_x                                             0x140EE3100
#define __ChatFilterDefs_x                                         0x140A24800
#define Teleport_Table_Size_x                                      0x140E4D340
#define Teleport_Table_x                                           0x140E4AE00

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E4D8B0
#define pinstActiveBanker_x                                        0x140E4D7D0
#define pinstActiveCorpse_x                                        0x140E4D7C0
#define pinstActiveGMaster_x                                       0x140E4D7C8
#define pinstActiveMerchant_x                                      0x140E4D7B8
#define pinstAltAdvManager_x                                       0x140D9B0C8
#define pinstCEverQuest_x                                          0x140ECC060
#define pinstCamActor_x                                            0x140D9A230
#define pinstCDBStr_x                                              0x140D99E80
#define pinstCDisplay_x                                            0x140E4D8A8
#define pinstControlledPlayer_x                                    0x140E4D860
#define pinstCResolutionHandler_x                                  0x1415538A8
#define pinstCSidlManager_x                                        0x140EF4400
#define pinstCXWndManager_x                                        0x140EF43F8
#define instDynamicZone_x                                          0x140E513E0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E5142E
#define instExpeditionName_x                                       0x140E5146E
#define pinstDZMember_x                                            0x140E514F8
#define pinstDZTimerInfo_x                                         0x140E51500
#define pinstEqLogin_x                                             0x140ECE5E0
#define instTribute_x                                              0x140D0CD50
#define pinstDeviceInputProxy_x                                    0x140E529CC
#define pinstEQSoundManager_x                                      0x140D9B448
#define pinstEQSpellStrings_x                                      0x140D7EA50
#define pinstSGraphicsEngine_x                                     0x141553628
#define pinstLocalPC_x                                             0x140E4D890
#define pinstLocalPlayer_x                                         0x140E4D7B0
#define pinstCMercenaryClientManager_x                             0x140EC97C8
#define pinstModelPlayer_x                                         0x140E4D7E0
#define pinstRenderInterface_x                                     0x141553640
#define pinstSkillMgr_x                                            0x140ECB468
#define pinstSpawnManager_x                                        0x140EC9B90
#define pinstSpellManager_x                                        0x140ECB4D0
#define pinstStringTable_x                                         0x140E4ADF0
#define pinstSwitchManager_x                                       0x140E4AD70
#define pinstTarget_x                                              0x140E4D858
#define pinstTaskMember_x                                          0x140D0CD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E4D868
#define pinstTradeTarget_x                                         0x140E4D7D8
#define instTributeActive_x                                        0x140D0CD79
#define pinstViewActor_x                                           0x140D9A228
#define pinstWorldData_x                                           0x140E4D8A0
#define pinstPlayerPath_x                                          0x140EC9BB8
#define pinstTargetIndicator_x                                     0x140ECB580
#define EQObject_Top_x                                             0x140E4D880

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EDF688
#define pinstCContainerMgr_x                                       0x140D99ED8
#define pinstCContextMenuManager_x                                 0x140EF40E0
#define pinstCInvSlotMgr_x                                         0x140D99ED0
#define pinstCItemDisplayManager_x                                 0x140EE2100
#define pinstCPopupWndManager_x                                    0x140EE2990
#define pinstCSpellDisplayMgr_x                                    0x140EE2FE0
#define pinstCTaskManager_x                                        0x140BD5C80
#define pinstEQSuiteTextureLoader_x                                0x140D23560
#define pinstItemIconCache_x                                       0x140EDF9E8
#define pinstLootFiltersManager_x                                  0x140D998C8
#define pinstGFViewListener_x                                      0x140EF38B8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140241050
#define __CastRay_x                                                0x140239480
#define __CastRay2_x                                               0x140239180
#define __compress_block_x                                         0x140528A40
#define __ConvertItemTags_x                                        0x1402398E0
#define __CleanItemTags_x                                          0x140088A40
#define __CreateCascadeMenuItems_x                                 0x140187A00
#define __decompress_block_x                                       0x14056EC10
#define __DoesFileExist_x                                          0x140577250
#define __EQGetTime_x                                              0x140573950
#define __ExecuteCmd_x                                             0x14020F800
#define __FixHeading_x                                             0x1406A0EB0
#define __FlushDxKeyboard_x                                        0x140334AD0
#define __get_bearing_x                                            0x140243240
#define __get_melee_range_x                                        0x140243330
#define __GetAnimationCache_x                                      0x1403B2190
#define __GetGaugeValueFromEQ_x                                    0x1404E8710
#define __GetLabelFromEQ_x                                         0x1404E9D20
#define __GetXTargetType_x                                         0x1406A2190   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406A0F30
#define __HelpPath_x                                               0x140EC7DB0   // Why?
#define __NewUIINI_x                                               0x1404F57B0   // Why?
#define __ProcessDeviceEvents_x                                    0x140281BA0
#define __ProcessGameEvents_x                                      0x1402768C0
#define __ProcessKeyboardEvents_x                                  0x140336220
#define __ProcessMouseEvents_x                                     0x140277FA0
#define __SaveColors_x                                             0x140197A20
#define __STMLToText_x                                             0x14057BBA0
#define __WndProc_x                                                0x1403332D0
#define CMemoryMappedFile__SetFile_x                               0x1407DCF40
#define DrawNetStatus_x                                            0x1402C10C0
#define Util__FastTime_x                                           0x140572EE0
#define __eq_delete_x                                              0x1406A8FC4
#define __eq_new_x                                                 0x1406A8F80
#define __CopyLayout_x                                             0x1402AEF80
#define __ThrottleFrameRate_x                                      0x1402660DD
#define __ThrottleFrameRateEnd_x                                   0x14026613D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140345C00
#define CAAWnd__Update_x                                           0x140345F00
#define CAAWnd__UpdateSelected_x                                   0x140346F50

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AAE20
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A3720
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140831BB8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AB750

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A2B50
#define AltAdvManager__IsAbilityReady_x                            0x1401A2DD0
#define AltAdvManager__GetAAById_x                                 0x1401A2420
#define AltAdvManager__CanTrainAbility_x                           0x1401A2230
#define AltAdvManager__CanSeeAbility_x                             0x1401A1EF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D1800
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D2640
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D2890
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E6740
#define CharacterZoneClient__CanUseItem_x                          0x1400E6B70
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D3260
#define CharacterZoneClient__CastSpell_x                           0x1400D3300
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E26A0
#define CharacterZoneClient__Cur_HP_x                              0x1400E8240
#define CharacterZoneClient__Cur_Mana_x                            0x1400E8400
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D60A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE8D0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FD300  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D7550
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E6040
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F0490
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EF360
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D7720
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7C10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C95E0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EFAA0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7EB0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F0720
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D77A0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F1500
#define CharacterZoneClient__GetModCap_x                           0x1400F8AC0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7A30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7C40
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CC750
#define CharacterZoneClient__HasSkill_x                            0x1400F44F0
#define CharacterZoneClient__HitBySpell_x                          0x1400D86F0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DBE90
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F85A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DD800  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F88F0
#define CharacterZoneClient__Max_Mana_x                            0x1402DDA20  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8D50
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DF230
#define CharacterZoneClient__SpellDuration_x                       0x1400DFF30
#define CharacterZoneClient__TotalEffect_x                         0x1400E1280
#define CharacterZoneClient__UseSkill_x                            0x1400FE270


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403640E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036E440

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14036A2D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036DEC0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140370B00

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA84A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140393A20
#define CChatWindowManager__InitContextMenu_x                      0x140393BB0
#define CChatWindowManager__FreeChatWindow_x                       0x140392AA0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039B790
#define CChatWindowManager__CreateChatWindow_x                     0x1403923E0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140106720

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039C7E0
#define CChatWindow__Clear_x                                       0x14039D7A0
#define CChatWindow__WndNotification_x                             0x14039E980
#define CChatWindow__AddHistory_x                                  0x14039D2A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405B0D90
#define CContextMenu__RemoveMenuItem_x                             0x1405B1180
#define CContextMenu__RemoveAllMenuItems_x                         0x1405B1150
#define CContextMenu__CheckMenuItem_x                              0x1405B0FC0
#define CContextMenu__SetMenuItem_x                                0x1405B11A0
#define CContextMenu__AddSeparator_x                               0x1405B0F00

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405A2C70
#define CContextMenuManager__RemoveMenu_x                          0x1405A3240
#define CContextMenuManager__PopupMenu_x                           0x1405A2F80
#define CContextMenuManager__Flush_x                               0x1405A2CF0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403AA100

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14066AE30
#define CChatService__GetFriendName_x                              0x14066AE40

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140593B60
#define CComboWnd__Draw_x                                          0x140593C60
#define CComboWnd__GetCurChoice_x                                  0x140593F40  // unused
#define CComboWnd__GetListRect_x                                   0x140593FE0
#define CComboWnd__InsertChoice_x                                  0x140594320
#define CComboWnd__SetColors_x                                     0x1405946B0
#define CComboWnd__SetChoice_x                                     0x140594670
#define CComboWnd__GetItemCount_x                                  0x140593FD0
#define CComboWnd__GetCurChoiceText_x                              0x140593F80  // unused
#define CComboWnd__GetChoiceText_x                                 0x140593F10
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405943E0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A7E80
#define CContainerWnd__SetContainer_x                              0x1403FF020
#define CContainerWnd__vftable_x                                   0x1409C0918

// CDisplay
#define CDisplay__cameraType_x                                     0x140D99FDC
#define CDisplay__ZoneMainUI_x                                     0x1405CAFE0
#define CDisplay__PreZoneMainUI_x                                  0x140194950
#define CDisplay__CleanGameUI_x                                    0x140186AC0
#define CDisplay__GetClickedActor_x                                0x14018AC80
#define CDisplay__GetUserDefinedColor_x                            0x14018B8F0
#define CDisplay__InitCharSelectUI_x                               0x14018BBA0
#define CDisplay__ReloadUI_x                                       0x140196C40
#define CDisplay__RestartUI_x                                      0x1401F5BC0
#define CDisplay__WriteTextHD2_x                                   0x14019DC50
#define CDisplay__TrueDistance_x                                   0x14019D900
#define CDisplay__SetViewActor_x                                   0x14019A140
#define CDisplay__GetFloorHeight_x                                 0x14018AEE0
#define CDisplay__ToggleScreenshotMode_x                           0x14019D3F0
#define CDisplay__RealRender_World_x                               0x140196020

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405D5210
#define CEditWnd__DrawCaret_x                                      0x1405C6C80  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C7120
#define CEditWnd__GetCaretPt_x                                     0x1405C73A0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C73E0
#define CEditWnd__GetDisplayString_x                               0x1405C7650
#define CEditWnd__GetHorzOffset_x                                  0x1405C7880
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C79D0
#define CEditWnd__GetSelStartPt_x                                  0x1405C7CB0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C7B00
#define CEditWnd__PointFromPrintableChar_x                         0x1405C88E0
#define CEditWnd__ReplaceSelection_x                               0x1405C8C90
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C9130
#define CEditWnd__SetEditable_x                                    0x1405C93B0
#define CEditWnd__SetWindowText_x                                  0x1405C93E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402671F0
#define CEverQuest__ClickedPlayer_x                                0x14025CB70
#define CEverQuest__CreateTargetIndicator_x                        0x14025D430
#define CEverQuest__DoTellWindow_x                                 0x140106430 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106CF0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140268BB0
#define CEverQuest__dsp_chat_x                                     0x140105E60 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140292FB0
#define CEverQuest__Emote_x                                        0x140269590
#define CEverQuest__GetBodyTypeDesc_x                              0x14026A340
#define CEverQuest__GetClassDesc_x                                 0x14026A3A0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14026A770
#define CEverQuest__GetDeityDesc_x                                 0x14026AA20
#define CEverQuest__GetLangDesc_x                                  0x14026AE50
#define CEverQuest__GetRaceDesc_x                                  0x14026B1F0
#define CEverQuest__InterpretCmd_x                                 0x14026CB30
#define CEverQuest__LeftClickedOnPlayer_x                          0x140281C10
#define CEverQuest__LMouseUp_x                                     0x14026E550
#define CEverQuest__RightClickedOnPlayer_x                         0x14027F430
#define CEverQuest__RMouseUp_x                                     0x140278B30
#define CEverQuest__SetGameState_x                                 0x140284150
#define CEverQuest__UPCNotificationFlush_x                         0x140289A80 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026E1C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140279EE0
#define CEverQuest__ReportSuccessfulHit_x                          0x14027AD00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BD0C0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C1740
#define CGuild__GetGuildName_x                                     0x1400C1780

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403E02F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A4D00
#define CHotButton__SetCheck_x                                     0x1402A4FD0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F7D50
#define CInvSlotMgr__MoveItem_x                                    0x1403F7F30
#define CInvSlotMgr__SelectSlot_x                                  0x1403F9960

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F4F40
#define CInvSlot__SliderComplete_x                                 0x1403F6490
#define CInvSlot__GetItemBase_x                                    0x1403F0960
#define CInvSlot__UpdateItem_x                                     0x1403F6950

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403FACF0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14041BFE0
#define CItemDisplayWnd__UpdateStrings_x                           0x14041EAC0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404188D0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14041A230
#define CItemDisplayWnd__RequestConvertItem_x                      0x14041B3F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E5230
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E6F20

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140521DB0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140414FF0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014EE40

// CLabel
#define CLabel__UpdateText_x                                       0x140425EA0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405974F0
#define CListWnd__dCListWnd_x                                      0x140597940
#define CListWnd__vftable_x                                        0x140AA65F8
#define CListWnd__AddColumn_x                                      0x140597FE0
#define CListWnd__AddColumn1_x                                     0x140598080
#define CListWnd__AddLine_x                                        0x1405981E0
#define CListWnd__AddString_x                                      0x140598770
#define CListWnd__CalculateFirstVisibleLine_x                      0x140598CE0
#define CListWnd__CalculateVSBRange_x                              0x140598FC0
#define CListWnd__ClearSel_x                                       0x140599160
#define CListWnd__ClearAllSel_x                                    0x140599100
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405991C0
#define CListWnd__Compare_x                                        0x140599380
#define CListWnd__Draw_x                                           0x140599850
#define CListWnd__DrawColumnSeparators_x                           0x14059A400
#define CListWnd__DrawHeader_x                                     0x14059A4C0
#define CListWnd__DrawItem_x                                       0x14059AB90
#define CListWnd__DrawLine_x                                       0x14059B510
#define CListWnd__DrawSeparator_x                                  0x14059B9D0
#define CListWnd__EnableLine_x                                     0x14059BDF0
#define CListWnd__EnsureVisible_x                                  0x14059BE50
#define CListWnd__ExtendSel_x                                      0x14059BF50
#define CListWnd__GetColumnMinWidth_x                              0x14059C2E0
#define CListWnd__GetColumnWidth_x                                 0x14059C360
#define CListWnd__GetCurSel_x                                      0x14059C460
#define CListWnd__GetItemData_x                                    0x14059C7E0
#define CListWnd__GetItemHeight_x                                  0x14059C820
#define CListWnd__GetItemRect_x                                    0x14059CA40
#define CListWnd__GetItemText_x                                    0x14059CCE0
#define CListWnd__GetSelList_x                                     0x14059CF30
#define CListWnd__GetSeparatorRect_x                               0x14059D120
#define CListWnd__InsertLine_x                                     0x14059E590
#define CListWnd__RemoveLine_x                                     0x14059EC00
#define CListWnd__SetColors_x                                      0x14059EFC0
#define CListWnd__SetColumnJustification_x                         0x14059EFE0
#define CListWnd__SetColumnLabel_x                                 0x14059F060
#define CListWnd__SetColumnWidth_x                                 0x14059F200
#define CListWnd__SetCurSel_x                                      0x14059F2D0
#define CListWnd__SetItemColor_x                                   0x14059F540
#define CListWnd__SetItemData_x                                    0x14059F5E0
#define CListWnd__SetItemText_x                                    0x14059F820
#define CListWnd__Sort_x                                           0x14059FC30
#define CListWnd__ToggleSel_x                                      0x14059FDA0
#define CListWnd__SetColumnsSizable_x                              0x14059F250
#define CListWnd__SetItemWnd_x                                     0x14059F950
#define CListWnd__GetItemWnd_x                                     0x14059CEC0
#define CListWnd__SetItemIcon_x                                    0x14059F620
#define CListWnd__CalculateCustomWindowPositions_x                 0x140598AB0
#define CListWnd__SetVScrollPos_x                                  0x14059FB90

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140439190

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A0D408
#define MapViewMap__Clear_x                                        0x14043AD10
#define MapViewMap__SetZoom_x                                      0x140441360
#define MapViewMap__HandleLButtonDown_x                            0x14043DEA0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140462A20  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140468FB0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140469750
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14046CF70
#define CMerchantWnd__SelectBuySellSlot_x                          0x14046C2B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140471200

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140646180
#define CPacketScrambler__hton_x                                   0x140646170

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405C0540
#define CSidlManagerBase__FindAnimation1_x                         0x1405C0480
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405C0B70
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405C0920
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BF880
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BF810
#define CSidlManagerBase__CreateXWnd_x                             0x1405BEE50

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D8210
#define CSidlManager__CreateXWnd_x                                 0x1404D83D0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140584F20
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140585050
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CF750 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405851C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140584650
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140584720
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140584930
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405858B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140585AE0
#define CSidlScreenWnd__GetChildItem_x                             0x140585C80
#define CSidlScreenWnd__GetSidlPiece_x                             0x140585ED0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405900C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140586240
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405865B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140586E60
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140587860
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EF3758
#define CSidlScreenWnd__StoreIniInfo_x                             0x140587EE0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405886D0
#define CSidlScreenWnd__vftable_x                                  0x140AA5868
#define CSidlScreenWnd__WndNotification_x                          0x140588720

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031DFB0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031E450 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031E380
#define CSkillMgr__IsActivatedSkill_x                              0x14031E800
#define CSkillMgr__IsCombatSkill_x                                 0x14031E840
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031E770
#define CSkillMgr__GetSkillLastUsed_x                              0x14031E3D0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405A0720
#define CSliderWnd__SetValue_x                                     0x1405A0F30
#define CSliderWnd__SetNumTicks_x                                  0x1405A0DB0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DE880

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A56C0
#define CStmlWnd__CalculateHSBRange_x                              0x14058FAA0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A6560
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A7050
#define CStmlWnd__ForceParseNow_x                                  0x1405A70F0
#define CStmlWnd__GetVisibleText_x                                 0x1405A77C0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A9520
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A9560
#define CStmlWnd__SetSTMLText_x                                    0x1405B0530
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405B06E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405B0A70

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405A1300
#define CTabWnd__DrawCurrentPage_x                                 0x1405A13A0
#define CTabWnd__DrawTab_x                                         0x1405A1770
#define CTabWnd__GetTabRect_x                                      0x1405A1DE0
#define CTabWnd__InsertPage_x                                      0x1405A20B0
#define CTabWnd__RemovePage_x                                      0x1405A2340
#define CTabWnd__SetPage_x                                         0x1405A24A0
#define CTabWnd__UpdatePage_x                                      0x1405A27A0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C9840
#define CPageWnd__SetTabText_x                                     0x1405C98B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BAE90  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BB2A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B7F10
#define CTextureFont__DrawWrappedText1_x                           0x1405B7E20
#define CTextureFont__DrawWrappedText2_x                           0x1405B8040
#define CTextureFont__GetTextExtent_x                              0x1405B83F0
#define CTextureFont__GetHeight_x                                  0x1405B83B0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405CDEB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140584230

// CXStr
#define CXStr__gFreeLists_x                                        0x140D22ED0
#define CXStr__gCXStrAccess_x                                      0x140EF3558

// CXWnd
#define CXWnd__BringToTop_x                                        0x14058B110
#define CXWnd__ClrFocus_x                                          0x14058B400
#define CXWnd__Destroy_x                                           0x14058B580
#define CXWnd__DoAllDrawing_x                                      0x14058B680
#define CXWnd__DrawColoredRect_x                                   0x14058BE50
#define CXWnd__DrawTooltip_x                                       0x14058D4D0
#define CXWnd__DrawTooltipAtPoint_x                                0x14058D580
#define CXWnd__GetChildItem_x                                      0x14058DE80
#define CXWnd__GetChildWndAt_x                                     0x14058DF40
#define CXWnd__GetClientRect_x                                     0x14058E200
#define CXWnd__GetClientClipRect_x                                 0x14058E0B0
#define CXWnd__GetRelativeRect_x                                   0x14058FBE0
#define CXWnd__GetScreenClipRect_x                                 0x14058FCF0
#define CXWnd__GetScreenRect_x                                     0x14058FE40
#define CXWnd__GetTooltipRect_x                                    0x14058FFC0
#define CXWnd__IsActive_x                                          0x140590580
#define CXWnd__IsDescendantOf_x                                    0x1405905B0
#define CXWnd__IsReallyVisible_x                                   0x140590620
#define CXWnd__IsType_x                                            0x140590660
#define CXWnd__Minimize_x                                          0x140590760
#define CXWnd__ProcessTransition_x                                 0x140591660
#define CXWnd__Resize_x                                            0x140591770
#define CXWnd__Right_x                                             0x140591810
#define CXWnd__SetFocus_x                                          0x140591BC0
#define CXWnd__SetFont_x                                           0x140591C10
#define CXWnd__SetKeyTooltip_x                                     0x140591D10
#define CXWnd__SetMouseOver_x                                      0x140591E50
#define CXWnd__SetParent_x                                         0x140591ED0
#define CXWnd__StartFade_x                                         0x140592320
#define CXWnd__vftable_x                                           0x140AA5E58
#define CXWnd__CXWnd_x                                             0x140589CC0
#define CXWnd__dCXWnd_x                                            0x14058A600

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405D4990

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405B2350
#define CXWndManager__DrawCursor_x                                 0x1405B2630
#define CXWndManager__DrawWindows_x                                0x1405B2890
#define CXWndManager__GetKeyboardFlags_x                           0x1405B2F60
#define CXWndManager__HandleKeyboardMsg_x                          0x1405B2FA0
#define CXWndManager__RemoveWnd_x                                  0x1405B65D0

// CDBStr
#define CDBStr__GetString_x                                        0x140184C80

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14064FFA0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CF380
#define CCharacterListWnd__EnterWorld_x                            0x1400CE080
#define CCharacterListWnd__Quit_x                                  0x1400CF360
#define CCharacterListWnd__UpdateList_x                            0x1400D01F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14061D340
#define ItemBase__CreateItemTagString_x                            0x14061DDB0
#define ItemBase__GetImageNum_x                                    0x1406202D0
#define ItemBase__GetItemValue_x                                   0x1406221B0
#define ItemBase__IsEmpty_x                                        0x140623D30
#define ItemBase__IsKeyRingItem_x                                  0x140624450
#define ItemBase__ValueSellMerchant_x                              0x140628600
#define ItemClient__CanDrop_x                                      0x1402A7200
#define ItemClient__CanGoInBag_x                                   0x1402A7330
#define ItemClient__CreateItemClient_x                             0x1402A75B0
#define ItemClient__dItemClient_x                                  0x1402A7070

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A42F0
#define EQ_LoadingS__Array_x                                       0x140D0F230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140634ED0
#define PcBase__GetCombatAbility_x                                 0x1406355C0
#define PcBase__GetCombatAbilityTimer_x                            0x140635660
#define PcBase__GetItemContainedRealEstateIds_x                    0x140635E00
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140636940
#define PcClient__AlertInventoryChanged_x                          0x1402C9690
#define PcClient__GetConLevel_x                                    0x1402C9CB0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CC480
#define PcClient__HasLoreItem_x                                    0x1402CD440
#define PcZoneClient__GetItemRecastTimer_x                         0x1402DAD30
#define PcZoneClient__RemoveMyAffect_x                             0x1402DE940

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140213F10  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1402140C0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140214220  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140214160  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024E170  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017F4D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140693E30
#define PlayerBase__CanSee1_x                                      0x140693F00
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406943C0
#define PlayerBase__HasProperty_x                                  0x140694590
#define PlayerBase__IsTargetable_x                                 0x140694650
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EB620
#define PlayerClient__GetPcClient_x                                0x1402EDE50
#define PlayerClient__PlayerClient_x                               0x1402E4900
#define PlayerClient__SetNameSpriteState_x                         0x1402F12A0
#define PlayerClient__SetNameSpriteTint_x                          0x1402F2260
#define PlayerZoneClient__ChangeHeight_x                           0x140300810
#define PlayerZoneClient__DoAttack_x                               0x140301520
#define PlayerZoneClient__GetLevel_x                               0x140304C60
#define PlayerZoneClient__IsValidTeleport_x                        0x140250EF0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401931D0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402FA130  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402FA1E0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402FA2E0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F9C00
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406939F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AC480
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AC080
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AC0F0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AC410  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AC5A0
#define KeypressHandler__HandleKeyUp_x                             0x1402AC6C0
#define KeypressHandler__SaveKeymapping_x                          0x1402AC320  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14064DAE0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406478B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D3A00  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D8D50
#define PcZoneClient__GetPcSkillLimit_x                            0x1402DB430
#define PcZoneClient__RemovePetEffect_x                            0x1402DEC20
#define PcZoneClient__HasAlternateAbility_x                        0x1402DC020
#define PcZoneClient__CanEquipItem_x                               0x1402D7070
#define PcZoneClient__GetItemByID_x                                0x1402D9DF0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DE7C0
#define PcZoneClient__BandolierSwap_x                              0x1402D60C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140255A20

// IconCache
#define IconCache__GetIcon_x                                       0x1403B21C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A6C30
#define CContainerMgr__CloseContainer_x                            0x1403A6570
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A6FB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14049C4C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029F380

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14042D180
#define CLootWnd__RequestLootSlot_x                                0x14042E1A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D3680
#define EQ_Spell__SpellAffects_x                                   0x1401D4940
#define EQ_Spell__SpellAffectBase_x                                0x1401D48A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7E10
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7DC0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D4560
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D4120
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D39F0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C0380

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F8F80
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F8690
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F7E90

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405005F0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017BEA0
#define CTaskManager__GetTaskStatus_x                              0x14017BFB0
#define CTaskManager__GetElementDescription_x                      0x14017BB30

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D19F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401D0830
#define EqSoundManager__SoundAssistPlay_x                          0x1403235F0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140323930  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405930F0
#define CTextureAnimation__SetCurCell_x                            0x140593400

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029D5E0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140668500
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140668580
#define CharacterBase__IsExpansionFlag_x                           0x1401F5410

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140384930
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403852A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403867F0

// messages
#define msg_spell_worn_off_x                                       0x14020A840
#define msg_new_text_x                                             0x1402060B0
#define __msgTokenTextParam_x                                      0x1401FD9C0
#define msgTokenText_x                                             0x1401FD8E0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140324FB0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140324ED0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406A2570

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404265F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AB910
#define CCursorAttachment__IsOkToActivate_x                        0x1403AE840
#define CCursorAttachment__RemoveAttachment_x                      0x1403AEAF0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405CC350
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405CC540
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405CC550

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149FF0
#define CFindItemWnd__Update_x                                     0x14014A990
#define CFindItemWnd__PickupSelectedItem_x                         0x140144460

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140153B50
#define LootFiltersManager__GetItemFilterData_x                    0x140154660
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140154F00
#define LootFiltersManager__SetItemLootFilter_x                    0x1401551B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047F1F0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031DB70
#define CResolutionHandler__UpdateResolution_x                     0x1406A6DD0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A2F20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14066C8F0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14066C7E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C9420
#define CGroupWnd__UpdateDisplay_x                                 0x1403C9000

// ItemBase
#define ItemBase__IsLore_x                                         0x140624580
#define ItemBase__IsLoreEquipped_x                                 0x140624610

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BF250

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024E2D0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024E260
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024E2A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140318000

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123F50
#define FactionManagerClient__HandleFactionMessage_x               0x140124300
#define FactionManagerClient__GetFactionStanding_x                 0x140123720
#define FactionManagerClient__GetMaxFaction_x                      0x140123720
#define FactionManagerClient__GetMinFaction_x                      0x1401235D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AD430

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F6F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ACC50
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401ABFD0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401ACA70  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AC9F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14032A020

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140318000

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1402142B0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140588D10

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400858F0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033BB40

// AchievementManager
#define AchievementManager__Instance_x                             0x14008D2C0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140650B20
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB9E90

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14052EE60

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
