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

#define __ClientDate                                               20230111u
#define __ExpectedVersionDate                                     "Jan 11 2023"
#define __ExpectedVersionTime                                     "10:50:57"
#define __ActualVersionDate_x                                      0x1407A5108
#define __ActualVersionTime_x                                      0x1407A50F8
#define __ActualVersionBuild_x                                     0x140793408

// Memory Protection
#define __MemChecker0_x                                            0x140274A90
#define __MemChecker1_x                                            0x140513750
#define __MemChecker4_x                                            0x1402447E0
#define __EncryptPad0_x                                            0x140A4E600

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B899D0
#define instEQZoneInfo_x                                           0x140B89BC4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401E01A0
#define __gfMaxZoomCameraDistance_x                                0x14079B430
#define __gfMaxCameraDistance_x                                    0x1407D61C8
#define __CurrentSocial_x                                          0x14090A900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A45F80
#define g_eqCommandStates_x                                        0x140A46FF0
#define __CommandList_x                                            0x140A47230
#define __ScreenMode_x                                             0x140AD151C
#define __gWorld_x                                                 0x140B823B0
#define __gpbCommandEvent_x                                        0x140B84884
#define __ServerHost_x                                             0x140B81FB8
#define __Guilds_x                                                 0x140B88580
#define __MouseEventTime_x                                         0x140BF4E38
#define DI8__Mouse_Check_x                                         0x140BF9AA0
#define __heqmain_x                                                0x140BFBF48
#define DI8__Mouse_x                                               0x140BFBF60
#define __HWnd_x                                                   0x140BFBF68
#define __Mouse_x                                                  0x140BF8F98
#define DI8__Main_x                                                0x140BF9030
#define DI8__Keyboard_x                                            0x140BF9038
#define __LoginName_x                                              0x140BF971C
#define __CurrentMapLabel_x                                        0x140C0EF00
#define __LabelCache_x                                             0x140C0FB10
#define __SubscriptionType_x                                       0x140C44900
#define Teleport_Table_Size_x                                      0x140B81E54
#define Teleport_Table_x                                           0x140B823E0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B84910
#define pinstActiveBanker_x                                        0x140B822F0
#define pinstActiveCorpse_x                                        0x140B822E0
#define pinstActiveGMaster_x                                       0x140B822E8
#define pinstActiveMerchant_x                                      0x140B822D8
#define pinstAltAdvManager_x                                       0x140AD2138
#define pinstCEverQuest_x                                          0x140BF8F90
#define pinstCamActor_x                                            0x140AD1500
#define pinstCDBStr_x                                              0x140AD0F40
#define pinstCDisplay_x                                            0x140B823C8
#define pinstControlledPlayer_x                                    0x140B82380
#define pinstCResolutionHandler_x                                  0x14127D4A0
#define pinstCSidlManager_x                                        0x140C20B50
#define pinstCXWndManager_x                                        0x140C20B60
#define instDynamicZone_x                                          0x140B88440 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B8848E
#define instExpeditionName_x                                       0x140B884CE
#define pinstDZMember_x                                            0x140B88558
#define pinstDZTimerInfo_x                                         0x140B88560
#define pinstEqLogin_x                                             0x140BF9060
#define instTribute_x                                              0x140A41800
#define pinstEQSoundManager_x                                      0x140AD24B8
#define pinstEQSpellStrings_x                                      0x140AB5B70
#define pinstSGraphicsEngine_x                                     0x14127D238
#define pinstLocalPC_x                                             0x140B823C0
#define pinstLocalPlayer_x                                         0x140B822D0
#define pinstCMercenaryClientManager_x                             0x140BF66E8
#define pinstModelPlayer_x                                         0x140B82300
#define pinstRenderInterface_x                                     0x14127D250
#define pinstSkillMgr_x                                            0x140BF8370
#define pinstSpawnManager_x                                        0x140BF6AA0
#define pinstSpellManager_x                                        0x140BF84B8
#define pinstStringTable_x                                         0x140B823D0
#define pinstSwitchManager_x                                       0x140B81DD0
#define pinstTarget_x                                              0x140B82378
#define pinstTaskMember_x                                          0x140A417F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B82388
#define pinstTradeTarget_x                                         0x140B822F8
#define instTributeActive_x                                        0x140A41829
#define pinstViewActor_x                                           0x140AD14F8
#define pinstWorldData_x                                           0x140B84800
#define pinstPlayerPath_x                                          0x140BF6AC8
#define pinstTargetIndicator_x                                     0x140BF8568
#define EQObject_Top_x                                             0x140B823A0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C0C058
#define pinstCContainerMgr_x                                       0x140AD1030
#define pinstCContextMenuManager_x                                 0x140C20B00
#define pinstCInvSlotMgr_x                                         0x140AD0FE8
#define pinstCItemDisplayManager_x                                 0x140C0EAD0
#define pinstCPopupWndManager_x                                    0x140C0F360
#define pinstCSpellDisplayMgr_x                                    0x140C0F9F0
#define pinstCTaskManager_x                                        0x14090AC40
#define pinstEQSuiteTextureLoader_x                                0x140A57CD0
#define pinstItemIconCache_x                                       0x140C0C3B8
#define pinstLootFiltersManager_x                                  0x140AD0958

////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402064A0
#define __CastRay_x                                                0x1401FF040
#define __CastRay2_x                                               0x1401FED50
#define __ConvertItemTags_x                                        0x1401FF440
#define __CleanItemTags_x                                          0x140058F80
#define __CreateCascadeMenuItems_x                                 0x140153FC0
#define __DoesFileExist_x                                          0x140517F30
#define __EQGetTime_x                                              0x140513D00
#define __ExecuteCmd_x                                             0x1401D80C0
#define __FixHeading_x                                             0x140615820
#define __FlushDxKeyboard_x                                        0x1402EFD40
#define __get_bearing_x                                            0x140208690
#define __get_melee_range_x                                        0x140208780
#define __GetAnimationCache_x                                      0x140366C20
#define __GetGaugeValueFromEQ_x                                    0x14048BF70
#define __GetLabelFromEQ_x                                         0x14048D520
#define __GetXTargetType_x                                         0x140616B00   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406158A0
#define __HelpPath_x                                               0x140BF4D00   // Why?
#define __NewUIINI_x                                               0x1404986C0   // Why?
#define __ProcessGameEvents_x                                      0x14023A020
#define __ProcessKeyboardEvents_x                                  0x1402F1540
#define __ProcessMouseEvents_x                                     0x14023B450
#define __SaveColors_x                                             0x140163C50
#define __STMLToText_x                                             0x140541A90
#define __WndProc_x                                                0x1402EE4C0
#define CMemoryMappedFile__SetFile_x                               0x140751320
#define DrawNetStatus_x                                            0x140282650
#define Util__FastTime_x                                           0x140514A00
#define __eq_delete_x                                              0x14061B930
#define __eq_new_x                                                 0x14061BA2C
#define __CopyLayout_x                                             0x140270F50
#define __ThrottleFrameRate_x                                      0x140229EE1
#define __ThrottleFrameRateEnd_x                                   0x140229F41

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140300690
#define CAAWnd__Update_x                                           0x140300990
#define CAAWnd__UpdateSelected_x                                   0x140301950

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B9E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400741D0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140782420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C260

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016E910
#define AltAdvManager__IsAbilityReady_x                            0x14016EB90
#define AltAdvManager__GetAAById_x                                 0x14016E1E0
#define AltAdvManager__CanTrainAbility_x                           0x14016E010
#define AltAdvManager__CanSeeAbility_x                             0x14016DCD0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3F50
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4D00
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4F10
#define CharacterZoneClient__CanUseItem_x                          0x1400B8AA0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5800
#define CharacterZoneClient__CastSpell_x                           0x1400A58A0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4C10
#define CharacterZoneClient__Cur_HP_x                              0x1400BA0D0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA290
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A88A0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C02D0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE760  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D90
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B8020
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1DF0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0D20
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F60
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA50
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C2C0
#define CharacterZoneClient__GetHPRegen_x                          0x1400C1420
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9D80
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C2000
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9FE0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2A90
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA1F0
#define CharacterZoneClient__GetModCap_x                           0x1400C9E70
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA290
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA4A0
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F160
#define CharacterZoneClient__HasSkill_x                            0x1400C56A0
#define CharacterZoneClient__HitBySpell_x                          0x1400AAF40
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE7B0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9900
#define CharacterZoneClient__Max_Endurance_x                       0x14029B030  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9C40
#define CharacterZoneClient__Max_Mana_x                            0x14029B220  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA100
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1C90
#define CharacterZoneClient__SpellDuration_x                       0x1400B2870
#define CharacterZoneClient__TotalEffect_x                         0x1400B3A50
#define CharacterZoneClient__UseSkill_x                            0x1400CF6B0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14031E940

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140328B00

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140324A70
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140323B00

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14032B1B0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407E2910

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14034BD00
#define CChatWindowManager__InitContextMenu_x                      0x14034BE90
#define CChatWindowManager__FreeChatWindow_x                       0x14034AF50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140352C20
#define CChatWindowManager__CreateChatWindow_x                     0x14034A890

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D75A0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140353B90
#define CChatWindow__Clear_x                                       0x1403549A0
#define CChatWindow__WndNotification_x                             0x140355B40
#define CChatWindow__AddHistory_x                                  0x1403544A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405529A0
#define CContextMenu__RemoveMenuItem_x                             0x140552EB0
#define CContextMenu__RemoveAllMenuItems_x                         0x140552E80
#define CContextMenu__CheckMenuItem_x                              0x140552CF0
#define CContextMenu__SetMenuItem_x                                0x140552ED0
#define CContextMenu__AddSeparator_x                               0x140552B00

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140553520
#define CContextMenuManager__RemoveMenu_x                          0x140553AA0
#define CContextMenuManager__PopupMenu_x                           0x140553820
#define CContextMenuManager__Flush_x                               0x1405535A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140360C50

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405DE630
#define CChatService__GetFriendName_x                              0x1405DE640

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14054EBA0
#define CComboWnd__Draw_x                                          0x14054EC90
#define CComboWnd__GetCurChoice_x                                  0x14054EF60  // unused
#define CComboWnd__GetListRect_x                                   0x14054F000
#define CComboWnd__InsertChoice_x                                  0x14054F320
#define CComboWnd__SetColors_x                                     0x14054F6B0
#define CComboWnd__SetChoice_x                                     0x14054F670
#define CComboWnd__GetItemCount_x                                  0x14054EFF0
#define CComboWnd__GetCurChoiceText_x                              0x14054EFA0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14054EF30
#define CComboWnd__InsertChoiceAtIndex_x                           0x14054F3E0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14035ECC0
#define CContainerWnd__SetContainer_x                              0x14035FA70
#define CContainerWnd__vftable_x                                   0x1407B3038

// CDisplay
#define CDisplay__cameraType_x                                     0x140AD12AC
#define CDisplay__ZoneMainUI_x                                     0x14056A050
#define CDisplay__PreZoneMainUI_x                                  0x140160C00
#define CDisplay__CleanGameUI_x                                    0x1401530C0
#define CDisplay__GetClickedActor_x                                0x140157250
#define CDisplay__GetUserDefinedColor_x                            0x140157D30
#define CDisplay__InitCharSelectUI_x                               0x140157FE0
#define CDisplay__ReloadUI_x                                       0x140162F20
#define CDisplay__WriteTextHD2_x                                   0x140169E00
#define CDisplay__TrueDistance_x                                   0x140169AE0
#define CDisplay__SetViewActor_x                                   0x140166440
#define CDisplay__GetFloorHeight_x                                 0x1401574B0
#define CDisplay__ToggleScreenshotMode_x                           0x1401695F0
#define CDisplay__RealRender_World_x                               0x1401622D0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140575550
#define CEditWnd__DrawCaret_x                                      0x1405563D0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140556860
#define CEditWnd__GetCaretPt_x                                     0x140556AD0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140556B10
#define CEditWnd__GetDisplayString_x                               0x140556D70
#define CEditWnd__GetHorzOffset_x                                  0x140556FB0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405570F0
#define CEditWnd__GetSelStartPt_x                                  0x1405573D0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140557220
#define CEditWnd__PointFromPrintableChar_x                         0x140558000
#define CEditWnd__ReplaceSelection_x                               0x1405583A0
#define CEditWnd__SelectableCharFromPoint_x                        0x140558840
#define CEditWnd__SetEditable_x                                    0x140558AC0
#define CEditWnd__SetWindowText_x                                  0x140558AF0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14022AE90
#define CEverQuest__ClickedPlayer_x                                0x140221020
#define CEverQuest__CreateTargetIndicator_x                        0x140221780
#define CEverQuest__DoTellWindow_x                                 0x1400D72B0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7B70 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022C8C0
#define CEverQuest__dsp_chat_x                                     0x1400D6CF0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140255EB0
#define CEverQuest__Emote_x                                        0x14022D130
#define CEverQuest__GetBodyTypeDesc_x                              0x14022DED0
#define CEverQuest__GetClassDesc_x                                 0x14022DF30
#define CEverQuest__GetClassThreeLetterCode_x                      0x14022E300
#define CEverQuest__GetDeityDesc_x                                 0x14022E5B0
#define CEverQuest__GetLangDesc_x                                  0x14022E9E0
#define CEverQuest__GetRaceDesc_x                                  0x14022ED80
#define CEverQuest__InterpretCmd_x                                 0x1402305E0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140244E60
#define CEverQuest__LMouseUp_x                                     0x140231F80
#define CEverQuest__RightClickedOnPlayer_x                         0x140242800
#define CEverQuest__RMouseUp_x                                     0x14023BFD0
#define CEverQuest__SetGameState_x                                 0x140247350
#define CEverQuest__UPCNotificationFlush_x                         0x14024C9C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140231C00
#define CEverQuest__ReportSuccessfulHeal_x                         0x14023D300
#define CEverQuest__ReportSuccessfulHit_x                          0x14023E040

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140370FA0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400947A0
#define CGuild__GetGuildName_x                                     0x1400947E0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140392D30

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140266CD0
#define CHotButton__SetCheck_x                                     0x140266FA0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403A2A30
#define CInvSlotMgr__MoveItem_x                                    0x1403A2B80
#define CInvSlotMgr__SelectSlot_x                                  0x1403A4540

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403A0690
#define CInvSlot__SliderComplete_x                                 0x1403A18C0
#define CInvSlot__GetItemBase_x                                    0x14039C770
#define CInvSlot__UpdateItem_x                                     0x1403A1D20

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403A4BA0
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403A5A90

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403C5160
#define CItemDisplayWnd__UpdateStrings_x                           0x1403C7A90
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403C1FF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403C36D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403C45B0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140488B30
#define CSpellDisplayWnd__UpdateStrings_x                          0x14048A700

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404C32B0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403BE7A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140118420

// CLabel
#define CLabel__UpdateText_x                                       0x1403CEE50

// CListWnd
#define CListWnd__CListWnd_x                                       0x140525B80
#define CListWnd__dCListWnd_x                                      0x140525FC0
#define CListWnd__vftable_x                                        0x1407E1D00
#define CListWnd__AddColumn_x                                      0x140526660
#define CListWnd__AddColumn1_x                                     0x140526700
#define CListWnd__AddLine_x                                        0x140526860
#define CListWnd__AddString_x                                      0x140526DF0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405274F0
#define CListWnd__CalculateVSBRange_x                              0x1405277C0
#define CListWnd__ClearSel_x                                       0x140527960
#define CListWnd__ClearAllSel_x                                    0x140527900
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405279C0
#define CListWnd__Compare_x                                        0x140527B80
#define CListWnd__Draw_x                                           0x140528050
#define CListWnd__DrawColumnSeparators_x                           0x140528BE0
#define CListWnd__DrawHeader_x                                     0x140528CA0
#define CListWnd__DrawItem_x                                       0x140529360
#define CListWnd__DrawLine_x                                       0x140529CD0
#define CListWnd__DrawSeparator_x                                  0x14052A180
#define CListWnd__EnableLine_x                                     0x14052A590
#define CListWnd__EnsureVisible_x                                  0x14052A5F0
#define CListWnd__ExtendSel_x                                      0x14052A6E0
#define CListWnd__GetColumnMinWidth_x                              0x14052AA10
#define CListWnd__GetColumnWidth_x                                 0x14052AA90
#define CListWnd__GetCurSel_x                                      0x14052AB90
#define CListWnd__GetItemData_x                                    0x14052AF00
#define CListWnd__GetItemHeight_x                                  0x14052AF40
#define CListWnd__GetItemRect_x                                    0x14052B100
#define CListWnd__GetItemText_x                                    0x14052B390
#define CListWnd__GetSelList_x                                     0x14052B5E0
#define CListWnd__GetSeparatorRect_x                               0x14052B7D0
#define CListWnd__InsertLine_x                                     0x14052CC20
#define CListWnd__RemoveLine_x                                     0x14052D230
#define CListWnd__SetColors_x                                      0x14052D600
#define CListWnd__SetColumnJustification_x                         0x14052D620
#define CListWnd__SetColumnLabel_x                                 0x14052D6A0
#define CListWnd__SetColumnWidth_x                                 0x14052D840
#define CListWnd__SetCurSel_x                                      0x14052D910
#define CListWnd__SetItemColor_x                                   0x14052DB80
#define CListWnd__SetItemData_x                                    0x14052DC20
#define CListWnd__SetItemText_x                                    0x14052DE60
#define CListWnd__Sort_x                                           0x14052E270
#define CListWnd__ToggleSel_x                                      0x14052E3E0
#define CListWnd__SetColumnsSizable_x                              0x14052D890
#define CListWnd__SetItemWnd_x                                     0x14052DF90
#define CListWnd__GetItemWnd_x                                     0x14052B570
#define CListWnd__SetItemIcon_x                                    0x14052DC60
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405272C0
#define CListWnd__SetVScrollPos_x                                  0x14052E1D0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403E1790

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407BE770
#define MapViewMap__Clear_x                                        0x1403E3310
#define MapViewMap__SetZoom_x                                      0x1403E98D0
#define MapViewMap__HandleLButtonDown_x                            0x1403E6410

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14040AEA0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140410A50
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140412A70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140414880
#define CMerchantWnd__SelectBuySellSlot_x                          0x140413CA0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140418620

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405BD000
#define CPacketScrambler__hton_x                                   0x1405BCFF0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14054C280
#define CSidlManagerBase__FindAnimation1_x                         0x14054C1C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14054C8B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14054C660
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14054B5C0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14054B550
#define CSidlManagerBase__CreateXWnd_x                             0x14054ABB0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14047B320
#define CSidlManager__CreateXWnd_x                                 0x14047B4E0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140543610
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140543500
#define CSidlScreenWnd__ConvertToRes_x                             0x14056FB10 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140543730
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140542DA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140542CF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140542FC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140543D00
#define CSidlScreenWnd__EnableIniStorage_x                         0x140543F30
#define CSidlScreenWnd__GetChildItem_x                             0x1405440C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405442E0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140535D30 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140544650
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405449C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140545280
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140545B70
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C209A8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140546180
#define CSidlScreenWnd__StoreIniVis_x                              0x140546970
#define CSidlScreenWnd__vftable_x                                  0x1407E2D78
#define CSidlScreenWnd__WndNotification_x                          0x1405469C0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D8C70 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D9070 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D8FB0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D9410
#define CSkillMgr__IsCombatSkill_x                                 0x1402D9450

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140498730
#define CSliderWnd__SetValue_x                                     0x140555060
#define CSliderWnd__SetNumTicks_x                                  0x140554EE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404827E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14055D5A0
#define CStmlWnd__CalculateHSBRange_x                              0x1405356E0
#define CStmlWnd__CalculateVSBRange_x                              0x14055E4A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14055EEF0
#define CStmlWnd__ForceParseNow_x                                  0x14055EF90
#define CStmlWnd__GetVisibleText_x                                 0x14055F650
#define CStmlWnd__MakeStmlColorTag_x                               0x140561380
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405613C0
#define CStmlWnd__SetSTMLText_x                                    0x140568380
#define CStmlWnd__StripFirstSTMLLines_x                            0x140568530
#define CStmlWnd__UpdateHistoryString_x                            0x1405688C0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14055A090
#define CTabWnd__DrawCurrentPage_x                                 0x14055A130
#define CTabWnd__DrawTab_x                                         0x14055A500
#define CTabWnd__GetTabRect_x                                      0x14055AB60
#define CTabWnd__InsertPage_x                                      0x14055AE30
#define CTabWnd__RemovePage_x                                      0x14055B0C0
#define CTabWnd__SetPage_x                                         0x14055B220
#define CTabWnd__UpdatePage_x                                      0x14055B520

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140559C90
#define CPageWnd__SetTabText_x                                     0x140559D00

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DCF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E100


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14052F530
#define CTextureFont__DrawWrappedText1_x                           0x14052F440
#define CTextureFont__DrawWrappedText2_x                           0x14052F660
#define CTextureFont__GetTextExtent_x                              0x14052FA10
#define CTextureFont__GetHeight_x                                  0x14052F9D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14056E270

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405227F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A57650
#define CXStr__gCXStrAccess_x                                      0x140C1FF68

// CXWnd
#define CXWnd__BringToTop_x                                        0x140530F50
#define CXWnd__ClrFocus_x                                          0x140531190
#define CXWnd__Destroy_x                                           0x1405312D0
#define CXWnd__DoAllDrawing_x                                      0x1405313E0
#define CXWnd__DrawColoredRect_x                                   0x140531BA0
#define CXWnd__DrawTooltip_x                                       0x140533210
#define CXWnd__DrawTooltipAtPoint_x                                0x1405332C0
#define CXWnd__GetChildItem_x                                      0x140533BC0
#define CXWnd__GetChildWndAt_x                                     0x140533C80
#define CXWnd__GetClientClipRect_x                                 0x140533DE0
#define CXWnd__GetRelativeRect_x                                   0x140535820
#define CXWnd__GetScreenClipRect_x                                 0x140535930
#define CXWnd__GetScreenRect_x                                     0x140535AB0
#define CXWnd__GetTooltipRect_x                                    0x140535C30
#define CXWnd__IsActive_x                                          0x1405361B0
#define CXWnd__IsDescendantOf_x                                    0x1405361E0
#define CXWnd__IsReallyVisible_x                                   0x140536250
#define CXWnd__IsType_x                                            0x140536290
#define CXWnd__Minimize_x                                          0x140536390
#define CXWnd__ProcessTransition_x                                 0x1405373B0
#define CXWnd__Resize_x                                            0x1405374C0
#define CXWnd__Right_x                                             0x140537560
#define CXWnd__SetFocus_x                                          0x140537910
#define CXWnd__SetFont_x                                           0x140537960
#define CXWnd__SetKeyTooltip_x                                     0x140537A50
#define CXWnd__SetMouseOver_x                                      0x140537B80
#define CXWnd__SetParent_x                                         0x140537C00
#define CXWnd__StartFade_x                                         0x140538040
#define CXWnd__vftable_x                                           0x1407E2488
#define CXWnd__CXWnd_x                                             0x14052FB30
#define CXWnd__dCXWnd_x                                            0x140530450

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140574CD0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140539570
#define CXWndManager__DrawCursor_x                                 0x140539850
#define CXWndManager__DrawWindows_x                                0x140539980
#define CXWndManager__GetKeyboardFlags_x                           0x14053A040
#define CXWndManager__HandleKeyboardMsg_x                          0x14053A080
#define CXWndManager__RemoveWnd_x                                  0x14053D4F0

// CDBStr
#define CDBStr__GetString_x                                        0x1401512D0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405C5EC0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1D20
#define CCharacterListWnd__EnterWorld_x                            0x1400A0A50
#define CCharacterListWnd__Quit_x                                  0x1400A1D00
#define CCharacterListWnd__UpdateList_x                            0x1400A2A20

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140596060
#define ItemBase__CreateItemTagString_x                            0x140596A40
#define ItemBase__GetImageNum_x                                    0x140598C10
#define ItemBase__GetItemValue_x                                   0x14059AB30
#define ItemBase__IsEmpty_x                                        0x14059C680
#define ItemBase__IsKeyRingItem_x                                  0x14059CDA0
#define ItemBase__ValueSellMerchant_x                              0x1405A1160
#define ItemClient__CanDrop_x                                      0x1402690F0
#define ItemClient__CanGoInBag_x                                   0x140269220
#define ItemClient__CreateItemClient_x                             0x1402694E0
#define ItemClient__dItemClient_x                                  0x140268F50

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401700B0
#define EQ_LoadingS__Array_x                                       0x140A43A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405ACBF0
#define PcBase__GetCombatAbility_x                                 0x1405AD240
#define PcBase__GetCombatAbilityTimer_x                            0x1405AD2E0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405AD9F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405AE260
#define PcClient__AlertInventoryChanged_x                          0x140289D10
#define PcClient__GetConLevel_x                                    0x14028A1F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x14028CAB0
#define PcClient__HasLoreItem_x                                    0x14028DB30
#define PcZoneClient__GetItemRecastTimer_x                         0x1402999E0
#define PcZoneClient__RemoveMyAffect_x                             0x14029C080

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401DC760  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401DC7D0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401DC8E0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401DC840  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x140212BE0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014BBB0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406084B0
#define PlayerBase__CanSee1_x                                      0x140608580
#define PlayerBase__GetVisibilityLineSegment_x                     0x140608AB0
#define PlayerBase__HasProperty_x                                  0x140608CD0
#define PlayerBase__IsTargetable_x                                 0x140608D90
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A7B20
#define PlayerClient__GetPcClient_x                                0x1402AA0B0
#define PlayerClient__PlayerClient_x                               0x1402A0E80
#define PlayerClient__SetNameSpriteState_x                         0x1402AD4E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402AE480
#define PlayerZoneClient__ChangeHeight_x                           0x1402BBF30
#define PlayerZoneClient__DoAttack_x                               0x1402BCBF0
#define PlayerZoneClient__GetLevel_x                               0x1402C0160
#define PlayerZoneClient__IsValidTeleport_x                        0x1402159A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015F4A0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B5D20  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B5D50  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B5E00
#define PlayerManagerClient__CreatePlayer_x                        0x1402B5710
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140608130

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14026E490
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14026E090
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14026E100
#define KeypressHandler__ClearCommandStateArray_x                  0x14026E420  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14026E5B0
#define KeypressHandler__HandleKeyUp_x                             0x14026E690
#define KeypressHandler__SaveKeymapping_x                          0x14026E330  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405C3AD0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405BE6A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140293090  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140298050
#define PcZoneClient__GetPcSkillLimit_x                            0x140299F40
#define PcZoneClient__RemovePetEffect_x                            0x14029C180
#define PcZoneClient__HasAlternateAbility_x                        0x14029A9B0
#define PcZoneClient__CanEquipItem_x                               0x140296420
#define PcZoneClient__GetItemByID_x                                0x140298F90
#define PcZoneClient__RemoveBuffEffect_x                           0x14029BF30
#define PcZoneClient__BandolierSwap_x                              0x1402955E0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140299E90

// Doors
#define EQSwitch__UseSwitch_x                                      0x14021A460

// IconCache
#define IconCache__GetIcon_x                                       0x140366C50

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14035DAA0
#define CContainerMgr__CloseContainer_x                            0x14035D460
#define CContainerMgr__OpenExperimentContainer_x                   0x14035DE00

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140442450

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402619E0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403D59D0
#define CLootWnd__RequestLootSlot_x                                0x1403D6930

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019F5F0
#define EQ_Spell__SpellAffects_x                                   0x1401A08A0
#define EQ_Spell__SpellAffectBase_x                                0x1401A0800
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA680
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA630
#define EQ_Spell__IsSPAStacking_x                                  0x1401A04C0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401A0080
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019F960

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400931D0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14049C4A0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14049C4E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14049B9F0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14049AFA0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404A3630  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140148560
#define CTaskManager__GetTaskStatus_x                              0x140148670
#define CTaskManager__GetElementDescription_x                      0x1401481F0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x14019D950
#define EqSoundManager__PlayScriptMp3_x                            0x14019C750
#define EqSoundManager__SoundAssistPlay_x                          0x1402DF470  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DF7A0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405592F0
#define CTextureAnimation__SetCurCell_x                            0x140559600

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025FCA0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405DC150
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405DC1D0
#define CharacterBase__IsExpansionFlag_x                           0x1401BF2E0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14033DDC0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14033E700
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033FB40

// messages
#define msg_spell_worn_off_x                                       0x1401D32A0
#define msg_new_text_x                                             0x1401CECF0
#define __msgTokenTextParam_x                                      0x1401C6B30
#define msgTokenText_x                                             0x1401C6A50

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E0E30
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E0D50

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140616EE0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403CF590

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140362DF0
#define CCursorAttachment__AttachToCursor1_x                       0x140361A40
#define CCursorAttachment__Deactivate_x                            0x1403632F0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14056C4C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14056C6B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x14056C6C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113620
#define CFindItemWnd__Update_x                                     0x140113DF0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E360

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011CBD0
#define LootFiltersManager__GetItemFilterData_x                    0x14011D6E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011DF80
#define LootFiltersManager__SetItemLootFilter_x                    0x14011E230

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404258C0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14061B2B0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D87D0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x14035A070

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405E00C0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405DFFB0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x14037C3C0
#define CGroupWnd__UpdateDisplay_x                                 0x14037C160

// ItemBase
#define ItemBase__IsLore_x                                         0x14059CE70
#define ItemBase__IsLoreEquipped_x                                 0x14059CFD0

#define MultipleItemMoveManager__ProcessMove_x                     0x140280A90

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140212D40
#define EQPlacedItemManager__GetItemByGuid_x                       0x140212CD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140212D10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D3210

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF3C0
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF770
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEB90
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEB90
#define FactionManagerClient__GetMinFaction_x                      0x1400EEA40

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DD70

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAA70

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140178910
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177C90
#define CAltAbilityData__GetMercCurrentRank_x                      0x140178730  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401786B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E5520

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D3210

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401DC9D0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056B640

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056110

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F66E0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D9C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
