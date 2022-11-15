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

#define __ClientDate                                               20221024u
#define __ExpectedVersionDate                                     "Oct 24 2022"
#define __ExpectedVersionTime                                     "10:24:27"
#define __ActualVersionDate_x                                      0x140799BA8
#define __ActualVersionTime_x                                      0x140799B98
#define __ActualVersionBuild_x                                     0x140787E08

// Memory Protection
#define __MemChecker0_x                                            0x14026F2C0
#define __MemChecker1_x                                            0x140507740
#define __MemChecker4_x                                            0x14023F030
#define __EncryptPad0_x                                            0x140A415F0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7C9B0
#define instEQZoneInfo_x                                           0x140B7CBA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D9BD0
#define __gfMaxZoomCameraDistance_x                                0x14078FED0
#define __gfMaxCameraDistance_x                                    0x1407CAB78
#define __CurrentSocial_x                                          0x1408FD900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A38F80
#define g_eqCommandStates_x                                        0x140A39FE0
#define __CommandList_x                                            0x140A3A220
#define __ScreenMode_x                                             0x140AC4554
#define __gWorld_x                                                 0x140B75398
#define __gpbCommandEvent_x                                        0x140B77864
#define __ServerHost_x                                             0x140B74F98
#define __Guilds_x                                                 0x140B7B560
#define __MouseEventTime_x                                         0x140BE7E20
#define DI8__Mouse_Check_x                                         0x140BECA80
#define __heqmain_x                                                0x140BEEF28
#define DI8__Mouse_x                                               0x140BEEF40
#define __HWnd_x                                                   0x140BEEF48
#define __Mouse_x                                                  0x140BEBF78
#define DI8__Main_x                                                0x140BEC010
#define DI8__Keyboard_x                                            0x140BEC018
#define __LoginName_x                                              0x140BEC6FC
#define __CurrentMapLabel_x                                        0x140C01C90
#define __LabelCache_x                                             0x140C028A0
#define __SubscriptionType_x                                       0x140C376B0
#define Teleport_Table_Size_x                                      0x140B74E34
#define Teleport_Table_x                                           0x140B753C0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B778F0
#define pinstActiveBanker_x                                        0x140B752D0
#define pinstActiveCorpse_x                                        0x140B752C0
#define pinstActiveGMaster_x                                       0x140B752C8
#define pinstActiveMerchant_x                                      0x140B752B8
#define pinstAltAdvManager_x                                       0x140AC5158
#define pinstCEverQuest_x                                          0x140BEBF70
#define pinstCamActor_x                                            0x140AC4540
#define pinstCDBStr_x                                              0x140AC3F60
#define pinstCDisplay_x                                            0x140B753A8
#define pinstControlledPlayer_x                                    0x140B75360
#define pinstCResolutionHandler_x                                  0x141270250
#define pinstCSidlManager_x                                        0x140C13900
#define pinstCXWndManager_x                                        0x140C13908
#define instDynamicZone_x                                          0x140B7B420 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B7B46E
#define instExpeditionName_x                                       0x140B7B4AE
#define pinstDZMember_x                                            0x140B7B538
#define pinstDZTimerInfo_x                                         0x140B7B540
#define pinstEqLogin_x                                             0x140BEC040
#define instTribute_x                                              0x140A34800
#define pinstEQSoundManager_x                                      0x140AC5498
#define pinstEQSpellStrings_x                                      0x140AA8B90
#define pinstSGraphicsEngine_x                                     0x14126FFE8
#define pinstLocalPC_x                                             0x140B753A0
#define pinstLocalPlayer_x                                         0x140B752B0
#define pinstCMercenaryClientManager_x                             0x140BE96C8
#define pinstModelPlayer_x                                         0x140B752E0
#define pinstRenderInterface_x                                     0x141270000
#define pinstSkillMgr_x                                            0x140BEB350
#define pinstSpawnManager_x                                        0x140BE9A80
#define pinstSpellManager_x                                        0x140BEB498
#define pinstStringTable_x                                         0x140B753B0
#define pinstSwitchManager_x                                       0x140B74DB0
#define pinstTarget_x                                              0x140B75358
#define pinstTaskMember_x                                          0x140A347F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B75368
#define pinstTradeTarget_x                                         0x140B752D8
#define instTributeActive_x                                        0x140A34829
#define pinstViewActor_x                                           0x140AC4538
#define pinstWorldData_x                                           0x140B77858
#define pinstPlayerPath_x                                          0x140BE9AA8
#define pinstTargetIndicator_x                                     0x140BEB548
#define EQObject_Top_x                                             0x140B75380

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BFEDF8
#define pinstCContainerMgr_x                                       0x140AC4068
#define pinstCContextMenuManager_x                                 0x140C138B0
#define pinstCInvSlotMgr_x                                         0x140AC4050
#define pinstCItemDisplayManager_x                                 0x140C01860
#define pinstCPopupWndManager_x                                    0x140C020F0
#define pinstCSpellDisplayMgr_x                                    0x140C02780
#define pinstCTaskManager_x                                        0x1408FDC40
#define pinstEQSuiteTextureLoader_x                                0x140A4AC50
#define pinstItemIconCache_x                                       0x140BFF158
#define pinstLootFiltersManager_x                                  0x140AC3978

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F8A60
#define __CastRay2_x                                               0x1401F8770
#define __ConvertItemTags_x                                        0x1401F8E60
#define __CleanItemTags_x                                          0x140058EB0
#define __CreateCascadeMenuItems_x                                 0x140152D40
#define __DoesFileExist_x                                          0x14050BF20
#define __EQGetTime_x                                              0x140507CF0
#define __ExecuteCmd_x                                             0x1401D1B30
#define __FixHeading_x                                             0x14060AD60
#define __FlushDxKeyboard_x                                        0x1402EA8A0
#define __get_bearing_x                                            0x140202090
#define __get_melee_range_x                                        0x140202180
#define __GetAnimationCache_x                                      0x1403614E0
#define __GetGaugeValueFromEQ_x                                    0x140480D80
#define __GetLabelFromEQ_x                                         0x140482330
#define __GetXTargetType_x                                         0x14060C0A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14060ADE0
#define __HelpPath_x                                               0x140BE7CE8   // Why?
#define __NewUIINI_x                                               0x14048D4E0   // Why?
#define __ProcessGameEvents_x                                      0x140234870
#define __ProcessKeyboardEvents_x                                  0x1402EC0A0
#define __ProcessMouseEvents_x                                     0x140235CA0
#define __SaveColors_x                                             0x1401629C0
#define __STMLToText_x                                             0x140535AD0
#define __WndProc_x                                                0x1402E9020
#define CMemoryMappedFile__SetFile_x                               0x1407468E0
#define DrawNetStatus_x                                            0x14027CE60
#define Util__FastTime_x                                           0x1405089F0
#define __eq_delete_x                                              0x140610EE0
#define __eq_new_x                                                 0x140610FDC
#define __CopyLayout_x                                             0x14026B770
#define __ThrottleFrameRate_x                                      0x140224640
#define __ThrottleFrameRateEnd_x                                   0x1402246A0

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB530
#define CAAWnd__Update_x                                           0x1402FB830
#define CAAWnd__UpdateSelected_x                                   0x1402FC7F0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B8D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740E0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140777400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C140

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016D6E0
#define AltAdvManager__IsAbilityReady_x                            0x14016D960
#define AltAdvManager__GetAAById_x                                 0x14016CFB0
#define AltAdvManager__CanTrainAbility_x                           0x14016CDE0
#define AltAdvManager__CanSeeAbility_x                             0x14016CAA0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3D80
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4B30
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4D40
#define CharacterZoneClient__CanUseItem_x                          0x1400B88F0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5630
#define CharacterZoneClient__CastSpell_x                           0x1400A56D0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4A60
#define CharacterZoneClient__Cur_HP_x                              0x1400B9F20
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA0E0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A86D0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFB80
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE5E0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9BC0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7E70
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C16A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C05D0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9D90
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009A8D0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C140
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0CD0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9BD0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C18B0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9E10
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2340
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA020
#define CharacterZoneClient__GetModCap_x                           0x1400C9CF0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA0C0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA2D0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009EFE0
#define CharacterZoneClient__HasSkill_x                            0x1400C5520
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE5F0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9780
#define CharacterZoneClient__Max_Endurance_x                       0x1402957B0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9AC0
#define CharacterZoneClient__Max_Mana_x                            0x1402959A0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400C9F80
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1AE0
#define CharacterZoneClient__SpellDuration_x                       0x1400B26C0
#define CharacterZoneClient__TotalEffect_x                         0x1400B38A0
#define CharacterZoneClient__UseSkill_x                            0x1400CF530


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140319650

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140323770

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031F710
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031E7B0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140325E20

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D72C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140346670
#define CChatWindowManager__InitContextMenu_x                      0x140346800
#define CChatWindowManager__FreeChatWindow_x                       0x1403458C0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034D590
#define CChatWindowManager__CreateChatWindow_x                     0x140345200

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7330

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034E500
#define CChatWindow__Clear_x                                       0x14034F310
#define CChatWindow__WndNotification_x                             0x140350490
#define CChatWindow__AddHistory_x                                  0x14034EE10

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140546A00
#define CContextMenu__RemoveMenuItem_x                             0x140546F10
#define CContextMenu__RemoveAllMenuItems_x                         0x140546EE0
#define CContextMenu__CheckMenuItem_x                              0x140546D50
#define CContextMenu__SetMenuItem_x                                0x140546F30
#define CContextMenu__AddSeparator_x                               0x140546B60

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140547580
#define CContextMenuManager__RemoveMenu_x                          0x140547B00
#define CContextMenuManager__PopupMenu_x                           0x140547880
#define CContextMenuManager__Flush_x                               0x140547600
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035B560

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D3ED0
#define CChatService__GetFriendName_x                              0x1405D3EE0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140542BC0
#define CComboWnd__Draw_x                                          0x140542CC0
#define CComboWnd__GetCurChoice_x                                  0x140542FA0  // unused
#define CComboWnd__GetListRect_x                                   0x140543040
#define CComboWnd__InsertChoice_x                                  0x140543370
#define CComboWnd__SetColors_x                                     0x140543700
#define CComboWnd__SetChoice_x                                     0x1405436C0
#define CComboWnd__GetItemCount_x                                  0x140543030
#define CComboWnd__GetCurChoiceText_x                              0x140542FE0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140542F70
#define CComboWnd__InsertChoiceAtIndex_x                           0x140543430

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403595E0
#define CContainerWnd__SetContainer_x                              0x14035A380
#define CContainerWnd__vftable_x                                   0x1407A7AD8

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC42D4
#define CDisplay__ZoneMainUI_x                                     0x14055E180
#define CDisplay__PreZoneMainUI_x                                  0x14015F940
#define CDisplay__CleanGameUI_x                                    0x140151E40
#define CDisplay__GetClickedActor_x                                0x140155FD0
#define CDisplay__GetUserDefinedColor_x                            0x140156AB0
#define CDisplay__InitCharSelectUI_x                               0x140156D60
#define CDisplay__ReloadUI_x                                       0x140161C70
#define CDisplay__WriteTextHD2_x                                   0x140168BC0
#define CDisplay__TrueDistance_x                                   0x1401688A0
#define CDisplay__SetViewActor_x                                   0x1401651B0
#define CDisplay__GetFloorHeight_x                                 0x140156230
#define CDisplay__ToggleScreenshotMode_x                           0x1401683A0
#define CDisplay__RealRender_World_x                               0x140161010

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140569690
#define CEditWnd__DrawCaret_x                                      0x14054A450  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054A910
#define CEditWnd__GetCaretPt_x                                     0x14054AB90  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14054ABD0
#define CEditWnd__GetDisplayString_x                               0x14054AE40
#define CEditWnd__GetHorzOffset_x                                  0x14054B080
#define CEditWnd__GetLineForPrintableChar_x                        0x14054B1D0
#define CEditWnd__GetSelStartPt_x                                  0x14054B4B0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14054B300
#define CEditWnd__PointFromPrintableChar_x                         0x14054C060
#define CEditWnd__ReplaceSelection_x                               0x14054C410
#define CEditWnd__SelectableCharFromPoint_x                        0x14054C8B0
#define CEditWnd__SetEditable_x                                    0x14054CB40
#define CEditWnd__SetWindowText_x                                  0x14054CB70

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402255F0
#define CEverQuest__ClickedPlayer_x                                0x14021B820
#define CEverQuest__CreateTargetIndicator_x                        0x14021BF80
#define CEverQuest__DoTellWindow_x                                 0x1400D7040 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7900 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140227020
#define CEverQuest__dsp_chat_x                                     0x1400D6B60 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402507A0
#define CEverQuest__Emote_x                                        0x140227980
#define CEverQuest__GetBodyTypeDesc_x                              0x140228720
#define CEverQuest__GetClassDesc_x                                 0x140228780
#define CEverQuest__GetClassThreeLetterCode_x                      0x140228B50
#define CEverQuest__GetDeityDesc_x                                 0x140228E00
#define CEverQuest__GetLangDesc_x                                  0x140229230
#define CEverQuest__GetRaceDesc_x                                  0x1402295D0
#define CEverQuest__InterpretCmd_x                                 0x14022AE30
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023F6B0
#define CEverQuest__LMouseUp_x                                     0x14022C7D0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023D050
#define CEverQuest__RMouseUp_x                                     0x140236820
#define CEverQuest__SetGameState_x                                 0x140241BA0
#define CEverQuest__UPCNotificationFlush_x                         0x1402472B0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022C450
#define CEverQuest__ReportSuccessfulHeal_x                         0x140237B50
#define CEverQuest__ReportSuccessfulHit_x                          0x140238890

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036B810

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094640
#define CGuild__GetGuildName_x                                     0x140094680

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140388070

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140261590
#define CHotButton__SetCheck_x                                     0x140261820

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140397CC0
#define CInvSlotMgr__MoveItem_x                                    0x140397E10
#define CInvSlotMgr__SelectSlot_x                                  0x140399800

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140395920
#define CInvSlot__SliderComplete_x                                 0x140396B50
#define CInvSlot__GetItemBase_x                                    0x140391A00
#define CInvSlot__UpdateItem_x                                     0x140396FB0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140399E50
#define CInvSlotWnd__HandleLButtonUp_x                             0x14039A9A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403BA2C0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403BCBE0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B7130
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B87F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B9700

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14047DA70
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047F640

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B71F0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403B38D0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117210

// CLabel
#define CLabel__UpdateText_x                                       0x1403C3FB0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140519B70
#define CListWnd__dCListWnd_x                                      0x140519FB0
#define CListWnd__vftable_x                                        0x1407D66B0
#define CListWnd__AddColumn_x                                      0x14051A650
#define CListWnd__AddColumn1_x                                     0x14051A6F0
#define CListWnd__AddLine_x                                        0x14051A850
#define CListWnd__AddString_x                                      0x14051ADD0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14051B4C0
#define CListWnd__CalculateVSBRange_x                              0x14051B7A0
#define CListWnd__ClearSel_x                                       0x14051B940
#define CListWnd__ClearAllSel_x                                    0x14051B8E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14051B9A0
#define CListWnd__Compare_x                                        0x14051BB50
#define CListWnd__Draw_x                                           0x14051C020
#define CListWnd__DrawColumnSeparators_x                           0x14051CBC0
#define CListWnd__DrawHeader_x                                     0x14051CC80
#define CListWnd__DrawItem_x                                       0x14051D340
#define CListWnd__DrawLine_x                                       0x14051DCC0
#define CListWnd__DrawSeparator_x                                  0x14051E180
#define CListWnd__EnableLine_x                                     0x14051E5A0
#define CListWnd__EnsureVisible_x                                  0x14051E600
#define CListWnd__ExtendSel_x                                      0x14051E700
#define CListWnd__GetColumnMinWidth_x                              0x14051EA30
#define CListWnd__GetColumnWidth_x                                 0x14051EAB0
#define CListWnd__GetCurSel_x                                      0x14051EBB0
#define CListWnd__GetItemData_x                                    0x14051EF30
#define CListWnd__GetItemHeight_x                                  0x14051EF70
#define CListWnd__GetItemRect_x                                    0x14051F130
#define CListWnd__GetItemText_x                                    0x14051F3D0
#define CListWnd__GetSelList_x                                     0x14051F620
#define CListWnd__GetSeparatorRect_x                               0x14051F810
#define CListWnd__InsertLine_x                                     0x140520C80
#define CListWnd__RemoveLine_x                                     0x140521290
#define CListWnd__SetColors_x                                      0x140521660
#define CListWnd__SetColumnJustification_x                         0x140521680
#define CListWnd__SetColumnLabel_x                                 0x140521700
#define CListWnd__SetColumnWidth_x                                 0x1405218A0
#define CListWnd__SetCurSel_x                                      0x140521970
#define CListWnd__SetItemColor_x                                   0x140521BE0
#define CListWnd__SetItemData_x                                    0x140521C80
#define CListWnd__SetItemText_x                                    0x140521EC0
#define CListWnd__Sort_x                                           0x1405222D0
#define CListWnd__ToggleSel_x                                      0x140522440
#define CListWnd__SetColumnsSizable_x                              0x1405218F0
#define CListWnd__SetItemWnd_x                                     0x140521FF0
#define CListWnd__GetItemWnd_x                                     0x14051F5B0
#define CListWnd__SetItemIcon_x                                    0x140521CC0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14051B290
#define CListWnd__SetVScrollPos_x                                  0x140522230

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D6A00

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407B3170
#define MapViewMap__Clear_x                                        0x1403D8580
#define MapViewMap__SetZoom_x                                      0x1403DEB40
#define MapViewMap__HandleLButtonDown_x                            0x1403DB680

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FFFC0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140405B70
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140407B90
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404099A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140408DC0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14040D750

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405B0FC0
#define CPacketScrambler__hton_x                                   0x1405B0FB0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140540290
#define CSidlManagerBase__FindAnimation1_x                         0x1405401D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405408C0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140540670
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053F5D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053F560
#define CSidlManagerBase__CreateXWnd_x                             0x14053EBC0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140470290
#define CSidlManager__CreateXWnd_x                                 0x140470450

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140537660
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140537540
#define CSidlScreenWnd__ConvertToRes_x                             0x140563C40 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140537780
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140536DE0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140536D30
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140537000
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140537D50
#define CSidlScreenWnd__EnableIniStorage_x                         0x140537F80
#define CSidlScreenWnd__GetChildItem_x                             0x140538120
#define CSidlScreenWnd__GetSidlPiece_x                             0x140538340
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140529DA0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405386B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140538A20
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405392D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140539B80
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C13758
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053A190
#define CSidlScreenWnd__StoreIniVis_x                              0x14053A980
#define CSidlScreenWnd__vftable_x                                  0x1407D7728
#define CSidlScreenWnd__WndNotification_x                          0x14053A9D0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D37E0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D3BE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D3B20
#define CSkillMgr__IsActivatedSkill_x                              0x1402D3F80
#define CSkillMgr__IsCombatSkill_x                                 0x1402D3FC0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405488C0
#define CSliderWnd__SetValue_x                                     0x1405490D0
#define CSliderWnd__SetNumTicks_x                                  0x140548F50

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140477740

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140551620
#define CStmlWnd__CalculateHSBRange_x                              0x140529750
#define CStmlWnd__CalculateVSBRange_x                              0x140552540
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140552FA0
#define CStmlWnd__ForceParseNow_x                                  0x140553040
#define CStmlWnd__GetVisibleText_x                                 0x140553720
#define CStmlWnd__MakeStmlColorTag_x                               0x1405554A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405554E0
#define CStmlWnd__SetSTMLText_x                                    0x14055C4C0
#define CStmlWnd__StripFirstSTMLLines_x                            0x14055C670
#define CStmlWnd__UpdateHistoryString_x                            0x14055CA00

// CTabWnd
#define CTabWnd__Draw_x                                            0x14054E110
#define CTabWnd__DrawCurrentPage_x                                 0x14054E1B0
#define CTabWnd__DrawTab_x                                         0x14054E580
#define CTabWnd__GetTabRect_x                                      0x14054EBE0
#define CTabWnd__InsertPage_x                                      0x14054EEB0
#define CTabWnd__RemovePage_x                                      0x14054F140
#define CTabWnd__SetPage_x                                         0x14054F2A0
#define CTabWnd__UpdatePage_x                                      0x14054F5A0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14054DD10
#define CPageWnd__SetTabText_x                                     0x14054DD80

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DB80  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DF90


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140523590
#define CTextureFont__DrawWrappedText1_x                           0x1405234A0
#define CTextureFont__DrawWrappedText2_x                           0x1405236C0
#define CTextureFont__GetTextExtent_x                              0x140523A70
#define CTextureFont__GetHeight_x                                  0x140523A30

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405623A0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405167E0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A4A5D0
#define CXStr__gCXStrAccess_x                                      0x140C12D18

// CXWnd
#define CXWnd__BringToTop_x                                        0x140524FE0
#define CXWnd__ClrFocus_x                                          0x140525220
#define CXWnd__Destroy_x                                           0x140525360
#define CXWnd__DoAllDrawing_x                                      0x140525460
#define CXWnd__DrawColoredRect_x                                   0x140525C20
#define CXWnd__DrawTooltip_x                                       0x140527290
#define CXWnd__DrawTooltipAtPoint_x                                0x140527340
#define CXWnd__GetChildItem_x                                      0x140527C40
#define CXWnd__GetChildWndAt_x                                     0x140527D00
#define CXWnd__GetClientClipRect_x                                 0x140527E70
#define CXWnd__GetRelativeRect_x                                   0x140529890
#define CXWnd__GetScreenClipRect_x                                 0x1405299A0
#define CXWnd__GetScreenRect_x                                     0x140529B20
#define CXWnd__GetTooltipRect_x                                    0x140529CA0
#define CXWnd__IsActive_x                                          0x14052A220
#define CXWnd__IsDescendantOf_x                                    0x14052A250
#define CXWnd__IsReallyVisible_x                                   0x14052A2B0
#define CXWnd__IsType_x                                            0x14052A2F0
#define CXWnd__Minimize_x                                          0x14052A3F0
#define CXWnd__ProcessTransition_x                                 0x14052B420
#define CXWnd__Refade_x                                            0x14052B520
#define CXWnd__Resize_x                                            0x14052B540
#define CXWnd__Right_x                                             0x14052B5E0
#define CXWnd__SetFocus_x                                          0x14052B990
#define CXWnd__SetFont_x                                           0x14052B9E0
#define CXWnd__SetKeyTooltip_x                                     0x14052BAE0
#define CXWnd__SetMouseOver_x                                      0x14052BC20
#define CXWnd__SetParent_x                                         0x14052BCA0
#define CXWnd__StartFade_x                                         0x14052C0D0
#define CXWnd__vftable_x                                           0x1407D6E38
#define CXWnd__CXWnd_x                                             0x140523B90
#define CXWnd__dCXWnd_x                                            0x1405244C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140568E10

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14052D8E0
#define CXWndManager__DrawWindows_x                                0x14052DA10
#define CXWndManager__GetKeyboardFlags_x                           0x14052E0D0
#define CXWndManager__HandleKeyboardMsg_x                          0x14052E110
#define CXWndManager__RemoveWnd_x                                  0x140531560

// CDBStr
#define CDBStr__GetString_x                                        0x140150040

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B9EB0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1B60
#define CCharacterListWnd__EnterWorld_x                            0x1400A0890
#define CCharacterListWnd__Quit_x                                  0x1400A1B40
#define CCharacterListWnd__UpdateList_x                            0x1400A2860

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058A180
#define ItemBase__CreateItemTagString_x                            0x14058AB90
#define ItemBase__GetImageNum_x                                    0x14058CD80
#define ItemBase__GetItemValue_x                                   0x14058EC90
#define ItemBase__IsEmpty_x                                        0x1405907D0
#define ItemBase__IsKeyRingItem_x                                  0x140590EF0
#define ItemBase__ValueSellMerchant_x                              0x140595270
#define ItemClient__CanDrop_x                                      0x140263950
#define ItemClient__CanGoInBag_x                                   0x140263A80
#define ItemClient__CreateItemClient_x                             0x140263D40
#define ItemClient__dItemClient_x                                  0x1402637B0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016EE80
#define EQ_LoadingS__Array_x                                       0x140A36A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A0C90
#define PcBase__GetCombatAbility_x                                 0x1405A12E0
#define PcBase__GetCombatAbilityTimer_x                            0x1405A1380
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A1A90
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A22F0
#define PcClient__AlertInventoryChanged_x                          0x1402844B0
#define PcClient__GetConLevel_x                                    0x140284980  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140287250
#define PcClient__HasLoreItem_x                                    0x1402882D0
#define PcZoneClient__GetItemRecastTimer_x                         0x140294150
#define PcZoneClient__RemoveMyAffect_x                             0x140296800

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D6190  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D6200  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D6310  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D6270  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020D330  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014A960

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405FDCB0
#define PlayerBase__CanSee1_x                                      0x1405FDD80
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405FE2B0
#define PlayerBase__HasProperty_x                                  0x1405FE4D0
#define PlayerBase__IsTargetable_x                                 0x1405FE590
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A23D0
#define PlayerClient__GetPcClient_x                                0x1402A4960
#define PlayerClient__PlayerClient_x                               0x14029B600
#define PlayerClient__SetNameSpriteState_x                         0x1402A7D90
#define PlayerClient__SetNameSpriteTint_x                          0x1402A8D30
#define PlayerZoneClient__ChangeHeight_x                           0x1402B6A20
#define PlayerZoneClient__DoAttack_x                               0x1402B7700
#define PlayerZoneClient__GetLevel_x                               0x1402BAC80
#define PlayerZoneClient__IsValidTeleport_x                        0x1402100E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E1E0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B06C0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B06F0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B07A0
#define PlayerManagerClient__CreatePlayer_x                        0x1402B00B0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FD930

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140268CB0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402688B0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140268920
#define KeypressHandler__ClearCommandStateArray_x                  0x140268C40  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140268DD0
#define KeypressHandler__HandleKeyUp_x                             0x140268EB0
#define KeypressHandler__SaveKeymapping_x                          0x140268B50  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B7AB0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B2660

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028D7F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140292790
#define PcZoneClient__GetPcSkillLimit_x                            0x1402946B0
#define PcZoneClient__RemovePetEffect_x                            0x140296900
#define PcZoneClient__HasAlternateAbility_x                        0x140295130
#define PcZoneClient__CanEquipItem_x                               0x140290B60
#define PcZoneClient__GetItemByID_x                                0x140293700
#define PcZoneClient__RemoveBuffEffect_x                           0x1402966B0
#define PcZoneClient__BandolierSwap_x                              0x14028FD20
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140294600

// Doors
#define EQSwitch__UseSwitch_x                                      0x140214BA0

// IconCache
#define IconCache__GetIcon_x                                       0x140361510

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403583C0
#define CContainerMgr__CloseContainer_x                            0x140357D80
#define CContainerMgr__OpenExperimentContainer_x                   0x140358720

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404374E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025C2C0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403CAC10
#define CLootWnd__RequestLootSlot_x                                0x1403CBBF0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140199ED0
#define EQ_Spell__SpellAffects_x                                   0x14019B170
#define EQ_Spell__SpellAffectBase_x                                0x14019B0D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA4B0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA460
#define EQ_Spell__IsSPAStacking_x                                  0x14019AD90
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019A950
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019A230

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140093070

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404912A0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404912E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404907F0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048FDA0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404983B0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147320
#define CTaskManager__GetTaskStatus_x                              0x140147430
#define CTaskManager__GetElementDescription_x                      0x140146FB0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198230
#define EqSoundManager__PlayScriptMp3_x                            0x140197030
#define EqSoundManager__SoundAssistPlay_x                          0x1402D9FE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DA310  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14054D370
#define CTextureAnimation__SetCurCell_x                            0x14054D680

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025A580

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D19F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D1A70
#define CharacterBase__IsExpansionFlag_x                           0x1401B9700

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403387B0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403390D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033A500

// messages
#define msg_spell_worn_off_x                                       0x1401CD280
#define msg_new_text_x                                             0x1401C8CF0
#define __msgTokenTextParam_x                                      0x1401C0B40
#define msgTokenText_x                                             0x1401C0A60

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DB9A0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DB8C0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14060C480

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C46F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035D6E0
#define CCursorAttachment__AttachToCursor1_x                       0x14035C330
#define CCursorAttachment__Deactivate_x                            0x14035DBE0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405605F0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405607E0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405607F0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112DB0
#define CFindItemWnd__Update_x                                     0x140112FB0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E020

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011B9C0
#define LootFiltersManager__GetItemFilterData_x                    0x14011C4E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CD80
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D030

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14041A9D0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140610850
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D3350

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403549B0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D5960  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D5850  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140376BD0
#define CGroupWnd__UpdateDisplay_x                                 0x140376970

// ItemBase
#define ItemBase__IsLore_x                                         0x140590FC0
#define ItemBase__IsLoreEquipped_x                                 0x140591120

#define MultipleItemMoveManager__ProcessMove_x                     0x14027B2B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020D490
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020D420
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020D460

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CDD00

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF110
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF4C0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EE8E0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EE8E0
#define FactionManagerClient__GetMinFaction_x                      0x1400EE790

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC30

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA7D0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401776E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140176A60
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177500  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177480  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E0090

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CDD00

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D6400

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055F770

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F15D0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
