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

#define __ClientDate                                               20251123u
#define __ExpectedVersionDate                                     "Nov 23 2025"
#define __ExpectedVersionTime                                     "04:21:58"
#define __ActualVersionDate_x                                      0x140971908
#define __ActualVersionTime_x                                      0x1409718F8
#define __ActualVersionBuild_x                                     0x140906AB0

// Memory Protection
#define __MemChecker0_x                                            0x1402C5BA0
#define __MemChecker1_x                                            0x1405940C0
#define __MemChecker4_x                                            0x1402933A0
#define __EncryptPad0_x                                            0x140D44F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7D8C0
#define instEQZoneInfo_x                                           0x140E7DAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140227250
#define __gfMaxZoomCameraDistance_x                                0x140907D58
#define __gfMaxCameraDistance_x                                    0x140AB1C94
#define __CurrentSocial_x                                          0x140C0095C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D3C720
#define g_eqCommandStates_x                                        0x140D3D7C0
#define __CommandList_x                                            0x140D3DA00
#define __ScreenMode_x                                             0x140DC522C
#define __gWorld_x                                                 0x140E783E8
#define __gpbCommandEvent_x                                        0x140E75E94
#define __ServerHost_x                                             0x140E76098
#define __Guilds_x                                                 0x140E7C470
#define __MemCheckBitmask_x                                        0x140E7DDFF
#define __MemCheckActive_x                                         0x140E7F515
#define __MouseEventTime_x                                         0x140EF2E88
#define DI8__MouseState_x                                          0x140EF7108
#define __heqmain_x                                                0x140EF95A8
#define DI8__Mouse_x                                               0x140EF7058
#define __HWnd_x                                                   0x140EF70E0
#define __Mouse_x                                                  0x140EF7014
#define DI8__Keyboard_x                                            0x140EF7030
#define __LoginName_x                                              0x140EF9C8C
#define __CurrentMapLabel_x                                        0x140F0D7A0
#define __LabelCache_x                                             0x140F0E370
#define __ChatFilterDefs_x                                         0x140A4BB60
#define Teleport_Table_Size_x                                      0x140E75F2C
#define Teleport_Table_x                                           0x140E763B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E78800
#define pinstActiveBanker_x                                        0x140E75D60
#define pinstActiveCorpse_x                                        0x140E75D50
#define pinstActiveGMaster_x                                       0x140E75D58
#define pinstActiveMerchant_x                                      0x140E75D48
#define pinstAltAdvManager_x                                       0x140DC6010
#define pinstCEverQuest_x                                          0x140EF7050
#define pinstCamActor_x                                            0x140DC5218
#define pinstCDBStr_x                                              0x140DC4DC0
#define pinstCDisplay_x                                            0x140E75E98
#define pinstControlledPlayer_x                                    0x140E75DF0
#define pinstCResolutionHandler_x                                  0x140F1EBA8
#define pinstCSidlManager_x                                        0x140F1F910
#define pinstCXWndManager_x                                        0x140F1F908
#define instDynamicZone_x                                          0x140E7C330 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E7C37E
#define instExpeditionName_x                                       0x140E7C3BE
#define pinstDZMember_x                                            0x140E7C448
#define pinstDZTimerInfo_x                                         0x140E7C450
#define pinstEqLogin_x                                             0x140EF95D0
#define instTribute_x                                              0x140D37D60
#define pinstDeviceInputProxy_x                                    0x140E7D91C
#define pinstEQSoundManager_x                                      0x140DC6390
#define pinstEQSpellStrings_x                                      0x140DA9950
#define pinstSGraphicsEngine_x                                     0x140F1E938
#define pinstLocalPC_x                                             0x140E783D8
#define pinstLocalPlayer_x                                         0x140E75D40
#define pinstCMercenaryClientManager_x                             0x140EF47A8
#define pinstModelPlayer_x                                         0x140E75D70
#define pinstRenderInterface_x                                     0x140F1E950
#define pinstSkillMgr_x                                            0x140EF6458
#define pinstSpawnManager_x                                        0x140EF4B60
#define pinstSpellManager_x                                        0x140EF64C0
#define pinstStringTable_x                                         0x140E783E0
#define pinstSwitchManager_x                                       0x140E75CC0
#define pinstTarget_x                                              0x140E75DE8
#define pinstTaskMember_x                                          0x140D37D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E75D68
#define instTributeActive_x                                        0x140D37D89
#define pinstViewActor_x                                           0x140DC5210
#define pinstWorldData_x                                           0x140E75E08
#define pinstPlayerPath_x                                          0x140EF4B88
#define pinstTargetIndicator_x                                     0x140EF6570
#define EQObject_Top_x                                             0x140E75F20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F0A900
#define pinstCContainerMgr_x                                       0x140DC5340
#define pinstCContextMenuManager_x                                 0x140F1F5F0
#define pinstCInvSlotMgr_x                                         0x140DC5320
#define pinstCItemDisplayManager_x                                 0x140F0D370
#define pinstCPopupWndManager_x                                    0x140F0DC00
#define pinstCSpellDisplayMgr_x                                    0x140F0E250
#define pinstCTaskManager_x                                        0x140C00C90
#define pinstEQSuiteTextureLoader_x                                0x140D4E620
#define pinstItemIconCache_x                                       0x140F0AC60
#define pinstLootFiltersManager_x                                  0x140DC4808
#define pinstGFViewListener_x                                      0x140F1EDC8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140250DA0
#define __CastRay_x                                                0x140249220
#define __CastRay2_x                                               0x140248F20
#define __compress_block_x                                         0x140549490
#define __ConvertItemTags_x                                        0x140249680
#define __CleanItemTags_x                                          0x14008A5C0
#define __CreateCascadeMenuItems_x                                 0x1401923C0
#define __decompress_block_x                                       0x14058F8D0
#define __DoesFileExist_x                                          0x140597F70
#define __EQGetTime_x                                              0x140594670
#define __ExecuteCmd_x                                             0x14021E7E0
#define __FixHeading_x                                             0x14064E670
#define __FlushDxKeyboard_x                                        0x140349980
#define __get_bearing_x                                            0x140252FD0
#define __get_melee_range_x                                        0x1402530C0
#define __GetAnimationCache_x                                      0x1403CCB80
#define __GetGaugeValueFromEQ_x                                    0x140509020
#define __GetLabelFromEQ_x                                         0x14050A610
#define __GetXTargetType_x                                         0x14064F950   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064E6F0
#define __HelpPath_x                                               0x140EF2D50   // Why?
#define __NewUIINI_x                                               0x140516050   // Why?
#define __ProcessDeviceEvents_x                                    0x1402939B0
#define __ProcessGameEvents_x                                      0x1402883F0
#define __ProcessKeyboardEvents_x                                  0x14034B0D0
#define __ProcessMouseEvents_x                                     0x140289B00
#define __SaveColors_x                                             0x1401A22B0
#define __STMLToText_x                                             0x1405A7C40
#define __WndProc_x                                                0x140348120
#define CMemoryMappedFile__SetFile_x                               0x1407FC0E0
#define DrawNetStatus_x                                            0x1402D4E70
#define Util__FastTime_x                                           0x140593BA0
#define __eq_delete_x                                              0x1406C8098
#define __eq_new_x                                                 0x1406C82F0
#define __CopyLayout_x                                             0x1402C1FA0
#define __ThrottleFrameRate_x                                      0x140277A1C
#define __ThrottleFrameRateEnd_x                                   0x140277A22

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035ABB0
#define CAAWnd__Update_x                                           0x14035AEB0
#define CAAWnd__UpdateSelected_x                                   0x14035C0B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE560
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6F40
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140852A50
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AEE90

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401AD520
#define AltAdvManager__IsAbilityReady_x                            0x1401AD9B0
#define AltAdvManager__GetAAById_x                                 0x1401ACDF0
#define AltAdvManager__CanTrainAbility_x                           0x1401ACBF0
#define AltAdvManager__CanSeeAbility_x                             0x1401AC8B0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5BD0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D6A40
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6C90
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAF90
#define CharacterZoneClient__CanUseItem_x                          0x1400EB550
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D7660
#define CharacterZoneClient__CastSpell_x                           0x1400D7700
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E7460
#define CharacterZoneClient__Cur_HP_x                              0x1400ECC70
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECE30
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA970
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F34E0
#define CharacterZoneClient__GetBaseSkill_x                        0x140101BA0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBE10
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA890
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4D70
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F3C60
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBF90
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB780
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD650
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4390
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC8E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F5000
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DC010
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5D80
#define CharacterZoneClient__GetModCap_x                           0x1400FD350
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC2A0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC470
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0CE0
#define CharacterZoneClient__HasSkill_x                            0x1400F8E90
#define CharacterZoneClient__HitBySpell_x                          0x1400DCF00
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E08D0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCE30
#define CharacterZoneClient__Max_Endurance_x                       0x1402EFB80  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FD180
#define CharacterZoneClient__Max_Mana_x                            0x1402EFDA0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD5E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3F20
#define CharacterZoneClient__SpellDuration_x                       0x1400E4C50
#define CharacterZoneClient__TotalEffect_x                         0x1400E6030
#define CharacterZoneClient__UseSkill_x                            0x140102B10


// CBankWnd
#define CBankWnd__WndNotification_x                                0x0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140385940

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403817D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403853C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403880B0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD1530

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403AADC0
#define CChatWindowManager__InitContextMenu_x                      0x1403AAF50
#define CChatWindowManager__FreeChatWindow_x                       0x1403A9E10
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B2F10
#define CChatWindowManager__CreateChatWindow_x                     0x1403A9840

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010B090

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B3F60
#define CChatWindow__Clear_x                                       0x1403B4F10
#define CChatWindow__WndNotification_x                             0x1403B60F0
#define CChatWindow__AddHistory_x                                  0x1403B4A10

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D5430
#define CContextMenu__RemoveMenuItem_x                             0x1405D5810
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D57E0
#define CContextMenu__CheckMenuItem_x                              0x1405D5650
#define CContextMenu__SetMenuItem_x                                0x1405D5830
#define CContextMenu__AddSeparator_x                               0x1405D5590

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C7320
#define CContextMenuManager__RemoveMenu_x                          0x1405C7900
#define CContextMenuManager__PopupMenu_x                           0x1405C7640
#define CContextMenuManager__Flush_x                               0x1405C73A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C4540

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A1EB0
#define CChatService__GetFriendName_x                              0x1406A1EC0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B8130
#define CComboWnd__Draw_x                                          0x1405B8220
#define CComboWnd__GetCurChoice_x                                  0x1405B84F0  // unused
#define CComboWnd__GetListRect_x                                   0x1405B8590
#define CComboWnd__InsertChoice_x                                  0x1405B88B0
#define CComboWnd__SetColors_x                                     0x1405B8C40
#define CComboWnd__SetChoice_x                                     0x1405B8C00
#define CComboWnd__GetItemCount_x                                  0x1405B8580
#define CComboWnd__GetCurChoiceText_x                              0x1405B8530  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B84C0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B8970

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C2240
#define CContainerWnd__SetContainer_x                              0x14041DE20
#define CContainerWnd__vftable_x                                   0x1409E6978

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC4FAC
#define CDisplay__ZoneMainUI_x                                     0x1405EF5F0
#define CDisplay__PreZoneMainUI_x                                  0x14019F1B0
#define CDisplay__CleanGameUI_x                                    0x140191480
#define CDisplay__GetClickedActor_x                                0x140195640
#define CDisplay__GetUserDefinedColor_x                            0x1401962B0
#define CDisplay__InitCharSelectUI_x                               0x140196560
#define CDisplay__ReloadUI_x                                       0x1401A14B0
#define CDisplay__RestartUI_x                                      0x140203020
#define CDisplay__WriteTextHD2_x                                   0x1401A84C0
#define CDisplay__TrueDistance_x                                   0x1401A8170
#define CDisplay__SetViewActor_x                                   0x1401A49E0
#define CDisplay__GetFloorHeight_x                                 0x1401958A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A7C60
#define CDisplay__RealRender_World_x                               0x1401A0880

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F9820
#define CEditWnd__DrawCaret_x                                      0x1405EB3D0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405EB850
#define CEditWnd__GetCaretPt_x                                     0x1405EBAD0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405EBB10
#define CEditWnd__GetDisplayString_x                               0x1405EBD70
#define CEditWnd__GetHorzOffset_x                                  0x1405EBFB0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405EC0F0
#define CEditWnd__GetSelStartPt_x                                  0x1405EC3D0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EC220
#define CEditWnd__PointFromPrintableChar_x                         0x1405ECF80
#define CEditWnd__ReplaceSelection_x                               0x1405ED320
#define CEditWnd__SelectableCharFromPoint_x                        0x1405ED7C0
#define CEditWnd__SetEditable_x                                    0x1405EDA50
#define CEditWnd__SetWindowText_x                                  0x1405EDA80

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140278A90
#define CEverQuest__ClickedPlayer_x                                0x14026CAB0
#define CEverQuest__CreateTargetIndicator_x                        0x14026D370
#define CEverQuest__DoTellWindow_x                                 0x14010ADA0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B680 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027A480
#define CEverQuest__dsp_chat_x                                     0x14010A7E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A53E0
#define CEverQuest__Emote_x                                        0x14027AE70
#define CEverQuest__GetBodyTypeDesc_x                              0x14027BC50
#define CEverQuest__GetClassDesc_x                                 0x14027BCB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027C080
#define CEverQuest__GetDeityDesc_x                                 0x14027C330
#define CEverQuest__GetLangDesc_x                                  0x14027C760
#define CEverQuest__GetRaceDesc_x                                  0x14027CB00
#define CEverQuest__InterpretCmd_x                                 0x14027E490
#define CEverQuest__LeftClickedOnPlayer_x                          0x140293A20
#define CEverQuest__LMouseUp_x                                     0x14027FF10
#define CEverQuest__RightClickedOnPlayer_x                         0x140290FD0
#define CEverQuest__RMouseUp_x                                     0x14028A690
#define CEverQuest__SetGameState_x                                 0x1402964A0
#define CEverQuest__UPCNotificationFlush_x                         0x14029BE10 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027FB70
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028BA60
#define CEverQuest__ReportSuccessfulHit_x                          0x14028C880

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D7A10

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4F70
#define CGuild__GetGuildName_x                                     0x1400C4FB0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403FAE20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B76A0
#define CHotButton__SetCheck_x                                     0x1402B7970

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140414A80
#define CInvSlotMgr__MoveItem_x                                    0x140415610
#define CInvSlotMgr__SelectSlot_x                                  0x140417900

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140411A60
#define CInvSlot__SliderComplete_x                                 0x1404130E0
#define CInvSlot__GetItemBase_x                                    0x14040D260
#define CInvSlot__UpdateItem_x                                     0x140413590

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140419AD0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043B3F0
#define CItemDisplayWnd__UpdateStrings_x                           0x14043DFD0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140437BE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140439530
#define CItemDisplayWnd__RequestConvertItem_x                      0x14043A810

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140505AA0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140507830

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405427F0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404342B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157A90

// CLabel
#define CLabel__UpdateText_x                                       0x1404453D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BBA80
#define CListWnd__dCListWnd_x                                      0x1405BBEC0
#define CListWnd__vftable_x                                        0x140ACF680
#define CListWnd__AddColumn_x                                      0x1405BC560
#define CListWnd__AddColumn1_x                                     0x1405BC600
#define CListWnd__AddLine_x                                        0x1405BC760
#define CListWnd__AddString_x                                      0x1405BCCF0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BD260
#define CListWnd__CalculateVSBRange_x                              0x1405BD540
#define CListWnd__ClearSel_x                                       0x1405BD6F0
#define CListWnd__ClearAllSel_x                                    0x1405BD690
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BD750
#define CListWnd__Compare_x                                        0x1405BD910
#define CListWnd__Draw_x                                           0x1405BDDE0
#define CListWnd__DrawColumnSeparators_x                           0x1405BE980
#define CListWnd__DrawHeader_x                                     0x1405BEA40
#define CListWnd__DrawItem_x                                       0x1405BF110
#define CListWnd__DrawLine_x                                       0x1405BFA80
#define CListWnd__DrawSeparator_x                                  0x1405BFF40
#define CListWnd__EnableLine_x                                     0x1405C0360
#define CListWnd__EnsureVisible_x                                  0x1405C03C0
#define CListWnd__ExtendSel_x                                      0x1405C04C0
#define CListWnd__GetColumnMinWidth_x                              0x1405C0850
#define CListWnd__GetColumnWidth_x                                 0x1405C08D0
#define CListWnd__GetCurSel_x                                      0x1405C09D0
#define CListWnd__GetItemData_x                                    0x1405C0D50
#define CListWnd__GetItemHeight_x                                  0x1405C0D90
#define CListWnd__GetItemRect_x                                    0x1405C0FB0
#define CListWnd__GetItemText_x                                    0x1405C1250
#define CListWnd__GetSelList_x                                     0x1405C14A0
#define CListWnd__GetSeparatorRect_x                               0x1405C1690
#define CListWnd__InsertLine_x                                     0x1405C2AF0
#define CListWnd__RemoveLine_x                                     0x1405C3160
#define CListWnd__SetColors_x                                      0x1405C3520
#define CListWnd__SetColumnJustification_x                         0x1405C3540
#define CListWnd__SetColumnLabel_x                                 0x1405C35C0
#define CListWnd__SetColumnWidth_x                                 0x1405C3760
#define CListWnd__SetCurSel_x                                      0x1405C3830
#define CListWnd__SetItemColor_x                                   0x1405C3AA0
#define CListWnd__SetItemData_x                                    0x1405C3B40
#define CListWnd__SetItemText_x                                    0x1405C3D80
#define CListWnd__Sort_x                                           0x1405C4190
#define CListWnd__ToggleSel_x                                      0x1405C4300
#define CListWnd__SetColumnsSizable_x                              0x1405C37B0
#define CListWnd__SetItemWnd_x                                     0x1405C3EB0
#define CListWnd__GetItemWnd_x                                     0x1405C1430
#define CListWnd__SetItemIcon_x                                    0x1405C3B80
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BD030
#define CListWnd__SetVScrollPos_x                                  0x1405C40F0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404588B0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A34388
#define MapViewMap__Clear_x                                        0x14045A420
#define MapViewMap__SetZoom_x                                      0x140460A70
#define MapViewMap__HandleLButtonDown_x                            0x14045D5B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140482270  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140488B10
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404892F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048CBC0
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048BF00
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140490FB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067D1F0
#define CPacketScrambler__hton_x                                   0x14067D1E0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E4CE0
#define CSidlManagerBase__FindAnimation1_x                         0x1405E4C20
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E5310
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E50C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E4020
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E3FB0
#define CSidlManagerBase__CreateXWnd_x                             0x1405E3610

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F8A60
#define CSidlManager__CreateXWnd_x                                 0x1404F8C20

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A9730
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A9850
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F3D60 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A99D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A8E60
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A8F30
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A9140
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405AA0C0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405AA2F0
#define CSidlScreenWnd__GetChildItem_x                             0x1405AA490
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405AA6E0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B46F0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405AAA50
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405AAD90
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405AB650
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AC040
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1EC68
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AC6C0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405ACEB0
#define CSidlScreenWnd__vftable_x                                  0x140ACE908
#define CSidlScreenWnd__WndNotification_x                          0x1405ACF00

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140332AF0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140332E10 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140332D40
#define CSkillMgr__IsActivatedSkill_x                              0x1403331D0
#define CSkillMgr__IsCombatSkill_x                                 0x140333210
#define CSkillMgr__GetSkillTimerDuration_x                         0x140333140
#define CSkillMgr__GetSkillLastUsed_x                              0x140332D90

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C4C40
#define CSliderWnd__SetValue_x                                     0x1405C5450
#define CSliderWnd__SetNumTicks_x                                  0x1405C52D0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FF1D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C9D80
#define CStmlWnd__CalculateHSBRange_x                              0x1405B40A0
#define CStmlWnd__CalculateVSBRange_x                              0x1405CAC20
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CB710
#define CStmlWnd__ForceParseNow_x                                  0x1405CB7B0
#define CStmlWnd__GetVisibleText_x                                 0x1405CBE80
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CDBE0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CDC20
#define CStmlWnd__SetSTMLText_x                                    0x1405D4BE0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D4D90
#define CStmlWnd__UpdateHistoryString_x                            0x1405D5120

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C59D0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C5A70
#define CTabWnd__DrawTab_x                                         0x1405C5E40
#define CTabWnd__GetTabRect_x                                      0x1405C64B0
#define CTabWnd__InsertPage_x                                      0x1405C6780
#define CTabWnd__RemovePage_x                                      0x1405C6A00
#define CTabWnd__SetPage_x                                         0x1405C6B60
#define CTabWnd__UpdatePage_x                                      0x1405C6E60

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405EDEB0
#define CPageWnd__SetTabText_x                                     0x1405EDF20

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE500  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE910


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DC6C0
#define CTextureFont__DrawWrappedText1_x                           0x1405DC5D0
#define CTextureFont__DrawWrappedText2_x                           0x1405DC7F0
#define CTextureFont__GetTextExtent_x                              0x1405DCBA0
#define CTextureFont__GetHeight_x                                  0x1405DCB60

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F24C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A6330

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4DF90
#define CXStr__gCXStrAccess_x                                      0x140F1E7C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AF760
#define CXWnd__ClrFocus_x                                          0x1405AFA50
#define CXWnd__Destroy_x                                           0x1405AFBD0
#define CXWnd__DoAllDrawing_x                                      0x1405AFCE0
#define CXWnd__DrawColoredRect_x                                   0x1405B04A0
#define CXWnd__DrawTooltip_x                                       0x1405B1AF0
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B1BA0
#define CXWnd__GetChildItem_x                                      0x1405B24A0
#define CXWnd__GetChildWndAt_x                                     0x1405B2560
#define CXWnd__GetClientRect_x                                     0x1405B2800
#define CXWnd__GetClientClipRect_x                                 0x1405B26B0
#define CXWnd__GetRelativeRect_x                                   0x1405B41E0
#define CXWnd__GetScreenClipRect_x                                 0x1405B42F0
#define CXWnd__GetScreenRect_x                                     0x1405B4470
#define CXWnd__GetTooltipRect_x                                    0x1405B45F0
#define CXWnd__IsActive_x                                          0x1405B4BB0
#define CXWnd__IsDescendantOf_x                                    0x1405B4BE0
#define CXWnd__IsReallyVisible_x                                   0x1405B4C50
#define CXWnd__IsType_x                                            0x1405B4CA0
#define CXWnd__Minimize_x                                          0x1405B4D90
#define CXWnd__ProcessTransition_x                                 0x1405B5C80
#define CXWnd__Resize_x                                            0x1405B5DA0
#define CXWnd__Right_x                                             0x1405B5E40
#define CXWnd__SetFocus_x                                          0x1405B61E0
#define CXWnd__SetFont_x                                           0x1405B6230
#define CXWnd__SetKeyTooltip_x                                     0x1405B6330
#define CXWnd__SetMouseOver_x                                      0x1405B6470
#define CXWnd__SetParent_x                                         0x1405B64F0
#define CXWnd__StartFade_x                                         0x1405B6940
#define CXWnd__vftable_x                                           0x140ACEEE0
#define CXWnd__CXWnd_x                                             0x1405AE320
#define CXWnd__dCXWnd_x                                            0x1405AEC50

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F8FA0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D69C0
#define CXWndManager__DrawCursor_x                                 0x1405D6CA0
#define CXWndManager__DrawWindows_x                                0x1405D6F00
#define CXWndManager__GetKeyboardFlags_x                           0x1405D7550
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D7590
#define CXWndManager__RemoveWnd_x                                  0x1405DAD80

// CDBStr
#define CDBStr__GetString_x                                        0x14018F650

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140687040

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3470
#define CCharacterListWnd__EnterWorld_x                            0x1400D2480
#define CCharacterListWnd__Quit_x                                  0x1400D3450
#define CCharacterListWnd__UpdateList_x                            0x1400D42D0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140654730
#define ItemBase__CreateItemTagString_x                            0x1406551C0
#define ItemBase__GetImageNum_x                                    0x140657920
#define ItemBase__GetItemValue_x                                   0x1406593F0
#define ItemBase__IsEmpty_x                                        0x14065B1A0
#define ItemBase__IsKeyRingItem_x                                  0x14065B8D0
#define ItemBase__ValueSellMerchant_x                              0x14065FB80
#define ItemClient__CanDrop_x                                      0x1402B9F70
#define ItemClient__CanGoInBag_x                                   0x1402BA0A0
#define ItemClient__CreateItemClient_x                             0x1402BA330
#define ItemClient__dItemClient_x                                  0x1402B9DE0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AEED0
#define EQ_LoadingS__Array_x                                       0x140D3A230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066BBE0
#define PcBase__GetCombatAbility_x                                 0x14066C2D0
#define PcBase__GetCombatAbilityTimer_x                            0x14066C370
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066CB10
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066D580
#define PcClient__AlertInventoryChanged_x                          0x1402DD0C0
#define PcClient__GetConLevel_x                                    0x1402DD810  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DFFA0
#define PcClient__HasLoreItem_x                                    0x1402E0FE0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402ED820
#define PcZoneClient__RemoveMyAffect_x                             0x1402F0CC0

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x1402231E0
#define EQGroundItemListManager__Add_x                             0x140223390
#define EQGroundItemListManager__Clear_x                           0x140223430
#define EQGroundItemListManager__Delete_x                          0x1402234F0
#define EQGroundItemListManager__Instance_x                        0x140223580

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025DE90

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140189E20

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140641500
#define PlayerBase__CanSee1_x                                      0x1406415D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140641AB0
#define PlayerBase__HasProperty_x                                  0x140641C80
#define PlayerBase__IsTargetable_x                                 0x140641D40
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FE950
#define PlayerClient__GetPcClient_x                                0x140301480
#define PlayerClient__PlayerClient_x                               0x1402F6CB0
#define PlayerClient__SetNameSpriteState_x                         0x140304BB0
#define PlayerClient__SetNameSpriteTint_x                          0x140305B70
#define PlayerZoneClient__ChangeHeight_x                           0x140314690
#define PlayerZoneClient__DoAttack_x                               0x1403153A0
#define PlayerZoneClient__GetLevel_x                               0x140318AD0
#define PlayerZoneClient__IsValidTeleport_x                        0x140260C20
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019DA30

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030DB90  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030DC40  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030DD40
#define PlayerManagerClient__CreatePlayer_x                        0x14030D660
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406410C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BF4C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BEDF0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BEE60
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BF450  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BF5E0
#define KeypressHandler__HandleKeyUp_x                             0x1402BF700
#define KeypressHandler__SaveKeymapping_x                          0x1402BF2E0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140684B60  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067E930

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E7090  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EB950
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EE8E0
#define PcZoneClient__RemovePetEffect_x                            0x1402F0FA0
#define PcZoneClient__HasAlternateAbility_x                        0x1402EF4B0
#define PcZoneClient__CanEquipItem_x                               0x1402E9C50
#define PcZoneClient__GetItemByID_x                                0x1402EC870
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F0B40
#define PcZoneClient__BandolierSwap_x                              0x1402DD170

// Doors
#define EQSwitch__UseSwitch_x                                      0x140265750

// IconCache
#define IconCache__GetIcon_x                                       0x1403CCBB0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C0FF0
#define CContainerMgr__CloseContainer_x                            0x1403C0910
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C1370

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BCCC0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B18C0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044C6E0
#define CLootWnd__RequestLootSlot_x                                0x14044D730

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DE650
#define EQ_Spell__SpellAffects_x                                   0x1401DF930
#define EQ_Spell__SpellAffectBase_x                                0x1401DF890
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC600
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC5B0
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF560
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DF110
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DE9D0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3AB0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140519840
#define CTargetWnd__RefreshTargetBuffs_x                           0x140518F50
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140518750

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140520EE0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186820
#define CTaskManager__GetTaskStatus_x                              0x140186930
#define CTaskManager__GetElementDescription_x                      0x1401864B0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DC970
#define EqSoundManager__PlayScriptMp3_x                            0x1401DB7B0
#define EqSoundManager__SoundAssistPlay_x                          0x140337F30  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140338270  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B76F0
#define CTextureAnimation__SetCurCell_x                            0x1405B7A00

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AFAC0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069F630
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069F6B0
#define CharacterBase__IsExpansionFlag_x                           0x1402026A0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039BEB0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039C920
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039DE70

// messages
#define msg_spell_worn_off_x                                       0x140219720
#define msg_new_text_x                                             0x140214EE0
#define __msgTokenTextParam_x                                      0x14020C3B0
#define msgTokenText_x                                             0x14020C2C0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140339B50
#define SpellManager__GetSpellByGroupAndRank_x                     0x140339A70

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064FD30

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140445B20

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C5D60
#define CCursorAttachment__IsOkToActivate_x                        0x1403C91F0
#define CCursorAttachment__RemoveAttachment_x                      0x1403C94A0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405F0960
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405F0B50
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405F0B60

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140152430
#define CFindItemWnd__Update_x                                     0x140152DD0
#define CFindItemWnd__PickupSelectedItem_x                         0x14014BA70

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015CB50
#define LootFiltersManager__GetItemFilterData_x                    0x14015D670
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015DF10
#define LootFiltersManager__SetItemLootFilter_x                    0x14015E1C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049F5F0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x1403326B0
#define CResolutionHandler__UpdateResolution_x                     0x14059CC00

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BD2D0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A3A30  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A3920  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E3C90
#define CGroupWnd__UpdateDisplay_x                                 0x1403E3870

// ItemBase
#define ItemBase__IsLore_x                                         0x14065BA10
#define ItemBase__IsLoreEquipped_x                                 0x14065BAA0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D2C70

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025DFF0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025DF80
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025DFC0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CCA0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128AC0
#define FactionManagerClient__HandleFactionMessage_x               0x140128EA0
#define FactionManagerClient__GetFactionStanding_x                 0x140128290
#define FactionManagerClient__GetMaxFaction_x                      0x140128290
#define FactionManagerClient__GetMinFaction_x                      0x140128140

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0B70

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1401342A0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B7AA0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B6C60
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B78C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7840  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033EE20

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CCA0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AD4F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140350720

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FD90

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140687BC0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE37E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054F8B0

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14083A058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
