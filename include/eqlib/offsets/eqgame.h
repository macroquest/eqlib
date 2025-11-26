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

#define __ClientDate                                               20251126u
#define __ExpectedVersionDate                                     "Nov 26 2025"
#define __ExpectedVersionTime                                     "04:34:03"
#define __ActualVersionDate_x                                      0x140973918
#define __ActualVersionTime_x                                      0x140973908
#define __ActualVersionBuild_x                                     0x140908AC0

// Memory Protection
#define __MemChecker0_x                                            0x1402C6090
#define __MemChecker1_x                                            0x140595380
#define __MemChecker4_x                                            0x140293850
#define __EncryptPad0_x                                            0x140D46F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7F8C0
#define instEQZoneInfo_x                                           0x140E7FAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140227710
#define __gfMaxZoomCameraDistance_x                                0x140909D68
#define __gfMaxCameraDistance_x                                    0x140AB3CA4
#define __CurrentSocial_x                                          0x140C0295C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3E720
#define g_eqCommandStates_x                                        0x140D3F7C0
#define __CommandList_x                                            0x140D3FA00
#define __ScreenMode_x                                             0x140DC7234
#define __gWorld_x                                                 0x140E7A3E8
#define __gpbCommandEvent_x                                        0x140E77E94
#define __ServerHost_x                                             0x140E78098
#define __Guilds_x                                                 0x140E7E470
#define __MemCheckBitmask_x                                        0x140E7FDFF
#define __MemCheckActive_x                                         0x140E81515
#define __MouseEventTime_x                                         0x140EF4E88
#define DI8__MouseState_x                                          0x140EF9108
#define __heqmain_x                                                0x140EFB5A8
#define DI8__Mouse_x                                               0x140EF9058
#define __HWnd_x                                                   0x140EF90E0
#define __Mouse_x                                                  0x140EF9014
#define DI8__Keyboard_x                                            0x140EF9030
#define __LoginName_x                                              0x140EFBC8C
#define __CurrentMapLabel_x                                        0x140F0F7A0
#define __LabelCache_x                                             0x140F10370
#define __ChatFilterDefs_x                                         0x140A4DB70
#define Teleport_Table_Size_x                                      0x140E77F2C
#define Teleport_Table_x                                           0x140E783B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E7A800
#define pinstActiveBanker_x                                        0x140E77D60
#define pinstActiveCorpse_x                                        0x140E77D50
#define pinstActiveGMaster_x                                       0x140E77D58
#define pinstActiveMerchant_x                                      0x140E77D48
#define pinstAltAdvManager_x                                       0x140DC8010
#define pinstCEverQuest_x                                          0x140EF9050
#define pinstCamActor_x                                            0x140DC7220
#define pinstCDBStr_x                                              0x140DC6DC0
#define pinstCDisplay_x                                            0x140E77E98
#define pinstControlledPlayer_x                                    0x140E77DF0
#define pinstCResolutionHandler_x                                  0x140F20BA8
#define pinstCSidlManager_x                                        0x140F21910
#define pinstCXWndManager_x                                        0x140F21908
#define instDynamicZone_x                                          0x140E7E330 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7E37E
#define instExpeditionName_x                                       0x140E7E3BE
#define pinstDZMember_x                                            0x140E7E448
#define pinstDZTimerInfo_x                                         0x140E7E450
#define pinstEqLogin_x                                             0x140EFB5D0
#define instTribute_x                                              0x140D39D60
#define pinstDeviceInputProxy_x                                    0x140E7F91C
#define pinstEQSoundManager_x                                      0x140DC8390
#define pinstEQSpellStrings_x                                      0x140DAB950
#define pinstSGraphicsEngine_x                                     0x140F20938
#define pinstLocalPC_x                                             0x140E7A3D8
#define pinstLocalPlayer_x                                         0x140E77D40
#define pinstCMercenaryClientManager_x                             0x140EF67A8
#define pinstModelPlayer_x                                         0x140E77D70
#define pinstRenderInterface_x                                     0x140F20950
#define pinstSkillMgr_x                                            0x140EF8458
#define pinstSpawnManager_x                                        0x140EF6B60
#define pinstSpellManager_x                                        0x140EF84C0
#define pinstStringTable_x                                         0x140E7A3E0
#define pinstSwitchManager_x                                       0x140E77CC0
#define pinstTarget_x                                              0x140E77DE8
#define pinstTaskMember_x                                          0x140D39D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E77D68
#define instTributeActive_x                                        0x140D39D89
#define pinstViewActor_x                                           0x140DC7218
#define pinstWorldData_x                                           0x140E77E08
#define pinstPlayerPath_x                                          0x140EF6B88
#define pinstTargetIndicator_x                                     0x140EF8570
#define EQObject_Top_x                                             0x140E77F20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F0C900
#define pinstCContainerMgr_x                                       0x140DC7348
#define pinstCContextMenuManager_x                                 0x140F215F0
#define pinstCInvSlotMgr_x                                         0x140DC7328
#define pinstCItemDisplayManager_x                                 0x140F0F370
#define pinstCPopupWndManager_x                                    0x140F0FC00
#define pinstCSpellDisplayMgr_x                                    0x140F10250
#define pinstCTaskManager_x                                        0x140C02C90
#define pinstEQSuiteTextureLoader_x                                0x140D50620
#define pinstItemIconCache_x                                       0x140F0CC60
#define pinstLootFiltersManager_x                                  0x140DC6808
#define pinstGFViewListener_x                                      0x140F20DC8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140251250
#define __CastRay_x                                                0x1402496D0
#define __CastRay2_x                                               0x1402493D0
#define __compress_block_x                                         0x14054A740
#define __ConvertItemTags_x                                        0x140249B30
#define __CleanItemTags_x                                          0x14008A5D0
#define __CreateCascadeMenuItems_x                                 0x140192610
#define __decompress_block_x                                       0x140590B90
#define __DoesFileExist_x                                          0x140599230
#define __EQGetTime_x                                              0x140595930
#define __ExecuteCmd_x                                             0x14021ECA0
#define __FixHeading_x                                             0x140650150
#define __FlushDxKeyboard_x                                        0x140349F20
#define __get_bearing_x                                            0x140253480
#define __get_melee_range_x                                        0x140253570
#define __GetAnimationCache_x                                      0x1403CD7A0
#define __GetGaugeValueFromEQ_x                                    0x14050A2A0
#define __GetLabelFromEQ_x                                         0x14050B8A0
#define __GetXTargetType_x                                         0x140651430   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406501D0
#define __HelpPath_x                                               0x140EF4D50   // Why?
#define __NewUIINI_x                                               0x1405172D0   // Why?
#define __ProcessDeviceEvents_x                                    0x140293E60
#define __ProcessGameEvents_x                                      0x1402888A0
#define __ProcessKeyboardEvents_x                                  0x14034B670
#define __ProcessMouseEvents_x                                     0x140289FB0
#define __SaveColors_x                                             0x1401A2500
#define __STMLToText_x                                             0x1405A9070
#define __WndProc_x                                                0x1403486C0
#define CMemoryMappedFile__SetFile_x                               0x1407FDE60
#define DrawNetStatus_x                                            0x1402D5380
#define Util__FastTime_x                                           0x140594E60
#define __eq_delete_x                                              0x1406C9E08
#define __eq_new_x                                                 0x1406CA060
#define __CopyLayout_x                                             0x1402C2470
#define __ThrottleFrameRate_x                                      0x140277E7C
#define __ThrottleFrameRateEnd_x                                   0x140277E82

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035B170
#define CAAWnd__Update_x                                           0x14035B470
#define CAAWnd__UpdateSelected_x                                   0x14035C670

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE570
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6F50
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140854A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AEEA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AD760
#define AltAdvManager__IsAbilityReady_x                            0x1401ADBF0
#define AltAdvManager__GetAAById_x                                 0x1401AD030
#define AltAdvManager__CanTrainAbility_x                           0x1401ACE30
#define AltAdvManager__CanSeeAbility_x                             0x1401ACAF0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5BE0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6A50
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6CA0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAFA0
#define CharacterZoneClient__CanUseItem_x                          0x1400EB560
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7670
#define CharacterZoneClient__CastSpell_x                           0x1400D7710
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E7470
#define CharacterZoneClient__Cur_HP_x                              0x1400ECC80
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECE40
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA980
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F34F0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101BB0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBE20
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA8A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4D80
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F3C70
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBFA0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB790
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD660
#define CharacterZoneClient__GetHPRegen_x                          0x1400F43A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC8F0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F5010
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DC020
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5D90
#define CharacterZoneClient__GetModCap_x                           0x1400FD360
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC2B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC480
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0CF0
#define CharacterZoneClient__HasSkill_x                            0x1400F8EA0
#define CharacterZoneClient__HitBySpell_x                          0x1400DCF10
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E08E0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCE40
#define CharacterZoneClient__Max_Endurance_x                       0x1402F00D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD190
#define CharacterZoneClient__Max_Mana_x                            0x1402F02F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD5F0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3F30
#define CharacterZoneClient__SpellDuration_x                       0x1400E4C60
#define CharacterZoneClient__TotalEffect_x                         0x1400E6040
#define CharacterZoneClient__UseSkill_x                            0x140102B20


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037B860

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140386460

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403822A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140385EE0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140388BE0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD3580

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403AB960
#define CChatWindowManager__InitContextMenu_x                      0x1403ABAF0
#define CChatWindowManager__FreeChatWindow_x                       0x1403AA9B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B3AB0
#define CChatWindowManager__CreateChatWindow_x                     0x1403AA3E0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B0B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B4B00
#define CChatWindow__Clear_x                                       0x1403B5AC0
#define CChatWindow__WndNotification_x                             0x1403B6CB0
#define CChatWindow__AddHistory_x                                  0x1403B55C0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D6910
#define CContextMenu__RemoveMenuItem_x                             0x1405D6D00
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D6CD0
#define CContextMenu__CheckMenuItem_x                              0x1405D6B40
#define CContextMenu__SetMenuItem_x                                0x1405D6D20
#define CContextMenu__AddSeparator_x                               0x1405D6A80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C87D0
#define CContextMenuManager__RemoveMenu_x                          0x1405C8DB0
#define CContextMenuManager__PopupMenu_x                           0x1405C8AF0
#define CContextMenuManager__Flush_x                               0x1405C8850
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C5150

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A3C20
#define CChatService__GetFriendName_x                              0x1406A3C30

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B96C0
#define CComboWnd__Draw_x                                          0x1405B97C0
#define CComboWnd__GetCurChoice_x                                  0x1405B9AA0  // unused
#define CComboWnd__GetListRect_x                                   0x1405B9B40
#define CComboWnd__InsertChoice_x                                  0x1405B9E80
#define CComboWnd__SetColors_x                                     0x1405BA210
#define CComboWnd__SetChoice_x                                     0x1405BA1D0
#define CComboWnd__GetItemCount_x                                  0x1405B9B30
#define CComboWnd__GetCurChoiceText_x                              0x1405B9AE0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B9A70
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B9F40

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C2E50
#define CContainerWnd__SetContainer_x                              0x14041EE10
#define CContainerWnd__vftable_x                                   0x1409E8988

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC6FB4
#define CDisplay__ZoneMainUI_x                                     0x1405F0B90
#define CDisplay__PreZoneMainUI_x                                  0x14019F400
#define CDisplay__CleanGameUI_x                                    0x1401916D0
#define CDisplay__GetClickedActor_x                                0x140195890
#define CDisplay__GetUserDefinedColor_x                            0x140196500
#define CDisplay__InitCharSelectUI_x                               0x1401967B0
#define CDisplay__ReloadUI_x                                       0x1401A1700
#define CDisplay__RestartUI_x                                      0x140203500
#define CDisplay__WriteTextHD2_x                                   0x1401A8710
#define CDisplay__TrueDistance_x                                   0x1401A83C0
#define CDisplay__SetViewActor_x                                   0x1401A4C30
#define CDisplay__GetFloorHeight_x                                 0x140195AF0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A7EB0
#define CDisplay__RealRender_World_x                               0x1401A0AD0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FADC0
#define CEditWnd__DrawCaret_x                                      0x1405EC890  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405ECD50
#define CEditWnd__GetCaretPt_x                                     0x1405ECFD0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405ED010
#define CEditWnd__GetDisplayString_x                               0x1405ED280
#define CEditWnd__GetHorzOffset_x                                  0x1405ED4C0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405ED610
#define CEditWnd__GetSelStartPt_x                                  0x1405ED8F0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405ED740
#define CEditWnd__PointFromPrintableChar_x                         0x1405EE4A0
#define CEditWnd__ReplaceSelection_x                               0x1405EE850
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EECF0
#define CEditWnd__SetEditable_x                                    0x1405EEF80
#define CEditWnd__SetWindowText_x                                  0x1405EEFB0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140278F40
#define CEverQuest__ClickedPlayer_x                                0x14026CF60
#define CEverQuest__CreateTargetIndicator_x                        0x14026D820
#define CEverQuest__DoTellWindow_x                                 0x14010ADC0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B6A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027A930
#define CEverQuest__dsp_chat_x                                     0x14010A800 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A5890
#define CEverQuest__Emote_x                                        0x14027B320
#define CEverQuest__GetBodyTypeDesc_x                              0x14027C100
#define CEverQuest__GetClassDesc_x                                 0x14027C160
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027C530
#define CEverQuest__GetDeityDesc_x                                 0x14027C7E0
#define CEverQuest__GetLangDesc_x                                  0x14027CC10
#define CEverQuest__GetRaceDesc_x                                  0x14027CFB0
#define CEverQuest__InterpretCmd_x                                 0x14027E940
#define CEverQuest__LeftClickedOnPlayer_x                          0x140293ED0
#define CEverQuest__LMouseUp_x                                     0x1402803C0
#define CEverQuest__RightClickedOnPlayer_x                         0x140291480
#define CEverQuest__RMouseUp_x                                     0x14028AB40
#define CEverQuest__SetGameState_x                                 0x140296950
#define CEverQuest__UPCNotificationFlush_x                         0x14029C2C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140280020
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028BF10
#define CEverQuest__ReportSuccessfulHit_x                          0x14028CD30

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D8690

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4F90
#define CGuild__GetGuildName_x                                     0x1400C4FD0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FBAC0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B7B90
#define CHotButton__SetCheck_x                                     0x1402B7E60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140415A60
#define CInvSlotMgr__MoveItem_x                                    0x1404165F0
#define CInvSlotMgr__SelectSlot_x                                  0x140418900

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404128A0
#define CInvSlot__SliderComplete_x                                 0x1404140D0
#define CInvSlot__GetItemBase_x                                    0x14040DF10
#define CInvSlot__UpdateItem_x                                     0x140414580

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041AAD0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043C4F0
#define CItemDisplayWnd__UpdateStrings_x                           0x14043F0C0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140438D00
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14043A650
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043B910

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140506D10
#define CSpellDisplayWnd__UpdateStrings_x                          0x140508AA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140543AA0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404353D0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157D00

// CLabel
#define CLabel__UpdateText_x                                       0x1404464B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BD050
#define CListWnd__dCListWnd_x                                      0x1405BD4A0
#define CListWnd__vftable_x                                        0x140AD16D0
#define CListWnd__AddColumn_x                                      0x1405BDB40
#define CListWnd__AddColumn1_x                                     0x1405BDBE0
#define CListWnd__AddLine_x                                        0x1405BDD40
#define CListWnd__AddString_x                                      0x1405BE2D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BE840
#define CListWnd__CalculateVSBRange_x                              0x1405BEB20
#define CListWnd__ClearSel_x                                       0x1405BECD0
#define CListWnd__ClearAllSel_x                                    0x1405BEC70
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BED30
#define CListWnd__Compare_x                                        0x1405BEEF0
#define CListWnd__Draw_x                                           0x1405BF3C0
#define CListWnd__DrawColumnSeparators_x                           0x1405BFF70
#define CListWnd__DrawHeader_x                                     0x1405C0030
#define CListWnd__DrawItem_x                                       0x1405C0710
#define CListWnd__DrawLine_x                                       0x1405C1090
#define CListWnd__DrawSeparator_x                                  0x1405C1550
#define CListWnd__EnableLine_x                                     0x1405C1970
#define CListWnd__EnsureVisible_x                                  0x1405C19D0
#define CListWnd__ExtendSel_x                                      0x1405C1AD0
#define CListWnd__GetColumnMinWidth_x                              0x1405C1E60
#define CListWnd__GetColumnWidth_x                                 0x1405C1EE0
#define CListWnd__GetCurSel_x                                      0x1405C1FE0
#define CListWnd__GetItemData_x                                    0x1405C2360
#define CListWnd__GetItemHeight_x                                  0x1405C23A0
#define CListWnd__GetItemRect_x                                    0x1405C25C0
#define CListWnd__GetItemText_x                                    0x1405C2860
#define CListWnd__GetSelList_x                                     0x1405C2AB0
#define CListWnd__GetSeparatorRect_x                               0x1405C2CA0
#define CListWnd__InsertLine_x                                     0x1405C4110
#define CListWnd__RemoveLine_x                                     0x1405C4780
#define CListWnd__SetColors_x                                      0x1405C4B40
#define CListWnd__SetColumnJustification_x                         0x1405C4B60
#define CListWnd__SetColumnLabel_x                                 0x1405C4BE0
#define CListWnd__SetColumnWidth_x                                 0x1405C4D80
#define CListWnd__SetCurSel_x                                      0x1405C4E50
#define CListWnd__SetItemColor_x                                   0x1405C50C0
#define CListWnd__SetItemData_x                                    0x1405C5160
#define CListWnd__SetItemText_x                                    0x1405C53A0
#define CListWnd__Sort_x                                           0x1405C57B0
#define CListWnd__ToggleSel_x                                      0x1405C5920
#define CListWnd__SetColumnsSizable_x                              0x1405C4DD0
#define CListWnd__SetItemWnd_x                                     0x1405C54D0
#define CListWnd__GetItemWnd_x                                     0x1405C2A40
#define CListWnd__SetItemIcon_x                                    0x1405C51A0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BE610
#define CListWnd__SetVScrollPos_x                                  0x1405C5710

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404599B0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A36398
#define MapViewMap__Clear_x                                        0x14045B530
#define MapViewMap__SetZoom_x                                      0x140461B80
#define MapViewMap__HandleLButtonDown_x                            0x14045E6C0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404833C0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140489C50
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14048A420
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048DCE0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048D030
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404920E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067EF60
#define CPacketScrambler__hton_x                                   0x14067EF50

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E6150
#define CSidlManagerBase__FindAnimation1_x                         0x1405E6090
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E6780
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E6530
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E5490
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E5420
#define CSidlManagerBase__CreateXWnd_x                             0x1405E4A60

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F9CA0
#define CSidlManager__CreateXWnd_x                                 0x1404F9E60

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AAB60
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AAC90
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F5300 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AAE10
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405AA290
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405AA360
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405AA570
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AB500
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AB730
#define CSidlScreenWnd__GetChildItem_x                             0x1405AB8D0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405ABB20
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B5C10 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405ABE90
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AC200
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405ACAC0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AD4C0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F20C68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405ADB50
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AE340
#define CSidlScreenWnd__vftable_x                                  0x140AD0958
#define CSidlScreenWnd__WndNotification_x                          0x1405AE390

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140333060 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140333380 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403332B0
#define CSkillMgr__IsActivatedSkill_x                              0x140333740
#define CSkillMgr__IsCombatSkill_x                                 0x140333780
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403336B0
#define CSkillMgr__GetSkillLastUsed_x                              0x140333300

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14050A270
#define CSliderWnd__SetValue_x                                     0x1405C6A90
#define CSliderWnd__SetNumTicks_x                                  0x1405C6910

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140500440

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CB230
#define CStmlWnd__CalculateHSBRange_x                              0x1405B55C0
#define CStmlWnd__CalculateVSBRange_x                              0x1405CC0D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CCBD0
#define CStmlWnd__ForceParseNow_x                                  0x1405CCC70
#define CStmlWnd__GetVisibleText_x                                 0x1405CD340
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CF0A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CF0E0
#define CStmlWnd__SetSTMLText_x                                    0x1405D60B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D6260
#define CStmlWnd__UpdateHistoryString_x                            0x1405D65F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C6E60
#define CTabWnd__DrawCurrentPage_x                                 0x1405C6F00
#define CTabWnd__DrawTab_x                                         0x1405C72D0
#define CTabWnd__GetTabRect_x                                      0x1405C7940
#define CTabWnd__InsertPage_x                                      0x1405C7C10
#define CTabWnd__RemovePage_x                                      0x1405C7EA0
#define CTabWnd__SetPage_x                                         0x1405C8000
#define CTabWnd__UpdatePage_x                                      0x1405C8300

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EF410
#define CPageWnd__SetTabText_x                                     0x1405EF480

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE520  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE930


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DDB20
#define CTextureFont__DrawWrappedText1_x                           0x1405DDA30
#define CTextureFont__DrawWrappedText2_x                           0x1405DDC50
#define CTextureFont__GetTextExtent_x                              0x1405DE000
#define CTextureFont__GetHeight_x                                  0x1405DDFC0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F3A60

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A7760

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4FF90
#define CXStr__gCXStrAccess_x                                      0x140F207C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B0C20
#define CXWnd__ClrFocus_x                                          0x1405B0F10
#define CXWnd__Destroy_x                                           0x1405B1090
#define CXWnd__DoAllDrawing_x                                      0x1405B1190
#define CXWnd__DrawColoredRect_x                                   0x1405B1960
#define CXWnd__DrawTooltip_x                                       0x1405B2FE0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B3090
#define CXWnd__GetChildItem_x                                      0x1405B3990
#define CXWnd__GetChildWndAt_x                                     0x1405B3A50
#define CXWnd__GetClientRect_x                                     0x1405B3D10
#define CXWnd__GetClientClipRect_x                                 0x1405B3BC0
#define CXWnd__GetRelativeRect_x                                   0x1405B5700
#define CXWnd__GetScreenClipRect_x                                 0x1405B5810
#define CXWnd__GetScreenRect_x                                     0x1405B5990
#define CXWnd__GetTooltipRect_x                                    0x1405B5B10
#define CXWnd__IsActive_x                                          0x1405B60D0
#define CXWnd__IsDescendantOf_x                                    0x1405B6100
#define CXWnd__IsReallyVisible_x                                   0x1405B6170
#define CXWnd__IsType_x                                            0x1405B61C0
#define CXWnd__Minimize_x                                          0x1405B62C0
#define CXWnd__ProcessTransition_x                                 0x1405B71C0
#define CXWnd__Resize_x                                            0x1405B72E0
#define CXWnd__Right_x                                             0x1405B7380
#define CXWnd__SetFocus_x                                          0x1405B7730
#define CXWnd__SetFont_x                                           0x1405B7780
#define CXWnd__SetKeyTooltip_x                                     0x1405B7880
#define CXWnd__SetMouseOver_x                                      0x1405B79C0
#define CXWnd__SetParent_x                                         0x1405B7A40
#define CXWnd__StartFade_x                                         0x1405B7E90
#define CXWnd__vftable_x                                           0x140AD0F30
#define CXWnd__CXWnd_x                                             0x1405AF7B0
#define CXWnd__dCXWnd_x                                            0x1405B0100

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405FA540

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D7ED0
#define CXWndManager__DrawCursor_x                                 0x1405D81B0
#define CXWndManager__DrawWindows_x                                0x1405D8410
#define CXWndManager__GetKeyboardFlags_x                           0x1405D8A60
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D8AA0
#define CXWndManager__RemoveWnd_x                                  0x1405DC1E0

// CDBStr
#define CDBStr__GetString_x                                        0x14018F8A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140688DB0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3480
#define CCharacterListWnd__EnterWorld_x                            0x1400D2490
#define CCharacterListWnd__Quit_x                                  0x1400D3460
#define CCharacterListWnd__UpdateList_x                            0x1400D42E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406561E0
#define ItemBase__CreateItemTagString_x                            0x140656C70
#define ItemBase__GetImageNum_x                                    0x1406593B0
#define ItemBase__GetItemValue_x                                   0x14065B230
#define ItemBase__IsEmpty_x                                        0x14065CFA0
#define ItemBase__IsKeyRingItem_x                                  0x14065D6D0
#define ItemBase__ValueSellMerchant_x                              0x140661900
#define ItemClient__CanDrop_x                                      0x1402BA450
#define ItemClient__CanGoInBag_x                                   0x1402BA580
#define ItemClient__CreateItemClient_x                             0x1402BA810
#define ItemClient__dItemClient_x                                  0x1402BA2C0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF110
#define EQ_LoadingS__Array_x                                       0x140D3C230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066D940
#define PcBase__GetCombatAbility_x                                 0x14066E030
#define PcBase__GetCombatAbilityTimer_x                            0x14066E0D0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066E870
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066F2E0
#define PcClient__AlertInventoryChanged_x                          0x1402DD5D0
#define PcClient__GetConLevel_x                                    0x1402DDD20  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E04B0
#define PcClient__HasLoreItem_x                                    0x1402E14F0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402EDD40
#define PcZoneClient__RemoveMyAffect_x                             0x1402F1210

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x1402236A0
#define EQGroundItemListManager__Add_x                             0x140223850
#define EQGroundItemListManager__Clear_x                           0x1402238F0
#define EQGroundItemListManager__Delete_x                          0x1402239B0
#define EQGroundItemListManager__Instance_x                        0x140223A40

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025E340

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A0A0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140642AB0
#define PlayerBase__CanSee1_x                                      0x140642B80
#define PlayerBase__GetVisibilityLineSegment_x                     0x140643060
#define PlayerBase__HasProperty_x                                  0x140643230
#define PlayerBase__IsTargetable_x                                 0x1406432F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FEEA0
#define PlayerClient__GetPcClient_x                                0x1403019D0
#define PlayerClient__PlayerClient_x                               0x1402F7200
#define PlayerClient__SetNameSpriteState_x                         0x140305100
#define PlayerClient__SetNameSpriteTint_x                          0x1403060C0
#define PlayerZoneClient__ChangeHeight_x                           0x140314BF0
#define PlayerZoneClient__DoAttack_x                               0x140315900
#define PlayerZoneClient__GetLevel_x                               0x140319030
#define PlayerZoneClient__IsValidTeleport_x                        0x1402610D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019DC80

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030E0F0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030E1A0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030E2A0
#define PlayerManagerClient__CreatePlayer_x                        0x14030DBC0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140642670

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BF990
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BF2C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BF330
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BF920  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BFAB0
#define KeypressHandler__HandleKeyUp_x                             0x1402BFBD0
#define KeypressHandler__SaveKeymapping_x                          0x1402BF7B0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406868E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406806A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E75B0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EBE70
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EEE20
#define PcZoneClient__RemovePetEffect_x                            0x1402F14F0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EFA00
#define PcZoneClient__CanEquipItem_x                               0x1402EA170
#define PcZoneClient__GetItemByID_x                                0x1402ECD90
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F1090
#define PcZoneClient__BandolierSwap_x                              0x1402DD680

// Doors
#define EQSwitch__UseSwitch_x                                      0x140265C00

// IconCache
#define IconCache__GetIcon_x                                       0x1403CD7D0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C1C00
#define CContainerMgr__CloseContainer_x                            0x1403C1520
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C1F80

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BDE60

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B1D80

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044D7D0
#define CLootWnd__RequestLootSlot_x                                0x14044E820

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DE8A0
#define EQ_Spell__SpellAffects_x                                   0x1401DFB80
#define EQ_Spell__SpellAffectBase_x                                0x1401DFAE0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC610
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC5C0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF7B0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DF360
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DEC20

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3AD0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051AAE0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14051A1F0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405199F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140522180  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186A80
#define CTaskManager__GetTaskStatus_x                              0x140186B90
#define CTaskManager__GetElementDescription_x                      0x140186710

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DCBC0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DBA00
#define EqSoundManager__SoundAssistPlay_x                          0x1403384A0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403387E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B8C50
#define CTextureAnimation__SetCurCell_x                            0x1405B8F60

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AFF80

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A13A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A1420
#define CharacterBase__IsExpansionFlag_x                           0x140202B70

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039CA30
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039D4A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039E9F0

// messages
#define msg_spell_worn_off_x                                       0x140219BE0
#define msg_new_text_x                                             0x1402153A0
#define __msgTokenTextParam_x                                      0x14020C890
#define msgTokenText_x                                             0x14020C7A0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14033A0E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14033A000

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140651810

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140446C00

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C6980
#define CCursorAttachment__IsOkToActivate_x                        0x1403C9E10
#define CCursorAttachment__RemoveAttachment_x                      0x1403CA0C0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F1F00
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F20F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F2100

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401526A0
#define CFindItemWnd__Update_x                                     0x140153040
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BC80

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CDC0
#define LootFiltersManager__GetItemFilterData_x                    0x14015D8D0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E170
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E420

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A0730

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140332C20
#define CResolutionHandler__UpdateResolution_x                     0x14059DF50

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BDEB0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A57A0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A5690  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E4950
#define CGroupWnd__UpdateDisplay_x                                 0x1403E4530

// ItemBase
#define ItemBase__IsLore_x                                         0x14065D810
#define ItemBase__IsLoreEquipped_x                                 0x14065D8A0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D3180

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025E4A0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025E430
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025E470

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032D200

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128AD0
#define FactionManagerClient__HandleFactionMessage_x               0x140128EB0
#define FactionManagerClient__GetFactionStanding_x                 0x1401282A0
#define FactionManagerClient__GetMaxFaction_x                      0x1401282A0
#define FactionManagerClient__GetMinFaction_x                      0x140128150

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0B80

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401342B0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B7CF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B6EB0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B7B10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7A90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033F3C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032D200

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AE980

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140350CC0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FDA0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140689930
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE5830

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140550B60

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14083C068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
