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

#define __ClientDate                                               20251122u
#define __ExpectedVersionDate                                     "Nov 22 2025"
#define __ExpectedVersionTime                                     "04:25:16"
#define __ActualVersionDate_x                                      0x140972908
#define __ActualVersionTime_x                                      0x1409728F8
#define __ActualVersionBuild_x                                     0x140907AB0

// Memory Protection
#define __MemChecker0_x                                            0x1402C5E80
#define __MemChecker1_x                                            0x140594990
#define __MemChecker4_x                                            0x140293680
#define __EncryptPad0_x                                            0x140D45F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7E8C0
#define instEQZoneInfo_x                                           0x140E7EAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402274D0
#define __gfMaxZoomCameraDistance_x                                0x140908D58
#define __gfMaxCameraDistance_x                                    0x140AB2C94
#define __CurrentSocial_x                                          0x140C0195C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3D720
#define g_eqCommandStates_x                                        0x140D3E7C0
#define __CommandList_x                                            0x140D3EA00
#define __ScreenMode_x                                             0x140DC622C
#define __gWorld_x                                                 0x140E793E8
#define __gpbCommandEvent_x                                        0x140E76E94
#define __ServerHost_x                                             0x140E77098
#define __Guilds_x                                                 0x140E7D470
#define __MemCheckBitmask_x                                        0x140E7EDFF
#define __MemCheckActive_x                                         0x140E80515
#define __MouseEventTime_x                                         0x140EF3E88
#define DI8__MouseState_x                                          0x140EF8108
#define __heqmain_x                                                0x140EFA5A8
#define DI8__Mouse_x                                               0x140EF8058
#define __HWnd_x                                                   0x140EF80E0
#define __Mouse_x                                                  0x140EF8014
#define DI8__Keyboard_x                                            0x140EF8030
#define __LoginName_x                                              0x140EFAC8C
#define __CurrentMapLabel_x                                        0x140F0E7A0
#define __LabelCache_x                                             0x140F0F370
#define __ChatFilterDefs_x                                         0x140A4CB60
#define Teleport_Table_Size_x                                      0x140E76F2C
#define Teleport_Table_x                                           0x140E773B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E79800
#define pinstActiveBanker_x                                        0x140E76D60
#define pinstActiveCorpse_x                                        0x140E76D50
#define pinstActiveGMaster_x                                       0x140E76D58
#define pinstActiveMerchant_x                                      0x140E76D48
#define pinstAltAdvManager_x                                       0x140DC7010
#define pinstCEverQuest_x                                          0x140EF8050
#define pinstCamActor_x                                            0x140DC6218
#define pinstCDBStr_x                                              0x140DC5DC0
#define pinstCDisplay_x                                            0x140E76E98
#define pinstControlledPlayer_x                                    0x140E76DF0
#define pinstCResolutionHandler_x                                  0x140F1FBA8
#define pinstCSidlManager_x                                        0x140F20910
#define pinstCXWndManager_x                                        0x140F20908
#define instDynamicZone_x                                          0x140E7D330 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7D37E
#define instExpeditionName_x                                       0x140E7D3BE
#define pinstDZMember_x                                            0x140E7D448
#define pinstDZTimerInfo_x                                         0x140E7D450
#define pinstEqLogin_x                                             0x140EFA5D0
#define instTribute_x                                              0x140D38D60
#define pinstDeviceInputProxy_x                                    0x140E7E91C
#define pinstEQSoundManager_x                                      0x140DC7390
#define pinstEQSpellStrings_x                                      0x140DAA950
#define pinstSGraphicsEngine_x                                     0x140F1F938
#define pinstLocalPC_x                                             0x140E793D8
#define pinstLocalPlayer_x                                         0x140E76D40
#define pinstCMercenaryClientManager_x                             0x140EF57A8
#define pinstModelPlayer_x                                         0x140E76D70
#define pinstRenderInterface_x                                     0x140F1F950
#define pinstSkillMgr_x                                            0x140EF7458
#define pinstSpawnManager_x                                        0x140EF5B60
#define pinstSpellManager_x                                        0x140EF74C0
#define pinstStringTable_x                                         0x140E793E0
#define pinstSwitchManager_x                                       0x140E76CC0
#define pinstTarget_x                                              0x140E76DE8
#define pinstTaskMember_x                                          0x140D38D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E76D68
#define instTributeActive_x                                        0x140D38D89
#define pinstViewActor_x                                           0x140DC6210
#define pinstWorldData_x                                           0x140E76E08
#define pinstPlayerPath_x                                          0x140EF5B88
#define pinstTargetIndicator_x                                     0x140EF7570
#define EQObject_Top_x                                             0x140E76F20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F0B900
#define pinstCContainerMgr_x                                       0x140DC6340
#define pinstCContextMenuManager_x                                 0x140F205F0
#define pinstCInvSlotMgr_x                                         0x140DC6320
#define pinstCItemDisplayManager_x                                 0x140F0E370
#define pinstCPopupWndManager_x                                    0x140F0EC00
#define pinstCSpellDisplayMgr_x                                    0x140F0F250
#define pinstCTaskManager_x                                        0x140C01C90
#define pinstEQSuiteTextureLoader_x                                0x140D4F620
#define pinstItemIconCache_x                                       0x140F0BC60
#define pinstLootFiltersManager_x                                  0x140DC5808
#define pinstGFViewListener_x                                      0x140F1FDC8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140251030
#define __CastRay_x                                                0x1402494B0
#define __CastRay2_x                                               0x1402491B0
#define __compress_block_x                                         0x140549D50
#define __ConvertItemTags_x                                        0x140249910
#define __CleanItemTags_x                                          0x14008A5D0
#define __CreateCascadeMenuItems_x                                 0x1401923F0
#define __decompress_block_x                                       0x1405901A0
#define __DoesFileExist_x                                          0x140598840
#define __EQGetTime_x                                              0x140594F40
#define __ExecuteCmd_x                                             0x14021EA60
#define __FixHeading_x                                             0x14064F750
#define __FlushDxKeyboard_x                                        0x140349BC0
#define __get_bearing_x                                            0x140253260
#define __get_melee_range_x                                        0x140253350
#define __GetAnimationCache_x                                      0x1403CD1E0
#define __GetGaugeValueFromEQ_x                                    0x1405098C0
#define __GetLabelFromEQ_x                                         0x14050AEB0
#define __GetXTargetType_x                                         0x140650A30   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064F7D0
#define __HelpPath_x                                               0x140EF3D50   // Why?
#define __NewUIINI_x                                               0x1405168F0   // Why?
#define __ProcessDeviceEvents_x                                    0x140293C90
#define __ProcessGameEvents_x                                      0x1402886D0
#define __ProcessKeyboardEvents_x                                  0x14034B310
#define __ProcessMouseEvents_x                                     0x140289DE0
#define __SaveColors_x                                             0x1401A22E0
#define __STMLToText_x                                             0x1405A8510
#define __WndProc_x                                                0x140348360
#define CMemoryMappedFile__SetFile_x                               0x1407FD150
#define DrawNetStatus_x                                            0x1402D5180
#define Util__FastTime_x                                           0x140594470
#define __eq_delete_x                                              0x1406C9108
#define __eq_new_x                                                 0x1406C9360
#define __CopyLayout_x                                             0x1402C2280
#define __ThrottleFrameRate_x                                      0x140277CCC
#define __ThrottleFrameRateEnd_x                                   0x140277CD2

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035B100
#define CAAWnd__Update_x                                           0x14035B400
#define CAAWnd__UpdateSelected_x                                   0x14035C600

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE570
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6F50
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140853A50
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AEEA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AD530
#define AltAdvManager__IsAbilityReady_x                            0x1401AD9C0
#define AltAdvManager__GetAAById_x                                 0x1401ACE00
#define AltAdvManager__CanTrainAbility_x                           0x1401ACC00
#define AltAdvManager__CanSeeAbility_x                             0x1401AC8C0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5BC0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6A30
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6C80
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAF80
#define CharacterZoneClient__CanUseItem_x                          0x1400EB540
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7650
#define CharacterZoneClient__CastSpell_x                           0x1400D76F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E7450
#define CharacterZoneClient__Cur_HP_x                              0x1400ECC60
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECE20
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA960
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F34D0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101B90  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBE00
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA880
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4D60
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F3C50
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBF80
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB770
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD640
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4380
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC8D0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F4FF0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DC000
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5D70
#define CharacterZoneClient__GetModCap_x                           0x1400FD340
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC290
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC460
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0CD0
#define CharacterZoneClient__HasSkill_x                            0x1400F8E80
#define CharacterZoneClient__HitBySpell_x                          0x1400DCEF0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E08C0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCE20
#define CharacterZoneClient__Max_Endurance_x                       0x1402EFE90  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD170
#define CharacterZoneClient__Max_Mana_x                            0x1402F00B0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD5D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3F10
#define CharacterZoneClient__SpellDuration_x                       0x1400E4C40
#define CharacterZoneClient__TotalEffect_x                         0x1400E6020
#define CharacterZoneClient__UseSkill_x                            0x140102B00


// CBankWnd
#define CBankWnd__WndNotification_x                                0x0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140385ED0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140381D50
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140385950

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140388640

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD2530

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403AB3A0
#define CChatWindowManager__InitContextMenu_x                      0x1403AB530
#define CChatWindowManager__FreeChatWindow_x                       0x1403AA3F0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B34F0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A9E20

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B090

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B4540
#define CChatWindow__Clear_x                                       0x1403B5500
#define CChatWindow__WndNotification_x                             0x1403B66F0
#define CChatWindow__AddHistory_x                                  0x1403B5000

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D5CC0
#define CContextMenu__RemoveMenuItem_x                             0x1405D60B0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D6080
#define CContextMenu__CheckMenuItem_x                              0x1405D5EF0
#define CContextMenu__SetMenuItem_x                                0x1405D60D0
#define CContextMenu__AddSeparator_x                               0x1405D5E30

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C7B80
#define CContextMenuManager__RemoveMenu_x                          0x1405C8160
#define CContextMenuManager__PopupMenu_x                           0x1405C7EA0
#define CContextMenuManager__Flush_x                               0x1405C7C00
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C4B90

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A2F20
#define CChatService__GetFriendName_x                              0x1406A2F30

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B8AA0
#define CComboWnd__Draw_x                                          0x1405B8BA0
#define CComboWnd__GetCurChoice_x                                  0x1405B8E80  // unused
#define CComboWnd__GetListRect_x                                   0x1405B8F20
#define CComboWnd__InsertChoice_x                                  0x1405B9260
#define CComboWnd__SetColors_x                                     0x1405B95F0
#define CComboWnd__SetChoice_x                                     0x1405B95B0
#define CComboWnd__GetItemCount_x                                  0x1405B8F10
#define CComboWnd__GetCurChoiceText_x                              0x1405B8EC0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B8E50
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B9320

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C2890
#define CContainerWnd__SetContainer_x                              0x14041E4C0
#define CContainerWnd__vftable_x                                   0x1409E7978

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC5FAC
#define CDisplay__ZoneMainUI_x                                     0x1405EFF90
#define CDisplay__PreZoneMainUI_x                                  0x14019F1E0
#define CDisplay__CleanGameUI_x                                    0x1401914B0
#define CDisplay__GetClickedActor_x                                0x140195670
#define CDisplay__GetUserDefinedColor_x                            0x1401962E0
#define CDisplay__InitCharSelectUI_x                               0x140196590
#define CDisplay__ReloadUI_x                                       0x1401A14E0
#define CDisplay__RestartUI_x                                      0x1402032B0
#define CDisplay__WriteTextHD2_x                                   0x1401A84F0
#define CDisplay__TrueDistance_x                                   0x1401A81A0
#define CDisplay__SetViewActor_x                                   0x1401A4A10
#define CDisplay__GetFloorHeight_x                                 0x1401958D0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A7C90
#define CDisplay__RealRender_World_x                               0x1401A08B0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FA1C0
#define CEditWnd__DrawCaret_x                                      0x1405EBCF0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405EC1B0
#define CEditWnd__GetCaretPt_x                                     0x1405EC430  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405EC470
#define CEditWnd__GetDisplayString_x                               0x1405EC6E0
#define CEditWnd__GetHorzOffset_x                                  0x1405EC920
#define CEditWnd__GetLineForPrintableChar_x                        0x1405ECA70
#define CEditWnd__GetSelStartPt_x                                  0x1405ECD50  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405ECBA0
#define CEditWnd__PointFromPrintableChar_x                         0x1405ED900
#define CEditWnd__ReplaceSelection_x                               0x1405EDCB0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EE150
#define CEditWnd__SetEditable_x                                    0x1405EE3E0
#define CEditWnd__SetWindowText_x                                  0x1405EE410

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140278D70
#define CEverQuest__ClickedPlayer_x                                0x14026CD60
#define CEverQuest__CreateTargetIndicator_x                        0x14026D620
#define CEverQuest__DoTellWindow_x                                 0x14010ADA0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B680 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027A760
#define CEverQuest__dsp_chat_x                                     0x14010A7E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A56C0
#define CEverQuest__Emote_x                                        0x14027B150
#define CEverQuest__GetBodyTypeDesc_x                              0x14027BF30
#define CEverQuest__GetClassDesc_x                                 0x14027BF90
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027C360
#define CEverQuest__GetDeityDesc_x                                 0x14027C610
#define CEverQuest__GetLangDesc_x                                  0x14027CA40
#define CEverQuest__GetRaceDesc_x                                  0x14027CDE0
#define CEverQuest__InterpretCmd_x                                 0x14027E770
#define CEverQuest__LeftClickedOnPlayer_x                          0x140293D00
#define CEverQuest__LMouseUp_x                                     0x1402801F0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402912B0
#define CEverQuest__RMouseUp_x                                     0x14028A970
#define CEverQuest__SetGameState_x                                 0x140296780
#define CEverQuest__UPCNotificationFlush_x                         0x14029C0F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027FE50
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028BD40
#define CEverQuest__ReportSuccessfulHit_x                          0x14028CB60

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D8090

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4F80
#define CGuild__GetGuildName_x                                     0x1400C4FC0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FB4D0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B79A0
#define CHotButton__SetCheck_x                                     0x1402B7C70

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140415120
#define CInvSlotMgr__MoveItem_x                                    0x140415CB0
#define CInvSlotMgr__SelectSlot_x                                  0x140417FA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140412110
#define CInvSlot__SliderComplete_x                                 0x140413790
#define CInvSlot__GetItemBase_x                                    0x14040D910
#define CInvSlot__UpdateItem_x                                     0x140413C40

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041A170

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043BB00
#define CItemDisplayWnd__UpdateStrings_x                           0x14043E6E0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404382E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140439C40
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043AF20

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140506330
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405080C0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405430B0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404349B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157AD0

// CLabel
#define CLabel__UpdateText_x                                       0x140445AE0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BC430
#define CListWnd__dCListWnd_x                                      0x1405BC880
#define CListWnd__vftable_x                                        0x140AD0680
#define CListWnd__AddColumn_x                                      0x1405BCF20
#define CListWnd__AddColumn1_x                                     0x1405BCFC0
#define CListWnd__AddLine_x                                        0x1405BD120
#define CListWnd__AddString_x                                      0x1405BD6B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BDC20
#define CListWnd__CalculateVSBRange_x                              0x1405BDF00
#define CListWnd__ClearSel_x                                       0x1405BE0B0
#define CListWnd__ClearAllSel_x                                    0x1405BE050
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BE110
#define CListWnd__Compare_x                                        0x1405BE2D0
#define CListWnd__Draw_x                                           0x1405BE7A0
#define CListWnd__DrawColumnSeparators_x                           0x1405BF350
#define CListWnd__DrawHeader_x                                     0x1405BF410
#define CListWnd__DrawItem_x                                       0x1405BFAF0
#define CListWnd__DrawLine_x                                       0x1405C0470
#define CListWnd__DrawSeparator_x                                  0x1405C0930
#define CListWnd__EnableLine_x                                     0x1405C0D50
#define CListWnd__EnsureVisible_x                                  0x1405C0DB0
#define CListWnd__ExtendSel_x                                      0x1405C0EB0
#define CListWnd__GetColumnMinWidth_x                              0x1405C1240
#define CListWnd__GetColumnWidth_x                                 0x1405C12C0
#define CListWnd__GetCurSel_x                                      0x1405C13C0
#define CListWnd__GetItemData_x                                    0x1405C1740
#define CListWnd__GetItemHeight_x                                  0x1405C1780
#define CListWnd__GetItemRect_x                                    0x1405C19A0
#define CListWnd__GetItemText_x                                    0x1405C1C40
#define CListWnd__GetSelList_x                                     0x1405C1E90
#define CListWnd__GetSeparatorRect_x                               0x1405C2080
#define CListWnd__InsertLine_x                                     0x1405C34F0
#define CListWnd__RemoveLine_x                                     0x1405C3B60
#define CListWnd__SetColors_x                                      0x1405C3F20
#define CListWnd__SetColumnJustification_x                         0x1405C3F40
#define CListWnd__SetColumnLabel_x                                 0x1405C3FC0
#define CListWnd__SetColumnWidth_x                                 0x1405C4160
#define CListWnd__SetCurSel_x                                      0x1405C4230
#define CListWnd__SetItemColor_x                                   0x1405C44A0
#define CListWnd__SetItemData_x                                    0x1405C4540
#define CListWnd__SetItemText_x                                    0x1405C4780
#define CListWnd__Sort_x                                           0x1405C4B90
#define CListWnd__ToggleSel_x                                      0x1405C4D00
#define CListWnd__SetColumnsSizable_x                              0x1405C41B0
#define CListWnd__SetItemWnd_x                                     0x1405C48B0
#define CListWnd__GetItemWnd_x                                     0x1405C1E20
#define CListWnd__SetItemIcon_x                                    0x1405C4580
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BD9F0
#define CListWnd__SetVScrollPos_x                                  0x1405C4AF0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140458FE0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A35388
#define MapViewMap__Clear_x                                        0x14045AB60
#define MapViewMap__SetZoom_x                                      0x1404611B0
#define MapViewMap__HandleLButtonDown_x                            0x14045DCF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404829E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140489290
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140489A70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048D330
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048C680
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140491720

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067E260
#define CPacketScrambler__hton_x                                   0x14067E250

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E5600
#define CSidlManagerBase__FindAnimation1_x                         0x1405E5540
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E5C30
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E59E0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E4940
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E48D0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E3F10

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F92C0
#define CSidlManager__CreateXWnd_x                                 0x1404F9480

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AA000
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AA130
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F4700 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AA2B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A9730
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A9800
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A9A10
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AA9A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AABD0
#define CSidlScreenWnd__GetChildItem_x                             0x1405AAD70
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AAFC0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B5000 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AB330
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AB670
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405ABF40
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AC940
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1FC68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405ACFD0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AD7D0
#define CSidlScreenWnd__vftable_x                                  0x140ACF908
#define CSidlScreenWnd__WndNotification_x                          0x1405AD820

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140332D30 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140333050 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140332F80
#define CSkillMgr__IsActivatedSkill_x                              0x140333410
#define CSkillMgr__IsCombatSkill_x                                 0x140333450
#define CSkillMgr__GetSkillTimerDuration_x                         0x140333380
#define CSkillMgr__GetSkillLastUsed_x                              0x140332FD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C5650
#define CSliderWnd__SetValue_x                                     0x1405C5E60
#define CSliderWnd__SetNumTicks_x                                  0x1405C5CE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FFA60

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CA5E0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B49B0
#define CStmlWnd__CalculateVSBRange_x                              0x1405CB480
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CBF80
#define CStmlWnd__ForceParseNow_x                                  0x1405CC020
#define CStmlWnd__GetVisibleText_x                                 0x1405CC6F0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CE450
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CE490
#define CStmlWnd__SetSTMLText_x                                    0x1405D5460
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D5610
#define CStmlWnd__UpdateHistoryString_x                            0x1405D59A0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C6210
#define CTabWnd__DrawCurrentPage_x                                 0x1405C62B0
#define CTabWnd__DrawTab_x                                         0x1405C6680
#define CTabWnd__GetTabRect_x                                      0x1405C6CF0
#define CTabWnd__InsertPage_x                                      0x1405C6FC0
#define CTabWnd__RemovePage_x                                      0x1405C7250
#define CTabWnd__SetPage_x                                         0x1405C73B0
#define CTabWnd__UpdatePage_x                                      0x1405C76B0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EE840
#define CPageWnd__SetTabText_x                                     0x1405EE8B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE530  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE940


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DCFC0
#define CTextureFont__DrawWrappedText1_x                           0x1405DCED0
#define CTextureFont__DrawWrappedText2_x                           0x1405DD0F0
#define CTextureFont__GetTextExtent_x                              0x1405DD4A0
#define CTextureFont__GetHeight_x                                  0x1405DD460

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F2E60

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A6C00

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4EF90
#define CXStr__gCXStrAccess_x                                      0x140F1F7C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B0060
#define CXWnd__ClrFocus_x                                          0x1405B0350
#define CXWnd__Destroy_x                                           0x1405B04D0
#define CXWnd__DoAllDrawing_x                                      0x1405B05E0
#define CXWnd__DrawColoredRect_x                                   0x1405B0DA0
#define CXWnd__DrawTooltip_x                                       0x1405B2400
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B24B0
#define CXWnd__GetChildItem_x                                      0x1405B2DB0
#define CXWnd__GetChildWndAt_x                                     0x1405B2E70
#define CXWnd__GetClientRect_x                                     0x1405B3130
#define CXWnd__GetClientClipRect_x                                 0x1405B2FE0
#define CXWnd__GetRelativeRect_x                                   0x1405B4AF0
#define CXWnd__GetScreenClipRect_x                                 0x1405B4C00
#define CXWnd__GetScreenRect_x                                     0x1405B4D80
#define CXWnd__GetTooltipRect_x                                    0x1405B4F00
#define CXWnd__IsActive_x                                          0x1405B54C0
#define CXWnd__IsDescendantOf_x                                    0x1405B54F0
#define CXWnd__IsReallyVisible_x                                   0x1405B5560
#define CXWnd__IsType_x                                            0x1405B55B0
#define CXWnd__Minimize_x                                          0x1405B56A0
#define CXWnd__ProcessTransition_x                                 0x1405B65A0
#define CXWnd__Resize_x                                            0x1405B66C0
#define CXWnd__Right_x                                             0x1405B6760
#define CXWnd__SetFocus_x                                          0x1405B6B20
#define CXWnd__SetFont_x                                           0x1405B6B70
#define CXWnd__SetKeyTooltip_x                                     0x1405B6C80
#define CXWnd__SetMouseOver_x                                      0x1405B6DB0
#define CXWnd__SetParent_x                                         0x1405B6E30
#define CXWnd__StartFade_x                                         0x1405B7280
#define CXWnd__vftable_x                                           0x140ACFEE0
#define CXWnd__CXWnd_x                                             0x1405AEC40
#define CXWnd__dCXWnd_x                                            0x1405AF570

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F9940

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D7280
#define CXWndManager__DrawCursor_x                                 0x1405D7560
#define CXWndManager__DrawWindows_x                                0x1405D77C0
#define CXWndManager__GetKeyboardFlags_x                           0x1405D7E10
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D7E50
#define CXWndManager__RemoveWnd_x                                  0x1405DB680

// CDBStr
#define CDBStr__GetString_x                                        0x14018F680

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406880B0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3460
#define CCharacterListWnd__EnterWorld_x                            0x1400D2470
#define CCharacterListWnd__Quit_x                                  0x1400D3440
#define CCharacterListWnd__UpdateList_x                            0x1400D42C0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140655810
#define ItemBase__CreateItemTagString_x                            0x1406562A0
#define ItemBase__GetImageNum_x                                    0x1406589E0
#define ItemBase__GetItemValue_x                                   0x14065A480
#define ItemBase__IsEmpty_x                                        0x14065C200
#define ItemBase__IsKeyRingItem_x                                  0x14065C930
#define ItemBase__ValueSellMerchant_x                              0x140660BF0
#define ItemClient__CanDrop_x                                      0x1402BA260
#define ItemClient__CanGoInBag_x                                   0x1402BA390
#define ItemClient__CreateItemClient_x                             0x1402BA620
#define ItemClient__dItemClient_x                                  0x1402BA0D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AEEE0
#define EQ_LoadingS__Array_x                                       0x140D3B230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066CC50
#define PcBase__GetCombatAbility_x                                 0x14066D340
#define PcBase__GetCombatAbilityTimer_x                            0x14066D3E0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066DB80
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066E5F0
#define PcClient__AlertInventoryChanged_x                          0x1402DD3D0
#define PcClient__GetConLevel_x                                    0x1402DDB20  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E02B0
#define PcClient__HasLoreItem_x                                    0x1402E12F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EDB30
#define PcZoneClient__RemoveMyAffect_x                             0x1402F0FD0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140223460
#define EQGroundItemListManager__Add_x                             0x140223610
#define EQGroundItemListManager__Clear_x                           0x1402236B0
#define EQGroundItemListManager__Delete_x                          0x140223770
#define EQGroundItemListManager__Instance_x                        0x140223800

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025E130

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140189E60

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140641EB0
#define PlayerBase__CanSee1_x                                      0x140641F80
#define PlayerBase__GetVisibilityLineSegment_x                     0x140642460
#define PlayerBase__HasProperty_x                                  0x140642630
#define PlayerBase__IsTargetable_x                                 0x1406426F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FEC70
#define PlayerClient__GetPcClient_x                                0x1403017A0
#define PlayerClient__PlayerClient_x                               0x1402F6FC0
#define PlayerClient__SetNameSpriteState_x                         0x140304ED0
#define PlayerClient__SetNameSpriteTint_x                          0x140305E90
#define PlayerZoneClient__ChangeHeight_x                           0x1403148C0
#define PlayerZoneClient__DoAttack_x                               0x1403155D0
#define PlayerZoneClient__GetLevel_x                               0x140318D00
#define PlayerZoneClient__IsValidTeleport_x                        0x140260ED0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019DA60

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030DDC0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030DE70  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030DF70
#define PlayerManagerClient__CreatePlayer_x                        0x14030D890
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140641A70

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BF7A0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BF0D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BF140
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BF730  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BF8C0
#define KeypressHandler__HandleKeyUp_x                             0x1402BF9E0
#define KeypressHandler__SaveKeymapping_x                          0x1402BF5C0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140685BD0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067F9A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E73A0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EBC60
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EEBF0
#define PcZoneClient__RemovePetEffect_x                            0x1402F12B0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EF7C0
#define PcZoneClient__CanEquipItem_x                               0x1402E9F60
#define PcZoneClient__GetItemByID_x                                0x1402ECB80
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F0E50
#define PcZoneClient__BandolierSwap_x                              0x1402DD480

// Doors
#define EQSwitch__UseSwitch_x                                      0x140265A00

// IconCache
#define IconCache__GetIcon_x                                       0x1403CD210

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C1640
#define CContainerMgr__CloseContainer_x                            0x1403C0F60
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C19C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BD4B0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B1BB0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044CE00
#define CLootWnd__RequestLootSlot_x                                0x14044DE50

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DE6C0
#define EQ_Spell__SpellAffects_x                                   0x1401DF9A0
#define EQ_Spell__SpellAffectBase_x                                0x1401DF900
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC5F0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC5A0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF5D0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DF180
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DEA40

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3AC0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051A100
#define CTargetWnd__RefreshTargetBuffs_x                           0x140519810
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140519010

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405217A0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186860
#define CTaskManager__GetTaskStatus_x                              0x140186970
#define CTaskManager__GetElementDescription_x                      0x1401864F0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DC9E0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DB820
#define EqSoundManager__SoundAssistPlay_x                          0x140338170  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403384B0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B8050
#define CTextureAnimation__SetCurCell_x                            0x1405B8360

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AFDB0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A06A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A0720
#define CharacterBase__IsExpansionFlag_x                           0x140202920

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039C470
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039CEE0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039E430

// messages
#define msg_spell_worn_off_x                                       0x1402199A0
#define msg_new_text_x                                             0x140215160
#define __msgTokenTextParam_x                                      0x14020C640
#define msgTokenText_x                                             0x14020C550

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140339D90
#define SpellManager__GetSpellByGroupAndRank_x                     0x140339CB0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140650E10

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140446230

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C63C0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C9850
#define CCursorAttachment__RemoveAttachment_x                      0x1403C9B00
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F1300
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F14F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F1500

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152470
#define CFindItemWnd__Update_x                                     0x140152E10
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BAB0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CB90
#define LootFiltersManager__GetItemFilterData_x                    0x14015D6B0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015DF50
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E200

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049FD60

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403328F0
#define CResolutionHandler__UpdateResolution_x                     0x14059D4D0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BD8F0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A4AA0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A4990  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E4350
#define CGroupWnd__UpdateDisplay_x                                 0x1403E3F30

// ItemBase
#define ItemBase__IsLore_x                                         0x14065CA70
#define ItemBase__IsLoreEquipped_x                                 0x14065CB00

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D2F80

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025E290
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025E220
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025E260

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CEE0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128AE0
#define FactionManagerClient__HandleFactionMessage_x               0x140128EC0
#define FactionManagerClient__GetFactionStanding_x                 0x1401282B0
#define FactionManagerClient__GetMaxFaction_x                      0x1401282B0
#define FactionManagerClient__GetMinFaction_x                      0x140128160

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0B80

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401342C0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B7AB0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B6C70
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B78D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7850  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033F060

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CEE0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405ADE10

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140350C50

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FDA0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140688C30
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE47E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140550170

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14083B058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
