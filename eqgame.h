/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
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

#define __ClientDate                                               20231109u
#define __ExpectedVersionDate                                     "Nov  9 2023"
#define __ExpectedVersionTime                                     "12:20:53"
#define __ActualVersionDate_x                                      0x14081F148
#define __ActualVersionTime_x                                      0x14081F138
#define __ActualVersionBuild_x                                     0x140813B70

// Memory Protection
#define __MemChecker0_x                                            0x1402A7870
#define __MemChecker1_x                                            0x14055B350
#define __MemChecker4_x                                            0x1402768E0
#define __EncryptPad0_x                                            0x140AD28D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C0B390
#define instEQZoneInfo_x                                           0x140C0B584 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020ED70
#define __gfMaxZoomCameraDistance_x                                0x140814D20
#define __gfMaxCameraDistance_x                                    0x1408542A0
#define __CurrentSocial_x                                          0x14098E94C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140ACA1C0
#define g_eqCommandStates_x                                        0x140ACB230
#define __CommandList_x                                            0x140ACB470
#define __ScreenMode_x                                             0x140B52C8C
#define __gWorld_x                                                 0x140C04290
#define __gpbCommandEvent_x                                        0x140C03C40
#define __ServerHost_x                                             0x140C03E38
#define __Guilds_x                                                 0x140C09F40
#define __MouseEventTime_x                                         0x140C808D0
#define DI8__Mouse_Check_x                                         0x140C84A08
#define __heqmain_x                                                0x140C86EA0
#define DI8__Mouse_x                                               0x140C86EF8
#define __HWnd_x                                                   0x140C879A8
#define __Mouse_x                                                  0x140C86EB8
#define DI8__Main_x                                                0x140C86ED0
#define DI8__Keyboard_x                                            0x140C86ED8
#define __LoginName_x                                              0x140C8763C
#define __CurrentMapLabel_x                                        0x140C9AB80
#define __LabelCache_x                                             0x140C9B750
#define Teleport_Table_Size_x                                      0x140C03CD0
#define Teleport_Table_x                                           0x140C042D0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C062D0
#define pinstActiveBanker_x                                        0x140C041E0
#define pinstActiveCorpse_x                                        0x140C041D0
#define pinstActiveGMaster_x                                       0x140C041D8
#define pinstActiveMerchant_x                                      0x140C041C8
#define pinstAltAdvManager_x                                       0x140B53AF8
#define pinstCEverQuest_x                                          0x140C86EF0
#define pinstCamActor_x                                            0x140B52C78
#define pinstCDBStr_x                                              0x140B528F0
#define pinstCDisplay_x                                            0x140C042C8
#define pinstControlledPlayer_x                                    0x140C04270
#define pinstCResolutionHandler_x                                  0x1413091E8
#define pinstCSidlManager_x                                        0x140CACA50
#define pinstCXWndManager_x                                        0x140CACA48
#define instDynamicZone_x                                          0x140C09E00 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C09E4E
#define instExpeditionName_x                                       0x140C09E8E
#define pinstDZMember_x                                            0x140C09F18
#define pinstDZTimerInfo_x                                         0x140C09F20
#define pinstEqLogin_x                                             0x140C86F80
#define instTribute_x                                              0x140AC5840
#define pinstEQSoundManager_x                                      0x140B53E78
#define pinstEQSpellStrings_x                                      0x140B37500
#define pinstSGraphicsEngine_x                                     0x141308F68
#define pinstLocalPC_x                                             0x140C042B0
#define pinstLocalPlayer_x                                         0x140C041C0
#define pinstCMercenaryClientManager_x                             0x140C82188
#define pinstModelPlayer_x                                         0x140C041F0
#define pinstRenderInterface_x                                     0x141308F80
#define pinstSkillMgr_x                                            0x140C83E20
#define pinstSpawnManager_x                                        0x140C82540
#define pinstSpellManager_x                                        0x140C83E88
#define pinstStringTable_x                                         0x140C042B8
#define pinstSwitchManager_x                                       0x140C03790
#define pinstTarget_x                                              0x140C04268
#define pinstTaskMember_x                                          0x140AC5830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C04278
#define pinstTradeTarget_x                                         0x140C041E8
#define instTributeActive_x                                        0x140AC5869
#define pinstViewActor_x                                           0x140B52C70
#define pinstWorldData_x                                           0x140C042C0
#define pinstPlayerPath_x                                          0x140C82568
#define pinstTargetIndicator_x                                     0x140C83F38
#define EQObject_Top_x                                             0x140C04298

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C97CD8
#define pinstCContainerMgr_x                                       0x140B52F18
#define pinstCContextMenuManager_x                                 0x140CAC730
#define pinstCInvSlotMgr_x                                         0x140B52F08
#define pinstCItemDisplayManager_x                                 0x140C9A750
#define pinstCPopupWndManager_x                                    0x140C9AFE0
#define pinstCSpellDisplayMgr_x                                    0x140C9B630
#define pinstCTaskManager_x                                        0x14098EC80
#define pinstEQSuiteTextureLoader_x                                0x140ADBF50
#define pinstItemIconCache_x                                       0x140C98038
#define pinstLootFiltersManager_x                                  0x140B52338
#define pinstGFViewListener_x                                      0x140CABF08


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402373E0
#define __CastRay_x                                                0x14022FC60
#define __CastRay2_x                                               0x14022F960
#define __ConvertItemTags_x                                        0x1402300C0
#define __CleanItemTags_x                                          0x140087840
#define __CreateCascadeMenuItems_x                                 0x1401809D0
#define __DoesFileExist_x                                          0x14055F200
#define __EQGetTime_x                                              0x14055B900
#define __ExecuteCmd_x                                             0x140206740
#define __FixHeading_x                                             0x1406861C0
#define __FlushDxKeyboard_x                                        0x140325A30
#define __get_bearing_x                                            0x1402395D0
#define __get_melee_range_x                                        0x1402396D0
#define __GetAnimationCache_x                                      0x1403A1180
#define __GetGaugeValueFromEQ_x                                    0x1404D2750
#define __GetLabelFromEQ_x                                         0x1404D3D30
#define __GetXTargetType_x                                         0x1406874A0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140686240
#define __HelpPath_x                                               0x140C80798   // Why?
#define __NewUIINI_x                                               0x1404DF290   // Why?
#define __ProcessGameEvents_x                                      0x14026BD10
#define __ProcessKeyboardEvents_x                                  0x140327290
#define __ProcessMouseEvents_x                                     0x14026D200
#define __SaveColors_x                                             0x140190B60
#define __STMLToText_x                                             0x14056B3D0
#define __WndProc_x                                                0x140324190
#define CMemoryMappedFile__SetFile_x                               0x1407BD1C0
#define DrawNetStatus_x                                            0x1402B5CB0
#define Util__FastTime_x                                           0x14055AE90
#define __eq_delete_x                                              0x14068C464
#define __eq_new_x                                                 0x14068C420
#define __CopyLayout_x                                             0x1402A3CB0
#define __ThrottleFrameRate_x                                      0x14025B5B5
#define __ThrottleFrameRateEnd_x                                   0x14025B615

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403365D0
#define CAAWnd__Update_x                                           0x1403368D0
#define CAAWnd__UpdateSelected_x                                   0x1403378D0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9A90
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2390
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407FA8B8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA380

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BBB0
#define AltAdvManager__IsAbilityReady_x                            0x14019BE30
#define AltAdvManager__GetAAById_x                                 0x14019B480
#define AltAdvManager__CanTrainAbility_x                           0x14019B2B0
#define AltAdvManager__CanSeeAbility_x                             0x14019AF70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D02B0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D10F0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1340
#define CharacterZoneClient__CanUseItem_x                          0x1400E5AF0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1D10
#define CharacterZoneClient__CastSpell_x                           0x1400D1DB0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1620
#define CharacterZoneClient__Cur_HP_x                              0x1400E71F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E73B0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4DC0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED7F0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC5B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6230
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4FC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF380
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE250
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6400
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C68B0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8280
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE990
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6E60
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF610
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6500
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0370
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6710
#define CharacterZoneClient__GetModCap_x                           0x1400F7B00
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D67B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D69C0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB3F0
#define CharacterZoneClient__HasSkill_x                            0x1400F3360
#define CharacterZoneClient__HitBySpell_x                          0x1400D7470
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DADA0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F75F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D0000  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7930
#define CharacterZoneClient__Max_Mana_x                            0x1402D0220  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7D90
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE1E0
#define CharacterZoneClient__SpellDuration_x                       0x1400DEEE0
#define CharacterZoneClient__TotalEffect_x                         0x1400E0210
#define CharacterZoneClient__UseSkill_x                            0x1400FD500


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140354BB0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035EF00

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035AD90
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140359E20

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403615B0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1408628A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140383860
#define CChatWindowManager__InitContextMenu_x                      0x1403839F0
#define CChatWindowManager__FreeChatWindow_x                       0x140382A80
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14038AA40
#define CChatWindowManager__CreateChatWindow_x                     0x1403823C0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105690

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038BA30
#define CChatWindow__Clear_x                                       0x14038C8D0
#define CChatWindow__WndNotification_x                             0x14038DAC0
#define CChatWindow__AddHistory_x                                  0x14038C3D0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140598AE0
#define CContextMenu__RemoveMenuItem_x                             0x140598ED0
#define CContextMenu__RemoveAllMenuItems_x                         0x140598EA0
#define CContextMenu__CheckMenuItem_x                              0x140598D10
#define CContextMenu__SetMenuItem_x                                0x140598EF0
#define CContextMenu__AddSeparator_x                               0x140598C50

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14058A9B0
#define CContextMenuManager__RemoveMenu_x                          0x14058AF80
#define CContextMenuManager__PopupMenu_x                           0x14058ACC0
#define CContextMenuManager__Flush_x                               0x14058AA30
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403991F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064F0B0
#define CChatService__GetFriendName_x                              0x14064F0C0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057B900
#define CComboWnd__Draw_x                                          0x14057BA00
#define CComboWnd__GetCurChoice_x                                  0x14057BCE0  // unused
#define CComboWnd__GetListRect_x                                   0x14057BD80
#define CComboWnd__InsertChoice_x                                  0x14057C0C0
#define CComboWnd__SetColors_x                                     0x14057C450
#define CComboWnd__SetChoice_x                                     0x14057C410
#define CComboWnd__GetItemCount_x                                  0x14057BD70
#define CComboWnd__GetCurChoiceText_x                              0x14057BD20  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057BCB0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057C180

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140396F60
#define CContainerWnd__SetContainer_x                              0x1403E9EF0
#define CContainerWnd__vftable_x                                   0x14082E470

// CDisplay
#define CDisplay__cameraType_x                                     0x140B52A24
#define CDisplay__ZoneMainUI_x                                     0x1405B2BC0
#define CDisplay__PreZoneMainUI_x                                  0x14018D980
#define CDisplay__CleanGameUI_x                                    0x14017FAD0
#define CDisplay__GetClickedActor_x                                0x140183C60
#define CDisplay__GetUserDefinedColor_x                            0x1401848D0
#define CDisplay__InitCharSelectUI_x                               0x140184B80
#define CDisplay__ReloadUI_x                                       0x14018FC60
#define CDisplay__WriteTextHD2_x                                   0x140196E00
#define CDisplay__TrueDistance_x                                   0x140196AB0
#define CDisplay__SetViewActor_x                                   0x1401932D0
#define CDisplay__GetFloorHeight_x                                 0x140183EC0
#define CDisplay__ToggleScreenshotMode_x                           0x1401965A0
#define CDisplay__RealRender_World_x                               0x14018F050

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BCD70
#define CEditWnd__DrawCaret_x                                      0x1405AE8A0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405AED60
#define CEditWnd__GetCaretPt_x                                     0x1405AEFE0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405AF020
#define CEditWnd__GetDisplayString_x                               0x1405AF290
#define CEditWnd__GetHorzOffset_x                                  0x1405AF4D0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AF620
#define CEditWnd__GetSelStartPt_x                                  0x1405AF900  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AF750
#define CEditWnd__PointFromPrintableChar_x                         0x1405B04B0
#define CEditWnd__ReplaceSelection_x                               0x1405B0860
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B0D00
#define CEditWnd__SetEditable_x                                    0x1405B0F90
#define CEditWnd__SetWindowText_x                                  0x1405B0FC0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025C5A0
#define CEverQuest__ClickedPlayer_x                                0x1402522A0
#define CEverQuest__CreateTargetIndicator_x                        0x140252B60
#define CEverQuest__DoTellWindow_x                                 0x1401053A0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105C60 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025DFD0
#define CEverQuest__dsp_chat_x                                     0x140104DD0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402881C0
#define CEverQuest__Emote_x                                        0x14025E980
#define CEverQuest__GetBodyTypeDesc_x                              0x14025F720
#define CEverQuest__GetClassDesc_x                                 0x14025F780
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025FB50
#define CEverQuest__GetDeityDesc_x                                 0x14025FE00
#define CEverQuest__GetLangDesc_x                                  0x140260230
#define CEverQuest__GetRaceDesc_x                                  0x1402605D0
#define CEverQuest__InterpretCmd_x                                 0x140261EE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140276F60
#define CEverQuest__LMouseUp_x                                     0x140263890
#define CEverQuest__RightClickedOnPlayer_x                         0x1402747B0
#define CEverQuest__RMouseUp_x                                     0x14026DD80
#define CEverQuest__SetGameState_x                                 0x140279490
#define CEverQuest__UPCNotificationFlush_x                         0x14027EC80 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140263500
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026F130
#define CEverQuest__ReportSuccessfulHit_x                          0x14026FF90

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403AB550

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0600
#define CGuild__GetGuildName_x                                     0x1400C0640

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CDA90

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402997D0
#define CHotButton__SetCheck_x                                     0x140299AA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E2C90
#define CInvSlotMgr__MoveItem_x                                    0x1403E2E70
#define CInvSlotMgr__SelectSlot_x                                  0x1403E47E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403DFEA0
#define CInvSlot__SliderComplete_x                                 0x1403E13F0
#define CInvSlot__GetItemBase_x                                    0x1403DBAE0
#define CInvSlot__UpdateItem_x                                     0x1403E18B0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E5B70

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140406EE0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404098A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140403940
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140405170
#define CItemDisplayWnd__RequestConvertItem_x                      0x140406310

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CF260
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D0F10

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140509E90

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140400090

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401484D0

// CLabel
#define CLabel__UpdateText_x                                       0x140410CA0

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057F290
#define CListWnd__dCListWnd_x                                      0x14057F6E0
#define CListWnd__vftable_x                                        0x140860A60
#define CListWnd__AddColumn_x                                      0x14057FD80
#define CListWnd__AddColumn1_x                                     0x14057FE20
#define CListWnd__AddLine_x                                        0x14057FF80
#define CListWnd__AddString_x                                      0x140580510
#define CListWnd__CalculateFirstVisibleLine_x                      0x140580A80
#define CListWnd__CalculateVSBRange_x                              0x140580D60
#define CListWnd__ClearSel_x                                       0x140580F10
#define CListWnd__ClearAllSel_x                                    0x140580EB0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140580F70
#define CListWnd__Compare_x                                        0x140581130
#define CListWnd__Draw_x                                           0x140581600
#define CListWnd__DrawColumnSeparators_x                           0x1405821B0
#define CListWnd__DrawHeader_x                                     0x140582270
#define CListWnd__DrawItem_x                                       0x140582950
#define CListWnd__DrawLine_x                                       0x1405832D0
#define CListWnd__DrawSeparator_x                                  0x140583790
#define CListWnd__EnableLine_x                                     0x140583BB0
#define CListWnd__EnsureVisible_x                                  0x140583C10
#define CListWnd__ExtendSel_x                                      0x140583D10
#define CListWnd__GetColumnMinWidth_x                              0x140584040
#define CListWnd__GetColumnWidth_x                                 0x1405840C0
#define CListWnd__GetCurSel_x                                      0x1405841C0
#define CListWnd__GetItemData_x                                    0x140584540
#define CListWnd__GetItemHeight_x                                  0x140584580
#define CListWnd__GetItemRect_x                                    0x1405847A0
#define CListWnd__GetItemText_x                                    0x140584A40
#define CListWnd__GetSelList_x                                     0x140584C90
#define CListWnd__GetSeparatorRect_x                               0x140584E80
#define CListWnd__InsertLine_x                                     0x1405862F0
#define CListWnd__RemoveLine_x                                     0x140586960
#define CListWnd__SetColors_x                                      0x140586D20
#define CListWnd__SetColumnJustification_x                         0x140586D40
#define CListWnd__SetColumnLabel_x                                 0x140586DC0
#define CListWnd__SetColumnWidth_x                                 0x140586F60
#define CListWnd__SetCurSel_x                                      0x140587030
#define CListWnd__SetItemColor_x                                   0x1405872A0
#define CListWnd__SetItemData_x                                    0x140587340
#define CListWnd__SetItemText_x                                    0x140587580
#define CListWnd__Sort_x                                           0x140587990
#define CListWnd__ToggleSel_x                                      0x140587B00
#define CListWnd__SetColumnsSizable_x                              0x140586FB0
#define CListWnd__SetItemWnd_x                                     0x1405876B0
#define CListWnd__GetItemWnd_x                                     0x140584C20
#define CListWnd__SetItemIcon_x                                    0x140587380
#define CListWnd__CalculateCustomWindowPositions_x                 0x140580850
#define CListWnd__SetVScrollPos_x                                  0x1405878F0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140423FB0

// MapViewMap
#define MapViewMap__vftable_x                                      0x14083AFC0
#define MapViewMap__Clear_x                                        0x140425B30
#define MapViewMap__SetZoom_x                                      0x14042C170
#define MapViewMap__HandleLButtonDown_x                            0x140428CB0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044D800  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140453DF0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404545A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140457DB0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140457100
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045C060

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062C1C0
#define CPacketScrambler__hton_x                                   0x14062C1B0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A8160
#define CSidlManagerBase__FindAnimation1_x                         0x1405A80A0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A8790
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A8540
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A74A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A7430
#define CSidlManagerBase__CreateXWnd_x                             0x1405A6A90

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C22A0
#define CSidlManager__CreateXWnd_x                                 0x1404C2460

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056CFD0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056CEA0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B7330 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056D150
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056C5F0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056C6C0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056C8D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056D7F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056DA20
#define CSidlScreenWnd__GetChildItem_x                             0x14056DBC0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056DE10
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140577EA0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056E180
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056E4F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056EDB0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056F6A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CABDA8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056FCF0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405704E0
#define CSidlScreenWnd__vftable_x                                  0x14085FD00
#define CSidlScreenWnd__WndNotification_x                          0x140570530

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030F1A0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030F5B0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030F4E0
#define CSkillMgr__IsActivatedSkill_x                              0x14030F960
#define CSkillMgr__IsCombatSkill_x                                 0x14030F9A0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DF2D0
#define CSliderWnd__SetValue_x                                     0x140588C70
#define CSliderWnd__SetNumTicks_x                                  0x140588AF0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C88D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058D400
#define CStmlWnd__CalculateHSBRange_x                              0x140577850
#define CStmlWnd__CalculateVSBRange_x                              0x14058E2A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058EDA0
#define CStmlWnd__ForceParseNow_x                                  0x14058EE40
#define CStmlWnd__GetVisibleText_x                                 0x14058F510
#define CStmlWnd__MakeStmlColorTag_x                               0x140591270
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405912B0
#define CStmlWnd__SetSTMLText_x                                    0x140598280
#define CStmlWnd__StripFirstSTMLLines_x                            0x140598430
#define CStmlWnd__UpdateHistoryString_x                            0x1405987C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140589040
#define CTabWnd__DrawCurrentPage_x                                 0x1405890E0
#define CTabWnd__DrawTab_x                                         0x1405894B0
#define CTabWnd__GetTabRect_x                                      0x140589B20
#define CTabWnd__InsertPage_x                                      0x140589DF0
#define CTabWnd__RemovePage_x                                      0x14058A080
#define CTabWnd__SetPage_x                                         0x14058A1E0
#define CTabWnd__UpdatePage_x                                      0x14058A4E0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B1420
#define CPageWnd__SetTabText_x                                     0x1405B1490

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9D50  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA160


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059FB40
#define CTextureFont__DrawWrappedText1_x                           0x14059FA50
#define CTextureFont__DrawWrappedText2_x                           0x14059FC70
#define CTextureFont__GetTextExtent_x                              0x1405A0020
#define CTextureFont__GetHeight_x                                  0x14059FFE0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B5A90

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140569AC0

// CXStr
#define CXStr__gFreeLists_x                                        0x140ADB8C0
#define CXStr__gCXStrAccess_x                                      0x140CABBA8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140572F30
#define CXWnd__ClrFocus_x                                          0x140573170
#define CXWnd__Destroy_x                                           0x1405732F0
#define CXWnd__DoAllDrawing_x                                      0x140573400
#define CXWnd__DrawColoredRect_x                                   0x140573BD0
#define CXWnd__DrawTooltip_x                                       0x140575250
#define CXWnd__DrawTooltipAtPoint_x                                0x140575300
#define CXWnd__GetChildItem_x                                      0x140575C10
#define CXWnd__GetChildWndAt_x                                     0x140575CD0
#define CXWnd__GetClientRect_x                                     0x140575F90
#define CXWnd__GetClientClipRect_x                                 0x140575E40
#define CXWnd__GetRelativeRect_x                                   0x140577990
#define CXWnd__GetScreenClipRect_x                                 0x140577AA0
#define CXWnd__GetScreenRect_x                                     0x140577C20
#define CXWnd__GetTooltipRect_x                                    0x140577DA0
#define CXWnd__IsActive_x                                          0x140578360
#define CXWnd__IsDescendantOf_x                                    0x140578390
#define CXWnd__IsReallyVisible_x                                   0x140578400
#define CXWnd__IsType_x                                            0x140578440
#define CXWnd__Minimize_x                                          0x140578540
#define CXWnd__ProcessTransition_x                                 0x140579410
#define CXWnd__Resize_x                                            0x140579520
#define CXWnd__Right_x                                             0x1405795C0
#define CXWnd__SetFocus_x                                          0x140579980
#define CXWnd__SetFont_x                                           0x1405799D0
#define CXWnd__SetKeyTooltip_x                                     0x140579AE0
#define CXWnd__SetMouseOver_x                                      0x140579C20
#define CXWnd__SetParent_x                                         0x140579CA0
#define CXWnd__StartFade_x                                         0x14057A0F0
#define CXWnd__vftable_x                                           0x1408602E0
#define CXWnd__CXWnd_x                                             0x140571AE0
#define CXWnd__dCXWnd_x                                            0x140572430

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BC4F0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x14059A080
#define CXWndManager__DrawCursor_x                                 0x14059A360
#define CXWndManager__DrawWindows_x                                0x14059A5C0
#define CXWndManager__GetKeyboardFlags_x                           0x14059AC90
#define CXWndManager__HandleKeyboardMsg_x                          0x14059ACD0
#define CXWndManager__RemoveWnd_x                                  0x14059E210

// CDBStr
#define CDBStr__GetString_x                                        0x14017DC40

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406352D0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE010
#define CCharacterListWnd__EnterWorld_x                            0x1400CCD10
#define CCharacterListWnd__Quit_x                                  0x1400CDFF0
#define CCharacterListWnd__UpdateList_x                            0x1400CED00

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140604860
#define ItemBase__CreateItemTagString_x                            0x1406052B0
#define ItemBase__GetImageNum_x                                    0x140607860
#define ItemBase__GetItemValue_x                                   0x140609320
#define ItemBase__IsEmpty_x                                        0x14060AF40
#define ItemBase__IsKeyRingItem_x                                  0x14060B670
#define ItemBase__ValueSellMerchant_x                              0x14060F870
#define ItemClient__CanDrop_x                                      0x14029BDA0
#define ItemClient__CanGoInBag_x                                   0x14029BED0
#define ItemClient__CreateItemClient_x                             0x14029C1B0
#define ItemClient__dItemClient_x                                  0x14029BC10

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D350
#define EQ_LoadingS__Array_x                                       0x140AC7CD0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061B820
#define PcBase__GetCombatAbility_x                                 0x14061BEC0
#define PcBase__GetCombatAbilityTimer_x                            0x14061BF60
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061C6B0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061D040
#define PcClient__AlertInventoryChanged_x                          0x1402BD7A0
#define PcClient__GetConLevel_x                                    0x1402BDD80  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C0450
#define PcClient__HasLoreItem_x                                    0x1402C1550
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CE560
#define PcZoneClient__RemoveMyAffect_x                             0x1402D10D0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020ADB0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020AF60  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B0C0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B000  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140243BA0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178460

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140678CA0
#define PlayerBase__CanSee1_x                                      0x140678D70
#define PlayerBase__GetVisibilityLineSegment_x                     0x140679230
#define PlayerBase__HasProperty_x                                  0x140679450
#define PlayerBase__IsTargetable_x                                 0x140679510
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DD020
#define PlayerClient__GetPcClient_x                                0x1402DF850
#define PlayerClient__PlayerClient_x                               0x1402D6370
#define PlayerClient__SetNameSpriteState_x                         0x1402E2D00
#define PlayerClient__SetNameSpriteTint_x                          0x1402E3CC0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F1C70
#define PlayerZoneClient__DoAttack_x                               0x1402F2980
#define PlayerZoneClient__GetLevel_x                               0x1402F60F0
#define PlayerZoneClient__IsValidTeleport_x                        0x140246930
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C210

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EBB90  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EBC40  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EBD40
#define PlayerManagerClient__CreatePlayer_x                        0x1402EB660
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140678880

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A11D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A0DD0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A0E40
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A1160  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A12F0
#define KeypressHandler__HandleKeyUp_x                             0x1402A13F0
#define KeypressHandler__SaveKeymapping_x                          0x1402A1070  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140632E50  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062D8F0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C6CE0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CC580
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CEC50
#define PcZoneClient__RemovePetEffect_x                            0x1402D11D0
#define PcZoneClient__HasAlternateAbility_x                        0x1402CF920
#define PcZoneClient__CanEquipItem_x                               0x1402CA880
#define PcZoneClient__GetItemByID_x                                0x1402CD610
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D0F50
#define PcZoneClient__BandolierSwap_x                              0x1402C9860
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CEBA0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024B460

// IconCache
#define IconCache__GetIcon_x                                       0x1403A11B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140395D10
#define CContainerMgr__CloseContainer_x                            0x140395650
#define CContainerMgr__OpenExperimentContainer_x                   0x140396090

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140487150

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293FA0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140417F90
#define CLootWnd__RequestLootSlot_x                                0x140418FD0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC620
#define EQ_Spell__SpellAffects_x                                   0x1401CD8E0
#define EQ_Spell__SpellAffectBase_x                                0x1401CD840
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6BA0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6B50
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD500
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD0C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC990

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF250

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404E29B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E20C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E18F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404E9A30  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174CF0
#define CTaskManager__GetTaskStatus_x                              0x140174E00
#define CTaskManager__GetElementDescription_x                      0x140174980

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA990
#define EqSoundManager__PlayScriptMp3_x                            0x1401C97D0
#define EqSoundManager__SoundAssistPlay_x                          0x140314690  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403149D0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14057AE90
#define CTextureAnimation__SetCurCell_x                            0x14057B1A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140292210

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064CAD0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064CB50
#define CharacterBase__IsExpansionFlag_x                           0x1401ED260

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403757B0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140376120
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140377670

// messages
#define msg_spell_worn_off_x                                       0x140201830
#define msg_new_text_x                                             0x1401FD100
#define __msgTokenTextParam_x                                      0x1401F4E90
#define msgTokenText_x                                             0x1401F4DB0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140316080
#define SpellManager__GetSpellByGroupAndRank_x                     0x140315FA0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140687880

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404113F0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039A8D0
#define CCursorAttachment__IsOkToActivate_x                        0x14039D840
#define CCursorAttachment__RemoveAttachment_x                      0x14039DAF0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B3F30
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B4120
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B4130

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143770
#define CFindItemWnd__Update_x                                     0x140144110
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DC40

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CF70
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA80
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E320
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E5D0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140469FA0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068BD30
#define CResolutionHandler__GetWindowedStyle_x                     0x14030ED00

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140392040

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140650B70  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140650A60  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B6C60
#define CGroupWnd__UpdateDisplay_x                                 0x1403B6840

// ItemBase
#define ItemBase__IsLore_x                                         0x14060B740
#define ItemBase__IsLoreEquipped_x                                 0x14060B7D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B3EE0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140243D00
#define EQPlacedItemManager__GetItemByGuid_x                       0x140243C90
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140243CD0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403093D0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DB40
#define FactionManagerClient__HandleFactionMessage_x               0x14011DEF0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D310
#define FactionManagerClient__GetMaxFaction_x                      0x14011D310
#define FactionManagerClient__GetMinFaction_x                      0x14011D1C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABF30

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129290

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5CB0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5030
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5AD0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5A50  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031B1A0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403093D0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B150

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140570B20

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084A00

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032C4C0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BF10

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140635CF0
#define FreeToPlayClient__RestrictionInfo_x                        0x140872160

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
