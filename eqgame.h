/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2022 MacroQuest Authors
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

#define __ClientDate                                               20220712u
#define __ExpectedVersionDate                                     "Jul 12 2022"
#define __ExpectedVersionTime                                     "13:42:35"
#define __ActualVersionDate_x                                      0x140792C28
#define __ActualVersionTime_x                                      0x140792C18
#define __ActualVersionBuild_x                                     0x140780DD8

// Memory Protection
#define __MemChecker0_x                                            0x14026C060
#define __MemChecker1_x                                            0x1404FF390
#define __MemChecker4_x                                            0x14023C250
#define __EncryptPad0_x                                            0x140A3C0E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B774B0
#define instEQZoneInfo_x                                           0x140B776A4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D8520
#define __gfMaxZoomCameraDistance_x                                0x140788F40
#define __gfMaxCameraDistance_x                                    0x1407C38FC
#define __CurrentSocial_x                                          0x1408F6900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A31F70
#define g_eqCommandStates_x                                        0x140A32FD0
#define __CommandList_x                                            0x140A33210
#define __ScreenMode_x                                             0x140ABEFB4
#define __gWorld_x                                                 0x140B71C68
#define __gpbCommandEvent_x                                        0x140B71EE8
#define __ServerHost_x                                             0x140B720D8
#define __Guilds_x                                                 0x140B76060
#define __MouseEventTime_x                                         0x140BE2968
#define DI8__Mouse_Check_x                                         0x140BE75C0
#define __heqmain_x                                                0x140BE9A68
#define DI8__Mouse_x                                               0x140BE9A80
#define __HWnd_x                                                   0x140BE9A88
#define __Mouse_x                                                  0x140BE6AB8
#define DI8__Main_x                                                0x140BE6B50
#define DI8__Keyboard_x                                            0x140BE6B58
#define __LoginName_x                                              0x140BE723C
#define __CurrentMapLabel_x                                        0x140BFC7D0
#define __LabelCache_x                                             0x140BFD3E0
#define __SubscriptionType_x                                       0x140C349D0
#define Teleport_Table_Size_x                                      0x140B71F74
#define Teleport_Table_x                                           0x140B6FA40

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B723F0
#define pinstActiveBanker_x                                        0x140B6F940
#define pinstActiveCorpse_x                                        0x140B6F930
#define pinstActiveGMaster_x                                       0x140B6F938
#define pinstActiveMerchant_x                                      0x140B6F928
#define pinstAltAdvManager_x                                       0x140ABFC48
#define pinstCEverQuest_x                                          0x140BE6AB0
#define pinstCamActor_x                                            0x140ABEFA0
#define pinstCDBStr_x                                              0x140ABEA50
#define pinstCDisplay_x                                            0x140B6FA30
#define pinstControlledPlayer_x                                    0x140B6F9D0
#define pinstCResolutionHandler_x                                  0x14126D570
#define pinstCSidlManager_x                                        0x140C0E450
#define pinstCXWndManager_x                                        0x140C0E440
#define instDynamicZone_x                                          0x140B75F20 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B75F6E
#define instExpeditionName_x                                       0x140B75FAE
#define pinstDZMember_x                                            0x140B76038
#define pinstDZTimerInfo_x                                         0x140B76040
#define pinstEqLogin_x                                             0x140BE6B80
#define instTribute_x                                              0x140A2D800
#define pinstEQSoundManager_x                                      0x140ABFF88
#define pinstEQSpellStrings_x                                      0x140AA3680
#define pinstSGraphicsEngine_x                                     0x14126D308
#define pinstLocalPC_x                                             0x140B6FA20
#define pinstLocalPlayer_x                                         0x140B6F920
#define pinstCMercenaryClientManager_x                             0x140BE41F8
#define pinstModelPlayer_x                                         0x140B6F950
#define pinstRenderInterface_x                                     0x14126D320
#define pinstSkillMgr_x                                            0x140BE5E90
#define pinstSpawnManager_x                                        0x140BE45C0
#define pinstSpellManager_x                                        0x140BE5FD8
#define pinstStringTable_x                                         0x140B6FA28
#define pinstSwitchManager_x                                       0x140B6F8A0
#define pinstTarget_x                                              0x140B6F9C8
#define pinstTaskMember_x                                          0x140A2D7F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6F9D8
#define pinstTradeTarget_x                                         0x140B6F948
#define instTributeActive_x                                        0x140A2D829
#define pinstViewActor_x                                           0x140ABEF90
#define pinstWorldData_x                                           0x140B6FA08
#define pinstPlayerPath_x                                          0x140BE45E8
#define pinstTargetIndicator_x                                     0x140BE6088
#define EQObject_Top_x                                             0x140B6F9F8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF9938
#define pinstCContainerMgr_x                                       0x140ABF0A0
#define pinstCContextMenuManager_x                                 0x140C0E3F0
#define pinstCInvSlotMgr_x                                         0x140ABF088
#define pinstCItemDisplayManager_x                                 0x140BFC3A0
#define pinstCPopupWndManager_x                                    0x140BFCC30
#define pinstCSpellDisplayMgr_x                                    0x140BFD2C0
#define pinstCTaskManager_x                                        0x1408F6C40
#define pinstEQSuiteTextureLoader_x                                0x140A45740
#define pinstItemIconCache_x                                       0x140BF9C98
#define pinstLootFiltersManager_x                                  0x140ABE468

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F6700
#define __CastRay2_x                                               0x1401F6410
#define __ConvertItemTags_x                                        0x1401F6B00
#define __CleanItemTags_x                                          0x140058F30
#define __CreateCascadeMenuItems_x                                 0x1401534A0
#define __DoesFileExist_x                                          0x140503B70
#define __EQGetTime_x                                              0x1404FF940
#define __ExecuteCmd_x                                             0x1401D0460
#define __FixHeading_x                                             0x140603CB0
#define __FlushDxKeyboard_x                                        0x1402E7740
#define __get_bearing_x                                            0x1401FFA20
#define __get_melee_range_x                                        0x1401FFB10
#define __GetAnimationCache_x                                      0x14035BE90
#define __GetGaugeValueFromEQ_x                                    0x14047A320
#define __GetLabelFromEQ_x                                         0x14047B930
#define __GetXTargetType_x                                         0x140605130   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140603D30
#define __HelpPath_x                                               0x140BE2830   // Why?
#define __NewUIINI_x                                               0x140486500   // Why?
#define __ProcessGameEvents_x                                      0x140231A90
#define __ProcessKeyboardEvents_x                                  0x1402E8F40
#define __ProcessMouseEvents_x                                     0x140232EC0
#define __SaveColors_x                                             0x140163170
#define __STMLToText_x                                             0x14052D760
#define __WndProc_x                                                0x1402E5EC0
#define CMemoryMappedFile__SetFile_x                               0x14073F950
#define DrawNetStatus_x                                            0x140279BB0
#define Util__FastTime_x                                           0x140500640
#define __eq_delete_x                                              0x140609F60
#define __eq_new_x                                                 0x14060A05C
#define __CopyLayout_x                                             0x1402684F0
#define __ThrottleFrameRate_x                                      0x140221901
#define __ThrottleFrameRateEnd_x                                   0x140221961

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F7EB0
#define CAAWnd__Update_x                                           0x1402F81B0
#define CAAWnd__UpdateSelected_x                                   0x1402F9170

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B540
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073D30
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140770400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BDB0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DE90
#define AltAdvManager__IsAbilityReady_x                            0x14016E110
#define AltAdvManager__GetAAById_x                                 0x14016D760
#define AltAdvManager__CanTrainAbility_x                           0x14016D590
#define AltAdvManager__CanSeeAbility_x                             0x14016D250

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3C90
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4A40
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4C50
#define CharacterZoneClient__CanUseItem_x                          0x1400B8A40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5540
#define CharacterZoneClient__CastSpell_x                           0x1400A55E0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4BB0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA070
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA230
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A87D0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFCC0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE720  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9CC0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7FC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C17E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0710
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9E90
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AB00
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C370
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0E10
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9D20
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C19F0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9F10
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2480
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA120
#define CharacterZoneClient__GetModCap_x                           0x1400C9E30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA1C0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA3D0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F210
#define CharacterZoneClient__HasSkill_x                            0x1400C5660
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE700
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C98C0
#define CharacterZoneClient__Max_Endurance_x                       0x140292490  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9C00
#define CharacterZoneClient__Max_Mana_x                            0x140292680  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA0C0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1BE0
#define CharacterZoneClient__SpellDuration_x                       0x1400B27C0
#define CharacterZoneClient__TotalEffect_x                         0x1400B39F0
#define CharacterZoneClient__UseSkill_x                            0x1400CF680


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403152E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14031F050

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031B020
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031A0D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403216C0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CFFE0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140341E60
#define CChatWindowManager__InitContextMenu_x                      0x140341FF0
#define CChatWindowManager__FreeChatWindow_x                       0x1403410B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140348D70
#define CChatWindowManager__CreateChatWindow_x                     0x1403409F0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7460

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140349CE0
#define CChatWindow__Clear_x                                       0x14034AAF0
#define CChatWindow__WndNotification_x                             0x14034BC70
#define CChatWindow__AddHistory_x                                  0x14034A5F0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053E6B0
#define CContextMenu__RemoveMenuItem_x                             0x14053EBC0
#define CContextMenu__RemoveAllMenuItems_x                         0x14053EB90
#define CContextMenu__CheckMenuItem_x                              0x14053EA00
#define CContextMenu__SetMenuItem_x                                0x14053EBE0
#define CContextMenu__AddSeparator_x                               0x14053E810

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053F230
#define CContextMenuManager__RemoveMenu_x                          0x14053F7B0
#define CContextMenuManager__PopupMenu_x                           0x14053F530
#define CContextMenuManager__Flush_x                               0x14053F2B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140355F00

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CBC50
#define CChatService__GetFriendName_x                              0x1405CBC60

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053A850
#define CComboWnd__Draw_x                                          0x14053A950
#define CComboWnd__GetCurChoice_x                                  0x14053AC30  // unused
#define CComboWnd__GetListRect_x                                   0x14053ACD0
#define CComboWnd__InsertChoice_x                                  0x14053B010
#define CComboWnd__SetColors_x                                     0x14053B3A0
#define CComboWnd__SetChoice_x                                     0x14053B360
#define CComboWnd__GetItemCount_x                                  0x14053ACC0
#define CComboWnd__GetCurChoiceText_x                              0x14053AC70  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053AC00
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053B0D0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140353F80
#define CContainerWnd__SetContainer_x                              0x140354D20
#define CContainerWnd__vftable_x                                   0x1407A0948

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABED34
#define CDisplay__ZoneMainUI_x                                     0x140556020
#define CDisplay__PreZoneMainUI_x                                  0x1401600C0
#define CDisplay__CleanGameUI_x                                    0x1401525A0
#define CDisplay__GetClickedActor_x                                0x140156730
#define CDisplay__GetUserDefinedColor_x                            0x140157210
#define CDisplay__InitCharSelectUI_x                               0x1401574C0
#define CDisplay__ReloadUI_x                                       0x140162420
#define CDisplay__WriteTextHD2_x                                   0x140169370
#define CDisplay__TrueDistance_x                                   0x140169050
#define CDisplay__SetViewActor_x                                   0x140165960
#define CDisplay__GetFloorHeight_x                                 0x140156990
#define CDisplay__ToggleScreenshotMode_x                           0x140168B50
#define CDisplay__RealRender_World_x                               0x1401617B0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140561530
#define CEditWnd__DrawCaret_x                                      0x1405420F0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405425B0
#define CEditWnd__GetCaretPt_x                                     0x140542830  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140542870
#define CEditWnd__GetDisplayString_x                               0x140542AE0
#define CEditWnd__GetHorzOffset_x                                  0x140542D20
#define CEditWnd__GetLineForPrintableChar_x                        0x140542E70
#define CEditWnd__GetSelStartPt_x                                  0x140543150  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140542FA0
#define CEditWnd__PointFromPrintableChar_x                         0x140543D00
#define CEditWnd__ReplaceSelection_x                               0x1405440B0
#define CEditWnd__SelectableCharFromPoint_x                        0x140544550
#define CEditWnd__SetEditable_x                                    0x1405447E0
#define CEditWnd__SetWindowText_x                                  0x140544810

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140222CB0
#define CEverQuest__ClickedPlayer_x                                0x140219040
#define CEverQuest__CreateTargetIndicator_x                        0x1402197A0
#define CEverQuest__DoTellWindow_x                                 0x1400D7170 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7A30 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402241B0
#define CEverQuest__dsp_chat_x                                     0x1400D6C90 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024D720
#define CEverQuest__Emote_x                                        0x140224B10
#define CEverQuest__GetBodyTypeDesc_x                              0x140225880
#define CEverQuest__GetClassDesc_x                                 0x1402258E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140225CB0
#define CEverQuest__GetDeityDesc_x                                 0x140226060
#define CEverQuest__GetLangDesc_x                                  0x140226490
#define CEverQuest__GetRaceDesc_x                                  0x140226830
#define CEverQuest__InterpretCmd_x                                 0x140227F20
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023C8D0
#define CEverQuest__LMouseUp_x                                     0x140229960
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A270
#define CEverQuest__RMouseUp_x                                     0x140233A40
#define CEverQuest__SetGameState_x                                 0x14023EB80
#define CEverQuest__UPCNotificationFlush_x                         0x140244230 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402295E0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140234D70
#define CEverQuest__ReportSuccessfulHit_x                          0x140235AB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403661E0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400943F0
#define CGuild__GetGuildName_x                                     0x140094430

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403828F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025E2F0
#define CHotButton__SetCheck_x                                     0x14025E580

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403917E0
#define CInvSlotMgr__MoveItem_x                                    0x140391930
#define CInvSlotMgr__SelectSlot_x                                  0x140393310

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14038F450
#define CInvSlot__SliderComplete_x                                 0x140390680
#define CInvSlot__GetItemBase_x                                    0x14038BA80
#define CInvSlot__UpdateItem_x                                     0x140390AD0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140393970
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403944C0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B3DB0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B66B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B0C40
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B22F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B31F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140477000
#define CSpellDisplayWnd__UpdateStrings_x                          0x140478BD0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AEDD0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AD3E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117440

// CLabel
#define CLabel__UpdateText_x                                       0x1403BDA60

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405117C0
#define CListWnd__dCListWnd_x                                      0x140511C00
#define CListWnd__vftable_x                                        0x1407CF3E0
#define CListWnd__AddColumn_x                                      0x1405122A0
#define CListWnd__AddColumn1_x                                     0x140512340
#define CListWnd__AddLine_x                                        0x1405124A0
#define CListWnd__AddString_x                                      0x140512A20
#define CListWnd__CalculateFirstVisibleLine_x                      0x140513110
#define CListWnd__CalculateVSBRange_x                              0x1405133F0
#define CListWnd__ClearSel_x                                       0x1405135A0
#define CListWnd__ClearAllSel_x                                    0x140513540
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140513600
#define CListWnd__Compare_x                                        0x1405137B0
#define CListWnd__Draw_x                                           0x140513C80
#define CListWnd__DrawColumnSeparators_x                           0x140514820
#define CListWnd__DrawHeader_x                                     0x1405148E0
#define CListWnd__DrawItem_x                                       0x140514FA0
#define CListWnd__DrawLine_x                                       0x140515920
#define CListWnd__DrawSeparator_x                                  0x140515DE0
#define CListWnd__EnableLine_x                                     0x140516200
#define CListWnd__EnsureVisible_x                                  0x140516260
#define CListWnd__ExtendSel_x                                      0x140516360
#define CListWnd__GetColumnMinWidth_x                              0x140516690
#define CListWnd__GetColumnWidth_x                                 0x140516710
#define CListWnd__GetCurSel_x                                      0x140516810
#define CListWnd__GetItemData_x                                    0x140516B90
#define CListWnd__GetItemHeight_x                                  0x140516BD0
#define CListWnd__GetItemRect_x                                    0x140516D90
#define CListWnd__GetItemText_x                                    0x140517030
#define CListWnd__GetSelList_x                                     0x140517280
#define CListWnd__GetSeparatorRect_x                               0x140517470
#define CListWnd__InsertLine_x                                     0x1405188E0
#define CListWnd__RemoveLine_x                                     0x140518F00
#define CListWnd__SetColors_x                                      0x1405192D0
#define CListWnd__SetColumnJustification_x                         0x1405192F0
#define CListWnd__SetColumnLabel_x                                 0x140519370
#define CListWnd__SetColumnWidth_x                                 0x140519510
#define CListWnd__SetCurSel_x                                      0x1405195E0
#define CListWnd__SetItemColor_x                                   0x140519850
#define CListWnd__SetItemData_x                                    0x1405198F0
#define CListWnd__SetItemText_x                                    0x140519B30
#define CListWnd__Sort_x                                           0x140519F40
#define CListWnd__ToggleSel_x                                      0x14051A0B0
#define CListWnd__SetColumnsSizable_x                              0x140519560
#define CListWnd__SetItemWnd_x                                     0x140519C60
#define CListWnd__GetItemWnd_x                                     0x140517210
#define CListWnd__SetItemIcon_x                                    0x140519930
#define CListWnd__CalculateCustomWindowPositions_x                 0x140512EE0
#define CListWnd__SetVScrollPos_x                                  0x140519EA0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D04A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407ABFC0
#define MapViewMap__Clear_x                                        0x1403D2010
#define MapViewMap__SetZoom_x                                      0x1403D85D0
#define MapViewMap__HandleLButtonDown_x                            0x1403D5110

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403F9B70  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1403FF810
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140401830
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140403630
#define CMerchantWnd__SelectBuySellSlot_x                          0x140402A50
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140406CF0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A8410
#define CPacketScrambler__hton_x                                   0x1405A8400

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140537F30
#define CSidlManagerBase__FindAnimation1_x                         0x140537E70
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140538560
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140538310
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140537280
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140537210
#define CSidlManagerBase__CreateXWnd_x                             0x140536880

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404697E0
#define CSidlManager__CreateXWnd_x                                 0x1404699A0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052F1D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052F2F0
#define CSidlScreenWnd__ConvertToRes_x                             0x14055BAE0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052F420
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052EA70
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052E9C0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052EC90
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14052F9F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14052FC20
#define CSidlScreenWnd__GetChildItem_x                             0x14052FDC0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14052FFE0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140521A00 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140530350
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405306C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140530F80
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140531830
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0E298
#define CSidlScreenWnd__StoreIniInfo_x                             0x140531E50
#define CSidlScreenWnd__StoreIniVis_x                              0x140532640
#define CSidlScreenWnd__vftable_x                                  0x1407D0440
#define CSidlScreenWnd__WndNotification_x                          0x140532690

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D0690 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D0A90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D09D0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D0E30
#define CSkillMgr__IsCombatSkill_x                                 0x1402D0E70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140486570
#define CSliderWnd__SetValue_x                                     0x140540D70
#define CSliderWnd__SetNumTicks_x                                  0x140540BF0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140470CB0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140549480
#define CStmlWnd__CalculateHSBRange_x                              0x1405213B0
#define CStmlWnd__CalculateVSBRange_x                              0x14054A330
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054AE20
#define CStmlWnd__ForceParseNow_x                                  0x14054AEC0
#define CStmlWnd__GetVisibleText_x                                 0x14054B5A0
#define CStmlWnd__MakeStmlColorTag_x                               0x14054D330
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054D370
#define CStmlWnd__SetSTMLText_x                                    0x140554350
#define CStmlWnd__StripFirstSTMLLines_x                            0x140554500
#define CStmlWnd__UpdateHistoryString_x                            0x140554890

// CTabWnd
#define CTabWnd__Draw_x                                            0x140545F80
#define CTabWnd__DrawCurrentPage_x                                 0x140546020
#define CTabWnd__DrawTab_x                                         0x1405463F0
#define CTabWnd__GetTabRect_x                                      0x140546A50
#define CTabWnd__InsertPage_x                                      0x140546D20
#define CTabWnd__RemovePage_x                                      0x140546FA0
#define CTabWnd__SetPage_x                                         0x140547100
#define CTabWnd__UpdatePage_x                                      0x140547400

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405459A0
#define CPageWnd__SetTabText_x                                     0x140545A10

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D920  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DD30


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051B200
#define CTextureFont__DrawWrappedText1_x                           0x14051B110
#define CTextureFont__DrawWrappedText2_x                           0x14051B330
#define CTextureFont__GetTextExtent_x                              0x14051B6E0
#define CTextureFont__GetHeight_x                                  0x14051B6A0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14055A240

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050E430

// CXStr
#define CXStr__gFreeLists_x                                        0x140A450C0
#define CXStr__gCXStrAccess_x                                      0x140C0D858

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051CC60
#define CXWnd__ClrFocus_x                                          0x14051CEA0
#define CXWnd__Destroy_x                                           0x14051CFE0
#define CXWnd__DoAllDrawing_x                                      0x14051D0F0
#define CXWnd__DrawColoredRect_x                                   0x14051D8A0
#define CXWnd__DrawTooltip_x                                       0x14051EF10
#define CXWnd__DrawTooltipAtPoint_x                                0x14051EFC0
#define CXWnd__GetChildItem_x                                      0x14051F8C0
#define CXWnd__GetChildWndAt_x                                     0x14051F970
#define CXWnd__GetClientClipRect_x                                 0x14051FAD0
#define CXWnd__GetRelativeRect_x                                   0x1405214F0
#define CXWnd__GetScreenClipRect_x                                 0x140521600
#define CXWnd__GetScreenRect_x                                     0x140521780
#define CXWnd__GetTooltipRect_x                                    0x140521900
#define CXWnd__IsActive_x                                          0x140521E80
#define CXWnd__IsDescendantOf_x                                    0x140521EB0
#define CXWnd__IsReallyVisible_x                                   0x140521F20
#define CXWnd__IsType_x                                            0x140521F60
#define CXWnd__Minimize_x                                          0x140522060
#define CXWnd__ProcessTransition_x                                 0x140523070
#define CXWnd__Refade_x                                            0x140523170
#define CXWnd__Resize_x                                            0x140523190
#define CXWnd__Right_x                                             0x140523230
#define CXWnd__SetFocus_x                                          0x1405235F0
#define CXWnd__SetFont_x                                           0x140523640
#define CXWnd__SetKeyTooltip_x                                     0x140523750
#define CXWnd__SetMouseOver_x                                      0x140523880
#define CXWnd__SetParent_x                                         0x140523900
#define CXWnd__StartFade_x                                         0x140523D50
#define CXWnd__vftable_x                                           0x1407CFB58
#define CXWnd__CXWnd_x                                             0x14051B800
#define CXWnd__dCXWnd_x                                            0x14051C140

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140560CB0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140525560
#define CXWndManager__DrawWindows_x                                0x140525690
#define CXWndManager__GetKeyboardFlags_x                           0x140525D50
#define CXWndManager__HandleKeyboardMsg_x                          0x140525D90
#define CXWndManager__RemoveWnd_x                                  0x1405291C0

// CDBStr
#define CDBStr__GetString_x                                        0x1401507A0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B1C10

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1B10
#define CCharacterListWnd__EnterWorld_x                            0x1400A07C0
#define CCharacterListWnd__Quit_x                                  0x1400A1AF0
#define CCharacterListWnd__UpdateList_x                            0x1400A2800

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140581FD0
#define ItemBase__CreateItemTagString_x                            0x140582990
#define ItemBase__GetImageNum_x                                    0x140584B50
#define ItemBase__GetItemValue_x                                   0x1405866B0
#define ItemBase__IsEmpty_x                                        0x1405881D0
#define ItemBase__IsKeyRingItem_x                                  0x1405888A0
#define ItemBase__ValueSellMerchant_x                              0x14058CB80
#define ItemClient__CanDrop_x                                      0x1402606D0
#define ItemClient__CanGoInBag_x                                   0x140260800
#define ItemClient__CreateItemClient_x                             0x140260AC0
#define ItemClient__dItemClient_x                                  0x140260530

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F630
#define EQ_LoadingS__Array_x                                       0x140A2FA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140598290
#define PcBase__GetCombatAbility_x                                 0x1405988E0
#define PcBase__GetCombatAbilityTimer_x                            0x140598980
#define PcBase__GetItemContainedRealEstateIds_x                    0x140599090
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405998F0
#define PcClient__AlertInventoryChanged_x                          0x140281170
#define PcClient__GetConLevel_x                                    0x140281640  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140283E50
#define PcClient__HasLoreItem_x                                    0x140284ED0
#define PcZoneClient__GetItemRecastTimer_x                         0x140290E20
#define PcZoneClient__RemoveMyAffect_x                             0x1402934E0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D4AE0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D4B50  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D4C60  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D4BC0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020AB70  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B0C0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F5A00
#define PlayerBase__CanSee1_x                                      0x1405F5AD0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F6000
#define PlayerBase__HasProperty_x                                  0x1405F6220
#define PlayerBase__IsTargetable_x                                 0x1405F62E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029F0D0
#define PlayerClient__GetPcClient_x                                0x1402A1660
#define PlayerClient__PlayerClient_x                               0x1402982D0
#define PlayerClient__SetNameSpriteState_x                         0x1402A4A90
#define PlayerClient__SetNameSpriteTint_x                          0x1402A5A30
#define PlayerZoneClient__ChangeHeight_x                           0x1402B3950
#define PlayerZoneClient__DoAttack_x                               0x1402B4640
#define PlayerZoneClient__GetLevel_x                               0x1402B7BB0
#define PlayerZoneClient__IsValidTeleport_x                        0x14020D920
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E960

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AD3D0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AD400  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AD4B0
#define PlayerManagerClient__CreatePlayer_x                        0x1402ACDC0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F5680

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140265A30
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140265630
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402656A0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402659C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140265B50
#define KeypressHandler__HandleKeyUp_x                             0x140265C30
#define KeypressHandler__SaveKeymapping_x                          0x1402658D0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405AF500  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405A9AB0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028A4F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028F490
#define PcZoneClient__GetPcSkillLimit_x                            0x140291380
#define PcZoneClient__RemovePetEffect_x                            0x1402935E0
#define PcZoneClient__HasAlternateAbility_x                        0x140291E00
#define PcZoneClient__CanEquipItem_x                               0x14028D860
#define PcZoneClient__GetItemByID_x                                0x1402903D0
#define PcZoneClient__RemoveBuffEffect_x                           0x140293390
#define PcZoneClient__BandolierSwap_x                              0x14028CA20
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402912D0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402123E0

// IconCache
#define IconCache__GetIcon_x                                       0x14035BEC0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140352D60
#define CContainerMgr__CloseContainer_x                            0x140352720
#define CContainerMgr__OpenExperimentContainer_x                   0x1403530C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140430A70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259050

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C46C0
#define CLootWnd__RequestLootSlot_x                                0x1403C56A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A7E0
#define EQ_Spell__SpellAffects_x                                   0x14019BA80
#define EQ_Spell__SpellAffectBase_x                                0x14019B9E0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA5B0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA560
#define EQ_Spell__IsSPAStacking_x                                  0x14019B6A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B260
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019AB40

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092E20

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048A2D0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048A310
#define CTargetWnd__RefreshTargetBuffs_x                           0x140489820
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140488DD0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404913A0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147A80
#define CTaskManager__GetTaskStatus_x                              0x140147B90
#define CTaskManager__GetElementDescription_x                      0x140147710

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198B40
#define EqSoundManager__PlayScriptMp3_x                            0x140197940
#define EqSoundManager__SoundAssistPlay_x                          0x1402D6E70  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D71A0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140545010
#define CTextureAnimation__SetCurCell_x                            0x140545320

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257310

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405C9770
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405C97F0
#define CharacterBase__IsExpansionFlag_x                           0x1401B92D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403340B0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403349F0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140335E30

// messages
#define msg_spell_worn_off_x                                       0x1401CC280
#define msg_new_text_x                                             0x1401C80B0
#define __msgTokenTextParam_x                                      0x1401C0040
#define msgTokenText_x                                             0x1401BFF60

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D8830
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D8750

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140605510

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BE1A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140358080
#define CCursorAttachment__AttachToCursor1_x                       0x140356CD0
#define CCursorAttachment__Deactivate_x                            0x140358580

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140558490
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140558680
#define CEQSuiteTextureLoader__GetTexture_x                        0x140558690

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112FE0
#define CFindItemWnd__Update_x                                     0x1401131E0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E220

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BBF0
#define LootFiltersManager__GetItemFilterData_x                    0x14011C710
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CFB0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D260

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140413F70

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406098D0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D01F0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034F330

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CD5D0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CD6E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140371420
#define CGroupWnd__UpdateDisplay_x                                 0x1403711C0

// ItemBase
#define ItemBase__IsLore_x                                         0x140588970
#define ItemBase__IsLoreEquipped_x                                 0x140588AC0

#define MultipleItemMoveManager__ProcessMove_x                     0x140278000

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020ACD0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020AC60
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020ACA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAC00

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF340
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF6F0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEB10
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEB10
#define FactionManagerClient__GetMinFaction_x                      0x1400EE9C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D8A0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA9F0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177F10
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177210
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177D30  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177CB0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DCF30

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CAC00

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D4D50

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140557610

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056160

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EE210

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D690

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
