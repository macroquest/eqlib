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

#define __ClientDate                                               20221207u
#define __ExpectedVersionDate                                     "Dec  7 2022"
#define __ExpectedVersionTime                                     "20:03:35"
#define __ActualVersionDate_x                                      0x1407A50C8
#define __ActualVersionTime_x                                      0x1407A50B8
#define __ActualVersionBuild_x                                     0x1407933B8

// Memory Protection
#define __MemChecker0_x                                            0x140273800
#define __MemChecker1_x                                            0x1405122C0
#define __MemChecker4_x                                            0x140243600
#define __EncryptPad0_x                                            0x140A4E610

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B89A90
#define instEQZoneInfo_x                                           0x140B89C84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401DEEA0
#define __gfMaxZoomCameraDistance_x                                0x14079B3F0
#define __gfMaxCameraDistance_x                                    0x1407D6198
#define __CurrentSocial_x                                          0x14090A900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A45F80
#define g_eqCommandStates_x                                        0x140A46FF0
#define __CommandList_x                                            0x140A47230
#define __ScreenMode_x                                             0x140AD106C
#define __gWorld_x                                                 0x140B82568
#define __gpbCommandEvent_x                                        0x140B81F8C
#define __ServerHost_x                                             0x140B82178
#define __Guilds_x                                                 0x140B88640
#define __MouseEventTime_x                                         0x140BF4EF8
#define DI8__Mouse_Check_x                                         0x140BF9B60
#define __heqmain_x                                                0x140BFC008
#define DI8__Mouse_x                                               0x140BFC020
#define __HWnd_x                                                   0x140BFC028
#define __Mouse_x                                                  0x140BF9054
#define DI8__Main_x                                                0x140BF90F0
#define DI8__Keyboard_x                                            0x140BF90F8
#define __LoginName_x                                              0x140BF97DC
#define __CurrentMapLabel_x                                        0x140C0EFC0
#define __LabelCache_x                                             0x140C0FBD0
#define __SubscriptionType_x                                       0x140C449C0
#define Teleport_Table_Size_x                                      0x140B82014
#define Teleport_Table_x                                           0x140B825A0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B849D0
#define pinstActiveBanker_x                                        0x140B824B0
#define pinstActiveCorpse_x                                        0x140B824A0
#define pinstActiveGMaster_x                                       0x140B824A8
#define pinstActiveMerchant_x                                      0x140B82498
#define pinstAltAdvManager_x                                       0x140AD21F8
#define pinstCEverQuest_x                                          0x140BF9058
#define pinstCamActor_x                                            0x140AD1058
#define pinstCDBStr_x                                              0x140AD1000
#define pinstCDisplay_x                                            0x140B82588
#define pinstControlledPlayer_x                                    0x140B82540
#define pinstCResolutionHandler_x                                  0x14127D560
#define pinstCSidlManager_x                                        0x140C20C10
#define pinstCXWndManager_x                                        0x140C20C18
#define instDynamicZone_x                                          0x140B88500 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B8854E
#define instExpeditionName_x                                       0x140B8858E
#define pinstDZMember_x                                            0x140B88618
#define pinstDZTimerInfo_x                                         0x140B88620
#define pinstEqLogin_x                                             0x140BF9120
#define instTribute_x                                              0x140A41800
#define pinstEQSoundManager_x                                      0x140AD2578
#define pinstEQSpellStrings_x                                      0x140AB5C30
#define pinstSGraphicsEngine_x                                     0x14127D2F8
#define pinstLocalPC_x                                             0x140B82580
#define pinstLocalPlayer_x                                         0x140B82490
#define pinstCMercenaryClientManager_x                             0x140BF67A8
#define pinstModelPlayer_x                                         0x140B824C0
#define pinstRenderInterface_x                                     0x14127D310
#define pinstSkillMgr_x                                            0x140BF8430
#define pinstSpawnManager_x                                        0x140BF6B60
#define pinstSpellManager_x                                        0x140BF8578
#define pinstStringTable_x                                         0x140B82590
#define pinstSwitchManager_x                                       0x140B81E90
#define pinstTarget_x                                              0x140B82538
#define pinstTaskMember_x                                          0x140A417F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B82548
#define pinstTradeTarget_x                                         0x140B824B8
#define instTributeActive_x                                        0x140A41829
#define pinstViewActor_x                                           0x140AD1050
#define pinstWorldData_x                                           0x140B849C0
#define pinstPlayerPath_x                                          0x140BF6B88
#define pinstTargetIndicator_x                                     0x140BF8628
#define EQObject_Top_x                                             0x140B82560

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C0C118
#define pinstCContainerMgr_x                                       0x140AD11A8
#define pinstCContextMenuManager_x                                 0x140C20BC0
#define pinstCInvSlotMgr_x                                         0x140AD1160
#define pinstCItemDisplayManager_x                                 0x140C0EB90
#define pinstCPopupWndManager_x                                    0x140C0F420
#define pinstCSpellDisplayMgr_x                                    0x140C0FAB0
#define pinstCTaskManager_x                                        0x14090AC40
#define pinstEQSuiteTextureLoader_x                                0x140A57CE0
#define pinstItemIconCache_x                                       0x140C0C478
#define pinstLootFiltersManager_x                                  0x140AD0A18

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401FDD40
#define __CastRay2_x                                               0x1401FDA50
#define __ConvertItemTags_x                                        0x1401FE140
#define __CleanItemTags_x                                          0x140058F80
#define __CreateCascadeMenuItems_x                                 0x140153B40
#define __DoesFileExist_x                                          0x140516AA0
#define __EQGetTime_x                                              0x140512870
#define __ExecuteCmd_x                                             0x1401D6DC0
#define __FixHeading_x                                             0x140615BF0
#define __FlushDxKeyboard_x                                        0x1402EEB50
#define __get_bearing_x                                            0x140207390
#define __get_melee_range_x                                        0x140207480
#define __GetAnimationCache_x                                      0x140365750
#define __GetGaugeValueFromEQ_x                                    0x14048A930
#define __GetLabelFromEQ_x                                         0x14048BEE0
#define __GetXTargetType_x                                         0x140616ED0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140615C70
#define __HelpPath_x                                               0x140BF4DC0   // Why?
#define __NewUIINI_x                                               0x140497090   // Why?
#define __ProcessGameEvents_x                                      0x140238E40
#define __ProcessKeyboardEvents_x                                  0x1402F0350
#define __ProcessMouseEvents_x                                     0x14023A270
#define __SaveColors_x                                             0x140163800
#define __STMLToText_x                                             0x140540700
#define __WndProc_x                                                0x1402ED2D0
#define CMemoryMappedFile__SetFile_x                               0x140751710
#define DrawNetStatus_x                                            0x1402813B0
#define Util__FastTime_x                                           0x140513570
#define __eq_delete_x                                              0x14061BD10
#define __eq_new_x                                                 0x14061BE0C
#define __CopyLayout_x                                             0x14026FCC0
#define __ThrottleFrameRate_x                                      0x140228BF1
#define __ThrottleFrameRateEnd_x                                   0x140228C51

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FF540
#define CAAWnd__Update_x                                           0x1402FF840
#define CAAWnd__UpdateSelected_x                                   0x140300800

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B9C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400741B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140782420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C230

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016E4F0
#define AltAdvManager__IsAbilityReady_x                            0x14016E770
#define AltAdvManager__GetAAById_x                                 0x14016DDC0
#define AltAdvManager__CanTrainAbility_x                           0x14016DBF0
#define AltAdvManager__CanSeeAbility_x                             0x14016D8B0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3F20
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4CD0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4EE0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8A80
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A57D0
#define CharacterZoneClient__CastSpell_x                           0x1400A5870
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4BF0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA0B0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA270
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8870
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C02B0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE740  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D60
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8000
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1DD0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0D00
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F30
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA20
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C290
#define CharacterZoneClient__GetHPRegen_x                          0x1400C1400
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9D60
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1FE0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9FB0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2A70
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA1C0
#define CharacterZoneClient__GetModCap_x                           0x1400C9E50
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA260
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA470
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F130
#define CharacterZoneClient__HasSkill_x                            0x1400C5680
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE780
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C98E0
#define CharacterZoneClient__Max_Endurance_x                       0x140299D70  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9C20
#define CharacterZoneClient__Max_Mana_x                            0x140299F60  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA0E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1C70
#define CharacterZoneClient__SpellDuration_x                       0x1400B2850
#define CharacterZoneClient__TotalEffect_x                         0x1400B3A30
#define CharacterZoneClient__UseSkill_x                            0x1400CF690


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14031D720

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403278E0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140323850
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403228E0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140329F90

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407E28E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14034A890
#define CChatWindowManager__InitContextMenu_x                      0x14034AA20
#define CChatWindowManager__FreeChatWindow_x                       0x140349AE0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403517B0
#define CChatWindowManager__CreateChatWindow_x                     0x140349420

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7570

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140352720
#define CChatWindow__Clear_x                                       0x140353530
#define CChatWindow__WndNotification_x                             0x1403546B0
#define CChatWindow__AddHistory_x                                  0x140353030

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405516A0
#define CContextMenu__RemoveMenuItem_x                             0x140551BC0
#define CContextMenu__RemoveAllMenuItems_x                         0x140551B90
#define CContextMenu__CheckMenuItem_x                              0x140551A00
#define CContextMenu__SetMenuItem_x                                0x140551BE0
#define CContextMenu__AddSeparator_x                               0x140551810

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140552230
#define CContextMenuManager__RemoveMenu_x                          0x1405527B0
#define CContextMenuManager__PopupMenu_x                           0x140552530
#define CContextMenuManager__Flush_x                               0x1405522B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035F7B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14059A030
#define CChatService__GetFriendName_x                              0x1405DEDD0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14054D820
#define CComboWnd__Draw_x                                          0x14054D920
#define CComboWnd__GetCurChoice_x                                  0x14054DC00  // unused
#define CComboWnd__GetListRect_x                                   0x14054DCA0
#define CComboWnd__InsertChoice_x                                  0x14054DFE0
#define CComboWnd__SetColors_x                                     0x14054E370
#define CComboWnd__SetChoice_x                                     0x14054E330
#define CComboWnd__GetItemCount_x                                  0x14054DC90
#define CComboWnd__GetCurChoiceText_x                              0x14054DC40  // unused
#define CComboWnd__GetChoiceText_x                                 0x14054DBD0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14054E0A0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14035D830
#define CContainerWnd__SetContainer_x                              0x14035E5E0
#define CContainerWnd__vftable_x                                   0x1407B3008

// CDisplay
#define CDisplay__cameraType_x                                     0x140AD1424
#define CDisplay__ZoneMainUI_x                                     0x140568E60
#define CDisplay__PreZoneMainUI_x                                  0x140160790
#define CDisplay__CleanGameUI_x                                    0x140152C40
#define CDisplay__GetClickedActor_x                                0x140156DD0
#define CDisplay__GetUserDefinedColor_x                            0x1401578B0
#define CDisplay__InitCharSelectUI_x                               0x140157B60
#define CDisplay__ReloadUI_x                                       0x140162AB0
#define CDisplay__WriteTextHD2_x                                   0x1401699E0
#define CDisplay__TrueDistance_x                                   0x1401696C0
#define CDisplay__SetViewActor_x                                   0x140165FF0
#define CDisplay__GetFloorHeight_x                                 0x140157030
#define CDisplay__ToggleScreenshotMode_x                           0x1401691D0
#define CDisplay__RealRender_World_x                               0x140161E60

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140574360
#define CEditWnd__DrawCaret_x                                      0x1405550F0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405555B0
#define CEditWnd__GetCaretPt_x                                     0x140555830  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140555870
#define CEditWnd__GetDisplayString_x                               0x140555AE0
#define CEditWnd__GetHorzOffset_x                                  0x140555D20
#define CEditWnd__GetLineForPrintableChar_x                        0x140555E70
#define CEditWnd__GetSelStartPt_x                                  0x140556150  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140555FA0
#define CEditWnd__PointFromPrintableChar_x                         0x140556D00
#define CEditWnd__ReplaceSelection_x                               0x1405570B0
#define CEditWnd__SelectableCharFromPoint_x                        0x140557550
#define CEditWnd__SetEditable_x                                    0x1405577E0
#define CEditWnd__SetWindowText_x                                  0x140557810

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140229BA0
#define CEverQuest__ClickedPlayer_x                                0x14021FD10
#define CEverQuest__CreateTargetIndicator_x                        0x140220470
#define CEverQuest__DoTellWindow_x                                 0x1400D7280 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7B40 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022B5D0
#define CEverQuest__dsp_chat_x                                     0x1400D6CC0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140254CD0
#define CEverQuest__Emote_x                                        0x14022BF30
#define CEverQuest__GetBodyTypeDesc_x                              0x14022CCD0
#define CEverQuest__GetClassDesc_x                                 0x14022CD30
#define CEverQuest__GetClassThreeLetterCode_x                      0x14022D100
#define CEverQuest__GetDeityDesc_x                                 0x14022D3B0
#define CEverQuest__GetLangDesc_x                                  0x14022D7E0
#define CEverQuest__GetRaceDesc_x                                  0x14022DB80
#define CEverQuest__InterpretCmd_x                                 0x14022F3E0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140243C80
#define CEverQuest__LMouseUp_x                                     0x140230D80
#define CEverQuest__RightClickedOnPlayer_x                         0x140241620
#define CEverQuest__RMouseUp_x                                     0x14023ADF0
#define CEverQuest__SetGameState_x                                 0x140246170
#define CEverQuest__UPCNotificationFlush_x                         0x14024B7E0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140230A00
#define CEverQuest__ReportSuccessfulHeal_x                         0x14023C120
#define CEverQuest__ReportSuccessfulHit_x                          0x14023CE60

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036FAD0

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094790
#define CGuild__GetGuildName_x                                     0x1400947D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140391830

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140265AD0
#define CHotButton__SetCheck_x                                     0x140265D60

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403A1650
#define CInvSlotMgr__MoveItem_x                                    0x1403A17A0
#define CInvSlotMgr__SelectSlot_x                                  0x1403A3190

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14039F2A0
#define CInvSlot__SliderComplete_x                                 0x1403A04D0
#define CInvSlot__GetItemBase_x                                    0x14039B380
#define CInvSlot__UpdateItem_x                                     0x1403A0930

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403A37F0
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403A4340

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403C3CD0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403C65F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403C0AF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403C2200
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403C3110

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140487610
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404891E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404C1E20

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403BD290

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117F70

// CLabel
#define CLabel__UpdateText_x                                       0x1403CD9B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405246F0
#define CListWnd__dCListWnd_x                                      0x140524B30
#define CListWnd__vftable_x                                        0x1407E1CD0
#define CListWnd__AddColumn_x                                      0x1405251D0
#define CListWnd__AddColumn1_x                                     0x140525270
#define CListWnd__AddLine_x                                        0x1405253D0
#define CListWnd__AddString_x                                      0x140525960
#define CListWnd__CalculateFirstVisibleLine_x                      0x140526060
#define CListWnd__CalculateVSBRange_x                              0x140526340
#define CListWnd__ClearSel_x                                       0x1405264E0
#define CListWnd__ClearAllSel_x                                    0x140526480
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140526540
#define CListWnd__Compare_x                                        0x140526700
#define CListWnd__Draw_x                                           0x140526BD0
#define CListWnd__DrawColumnSeparators_x                           0x140527770
#define CListWnd__DrawHeader_x                                     0x140527830
#define CListWnd__DrawItem_x                                       0x140527EF0
#define CListWnd__DrawLine_x                                       0x140528870
#define CListWnd__DrawSeparator_x                                  0x140528D30
#define CListWnd__EnableLine_x                                     0x140529150
#define CListWnd__EnsureVisible_x                                  0x1405291B0
#define CListWnd__ExtendSel_x                                      0x1405292B0
#define CListWnd__GetColumnMinWidth_x                              0x1405295E0
#define CListWnd__GetColumnWidth_x                                 0x140529660
#define CListWnd__GetCurSel_x                                      0x140529760
#define CListWnd__GetItemData_x                                    0x140529AE0
#define CListWnd__GetItemHeight_x                                  0x140529B20
#define CListWnd__GetItemRect_x                                    0x140529CE0
#define CListWnd__GetItemText_x                                    0x140529F80
#define CListWnd__GetSelList_x                                     0x14052A1D0
#define CListWnd__GetSeparatorRect_x                               0x14052A3C0
#define CListWnd__InsertLine_x                                     0x14052B830
#define CListWnd__RemoveLine_x                                     0x14052BE50
#define CListWnd__SetColors_x                                      0x14052C220
#define CListWnd__SetColumnJustification_x                         0x14052C240
#define CListWnd__SetColumnLabel_x                                 0x14052C2C0
#define CListWnd__SetColumnWidth_x                                 0x14052C460
#define CListWnd__SetCurSel_x                                      0x14052C530
#define CListWnd__SetItemColor_x                                   0x14052C7A0
#define CListWnd__SetItemData_x                                    0x14052C840
#define CListWnd__SetItemText_x                                    0x14052CA80
#define CListWnd__Sort_x                                           0x14052CE90
#define CListWnd__ToggleSel_x                                      0x14052D000
#define CListWnd__SetColumnsSizable_x                              0x14052C4B0
#define CListWnd__SetItemWnd_x                                     0x14052CBB0
#define CListWnd__GetItemWnd_x                                     0x14052A160
#define CListWnd__SetItemIcon_x                                    0x14052C880
#define CListWnd__CalculateCustomWindowPositions_x                 0x140525E30
#define CListWnd__SetVScrollPos_x                                  0x14052CDF0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403E0300

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407BE740
#define MapViewMap__Clear_x                                        0x1403E1E80
#define MapViewMap__SetZoom_x                                      0x1403E8440
#define MapViewMap__HandleLButtonDown_x                            0x1403E4F80

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404099A0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14040F560
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140411580
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404133A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404127C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140417150

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405BBB40
#define CPacketScrambler__hton_x                                   0x1405BBB30

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14054AEF0
#define CSidlManagerBase__FindAnimation1_x                         0x14054AE30
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14054B520
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14054B2D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14054A230
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14054A1C0
#define CSidlManagerBase__CreateXWnd_x                             0x140549800

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140479DE0
#define CSidlManager__CreateXWnd_x                                 0x140479FA0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405422A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140542170
#define CSidlScreenWnd__ConvertToRes_x                             0x14056E910 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405423C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140541A10
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140541960
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140541C30
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140542990
#define CSidlScreenWnd__EnableIniStorage_x                         0x140542BC0
#define CSidlScreenWnd__GetChildItem_x                             0x140542D60
#define CSidlScreenWnd__GetSidlPiece_x                             0x140542F80
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140534940 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405432F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140543660
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140543F00
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405447B0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C20A68
#define CSidlScreenWnd__StoreIniInfo_x                             0x140544DD0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405455C0
#define CSidlScreenWnd__vftable_x                                  0x1407E2D48
#define CSidlScreenWnd__WndNotification_x                          0x140545610

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D7A80 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D7E80 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D7DC0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D8220
#define CSkillMgr__IsCombatSkill_x                                 0x1402D8260

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140497100
#define CSliderWnd__SetValue_x                                     0x140553D70
#define CSliderWnd__SetNumTicks_x                                  0x140553BF0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404812B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14055C2C0
#define CStmlWnd__CalculateHSBRange_x                              0x140534310
#define CStmlWnd__CalculateVSBRange_x                              0x14055D1E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14055DC50
#define CStmlWnd__ForceParseNow_x                                  0x14055DCF0
#define CStmlWnd__GetVisibleText_x                                 0x14055E3D0
#define CStmlWnd__MakeStmlColorTag_x                               0x140560160
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405601A0
#define CStmlWnd__SetSTMLText_x                                    0x140567180
#define CStmlWnd__StripFirstSTMLLines_x                            0x140567330
#define CStmlWnd__UpdateHistoryString_x                            0x1405676C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140558DB0
#define CTabWnd__DrawCurrentPage_x                                 0x140558E50
#define CTabWnd__DrawTab_x                                         0x140559220
#define CTabWnd__GetTabRect_x                                      0x140559880
#define CTabWnd__InsertPage_x                                      0x140559B50
#define CTabWnd__RemovePage_x                                      0x140559DE0
#define CTabWnd__SetPage_x                                         0x140559F40
#define CTabWnd__UpdatePage_x                                      0x14055A240

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405589B0
#define CPageWnd__SetTabText_x                                     0x140558A20

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DCD0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E0E0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14052E160
#define CTextureFont__DrawWrappedText1_x                           0x14052E070
#define CTextureFont__DrawWrappedText2_x                           0x14052E290
#define CTextureFont__GetTextExtent_x                              0x14052E640
#define CTextureFont__GetHeight_x                                  0x14052E600

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14056D070

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140521360

// CXStr
#define CXStr__gFreeLists_x                                        0x140A57660
#define CXStr__gCXStrAccess_x                                      0x140C20028

// CXWnd
#define CXWnd__BringToTop_x                                        0x14052FBC0
#define CXWnd__ClrFocus_x                                          0x14052FE00
#define CXWnd__Destroy_x                                           0x14052FF40
#define CXWnd__DoAllDrawing_x                                      0x140530040
#define CXWnd__DrawColoredRect_x                                   0x1405307F0
#define CXWnd__DrawTooltip_x                                       0x140531E60
#define CXWnd__DrawTooltipAtPoint_x                                0x140531F10
#define CXWnd__GetChildItem_x                                      0x140532810
#define CXWnd__GetChildWndAt_x                                     0x1405328D0
#define CXWnd__GetClientClipRect_x                                 0x140532A40
#define CXWnd__GetRelativeRect_x                                   0x140534430
#define CXWnd__GetScreenClipRect_x                                 0x140534540
#define CXWnd__GetScreenRect_x                                     0x1405346C0
#define CXWnd__GetTooltipRect_x                                    0x140534840
#define CXWnd__IsActive_x                                          0x140534DC0
#define CXWnd__IsDescendantOf_x                                    0x140534DF0
#define CXWnd__IsReallyVisible_x                                   0x140534E60
#define CXWnd__IsType_x                                            0x140534EA0
#define CXWnd__Minimize_x                                          0x140534FA0
#define CXWnd__ProcessTransition_x                                 0x140535FE0
#define CXWnd__Refade_x                                            0x1405360E0
#define CXWnd__Resize_x                                            0x140536100
#define CXWnd__Right_x                                             0x1405361A0
#define CXWnd__SetFocus_x                                          0x140536560
#define CXWnd__SetFont_x                                           0x1405365B0
#define CXWnd__SetKeyTooltip_x                                     0x1405366C0
#define CXWnd__SetMouseOver_x                                      0x140536800
#define CXWnd__SetParent_x                                         0x140536880
#define CXWnd__StartFade_x                                         0x140536CC0
#define CXWnd__vftable_x                                           0x1407E2458
#define CXWnd__CXWnd_x                                             0x14052E760
#define CXWnd__dCXWnd_x                                            0x14052F090

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140573AE0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140538500
#define CXWndManager__DrawWindows_x                                0x140538630
#define CXWndManager__GetKeyboardFlags_x                           0x140538CF0
#define CXWndManager__HandleKeyboardMsg_x                          0x140538D30
#define CXWndManager__RemoveWnd_x                                  0x14053C180

// CDBStr
#define CDBStr__GetString_x                                        0x140150E50

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405C4A20

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1CF0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0A20
#define CCharacterListWnd__Quit_x                                  0x1400A1CD0
#define CCharacterListWnd__UpdateList_x                            0x1400A29F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140594E50
#define ItemBase__CreateItemTagString_x                            0x140595860
#define ItemBase__GetImageNum_x                                    0x140597A50
#define ItemBase__GetItemValue_x                                   0x140599610
#define ItemBase__IsEmpty_x                                        0x14059B170
#define ItemBase__IsKeyRingItem_x                                  0x14059B890
#define ItemBase__ValueSellMerchant_x                              0x14059FC90
#define ItemClient__CanDrop_x                                      0x140267EA0
#define ItemClient__CanGoInBag_x                                   0x140267FD0
#define ItemClient__CreateItemClient_x                             0x140268290
#define ItemClient__dItemClient_x                                  0x140267D00

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016FC90
#define EQ_LoadingS__Array_x                                       0x140A43A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405AB730
#define PcBase__GetCombatAbility_x                                 0x1405ABD80
#define PcBase__GetCombatAbilityTimer_x                            0x1405ABE20
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405AC530
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405ACDA0
#define PcClient__AlertInventoryChanged_x                          0x140288A10
#define PcClient__GetConLevel_x                                    0x140288F00  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x14028B7D0
#define PcClient__HasLoreItem_x                                    0x14028C840
#define PcZoneClient__GetItemRecastTimer_x                         0x140298710
#define PcZoneClient__RemoveMyAffect_x                             0x14029ADC0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401DB460  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401DB4D0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401DB5E0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401DB540  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x1402118D0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B760

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140608C10
#define PlayerBase__CanSee1_x                                      0x140608CE0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140609210
#define PlayerBase__HasProperty_x                                  0x140609430
#define PlayerBase__IsTargetable_x                                 0x1406094F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A6860
#define PlayerClient__GetPcClient_x                                0x1402A8DF0
#define PlayerClient__PlayerClient_x                               0x14029FBC0
#define PlayerClient__SetNameSpriteState_x                         0x1402AC220
#define PlayerClient__SetNameSpriteTint_x                          0x1402AD1C0
#define PlayerZoneClient__ChangeHeight_x                           0x1402BAD60
#define PlayerZoneClient__DoAttack_x                               0x1402BBA20
#define PlayerZoneClient__GetLevel_x                               0x1402BEF90
#define PlayerZoneClient__IsValidTeleport_x                        0x140214690
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015F030

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B4B50  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B4B80  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B4C30
#define PlayerManagerClient__CreatePlayer_x                        0x1402B4540
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140608890

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14026D200
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14026CE00
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14026CE70
#define KeypressHandler__ClearCommandStateArray_x                  0x14026D190  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14026D320
#define KeypressHandler__HandleKeyUp_x                             0x14026D400
#define KeypressHandler__SaveKeymapping_x                          0x14026D0A0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405C2630  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405BD1E0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140291D90  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140296D50
#define PcZoneClient__GetPcSkillLimit_x                            0x140298C70
#define PcZoneClient__RemovePetEffect_x                            0x14029AEC0
#define PcZoneClient__HasAlternateAbility_x                        0x1402996F0
#define PcZoneClient__CanEquipItem_x                               0x140295120
#define PcZoneClient__GetItemByID_x                                0x140297CC0
#define PcZoneClient__RemoveBuffEffect_x                           0x14029AC70
#define PcZoneClient__BandolierSwap_x                              0x1402942E0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140298BC0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140219150

// IconCache
#define IconCache__GetIcon_x                                       0x140365780

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14035C610
#define CContainerMgr__CloseContainer_x                            0x14035BFD0
#define CContainerMgr__OpenExperimentContainer_x                   0x14035C970

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140440F60

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402607F0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403D4540
#define CLootWnd__RequestLootSlot_x                                0x1403D54A0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019E650
#define EQ_Spell__SpellAffects_x                                   0x14019F900
#define EQ_Spell__SpellAffectBase_x                                0x14019F860
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA650
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA600
#define EQ_Spell__IsSPAStacking_x                                  0x14019F520
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019F0E0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019E9C0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400931C0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14049AE70  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14049AEB0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14049A3C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140499970

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404A2000  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140148100
#define CTaskManager__GetTaskStatus_x                              0x140148210
#define CTaskManager__GetElementDescription_x                      0x140147D90

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x14019C9B0
#define EqSoundManager__PlayScriptMp3_x                            0x14019B7B0
#define EqSoundManager__SoundAssistPlay_x                          0x1402DE280  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DE5B0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140558010
#define CTextureAnimation__SetCurCell_x                            0x140558320

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025EAB0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405DC8F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405DC970
#define CharacterBase__IsExpansionFlag_x                           0x1401BE0D0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14033C980
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14033D2C0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033E700

// messages
#define msg_spell_worn_off_x                                       0x1401D2060
#define msg_new_text_x                                             0x1401CDAC0
#define __msgTokenTextParam_x                                      0x1401C5910
#define msgTokenText_x                                             0x1401C5830

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DFC40
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DFB60

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406172B0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403CE0F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140361920
#define CCursorAttachment__AttachToCursor1_x                       0x140360570
#define CCursorAttachment__Deactivate_x                            0x140361E20

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14056B2D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14056B4C0
#define CEQSuiteTextureLoader__GetTexture_x                        0x14056B4D0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401133E0
#define CFindItemWnd__Update_x                                     0x140113BB0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E2F0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011C730
#define LootFiltersManager__GetItemFilterData_x                    0x14011D250
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011DAF0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011DDA0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404243D0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14061B680
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D75E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140358BE0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405E0850  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405E0740  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x14037AEB0
#define CGroupWnd__UpdateDisplay_x                                 0x14037AC50

// ItemBase
#define ItemBase__IsLore_x                                         0x14059B960
#define ItemBase__IsLoreEquipped_x                                 0x14059BAC0

#define MultipleItemMoveManager__ProcessMove_x                     0x14027F7F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140211A30
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402119C0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140211A00

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D2030

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF370
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF720
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEB40
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEB40
#define FactionManagerClient__GetMinFaction_x                      0x1400EE9F0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DD30

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAA20

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140178500
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177880
#define CAltAbilityData__GetMercCurrentRank_x                      0x140178320  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401782A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E4330

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D2030

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401DB6D0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056A450

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056110

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F5590

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D9C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
