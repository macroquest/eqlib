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

#define __ClientDate                                               20220718u
#define __ExpectedVersionDate                                     "Jul 18 2022"
#define __ExpectedVersionTime                                     "01:40:07"
#define __ActualVersionDate_x                                      0x140791C28
#define __ActualVersionTime_x                                      0x140791C18
#define __ActualVersionBuild_x                                     0x14077FDD8

// Memory Protection
#define __MemChecker0_x                                            0x14026BE50
#define __MemChecker1_x                                            0x1404FF780
#define __MemChecker4_x                                            0x14023C070
#define __EncryptPad0_x                                            0x140A3A0E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B754B0
#define instEQZoneInfo_x                                           0x140B756A4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D8330
#define __gfMaxZoomCameraDistance_x                                0x140787F40
#define __gfMaxCameraDistance_x                                    0x1407C28FC
#define __CurrentSocial_x                                          0x1408F4900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A2FF70
#define g_eqCommandStates_x                                        0x140A30FD0
#define __CommandList_x                                            0x140A31210
#define __ScreenMode_x                                             0x140ABCFB4
#define __gWorld_x                                                 0x140B6FC68
#define __gpbCommandEvent_x                                        0x140B6FEE8
#define __ServerHost_x                                             0x140B700D8
#define __Guilds_x                                                 0x140B74060
#define __MouseEventTime_x                                         0x140BE0968
#define DI8__Mouse_Check_x                                         0x140BE55C0
#define __heqmain_x                                                0x140BE7A68
#define DI8__Mouse_x                                               0x140BE7A80
#define __HWnd_x                                                   0x140BE7A88
#define __Mouse_x                                                  0x140BE4AB8
#define DI8__Main_x                                                0x140BE4B50
#define DI8__Keyboard_x                                            0x140BE4B58
#define __LoginName_x                                              0x140BE523C
#define __CurrentMapLabel_x                                        0x140BFA7D0
#define __LabelCache_x                                             0x140BFB3E0
#define __SubscriptionType_x                                       0x140C329D0
#define Teleport_Table_Size_x                                      0x140B6FF74
#define Teleport_Table_x                                           0x140B6DA40

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B703F0
#define pinstActiveBanker_x                                        0x140B6D940
#define pinstActiveCorpse_x                                        0x140B6D930
#define pinstActiveGMaster_x                                       0x140B6D938
#define pinstActiveMerchant_x                                      0x140B6D928
#define pinstAltAdvManager_x                                       0x140ABDC48
#define pinstCEverQuest_x                                          0x140BE4AB0
#define pinstCamActor_x                                            0x140ABCFA0
#define pinstCDBStr_x                                              0x140ABCA50
#define pinstCDisplay_x                                            0x140B6DA30
#define pinstControlledPlayer_x                                    0x140B6D9D0
#define pinstCResolutionHandler_x                                  0x14126B570
#define pinstCSidlManager_x                                        0x140C0C450
#define pinstCXWndManager_x                                        0x140C0C440
#define instDynamicZone_x                                          0x140B73F20 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B73F6E
#define instExpeditionName_x                                       0x140B73FAE
#define pinstDZMember_x                                            0x140B74038
#define pinstDZTimerInfo_x                                         0x140B74040
#define pinstEqLogin_x                                             0x140BE4B80
#define instTribute_x                                              0x140A2B800
#define pinstEQSoundManager_x                                      0x140ABDF88
#define pinstEQSpellStrings_x                                      0x140AA1680
#define pinstSGraphicsEngine_x                                     0x14126B308
#define pinstLocalPC_x                                             0x140B6DA20
#define pinstLocalPlayer_x                                         0x140B6D920
#define pinstCMercenaryClientManager_x                             0x140BE21F8
#define pinstModelPlayer_x                                         0x140B6D950
#define pinstRenderInterface_x                                     0x14126B320
#define pinstSkillMgr_x                                            0x140BE3E90
#define pinstSpawnManager_x                                        0x140BE25C0
#define pinstSpellManager_x                                        0x140BE3FD8
#define pinstStringTable_x                                         0x140B6DA28
#define pinstSwitchManager_x                                       0x140B6D8A0
#define pinstTarget_x                                              0x140B6D9C8
#define pinstTaskMember_x                                          0x140A2B7F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6D9D8
#define pinstTradeTarget_x                                         0x140B6D948
#define instTributeActive_x                                        0x140A2B829
#define pinstViewActor_x                                           0x140ABCF90
#define pinstWorldData_x                                           0x140B6DA08
#define pinstPlayerPath_x                                          0x140BE25E8
#define pinstTargetIndicator_x                                     0x140BE4088
#define EQObject_Top_x                                             0x140B6D9F8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF7938
#define pinstCContainerMgr_x                                       0x140ABD0A0
#define pinstCContextMenuManager_x                                 0x140C0C3F0
#define pinstCInvSlotMgr_x                                         0x140ABD088
#define pinstCItemDisplayManager_x                                 0x140BFA3A0
#define pinstCPopupWndManager_x                                    0x140BFAC30
#define pinstCSpellDisplayMgr_x                                    0x140BFB2C0
#define pinstCTaskManager_x                                        0x1408F4C40
#define pinstEQSuiteTextureLoader_x                                0x140A43740
#define pinstItemIconCache_x                                       0x140BF7C98
#define pinstLootFiltersManager_x                                  0x140ABC468

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F6510
#define __CastRay2_x                                               0x1401F6220
#define __ConvertItemTags_x                                        0x1401F6910
#define __CleanItemTags_x                                          0x140058F30
#define __CreateCascadeMenuItems_x                                 0x140153600
#define __DoesFileExist_x                                          0x140503F60
#define __EQGetTime_x                                              0x1404FFD30
#define __ExecuteCmd_x                                             0x1401D0270
#define __FixHeading_x                                             0x140602DE0
#define __FlushDxKeyboard_x                                        0x1402E7520
#define __get_bearing_x                                            0x1401FF830
#define __get_melee_range_x                                        0x1401FF920
#define __GetAnimationCache_x                                      0x14035C040
#define __GetGaugeValueFromEQ_x                                    0x14047A6F0
#define __GetLabelFromEQ_x                                         0x14047BD00
#define __GetXTargetType_x                                         0x140604260   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140602E60
#define __HelpPath_x                                               0x140BE0830   // Why?
#define __NewUIINI_x                                               0x1404868C0   // Why?
#define __ProcessGameEvents_x                                      0x1402318B0
#define __ProcessKeyboardEvents_x                                  0x1402E8D20
#define __ProcessMouseEvents_x                                     0x140232CE0
#define __SaveColors_x                                             0x1401632D0
#define __STMLToText_x                                             0x14052DA90
#define __WndProc_x                                                0x1402E5CA0
#define CMemoryMappedFile__SetFile_x                               0x14073EA90
#define DrawNetStatus_x                                            0x1402799B0
#define Util__FastTime_x                                           0x140500A30
#define __eq_delete_x                                              0x1406090A0
#define __eq_new_x                                                 0x14060919C
#define __CopyLayout_x                                             0x1402682F0
#define __ThrottleFrameRate_x                                      0x140221727
#define __ThrottleFrameRateEnd_x                                   0x140221787

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F7F80
#define CAAWnd__Update_x                                           0x1402F8280
#define CAAWnd__UpdateSelected_x                                   0x1402F9240

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B570
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073D60
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14076F400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BDE0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DFE0
#define AltAdvManager__IsAbilityReady_x                            0x14016E260
#define AltAdvManager__GetAAById_x                                 0x14016D8B0
#define AltAdvManager__CanTrainAbility_x                           0x14016D6E0
#define AltAdvManager__CanSeeAbility_x                             0x14016D3A0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3D30
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4AE0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4CF0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8AF0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A55E0
#define CharacterZoneClient__CastSpell_x                           0x1400A5680
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4C60
#define CharacterZoneClient__Cur_HP_x                              0x1400BA120
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA2E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8870
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFD70
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE7D0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D60
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8070
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1890
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C07C0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F30
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009ABA0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C410
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0EC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9DD0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1AA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9FB0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2530
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA1C0
#define CharacterZoneClient__GetModCap_x                           0x1400C9EE0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA260
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA470
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F2B0
#define CharacterZoneClient__HasSkill_x                            0x1400C5710
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE7A0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9970
#define CharacterZoneClient__Max_Endurance_x                       0x1402922C0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9CB0
#define CharacterZoneClient__Max_Mana_x                            0x1402924B0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA170
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1C90
#define CharacterZoneClient__SpellDuration_x                       0x1400B2870
#define CharacterZoneClient__TotalEffect_x                         0x1400B3AA0
#define CharacterZoneClient__UseSkill_x                            0x1400CF730


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140315420

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14031F1A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031B170
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031A210

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140321810

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407CEFE0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140342000
#define CChatWindowManager__InitContextMenu_x                      0x140342190
#define CChatWindowManager__FreeChatWindow_x                       0x140341250
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140348F20
#define CChatWindowManager__CreateChatWindow_x                     0x140340B90

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7530

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140349E90
#define CChatWindow__Clear_x                                       0x14034ACA0
#define CChatWindow__WndNotification_x                             0x14034BE20
#define CChatWindow__AddHistory_x                                  0x14034A7A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053E9F0
#define CContextMenu__RemoveMenuItem_x                             0x14053EEF0
#define CContextMenu__RemoveAllMenuItems_x                         0x14053EEC0
#define CContextMenu__CheckMenuItem_x                              0x14053ED30
#define CContextMenu__SetMenuItem_x                                0x14053EF10
#define CContextMenu__AddSeparator_x                               0x14053EB50

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053F560
#define CContextMenuManager__RemoveMenu_x                          0x14053FAD0
#define CContextMenuManager__PopupMenu_x                           0x14053F850
#define CContextMenuManager__Flush_x                               0x14053F5E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403560B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CC0F0
#define CChatService__GetFriendName_x                              0x1405CC100

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053ABC0
#define CComboWnd__Draw_x                                          0x14053ACB0
#define CComboWnd__GetCurChoice_x                                  0x14053AF80  // unused
#define CComboWnd__GetListRect_x                                   0x14053B020
#define CComboWnd__InsertChoice_x                                  0x14053B340
#define CComboWnd__SetColors_x                                     0x14053B6D0
#define CComboWnd__SetChoice_x                                     0x14053B690
#define CComboWnd__GetItemCount_x                                  0x14053B010
#define CComboWnd__GetCurChoiceText_x                              0x14053AFC0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053AF50
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053B400

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140354130
#define CContainerWnd__SetContainer_x                              0x140354ED0
#define CContainerWnd__vftable_x                                   0x14079F948

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABCD34
#define CDisplay__ZoneMainUI_x                                     0x1405560F0
#define CDisplay__PreZoneMainUI_x                                  0x140160220
#define CDisplay__CleanGameUI_x                                    0x140152700
#define CDisplay__GetClickedActor_x                                0x140156890
#define CDisplay__GetUserDefinedColor_x                            0x140157370
#define CDisplay__InitCharSelectUI_x                               0x140157620
#define CDisplay__ReloadUI_x                                       0x140162580
#define CDisplay__WriteTextHD2_x                                   0x1401694D0
#define CDisplay__TrueDistance_x                                   0x1401691B0
#define CDisplay__SetViewActor_x                                   0x140165AC0
#define CDisplay__GetFloorHeight_x                                 0x140156AF0
#define CDisplay__ToggleScreenshotMode_x                           0x140168CB0
#define CDisplay__RealRender_World_x                               0x140161910

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140561600
#define CEditWnd__DrawCaret_x                                      0x140542410  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405428A0
#define CEditWnd__GetCaretPt_x                                     0x140542B20  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140542B60
#define CEditWnd__GetDisplayString_x                               0x140542DC0
#define CEditWnd__GetHorzOffset_x                                  0x140543000
#define CEditWnd__GetLineForPrintableChar_x                        0x140543140
#define CEditWnd__GetSelStartPt_x                                  0x140543420  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140543270
#define CEditWnd__PointFromPrintableChar_x                         0x140543FD0
#define CEditWnd__ReplaceSelection_x                               0x140544370
#define CEditWnd__SelectableCharFromPoint_x                        0x140544810
#define CEditWnd__SetEditable_x                                    0x140544AA0
#define CEditWnd__SetWindowText_x                                  0x140544AD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140222AD0
#define CEverQuest__ClickedPlayer_x                                0x140218E50
#define CEverQuest__CreateTargetIndicator_x                        0x1402195B0
#define CEverQuest__DoTellWindow_x                                 0x1400D7240 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7B00 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140223FD0
#define CEverQuest__dsp_chat_x                                     0x1400D6D60 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024D540
#define CEverQuest__Emote_x                                        0x140224930
#define CEverQuest__GetBodyTypeDesc_x                              0x1402256A0
#define CEverQuest__GetClassDesc_x                                 0x140225700
#define CEverQuest__GetClassThreeLetterCode_x                      0x140225AD0
#define CEverQuest__GetDeityDesc_x                                 0x140225E80
#define CEverQuest__GetLangDesc_x                                  0x1402262B0
#define CEverQuest__GetRaceDesc_x                                  0x140226650
#define CEverQuest__InterpretCmd_x                                 0x140227D40
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023C6F0
#define CEverQuest__LMouseUp_x                                     0x140229780
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A090
#define CEverQuest__RMouseUp_x                                     0x140233860
#define CEverQuest__SetGameState_x                                 0x14023E9A0
#define CEverQuest__UPCNotificationFlush_x                         0x140244050 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140229400
#define CEverQuest__ReportSuccessfulHeal_x                         0x140234B90
#define CEverQuest__ReportSuccessfulHit_x                          0x1402358D0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140366390

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094470
#define CGuild__GetGuildName_x                                     0x1400944B0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140382AF0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025E120
#define CHotButton__SetCheck_x                                     0x14025E3B0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403919F0
#define CInvSlotMgr__MoveItem_x                                    0x140391B40
#define CInvSlotMgr__SelectSlot_x                                  0x140393530

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14038F660
#define CInvSlot__SliderComplete_x                                 0x140390890
#define CInvSlot__GetItemBase_x                                    0x14038BC90
#define CInvSlot__UpdateItem_x                                     0x140390CE0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140393B90
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403946E0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B4030
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B6960
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B0EA0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B2560
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B3470

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404773D0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140478FA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AF1D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AD640

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117520

// CLabel
#define CLabel__UpdateText_x                                       0x1403BDD30

// CListWnd
#define CListWnd__CListWnd_x                                       0x140511BB0
#define CListWnd__dCListWnd_x                                      0x140511FF0
#define CListWnd__vftable_x                                        0x1407CE3E0
#define CListWnd__AddColumn_x                                      0x140512690
#define CListWnd__AddColumn1_x                                     0x140512730
#define CListWnd__AddLine_x                                        0x140512890
#define CListWnd__AddString_x                                      0x140512E10
#define CListWnd__CalculateFirstVisibleLine_x                      0x140513500
#define CListWnd__CalculateVSBRange_x                              0x1405137E0
#define CListWnd__ClearSel_x                                       0x140513990
#define CListWnd__ClearAllSel_x                                    0x140513930
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405139F0
#define CListWnd__Compare_x                                        0x140513BB0
#define CListWnd__Draw_x                                           0x140514080
#define CListWnd__DrawColumnSeparators_x                           0x140514C20
#define CListWnd__DrawHeader_x                                     0x140514CE0
#define CListWnd__DrawItem_x                                       0x1405153A0
#define CListWnd__DrawLine_x                                       0x140515D10
#define CListWnd__DrawSeparator_x                                  0x1405161D0
#define CListWnd__EnableLine_x                                     0x1405165F0
#define CListWnd__EnsureVisible_x                                  0x140516650
#define CListWnd__ExtendSel_x                                      0x140516750
#define CListWnd__GetColumnMinWidth_x                              0x140516A80
#define CListWnd__GetColumnWidth_x                                 0x140516B00
#define CListWnd__GetCurSel_x                                      0x140516C00
#define CListWnd__GetItemData_x                                    0x140516F80
#define CListWnd__GetItemHeight_x                                  0x140516FC0
#define CListWnd__GetItemRect_x                                    0x140517180
#define CListWnd__GetItemText_x                                    0x140517420
#define CListWnd__GetSelList_x                                     0x140517670
#define CListWnd__GetSeparatorRect_x                               0x140517860
#define CListWnd__InsertLine_x                                     0x140518CC0
#define CListWnd__RemoveLine_x                                     0x1405192D0
#define CListWnd__SetColors_x                                      0x1405196A0
#define CListWnd__SetColumnJustification_x                         0x1405196C0
#define CListWnd__SetColumnLabel_x                                 0x140519740
#define CListWnd__SetColumnWidth_x                                 0x1405198E0
#define CListWnd__SetCurSel_x                                      0x1405199B0
#define CListWnd__SetItemColor_x                                   0x140519C20
#define CListWnd__SetItemData_x                                    0x140519CC0
#define CListWnd__SetItemText_x                                    0x140519F00
#define CListWnd__Sort_x                                           0x14051A310
#define CListWnd__ToggleSel_x                                      0x14051A480
#define CListWnd__SetColumnsSizable_x                              0x140519930
#define CListWnd__SetItemWnd_x                                     0x14051A030
#define CListWnd__GetItemWnd_x                                     0x140517600
#define CListWnd__SetItemIcon_x                                    0x140519D00
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405132D0
#define CListWnd__SetVScrollPos_x                                  0x14051A270

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D07C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407AAFC0
#define MapViewMap__Clear_x                                        0x1403D2340
#define MapViewMap__SetZoom_x                                      0x1403D8900
#define MapViewMap__HandleLButtonDown_x                            0x1403D5440

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403F9EC0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1403FFB60
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140401B80
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140403990
#define CMerchantWnd__SelectBuySellSlot_x                          0x140402DB0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140407050

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A88B0
#define CPacketScrambler__hton_x                                   0x1405A88A0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405382A0
#define CSidlManagerBase__FindAnimation1_x                         0x1405381E0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405388D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140538680
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405375E0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140537570
#define CSidlManagerBase__CreateXWnd_x                             0x140536BB0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140469B90
#define CSidlManager__CreateXWnd_x                                 0x140469D50

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052F500
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052F620
#define CSidlScreenWnd__ConvertToRes_x                             0x14055BBB0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052F750
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052EDA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052ECF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052EFC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14052FD20
#define CSidlScreenWnd__EnableIniStorage_x                         0x14052FF50
#define CSidlScreenWnd__GetChildItem_x                             0x1405300F0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140530310
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140521D90 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140530680
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405309F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140531290
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140531B40
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0C298
#define CSidlScreenWnd__StoreIniInfo_x                             0x140532180
#define CSidlScreenWnd__StoreIniVis_x                              0x140532970
#define CSidlScreenWnd__vftable_x                                  0x1407CF440
#define CSidlScreenWnd__WndNotification_x                          0x1405329C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D0450 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D0850 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D0790
#define CSkillMgr__IsActivatedSkill_x                              0x1402D0BF0
#define CSkillMgr__IsCombatSkill_x                                 0x1402D0C30

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140486930
#define CSliderWnd__SetValue_x                                     0x140541090
#define CSliderWnd__SetNumTicks_x                                  0x140540F10

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140471070

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140549580
#define CStmlWnd__CalculateHSBRange_x                              0x140521780
#define CStmlWnd__CalculateVSBRange_x                              0x14054A420
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054AF10
#define CStmlWnd__ForceParseNow_x                                  0x14054AFB0
#define CStmlWnd__GetVisibleText_x                                 0x14054B690
#define CStmlWnd__MakeStmlColorTag_x                               0x14054D410
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054D450
#define CStmlWnd__SetSTMLText_x                                    0x140554420
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405545D0
#define CStmlWnd__UpdateHistoryString_x                            0x140554960

// CTabWnd
#define CTabWnd__Draw_x                                            0x140546070
#define CTabWnd__DrawCurrentPage_x                                 0x140546110
#define CTabWnd__DrawTab_x                                         0x1405464E0
#define CTabWnd__GetTabRect_x                                      0x140546B40
#define CTabWnd__InsertPage_x                                      0x140546E10
#define CTabWnd__RemovePage_x                                      0x1405470A0
#define CTabWnd__SetPage_x                                         0x140547200
#define CTabWnd__UpdatePage_x                                      0x140547500

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140545C70
#define CPageWnd__SetTabText_x                                     0x140545CE0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D9B0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DDC0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051B5D0
#define CTextureFont__DrawWrappedText1_x                           0x14051B4E0
#define CTextureFont__DrawWrappedText2_x                           0x14051B700
#define CTextureFont__GetTextExtent_x                              0x14051BAB0
#define CTextureFont__GetHeight_x                                  0x14051BA70

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14055A310

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050E820

// CXStr
#define CXStr__gFreeLists_x                                        0x140A430C0
#define CXStr__gCXStrAccess_x                                      0x140C0B858

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051D000
#define CXWnd__ClrFocus_x                                          0x14051D240
#define CXWnd__Destroy_x                                           0x14051D380
#define CXWnd__DoAllDrawing_x                                      0x14051D490
#define CXWnd__DrawColoredRect_x                                   0x14051DC50
#define CXWnd__DrawTooltip_x                                       0x14051F2D0
#define CXWnd__DrawTooltipAtPoint_x                                0x14051F380
#define CXWnd__GetChildItem_x                                      0x14051FC70
#define CXWnd__GetChildWndAt_x                                     0x14051FD30
#define CXWnd__GetClientClipRect_x                                 0x14051FE90
#define CXWnd__GetRelativeRect_x                                   0x1405218A0
#define CXWnd__GetScreenClipRect_x                                 0x1405219A0
#define CXWnd__GetScreenRect_x                                     0x140521B20
#define CXWnd__GetTooltipRect_x                                    0x140521C90
#define CXWnd__IsActive_x                                          0x140522210
#define CXWnd__IsDescendantOf_x                                    0x140522240
#define CXWnd__IsReallyVisible_x                                   0x1405222B0
#define CXWnd__IsType_x                                            0x1405222F0
#define CXWnd__Minimize_x                                          0x1405223F0
#define CXWnd__ProcessTransition_x                                 0x1405233C0
#define CXWnd__Refade_x                                            0x1405234C0
#define CXWnd__Resize_x                                            0x1405234E0
#define CXWnd__Right_x                                             0x140523580
#define CXWnd__SetFocus_x                                          0x140523940
#define CXWnd__SetFont_x                                           0x140523990
#define CXWnd__SetKeyTooltip_x                                     0x140523A80
#define CXWnd__SetMouseOver_x                                      0x140523BC0
#define CXWnd__SetParent_x                                         0x140523C40
#define CXWnd__StartFade_x                                         0x140524070
#define CXWnd__vftable_x                                           0x1407CEB58
#define CXWnd__CXWnd_x                                             0x14051BBD0
#define CXWnd__dCXWnd_x                                            0x14051C4F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140560D80

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140525860
#define CXWndManager__DrawWindows_x                                0x140525990
#define CXWndManager__GetKeyboardFlags_x                           0x140526050
#define CXWndManager__HandleKeyboardMsg_x                          0x140526090
#define CXWndManager__RemoveWnd_x                                  0x1405294F0

// CDBStr
#define CDBStr__GetString_x                                        0x140150900

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B20B0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1BB0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0860
#define CCharacterListWnd__Quit_x                                  0x1400A1B90
#define CCharacterListWnd__UpdateList_x                            0x1400A28A0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405820D0
#define ItemBase__CreateItemTagString_x                            0x140582AD0
#define ItemBase__GetImageNum_x                                    0x140584CB0
#define ItemBase__GetItemValue_x                                   0x140586870
#define ItemBase__IsEmpty_x                                        0x1405883C0
#define ItemBase__IsKeyRingItem_x                                  0x140588AE0
#define ItemBase__ValueSellMerchant_x                              0x14058CEB0
#define ItemClient__CanDrop_x                                      0x1402604D0
#define ItemClient__CanGoInBag_x                                   0x140260600
#define ItemClient__CreateItemClient_x                             0x1402608C0
#define ItemClient__dItemClient_x                                  0x140260330

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F780
#define EQ_LoadingS__Array_x                                       0x140A2DA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140598710
#define PcBase__GetCombatAbility_x                                 0x140598D60
#define PcBase__GetCombatAbilityTimer_x                            0x140598E00
#define PcBase__GetItemContainedRealEstateIds_x                    0x140599510
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140599D70
#define PcClient__AlertInventoryChanged_x                          0x140280F90
#define PcClient__GetConLevel_x                                    0x140281460  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140283C70
#define PcClient__HasLoreItem_x                                    0x140284D00
#define PcZoneClient__GetItemRecastTimer_x                         0x140290C50
#define PcZoneClient__RemoveMyAffect_x                             0x140293310

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D48F0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D4960  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D4A70  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D49D0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020A980  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B1D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F5E90
#define PlayerBase__CanSee1_x                                      0x1405F5F60
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F6490
#define PlayerBase__HasProperty_x                                  0x1405F66B0
#define PlayerBase__IsTargetable_x                                 0x1405F6770
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029EF20
#define PlayerClient__GetPcClient_x                                0x1402A14B0
#define PlayerClient__PlayerClient_x                               0x140298110
#define PlayerClient__SetNameSpriteState_x                         0x1402A48E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A5880
#define PlayerZoneClient__ChangeHeight_x                           0x1402B36D0
#define PlayerZoneClient__DoAttack_x                               0x1402B43C0
#define PlayerZoneClient__GetLevel_x                               0x1402B7930
#define PlayerZoneClient__IsValidTeleport_x                        0x14020D730
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015EAC0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AD150  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AD180  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AD230
#define PlayerManagerClient__CreatePlayer_x                        0x1402ACB40
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F5B10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140265830
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140265430
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402654A0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402657C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140265950
#define KeypressHandler__HandleKeyUp_x                             0x140265A30
#define KeypressHandler__SaveKeymapping_x                          0x1402656D0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405AF9A0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405A9F50

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028A320  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028F2C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402911B0
#define PcZoneClient__RemovePetEffect_x                            0x140293410
#define PcZoneClient__HasAlternateAbility_x                        0x140291C30
#define PcZoneClient__CanEquipItem_x                               0x14028D690
#define PcZoneClient__GetItemByID_x                                0x140290200
#define PcZoneClient__RemoveBuffEffect_x                           0x1402931C0
#define PcZoneClient__BandolierSwap_x                              0x14028C850
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291100

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402121F0

// IconCache
#define IconCache__GetIcon_x                                       0x14035C070

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140352F10
#define CContainerMgr__CloseContainer_x                            0x1403528D0
#define CContainerMgr__OpenExperimentContainer_x                   0x140353270

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140430DE0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140258E70

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C49A0
#define CLootWnd__RequestLootSlot_x                                0x1403C5980

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A940
#define EQ_Spell__SpellAffects_x                                   0x14019BBE0
#define EQ_Spell__SpellAffectBase_x                                0x14019BB40
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA650
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA600
#define EQ_Spell__IsSPAStacking_x                                  0x14019B800
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B3C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019ACA0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092EA0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048A6A0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048A6E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140489BF0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404891A0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140491780  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147B80
#define CTaskManager__GetTaskStatus_x                              0x140147C90
#define CTaskManager__GetElementDescription_x                      0x140147810

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198CA0
#define EqSoundManager__PlayScriptMp3_x                            0x140197AA0
#define EqSoundManager__SoundAssistPlay_x                          0x1402D6C50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D6F80  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405452D0
#define CTextureAnimation__SetCurCell_x                            0x1405455E0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257130

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405C9C10
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405C9C90
#define CharacterBase__IsExpansionFlag_x                           0x1401B90D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140334210
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140334B50
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140335F90

// messages
#define msg_spell_worn_off_x                                       0x1401CC090
#define msg_new_text_x                                             0x1401C7EC0
#define __msgTokenTextParam_x                                      0x1401BFE40
#define msgTokenText_x                                             0x1401BFD60

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D8610
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D8530

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140604640

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BE470

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140358230
#define CCursorAttachment__AttachToCursor1_x                       0x140356E80
#define CCursorAttachment__Deactivate_x                            0x140358730

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140558560
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140558750
#define CEQSuiteTextureLoader__GetTexture_x                        0x140558760

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401130C0
#define CFindItemWnd__Update_x                                     0x1401132C0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E300

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BCE0
#define LootFiltersManager__GetItemFilterData_x                    0x14011C800
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011D0A0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D350

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404142D0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140608A10
#define CResolutionHandler__GetWindowedStyle_x                     0x1402CFFB0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034F4E0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CDA60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CDB70  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140371620
#define CGroupWnd__UpdateDisplay_x                                 0x1403713C0

// ItemBase
#define ItemBase__IsLore_x                                         0x140588BB0
#define ItemBase__IsLoreEquipped_x                                 0x140588D10

#define MultipleItemMoveManager__ProcessMove_x                     0x140277E00

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020AAE0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020AA70
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020AAB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CA9A0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF400
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF7B0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEBD0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEBD0
#define FactionManagerClient__GetMinFaction_x                      0x1400EEA80

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D8E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAAB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140178070
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177370
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177E90  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177E10  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DCD10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CA9A0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D4B60

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405576E0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056160

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EE2D0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D690

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
