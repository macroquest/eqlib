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

#define __ClientDate                                               20230914u
#define __ExpectedVersionDate                                     "Sep 14 2023"
#define __ExpectedVersionTime                                     "13:22:05"
#define __ActualVersionDate_x                                      0x14081D048
#define __ActualVersionTime_x                                      0x14081D038
#define __ActualVersionBuild_x                                     0x140811AE0

// Memory Protection
#define __MemChecker0_x                                            0x1402A72B0
#define __MemChecker1_x                                            0x14055A790
#define __MemChecker4_x                                            0x140276270
#define __EncryptPad0_x                                            0x140ACF8D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C083B0
#define instEQZoneInfo_x                                           0x140C085A4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020ED00
#define __gfMaxZoomCameraDistance_x                                0x140812C90
#define __gfMaxCameraDistance_x                                    0x1408520F8
#define __CurrentSocial_x                                          0x14098B94C // CActionsWnd::StopSocial
#define __BindList_x                                               0x140AC71C0
#define g_eqCommandStates_x                                        0x140AC8230
#define __CommandList_x                                            0x140AC8470
#define __ScreenMode_x                                             0x140B4FC74
#define __gWorld_x                                                 0x140C012A8
#define __gpbCommandEvent_x                                        0x140C00CC8
#define __ServerHost_x                                             0x140C00EB8
#define __Guilds_x                                                 0x140C06F60
#define __MouseEventTime_x                                         0x140C7D8E8
#define DI8__Mouse_Check_x                                         0x140C81A18
#define __heqmain_x                                                0x140C83EB0
#define DI8__Mouse_x                                               0x140C83F08
#define __HWnd_x                                                   0x140C849B8
#define __Mouse_x                                                  0x140C83EC8
#define DI8__Main_x                                                0x140C83EE0
#define DI8__Keyboard_x                                            0x140C83EE8
#define __LoginName_x                                              0x140C8464C
#define __CurrentMapLabel_x                                        0x140C97B90
#define __LabelCache_x                                             0x140C98760
#define Teleport_Table_Size_x                                      0x140C00D54
#define Teleport_Table_x                                           0x140C012E0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C032F0
#define pinstActiveBanker_x                                        0x140C011F8
#define pinstActiveCorpse_x                                        0x140C011E8
#define pinstActiveGMaster_x                                       0x140C011F0
#define pinstActiveMerchant_x                                      0x140C011E0
#define pinstAltAdvManager_x                                       0x140B50B08
#define pinstCEverQuest_x                                          0x140C83F00
#define pinstCamActor_x                                            0x140B4FC60
#define pinstCDBStr_x                                              0x140B4F900
#define pinstCDisplay_x                                            0x140C032E0
#define pinstControlledPlayer_x                                    0x140C01288
#define pinstCResolutionHandler_x                                  0x1413061F8
#define pinstCSidlManager_x                                        0x140CA9A60
#define pinstCXWndManager_x                                        0x140CA9A58
#define instDynamicZone_x                                          0x140C06E20 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C06E6E
#define instExpeditionName_x                                       0x140C06EAE
#define pinstDZMember_x                                            0x140C06F38
#define pinstDZTimerInfo_x                                         0x140C06F40
#define pinstEqLogin_x                                             0x140C83F90
#define instTribute_x                                              0x140AC2840
#define pinstEQSoundManager_x                                      0x140B50E88
#define pinstEQSpellStrings_x                                      0x140B34510
#define pinstSGraphicsEngine_x                                     0x141305F78
#define pinstLocalPC_x                                             0x140C012C8
#define pinstLocalPlayer_x                                         0x140C011D8
#define pinstCMercenaryClientManager_x                             0x140C7F198
#define pinstModelPlayer_x                                         0x140C01208
#define pinstRenderInterface_x                                     0x141305F90
#define pinstSkillMgr_x                                            0x140C80E30
#define pinstSpawnManager_x                                        0x140C7F550
#define pinstSpellManager_x                                        0x140C80E98
#define pinstStringTable_x                                         0x140C012D0
#define pinstSwitchManager_x                                       0x140C007A0
#define pinstTarget_x                                              0x140C01280
#define pinstTaskMember_x                                          0x140AC2830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C01290
#define pinstTradeTarget_x                                         0x140C01200
#define instTributeActive_x                                        0x140AC2869
#define pinstViewActor_x                                           0x140B4FC58
#define pinstWorldData_x                                           0x140C012D8
#define pinstPlayerPath_x                                          0x140C7F578
#define pinstTargetIndicator_x                                     0x140C80F48
#define EQObject_Top_x                                             0x140C012B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C94CE8
#define pinstCContainerMgr_x                                       0x140B4FF18
#define pinstCContextMenuManager_x                                 0x140CA9740
#define pinstCInvSlotMgr_x                                         0x140B4FEF8
#define pinstCItemDisplayManager_x                                 0x140C97760
#define pinstCPopupWndManager_x                                    0x140C97FF0
#define pinstCSpellDisplayMgr_x                                    0x140C98640
#define pinstCTaskManager_x                                        0x14098BC80
#define pinstEQSuiteTextureLoader_x                                0x140AD8F50
#define pinstItemIconCache_x                                       0x140C95048
#define pinstLootFiltersManager_x                                  0x140B4F348
#define pinstGFViewListener_x                                      0x140CA8F18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140236EA0
#define __CastRay_x                                                0x14022F720
#define __CastRay2_x                                               0x14022F420
#define __ConvertItemTags_x                                        0x14022FB80
#define __CleanItemTags_x                                          0x140087600
#define __CreateCascadeMenuItems_x                                 0x1401806D0
#define __DoesFileExist_x                                          0x14055E650
#define __EQGetTime_x                                              0x14055AD40
#define __ExecuteCmd_x                                             0x1402066F0
#define __FixHeading_x                                             0x140685130
#define __FlushDxKeyboard_x                                        0x140326000
#define __get_bearing_x                                            0x140239090
#define __get_melee_range_x                                        0x140239190
#define __GetAnimationCache_x                                      0x1403A0970
#define __GetGaugeValueFromEQ_x                                    0x1404D1960
#define __GetLabelFromEQ_x                                         0x1404D2F50
#define __GetXTargetType_x                                         0x140686450   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406851B0
#define __HelpPath_x                                               0x140C7D7B0   // Why?
#define __NewUIINI_x                                               0x1404DE460   // Why?
#define __ProcessGameEvents_x                                      0x14026B680
#define __ProcessKeyboardEvents_x                                  0x140327860
#define __ProcessMouseEvents_x                                     0x14026CB80
#define __SaveColors_x                                             0x140190860
#define __STMLToText_x                                             0x14056A820
#define __WndProc_x                                                0x140324760
#define CMemoryMappedFile__SetFile_x                               0x1407BC140
#define DrawNetStatus_x                                            0x1402B60C0
#define Util__FastTime_x                                           0x14055A2D0
#define __eq_delete_x                                              0x1406AF2C4
#define __eq_new_x                                                 0x1406AF280
#define __CopyLayout_x                                             0x1402A36F0
#define __ThrottleFrameRate_x                                      0x14025AF25
#define __ThrottleFrameRateEnd_x                                   0x14025AF85

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140336BD0
#define CAAWnd__Update_x                                           0x140336ED0
#define CAAWnd__UpdateSelected_x                                   0x140337ED0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9840
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2140
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407F8868
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA130

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019B8C0
#define AltAdvManager__IsAbilityReady_x                            0x14019BB40
#define AltAdvManager__GetAAById_x                                 0x14019B190
#define AltAdvManager__CanTrainAbility_x                           0x14019AFC0
#define AltAdvManager__CanSeeAbility_x                             0x14019AC80

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0030
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D0E60
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D10B0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5930
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1A80
#define CharacterZoneClient__CastSpell_x                           0x1400D1B20
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1400
#define CharacterZoneClient__Cur_HP_x                              0x1400E7010
#define CharacterZoneClient__Cur_Mana_x                            0x1400E71D0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4B30
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED610
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC380  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D5FE0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4E00
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF1B0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE080
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D61B0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6630
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8000
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE7C0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6C80
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF440
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D62B0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F01A0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D64C0
#define CharacterZoneClient__GetModCap_x                           0x1400F78D0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6560
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6770
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB170
#define CharacterZoneClient__HasSkill_x                            0x1400F3190
#define CharacterZoneClient__HitBySpell_x                          0x1400D7220
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAB50
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F73C0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D0450  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7700
#define CharacterZoneClient__Max_Mana_x                            0x1402D0670  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7B60
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DDFA0
#define CharacterZoneClient__SpellDuration_x                       0x1400DECA0
#define CharacterZoneClient__TotalEffect_x                         0x1400DFFE0
#define CharacterZoneClient__UseSkill_x                            0x1400FD2D0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140355180

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035F4C0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035B350
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035A3E0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140361B80

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140860710

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140383140
#define CChatWindowManager__InitContextMenu_x                      0x1403832D0
#define CChatWindowManager__FreeChatWindow_x                       0x140382360
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14038A2C0
#define CChatWindowManager__CreateChatWindow_x                     0x140381CA0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105460

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038B2B0
#define CChatWindow__Clear_x                                       0x14038C130
#define CChatWindow__WndNotification_x                             0x14038D320
#define CChatWindow__AddHistory_x                                  0x14038BC30

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140597F50
#define CContextMenu__RemoveMenuItem_x                             0x140598340
#define CContextMenu__RemoveAllMenuItems_x                         0x140598310
#define CContextMenu__CheckMenuItem_x                              0x140598180
#define CContextMenu__SetMenuItem_x                                0x140598360
#define CContextMenu__AddSeparator_x                               0x1405980C0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140589E20
#define CContextMenuManager__RemoveMenu_x                          0x14058A400
#define CContextMenuManager__PopupMenu_x                           0x14058A140
#define CContextMenuManager__Flush_x                               0x140589EA0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403989F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064E390
#define CChatService__GetFriendName_x                              0x14064E3A0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057AD60
#define CComboWnd__Draw_x                                          0x14057AE60
#define CComboWnd__GetCurChoice_x                                  0x14057B140  // unused
#define CComboWnd__GetListRect_x                                   0x14057B1E0
#define CComboWnd__InsertChoice_x                                  0x14057B520
#define CComboWnd__SetColors_x                                     0x14057B8B0
#define CComboWnd__SetChoice_x                                     0x14057B870
#define CComboWnd__GetItemCount_x                                  0x14057B1D0
#define CComboWnd__GetCurChoiceText_x                              0x14057B180  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057B110
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057B5E0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140396780
#define CContainerWnd__SetContainer_x                              0x1403E9790
#define CContainerWnd__vftable_x                                   0x14082C338

// CDisplay
#define CDisplay__cameraType_x                                     0x140B4FA24
#define CDisplay__ZoneMainUI_x                                     0x1405B2110
#define CDisplay__PreZoneMainUI_x                                  0x14018D680
#define CDisplay__CleanGameUI_x                                    0x14017F7D0
#define CDisplay__GetClickedActor_x                                0x140183960
#define CDisplay__GetUserDefinedColor_x                            0x1401845D0
#define CDisplay__InitCharSelectUI_x                               0x140184880
#define CDisplay__ReloadUI_x                                       0x14018F960
#define CDisplay__WriteTextHD2_x                                   0x140196B00
#define CDisplay__TrueDistance_x                                   0x1401967B0
#define CDisplay__SetViewActor_x                                   0x140192FD0
#define CDisplay__GetFloorHeight_x                                 0x140183BC0
#define CDisplay__ToggleScreenshotMode_x                           0x1401962A0
#define CDisplay__RealRender_World_x                               0x14018ED50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BC2C0
#define CEditWnd__DrawCaret_x                                      0x1405ADE00  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405AE2C0
#define CEditWnd__GetCaretPt_x                                     0x1405AE540  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405AE580
#define CEditWnd__GetDisplayString_x                               0x1405AE7F0
#define CEditWnd__GetHorzOffset_x                                  0x1405AEA30
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AEB80
#define CEditWnd__GetSelStartPt_x                                  0x1405AEE60  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AECB0
#define CEditWnd__PointFromPrintableChar_x                         0x1405AFA10
#define CEditWnd__ReplaceSelection_x                               0x1405AFDC0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B0260
#define CEditWnd__SetEditable_x                                    0x1405B04F0
#define CEditWnd__SetWindowText_x                                  0x1405B0520

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025BF10
#define CEverQuest__ClickedPlayer_x                                0x140251D60
#define CEverQuest__CreateTargetIndicator_x                        0x140252620
#define CEverQuest__DoTellWindow_x                                 0x140105170 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105A30 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025D940
#define CEverQuest__dsp_chat_x                                     0x140104BB0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140287B50
#define CEverQuest__Emote_x                                        0x14025E2F0
#define CEverQuest__GetBodyTypeDesc_x                              0x14025F090
#define CEverQuest__GetClassDesc_x                                 0x14025F0F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025F4C0
#define CEverQuest__GetDeityDesc_x                                 0x14025F770
#define CEverQuest__GetLangDesc_x                                  0x14025FBA0
#define CEverQuest__GetRaceDesc_x                                  0x14025FF40
#define CEverQuest__InterpretCmd_x                                 0x140261850
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402768F0
#define CEverQuest__LMouseUp_x                                     0x140263200
#define CEverQuest__RightClickedOnPlayer_x                         0x140274140
#define CEverQuest__RMouseUp_x                                     0x14026D710
#define CEverQuest__SetGameState_x                                 0x140278E20
#define CEverQuest__UPCNotificationFlush_x                         0x14027E610 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140262E70
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026EAC0
#define CEverQuest__ReportSuccessfulHit_x                          0x14026F920

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403AAD30

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C03C0
#define CGuild__GetGuildName_x                                     0x1400C0400

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CD180

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140299170
#define CHotButton__SetCheck_x                                     0x140299440

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E2350
#define CInvSlotMgr__MoveItem_x                                    0x1403E2530
#define CInvSlotMgr__SelectSlot_x                                  0x1403E3ED0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403DF540
#define CInvSlot__SliderComplete_x                                 0x1403E0A90
#define CInvSlot__GetItemBase_x                                    0x1403DB170
#define CInvSlot__UpdateItem_x                                     0x1403E0F50

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E5260

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404066C0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404090B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404030E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140404920
#define CItemDisplayWnd__RequestConvertItem_x                      0x140405AD0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CE450
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D0030

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405099A0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403FF820

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148250

// CLabel
#define CLabel__UpdateText_x                                       0x140410480

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057E6F0
#define CListWnd__dCListWnd_x                                      0x14057EB40
#define CListWnd__vftable_x                                        0x14085E8D0
#define CListWnd__AddColumn_x                                      0x14057F1E0
#define CListWnd__AddColumn1_x                                     0x14057F280
#define CListWnd__AddLine_x                                        0x14057F3E0
#define CListWnd__AddString_x                                      0x14057F970
#define CListWnd__CalculateFirstVisibleLine_x                      0x14057FEE0
#define CListWnd__CalculateVSBRange_x                              0x1405801C0
#define CListWnd__ClearSel_x                                       0x140580360
#define CListWnd__ClearAllSel_x                                    0x140580300
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405803C0
#define CListWnd__Compare_x                                        0x140580580
#define CListWnd__Draw_x                                           0x140580A50
#define CListWnd__DrawColumnSeparators_x                           0x140581600
#define CListWnd__DrawHeader_x                                     0x1405816C0
#define CListWnd__DrawItem_x                                       0x140581DA0
#define CListWnd__DrawLine_x                                       0x140582720
#define CListWnd__DrawSeparator_x                                  0x140582BE0
#define CListWnd__EnableLine_x                                     0x140583000
#define CListWnd__EnsureVisible_x                                  0x140583060
#define CListWnd__ExtendSel_x                                      0x140583160
#define CListWnd__GetColumnMinWidth_x                              0x140583490
#define CListWnd__GetColumnWidth_x                                 0x140583510
#define CListWnd__GetCurSel_x                                      0x140583610
#define CListWnd__GetItemData_x                                    0x140583990
#define CListWnd__GetItemHeight_x                                  0x1405839D0
#define CListWnd__GetItemRect_x                                    0x140583BF0
#define CListWnd__GetItemText_x                                    0x140583E90
#define CListWnd__GetSelList_x                                     0x1405840E0
#define CListWnd__GetSeparatorRect_x                               0x1405842D0
#define CListWnd__InsertLine_x                                     0x140585750
#define CListWnd__RemoveLine_x                                     0x140585DC0
#define CListWnd__SetColors_x                                      0x140586180
#define CListWnd__SetColumnJustification_x                         0x1405861A0
#define CListWnd__SetColumnLabel_x                                 0x140586220
#define CListWnd__SetColumnWidth_x                                 0x1405863C0
#define CListWnd__SetCurSel_x                                      0x140586490
#define CListWnd__SetItemColor_x                                   0x140586700
#define CListWnd__SetItemData_x                                    0x1405867A0
#define CListWnd__SetItemText_x                                    0x1405869E0
#define CListWnd__Sort_x                                           0x140586DF0
#define CListWnd__ToggleSel_x                                      0x140586F60
#define CListWnd__SetColumnsSizable_x                              0x140586410
#define CListWnd__SetItemWnd_x                                     0x140586B10
#define CListWnd__GetItemWnd_x                                     0x140584070
#define CListWnd__SetItemIcon_x                                    0x1405867E0
#define CListWnd__CalculateCustomWindowPositions_x                 0x14057FCB0
#define CListWnd__SetVScrollPos_x                                  0x140586D50

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140423770

// MapViewMap
#define MapViewMap__vftable_x                                      0x140838E90
#define MapViewMap__Clear_x                                        0x1404252F0
#define MapViewMap__SetZoom_x                                      0x14042B930
#define MapViewMap__HandleLButtonDown_x                            0x140428470

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044D010  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404535F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140453DA0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404575B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140456900
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045B860

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062B5B0
#define CPacketScrambler__hton_x                                   0x14062B5A0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A7690
#define CSidlManagerBase__FindAnimation1_x                         0x1405A75D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A7CC0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A7A70
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A69D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A6960
#define CSidlManagerBase__CreateXWnd_x                             0x1405A5FA0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C16E0
#define CSidlManager__CreateXWnd_x                                 0x1404C18A0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056C2F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056C420
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B6880 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056C590
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056BA40
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056BB10
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056BD20
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056CC30
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056CE60
#define CSidlScreenWnd__GetChildItem_x                             0x14056D000
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056D250
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140577290 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056D5C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056D930
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056E1F0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056EAE0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CA8DB8
#define CSidlScreenWnd__StoreIniInfo_x                             0x14056F120
#define CSidlScreenWnd__StoreIniVis_x                              0x14056F910
#define CSidlScreenWnd__vftable_x                                  0x14085DB70
#define CSidlScreenWnd__WndNotification_x                          0x14056F960

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030F7F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030FBF0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030FB30
#define CSkillMgr__IsActivatedSkill_x                              0x14030FF90
#define CSkillMgr__IsCombatSkill_x                                 0x14030FFD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405878E0
#define CSliderWnd__SetValue_x                                     0x1405880F0
#define CSliderWnd__SetNumTicks_x                                  0x140587F70

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C7D10

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058C880
#define CStmlWnd__CalculateHSBRange_x                              0x140576C40
#define CStmlWnd__CalculateVSBRange_x                              0x14058D720
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058E210
#define CStmlWnd__ForceParseNow_x                                  0x14058E2B0
#define CStmlWnd__GetVisibleText_x                                 0x14058E980
#define CStmlWnd__MakeStmlColorTag_x                               0x1405906E0
#define CStmlWnd__MakeWndNotificationTag_x                         0x140590720
#define CStmlWnd__SetSTMLText_x                                    0x1405976F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405978A0
#define CStmlWnd__UpdateHistoryString_x                            0x140597C30

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405884C0
#define CTabWnd__DrawCurrentPage_x                                 0x140588560
#define CTabWnd__DrawTab_x                                         0x140588930
#define CTabWnd__GetTabRect_x                                      0x140588F90
#define CTabWnd__InsertPage_x                                      0x140589260
#define CTabWnd__RemovePage_x                                      0x1405894F0
#define CTabWnd__SetPage_x                                         0x140589650
#define CTabWnd__UpdatePage_x                                      0x140589950

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B0980
#define CPageWnd__SetTabText_x                                     0x1405B09F0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9AF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400B9F00


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14059F080
#define CTextureFont__DrawWrappedText1_x                           0x14059EF90
#define CTextureFont__DrawWrappedText2_x                           0x14059F1B0
#define CTextureFont__GetTextExtent_x                              0x14059F560
#define CTextureFont__GetHeight_x                                  0x14059F520

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B4FE0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140568F10

// CXStr
#define CXStr__gFreeLists_x                                        0x140AD88C0
#define CXStr__gCXStrAccess_x                                      0x140CA8BB8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140572360
#define CXWnd__ClrFocus_x                                          0x1405725A0
#define CXWnd__Destroy_x                                           0x140572720
#define CXWnd__DoAllDrawing_x                                      0x140572820
#define CXWnd__DrawColoredRect_x                                   0x140572FF0
#define CXWnd__DrawTooltip_x                                       0x140574660
#define CXWnd__DrawTooltipAtPoint_x                                0x140574710
#define CXWnd__GetChildItem_x                                      0x140575020
#define CXWnd__GetChildWndAt_x                                     0x1405750E0
#define CXWnd__GetClientRect_x                                     0x1405753A0
#define CXWnd__GetClientClipRect_x                                 0x140575250
#define CXWnd__GetRelativeRect_x                                   0x140576D80
#define CXWnd__GetScreenClipRect_x                                 0x140576E90
#define CXWnd__GetScreenRect_x                                     0x140577010
#define CXWnd__GetTooltipRect_x                                    0x140577190
#define CXWnd__IsActive_x                                          0x140577750
#define CXWnd__IsDescendantOf_x                                    0x140577780
#define CXWnd__IsReallyVisible_x                                   0x1405777F0
#define CXWnd__IsType_x                                            0x140577830
#define CXWnd__Minimize_x                                          0x140577930
#define CXWnd__ProcessTransition_x                                 0x140578830
#define CXWnd__Resize_x                                            0x140578950
#define CXWnd__Right_x                                             0x1405789F0
#define CXWnd__SetFocus_x                                          0x140578DB0
#define CXWnd__SetFont_x                                           0x140578E00
#define CXWnd__SetKeyTooltip_x                                     0x140578F10
#define CXWnd__SetMouseOver_x                                      0x140579050
#define CXWnd__SetParent_x                                         0x1405790D0
#define CXWnd__StartFade_x                                         0x140579520
#define CXWnd__vftable_x                                           0x14085E150
#define CXWnd__CXWnd_x                                             0x140570F10
#define CXWnd__dCXWnd_x                                            0x140571840

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BBA40

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140599510
#define CXWndManager__DrawCursor_x                                 0x1405997F0
#define CXWndManager__DrawWindows_x                                0x140599A50
#define CXWndManager__GetKeyboardFlags_x                           0x14059A110
#define CXWndManager__HandleKeyboardMsg_x                          0x14059A150
#define CXWndManager__RemoveWnd_x                                  0x14059D740

// CDBStr
#define CDBStr__GetString_x                                        0x14017D940

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406346B0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDD90
#define CCharacterListWnd__EnterWorld_x                            0x1400CCA90
#define CCharacterListWnd__Quit_x                                  0x1400CDD70
#define CCharacterListWnd__UpdateList_x                            0x1400CEA80

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140603DC0
#define ItemBase__CreateItemTagString_x                            0x140604820
#define ItemBase__GetImageNum_x                                    0x140606DE0
#define ItemBase__GetItemValue_x                                   0x140608920
#define ItemBase__IsEmpty_x                                        0x14060A4B0
#define ItemBase__IsKeyRingItem_x                                  0x14060ABC0
#define ItemBase__ValueSellMerchant_x                              0x14060ED40
#define ItemClient__CanDrop_x                                      0x14029B780
#define ItemClient__CanGoInBag_x                                   0x14029B8B0
#define ItemClient__CreateItemClient_x                             0x14029BB90
#define ItemClient__dItemClient_x                                  0x14029B5F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D060
#define EQ_LoadingS__Array_x                                       0x140AC4CD0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061AD00
#define PcBase__GetCombatAbility_x                                 0x14061B3A0
#define PcBase__GetCombatAbilityTimer_x                            0x14061B440
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061BB90
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061C520
#define PcClient__AlertInventoryChanged_x                          0x1402BDBA0
#define PcClient__GetConLevel_x                                    0x1402BE180  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C0850
#define PcClient__HasLoreItem_x                                    0x1402C1950
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CE980
#define PcZoneClient__RemoveMyAffect_x                             0x1402D1520

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020AD60  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020AF10  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B070  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020AFB0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140243660  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178180

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140677C70
#define PlayerBase__CanSee1_x                                      0x140677D40
#define PlayerBase__GetVisibilityLineSegment_x                     0x140678200
#define PlayerBase__HasProperty_x                                  0x140678420
#define PlayerBase__IsTargetable_x                                 0x1406784E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DD460
#define PlayerClient__GetPcClient_x                                0x1402DFC90
#define PlayerClient__PlayerClient_x                               0x1402D67D0
#define PlayerClient__SetNameSpriteState_x                         0x1402E3140
#define PlayerClient__SetNameSpriteTint_x                          0x1402E4100
#define PlayerZoneClient__ChangeHeight_x                           0x1402F23D0
#define PlayerZoneClient__DoAttack_x                               0x1402F30E0
#define PlayerZoneClient__GetLevel_x                               0x1402F6850
#define PlayerZoneClient__IsValidTeleport_x                        0x1402463E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018BF10

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EC0A0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EC150  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EC200
#define PlayerManagerClient__CreatePlayer_x                        0x1402EBAA0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406778E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A0C10
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A0810
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A0880
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A0BA0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A0D30
#define KeypressHandler__HandleKeyUp_x                             0x1402A0E30
#define KeypressHandler__SaveKeymapping_x                          0x1402A0AB0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140632230  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062CCE0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C70F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CC990
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CF080
#define PcZoneClient__RemovePetEffect_x                            0x1402D1620
#define PcZoneClient__HasAlternateAbility_x                        0x1402CFD70
#define PcZoneClient__CanEquipItem_x                               0x1402CAC90
#define PcZoneClient__GetItemByID_x                                0x1402CDA30
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D13A0
#define PcZoneClient__BandolierSwap_x                              0x1402C9C70
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CEFD0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024AF10

// IconCache
#define IconCache__GetIcon_x                                       0x1403A09A0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140395530
#define CContainerMgr__CloseContainer_x                            0x140394E70
#define CContainerMgr__OpenExperimentContainer_x                   0x1403958B0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140486470

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293930

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140417770
#define CLootWnd__RequestLootSlot_x                                0x1404187B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CCA80
#define EQ_Spell__SpellAffects_x                                   0x1401CDD40
#define EQ_Spell__SpellAffectBase_x                                0x1401CDCA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6950
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6900
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD960
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD520
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCDF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF010

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404E22F0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x1404E2330
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E1830
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E0DE0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404E9380  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174A10
#define CTaskManager__GetTaskStatus_x                              0x140174B20
#define CTaskManager__GetElementDescription_x                      0x1401746A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CADF0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9C30
#define EqSoundManager__SoundAssistPlay_x                          0x140314C50  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140314F90  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14057A2F0
#define CTextureAnimation__SetCurCell_x                            0x14057A600

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140291BA0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064BDB0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064BE30
#define CharacterBase__IsExpansionFlag_x                           0x1401ED270

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140375480
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140375DE0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140377320

// messages
#define msg_spell_worn_off_x                                       0x1402017E0
#define msg_new_text_x                                             0x1401FD0A0
#define __msgTokenTextParam_x                                      0x1401F4E40
#define msgTokenText_x                                             0x1401F4D60

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140316640
#define SpellManager__GetSpellByGroupAndRank_x                     0x140316560

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140686830

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140410BD0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039CA00
#define CCursorAttachment__AttachToCursor1_x                       0x14039A0C0
#define CCursorAttachment__Deactivate_x                            0x14039CF70

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B3480
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B3670
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B3680

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401434D0
#define CFindItemWnd__Update_x                                     0x140143E70
#define CFindItemWnd__PickupSelectedItem_x                         0x14013D990

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CD00
#define LootFiltersManager__GetItemFilterData_x                    0x14014D810
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E0B0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E360

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404697B0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068ACC0
#define CResolutionHandler__GetWindowedStyle_x                     0x14030F350

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140391880

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14064FE50  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14064FD40  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B63B0
#define CGroupWnd__UpdateDisplay_x                                 0x1403B5F90

// ItemBase
#define ItemBase__IsLore_x                                         0x14060AC90
#define ItemBase__IsLoreEquipped_x                                 0x14060AD20

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B42F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402437C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140243750
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140243790

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140309A30

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011D8E0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DC90
#define FactionManagerClient__GetFactionStanding_x                 0x14011D0B0
#define FactionManagerClient__GetMaxFaction_x                      0x14011D0B0
#define FactionManagerClient__GetMinFaction_x                      0x14011CF60

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABCE0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129020

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A59A0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4D20
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A57C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5740  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031B770

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140309A30

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B100

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056FF50

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400847C0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032CA90

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BCD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406350D0
#define FreeToPlayClient__RestrictionInfo_x                        0x14086FF90

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
