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

#define __ClientDate                                               20251130u
#define __ExpectedVersionDate                                     "Nov 30 2025"
#define __ExpectedVersionTime                                     "04:36:04"
#define __ActualVersionDate_x                                      0x140973918
#define __ActualVersionTime_x                                      0x140973908
#define __ActualVersionBuild_x                                     0x140908AC0

// Memory Protection
#define __MemChecker0_x                                            0x1402C5C40
#define __MemChecker1_x                                            0x140595060
#define __MemChecker4_x                                            0x1402933F0
#define __EncryptPad0_x                                            0x140D46F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7F8C0
#define instEQZoneInfo_x                                           0x140E7FAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140227210
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
#define __allowslashcommand_x                                      0x140250D80
#define __CastRay_x                                                0x1402491F0
#define __CastRay2_x                                               0x140248EF0
#define __compress_block_x                                         0x14054A420
#define __ConvertItemTags_x                                        0x140249650
#define __CleanItemTags_x                                          0x14008A5D0
#define __CreateCascadeMenuItems_x                                 0x140192720
#define __decompress_block_x                                       0x140590870
#define __DoesFileExist_x                                          0x140598F10
#define __EQGetTime_x                                              0x140595610
#define __ExecuteCmd_x                                             0x14021E7A0
#define __FixHeading_x                                             0x14064FEF0
#define __FlushDxKeyboard_x                                        0x140349A50
#define __get_bearing_x                                            0x140252FB0
#define __get_melee_range_x                                        0x1402530A0
#define __GetAnimationCache_x                                      0x1403CD290
#define __GetGaugeValueFromEQ_x                                    0x140509F60
#define __GetLabelFromEQ_x                                         0x14050B550
#define __GetXTargetType_x                                         0x1406511D0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064FF70
#define __HelpPath_x                                               0x140EF4D50   // Why?
#define __NewUIINI_x                                               0x140516FA0   // Why?
#define __ProcessDeviceEvents_x                                    0x140293A00
#define __ProcessGameEvents_x                                      0x140288430
#define __ProcessKeyboardEvents_x                                  0x14034B1A0
#define __ProcessMouseEvents_x                                     0x140289B50
#define __SaveColors_x                                             0x1401A2610
#define __STMLToText_x                                             0x1405A8D50
#define __WndProc_x                                                0x1403481F0
#define CMemoryMappedFile__SetFile_x                               0x1407FD820
#define DrawNetStatus_x                                            0x1402D4F70
#define Util__FastTime_x                                           0x140594B40
#define __eq_delete_x                                              0x1406C97D8
#define __eq_new_x                                                 0x1406C9A30
#define __CopyLayout_x                                             0x1402C2060
#define __ThrottleFrameRate_x                                      0x140277A0C
#define __ThrottleFrameRateEnd_x                                   0x140277A12

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035ACA0
#define CAAWnd__Update_x                                           0x14035AFA0
#define CAAWnd__UpdateSelected_x                                   0x14035C1A0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE570
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6F50
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140854A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AEEA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AD870
#define AltAdvManager__IsAbilityReady_x                            0x1401ADD00
#define AltAdvManager__GetAAById_x                                 0x1401AD140
#define AltAdvManager__CanTrainAbility_x                           0x1401ACF40
#define AltAdvManager__CanSeeAbility_x                             0x1401ACC00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5BA0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6A10
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6C60
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAF80
#define CharacterZoneClient__CanUseItem_x                          0x1400EB540
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7630
#define CharacterZoneClient__CastSpell_x                           0x1400D76D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E7450
#define CharacterZoneClient__Cur_HP_x                              0x1400ECC60
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECE20
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA940
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F34E0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101BA0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBDE0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA880
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4D70
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F3C60
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBF60
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB750
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD620
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4390
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC8D0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F5000
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DBFE0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5D80
#define CharacterZoneClient__GetModCap_x                           0x1400FD350
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC270
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC440
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0CB0
#define CharacterZoneClient__HasSkill_x                            0x1400F8E90
#define CharacterZoneClient__HitBySpell_x                          0x1400DCED0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E08A0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCE30
#define CharacterZoneClient__Max_Endurance_x                       0x1402EFCD0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD180
#define CharacterZoneClient__Max_Mana_x                            0x1402EFEF0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD5E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3F10
#define CharacterZoneClient__SpellDuration_x                       0x1400E4C40
#define CharacterZoneClient__TotalEffect_x                         0x1400E6020
#define CharacterZoneClient__UseSkill_x                            0x140102B10


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037B380

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140385F80

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140381DB0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140385A00

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403886F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD3580

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403AB460
#define CChatWindowManager__InitContextMenu_x                      0x1403AB5F0
#define CChatWindowManager__FreeChatWindow_x                       0x1403AA4B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B35B0
#define CChatWindowManager__CreateChatWindow_x                     0x1403A9EE0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B0B0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B4600
#define CChatWindow__Clear_x                                       0x1403B55B0
#define CChatWindow__WndNotification_x                             0x1403B67A0
#define CChatWindow__AddHistory_x                                  0x1403B50B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D6540
#define CContextMenu__RemoveMenuItem_x                             0x1405D6930
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D6900
#define CContextMenu__CheckMenuItem_x                              0x1405D6770
#define CContextMenu__SetMenuItem_x                                0x1405D6950
#define CContextMenu__AddSeparator_x                               0x1405D66B0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C8400
#define CContextMenuManager__RemoveMenu_x                          0x1405C89E0
#define CContextMenuManager__PopupMenu_x                           0x1405C8720
#define CContextMenuManager__Flush_x                               0x1405C8480
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C4C30

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A35F0
#define CChatService__GetFriendName_x                              0x1406A3600

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B92E0
#define CComboWnd__Draw_x                                          0x1405B93E0
#define CComboWnd__GetCurChoice_x                                  0x1405B96C0  // unused
#define CComboWnd__GetListRect_x                                   0x1405B9760
#define CComboWnd__InsertChoice_x                                  0x1405B9AA0
#define CComboWnd__SetColors_x                                     0x1405B9E30
#define CComboWnd__SetChoice_x                                     0x1405B9DF0
#define CComboWnd__GetItemCount_x                                  0x1405B9750
#define CComboWnd__GetCurChoiceText_x                              0x1405B9700  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B9690
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B9B60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C2940
#define CContainerWnd__SetContainer_x                              0x14041E9D0
#define CContainerWnd__vftable_x                                   0x1409E8988

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC6FB4
#define CDisplay__ZoneMainUI_x                                     0x1405F08B0
#define CDisplay__PreZoneMainUI_x                                  0x14019F510
#define CDisplay__CleanGameUI_x                                    0x1401917E0
#define CDisplay__GetClickedActor_x                                0x1401959A0
#define CDisplay__GetUserDefinedColor_x                            0x140196610
#define CDisplay__InitCharSelectUI_x                               0x1401968C0
#define CDisplay__ReloadUI_x                                       0x1401A1810
#define CDisplay__RestartUI_x                                      0x140202F90
#define CDisplay__WriteTextHD2_x                                   0x1401A8820
#define CDisplay__TrueDistance_x                                   0x1401A84D0
#define CDisplay__SetViewActor_x                                   0x1401A4D40
#define CDisplay__GetFloorHeight_x                                 0x140195C00
#define CDisplay__ToggleScreenshotMode_x                           0x1401A7FC0
#define CDisplay__RealRender_World_x                               0x1401A0BE0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405FAAE0
#define CEditWnd__DrawCaret_x                                      0x1405EC5B0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405ECA70
#define CEditWnd__GetCaretPt_x                                     0x1405ECCF0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405ECD30
#define CEditWnd__GetDisplayString_x                               0x1405ECFA0
#define CEditWnd__GetHorzOffset_x                                  0x1405ED1E0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405ED330
#define CEditWnd__GetSelStartPt_x                                  0x1405ED610  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405ED460
#define CEditWnd__PointFromPrintableChar_x                         0x1405EE1C0
#define CEditWnd__ReplaceSelection_x                               0x1405EE570
#define CEditWnd__SelectableCharFromPoint_x                        0x1405EEA10
#define CEditWnd__SetEditable_x                                    0x1405EECA0
#define CEditWnd__SetWindowText_x                                  0x1405EECD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140278AD0
#define CEverQuest__ClickedPlayer_x                                0x14026CAA0
#define CEverQuest__CreateTargetIndicator_x                        0x14026D360
#define CEverQuest__DoTellWindow_x                                 0x14010ADC0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B6A0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027A4C0
#define CEverQuest__dsp_chat_x                                     0x14010A800 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A5430
#define CEverQuest__Emote_x                                        0x14027AEB0
#define CEverQuest__GetBodyTypeDesc_x                              0x14027BC90
#define CEverQuest__GetClassDesc_x                                 0x14027BCF0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027C0C0
#define CEverQuest__GetDeityDesc_x                                 0x14027C370
#define CEverQuest__GetLangDesc_x                                  0x14027C7A0
#define CEverQuest__GetRaceDesc_x                                  0x14027CB40
#define CEverQuest__InterpretCmd_x                                 0x14027E4D0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140293A70
#define CEverQuest__LMouseUp_x                                     0x14027FF50
#define CEverQuest__RightClickedOnPlayer_x                         0x140291020
#define CEverQuest__RMouseUp_x                                     0x14028A6E0
#define CEverQuest__SetGameState_x                                 0x1402964F0
#define CEverQuest__UPCNotificationFlush_x                         0x14029BE60 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027FBB0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028BAB0
#define CEverQuest__ReportSuccessfulHit_x                          0x14028C8D0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D8180

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4F50
#define CGuild__GetGuildName_x                                     0x1400C4F90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FB5C0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B7710
#define CHotButton__SetCheck_x                                     0x1402B79E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1404155D0
#define CInvSlotMgr__MoveItem_x                                    0x140416160
#define CInvSlotMgr__SelectSlot_x                                  0x140418490

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1404123E0
#define CInvSlot__SliderComplete_x                                 0x140413C10
#define CInvSlot__GetItemBase_x                                    0x14040DA50
#define CInvSlot__UpdateItem_x                                     0x1404140D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14041A670

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043C060
#define CItemDisplayWnd__UpdateStrings_x                           0x14043EC80
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404387F0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14043A170
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043B470

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1405069D0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140508760

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140543780

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140434EB0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157D80

// CLabel
#define CLabel__UpdateText_x                                       0x140446080

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BCC70
#define CListWnd__dCListWnd_x                                      0x1405BD0C0
#define CListWnd__vftable_x                                        0x140AD16D0
#define CListWnd__AddColumn_x                                      0x1405BD760
#define CListWnd__AddColumn1_x                                     0x1405BD800
#define CListWnd__AddLine_x                                        0x1405BD960
#define CListWnd__AddString_x                                      0x1405BDEF0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BE460
#define CListWnd__CalculateVSBRange_x                              0x1405BE740
#define CListWnd__ClearSel_x                                       0x1405BE8F0
#define CListWnd__ClearAllSel_x                                    0x1405BE890
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BE950
#define CListWnd__Compare_x                                        0x1405BEB10
#define CListWnd__Draw_x                                           0x1405BEFE0
#define CListWnd__DrawColumnSeparators_x                           0x1405BFB90
#define CListWnd__DrawHeader_x                                     0x1405BFC50
#define CListWnd__DrawItem_x                                       0x1405C0330
#define CListWnd__DrawLine_x                                       0x1405C0CB0
#define CListWnd__DrawSeparator_x                                  0x1405C1170
#define CListWnd__EnableLine_x                                     0x1405C1590
#define CListWnd__EnsureVisible_x                                  0x1405C15F0
#define CListWnd__ExtendSel_x                                      0x1405C16F0
#define CListWnd__GetColumnMinWidth_x                              0x1405C1A80
#define CListWnd__GetColumnWidth_x                                 0x1405C1B00
#define CListWnd__GetCurSel_x                                      0x1405C1C00
#define CListWnd__GetItemData_x                                    0x1405C1F80
#define CListWnd__GetItemHeight_x                                  0x1405C1FC0
#define CListWnd__GetItemRect_x                                    0x1405C21E0
#define CListWnd__GetItemText_x                                    0x1405C2480
#define CListWnd__GetSelList_x                                     0x1405C26D0
#define CListWnd__GetSeparatorRect_x                               0x1405C28C0
#define CListWnd__InsertLine_x                                     0x1405C3D30
#define CListWnd__RemoveLine_x                                     0x1405C43A0
#define CListWnd__SetColors_x                                      0x1405C4760
#define CListWnd__SetColumnJustification_x                         0x1405C4780
#define CListWnd__SetColumnLabel_x                                 0x1405C4800
#define CListWnd__SetColumnWidth_x                                 0x1405C49A0
#define CListWnd__SetCurSel_x                                      0x1405C4A70
#define CListWnd__SetItemColor_x                                   0x1405C4CE0
#define CListWnd__SetItemData_x                                    0x1405C4D80
#define CListWnd__SetItemText_x                                    0x1405C4FC0
#define CListWnd__Sort_x                                           0x1405C53D0
#define CListWnd__ToggleSel_x                                      0x1405C5540
#define CListWnd__SetColumnsSizable_x                              0x1405C49F0
#define CListWnd__SetItemWnd_x                                     0x1405C50F0
#define CListWnd__GetItemWnd_x                                     0x1405C2660
#define CListWnd__SetItemIcon_x                                    0x1405C4DC0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BE230
#define CListWnd__SetVScrollPos_x                                  0x1405C5330

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404595A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A36398
#define MapViewMap__Clear_x                                        0x14045B120
#define MapViewMap__SetZoom_x                                      0x140461770
#define MapViewMap__HandleLButtonDown_x                            0x14045E2B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140482FB0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140489860
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14048A040
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048D930
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048CC80
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140491D30

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067E910
#define CPacketScrambler__hton_x                                   0x14067E900

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E5E80
#define CSidlManagerBase__FindAnimation1_x                         0x1405E5DC0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E64B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E6260
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E51B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E5140
#define CSidlManagerBase__CreateXWnd_x                             0x1405E4780

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F9960
#define CSidlManager__CreateXWnd_x                                 0x1404F9B20

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405AA840
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405AA950
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F5020 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405AAAD0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A9F70
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405AA040
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405AA250
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AB1C0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AB3F0
#define CSidlScreenWnd__GetChildItem_x                             0x1405AB590
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AB7E0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B5830 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405ABB50
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405ABEC0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405AC780
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AD180
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F20C68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AD800
#define CSidlScreenWnd__StoreIniVis_x                              0x1405ADFF0
#define CSidlScreenWnd__vftable_x                                  0x140AD0958
#define CSidlScreenWnd__WndNotification_x                          0x1405AE040

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140332B90 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140332EB0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140332DE0
#define CSkillMgr__IsActivatedSkill_x                              0x140333270
#define CSkillMgr__IsCombatSkill_x                                 0x1403332B0
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403331E0
#define CSkillMgr__GetSkillLastUsed_x                              0x140332E30

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C5EB0
#define CSliderWnd__SetValue_x                                     0x1405C66C0
#define CSliderWnd__SetNumTicks_x                                  0x1405C6540

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140500100

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405CAE60
#define CStmlWnd__CalculateHSBRange_x                              0x1405B5200
#define CStmlWnd__CalculateVSBRange_x                              0x1405CBD00
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CC800
#define CStmlWnd__ForceParseNow_x                                  0x1405CC8A0
#define CStmlWnd__GetVisibleText_x                                 0x1405CCF70
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CECD0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CED10
#define CStmlWnd__SetSTMLText_x                                    0x1405D5CE0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D5E90
#define CStmlWnd__UpdateHistoryString_x                            0x1405D6220

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C6A90
#define CTabWnd__DrawCurrentPage_x                                 0x1405C6B30
#define CTabWnd__DrawTab_x                                         0x1405C6F00
#define CTabWnd__GetTabRect_x                                      0x1405C7570
#define CTabWnd__InsertPage_x                                      0x1405C7840
#define CTabWnd__RemovePage_x                                      0x1405C7AD0
#define CTabWnd__SetPage_x                                         0x1405C7C30
#define CTabWnd__UpdatePage_x                                      0x1405C7F30

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EF130
#define CPageWnd__SetTabText_x                                     0x1405EF1A0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE4F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE900


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DD830
#define CTextureFont__DrawWrappedText1_x                           0x1405DD740
#define CTextureFont__DrawWrappedText2_x                           0x1405DD960
#define CTextureFont__GetTextExtent_x                              0x1405DDD10
#define CTextureFont__GetHeight_x                                  0x1405DDCD0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F3780

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A7440

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4FF90
#define CXStr__gCXStrAccess_x                                      0x140F207C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405B08F0
#define CXWnd__ClrFocus_x                                          0x1405B0BE0
#define CXWnd__Destroy_x                                           0x1405B0D60
#define CXWnd__DoAllDrawing_x                                      0x1405B0E70
#define CXWnd__DrawColoredRect_x                                   0x1405B1630
#define CXWnd__DrawTooltip_x                                       0x1405B2CA0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B2D50
#define CXWnd__GetChildItem_x                                      0x1405B3660
#define CXWnd__GetChildWndAt_x                                     0x1405B3720
#define CXWnd__GetClientRect_x                                     0x1405B39B0
#define CXWnd__GetClientClipRect_x                                 0x1405B3880
#define CXWnd__GetRelativeRect_x                                   0x1405B5320
#define CXWnd__GetScreenClipRect_x                                 0x1405B5430
#define CXWnd__GetScreenRect_x                                     0x1405B55B0
#define CXWnd__GetTooltipRect_x                                    0x1405B5730
#define CXWnd__IsActive_x                                          0x1405B5CF0
#define CXWnd__IsDescendantOf_x                                    0x1405B5D10
#define CXWnd__IsReallyVisible_x                                   0x1405B5D80
#define CXWnd__IsType_x                                            0x1405B5DD0
#define CXWnd__Minimize_x                                          0x1405B5ED0
#define CXWnd__ProcessTransition_x                                 0x1405B6DC0
#define CXWnd__Resize_x                                            0x1405B6EE0
#define CXWnd__Right_x                                             0x1405B6F80
#define CXWnd__SetFocus_x                                          0x1405B7350
#define CXWnd__SetFont_x                                           0x1405B73A0
#define CXWnd__SetKeyTooltip_x                                     0x1405B74B0
#define CXWnd__SetMouseOver_x                                      0x1405B75F0
#define CXWnd__SetParent_x                                         0x1405B7670
#define CXWnd__StartFade_x                                         0x1405B7AC0
#define CXWnd__vftable_x                                           0x140AD0F30
#define CXWnd__CXWnd_x                                             0x1405AF460
#define CXWnd__dCXWnd_x                                            0x1405AFDD0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405FA260

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D7B00
#define CXWndManager__DrawCursor_x                                 0x1405D7DE0
#define CXWndManager__DrawWindows_x                                0x1405D8040
#define CXWndManager__GetKeyboardFlags_x                           0x1405D8690
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D86D0
#define CXWndManager__RemoveWnd_x                                  0x1405DBEF0

// CDBStr
#define CDBStr__GetString_x                                        0x14018F9B0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140688770

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3440
#define CCharacterListWnd__EnterWorld_x                            0x1400D2450
#define CCharacterListWnd__Quit_x                                  0x1400D3420
#define CCharacterListWnd__UpdateList_x                            0x1400D42A0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140655F80
#define ItemBase__CreateItemTagString_x                            0x140656A20
#define ItemBase__GetImageNum_x                                    0x140659100
#define ItemBase__GetItemValue_x                                   0x14065AC30
#define ItemBase__IsEmpty_x                                        0x14065C940
#define ItemBase__IsKeyRingItem_x                                  0x14065D050
#define ItemBase__ValueSellMerchant_x                              0x1406612B0
#define ItemClient__CanDrop_x                                      0x1402BA020
#define ItemClient__CanGoInBag_x                                   0x1402BA150
#define ItemClient__CreateItemClient_x                             0x1402BA3E0
#define ItemClient__dItemClient_x                                  0x1402B9E90

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AF220
#define EQ_LoadingS__Array_x                                       0x140D3C230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066D310
#define PcBase__GetCombatAbility_x                                 0x14066DA00
#define PcBase__GetCombatAbilityTimer_x                            0x14066DAA0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066E240
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066ECB0
#define PcClient__AlertInventoryChanged_x                          0x1402DD1B0
#define PcClient__GetConLevel_x                                    0x1402DD900  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E0090
#define PcClient__HasLoreItem_x                                    0x1402E10D0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402ED940
#define PcZoneClient__RemoveMyAffect_x                             0x1402F0E10

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x1402231A0
#define EQGroundItemListManager__Add_x                             0x140223350
#define EQGroundItemListManager__Clear_x                           0x1402233F0
#define EQGroundItemListManager__Delete_x                          0x1402234B0
#define EQGroundItemListManager__Instance_x                        0x140223540

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025DE70

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018A140

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406427D0
#define PlayerBase__CanSee1_x                                      0x1406428A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140642D80
#define PlayerBase__HasProperty_x                                  0x140642F50
#define PlayerBase__IsTargetable_x                                 0x140643010
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FEAB0
#define PlayerClient__GetPcClient_x                                0x1403015C0
#define PlayerClient__PlayerClient_x                               0x1402F6E00
#define PlayerClient__SetNameSpriteState_x                         0x140304CF0
#define PlayerClient__SetNameSpriteTint_x                          0x140305CB0
#define PlayerZoneClient__ChangeHeight_x                           0x1403146E0
#define PlayerZoneClient__DoAttack_x                               0x1403153F0
#define PlayerZoneClient__GetLevel_x                               0x140318B20
#define PlayerZoneClient__IsValidTeleport_x                        0x140260C10
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019DD90

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030DBE0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030DC90  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030DD90
#define PlayerManagerClient__CreatePlayer_x                        0x14030D6B0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140642390

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BF580
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BEEB0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BEF20
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BF510  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BF6A0
#define KeypressHandler__HandleKeyUp_x                             0x1402BF7C0
#define KeypressHandler__SaveKeymapping_x                          0x1402BF3A0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140686290  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140680050

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E7180  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EBA60
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EEA20
#define PcZoneClient__RemovePetEffect_x                            0x1402F10F0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EF600
#define PcZoneClient__CanEquipItem_x                               0x1402E9D50
#define PcZoneClient__GetItemByID_x                                0x1402EC980
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F0C90
#define PcZoneClient__BandolierSwap_x                              0x1402DD260

// Doors
#define EQSwitch__UseSwitch_x                                      0x140265740

// IconCache
#define IconCache__GetIcon_x                                       0x1403CD2C0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C16F0
#define CContainerMgr__CloseContainer_x                            0x1403C1010
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C1A70

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BDAA0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B1920

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044D3B0
#define CLootWnd__RequestLootSlot_x                                0x14044E400

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DE9B0
#define EQ_Spell__SpellAffects_x                                   0x1401DFC90
#define EQ_Spell__SpellAffectBase_x                                0x1401DFBF0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC5D0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC580
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF8C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DF470
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DED30

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3A90

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x14051A7B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140519EC0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1405196C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140521E50  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186B40
#define CTaskManager__GetTaskStatus_x                              0x140186C50
#define CTaskManager__GetElementDescription_x                      0x1401867D0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DCCD0
#define EqSoundManager__PlayScriptMp3_x                            0x1401DBB10
#define EqSoundManager__SoundAssistPlay_x                          0x140337FD0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140338310  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B8870
#define CTextureAnimation__SetCurCell_x                            0x1405B8B80

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AFB20

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406A0D70
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406A0DF0
#define CharacterBase__IsExpansionFlag_x                           0x140202600

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039C530
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039CFA0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039E4F0

// messages
#define msg_spell_worn_off_x                                       0x1402196E0
#define msg_new_text_x                                             0x140214EA0
#define __msgTokenTextParam_x                                      0x14020C340
#define msgTokenText_x                                             0x14020C250

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140339C10
#define SpellManager__GetSpellByGroupAndRank_x                     0x140339B30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406515B0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404467D0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C6460
#define CCursorAttachment__IsOkToActivate_x                        0x1403C9900
#define CCursorAttachment__RemoveAttachment_x                      0x1403C9BB0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F1C20
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F1E10
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F1E20

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152700
#define CFindItemWnd__Update_x                                     0x1401530A0
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BCD0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CE40
#define LootFiltersManager__GetItemFilterData_x                    0x14015D960
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015E200
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E4B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404A0370

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140332750
#define CResolutionHandler__UpdateResolution_x                     0x14059DC30

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BD9A0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A5170  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A5060  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E4430
#define CGroupWnd__UpdateDisplay_x                                 0x1403E4010

// ItemBase
#define ItemBase__IsLore_x                                         0x14065D190
#define ItemBase__IsLoreEquipped_x                                 0x14065D220

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D2D60

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025DFD0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025DF60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025DFA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CD30

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128B10
#define FactionManagerClient__HandleFactionMessage_x               0x140128EF0
#define FactionManagerClient__GetFactionStanding_x                 0x1401282E0
#define FactionManagerClient__GetMaxFaction_x                      0x1401282E0
#define FactionManagerClient__GetMinFaction_x                      0x140128190

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0B80

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401342F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B7DF0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B6FB0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B7C10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7B90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033EEF0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CD30

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AE630

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403507F0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FDA0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406892F0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE5830

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140550840

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14083C068
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
