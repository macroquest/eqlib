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

#define __ClientDate                                               20251118u
#define __ExpectedVersionDate                                     "Nov 18 2025"
#define __ExpectedVersionTime                                     "04:21:53"
#define __ActualVersionDate_x                                      0x1409718E8
#define __ActualVersionTime_x                                      0x1409718D8
#define __ActualVersionBuild_x                                     0x140906A90

// Memory Protection
#define __MemChecker0_x                                            0x1402C59E0
#define __MemChecker1_x                                            0x140593380
#define __MemChecker4_x                                            0x140293180
#define __EncryptPad0_x                                            0x140D44F00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E7D8C0
#define instEQZoneInfo_x                                           0x140E7DAB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140226FE0
#define __gfMaxZoomCameraDistance_x                                0x140907D38
#define __gfMaxCameraDistance_x                                    0x140AB1C84
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
#define __ChatFilterDefs_x                                         0x140A4BB50
#define Teleport_Table_Size_x                                      0x140E75F2C
#define Teleport_Table_x                                           0x140E763B0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E78800
#define pinstActiveBanker_x                                        0x140E75DD8
#define pinstActiveCorpse_x                                        0x140E75DC8
#define pinstActiveGMaster_x                                       0x140E75DD0
#define pinstActiveMerchant_x                                      0x140E75DC0
#define pinstAltAdvManager_x                                       0x140DC6010
#define pinstCEverQuest_x                                          0x140EF7050
#define pinstCamActor_x                                            0x140DC5218
#define pinstCDBStr_x                                              0x140DC4DC0
#define pinstCDisplay_x                                            0x140E75E98
#define pinstControlledPlayer_x                                    0x140E75E68
#define pinstCResolutionHandler_x                                  0x140F1EBA8
#define pinstCSidlManager_x                                        0x140F1F920
#define pinstCXWndManager_x                                        0x140F1F918
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
#define pinstLocalPlayer_x                                         0x140E75DB8
#define pinstCMercenaryClientManager_x                             0x140EF47A8
#define pinstModelPlayer_x                                         0x140E75DE8
#define pinstRenderInterface_x                                     0x140F1E950
#define pinstSkillMgr_x                                            0x140EF6458
#define pinstSpawnManager_x                                        0x140EF4B60
#define pinstSpellManager_x                                        0x140EF64C0
#define pinstStringTable_x                                         0x140E783E0
#define pinstSwitchManager_x                                       0x140E75CC0
#define pinstTarget_x                                              0x140E75E60
#define pinstTaskMember_x                                          0x140D37D50 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E75DE0
#define instTributeActive_x                                        0x140D37D89
#define pinstViewActor_x                                           0x140DC5210
#define pinstWorldData_x                                           0x140E75E80
#define pinstPlayerPath_x                                          0x140EF4B88
#define pinstTargetIndicator_x                                     0x140EF6570
#define EQObject_Top_x                                             0x140E75F20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F0A900
#define pinstCContainerMgr_x                                       0x140DC5358
#define pinstCContextMenuManager_x                                 0x140F1F600
#define pinstCInvSlotMgr_x                                         0x140DC5338
#define pinstCItemDisplayManager_x                                 0x140F0D370
#define pinstCPopupWndManager_x                                    0x140F0DC00
#define pinstCSpellDisplayMgr_x                                    0x140F0E250
#define pinstCTaskManager_x                                        0x140C00C90
#define pinstEQSuiteTextureLoader_x                                0x140D4E620
#define pinstItemIconCache_x                                       0x140F0AC60
#define pinstLootFiltersManager_x                                  0x140DC4808
#define pinstGFViewListener_x                                      0x140F1EDD8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140250B30
#define __CastRay_x                                                0x140248FB0
#define __CastRay2_x                                               0x140248CB0
#define __compress_block_x                                         0x140548740
#define __ConvertItemTags_x                                        0x140249410
#define __CleanItemTags_x                                          0x14008A5C0
#define __CreateCascadeMenuItems_x                                 0x140191E10
#define __decompress_block_x                                       0x14058EB90
#define __DoesFileExist_x                                          0x140597230
#define __EQGetTime_x                                              0x140593930
#define __ExecuteCmd_x                                             0x14021E570
#define __FixHeading_x                                             0x14064E2A0
#define __FlushDxKeyboard_x                                        0x140349820
#define __get_bearing_x                                            0x140252D60
#define __get_melee_range_x                                        0x140252E50
#define __GetAnimationCache_x                                      0x1403CBA10
#define __GetGaugeValueFromEQ_x                                    0x140508200
#define __GetLabelFromEQ_x                                         0x140509800
#define __GetXTargetType_x                                         0x14064F580   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14064E320
#define __HelpPath_x                                               0x140EF2D50   // Why?
#define __NewUIINI_x                                               0x140515240   // Why?
#define __ProcessDeviceEvents_x                                    0x140293790
#define __ProcessGameEvents_x                                      0x1402881D0
#define __ProcessKeyboardEvents_x                                  0x14034AF70
#define __ProcessMouseEvents_x                                     0x1402898E0
#define __SaveColors_x                                             0x1401A1D00
#define __STMLToText_x                                             0x1405A6E60
#define __WndProc_x                                                0x140347FC0
#define CMemoryMappedFile__SetFile_x                               0x1407FBFB0
#define DrawNetStatus_x                                            0x1402D4CD0
#define Util__FastTime_x                                           0x140592E60
#define __eq_delete_x                                              0x1406C7F68
#define __eq_new_x                                                 0x1406C81C0
#define __CopyLayout_x                                             0x1402C1DF0
#define __ThrottleFrameRate_x                                      0x1402777BC
#define __ThrottleFrameRateEnd_x                                   0x1402777C2

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14035AD60
#define CAAWnd__Update_x                                           0x14035B060
#define CAAWnd__UpdateSelected_x                                   0x14035C260

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AE580
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A6F60
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140852A40
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AEEB0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401ACF60
#define AltAdvManager__IsAbilityReady_x                            0x1401AD3F0
#define AltAdvManager__GetAAById_x                                 0x1401AC830
#define AltAdvManager__CanTrainAbility_x                           0x1401AC630
#define AltAdvManager__CanSeeAbility_x                             0x1401AC2F0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D5950
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D67C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D6A10
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400EAD10
#define CharacterZoneClient__CanUseItem_x                          0x1400EB2D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D73E0
#define CharacterZoneClient__CastSpell_x                           0x1400D7480
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E71E0
#define CharacterZoneClient__Cur_HP_x                              0x1400EC9F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400ECBB0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DA6F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F3260
#define CharacterZoneClient__GetBaseSkill_x                        0x140101920  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DBB90
#define CharacterZoneClient__GetCurrentMod_x                       0x1400EA610
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F4AF0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F39E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DBD10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CB760
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CD630
#define CharacterZoneClient__GetHPRegen_x                          0x1400F4110
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EC660
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F4D80
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DBD90
#define CharacterZoneClient__GetManaRegen_x                        0x1400F5B00
#define CharacterZoneClient__GetModCap_x                           0x1400FD0D0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DC020
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DC1F0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D0CC0
#define CharacterZoneClient__HasSkill_x                            0x1400F8C10
#define CharacterZoneClient__HitBySpell_x                          0x1400DCC80
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E0650
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FCBB0
#define CharacterZoneClient__Max_Endurance_x                       0x1402EFA30  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FCF00
#define CharacterZoneClient__Max_Mana_x                            0x1402EFC50  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FD360
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E3CA0
#define CharacterZoneClient__SpellDuration_x                       0x1400E49D0
#define CharacterZoneClient__TotalEffect_x                         0x1400E5DB0
#define CharacterZoneClient__UseSkill_x                            0x140102890


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14037A110

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403846E0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140380560
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140384160

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140386E40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AD1320

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403A9BF0
#define CChatWindowManager__InitContextMenu_x                      0x1403A9D80
#define CChatWindowManager__FreeChatWindow_x                       0x1403A8C40
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403B1D40
#define CChatWindowManager__CreateChatWindow_x                     0x1403A8670

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010AE20

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403B2D90
#define CChatWindow__Clear_x                                       0x1403B3D40
#define CChatWindow__WndNotification_x                             0x1403B4F30
#define CChatWindow__AddHistory_x                                  0x1403B3840

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405D4580
#define CContextMenu__RemoveMenuItem_x                             0x1405D4970
#define CContextMenu__RemoveAllMenuItems_x                         0x1405D4940
#define CContextMenu__CheckMenuItem_x                              0x1405D47B0
#define CContextMenu__SetMenuItem_x                                0x1405D4990
#define CContextMenu__AddSeparator_x                               0x1405D46F0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405C6450
#define CContextMenuManager__RemoveMenu_x                          0x1405C6A30
#define CContextMenuManager__PopupMenu_x                           0x1405C6770
#define CContextMenuManager__Flush_x                               0x1405C64D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403C33C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406A1D80
#define CChatService__GetFriendName_x                              0x1406A1D90

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405B7340
#define CComboWnd__Draw_x                                          0x1405B7440
#define CComboWnd__GetCurChoice_x                                  0x1405B7720  // unused
#define CComboWnd__GetListRect_x                                   0x1405B77C0
#define CComboWnd__InsertChoice_x                                  0x1405B7B00
#define CComboWnd__SetColors_x                                     0x1405B7E90
#define CComboWnd__SetChoice_x                                     0x1405B7E50
#define CComboWnd__GetItemCount_x                                  0x1405B77B0
#define CComboWnd__GetCurChoiceText_x                              0x1405B7760  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405B76F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405B7BC0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403C10D0
#define CContainerWnd__SetContainer_x                              0x14041CDF0
#define CContainerWnd__vftable_x                                   0x1409E6968

// CDisplay
#define CDisplay__cameraType_x                                     0x140DC4FAC
#define CDisplay__ZoneMainUI_x                                     0x1405EE8C0
#define CDisplay__PreZoneMainUI_x                                  0x14019EC00
#define CDisplay__CleanGameUI_x                                    0x140190ED0
#define CDisplay__GetClickedActor_x                                0x140195090
#define CDisplay__GetUserDefinedColor_x                            0x140195D00
#define CDisplay__InitCharSelectUI_x                               0x140195FB0
#define CDisplay__ReloadUI_x                                       0x1401A0F00
#define CDisplay__RestartUI_x                                      0x140202DC0
#define CDisplay__WriteTextHD2_x                                   0x1401A7F10
#define CDisplay__TrueDistance_x                                   0x1401A7BC0
#define CDisplay__SetViewActor_x                                   0x1401A4430
#define CDisplay__GetFloorHeight_x                                 0x1401952F0
#define CDisplay__ToggleScreenshotMode_x                           0x1401A76B0
#define CDisplay__RealRender_World_x                               0x1401A02D0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405F8AF0
#define CEditWnd__DrawCaret_x                                      0x1405EA5A0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405EAA60
#define CEditWnd__GetCaretPt_x                                     0x1405EACE0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405EAD20
#define CEditWnd__GetDisplayString_x                               0x1405EAF90
#define CEditWnd__GetHorzOffset_x                                  0x1405EB1D0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405EB320
#define CEditWnd__GetSelStartPt_x                                  0x1405EB600  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405EB450
#define CEditWnd__PointFromPrintableChar_x                         0x1405EC1B0
#define CEditWnd__ReplaceSelection_x                               0x1405EC560
#define CEditWnd__SelectableCharFromPoint_x                        0x1405ECA00
#define CEditWnd__SetEditable_x                                    0x1405ECC90
#define CEditWnd__SetWindowText_x                                  0x1405ECCC0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140278880
#define CEverQuest__ClickedPlayer_x                                0x14026C850
#define CEverQuest__CreateTargetIndicator_x                        0x14026D110
#define CEverQuest__DoTellWindow_x                                 0x14010AB30 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010B410 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027A270
#define CEverQuest__dsp_chat_x                                     0x14010A570 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402A51C0
#define CEverQuest__Emote_x                                        0x14027AC60
#define CEverQuest__GetBodyTypeDesc_x                              0x14027BA40
#define CEverQuest__GetClassDesc_x                                 0x14027BAA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14027BE70
#define CEverQuest__GetDeityDesc_x                                 0x14027C120
#define CEverQuest__GetLangDesc_x                                  0x14027C550
#define CEverQuest__GetRaceDesc_x                                  0x14027C8F0
#define CEverQuest__InterpretCmd_x                                 0x14027E280
#define CEverQuest__LeftClickedOnPlayer_x                          0x140293800
#define CEverQuest__LMouseUp_x                                     0x14027FD00
#define CEverQuest__RightClickedOnPlayer_x                         0x140290DB0
#define CEverQuest__RMouseUp_x                                     0x14028A470
#define CEverQuest__SetGameState_x                                 0x140296280
#define CEverQuest__UPCNotificationFlush_x                         0x14029BBF0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14027F960
#define CEverQuest__ReportSuccessfulHeal_x                         0x14028B840
#define CEverQuest__ReportSuccessfulHit_x                          0x14028C660

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403D6900

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C4F50
#define CGuild__GetGuildName_x                                     0x1400C4F90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403F9E10

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402B74C0
#define CHotButton__SetCheck_x                                     0x1402B7790

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140413A10
#define CInvSlotMgr__MoveItem_x                                    0x1404145A0
#define CInvSlotMgr__SelectSlot_x                                  0x1404168B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140410A80
#define CInvSlot__SliderComplete_x                                 0x140412080
#define CInvSlot__GetItemBase_x                                    0x14040C270
#define CInvSlot__UpdateItem_x                                     0x140412530

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140418AA0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14043A450
#define CItemDisplayWnd__UpdateStrings_x                           0x14043D030
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140436C40
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404385A0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140439870

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140504C80
#define CSpellDisplayWnd__UpdateStrings_x                          0x140506A10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140541AA0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140433300

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140157520

// CLabel
#define CLabel__UpdateText_x                                       0x140444420

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405BACD0
#define CListWnd__dCListWnd_x                                      0x1405BB120
#define CListWnd__vftable_x                                        0x140ACF470
#define CListWnd__AddColumn_x                                      0x1405BB7C0
#define CListWnd__AddColumn1_x                                     0x1405BB860
#define CListWnd__AddLine_x                                        0x1405BB9C0
#define CListWnd__AddString_x                                      0x1405BBF50
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405BC4C0
#define CListWnd__CalculateVSBRange_x                              0x1405BC7A0
#define CListWnd__ClearSel_x                                       0x1405BC940
#define CListWnd__ClearAllSel_x                                    0x1405BC8E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405BC9A0
#define CListWnd__Compare_x                                        0x1405BCB60
#define CListWnd__Draw_x                                           0x1405BD030
#define CListWnd__DrawColumnSeparators_x                           0x1405BDBE0
#define CListWnd__DrawHeader_x                                     0x1405BDCA0
#define CListWnd__DrawItem_x                                       0x1405BE380
#define CListWnd__DrawLine_x                                       0x1405BED00
#define CListWnd__DrawSeparator_x                                  0x1405BF1C0
#define CListWnd__EnableLine_x                                     0x1405BF5E0
#define CListWnd__EnsureVisible_x                                  0x1405BF640
#define CListWnd__ExtendSel_x                                      0x1405BF740
#define CListWnd__GetColumnMinWidth_x                              0x1405BFAD0
#define CListWnd__GetColumnWidth_x                                 0x1405BFB50
#define CListWnd__GetCurSel_x                                      0x1405BFC50
#define CListWnd__GetItemData_x                                    0x1405BFFD0
#define CListWnd__GetItemHeight_x                                  0x1405C0010
#define CListWnd__GetItemRect_x                                    0x1405C0230
#define CListWnd__GetItemText_x                                    0x1405C04D0
#define CListWnd__GetSelList_x                                     0x1405C0720
#define CListWnd__GetSeparatorRect_x                               0x1405C0910
#define CListWnd__InsertLine_x                                     0x1405C1D80
#define CListWnd__RemoveLine_x                                     0x1405C23F0
#define CListWnd__SetColors_x                                      0x1405C27B0
#define CListWnd__SetColumnJustification_x                         0x1405C27D0
#define CListWnd__SetColumnLabel_x                                 0x1405C2850
#define CListWnd__SetColumnWidth_x                                 0x1405C29F0
#define CListWnd__SetCurSel_x                                      0x1405C2AC0
#define CListWnd__SetItemColor_x                                   0x1405C2D30
#define CListWnd__SetItemData_x                                    0x1405C2DD0
#define CListWnd__SetItemText_x                                    0x1405C3010
#define CListWnd__Sort_x                                           0x1405C3420
#define CListWnd__ToggleSel_x                                      0x1405C3590
#define CListWnd__SetColumnsSizable_x                              0x1405C2A40
#define CListWnd__SetItemWnd_x                                     0x1405C3140
#define CListWnd__GetItemWnd_x                                     0x1405C06B0
#define CListWnd__SetItemIcon_x                                    0x1405C2E10
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405BC290
#define CListWnd__SetVScrollPos_x                                  0x1405C3380

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140457900

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A34378
#define MapViewMap__Clear_x                                        0x140459480
#define MapViewMap__SetZoom_x                                      0x14045FAD0
#define MapViewMap__HandleLButtonDown_x                            0x14045C610

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140481310  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140487BA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140488370
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14048BC40
#define CMerchantWnd__SelectBuySellSlot_x                          0x14048AF80
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140490040

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067CE20
#define CPacketScrambler__hton_x                                   0x14067CE10

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405E3E60
#define CSidlManagerBase__FindAnimation1_x                         0x1405E3DA0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405E4490
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405E4240
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405E31A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405E3130
#define CSidlManagerBase__CreateXWnd_x                             0x1405E2790

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404F7C10
#define CSidlManager__CreateXWnd_x                                 0x1404F7DD0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405A8950
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405A8A80
#define CSidlScreenWnd__ConvertToRes_x                             0x1405F3030 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405A8BF0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405A8080
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405A8150
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405A8360
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405A92E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405A9510
#define CSidlScreenWnd__GetChildItem_x                             0x1405A96B0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405A9900
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405B3980 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405A9C70
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405A9FE0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405AA890
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405AB290
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F1EC70
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405AB910
#define CSidlScreenWnd__StoreIniVis_x                              0x1405AC100
#define CSidlScreenWnd__vftable_x                                  0x140ACE6F8
#define CSidlScreenWnd__WndNotification_x                          0x1405AC150

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403329A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140332CC0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140332BF0
#define CSkillMgr__IsActivatedSkill_x                              0x140333080
#define CSkillMgr__IsCombatSkill_x                                 0x1403330C0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140332FF0
#define CSkillMgr__GetSkillLastUsed_x                              0x140332C40

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405C3F10
#define CSliderWnd__SetValue_x                                     0x1405C4720
#define CSliderWnd__SetNumTicks_x                                  0x1405C45A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404FE3B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405C8EB0
#define CStmlWnd__CalculateHSBRange_x                              0x1405B3360
#define CStmlWnd__CalculateVSBRange_x                              0x1405C9D50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405CA840
#define CStmlWnd__ForceParseNow_x                                  0x1405CA8E0
#define CStmlWnd__GetVisibleText_x                                 0x1405CAFB0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405CCD10
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405CCD50
#define CStmlWnd__SetSTMLText_x                                    0x1405D3D20
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405D3ED0
#define CStmlWnd__UpdateHistoryString_x                            0x1405D4260

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405C4AF0
#define CTabWnd__DrawCurrentPage_x                                 0x1405C4B90
#define CTabWnd__DrawTab_x                                         0x1405C4F60
#define CTabWnd__GetTabRect_x                                      0x1405C55C0
#define CTabWnd__InsertPage_x                                      0x1405C5890
#define CTabWnd__RemovePage_x                                      0x1405C5B20
#define CTabWnd__SetPage_x                                         0x1405C5C80
#define CTabWnd__UpdatePage_x                                      0x1405C5F80

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405ED120
#define CPageWnd__SetTabText_x                                     0x1405ED190

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BE500  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BE910


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405DB860
#define CTextureFont__DrawWrappedText1_x                           0x1405DB770
#define CTextureFont__DrawWrappedText2_x                           0x1405DB990
#define CTextureFont__GetTextExtent_x                              0x1405DBD40
#define CTextureFont__GetHeight_x                                  0x1405DBD00

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405F1790

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405A5550

// CXStr
#define CXStr__gFreeLists_x                                        0x140D4DF90
#define CXStr__gCXStrAccess_x                                      0x140F1E7C8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405AE9C0
#define CXWnd__ClrFocus_x                                          0x1405AECB0
#define CXWnd__Destroy_x                                           0x1405AEE30
#define CXWnd__DoAllDrawing_x                                      0x1405AEF30
#define CXWnd__DrawColoredRect_x                                   0x1405AF700
#define CXWnd__DrawTooltip_x                                       0x1405B0D80
#define CXWnd__DrawTooltipAtPoint_x                                0x1405B0E30
#define CXWnd__GetChildItem_x                                      0x1405B1740
#define CXWnd__GetChildWndAt_x                                     0x1405B1800
#define CXWnd__GetClientRect_x                                     0x1405B1AC0
#define CXWnd__GetClientClipRect_x                                 0x1405B1970
#define CXWnd__GetRelativeRect_x                                   0x1405B34A0
#define CXWnd__GetScreenClipRect_x                                 0x1405B35A0
#define CXWnd__GetScreenRect_x                                     0x1405B3710
#define CXWnd__GetTooltipRect_x                                    0x1405B3880
#define CXWnd__IsActive_x                                          0x1405B3E40
#define CXWnd__IsDescendantOf_x                                    0x1405B3E70
#define CXWnd__IsReallyVisible_x                                   0x1405B3EE0
#define CXWnd__IsType_x                                            0x1405B3F30
#define CXWnd__Minimize_x                                          0x1405B4030
#define CXWnd__ProcessTransition_x                                 0x1405B4ED0
#define CXWnd__Resize_x                                            0x1405B4FE0
#define CXWnd__Right_x                                             0x1405B5080
#define CXWnd__SetFocus_x                                          0x1405B5430
#define CXWnd__SetFont_x                                           0x1405B5480
#define CXWnd__SetKeyTooltip_x                                     0x1405B5590
#define CXWnd__SetMouseOver_x                                      0x1405B56D0
#define CXWnd__SetParent_x                                         0x1405B5750
#define CXWnd__StartFade_x                                         0x1405B5B70
#define CXWnd__vftable_x                                           0x140ACECD0
#define CXWnd__CXWnd_x                                             0x1405AD570
#define CXWnd__dCXWnd_x                                            0x1405ADEB0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405F8270

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405D5B30
#define CXWndManager__DrawCursor_x                                 0x1405D5E10
#define CXWndManager__DrawWindows_x                                0x1405D6070
#define CXWndManager__GetKeyboardFlags_x                           0x1405D66C0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405D6700
#define CXWndManager__RemoveWnd_x                                  0x1405D9F20

// CDBStr
#define CDBStr__GetString_x                                        0x14018F0A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140686C80

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D3450
#define CCharacterListWnd__EnterWorld_x                            0x1400D2460
#define CCharacterListWnd__Quit_x                                  0x1400D3430
#define CCharacterListWnd__UpdateList_x                            0x1400D42B0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140654370
#define ItemBase__CreateItemTagString_x                            0x140654E00
#define ItemBase__GetImageNum_x                                    0x140657550
#define ItemBase__GetItemValue_x                                   0x140659030
#define ItemBase__IsEmpty_x                                        0x14065ADE0
#define ItemBase__IsKeyRingItem_x                                  0x14065B520
#define ItemBase__ValueSellMerchant_x                              0x14065F7C0
#define ItemClient__CanDrop_x                                      0x1402B9DB0
#define ItemClient__CanGoInBag_x                                   0x1402B9EE0
#define ItemClient__CreateItemClient_x                             0x1402BA170
#define ItemClient__dItemClient_x                                  0x1402B9C20

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401AE910
#define EQ_LoadingS__Array_x                                       0x140D3A230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14066B800
#define PcBase__GetCombatAbility_x                                 0x14066BEF0
#define PcBase__GetCombatAbilityTimer_x                            0x14066BF90
#define PcBase__GetItemContainedRealEstateIds_x                    0x14066C730
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14066D1A0
#define PcClient__AlertInventoryChanged_x                          0x1402DCF20
#define PcClient__GetConLevel_x                                    0x1402DD670  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402DFE00
#define PcClient__HasLoreItem_x                                    0x1402E0E40
#define PcZoneClient__GetItemRecastTimer_x                         0x1402ED6A0
#define PcZoneClient__RemoveMyAffect_x                             0x1402F0B70

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x140222F70
#define EQGroundItemListManager__Add_x                             0x140223120
#define EQGroundItemListManager__Clear_x                           0x1402231C0
#define EQGroundItemListManager__Delete_x                          0x140223280
#define EQGroundItemListManager__Instance_x                        0x140223310

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x14025DC20

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140189880

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406407E0
#define PlayerBase__CanSee1_x                                      0x1406408B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140640D90
#define PlayerBase__HasProperty_x                                  0x140640F60
#define PlayerBase__IsTargetable_x                                 0x140641020
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402FE820
#define PlayerClient__GetPcClient_x                                0x140301350
#define PlayerClient__PlayerClient_x                               0x1402F6B60
#define PlayerClient__SetNameSpriteState_x                         0x140304A80
#define PlayerClient__SetNameSpriteTint_x                          0x140305A40
#define PlayerZoneClient__ChangeHeight_x                           0x140314540
#define PlayerZoneClient__DoAttack_x                               0x140315250
#define PlayerZoneClient__GetLevel_x                               0x140318980
#define PlayerZoneClient__IsValidTeleport_x                        0x1402609C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14019D480

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14030DA40  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14030DAF0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14030DBF0
#define PlayerManagerClient__CreatePlayer_x                        0x14030D510
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406403A0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402BF310
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402BEC40
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402BECB0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402BF2A0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402BF430
#define KeypressHandler__HandleKeyUp_x                             0x1402BF550
#define KeypressHandler__SaveKeymapping_x                          0x1402BF130  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406847A0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14067E560

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402E6F10  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402EB7D0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402EE780
#define PcZoneClient__RemovePetEffect_x                            0x1402F0E50
#define PcZoneClient__HasAlternateAbility_x                        0x1402EF360
#define PcZoneClient__CanEquipItem_x                               0x1402E9AD0
#define PcZoneClient__GetItemByID_x                                0x1402EC6F0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F09F0
#define PcZoneClient__BandolierSwap_x                              0x1402DCFD0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402654F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403CBA40

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403BFE80
#define CContainerMgr__CloseContainer_x                            0x1403BF7A0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C0200

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404BBDD0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B16B0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14044B740
#define CLootWnd__RequestLootSlot_x                                0x14044C790

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401DE2F0
#define EQ_Spell__SpellAffects_x                                   0x1401DF5D0
#define EQ_Spell__SpellAffectBase_x                                0x1401DF530
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DC380
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DC330
#define EQ_Spell__IsSPAStacking_x                                  0x1401DF200
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401DEDB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401DE670

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C3A90

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140518A50
#define CTargetWnd__RefreshTargetBuffs_x                           0x140518160
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140517960

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405200F0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140186280
#define CTaskManager__GetTaskStatus_x                              0x140186390
#define CTaskManager__GetElementDescription_x                      0x140185F10

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401DC610
#define EqSoundManager__PlayScriptMp3_x                            0x1401DB450
#define EqSoundManager__SoundAssistPlay_x                          0x140337DE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140338120  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405B68D0
#define CTextureAnimation__SetCurCell_x                            0x1405B6BE0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402AF8B0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14069F500
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14069F580
#define CharacterBase__IsExpansionFlag_x                           0x140202430

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14039ACC0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14039B730
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14039CC80

// messages
#define msg_spell_worn_off_x                                       0x1402194B0
#define msg_new_text_x                                             0x140214C70
#define __msgTokenTextParam_x                                      0x14020C130
#define msgTokenText_x                                             0x14020C040

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140339A10
#define SpellManager__GetSpellByGroupAndRank_x                     0x140339930

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14064F960

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140444B70

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403C4BF0
#define CCursorAttachment__IsOkToActivate_x                        0x1403C8080
#define CCursorAttachment__RemoveAttachment_x                      0x1403C8330
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405EFC30
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405EFE20
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405EFE30

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140151E60
#define CFindItemWnd__Update_x                                     0x140152800
#define CFindItemWnd__PickupSelectedItem_x                         0x14014B7C0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015C5E0
#define LootFiltersManager__GetItemFilterData_x                    0x14015D0F0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14015D990
#define LootFiltersManager__SetItemLootFilter_x                    0x14015DC40

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14049E6A0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140332560
#define CResolutionHandler__UpdateResolution_x                     0x14059BED0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403BC130

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406A3900  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406A37F0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403E2CA0
#define CGroupWnd__UpdateDisplay_x                                 0x1403E2880

// ItemBase
#define ItemBase__IsLore_x                                         0x14065B660
#define ItemBase__IsLoreEquipped_x                                 0x14065B6F0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D2AD0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14025DD80
#define EQPlacedItemManager__GetItemByGuid_x                       0x14025DD10
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14025DD50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CB40

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140128830
#define FactionManagerClient__HandleFactionMessage_x               0x140128C10
#define FactionManagerClient__GetFactionStanding_x                 0x140128000
#define FactionManagerClient__GetMaxFaction_x                      0x140128000
#define FactionManagerClient__GetMinFaction_x                      0x140127EB0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B0B90

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140134010

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401B74E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401B66A0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401B7300  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401B7280  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14033ECC0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14032CB40

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405AC740

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140086C80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403508B0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008FCC0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140687800
#define FreeToPlayClient__RestrictionInfo_x                        0x140AE35D0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x14054EB60

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14083A058
#define CGFScreenWnd__CGFScreenWnd_x                               0x140071370
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140071500
#define CGFScreenWnd__dCGFScreenWnd_x                              0x1400716B0

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
