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

#define __ClientDate                                               20230808u
#define __ExpectedVersionDate                                     "Aug  8 2023"
#define __ExpectedVersionTime                                     "15:55:50"
#define __ActualVersionDate_x                                      0x14081BA18
#define __ActualVersionTime_x                                      0x14081BA08
#define __ActualVersionBuild_x                                     0x1408107C0

// Memory Protection
#define __MemChecker0_x                                            0x1402A7240
#define __MemChecker1_x                                            0x14055A3B0
#define __MemChecker4_x                                            0x140276250
#define __EncryptPad0_x                                            0x140AD7870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C138D0
#define instEQZoneInfo_x                                           0x140C13AC4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020EEF0
#define __gfMaxZoomCameraDistance_x                                0x140811970
#define __gfMaxCameraDistance_x                                    0x140850AB0
#define __CurrentSocial_x                                          0x14099394C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140ACF1B0
#define g_eqCommandStates_x                                        0x140AD0220
#define __CommandList_x                                            0x140AD0460
#define __ScreenMode_x                                             0x140B5B1AC
#define __gWorld_x                                                 0x140C0C7D0
#define __gpbCommandEvent_x                                        0x140C0C1F4
#define __ServerHost_x                                             0x140C0C3D8
#define __Guilds_x                                                 0x140C12480
#define __MouseEventTime_x                                         0x140C88E08
#define DI8__Mouse_Check_x                                         0x140C8CF38
#define __heqmain_x                                                0x140C8F3D0
#define DI8__Mouse_x                                               0x140C8F428
#define __HWnd_x                                                   0x140C8FED8
#define __Mouse_x                                                  0x140C8F3E8
#define DI8__Main_x                                                0x140C8F400
#define DI8__Keyboard_x                                            0x140C8F408
#define __LoginName_x                                              0x140C8FB6C
#define __CurrentMapLabel_x                                        0x140CA30B0
#define __LabelCache_x                                             0x140CA3C80
#define __SubscriptionType_x                                       0x140CD8B70
#define Teleport_Table_Size_x                                      0x140C0C280
#define Teleport_Table_x                                           0x140C0C800

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C0E810
#define pinstActiveBanker_x                                        0x140C0C718
#define pinstActiveCorpse_x                                        0x140C0C708
#define pinstActiveGMaster_x                                       0x140C0C710
#define pinstActiveMerchant_x                                      0x140C0C700
#define pinstAltAdvManager_x                                       0x140B5C038
#define pinstCEverQuest_x                                          0x140C8F420
#define pinstCamActor_x                                            0x140B5B198
#define pinstCDBStr_x                                              0x140B5AE40
#define pinstCDisplay_x                                            0x140C0E800
#define pinstControlledPlayer_x                                    0x140C0C7A8
#define pinstCResolutionHandler_x                                  0x141311718
#define pinstCSidlManager_x                                        0x140CB4F80
#define pinstCXWndManager_x                                        0x140CB4F78
#define instDynamicZone_x                                          0x140C12340 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C1238E
#define instExpeditionName_x                                       0x140C123CE
#define pinstDZMember_x                                            0x140C12458
#define pinstDZTimerInfo_x                                         0x140C12460
#define pinstEqLogin_x                                             0x140C8F4B0
#define instTribute_x                                              0x140ACA840
#define pinstEQSoundManager_x                                      0x140B5C3B8
#define pinstEQSpellStrings_x                                      0x140B3FA50
#define pinstSGraphicsEngine_x                                     0x141311498
#define pinstLocalPC_x                                             0x140C0C7E8
#define pinstLocalPlayer_x                                         0x140C0C6F8
#define pinstCMercenaryClientManager_x                             0x140C8A6B8
#define pinstModelPlayer_x                                         0x140C0C728
#define pinstRenderInterface_x                                     0x1413114B0
#define pinstSkillMgr_x                                            0x140C8C350
#define pinstSpawnManager_x                                        0x140C8AA70
#define pinstSpellManager_x                                        0x140C8C3B8
#define pinstStringTable_x                                         0x140C0C7F0
#define pinstSwitchManager_x                                       0x140C0BCD0
#define pinstTarget_x                                              0x140C0C7A0
#define pinstTaskMember_x                                          0x140ACA830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C0C7B0
#define pinstTradeTarget_x                                         0x140C0C720
#define instTributeActive_x                                        0x140ACA869
#define pinstViewActor_x                                           0x140B5B190
#define pinstWorldData_x                                           0x140C0C7F8
#define pinstPlayerPath_x                                          0x140C8AA98
#define pinstTargetIndicator_x                                     0x140C8C468
#define EQObject_Top_x                                             0x140C0C7C8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140CA0208
#define pinstCContainerMgr_x                                       0x140B5B448
#define pinstCContextMenuManager_x                                 0x140CB4C60
#define pinstCInvSlotMgr_x                                         0x140B5B428
#define pinstCItemDisplayManager_x                                 0x140CA2C80
#define pinstCPopupWndManager_x                                    0x140CA3510
#define pinstCSpellDisplayMgr_x                                    0x140CA3B60
#define pinstCTaskManager_x                                        0x140993C80
#define pinstEQSuiteTextureLoader_x                                0x140AE0EF0
#define pinstItemIconCache_x                                       0x140CA0568
#define pinstLootFiltersManager_x                                  0x140B5A888
#define pinstGFViewListener_x                                      0x140CB4438


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140236E60
#define __CastRay_x                                                0x14022F740
#define __CastRay2_x                                               0x14022F440
#define __ConvertItemTags_x                                        0x14022FB40
#define __CleanItemTags_x                                          0x1400875F0
#define __CreateCascadeMenuItems_x                                 0x1401802F0
#define __DoesFileExist_x                                          0x14055E270
#define __EQGetTime_x                                              0x14055A960
#define __ExecuteCmd_x                                             0x1402068F0
#define __FixHeading_x                                             0x140684560
#define __FlushDxKeyboard_x                                        0x140325CF0
#define __get_bearing_x                                            0x140239050
#define __get_melee_range_x                                        0x140239150
#define __GetAnimationCache_x                                      0x1403A0780
#define __GetGaugeValueFromEQ_x                                    0x1404D1610
#define __GetLabelFromEQ_x                                         0x1404D2C10
#define __GetXTargetType_x                                         0x140685880   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406845E0
#define __HelpPath_x                                               0x140C88CD0   // Why?
#define __NewUIINI_x                                               0x1404DE100   // Why?
#define __ProcessGameEvents_x                                      0x14026B670
#define __ProcessKeyboardEvents_x                                  0x140327550
#define __ProcessMouseEvents_x                                     0x14026CB70
#define __SaveColors_x                                             0x140190480
#define __STMLToText_x                                             0x14056A440
#define __WndProc_x                                                0x140324460
#define CMemoryMappedFile__SetFile_x                               0x1407BB2F0
#define DrawNetStatus_x                                            0x1402B6050
#define Util__FastTime_x                                           0x140559EF0
#define __eq_delete_x                                              0x1406AE704
#define __eq_new_x                                                 0x1406AE6C0
#define __CopyLayout_x                                             0x1402A3670
#define __ThrottleFrameRate_x                                      0x14025AF1D
#define __ThrottleFrameRateEnd_x                                   0x14025AF7D

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403369F0
#define CAAWnd__Update_x                                           0x140336CF0
#define CAAWnd__UpdateSelected_x                                   0x140337CB0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9810
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2140
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407F7858
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA100

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019B4D0
#define AltAdvManager__IsAbilityReady_x                            0x14019B750
#define AltAdvManager__GetAAById_x                                 0x14019ADA0
#define AltAdvManager__CanTrainAbility_x                           0x14019ABD0
#define AltAdvManager__CanSeeAbility_x                             0x14019A890

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400CFF70
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D0DA0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D0FF0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5750
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D19C0
#define CharacterZoneClient__CastSpell_x                           0x1400D1A60
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1220
#define CharacterZoneClient__Cur_HP_x                              0x1400E6E30
#define CharacterZoneClient__Cur_Mana_x                            0x1400E6FF0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4A80
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED7F0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC750  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D5F30
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4C20
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF390
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE260
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6100
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C65F0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C7FC0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE9A0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6AA0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF620
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6200
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0380
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6410
#define CharacterZoneClient__GetModCap_x                           0x1400F7AC0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D64B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D66C0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB130
#define CharacterZoneClient__HasSkill_x                            0x1400F3380
#define CharacterZoneClient__HitBySpell_x                          0x1400D7170
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAA00
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F75B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D02C0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F78F0
#define CharacterZoneClient__Max_Mana_x                            0x1402D04E0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7D50
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDE50
#define CharacterZoneClient__SpellDuration_x                       0x1400DEB90
#define CharacterZoneClient__TotalEffect_x                         0x1400DFED0
#define CharacterZoneClient__UseSkill_x                            0x1400FD6A0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140354F30

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035F1E0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035B0C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035A150

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140361890

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14085F1D8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140383180
#define CChatWindowManager__InitContextMenu_x                      0x140383310
#define CChatWindowManager__FreeChatWindow_x                       0x1403823D0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14038A1C0
#define CChatWindowManager__CreateChatWindow_x                     0x140381D10

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105830

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038B1B0
#define CChatWindow__Clear_x                                       0x14038C030
#define CChatWindow__WndNotification_x                             0x14038D220
#define CChatWindow__AddHistory_x                                  0x14038BB30

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140597980
#define CContextMenu__RemoveMenuItem_x                             0x140597D70
#define CContextMenu__RemoveAllMenuItems_x                         0x140597D40
#define CContextMenu__CheckMenuItem_x                              0x140597BB0
#define CContextMenu__SetMenuItem_x                                0x140597D90
#define CContextMenu__AddSeparator_x                               0x140597AF0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140589850
#define CContextMenuManager__RemoveMenu_x                          0x140589E30
#define CContextMenuManager__PopupMenu_x                           0x140589B70
#define CContextMenuManager__Flush_x                               0x1405898D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403988E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064D600
#define CChatService__GetFriendName_x                              0x14064D610

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057A7D0
#define CComboWnd__Draw_x                                          0x14057A8D0
#define CComboWnd__GetCurChoice_x                                  0x14057ABB0  // unused
#define CComboWnd__GetListRect_x                                   0x14057AC50
#define CComboWnd__InsertChoice_x                                  0x14057AF90
#define CComboWnd__SetColors_x                                     0x14057B320
#define CComboWnd__SetChoice_x                                     0x14057B2E0
#define CComboWnd__GetItemCount_x                                  0x14057AC40
#define CComboWnd__GetCurChoiceText_x                              0x14057ABF0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057AB80
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057B050

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140396660
#define CContainerWnd__SetContainer_x                              0x1403E9460
#define CContainerWnd__vftable_x                                   0x14082ACE8

// CDisplay
#define CDisplay__cameraType_x                                     0x140B5AF54
#define CDisplay__ZoneMainUI_x                                     0x1405B1AD0
#define CDisplay__PreZoneMainUI_x                                  0x14018D2A0
#define CDisplay__CleanGameUI_x                                    0x14017F3F0
#define CDisplay__GetClickedActor_x                                0x140183580
#define CDisplay__GetUserDefinedColor_x                            0x1401841F0
#define CDisplay__InitCharSelectUI_x                               0x1401844A0
#define CDisplay__ReloadUI_x                                       0x14018F580
#define CDisplay__WriteTextHD2_x                                   0x140196720
#define CDisplay__TrueDistance_x                                   0x1401963D0
#define CDisplay__SetViewActor_x                                   0x140192BF0
#define CDisplay__GetFloorHeight_x                                 0x1401837E0
#define CDisplay__ToggleScreenshotMode_x                           0x140195EC0
#define CDisplay__RealRender_World_x                               0x14018E970

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BBE20
#define CEditWnd__DrawCaret_x                                      0x1405AD810  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405ADCD0
#define CEditWnd__GetCaretPt_x                                     0x1405ADF50  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405ADF90
#define CEditWnd__GetDisplayString_x                               0x1405AE200
#define CEditWnd__GetHorzOffset_x                                  0x1405AE440
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AE590
#define CEditWnd__GetSelStartPt_x                                  0x1405AE870  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AE6C0
#define CEditWnd__PointFromPrintableChar_x                         0x1405AF420
#define CEditWnd__ReplaceSelection_x                               0x1405AF7D0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405AFC70
#define CEditWnd__SetEditable_x                                    0x1405AFF00
#define CEditWnd__SetWindowText_x                                  0x1405AFF30

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025BF00
#define CEverQuest__ClickedPlayer_x                                0x140251D30
#define CEverQuest__CreateTargetIndicator_x                        0x1402525F0
#define CEverQuest__DoTellWindow_x                                 0x140105540 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105E00 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025D930
#define CEverQuest__dsp_chat_x                                     0x140104F80 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140287B40
#define CEverQuest__Emote_x                                        0x14025E2E0
#define CEverQuest__GetBodyTypeDesc_x                              0x14025F080
#define CEverQuest__GetClassDesc_x                                 0x14025F0E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025F4B0
#define CEverQuest__GetDeityDesc_x                                 0x14025F760
#define CEverQuest__GetLangDesc_x                                  0x14025FB90
#define CEverQuest__GetRaceDesc_x                                  0x14025FF30
#define CEverQuest__InterpretCmd_x                                 0x140261840
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402768D0
#define CEverQuest__LMouseUp_x                                     0x1402631F0
#define CEverQuest__RightClickedOnPlayer_x                         0x140274130
#define CEverQuest__RMouseUp_x                                     0x14026D700
#define CEverQuest__SetGameState_x                                 0x140278E00
#define CEverQuest__UPCNotificationFlush_x                         0x14027E5F0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140262E60
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026EAB0
#define CEverQuest__ReportSuccessfulHit_x                          0x14026F910

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403AAB10

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0370
#define CGuild__GetGuildName_x                                     0x1400C03B0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CCFA0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140299120
#define CHotButton__SetCheck_x                                     0x1402993F0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E2150
#define CInvSlotMgr__MoveItem_x                                    0x1403E2330
#define CInvSlotMgr__SelectSlot_x                                  0x1403E3CE0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403DF380
#define CInvSlot__SliderComplete_x                                 0x1403E08D0
#define CInvSlot__GetItemBase_x                                    0x1403DAFB0
#define CInvSlot__UpdateItem_x                                     0x1403E0D90

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E4F40

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140406380
#define CItemDisplayWnd__UpdateStrings_x                           0x14069C358
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140402DB0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404045F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140405790

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CE1A0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404CFD80

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140509420

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403FF4F0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140147E80

// CLabel
#define CLabel__UpdateText_x                                       0x140410140

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057E160
#define CListWnd__dCListWnd_x                                      0x14057E5B0
#define CListWnd__vftable_x                                        0x14085D348
#define CListWnd__AddColumn_x                                      0x14057EC50
#define CListWnd__AddColumn1_x                                     0x14057ECF0
#define CListWnd__AddLine_x                                        0x14057EE50
#define CListWnd__AddString_x                                      0x14057F3E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14057F950
#define CListWnd__CalculateVSBRange_x                              0x14057FC30
#define CListWnd__ClearSel_x                                       0x14057FDE0
#define CListWnd__ClearAllSel_x                                    0x14057FD80
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14057FE40
#define CListWnd__Compare_x                                        0x140580000
#define CListWnd__Draw_x                                           0x1405804D0
#define CListWnd__DrawColumnSeparators_x                           0x140581080
#define CListWnd__DrawHeader_x                                     0x140581140
#define CListWnd__DrawItem_x                                       0x140581820
#define CListWnd__DrawLine_x                                       0x1405821A0
#define CListWnd__DrawSeparator_x                                  0x140582660
#define CListWnd__EnableLine_x                                     0x140582A80
#define CListWnd__EnsureVisible_x                                  0x140582AE0
#define CListWnd__ExtendSel_x                                      0x140582BE0
#define CListWnd__GetColumnMinWidth_x                              0x140582F10
#define CListWnd__GetColumnWidth_x                                 0x140582F90
#define CListWnd__GetCurSel_x                                      0x140583090
#define CListWnd__GetItemData_x                                    0x140583410
#define CListWnd__GetItemHeight_x                                  0x140583450
#define CListWnd__GetItemRect_x                                    0x140583670
#define CListWnd__GetItemText_x                                    0x140583910
#define CListWnd__GetSelList_x                                     0x140583B60
#define CListWnd__GetSeparatorRect_x                               0x140583D50
#define CListWnd__InsertLine_x                                     0x1405851D0
#define CListWnd__RemoveLine_x                                     0x140585840
#define CListWnd__SetColors_x                                      0x140585C10
#define CListWnd__SetColumnJustification_x                         0x140585C30
#define CListWnd__SetColumnLabel_x                                 0x140585CB0
#define CListWnd__SetColumnWidth_x                                 0x140585E50
#define CListWnd__SetCurSel_x                                      0x140585F20
#define CListWnd__SetItemColor_x                                   0x140586190
#define CListWnd__SetItemData_x                                    0x140586230
#define CListWnd__SetItemText_x                                    0x140586470
#define CListWnd__Sort_x                                           0x140586880
#define CListWnd__ToggleSel_x                                      0x1405869F0
#define CListWnd__SetColumnsSizable_x                              0x140585EA0
#define CListWnd__SetItemWnd_x                                     0x1405865A0
#define CListWnd__GetItemWnd_x                                     0x140583AF0
#define CListWnd__SetItemIcon_x                                    0x140586270
#define CListWnd__CalculateCustomWindowPositions_x                 0x14057F720
#define CListWnd__SetVScrollPos_x                                  0x1405867E0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140423400

// MapViewMap
#define MapViewMap__vftable_x                                      0x140837840
#define MapViewMap__Clear_x                                        0x140424F80
#define MapViewMap__SetZoom_x                                      0x14042B5C0
#define MapViewMap__HandleLButtonDown_x                            0x140428100

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044CD10  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404532E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140453A90
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404572A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404565F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045B550

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062B080
#define CPacketScrambler__hton_x                                   0x14062B070

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A70F0
#define CSidlManagerBase__FindAnimation1_x                         0x1405A7030
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A7720
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A74D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A6430
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A63C0
#define CSidlManagerBase__CreateXWnd_x                             0x1405A5A20

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C1430
#define CSidlManager__CreateXWnd_x                                 0x1404C15F0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056BED0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056BFF0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B63E0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056C170
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056B660
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056B730
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056B900
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056C810
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056CA40
#define CSidlScreenWnd__GetChildItem_x                             0x14056CBE0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056CE30
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140576D80 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056D1A0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056D4E0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056DDA0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056E690
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB42D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056ECD0
#define CSidlScreenWnd__StoreIniVis_x                              0x14056F4C0
#define CSidlScreenWnd__vftable_x                                  0x14085C598
#define CSidlScreenWnd__WndNotification_x                          0x14056F510

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030F530 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030F930 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030F870
#define CSkillMgr__IsActivatedSkill_x                              0x14030FCD0
#define CSkillMgr__IsCombatSkill_x                                 0x14030FD10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DE190
#define CSliderWnd__SetValue_x                                     0x140587B40
#define CSliderWnd__SetNumTicks_x                                  0x1405879C0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C7A60

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058C290
#define CStmlWnd__CalculateHSBRange_x                              0x140576730
#define CStmlWnd__CalculateVSBRange_x                              0x14058D140
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058DC40
#define CStmlWnd__ForceParseNow_x                                  0x14058DCE0
#define CStmlWnd__GetVisibleText_x                                 0x14058E3B0
#define CStmlWnd__MakeStmlColorTag_x                               0x140590110
#define CStmlWnd__MakeWndNotificationTag_x                         0x140590150
#define CStmlWnd__SetSTMLText_x                                    0x140597120
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405972D0
#define CStmlWnd__UpdateHistoryString_x                            0x140597660

// CTabWnd
#define CTabWnd__Draw_x                                            0x140587EF0
#define CTabWnd__DrawCurrentPage_x                                 0x140587F90
#define CTabWnd__DrawTab_x                                         0x140588360
#define CTabWnd__GetTabRect_x                                      0x1405889C0
#define CTabWnd__InsertPage_x                                      0x140588C90
#define CTabWnd__RemovePage_x                                      0x140588F20
#define CTabWnd__SetPage_x                                         0x140589080
#define CTabWnd__UpdatePage_x                                      0x140589380

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B0360
#define CPageWnd__SetTabText_x                                     0x1405B03D0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9AA0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9EB0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059EAF0
#define CTextureFont__DrawWrappedText1_x                           0x14059EA00
#define CTextureFont__DrawWrappedText2_x                           0x14059EC20
#define CTextureFont__GetTextExtent_x                              0x14059EFD0
#define CTextureFont__GetHeight_x                                  0x14059EF90

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B4B40

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140568B30

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE0860
#define CXStr__gCXStrAccess_x                                      0x140CB40D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140571EE0
#define CXWnd__ClrFocus_x                                          0x140572120
#define CXWnd__Destroy_x                                           0x1405722A0
#define CXWnd__DoAllDrawing_x                                      0x1405723B0
#define CXWnd__DrawColoredRect_x                                   0x140572B70
#define CXWnd__DrawTooltip_x                                       0x1405741D0
#define CXWnd__DrawTooltipAtPoint_x                                0x140574280
#define CXWnd__GetChildItem_x                                      0x140574B80
#define CXWnd__GetChildWndAt_x                                     0x140574C40
#define CXWnd__GetClientRect_x                                     0x140574EF0
#define CXWnd__GetClientClipRect_x                                 0x140574DA0
#define CXWnd__GetRelativeRect_x                                   0x140576870
#define CXWnd__GetScreenClipRect_x                                 0x140576980
#define CXWnd__GetScreenRect_x                                     0x140576B00
#define CXWnd__GetTooltipRect_x                                    0x140576C80
#define CXWnd__IsActive_x                                          0x140577240
#define CXWnd__IsDescendantOf_x                                    0x140577270
#define CXWnd__IsReallyVisible_x                                   0x1405772E0
#define CXWnd__IsType_x                                            0x140577320
#define CXWnd__Minimize_x                                          0x140577410
#define CXWnd__ProcessTransition_x                                 0x140578310
#define CXWnd__Resize_x                                            0x140578430
#define CXWnd__Right_x                                             0x1405784D0
#define CXWnd__SetFocus_x                                          0x140578890
#define CXWnd__SetFont_x                                           0x1405788E0
#define CXWnd__SetKeyTooltip_x                                     0x1405789E0
#define CXWnd__SetMouseOver_x                                      0x140578B10
#define CXWnd__SetParent_x                                         0x140578B90
#define CXWnd__StartFade_x                                         0x140578FE0
#define CXWnd__vftable_x                                           0x14085CBB0
#define CXWnd__CXWnd_x                                             0x140570AC0
#define CXWnd__dCXWnd_x                                            0x1405713E0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BB5A0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140598F40
#define CXWndManager__DrawCursor_x                                 0x140599220
#define CXWndManager__DrawWindows_x                                0x140599480
#define CXWndManager__GetKeyboardFlags_x                           0x140599B40
#define CXWndManager__HandleKeyboardMsg_x                          0x140599B80
#define CXWndManager__RemoveWnd_x                                  0x14059D1B0

// CDBStr
#define CDBStr__GetString_x                                        0x14017D560

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140633FC0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDD50
#define CCharacterListWnd__EnterWorld_x                            0x1400CCA50
#define CCharacterListWnd__Quit_x                                  0x1400CDD30
#define CCharacterListWnd__UpdateList_x                            0x1400CEA40

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140603900
#define ItemBase__CreateItemTagString_x                            0x140604360
#define ItemBase__GetImageNum_x                                    0x1406068D0
#define ItemBase__GetItemValue_x                                   0x1406083E0
#define ItemBase__IsEmpty_x                                        0x140609F90
#define ItemBase__IsKeyRingItem_x                                  0x14060A6C0
#define ItemBase__ValueSellMerchant_x                              0x14060E730
#define ItemClient__CanDrop_x                                      0x14029B6F0
#define ItemClient__CanGoInBag_x                                   0x14029B820
#define ItemClient__CreateItemClient_x                             0x14029BB00
#define ItemClient__dItemClient_x                                  0x14029B560

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019CC70
#define EQ_LoadingS__Array_x                                       0x140ACCCC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061A890
#define PcBase__GetCombatAbility_x                                 0x14061AF30
#define PcBase__GetCombatAbilityTimer_x                            0x14061AFD0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061B720
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061C0B0
#define PcClient__AlertInventoryChanged_x                          0x1402BDAF0
#define PcClient__GetConLevel_x                                    0x1402BE0D0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C0790
#define PcClient__HasLoreItem_x                                    0x1402C1890
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CE7F0
#define PcZoneClient__RemoveMyAffect_x                             0x1402D1390

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020AF60  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B110  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B270  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B1B0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140243620  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140177D70

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140676F70
#define PlayerBase__CanSee1_x                                      0x140677040
#define PlayerBase__GetVisibilityLineSegment_x                     0x140677500
#define PlayerBase__HasProperty_x                                  0x140677720
#define PlayerBase__IsTargetable_x                                 0x1406777E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DD2E0
#define PlayerClient__GetPcClient_x                                0x1402DF9B0
#define PlayerClient__PlayerClient_x                               0x1402D6640
#define PlayerClient__SetNameSpriteState_x                         0x1402E2E60
#define PlayerClient__SetNameSpriteTint_x                          0x1402E3E20
#define PlayerZoneClient__ChangeHeight_x                           0x1402F20B0
#define PlayerZoneClient__DoAttack_x                               0x1402F2DC0
#define PlayerZoneClient__GetLevel_x                               0x1402F6530
#define PlayerZoneClient__IsValidTeleport_x                        0x1402463B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018BB30

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EBD80  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EBE30  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EBEE0
#define PlayerManagerClient__CreatePlayer_x                        0x1402EB780
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140676BE0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A0B90
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A0790
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A0800
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A0B20  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A0CB0
#define KeypressHandler__HandleKeyUp_x                             0x1402A0DB0
#define KeypressHandler__SaveKeymapping_x                          0x1402A0A30  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140631B80  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062C720

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C6FA0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CC840
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CEEF0
#define PcZoneClient__RemovePetEffect_x                            0x1402D1490
#define PcZoneClient__HasAlternateAbility_x                        0x1402CFBE0
#define PcZoneClient__CanEquipItem_x                               0x1402CAB40
#define PcZoneClient__GetItemByID_x                                0x1402CD8A0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D1210
#define PcZoneClient__BandolierSwap_x                              0x1402C9B20
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CEE40

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024AEE0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A07B0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140395440
#define CContainerMgr__CloseContainer_x                            0x140394D80
#define CContainerMgr__OpenExperimentContainer_x                   0x1403957C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140486170

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402938E0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140417430
#define CLootWnd__RequestLootSlot_x                                0x140418450

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CCCF0
#define EQ_Spell__SpellAffects_x                                   0x1401CDFB0
#define EQ_Spell__SpellAffectBase_x                                0x1401CDF10
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D68A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6850
#define EQ_Spell__IsSPAStacking_x                                  0x1401CDBD0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD790
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CD060

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BEFC0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404E1F80  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404E1FC0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E14C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E0A70

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404E9020  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174620
#define CTaskManager__GetTaskStatus_x                              0x140174730
#define CTaskManager__GetElementDescription_x                      0x1401742B0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CB060
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9EA0
#define EqSoundManager__SoundAssistPlay_x                          0x140314990  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140314CD0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140579D80
#define CTextureAnimation__SetCurCell_x                            0x14057A090

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140291B50

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064B060
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064B0E0
#define CharacterBase__IsExpansionFlag_x                           0x1401ED720

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403751A0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140375B00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140377040

// messages
#define msg_spell_worn_off_x                                       0x1402019E0
#define msg_new_text_x                                             0x1401FD350
#define __msgTokenTextParam_x                                      0x1401F5120
#define msgTokenText_x                                             0x1401F5040

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140316380
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403162A0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140685C60

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140410890

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039C8E0
#define CCursorAttachment__AttachToCursor1_x                       0x140399FC0
#define CCursorAttachment__Deactivate_x                            0x14039CE40

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B2FE0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B31D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B31E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143110
#define CFindItemWnd__Update_x                                     0x140143AB0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D5D0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014C920
#define LootFiltersManager__GetItemFilterData_x                    0x14014D430
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014DCD0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014DF80

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404694A0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068A100
#define CResolutionHandler__GetWindowedStyle_x                     0x14030F090

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140391790

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14064F080  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14064EF70  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B61E0
#define CGroupWnd__UpdateDisplay_x                                 0x1403B5DC0

// ItemBase
#define ItemBase__IsLore_x                                         0x14060A790
#define ItemBase__IsLoreEquipped_x                                 0x14060A820

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B4280

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140243780
#define EQPlacedItemManager__GetItemByGuid_x                       0x140243710
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140243750

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140309720

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D980
#define FactionManagerClient__HandleFactionMessage_x               0x14011DD30
#define FactionManagerClient__GetFactionStanding_x                 0x14011D150
#define FactionManagerClient__GetMaxFaction_x                      0x14011D150
#define FactionManagerClient__GetMinFaction_x                      0x14011D000

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABCB0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129040

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A55D0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4950
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A53F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5370  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031B4B0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140309720

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B300

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056FB00

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400847B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032CA20

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BCC0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
