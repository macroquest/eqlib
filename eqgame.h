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

#define __ClientDate                                               20240227u
#define __ExpectedVersionDate                                     "Feb 27 2024"
#define __ExpectedVersionTime                                     "11:35:31"
#define __ActualVersionDate_x                                      0x140934720
#define __ActualVersionTime_x                                      0x140934710
#define __ActualVersionBuild_x                                     0x1408CB2B0

// Memory Protection
#define __MemChecker0_x                                            0x1402A87F0
#define __MemChecker1_x                                            0x1405643E0
#define __MemChecker4_x                                            0x1402771B0
#define __EncryptPad0_x                                            0x140D01E00

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3A9C0
#define instEQZoneInfo_x                                           0x140E3ABB4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020EDE0
#define __gfMaxZoomCameraDistance_x                                0x1408CC520
#define __gfMaxCameraDistance_x                                    0x140A72690
#define __CurrentSocial_x                                          0x140BBD940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140CF9710
#define g_eqCommandStates_x                                        0x140CFA780
#define __CommandList_x                                            0x140CFA9B0
#define __ScreenMode_x                                             0x140D8250C
#define __gWorld_x                                                 0x140E32F10
#define __gpbCommandEvent_x                                        0x140E35404
#define __ServerHost_x                                             0x140E355E8
#define __Guilds_x                                                 0x140E39570
#define __MouseEventTime_x                                         0x140EAFF28
#define DI8__MouseState_x                                          0x140EB40E0
#define __heqmain_x                                                0x140EB6578
#define DI8__Mouse_x                                               0x140EB6590
#define __HWnd_x                                                   0x140EB6598
#define __Mouse_x                                                  0x140EB65A0
#define DI8__Keyboard_x                                            0x140EB65C0
#define __LoginName_x                                              0x140EB6C9C
#define __CurrentMapLabel_x                                        0x140ECA2B0
#define __LabelCache_x                                             0x140ECAE80
#define __ChatFilterDefs_x                                         0x140A0BF80
#define Teleport_Table_Size_x                                      0x140E35490
#define Teleport_Table_x                                           0x140E32F40

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E35900
#define pinstActiveBanker_x                                        0x140E32E60
#define pinstActiveCorpse_x                                        0x140E32E50
#define pinstActiveGMaster_x                                       0x140E32E58
#define pinstActiveMerchant_x                                      0x140E32E48
#define pinstAltAdvManager_x                                       0x140D83128
#define pinstCEverQuest_x                                          0x140EB4030
#define pinstCamActor_x                                            0x140D824F8
#define pinstCDBStr_x                                              0x140D81EE0
#define pinstCDisplay_x                                            0x140E34F58
#define pinstControlledPlayer_x                                    0x140E32EF0
#define pinstCResolutionHandler_x                                  0x14153B638
#define pinstCSidlManager_x                                        0x140EDC180
#define pinstCXWndManager_x                                        0x140EDC178
#define instDynamicZone_x                                          0x140E39430 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E3947E
#define instExpeditionName_x                                       0x140E394BE
#define pinstDZMember_x                                            0x140E39548
#define pinstDZTimerInfo_x                                         0x140E39550
#define pinstEqLogin_x                                             0x140EB65E0
#define instTribute_x                                              0x140CF4D50
#define pinstEQSoundManager_x                                      0x140D834A8
#define pinstEQSpellStrings_x                                      0x140D66AF0
#define pinstSGraphicsEngine_x                                     0x14153B3B8
#define pinstLocalPC_x                                             0x140E32F30
#define pinstLocalPlayer_x                                         0x140E32E40
#define pinstCMercenaryClientManager_x                             0x140EB17C8
#define pinstModelPlayer_x                                         0x140E32E70
#define pinstRenderInterface_x                                     0x14153B3D0
#define pinstSkillMgr_x                                            0x140EB3470
#define pinstSpawnManager_x                                        0x140EB1B90
#define pinstSpellManager_x                                        0x140EB34D8
#define pinstStringTable_x                                         0x140E32F38
#define pinstSwitchManager_x                                       0x140E32DC0
#define pinstTarget_x                                              0x140E32EE8
#define pinstTaskMember_x                                          0x140CF4D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E32EF8
#define pinstTradeTarget_x                                         0x140E32E68
#define instTributeActive_x                                        0x140CF4D79
#define pinstViewActor_x                                           0x140D824F0
#define pinstWorldData_x                                           0x140E34F40
#define pinstPlayerPath_x                                          0x140EB1BB8
#define pinstTargetIndicator_x                                     0x140EB3588
#define EQObject_Top_x                                             0x140E32F18

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EC7410
#define pinstCContainerMgr_x                                       0x140D82170
#define pinstCContextMenuManager_x                                 0x140EDBE60
#define pinstCInvSlotMgr_x                                         0x140D82168
#define pinstCItemDisplayManager_x                                 0x140EC9E80
#define pinstCPopupWndManager_x                                    0x140ECA710
#define pinstCSpellDisplayMgr_x                                    0x140ECAD60
#define pinstCTaskManager_x                                        0x140BBDC80
#define pinstEQSuiteTextureLoader_x                                0x140D0B500
#define pinstItemIconCache_x                                       0x140EC7770
#define pinstLootFiltersManager_x                                  0x140D81928
#define pinstGFViewListener_x                                      0x140EDB638


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140237AB0
#define __CastRay_x                                                0x14022FE20
#define __CastRay2_x                                               0x14022FB20
#define __ConvertItemTags_x                                        0x140230280
#define __CleanItemTags_x                                          0x140087DC0
#define __CreateCascadeMenuItems_x                                 0x140180D20
#define __DoesFileExist_x                                          0x140568290
#define __EQGetTime_x                                              0x140564990
#define __ExecuteCmd_x                                             0x140206740
#define __FixHeading_x                                             0x14068FD70
#define __FlushDxKeyboard_x                                        0x14032A460
#define __get_bearing_x                                            0x140239CA0
#define __get_melee_range_x                                        0x140239DA0
#define __GetAnimationCache_x                                      0x1403A78B0
#define __GetGaugeValueFromEQ_x                                    0x1404DB160
#define __GetLabelFromEQ_x                                         0x1404DC760
#define __GetXTargetType_x                                         0x140691050   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14068FDF0
#define __HelpPath_x                                               0x140EAFDF0   // Why?
#define __NewUIINI_x                                               0x1404E7CB0   // Why?
#define __ProcessGameEvents_x                                      0x14026C6B0
#define __ProcessKeyboardEvents_x                                  0x14032BCC0
#define __ProcessMouseEvents_x                                     0x14026DBD0
#define __SaveColors_x                                             0x140190CE0
#define __STMLToText_x                                             0x14056CBD0
#define __WndProc_x                                                0x140328C40
#define CMemoryMappedFile__SetFile_x                               0x1407C7CE0
#define DrawNetStatus_x                                            0x1402B6C30
#define Util__FastTime_x                                           0x140563F20
#define __eq_delete_x                                              0x1406971A4
#define __eq_new_x                                                 0x140697160
#define __CopyLayout_x                                             0x1402A4C20
#define __ThrottleFrameRate_x                                      0x14025BF65
#define __ThrottleFrameRateEnd_x                                   0x14025BFC5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033B530
#define CAAWnd__Update_x                                           0x14033B830
#define CAAWnd__UpdateSelected_x                                   0x14033C870

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AB0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081BA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAB0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BE00
#define AltAdvManager__IsAbilityReady_x                            0x14019C080
#define AltAdvManager__GetAAById_x                                 0x14019B6D0
#define AltAdvManager__CanTrainAbility_x                           0x14019B500
#define AltAdvManager__CanSeeAbility_x                             0x14019B1C0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0A50
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1890
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1AE0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5D50
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D24B0
#define CharacterZoneClient__CastSpell_x                           0x1400D2550
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1880
#define CharacterZoneClient__Cur_HP_x                              0x1400E7460
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7620
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D52E0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDAE0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC510  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6740
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5220
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF6A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE570
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6910
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6FA0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8970
#define CharacterZoneClient__GetHPRegen_x                          0x1400EECB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E70D0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF930
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6990
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0710
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6B90
#define CharacterZoneClient__GetModCap_x                           0x1400F7CD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6C20
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6E30
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBAE0
#define CharacterZoneClient__HasSkill_x                            0x1400F3700
#define CharacterZoneClient__HitBySpell_x                          0x1400D78E0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB080
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F77B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3640  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7B00
#define CharacterZoneClient__Max_Mana_x                            0x1402D3860  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7F60
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE410
#define CharacterZoneClient__SpellDuration_x                       0x1400DF110
#define CharacterZoneClient__TotalEffect_x                         0x1400E0460
#define CharacterZoneClient__UseSkill_x                            0x1400FD480


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403599D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140363D00

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035FB90
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035EC20

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403663C0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A8FB40

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389290
#define CChatWindowManager__InitContextMenu_x                      0x140389420
#define CChatWindowManager__FreeChatWindow_x                       0x140388310
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140390FD0
#define CChatWindowManager__CreateChatWindow_x                     0x140387C50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401055E0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392010
#define CChatWindow__Clear_x                                       0x140392EB0
#define CChatWindow__WndNotification_x                             0x1403940A0
#define CChatWindow__AddHistory_x                                  0x1403929B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A1B00
#define CContextMenu__RemoveMenuItem_x                             0x1405A1EF0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A1EC0
#define CContextMenu__CheckMenuItem_x                              0x1405A1D30
#define CContextMenu__SetMenuItem_x                                0x1405A1F10
#define CContextMenu__AddSeparator_x                               0x1405A1C70

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140593A10
#define CContextMenuManager__RemoveMenu_x                          0x140593FF0
#define CContextMenuManager__PopupMenu_x                           0x140593D30
#define CContextMenuManager__Flush_x                               0x140593A90
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039F7F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140659030
#define CChatService__GetFriendName_x                              0x140659040

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140584990
#define CComboWnd__Draw_x                                          0x140584A90
#define CComboWnd__GetCurChoice_x                                  0x140584D70  // unused
#define CComboWnd__GetListRect_x                                   0x140584E10
#define CComboWnd__InsertChoice_x                                  0x140585150
#define CComboWnd__SetColors_x                                     0x1405854E0
#define CComboWnd__SetChoice_x                                     0x1405854A0
#define CComboWnd__GetItemCount_x                                  0x140584E00
#define CComboWnd__GetCurChoiceText_x                              0x140584DB0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140584D40
#define CComboWnd__InsertChoiceAtIndex_x                           0x140585210

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039D560
#define CContainerWnd__SetContainer_x                              0x1403F2AA0
#define CContainerWnd__vftable_x                                   0x1409A8080

// CDisplay
#define CDisplay__cameraType_x                                     0x140D82294
#define CDisplay__ZoneMainUI_x                                     0x1405BBC00
#define CDisplay__PreZoneMainUI_x                                  0x14018DBD0
#define CDisplay__CleanGameUI_x                                    0x14017FE00
#define CDisplay__GetClickedActor_x                                0x140183F70
#define CDisplay__GetUserDefinedColor_x                            0x140184BE0
#define CDisplay__InitCharSelectUI_x                               0x140184E90
#define CDisplay__ReloadUI_x                                       0x14018FEC0
#define CDisplay__WriteTextHD2_x                                   0x140196F30
#define CDisplay__TrueDistance_x                                   0x140196BE0
#define CDisplay__SetViewActor_x                                   0x140193400
#define CDisplay__GetFloorHeight_x                                 0x1401841D0
#define CDisplay__ToggleScreenshotMode_x                           0x1401966D0
#define CDisplay__RealRender_World_x                               0x14018F2A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C5DB0
#define CEditWnd__DrawCaret_x                                      0x1405B7900  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B7DC0
#define CEditWnd__GetCaretPt_x                                     0x1405B8040  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B8080
#define CEditWnd__GetDisplayString_x                               0x1405B82F0
#define CEditWnd__GetHorzOffset_x                                  0x1405B8530
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B8680
#define CEditWnd__GetSelStartPt_x                                  0x1405B8960  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B87B0
#define CEditWnd__PointFromPrintableChar_x                         0x1405B9510
#define CEditWnd__ReplaceSelection_x                               0x1405B98C0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B9D60
#define CEditWnd__SetEditable_x                                    0x1405B9FF0
#define CEditWnd__SetWindowText_x                                  0x1405BA020

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D060
#define CEverQuest__ClickedPlayer_x                                0x140252B70
#define CEverQuest__CreateTargetIndicator_x                        0x140253430
#define CEverQuest__DoTellWindow_x                                 0x1401052F0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105BB0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025EA20
#define CEverQuest__dsp_chat_x                                     0x140104D20 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140288BD0
#define CEverQuest__Emote_x                                        0x14025F400
#define CEverQuest__GetBodyTypeDesc_x                              0x1402601A0
#define CEverQuest__GetClassDesc_x                                 0x140260200
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402605D0
#define CEverQuest__GetDeityDesc_x                                 0x140260880
#define CEverQuest__GetLangDesc_x                                  0x140260CB0
#define CEverQuest__GetRaceDesc_x                                  0x140261050
#define CEverQuest__InterpretCmd_x                                 0x140262980
#define CEverQuest__LeftClickedOnPlayer_x                          0x140277830
#define CEverQuest__LMouseUp_x                                     0x140264350
#define CEverQuest__RightClickedOnPlayer_x                         0x140275050
#define CEverQuest__RMouseUp_x                                     0x14026E750
#define CEverQuest__SetGameState_x                                 0x140279D70
#define CEverQuest__UPCNotificationFlush_x                         0x14027F6A0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140263FC0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026FB00
#define CEverQuest__ReportSuccessfulHit_x                          0x140270920

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B1C80

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D50
#define CGuild__GetGuildName_x                                     0x1400C0D90

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D41F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029A700
#define CHotButton__SetCheck_x                                     0x14029A9D0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EB840
#define CInvSlotMgr__MoveItem_x                                    0x1403EBA20
#define CInvSlotMgr__SelectSlot_x                                  0x1403ED390

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E8A70
#define CInvSlot__SliderComplete_x                                 0x1403E9FC0
#define CInvSlot__GetItemBase_x                                    0x1403E46B0
#define CInvSlot__UpdateItem_x                                     0x1403EA470

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EE720

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040F8B0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404121D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040C3E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040DB30
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040ECE0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D7C90
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D9980

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140512F20

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140408B20

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148450

// CLabel
#define CLabel__UpdateText_x                                       0x1404195C0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140588320
#define CListWnd__dCListWnd_x                                      0x140588770
#define CListWnd__vftable_x                                        0x140A8DC98
#define CListWnd__AddColumn_x                                      0x140588E10
#define CListWnd__AddColumn1_x                                     0x140588EB0
#define CListWnd__AddLine_x                                        0x140589010
#define CListWnd__AddString_x                                      0x1405895A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140589B10
#define CListWnd__CalculateVSBRange_x                              0x140589DE0
#define CListWnd__ClearSel_x                                       0x140589F90
#define CListWnd__ClearAllSel_x                                    0x140589F30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140589FF0
#define CListWnd__Compare_x                                        0x14058A1B0
#define CListWnd__Draw_x                                           0x14058A680
#define CListWnd__DrawColumnSeparators_x                           0x14058B230
#define CListWnd__DrawHeader_x                                     0x14058B2F0
#define CListWnd__DrawItem_x                                       0x14058B9C0
#define CListWnd__DrawLine_x                                       0x14058C340
#define CListWnd__DrawSeparator_x                                  0x14058C800
#define CListWnd__EnableLine_x                                     0x14058CC20
#define CListWnd__EnsureVisible_x                                  0x14058CC80
#define CListWnd__ExtendSel_x                                      0x14058CD80
#define CListWnd__GetColumnMinWidth_x                              0x14058D0B0
#define CListWnd__GetColumnWidth_x                                 0x14058D130
#define CListWnd__GetCurSel_x                                      0x14058D230
#define CListWnd__GetItemData_x                                    0x14058D5B0
#define CListWnd__GetItemHeight_x                                  0x14058D5F0
#define CListWnd__GetItemRect_x                                    0x14058D810
#define CListWnd__GetItemText_x                                    0x14058DAB0
#define CListWnd__GetSelList_x                                     0x14058DD00
#define CListWnd__GetSeparatorRect_x                               0x14058DEF0
#define CListWnd__InsertLine_x                                     0x14058F350
#define CListWnd__RemoveLine_x                                     0x14058F9C0
#define CListWnd__SetColors_x                                      0x14058FD80
#define CListWnd__SetColumnJustification_x                         0x14058FDA0
#define CListWnd__SetColumnLabel_x                                 0x14058FE20
#define CListWnd__SetColumnWidth_x                                 0x14058FFC0
#define CListWnd__SetCurSel_x                                      0x140590090
#define CListWnd__SetItemColor_x                                   0x140590300
#define CListWnd__SetItemData_x                                    0x1405903A0
#define CListWnd__SetItemText_x                                    0x1405905E0
#define CListWnd__Sort_x                                           0x1405909F0
#define CListWnd__ToggleSel_x                                      0x140590B60
#define CListWnd__SetColumnsSizable_x                              0x140590010
#define CListWnd__SetItemWnd_x                                     0x140590710
#define CListWnd__GetItemWnd_x                                     0x14058DC90
#define CListWnd__SetItemIcon_x                                    0x1405903E0
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405898E0
#define CListWnd__SetVScrollPos_x                                  0x140590950

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042C870

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F4B68
#define MapViewMap__Clear_x                                        0x14042E3F0
#define MapViewMap__SetZoom_x                                      0x140434A40
#define MapViewMap__HandleLButtonDown_x                            0x140431580

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456210  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045C7B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045CF50
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140460750
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045FAA0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404649D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140635C20
#define CPacketScrambler__hton_x                                   0x140635C10

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B11C0
#define CSidlManagerBase__FindAnimation1_x                         0x1405B1100
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B17F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B15A0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B0500
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B0490
#define CSidlManagerBase__CreateXWnd_x                             0x1405AFAD0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CACC0
#define CSidlManager__CreateXWnd_x                                 0x1404CAE80

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576040
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140575F30
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C0370 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405761C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140575680
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140575750
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140575960
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140576860
#define CSidlScreenWnd__EnableIniStorage_x                         0x140576A90
#define CSidlScreenWnd__GetChildItem_x                             0x140576C30
#define CSidlScreenWnd__GetSidlPiece_x                             0x140576E80
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140580F90 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405771F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140577560
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140577E20
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140578710
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDB4D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140578D40
#define CSidlScreenWnd__StoreIniVis_x                              0x140579530
#define CSidlScreenWnd__vftable_x                                  0x140A8CF08
#define CSidlScreenWnd__WndNotification_x                          0x140579580

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140313AF0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140313F90 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140313EC0
#define CSkillMgr__IsActivatedSkill_x                              0x140314340
#define CSkillMgr__IsCombatSkill_x                                 0x140314380
#define CSkillMgr__GetSkillTimerDuration_x                         0x1403142B0
#define CSkillMgr__GetSkillLastUsed_x                              0x140313F10

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404E63A0
#define CSliderWnd__SetValue_x                                     0x140591CD0
#define CSliderWnd__SetNumTicks_x                                  0x140591B50

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D1300

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140596470
#define CStmlWnd__CalculateHSBRange_x                              0x140580940
#define CStmlWnd__CalculateVSBRange_x                              0x140597370
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140597DE0
#define CStmlWnd__ForceParseNow_x                                  0x140597E80
#define CStmlWnd__GetVisibleText_x                                 0x140598550
#define CStmlWnd__MakeStmlColorTag_x                               0x14059A290
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059A2D0
#define CStmlWnd__SetSTMLText_x                                    0x1405A12A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A1450
#define CStmlWnd__UpdateHistoryString_x                            0x1405A17E0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405920A0
#define CTabWnd__DrawCurrentPage_x                                 0x140592140
#define CTabWnd__DrawTab_x                                         0x140592510
#define CTabWnd__GetTabRect_x                                      0x140592B80
#define CTabWnd__InsertPage_x                                      0x140592E50
#define CTabWnd__RemovePage_x                                      0x1405930E0
#define CTabWnd__SetPage_x                                         0x140593240
#define CTabWnd__UpdatePage_x                                      0x140593540

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BA480
#define CPageWnd__SetTabText_x                                     0x1405BA4F0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA490  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA8A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A8B80
#define CTextureFont__DrawWrappedText1_x                           0x1405A8A90
#define CTextureFont__DrawWrappedText2_x                           0x1405A8CB0
#define CTextureFont__GetTextExtent_x                              0x1405A9060
#define CTextureFont__GetHeight_x                                  0x1405A9020

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BEAD0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575260

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0AE70
#define CXStr__gCXStrAccess_x                                      0x140EDB2D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057BFA0
#define CXWnd__ClrFocus_x                                          0x14057C290
#define CXWnd__Destroy_x                                           0x14057C410
#define CXWnd__DoAllDrawing_x                                      0x14057C510
#define CXWnd__DrawColoredRect_x                                   0x14057CCE0
#define CXWnd__DrawTooltip_x                                       0x14057E360
#define CXWnd__DrawTooltipAtPoint_x                                0x14057E410
#define CXWnd__GetChildItem_x                                      0x14057ED20
#define CXWnd__GetChildWndAt_x                                     0x14057EDE0
#define CXWnd__GetClientRect_x                                     0x14057F0A0
#define CXWnd__GetClientClipRect_x                                 0x14057EF50
#define CXWnd__GetRelativeRect_x                                   0x140580A80
#define CXWnd__GetScreenClipRect_x                                 0x140580B90
#define CXWnd__GetScreenRect_x                                     0x140580D10
#define CXWnd__GetTooltipRect_x                                    0x140580E90
#define CXWnd__IsActive_x                                          0x140581450
#define CXWnd__IsDescendantOf_x                                    0x140581480
#define CXWnd__IsReallyVisible_x                                   0x1405814F0
#define CXWnd__IsType_x                                            0x140581530
#define CXWnd__Minimize_x                                          0x140581630
#define CXWnd__ProcessTransition_x                                 0x1405824D0
#define CXWnd__Resize_x                                            0x1405825E0
#define CXWnd__Right_x                                             0x140582680
#define CXWnd__SetFocus_x                                          0x140582A40
#define CXWnd__SetFont_x                                           0x140582A90
#define CXWnd__SetKeyTooltip_x                                     0x140582B90
#define CXWnd__SetMouseOver_x                                      0x140582CD0
#define CXWnd__SetParent_x                                         0x140582D50
#define CXWnd__StartFade_x                                         0x140583190
#define CXWnd__vftable_x                                           0x140A8D4F8
#define CXWnd__CXWnd_x                                             0x14057AB40
#define CXWnd__dCXWnd_x                                            0x14057B490

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C5530

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A30C0
#define CXWndManager__DrawCursor_x                                 0x1405A33A0
#define CXWndManager__DrawWindows_x                                0x1405A3600
#define CXWndManager__GetKeyboardFlags_x                           0x1405A3CD0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A3D10
#define CXWndManager__RemoveWnd_x                                  0x1405A7240

// CDBStr
#define CDBStr__GetString_x                                        0x14017DF70

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063ED70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE730
#define CCharacterListWnd__EnterWorld_x                            0x1400CD430
#define CCharacterListWnd__Quit_x                                  0x1400CE710
#define CCharacterListWnd__UpdateList_x                            0x1400CF420

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060DA00
#define ItemBase__CreateItemTagString_x                            0x14060E450
#define ItemBase__GetImageNum_x                                    0x140610A00
#define ItemBase__GetItemValue_x                                   0x1406124A0
#define ItemBase__IsEmpty_x                                        0x1406140B0
#define ItemBase__IsKeyRingItem_x                                  0x1406147E0
#define ItemBase__ValueSellMerchant_x                              0x1406189A0
#define ItemClient__CanDrop_x                                      0x14029CCE0
#define ItemClient__CanGoInBag_x                                   0x14029CE10
#define ItemClient__CreateItemClient_x                             0x14029D0F0
#define ItemClient__dItemClient_x                                  0x14029CB50

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D5A0
#define EQ_LoadingS__Array_x                                       0x140CF7220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140625080
#define PcBase__GetCombatAbility_x                                 0x140625720
#define PcBase__GetCombatAbilityTimer_x                            0x1406257C0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140625F10
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140626A00
#define PcClient__AlertInventoryChanged_x                          0x1402BF210
#define PcClient__GetConLevel_x                                    0x1402BF830  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C1F60
#define PcClient__HasLoreItem_x                                    0x1402C2F30
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D07B0
#define PcZoneClient__RemoveMyAffect_x                             0x1402D46E0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020AE00  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020AFB0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B110  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B050  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244290  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401787E0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406826F0
#define PlayerBase__CanSee1_x                                      0x1406827C0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140682C80
#define PlayerBase__HasProperty_x                                  0x140682EB0
#define PlayerBase__IsTargetable_x                                 0x140682F70
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E11B0
#define PlayerClient__GetPcClient_x                                0x1402E39E0
#define PlayerClient__PlayerClient_x                               0x1402DA480
#define PlayerClient__SetNameSpriteState_x                         0x1402E6E30
#define PlayerClient__SetNameSpriteTint_x                          0x1402E7DF0
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6290
#define PlayerZoneClient__DoAttack_x                               0x1402F6FA0
#define PlayerZoneClient__GetLevel_x                               0x1402FA6D0
#define PlayerZoneClient__IsValidTeleport_x                        0x140247020
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C450

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EFBB0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EFC60  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EFD60
#define PlayerManagerClient__CreatePlayer_x                        0x1402EF680
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406822B0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2140
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A1D40
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A1DB0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A20D0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2260
#define KeypressHandler__HandleKeyUp_x                             0x1402A2360
#define KeypressHandler__SaveKeymapping_x                          0x1402A1FE0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063C8B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140637350

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C94F0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CE7F0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D0EA0
#define PcZoneClient__RemovePetEffect_x                            0x1402D47E0
#define PcZoneClient__HasAlternateAbility_x                        0x1402D1A70
#define PcZoneClient__CanEquipItem_x                               0x1402CCB20
#define PcZoneClient__GetItemByID_x                                0x1402CF880
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4560
#define PcZoneClient__BandolierSwap_x                              0x1402CBB00

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024BB50

// IconCache
#define IconCache__GetIcon_x                                       0x1403A78E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039C310
#define CContainerMgr__CloseContainer_x                            0x14039BC50
#define CContainerMgr__OpenExperimentContainer_x                   0x14039C690

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048FA10

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140294ED0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404208B0
#define CLootWnd__RequestLootSlot_x                                0x1404218C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC8E0
#define EQ_Spell__SpellAffects_x                                   0x1401CDBA0
#define EQ_Spell__SpellAffectBase_x                                0x1401CDB00
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7000
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6FB0
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD7C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD380
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCC50

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF990

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EB3F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EAB00
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EA330

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F2AB0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140175070
#define CTaskManager__GetTaskStatus_x                              0x140175180
#define CTaskManager__GetElementDescription_x                      0x140174D00

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CAC50
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9A90
#define EqSoundManager__SoundAssistPlay_x                          0x140319140  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319480  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140583F20
#define CTextureAnimation__SetCurCell_x                            0x140584230

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293130

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140656770
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406567F0
#define CharacterBase__IsExpansionFlag_x                           0x1401ED210

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037A590
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037AF00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037C450

// messages
#define msg_spell_worn_off_x                                       0x140201780
#define msg_new_text_x                                             0x1401FD040
#define __msgTokenTextParam_x                                      0x1401F4E50
#define msgTokenText_x                                             0x1401F4D70

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031AB30
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031AA50

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140691430

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140419D10

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A1000
#define CCursorAttachment__IsOkToActivate_x                        0x1403A3F60
#define CCursorAttachment__RemoveAttachment_x                      0x1403A4210
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BCF70
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BD160
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BD170

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401436F0
#define CFindItemWnd__Update_x                                     0x140144090
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DBC0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CF40
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA50
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E2F0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E5A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140472870

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406969F0
#define CResolutionHandler__GetWindowedStyle_x                     0x140313650

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140398640

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065AAE0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065A9D0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BD3A0
#define CGroupWnd__UpdateDisplay_x                                 0x1403BCF80

// ItemBase
#define ItemBase__IsLore_x                                         0x1406148B0
#define ItemBase__IsLoreEquipped_x                                 0x140614940

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B4E50

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402443F0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244380
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402443C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030DC50

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DAC0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DE70
#define FactionManagerClient__GetFactionStanding_x                 0x14011D290
#define FactionManagerClient__GetMaxFaction_x                      0x14011D290
#define FactionManagerClient__GetMinFaction_x                      0x14011D140

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC660

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129250

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5F00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5280
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5D20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5CA0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031FC50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030DC50

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B1A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140579B70

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331480

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C640

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14063F8F0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA14B0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
