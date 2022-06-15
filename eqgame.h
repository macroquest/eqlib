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

#define __ClientDate                                               20220613u
#define __ExpectedVersionDate                                     "Jun 13 2022"
#define __ExpectedVersionTime                                     "11:08:39"
#define __ActualVersionDate_x                                      0x140790380
#define __ActualVersionTime_x                                      0x140790370
#define __ActualVersionBuild_x                                     0x14077E588

// Memory Protection
#define __MemChecker0_x                                            0x14026C0D0
#define __MemChecker1_x                                            0x1404FF2E0
#define __MemChecker4_x                                            0x14023C130
#define __EncryptPad0_x                                            0x140A380B0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B73490
#define instEQZoneInfo_x                                           0x140B73684 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D7180
#define __gfMaxZoomCameraDistance_x                                0x1407866C0
#define __gfMaxCameraDistance_x                                    0x1407C106C
#define __CurrentSocial_x                                          0x1408F2900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A2DF70
#define g_eqCommandStates_x                                        0x140A2EFD0
#define __CommandList_x                                            0x140A2F210
#define __ScreenMode_x                                             0x140ABAF7C
#define __gWorld_x                                                 0x140B6DC48
#define __gpbCommandEvent_x                                        0x140B6DEC8
#define __ServerHost_x                                             0x140B6E0B8
#define __Guilds_x                                                 0x140B72040
#define __MouseEventTime_x                                         0x140BDE948
#define DI8__Mouse_Check_x                                         0x140BE35A0
#define __heqmain_x                                                0x140BE5A48
#define DI8__Mouse_x                                               0x140BE5A60
#define __HWnd_x                                                   0x140BE5A68
#define __Mouse_x                                                  0x140BE2A98
#define DI8__Main_x                                                0x140BE2B30
#define DI8__Keyboard_x                                            0x140BE2B38
#define __LoginName_x                                              0x140BE321C
#define __CurrentMapLabel_x                                        0x140BF87B0
#define __LabelCache_x                                             0x140BF93C0
#define __SubscriptionType_x                                       0x140C309C0
#define Teleport_Table_Size_x                                      0x140B6DF54
#define Teleport_Table_x                                           0x140B6BA10

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B6E3D0
#define pinstActiveBanker_x                                        0x140B6B920
#define pinstActiveCorpse_x                                        0x140B6B910
#define pinstActiveGMaster_x                                       0x140B6B918
#define pinstActiveMerchant_x                                      0x140B6B908
#define pinstAltAdvManager_x                                       0x140ABBC28
#define pinstCEverQuest_x                                          0x140BE2A90
#define pinstCamActor_x                                            0x140ABAF68
#define pinstCDBStr_x                                              0x140ABAA30
#define pinstCDisplay_x                                            0x140B6DA10
#define pinstControlledPlayer_x                                    0x140B6B9B0
#define pinstCResolutionHandler_x                                  0x141269560
#define pinstCSidlManager_x                                        0x140C0A440
#define pinstCXWndManager_x                                        0x140C0A430
#define instDynamicZone_x                                          0x140B71F00 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B71F4E
#define instExpeditionName_x                                       0x140B71F8E
#define pinstDZMember_x                                            0x140B72018
#define pinstDZTimerInfo_x                                         0x140B72020
#define pinstEqLogin_x                                             0x140BE2B60
#define instTribute_x                                              0x140A29700
#define pinstEQSoundManager_x                                      0x140ABBF68
#define pinstEQSpellStrings_x                                      0x140A9F660
#define pinstSGraphicsEngine_x                                     0x1412692F8
#define pinstLocalPC_x                                             0x140B6B9F8
#define pinstLocalPlayer_x                                         0x140B6B900
#define pinstCMercenaryClientManager_x                             0x140BE01D8
#define pinstModelPlayer_x                                         0x140B6B930
#define pinstRenderInterface_x                                     0x141269310
#define pinstSkillMgr_x                                            0x140BE1E70
#define pinstSpawnManager_x                                        0x140BE05A0
#define pinstSpellManager_x                                        0x140BE1FB8
#define pinstStringTable_x                                         0x140B6BA08
#define pinstSwitchManager_x                                       0x140B6B880
#define pinstTarget_x                                              0x140B6B9A8
#define pinstTaskMember_x                                          0x140A296F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B6B9B8
#define pinstTradeTarget_x                                         0x140B6B928
#define instTributeActive_x                                        0x140A29729
#define pinstViewActor_x                                           0x140ABAF60
#define pinstWorldData_x                                           0x140B6B9F0
#define pinstPlayerPath_x                                          0x140BE05C8
#define pinstTargetIndicator_x                                     0x140BE2068
#define EQObject_Top_x                                             0x140B6B9D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BF5918
#define pinstCContainerMgr_x                                       0x140ABB050
#define pinstCContextMenuManager_x                                 0x140C0A3E0
#define pinstCInvSlotMgr_x                                         0x140ABB028
#define pinstCItemDisplayManager_x                                 0x140BF8380
#define pinstCPopupWndManager_x                                    0x140BF8C10
#define pinstCSpellDisplayMgr_x                                    0x140BF92A0
#define pinstCTaskManager_x                                        0x1408F2B40
#define pinstEQSuiteTextureLoader_x                                0x140A41720
#define pinstItemIconCache_x                                       0x140BF5C78
#define pinstLootFiltersManager_x                                  0x140ABA448

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F6820
#define __CastRay2_x                                               0x1401F6530
#define __ConvertItemTags_x                                        0x1401F6C20
#define __CleanItemTags_x                                          0x140058E80
#define __CreateCascadeMenuItems_x                                 0x140152080
#define __DoesFileExist_x                                          0x140503A80
#define __EQGetTime_x                                              0x1404FF890
#define __ExecuteCmd_x                                             0x1401CF3A0
#define __FixHeading_x                                             0x140601FD0
#define __FlushDxKeyboard_x                                        0x1402E7870
#define __get_bearing_x                                            0x1401FF920
#define __get_melee_range_x                                        0x1401FFA10
#define __GetAnimationCache_x                                      0x14035BEF0
#define __GetGaugeValueFromEQ_x                                    0x14047A1C0
#define __GetLabelFromEQ_x                                         0x14047B7D0
#define __GetXTargetType_x                                         0x140603440   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140602050
#define __HelpPath_x                                               0x140BDE810   // Why?
#define __NewUIINI_x                                               0x1404863A0   // Why?
#define __ProcessGameEvents_x                                      0x1402319A0
#define __ProcessKeyboardEvents_x                                  0x1402E9020
#define __ProcessMouseEvents_x                                     0x140232DB0
#define __SaveColors_x                                             0x140161D50
#define __STMLToText_x                                             0x14052D440
#define __WndProc_x                                                0x1402E5FE0
#define CMemoryMappedFile__SetFile_x                               0x14073DCB0
#define DrawNetStatus_x                                            0x140279C20
#define Util__FastTime_x                                           0x140500590
#define __eq_delete_x                                              0x1406082D0
#define __eq_new_x                                                 0x1406083CC
#define __CopyLayout_x                                             0x140268580
#define __ThrottleFrameRate_x                                      0x140221816
#define __ThrottleFrameRateEnd_x                                   0x140221876

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F7F80
#define CAAWnd__Update_x                                           0x1402F8280
#define CAAWnd__UpdateSelected_x                                   0x1402F9240

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B670
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073FD0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14076E3F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BEE0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016CA60
#define AltAdvManager__IsAbilityReady_x                            0x14016CCE0
#define AltAdvManager__GetAAById_x                                 0x14016C330
#define AltAdvManager__CanTrainAbility_x                           0x14016C160
#define AltAdvManager__CanSeeAbility_x                             0x14016BE20

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3DA0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4B50
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4D60
#define CharacterZoneClient__CanUseItem_x                          0x1400B8B60
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5650
#define CharacterZoneClient__CastSpell_x                           0x1400A56F0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4CD0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA190
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA350
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A88E0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFDD0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE7B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9DD0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B80E0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C18F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0820
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9FA0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AC10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C480
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0F20
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9E40
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1B00
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400AA020
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2590
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA230
#define CharacterZoneClient__GetModCap_x                           0x1400C9F10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA2D0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA4E0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F320
#define CharacterZoneClient__HasSkill_x                            0x1400C5740
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE810
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C99A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402924E0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9CE0
#define CharacterZoneClient__Max_Mana_x                            0x1402926D0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA150
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1D00
#define CharacterZoneClient__SpellDuration_x                       0x1400B28E0
#define CharacterZoneClient__TotalEffect_x                         0x1400B3B10
#define CharacterZoneClient__UseSkill_x                            0x1400CF710


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
#define CButtonWnd__vftable_x                                      0x1407CD7A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140341EC0
#define CChatWindowManager__InitContextMenu_x                      0x140342050
#define CChatWindowManager__FreeChatWindow_x                       0x140341110
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140348DE0
#define CChatWindowManager__CreateChatWindow_x                     0x140340A50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7510

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140349D50
#define CChatWindow__Clear_x                                       0x14034AB60
#define CChatWindow__WndNotification_x                             0x14034BCE0
#define CChatWindow__AddHistory_x                                  0x14034A660

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14053E420
#define CContextMenu__RemoveMenuItem_x                             0x14053E930
#define CContextMenu__RemoveAllMenuItems_x                         0x14053E900
#define CContextMenu__CheckMenuItem_x                              0x14053E770
#define CContextMenu__SetMenuItem_x                                0x14053E950
#define CContextMenu__AddSeparator_x                               0x14053E580

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14053EFA0
#define CContextMenuManager__RemoveMenu_x                          0x14053F520
#define CContextMenuManager__PopupMenu_x                           0x14053F2A0
#define CContextMenuManager__Flush_x                               0x14053F020
#define CContextMenuManager__CreateDefaultMenu_x                   0x140355F60

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CB830
#define CChatService__GetFriendName_x                              0x1405CB840

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053A5B0
#define CComboWnd__Draw_x                                          0x14053A6B0
#define CComboWnd__GetCurChoice_x                                  0x14053A980  // unused
#define CComboWnd__GetListRect_x                                   0x14053AA20
#define CComboWnd__InsertChoice_x                                  0x14053AD60
#define CComboWnd__SetColors_x                                     0x14053B0F0
#define CComboWnd__SetChoice_x                                     0x14053B0B0
#define CComboWnd__GetItemCount_x                                  0x14053AA10
#define CComboWnd__GetCurChoiceText_x                              0x14053A9C0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053A950
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053AE20

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140353FF0
#define CContainerWnd__SetContainer_x                              0x140354D80
#define CContainerWnd__vftable_x                                   0x14079E0B8

// CDisplay
#define CDisplay__cameraType_x                                     0x140ABACF4
#define CDisplay__ZoneMainUI_x                                     0x140555BF0
#define CDisplay__PreZoneMainUI_x                                  0x14015ECA0
#define CDisplay__CleanGameUI_x                                    0x140151180
#define CDisplay__GetClickedActor_x                                0x140155310
#define CDisplay__GetUserDefinedColor_x                            0x140155DF0
#define CDisplay__InitCharSelectUI_x                               0x1401560A0
#define CDisplay__ReloadUI_x                                       0x140161000
#define CDisplay__WriteTextHD2_x                                   0x140167F50
#define CDisplay__TrueDistance_x                                   0x140167C30
#define CDisplay__SetViewActor_x                                   0x140164540
#define CDisplay__GetFloorHeight_x                                 0x140155570
#define CDisplay__ToggleScreenshotMode_x                           0x140167730
#define CDisplay__RealRender_World_x                               0x140160390

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140561110
#define CEditWnd__DrawCaret_x                                      0x140541E60  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140542310
#define CEditWnd__GetCaretPt_x                                     0x140542580  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405425C0
#define CEditWnd__GetDisplayString_x                               0x140542830
#define CEditWnd__GetHorzOffset_x                                  0x140542A70
#define CEditWnd__GetLineForPrintableChar_x                        0x140542BC0
#define CEditWnd__GetSelStartPt_x                                  0x140542EA0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140542CF0
#define CEditWnd__PointFromPrintableChar_x                         0x140543AD0
#define CEditWnd__ReplaceSelection_x                               0x140543E80
#define CEditWnd__SelectableCharFromPoint_x                        0x140544320
#define CEditWnd__SetEditable_x                                    0x1405445B0
#define CEditWnd__SetWindowText_x                                  0x1405445E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140222BC0
#define CEverQuest__ClickedPlayer_x                                0x140218F40
#define CEverQuest__CreateTargetIndicator_x                        0x1402196A0
#define CEverQuest__DoTellWindow_x                                 0x1400D7220 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7AE0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402240C0
#define CEverQuest__dsp_chat_x                                     0x1400D6D40 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024D600
#define CEverQuest__Emote_x                                        0x140224A20
#define CEverQuest__GetBodyTypeDesc_x                              0x140225790
#define CEverQuest__GetClassDesc_x                                 0x1402257F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140225BC0
#define CEverQuest__GetDeityDesc_x                                 0x140225F70
#define CEverQuest__GetLangDesc_x                                  0x1402263A0
#define CEverQuest__GetRaceDesc_x                                  0x140226740
#define CEverQuest__InterpretCmd_x                                 0x140227E30
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023C7B0
#define CEverQuest__LMouseUp_x                                     0x140229870
#define CEverQuest__RightClickedOnPlayer_x                         0x14023A150
#define CEverQuest__RMouseUp_x                                     0x140233920
#define CEverQuest__SetGameState_x                                 0x14023EA60
#define CEverQuest__UPCNotificationFlush_x                         0x140244110 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402294F0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140234C50
#define CEverQuest__ReportSuccessfulHit_x                          0x140235990

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140366240

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400944E0
#define CGuild__GetGuildName_x                                     0x140094520

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140382960

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025E320
#define CHotButton__SetCheck_x                                     0x14025E5B0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140391860
#define CInvSlotMgr__MoveItem_x                                    0x1403919B0
#define CInvSlotMgr__SelectSlot_x                                  0x140393390

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14038F4C0
#define CInvSlot__SliderComplete_x                                 0x1403906F0
#define CInvSlot__GetItemBase_x                                    0x14038BAF0
#define CInvSlot__UpdateItem_x                                     0x140390B40

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403939F0
#define CInvSlotWnd__HandleLButtonUp_x                             0x140394550

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B3D40
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B6660
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B0BB0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B2270
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B3180

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140476EB0
#define CSpellDisplayWnd__UpdateStrings_x                          0x140478A80

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404AECE0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AD360

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401174D0

// CLabel
#define CLabel__UpdateText_x                                       0x1403BDA30

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405116D0
#define CListWnd__dCListWnd_x                                      0x140511B10
#define CListWnd__vftable_x                                        0x1407CCBA0
#define CListWnd__AddColumn_x                                      0x1405121B0
#define CListWnd__AddColumn1_x                                     0x140512250
#define CListWnd__AddLine_x                                        0x1405123B0
#define CListWnd__AddString_x                                      0x140512930
#define CListWnd__CalculateFirstVisibleLine_x                      0x140513020
#define CListWnd__CalculateVSBRange_x                              0x140513300
#define CListWnd__ClearSel_x                                       0x1405134A0
#define CListWnd__ClearAllSel_x                                    0x140513440
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140513500
#define CListWnd__Compare_x                                        0x1405136B0
#define CListWnd__Draw_x                                           0x140513B80
#define CListWnd__DrawColumnSeparators_x                           0x140514720
#define CListWnd__DrawHeader_x                                     0x1405147E0
#define CListWnd__DrawItem_x                                       0x140514EA0
#define CListWnd__DrawLine_x                                       0x140515820
#define CListWnd__DrawSeparator_x                                  0x140515CE0
#define CListWnd__EnableLine_x                                     0x140516100
#define CListWnd__EnsureVisible_x                                  0x140516160
#define CListWnd__ExtendSel_x                                      0x140516250
#define CListWnd__GetColumnMinWidth_x                              0x140516580
#define CListWnd__GetColumnWidth_x                                 0x140516600
#define CListWnd__GetCurSel_x                                      0x140516700
#define CListWnd__GetItemData_x                                    0x140516A80
#define CListWnd__GetItemHeight_x                                  0x140516AC0
#define CListWnd__GetItemRect_x                                    0x140516C80
#define CListWnd__GetItemText_x                                    0x140516F20
#define CListWnd__GetSelList_x                                     0x140517170
#define CListWnd__GetSeparatorRect_x                               0x140517360
#define CListWnd__InsertLine_x                                     0x1405187B0
#define CListWnd__RemoveLine_x                                     0x140518DD0
#define CListWnd__SetColors_x                                      0x1405191A0
#define CListWnd__SetColumnJustification_x                         0x1405191C0
#define CListWnd__SetColumnLabel_x                                 0x140519240
#define CListWnd__SetColumnWidth_x                                 0x1405193E0
#define CListWnd__SetCurSel_x                                      0x1405194B0
#define CListWnd__SetItemColor_x                                   0x140519720
#define CListWnd__SetItemData_x                                    0x1405197C0
#define CListWnd__SetItemText_x                                    0x140519A00
#define CListWnd__Sort_x                                           0x140519E10
#define CListWnd__ToggleSel_x                                      0x140519F80
#define CListWnd__SetColumnsSizable_x                              0x140519430
#define CListWnd__SetItemWnd_x                                     0x140519B30
#define CListWnd__GetItemWnd_x                                     0x140517100
#define CListWnd__SetItemIcon_x                                    0x140519800
#define CListWnd__CalculateCustomWindowPositions_x                 0x140512DF0
#define CListWnd__SetVScrollPos_x                                  0x140519D70

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D04C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407A9730
#define MapViewMap__Clear_x                                        0x1403D2040
#define MapViewMap__SetZoom_x                                      0x1403D8600
#define MapViewMap__HandleLButtonDown_x                            0x1403D5140

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403F9BB0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1403FF7D0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404017F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404035F0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140402A10
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140406CB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405A8000
#define CPacketScrambler__hton_x                                   0x1405A7FF0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140537C80
#define CSidlManagerBase__FindAnimation1_x                         0x140537BC0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405382B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140538060
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140536FC0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140536F50
#define CSidlManagerBase__CreateXWnd_x                             0x140536590

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140469650
#define CSidlManager__CreateXWnd_x                                 0x140469810

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14052EF10
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14052F020
#define CSidlScreenWnd__ConvertToRes_x                             0x14055B6B0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14052F140
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14052E7B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14052E700
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14052E9D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14052F710
#define CSidlScreenWnd__EnableIniStorage_x                         0x14052F940
#define CSidlScreenWnd__GetChildItem_x                             0x14052FAE0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14052FD00
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140521800 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140530070
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405303E0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140530CA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140531550
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C0A288
#define CSidlScreenWnd__StoreIniInfo_x                             0x140531B60
#define CSidlScreenWnd__StoreIniVis_x                              0x140532350
#define CSidlScreenWnd__vftable_x                                  0x1407CDC00
#define CSidlScreenWnd__WndNotification_x                          0x1405323A0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D0790 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D0B90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D0AD0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D0F30
#define CSkillMgr__IsCombatSkill_x                                 0x1402D0F70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140486410
#define CSliderWnd__SetValue_x                                     0x140540AE0
#define CSliderWnd__SetNumTicks_x                                  0x140540960

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140470B50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140549090
#define CStmlWnd__CalculateHSBRange_x                              0x1405211F0
#define CStmlWnd__CalculateVSBRange_x                              0x140549F30
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054AA10
#define CStmlWnd__ForceParseNow_x                                  0x14054AAB0
#define CStmlWnd__GetVisibleText_x                                 0x14054B180
#define CStmlWnd__MakeStmlColorTag_x                               0x14054CEF0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14054CF30
#define CStmlWnd__SetSTMLText_x                                    0x140553F10
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405540C0
#define CStmlWnd__UpdateHistoryString_x                            0x140554450

// CTabWnd
#define CTabWnd__Draw_x                                            0x140545B80
#define CTabWnd__DrawCurrentPage_x                                 0x140545C20
#define CTabWnd__DrawTab_x                                         0x140545FF0
#define CTabWnd__GetTabRect_x                                      0x140546650
#define CTabWnd__InsertPage_x                                      0x140546920
#define CTabWnd__RemovePage_x                                      0x140546BB0
#define CTabWnd__SetPage_x                                         0x140546D10
#define CTabWnd__UpdatePage_x                                      0x140547010

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140545780
#define CPageWnd__SetTabText_x                                     0x1405457F0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DA20  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DE30


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051B0C0
#define CTextureFont__DrawWrappedText1_x                           0x14051AFD0
#define CTextureFont__DrawWrappedText2_x                           0x14051B1F0
#define CTextureFont__GetTextExtent_x                              0x14051B5A0
#define CTextureFont__GetHeight_x                                  0x14051B560

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140559E10

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14050E340

// CXStr
#define CXStr__gFreeLists_x                                        0x140A41090
#define CXStr__gCXStrAccess_x                                      0x140C09848

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051CAF0
#define CXWnd__ClrFocus_x                                          0x14051CD30
#define CXWnd__Destroy_x                                           0x14051CE70
#define CXWnd__DoAllDrawing_x                                      0x14051CF70
#define CXWnd__DrawColoredRect_x                                   0x14051D730
#define CXWnd__DrawTooltip_x                                       0x14051ED80
#define CXWnd__DrawTooltipAtPoint_x                                0x14051EE30
#define CXWnd__GetChildItem_x                                      0x14051F720
#define CXWnd__GetChildWndAt_x                                     0x14051F7D0
#define CXWnd__GetClientClipRect_x                                 0x14051F940
#define CXWnd__GetRelativeRect_x                                   0x140521320
#define CXWnd__GetScreenClipRect_x                                 0x140521430
#define CXWnd__GetScreenRect_x                                     0x1405215A0
#define CXWnd__GetTooltipRect_x                                    0x140521710
#define CXWnd__IsActive_x                                          0x140521C80
#define CXWnd__IsDescendantOf_x                                    0x140521CB0
#define CXWnd__IsReallyVisible_x                                   0x140521D20
#define CXWnd__IsType_x                                            0x140521D60
#define CXWnd__Minimize_x                                          0x140521E60
#define CXWnd__ProcessTransition_x                                 0x140522E40
#define CXWnd__Refade_x                                            0x140522F40
#define CXWnd__Resize_x                                            0x140522F50
#define CXWnd__Right_x                                             0x140522FF0
#define CXWnd__SetFocus_x                                          0x1405233B0
#define CXWnd__SetFont_x                                           0x140523400
#define CXWnd__SetKeyTooltip_x                                     0x140523510
#define CXWnd__SetMouseOver_x                                      0x140523650
#define CXWnd__SetParent_x                                         0x1405236D0
#define CXWnd__StartFade_x                                         0x140523AF0
#define CXWnd__vftable_x                                           0x1407CD318
#define CXWnd__CXWnd_x                                             0x14051B6C0
#define CXWnd__dCXWnd_x                                            0x14051BFE0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140560890

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140525300
#define CXWndManager__DrawWindows_x                                0x140525430
#define CXWndManager__GetKeyboardFlags_x                           0x140525AF0
#define CXWndManager__HandleKeyboardMsg_x                          0x140525B30
#define CXWndManager__RemoveWnd_x                                  0x140528F90

// CDBStr
#define CDBStr__GetString_x                                        0x14014F380

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B1800

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1C20
#define CCharacterListWnd__EnterWorld_x                            0x1400A08D0
#define CCharacterListWnd__Quit_x                                  0x1400A1C00
#define CCharacterListWnd__UpdateList_x                            0x1400A2910

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140581BB0
#define ItemBase__CreateItemTagString_x                            0x140582580
#define ItemBase__GetImageNum_x                                    0x140584740
#define ItemBase__GetItemValue_x                                   0x1405862A0
#define ItemBase__IsEmpty_x                                        0x140587DB0
#define ItemBase__IsKeyRingItem_x                                  0x140588480
#define ItemBase__ValueSellMerchant_x                              0x14058C750
#define ItemClient__CanDrop_x                                      0x140260720
#define ItemClient__CanGoInBag_x                                   0x140260850
#define ItemClient__CreateItemClient_x                             0x140260B10
#define ItemClient__dItemClient_x                                  0x140260580

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016E200
#define EQ_LoadingS__Array_x                                       0x140A2BA80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140597D60
#define PcBase__GetCombatAbility_x                                 0x1405983B0
#define PcBase__GetCombatAbilityTimer_x                            0x140598450
#define PcBase__GetItemContainedRealEstateIds_x                    0x140598B60
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405993C0
#define PcClient__AlertInventoryChanged_x                          0x1402811F0
#define PcClient__GetConLevel_x                                    0x1402816C0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140283ED0
#define PcClient__HasLoreItem_x                                    0x140284F50
#define PcZoneClient__GetItemRecastTimer_x                         0x140290E70
#define PcZoneClient__RemoveMyAffect_x                             0x140293530

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D3A20  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D3A90  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D3BA0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D3B00  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020AA60  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140149C80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F5010
#define PlayerBase__CanSee1_x                                      0x1405F50E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F5610
#define PlayerBase__HasProperty_x                                  0x1405F5830
#define PlayerBase__IsTargetable_x                                 0x1405F58F0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029F140
#define PlayerClient__GetPcClient_x                                0x1402A16D0
#define PlayerClient__PlayerClient_x                               0x140298320
#define PlayerClient__SetNameSpriteState_x                         0x1402A4B00
#define PlayerClient__SetNameSpriteTint_x                          0x1402A5AA0
#define PlayerZoneClient__ChangeHeight_x                           0x1402B3A10
#define PlayerZoneClient__DoAttack_x                               0x1402B4700
#define PlayerZoneClient__GetLevel_x                               0x1402B7C70
#define PlayerZoneClient__IsValidTeleport_x                        0x14020D820
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015D540

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AD490  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AD4C0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AD570
#define PlayerManagerClient__CreatePlayer_x                        0x1402ACE80
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F4C90

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140265AC0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402656C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140265730
#define KeypressHandler__ClearCommandStateArray_x                  0x140265A50  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140265BE0
#define KeypressHandler__HandleKeyUp_x                             0x140265CC0
#define KeypressHandler__SaveKeymapping_x                          0x140265960  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405AF0F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405A96A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028A540  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14028F4E0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402913D0
#define PcZoneClient__RemovePetEffect_x                            0x140293630
#define PcZoneClient__HasAlternateAbility_x                        0x140291E50
#define PcZoneClient__CanEquipItem_x                               0x14028D8B0
#define PcZoneClient__GetItemByID_x                                0x140290420
#define PcZoneClient__RemoveBuffEffect_x                           0x1402933E0
#define PcZoneClient__BandolierSwap_x                              0x14028CA70
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291320

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402122E0

// IconCache
#define IconCache__GetIcon_x                                       0x14035BF20

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140352DD0
#define CContainerMgr__CloseContainer_x                            0x140352790
#define CContainerMgr__OpenExperimentContainer_x                   0x140353130

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404308C0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259070

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C46A0
#define CLootWnd__RequestLootSlot_x                                0x1403C5680

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140199400
#define EQ_Spell__SpellAffects_x                                   0x14019A6A0
#define EQ_Spell__SpellAffectBase_x                                0x14019A600
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA6C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA670
#define EQ_Spell__IsSPAStacking_x                                  0x14019A2C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140199E80
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140199760

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092F10

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048A1D0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048A210
#define CTargetWnd__RefreshTargetBuffs_x                           0x140489720
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140488CD0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404912B0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140146610
#define CTaskManager__GetTaskStatus_x                              0x140146720
#define CTaskManager__GetElementDescription_x                      0x1401462A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140197760
#define EqSoundManager__PlayScriptMp3_x                            0x140196560
#define EqSoundManager__SoundAssistPlay_x                          0x1402D6F90  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D72C0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140544DE0
#define CTextureAnimation__SetCurCell_x                            0x1405450F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140257350

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405C9350
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405C93D0
#define CharacterBase__IsExpansionFlag_x                           0x1401B81F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403340D0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140334A10
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140335E50

// messages
#define msg_spell_worn_off_x                                       0x1401CB1B0
#define msg_new_text_x                                             0x1401C6FE0
#define __msgTokenTextParam_x                                      0x1401BEF60
#define msgTokenText_x                                             0x1401BEE80

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D8950
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D8870

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140603820

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BE170

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403580E0
#define CCursorAttachment__AttachToCursor1_x                       0x140356D30
#define CCursorAttachment__Deactivate_x                            0x1403585E0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140558060
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140558250
#define CEQSuiteTextureLoader__GetTexture_x                        0x140558260

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113070
#define CFindItemWnd__Update_x                                     0x140113270
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E2B0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BC80
#define LootFiltersManager__GetItemFilterData_x                    0x14011C7A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011D040
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D2F0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140413F30

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140607C40
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D02F0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14034F3A0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405CD1B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405CD2C0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403714C0
#define CGroupWnd__UpdateDisplay_x                                 0x140371260

// ItemBase
#define ItemBase__IsLore_x                                         0x140588550
#define ItemBase__IsLoreEquipped_x                                 0x1405886A0

#define MultipleItemMoveManager__ProcessMove_x                     0x140278070

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020ABC0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020AB50
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020AB90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CACD0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF3F0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF7A0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEBC0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEBC0
#define FactionManagerClient__GetMinFaction_x                      0x1400EEA70

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D960

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAAA0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140176AE0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140175DE0
#define CAltAbilityData__GetMercCurrentRank_x                      0x140176900  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140176880  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DD050

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CACD0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D3C90

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405571E0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EE310

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D830

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
