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

#define __ClientDate                                               20230825u
#define __ExpectedVersionDate                                     "Aug 25 2023"
#define __ExpectedVersionTime                                     "09:43:43"
#define __ActualVersionDate_x                                      0x14081BA18
#define __ActualVersionTime_x                                      0x14081BA08
#define __ActualVersionBuild_x                                     0x1408107C0

// Memory Protection
#define __MemChecker0_x                                            0x1402A7120
#define __MemChecker1_x                                            0x140559E90
#define __MemChecker4_x                                            0x140276170
#define __EncryptPad0_x                                            0x140AD7870

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C138D0
#define instEQZoneInfo_x                                           0x140C13AC4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020EE50
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
#define __allowslashcommand_x                                      0x140236DA0
#define __CastRay_x                                                0x14022F690
#define __CastRay2_x                                               0x14022F390
#define __ConvertItemTags_x                                        0x14022FA90
#define __CleanItemTags_x                                          0x1400875F0
#define __CreateCascadeMenuItems_x                                 0x1401802E0
#define __DoesFileExist_x                                          0x14055DD50
#define __EQGetTime_x                                              0x14055A440
#define __ExecuteCmd_x                                             0x140206850
#define __FixHeading_x                                             0x1406845F0
#define __FlushDxKeyboard_x                                        0x140325B40
#define __get_bearing_x                                            0x140238F90
#define __get_melee_range_x                                        0x140239090
#define __GetAnimationCache_x                                      0x1403A05A0
#define __GetGaugeValueFromEQ_x                                    0x1404D10E0
#define __GetLabelFromEQ_x                                         0x1404D26E0
#define __GetXTargetType_x                                         0x140685910   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140684670
#define __HelpPath_x                                               0x140C88CD0   // Why?
#define __NewUIINI_x                                               0x1404DDBE0   // Why?
#define __ProcessGameEvents_x                                      0x14026B5B0
#define __ProcessKeyboardEvents_x                                  0x1403273A0
#define __ProcessMouseEvents_x                                     0x14026CAA0
#define __SaveColors_x                                             0x140190470
#define __STMLToText_x                                             0x140569F20
#define __WndProc_x                                                0x1403242B0
#define CMemoryMappedFile__SetFile_x                               0x1407BB360
#define DrawNetStatus_x                                            0x1402B5EE0
#define Util__FastTime_x                                           0x1405599D0
#define __eq_delete_x                                              0x1406AE794
#define __eq_new_x                                                 0x1406AE750
#define __CopyLayout_x                                             0x1402A3530
#define __ThrottleFrameRate_x                                      0x14025AE5D
#define __ThrottleFrameRateEnd_x                                   0x14025AEBD

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140336830
#define CAAWnd__Update_x                                           0x140336B30
#define CAAWnd__UpdateSelected_x                                   0x140337AF0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9810
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2140
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407F7858
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA100

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019B4C0
#define AltAdvManager__IsAbilityReady_x                            0x14019B740
#define AltAdvManager__GetAAById_x                                 0x14019AD90
#define AltAdvManager__CanTrainAbility_x                           0x14019ABC0
#define AltAdvManager__CanSeeAbility_x                             0x14019A880

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0010
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D0E40
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1090
#define CharacterZoneClient__CanUseItem_x                          0x1400E5780
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1A60
#define CharacterZoneClient__CastSpell_x                           0x1400D1B00
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1250
#define CharacterZoneClient__Cur_HP_x                              0x1400E6E60
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7020
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4B10
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED810
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC770  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D5FC0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4C50
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF3B0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE280
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6190
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6620
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C7FF0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE9C0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6AD0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF640
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6290
#define CharacterZoneClient__GetManaRegen_x                        0x1400F03A0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D64A0
#define CharacterZoneClient__GetModCap_x                           0x1400F7AE0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6540
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6750
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB160
#define CharacterZoneClient__HasSkill_x                            0x1400F33A0
#define CharacterZoneClient__HitBySpell_x                          0x1400D7200
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAA90
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F75D0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D0160  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7910
#define CharacterZoneClient__Max_Mana_x                            0x1402D0380  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7D70
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDED0
#define CharacterZoneClient__SpellDuration_x                       0x1400DEBD0
#define CharacterZoneClient__TotalEffect_x                         0x1400DFF00
#define CharacterZoneClient__UseSkill_x                            0x1400FD6C0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140354D90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035F010

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035AF00
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140359F90

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403616D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x14085F1D8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140382F60
#define CChatWindowManager__InitContextMenu_x                      0x1403830F0
#define CChatWindowManager__FreeChatWindow_x                       0x1403821B0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140389FA0
#define CChatWindowManager__CreateChatWindow_x                     0x140381AF0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105820

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038AF90
#define CChatWindow__Clear_x                                       0x14038BE10
#define CChatWindow__WndNotification_x                             0x14038D000
#define CChatWindow__AddHistory_x                                  0x14038B910

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140597670
#define CContextMenu__RemoveMenuItem_x                             0x140597A60
#define CContextMenu__RemoveAllMenuItems_x                         0x140597A30
#define CContextMenu__CheckMenuItem_x                              0x1405978A0
#define CContextMenu__SetMenuItem_x                                0x140597A80
#define CContextMenu__AddSeparator_x                               0x1405977E0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140589560
#define CContextMenuManager__RemoveMenu_x                          0x140589B40
#define CContextMenuManager__PopupMenu_x                           0x140589880
#define CContextMenuManager__Flush_x                               0x1405895E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403986B0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064D6B0
#define CChatService__GetFriendName_x                              0x14064D6C0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057A2E0
#define CComboWnd__Draw_x                                          0x14057A3E0
#define CComboWnd__GetCurChoice_x                                  0x14057A6C0  // unused
#define CComboWnd__GetListRect_x                                   0x14057A760
#define CComboWnd__InsertChoice_x                                  0x14057AAA0
#define CComboWnd__SetColors_x                                     0x14057AE30
#define CComboWnd__SetChoice_x                                     0x14057ADF0
#define CComboWnd__GetItemCount_x                                  0x14057A750
#define CComboWnd__GetCurChoiceText_x                              0x14057A700  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057A690
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057AB60

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140396420
#define CContainerWnd__SetContainer_x                              0x1403E9200
#define CContainerWnd__vftable_x                                   0x14082ACE8

// CDisplay
#define CDisplay__cameraType_x                                     0x140B5AF54
#define CDisplay__ZoneMainUI_x                                     0x1405B1780
#define CDisplay__PreZoneMainUI_x                                  0x14018D290
#define CDisplay__CleanGameUI_x                                    0x14017F3E0
#define CDisplay__GetClickedActor_x                                0x140183570
#define CDisplay__GetUserDefinedColor_x                            0x1401841E0
#define CDisplay__InitCharSelectUI_x                               0x140184490
#define CDisplay__ReloadUI_x                                       0x14018F570
#define CDisplay__WriteTextHD2_x                                   0x140196710
#define CDisplay__TrueDistance_x                                   0x1401963C0
#define CDisplay__SetViewActor_x                                   0x140192BE0
#define CDisplay__GetFloorHeight_x                                 0x1401837D0
#define CDisplay__ToggleScreenshotMode_x                           0x140195EB0
#define CDisplay__RealRender_World_x                               0x14018E960

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BBAD0
#define CEditWnd__DrawCaret_x                                      0x1405AD490  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405AD950
#define CEditWnd__GetCaretPt_x                                     0x1405ADBD0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405ADC10
#define CEditWnd__GetDisplayString_x                               0x1405ADE80
#define CEditWnd__GetHorzOffset_x                                  0x1405AE0C0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AE210
#define CEditWnd__GetSelStartPt_x                                  0x1405AE4F0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AE340
#define CEditWnd__PointFromPrintableChar_x                         0x1405AF0A0
#define CEditWnd__ReplaceSelection_x                               0x1405AF450
#define CEditWnd__SelectableCharFromPoint_x                        0x1405AF8F0
#define CEditWnd__SetEditable_x                                    0x1405AFB80
#define CEditWnd__SetWindowText_x                                  0x1405AFBB0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025BE40
#define CEverQuest__ClickedPlayer_x                                0x140251C70
#define CEverQuest__CreateTargetIndicator_x                        0x140252530
#define CEverQuest__DoTellWindow_x                                 0x140105530 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105DF0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025D870
#define CEverQuest__dsp_chat_x                                     0x140104F70 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140287A60
#define CEverQuest__Emote_x                                        0x14025E220
#define CEverQuest__GetBodyTypeDesc_x                              0x14025EFC0
#define CEverQuest__GetClassDesc_x                                 0x14025F020
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025F3F0
#define CEverQuest__GetDeityDesc_x                                 0x14025F6A0
#define CEverQuest__GetLangDesc_x                                  0x14025FAD0
#define CEverQuest__GetRaceDesc_x                                  0x14025FE70
#define CEverQuest__InterpretCmd_x                                 0x140261780
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402767F0
#define CEverQuest__LMouseUp_x                                     0x140263130
#define CEverQuest__RightClickedOnPlayer_x                         0x140274060
#define CEverQuest__RMouseUp_x                                     0x14026D630
#define CEverQuest__SetGameState_x                                 0x140278D20
#define CEverQuest__UPCNotificationFlush_x                         0x14027E510 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140262DA0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026E9E0
#define CEverQuest__ReportSuccessfulHit_x                          0x14026F840

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403AA960

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0370
#define CGuild__GetGuildName_x                                     0x1400C03B0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CCE20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140299030
#define CHotButton__SetCheck_x                                     0x140299300

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E1F60
#define CInvSlotMgr__MoveItem_x                                    0x1403E2140
#define CInvSlotMgr__SelectSlot_x                                  0x1403E3AB0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403DF1C0
#define CInvSlot__SliderComplete_x                                 0x1403E0710
#define CInvSlot__GetItemBase_x                                    0x1403DAE00
#define CInvSlot__UpdateItem_x                                     0x1403E0BC0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E4D10

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404060C0
#define CItemDisplayWnd__UpdateStrings_x                           0x140408A80
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140402B20
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140404350
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404054F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CDC70
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404CF850

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140508F00

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403FF270

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140147E80

// CLabel
#define CLabel__UpdateText_x                                       0x14040FE60

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057DC70
#define CListWnd__dCListWnd_x                                      0x14057E0C0
#define CListWnd__vftable_x                                        0x14085D348
#define CListWnd__AddColumn_x                                      0x14057E760
#define CListWnd__AddColumn1_x                                     0x14057E800
#define CListWnd__AddLine_x                                        0x14057E960
#define CListWnd__AddString_x                                      0x14057EEF0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14057F460
#define CListWnd__CalculateVSBRange_x                              0x14057F740
#define CListWnd__ClearSel_x                                       0x14057F8F0
#define CListWnd__ClearAllSel_x                                    0x14057F890
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14057F950
#define CListWnd__Compare_x                                        0x14057FB10
#define CListWnd__Draw_x                                           0x14057FFE0
#define CListWnd__DrawColumnSeparators_x                           0x140580B80
#define CListWnd__DrawHeader_x                                     0x140580C40
#define CListWnd__DrawItem_x                                       0x140581320
#define CListWnd__DrawLine_x                                       0x140581CA0
#define CListWnd__DrawSeparator_x                                  0x140582160
#define CListWnd__EnableLine_x                                     0x140582580
#define CListWnd__EnsureVisible_x                                  0x1405825E0
#define CListWnd__ExtendSel_x                                      0x1405826E0
#define CListWnd__GetColumnMinWidth_x                              0x140582A10
#define CListWnd__GetColumnWidth_x                                 0x140582A90
#define CListWnd__GetCurSel_x                                      0x140582B90
#define CListWnd__GetItemData_x                                    0x140582F10
#define CListWnd__GetItemHeight_x                                  0x140582F50
#define CListWnd__GetItemRect_x                                    0x140583170
#define CListWnd__GetItemText_x                                    0x140583410
#define CListWnd__GetSelList_x                                     0x140583660
#define CListWnd__GetSeparatorRect_x                               0x140583850
#define CListWnd__InsertLine_x                                     0x140584CD0
#define CListWnd__RemoveLine_x                                     0x140585340
#define CListWnd__SetColors_x                                      0x140585710
#define CListWnd__SetColumnJustification_x                         0x140585730
#define CListWnd__SetColumnLabel_x                                 0x1405857B0
#define CListWnd__SetColumnWidth_x                                 0x140585950
#define CListWnd__SetCurSel_x                                      0x140585A20
#define CListWnd__SetItemColor_x                                   0x140585C90
#define CListWnd__SetItemData_x                                    0x140585D30
#define CListWnd__SetItemText_x                                    0x140585F70
#define CListWnd__Sort_x                                           0x140586380
#define CListWnd__ToggleSel_x                                      0x1405864F0
#define CListWnd__SetColumnsSizable_x                              0x1405859A0
#define CListWnd__SetItemWnd_x                                     0x1405860A0
#define CListWnd__GetItemWnd_x                                     0x1405835F0
#define CListWnd__SetItemIcon_x                                    0x140585D70
#define CListWnd__CalculateCustomWindowPositions_x                 0x14057F230
#define CListWnd__SetVScrollPos_x                                  0x1405862E0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404230F0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140837840
#define MapViewMap__Clear_x                                        0x140424C60
#define MapViewMap__SetZoom_x                                      0x14042B2A0
#define MapViewMap__HandleLButtonDown_x                            0x140427DE0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044C9C0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140452F90
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140453740
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140456F40
#define CMerchantWnd__SelectBuySellSlot_x                          0x140456290
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045B1E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062B140
#define CPacketScrambler__hton_x                                   0x14062B130

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A6D60
#define CSidlManagerBase__FindAnimation1_x                         0x1405A6CA0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A7390
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A7140
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A60A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A6030
#define CSidlManagerBase__CreateXWnd_x                             0x1405A56A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C0F20
#define CSidlManager__CreateXWnd_x                                 0x1404C10E0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056B9B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056BAD0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B6090 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056BC50
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056B140
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056B210
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056B3E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056C2F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056C520
#define CSidlScreenWnd__GetChildItem_x                             0x14056C6C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056C910
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140576880 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056CC80
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056CFF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056D8B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056E1A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CB42D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056E7E0
#define CSidlScreenWnd__StoreIniVis_x                              0x14056EFD0
#define CSidlScreenWnd__vftable_x                                  0x14085C598
#define CSidlScreenWnd__WndNotification_x                          0x14056F020

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030F390 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030F790 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030F6D0
#define CSkillMgr__IsActivatedSkill_x                              0x14030FB30
#define CSkillMgr__IsCombatSkill_x                                 0x14030FB70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DDC60
#define CSliderWnd__SetValue_x                                     0x140587670
#define CSliderWnd__SetNumTicks_x                                  0x1405874F0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C7530

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058BFA0
#define CStmlWnd__CalculateHSBRange_x                              0x140576250
#define CStmlWnd__CalculateVSBRange_x                              0x14058CE50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058D940
#define CStmlWnd__ForceParseNow_x                                  0x14058D9E0
#define CStmlWnd__GetVisibleText_x                                 0x14058E0B0
#define CStmlWnd__MakeStmlColorTag_x                               0x14058FE10
#define CStmlWnd__MakeWndNotificationTag_x                         0x14058FE50
#define CStmlWnd__SetSTMLText_x                                    0x140596E20
#define CStmlWnd__StripFirstSTMLLines_x                            0x140596FD0
#define CStmlWnd__UpdateHistoryString_x                            0x140597360

// CTabWnd
#define CTabWnd__Draw_x                                            0x140587C20
#define CTabWnd__DrawCurrentPage_x                                 0x140587CC0
#define CTabWnd__DrawTab_x                                         0x140588090
#define CTabWnd__GetTabRect_x                                      0x1405886F0
#define CTabWnd__InsertPage_x                                      0x1405889C0
#define CTabWnd__RemovePage_x                                      0x140588C40
#define CTabWnd__SetPage_x                                         0x140588DA0
#define CTabWnd__UpdatePage_x                                      0x1405890A0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B0000
#define CPageWnd__SetTabText_x                                     0x1405B0070

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9AB0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9EC0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059E770
#define CTextureFont__DrawWrappedText1_x                           0x14059E680
#define CTextureFont__DrawWrappedText2_x                           0x14059E8A0
#define CTextureFont__GetTextExtent_x                              0x14059EC50
#define CTextureFont__GetHeight_x                                  0x14059EC10

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B47F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140568610

// CXStr
#define CXStr__gFreeLists_x                                        0x140AE0860
#define CXStr__gCXStrAccess_x                                      0x140CB40D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140571A10
#define CXWnd__ClrFocus_x                                          0x140571C50
#define CXWnd__Destroy_x                                           0x140571DD0
#define CXWnd__DoAllDrawing_x                                      0x140571EE0
#define CXWnd__DrawColoredRect_x                                   0x1405726A0
#define CXWnd__DrawTooltip_x                                       0x140573CE0
#define CXWnd__DrawTooltipAtPoint_x                                0x140573D90
#define CXWnd__GetChildItem_x                                      0x140574690
#define CXWnd__GetChildWndAt_x                                     0x140574750
#define CXWnd__GetClientRect_x                                     0x140574A00
#define CXWnd__GetClientClipRect_x                                 0x1405748B0
#define CXWnd__GetRelativeRect_x                                   0x140576390
#define CXWnd__GetScreenClipRect_x                                 0x140576490
#define CXWnd__GetScreenRect_x                                     0x140576600
#define CXWnd__GetTooltipRect_x                                    0x140576780
#define CXWnd__IsActive_x                                          0x140576D40
#define CXWnd__IsDescendantOf_x                                    0x140576D70
#define CXWnd__IsReallyVisible_x                                   0x140576DE0
#define CXWnd__IsType_x                                            0x140576E20
#define CXWnd__Minimize_x                                          0x140576F20
#define CXWnd__ProcessTransition_x                                 0x140577E20
#define CXWnd__Resize_x                                            0x140577F40
#define CXWnd__Right_x                                             0x140577FE0
#define CXWnd__SetFocus_x                                          0x140578380
#define CXWnd__SetFont_x                                           0x1405783D0
#define CXWnd__SetKeyTooltip_x                                     0x1405784D0
#define CXWnd__SetMouseOver_x                                      0x140578600
#define CXWnd__SetParent_x                                         0x140578680
#define CXWnd__StartFade_x                                         0x140578AC0
#define CXWnd__vftable_x                                           0x14085CBB0
#define CXWnd__CXWnd_x                                             0x1405705D0
#define CXWnd__dCXWnd_x                                            0x140570F20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BB250

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140598C20
#define CXWndManager__DrawCursor_x                                 0x140598F00
#define CXWndManager__DrawWindows_x                                0x140599160
#define CXWndManager__GetKeyboardFlags_x                           0x140599820
#define CXWndManager__HandleKeyboardMsg_x                          0x140599860
#define CXWndManager__RemoveWnd_x                                  0x14059CE30

// CDBStr
#define CDBStr__GetString_x                                        0x14017D550

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140634070

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDD70
#define CCharacterListWnd__EnterWorld_x                            0x1400CCA70
#define CCharacterListWnd__Quit_x                                  0x1400CDD50
#define CCharacterListWnd__UpdateList_x                            0x1400CEA60

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406035E0
#define ItemBase__CreateItemTagString_x                            0x140604030
#define ItemBase__GetImageNum_x                                    0x1406065F0
#define ItemBase__GetItemValue_x                                   0x140608450
#define ItemBase__IsEmpty_x                                        0x14060A070
#define ItemBase__IsKeyRingItem_x                                  0x14060A7A0
#define ItemBase__ValueSellMerchant_x                              0x14060E810
#define ItemClient__CanDrop_x                                      0x14029B5C0
#define ItemClient__CanGoInBag_x                                   0x14029B6F0
#define ItemClient__CreateItemClient_x                             0x14029B9D0
#define ItemClient__dItemClient_x                                  0x14029B430

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019CC60
#define EQ_LoadingS__Array_x                                       0x140ACCCC0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061A960
#define PcBase__GetCombatAbility_x                                 0x14061B000
#define PcBase__GetCombatAbilityTimer_x                            0x14061B0A0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061B7F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061C180
#define PcClient__AlertInventoryChanged_x                          0x1402BD9D0
#define PcClient__GetConLevel_x                                    0x1402BDFB0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C0690
#define PcClient__HasLoreItem_x                                    0x1402C1780
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CE6C0
#define PcZoneClient__RemoveMyAffect_x                             0x1402D1230

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020AEC0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B070  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B1D0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B110  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140243560  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140177D80

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140677020
#define PlayerBase__CanSee1_x                                      0x1406770F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406775B0
#define PlayerBase__HasProperty_x                                  0x1406777D0
#define PlayerBase__IsTargetable_x                                 0x140677890
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DD170
#define PlayerClient__GetPcClient_x                                0x1402DF840
#define PlayerClient__PlayerClient_x                               0x1402D64D0
#define PlayerClient__SetNameSpriteState_x                         0x1402E2CF0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E3CB0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F1F80
#define PlayerZoneClient__DoAttack_x                               0x1402F2C90
#define PlayerZoneClient__GetLevel_x                               0x1402F6400
#define PlayerZoneClient__IsValidTeleport_x                        0x1402462F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018BB20

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EBC50  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EBD00  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EBDB0
#define PlayerManagerClient__CreatePlayer_x                        0x1402EB650
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140676CA0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A0A50
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A0650
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A06C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A09E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A0B70
#define KeypressHandler__HandleKeyUp_x                             0x1402A0C70
#define KeypressHandler__SaveKeymapping_x                          0x1402A08F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140631C30  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062C7E0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C6EA0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CC720
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CEDB0
#define PcZoneClient__RemovePetEffect_x                            0x1402D1330
#define PcZoneClient__HasAlternateAbility_x                        0x1402CFA80
#define PcZoneClient__CanEquipItem_x                               0x1402CAA30
#define PcZoneClient__GetItemByID_x                                0x1402CD770
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D10B0
#define PcZoneClient__BandolierSwap_x                              0x1402C9A10
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CED00

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024AE20

// IconCache
#define IconCache__GetIcon_x                                       0x1403A05D0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140395200
#define CContainerMgr__CloseContainer_x                            0x140394B40
#define CContainerMgr__OpenExperimentContainer_x                   0x140395580

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140485DB0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293800

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140417140
#define CLootWnd__RequestLootSlot_x                                0x140418160

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CCCB0
#define EQ_Spell__SpellAffects_x                                   0x1401CDF70
#define EQ_Spell__SpellAffectBase_x                                0x1401CDED0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6930
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D68E0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CDB90
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD750
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CD020

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BEFC0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404E1A70  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404E1AB0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E0FB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E0560

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404E8B10  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174610
#define CTaskManager__GetTaskStatus_x                              0x140174720
#define CTaskManager__GetElementDescription_x                      0x1401742A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CB020
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9E60
#define EqSoundManager__SoundAssistPlay_x                          0x1403147F0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140314B30  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140579870
#define CTextureAnimation__SetCurCell_x                            0x140579B80

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140291A70

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064B110
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064B190
#define CharacterBase__IsExpansionFlag_x                           0x1401ED690

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140374FA0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140375900
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140376E40

// messages
#define msg_spell_worn_off_x                                       0x140201940
#define msg_new_text_x                                             0x1401FD2B0
#define __msgTokenTextParam_x                                      0x1401F5070
#define msgTokenText_x                                             0x1401F4F90

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1403161E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140316100

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140685CF0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404105B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039C670
#define CCursorAttachment__AttachToCursor1_x                       0x140399D40
#define CCursorAttachment__Deactivate_x                            0x14039CBE0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B2C90
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B2E80
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B2E90

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143120
#define CFindItemWnd__Update_x                                     0x140143AC0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D5F0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014C920
#define LootFiltersManager__GetItemFilterData_x                    0x14014D430
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014DCD0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014DF80

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140469110

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068A190
#define CResolutionHandler__GetWindowedStyle_x                     0x14030EEF0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140391560

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14064F140  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14064F030  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B6050
#define CGroupWnd__UpdateDisplay_x                                 0x1403B5C30

// ItemBase
#define ItemBase__IsLore_x                                         0x14060A870
#define ItemBase__IsLoreEquipped_x                                 0x14060A900

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B4120

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402436C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140243650
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140243690

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403095C0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D9B0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DD60
#define FactionManagerClient__GetFactionStanding_x                 0x14011D180
#define FactionManagerClient__GetMaxFaction_x                      0x14011D180
#define FactionManagerClient__GetMinFaction_x                      0x14011D030

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABCB0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129080

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A55B0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4930
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A53D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5350  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031B300

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403095C0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B260

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056F610

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400847B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032C870

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BCC0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140634060
#define FreeToPlayClient__RestrictionInfo_x                        0x14086F250

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
