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

#define __ClientDate                                               20230109u
#define __ExpectedVersionDate                                     "Jan  9 2023"
#define __ExpectedVersionTime                                     "12:20:17"
#define __ActualVersionDate_x                                      0x1407A5108
#define __ActualVersionTime_x                                      0x1407A50F8
#define __ActualVersionBuild_x                                     0x140793408

// Memory Protection
#define __MemChecker0_x                                            0x140274740
#define __MemChecker1_x                                            0x1405131F0
#define __MemChecker4_x                                            0x1402444A0
#define __EncryptPad0_x                                            0x140A4E600

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B899D0
#define instEQZoneInfo_x                                           0x140B89BC4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401DFEB0
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
#define __allowslashcommand_x                                      0x1402061B0
#define __CastRay_x                                                0x1401FED50
#define __CastRay2_x                                               0x1401FEA60
#define __ConvertItemTags_x                                        0x1401FF150
#define __CleanItemTags_x                                          0x140058F80
#define __CreateCascadeMenuItems_x                                 0x140153F00
#define __DoesFileExist_x                                          0x1405179D0
#define __EQGetTime_x                                              0x1405137A0
#define __ExecuteCmd_x                                             0x1401D7DD0
#define __FixHeading_x                                             0x140615560
#define __FlushDxKeyboard_x                                        0x1402EFA20
#define __get_bearing_x                                            0x1402083A0
#define __get_melee_range_x                                        0x140208490
#define __GetAnimationCache_x                                      0x140366830
#define __GetGaugeValueFromEQ_x                                    0x14048BA70
#define __GetLabelFromEQ_x                                         0x14048D020
#define __GetXTargetType_x                                         0x140616840   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406155E0
#define __HelpPath_x                                               0x140BF4D00   // Why?
#define __NewUIINI_x                                               0x1404981D0   // Why?
#define __ProcessGameEvents_x                                      0x140239CE0
#define __ProcessKeyboardEvents_x                                  0x1402F1220
#define __ProcessMouseEvents_x                                     0x14023B110
#define __SaveColors_x                                             0x140163B90
#define __STMLToText_x                                             0x140541550
#define __WndProc_x                                                0x1402EE1A0
#define CMemoryMappedFile__SetFile_x                               0x140751060
#define DrawNetStatus_x                                            0x1402822B0
#define Util__FastTime_x                                           0x1405144A0
#define __eq_delete_x                                              0x14061B670
#define __eq_new_x                                                 0x14061B76C
#define __CopyLayout_x                                             0x140270BE0
#define __ThrottleFrameRate_x                                      0x140229BB1
#define __ThrottleFrameRateEnd_x                                   0x140229C11

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140300360
#define CAAWnd__Update_x                                           0x140300660
#define CAAWnd__UpdateSelected_x                                   0x140301620

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B9A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400741A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140782420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C220

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016E840
#define AltAdvManager__IsAbilityReady_x                            0x14016EAC0
#define AltAdvManager__GetAAById_x                                 0x14016E110
#define AltAdvManager__CanTrainAbility_x                           0x14016DF40
#define AltAdvManager__CanSeeAbility_x                             0x14016DC00

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3F10
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4CC0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4ED0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8A70
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A57C0
#define CharacterZoneClient__CastSpell_x                           0x1400A5860
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4BE0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA0A0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA260
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8860
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C0290
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE720  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7FF0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1DB0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0CE0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F20
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C280
#define CharacterZoneClient__GetHPRegen_x                          0x1400C13E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9D50
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1FC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9FA0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2A50
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA1B0
#define CharacterZoneClient__GetModCap_x                           0x1400C9E30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA250
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA460
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F120
#define CharacterZoneClient__HasSkill_x                            0x1400C5660
#define CharacterZoneClient__HitBySpell_x                          0x1400AAF00
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE770
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C98C0
#define CharacterZoneClient__Max_Endurance_x                       0x14029AC80  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9C00
#define CharacterZoneClient__Max_Mana_x                            0x14029AE70  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA0C0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1C60
#define CharacterZoneClient__SpellDuration_x                       0x1400B2840
#define CharacterZoneClient__TotalEffect_x                         0x1400B3A20
#define CharacterZoneClient__UseSkill_x                            0x1400CF670


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14031E5F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140328790

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140324710
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403237A0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14032AE40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407E2910

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14034B930
#define CChatWindowManager__InitContextMenu_x                      0x14034BAC0
#define CChatWindowManager__FreeChatWindow_x                       0x14034AB80
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140352850
#define CChatWindowManager__CreateChatWindow_x                     0x14034A4C0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7570

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403537C0
#define CChatWindow__Clear_x                                       0x1403545D0
#define CChatWindow__WndNotification_x                             0x140355770
#define CChatWindow__AddHistory_x                                  0x1403540D0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405524D0
#define CContextMenu__RemoveMenuItem_x                             0x1405529F0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405529C0
#define CContextMenu__CheckMenuItem_x                              0x140552830
#define CContextMenu__SetMenuItem_x                                0x140552A10
#define CContextMenu__AddSeparator_x                               0x140552640

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140553060
#define CContextMenuManager__RemoveMenu_x                          0x1405535E0
#define CContextMenuManager__PopupMenu_x                           0x140553360
#define CContextMenuManager__Flush_x                               0x1405530E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140360870

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405DDED0
#define CChatService__GetFriendName_x                              0x1405DDEE0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14054E680
#define CComboWnd__Draw_x                                          0x14054E780
#define CComboWnd__GetCurChoice_x                                  0x14054EA60  // unused
#define CComboWnd__GetListRect_x                                   0x14054EB00
#define CComboWnd__InsertChoice_x                                  0x14054EE40
#define CComboWnd__SetColors_x                                     0x14054F1D0
#define CComboWnd__SetChoice_x                                     0x14054F190
#define CComboWnd__GetItemCount_x                                  0x14054EAF0
#define CComboWnd__GetCurChoiceText_x                              0x14054EAA0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14054EA30
#define CComboWnd__InsertChoiceAtIndex_x                           0x14054EF00

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14035E8F0
#define CContainerWnd__SetContainer_x                              0x14035F690
#define CContainerWnd__vftable_x                                   0x1407B3038

// CDisplay
#define CDisplay__cameraType_x                                     0x140AD12AC
#define CDisplay__ZoneMainUI_x                                     0x140569C70
#define CDisplay__PreZoneMainUI_x                                  0x140160B40
#define CDisplay__CleanGameUI_x                                    0x140153000
#define CDisplay__GetClickedActor_x                                0x140157190
#define CDisplay__GetUserDefinedColor_x                            0x140157C70
#define CDisplay__InitCharSelectUI_x                               0x140157F20
#define CDisplay__ReloadUI_x                                       0x140162E60
#define CDisplay__WriteTextHD2_x                                   0x140169D40
#define CDisplay__TrueDistance_x                                   0x140169A20
#define CDisplay__SetViewActor_x                                   0x140166380
#define CDisplay__GetFloorHeight_x                                 0x1401573F0
#define CDisplay__ToggleScreenshotMode_x                           0x140169530
#define CDisplay__RealRender_World_x                               0x140162210

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140575170
#define CEditWnd__DrawCaret_x                                      0x140555F20  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405563D0
#define CEditWnd__GetCaretPt_x                                     0x140556640  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140556680
#define CEditWnd__GetDisplayString_x                               0x1405568F0
#define CEditWnd__GetHorzOffset_x                                  0x140556B30
#define CEditWnd__GetLineForPrintableChar_x                        0x140556C80
#define CEditWnd__GetSelStartPt_x                                  0x140556F60  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140556DB0
#define CEditWnd__PointFromPrintableChar_x                         0x140557B90
#define CEditWnd__ReplaceSelection_x                               0x140557F40
#define CEditWnd__SelectableCharFromPoint_x                        0x1405583E0
#define CEditWnd__SetEditable_x                                    0x140558670
#define CEditWnd__SetWindowText_x                                  0x1405586A0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14022AB60
#define CEverQuest__ClickedPlayer_x                                0x140220D10
#define CEverQuest__CreateTargetIndicator_x                        0x140221470
#define CEverQuest__DoTellWindow_x                                 0x1400D7280 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7B40 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022C590
#define CEverQuest__dsp_chat_x                                     0x1400D6CC0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140255B70
#define CEverQuest__Emote_x                                        0x14022CE00
#define CEverQuest__GetBodyTypeDesc_x                              0x14022DBA0
#define CEverQuest__GetClassDesc_x                                 0x14022DC00
#define CEverQuest__GetClassThreeLetterCode_x                      0x14022DFD0
#define CEverQuest__GetDeityDesc_x                                 0x14022E280
#define CEverQuest__GetLangDesc_x                                  0x14022E6B0
#define CEverQuest__GetRaceDesc_x                                  0x14022EA50
#define CEverQuest__InterpretCmd_x                                 0x1402302B0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140244B20
#define CEverQuest__LMouseUp_x                                     0x140231C50
#define CEverQuest__RightClickedOnPlayer_x                         0x1402424C0
#define CEverQuest__RMouseUp_x                                     0x14023BC90
#define CEverQuest__SetGameState_x                                 0x140247010
#define CEverQuest__UPCNotificationFlush_x                         0x14024C680 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402318D0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14023CFC0
#define CEverQuest__ReportSuccessfulHit_x                          0x14023DD00

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140370BA0

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094760
#define CGuild__GetGuildName_x                                     0x1400947A0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403928F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140266950
#define CHotButton__SetCheck_x                                     0x140266C20

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403A25E0
#define CInvSlotMgr__MoveItem_x                                    0x1403A2730
#define CInvSlotMgr__SelectSlot_x                                  0x1403A4120

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403A0240
#define CInvSlot__SliderComplete_x                                 0x1403A1470
#define CInvSlot__GetItemBase_x                                    0x14039C320
#define CInvSlot__UpdateItem_x                                     0x1403A18D0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403A4780
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403A5670

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403C4DC0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403C7700
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403C1BE0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403C32F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403C4200

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140488630
#define CSpellDisplayWnd__UpdateStrings_x                          0x14048A200

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404C2D50

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403BE3A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140118340

// CLabel
#define CLabel__UpdateText_x                                       0x1403CEAD0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140525620
#define CListWnd__dCListWnd_x                                      0x140525A60
#define CListWnd__vftable_x                                        0x1407E1D00
#define CListWnd__AddColumn_x                                      0x140526100
#define CListWnd__AddColumn1_x                                     0x1405261A0
#define CListWnd__AddLine_x                                        0x140526300
#define CListWnd__AddString_x                                      0x140526890
#define CListWnd__CalculateFirstVisibleLine_x                      0x140526F90
#define CListWnd__CalculateVSBRange_x                              0x140527270
#define CListWnd__ClearSel_x                                       0x140527410
#define CListWnd__ClearAllSel_x                                    0x1405273B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140527470
#define CListWnd__Compare_x                                        0x140527620
#define CListWnd__Draw_x                                           0x140527AF0
#define CListWnd__DrawColumnSeparators_x                           0x1405286A0
#define CListWnd__DrawHeader_x                                     0x140528760
#define CListWnd__DrawItem_x                                       0x140528E40
#define CListWnd__DrawLine_x                                       0x1405297C0
#define CListWnd__DrawSeparator_x                                  0x140529C80
#define CListWnd__EnableLine_x                                     0x14052A0A0
#define CListWnd__EnsureVisible_x                                  0x14052A100
#define CListWnd__ExtendSel_x                                      0x14052A1F0
#define CListWnd__GetColumnMinWidth_x                              0x14052A520
#define CListWnd__GetColumnWidth_x                                 0x14052A5A0
#define CListWnd__GetCurSel_x                                      0x14052A6A0
#define CListWnd__GetItemData_x                                    0x14052AA20
#define CListWnd__GetItemHeight_x                                  0x14052AA60
#define CListWnd__GetItemRect_x                                    0x14052AC20
#define CListWnd__GetItemText_x                                    0x14052AEC0
#define CListWnd__GetSelList_x                                     0x14052B110
#define CListWnd__GetSeparatorRect_x                               0x14052B300
#define CListWnd__InsertLine_x                                     0x14052C760
#define CListWnd__RemoveLine_x                                     0x14052CD80
#define CListWnd__SetColors_x                                      0x14052D150
#define CListWnd__SetColumnJustification_x                         0x14052D170
#define CListWnd__SetColumnLabel_x                                 0x14052D1F0
#define CListWnd__SetColumnWidth_x                                 0x14052D390
#define CListWnd__SetCurSel_x                                      0x14052D460
#define CListWnd__SetItemColor_x                                   0x14052D6D0
#define CListWnd__SetItemData_x                                    0x14052D770
#define CListWnd__SetItemText_x                                    0x14052D9B0
#define CListWnd__Sort_x                                           0x14052DDC0
#define CListWnd__ToggleSel_x                                      0x14052DF30
#define CListWnd__SetColumnsSizable_x                              0x14052D3E0
#define CListWnd__SetItemWnd_x                                     0x14052DAE0
#define CListWnd__GetItemWnd_x                                     0x14052B0A0
#define CListWnd__SetItemIcon_x                                    0x14052D7B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140526D60
#define CListWnd__SetVScrollPos_x                                  0x14052DD20

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403E1420

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407BE770
#define MapViewMap__Clear_x                                        0x1403E2FA0
#define MapViewMap__SetZoom_x                                      0x1403E9560
#define MapViewMap__HandleLButtonDown_x                            0x1403E60A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14040AAC0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140410680
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404126A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404144B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404138D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140418230

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405BC8A0
#define CPacketScrambler__hton_x                                   0x1405BC890

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14054BD50
#define CSidlManagerBase__FindAnimation1_x                         0x14054BC90
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14054C380
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14054C130
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14054B0A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14054B030
#define CSidlManagerBase__CreateXWnd_x                             0x14054A6A0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14047AE20
#define CSidlManager__CreateXWnd_x                                 0x14047AFE0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405430F0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140542FC0
#define CSidlScreenWnd__ConvertToRes_x                             0x14056F730 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140543210
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140542860
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405427B0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140542A80
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405437E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140543A10
#define CSidlScreenWnd__GetChildItem_x                             0x140543BB0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140543DD0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140535850 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140544140
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405444B0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140544D60
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140545650
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C209A8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140545C70
#define CSidlScreenWnd__StoreIniVis_x                              0x140546460
#define CSidlScreenWnd__vftable_x                                  0x1407E2D78
#define CSidlScreenWnd__WndNotification_x                          0x1405464B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D8970 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D8D70 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D8CB0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D9110
#define CSkillMgr__IsCombatSkill_x                                 0x1402D9150

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140498240
#define CSliderWnd__SetValue_x                                     0x140554BA0
#define CSliderWnd__SetNumTicks_x                                  0x140554A20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404822E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14055D150
#define CStmlWnd__CalculateHSBRange_x                              0x140535220
#define CStmlWnd__CalculateVSBRange_x                              0x14055E070
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14055EAD0
#define CStmlWnd__ForceParseNow_x                                  0x14055EB70
#define CStmlWnd__GetVisibleText_x                                 0x14055F230
#define CStmlWnd__MakeStmlColorTag_x                               0x140560F80
#define CStmlWnd__MakeWndNotificationTag_x                         0x140560FC0
#define CStmlWnd__SetSTMLText_x                                    0x140567F90
#define CStmlWnd__StripFirstSTMLLines_x                            0x140568140
#define CStmlWnd__UpdateHistoryString_x                            0x1405684D0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140559C40
#define CTabWnd__DrawCurrentPage_x                                 0x140559CE0
#define CTabWnd__DrawTab_x                                         0x14055A0B0
#define CTabWnd__GetTabRect_x                                      0x14055A710
#define CTabWnd__InsertPage_x                                      0x14055A9E0
#define CTabWnd__RemovePage_x                                      0x14055AC70
#define CTabWnd__SetPage_x                                         0x14055ADD0
#define CTabWnd__UpdatePage_x                                      0x14055B0D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140559840
#define CPageWnd__SetTabText_x                                     0x1405598B0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DCA0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E0B0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14052F080
#define CTextureFont__DrawWrappedText1_x                           0x14052EF90
#define CTextureFont__DrawWrappedText2_x                           0x14052F1B0
#define CTextureFont__GetTextExtent_x                              0x14052F560
#define CTextureFont__GetHeight_x                                  0x14052F520

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14056DE90

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140522290

// CXStr
#define CXStr__gFreeLists_x                                        0x140A57650
#define CXStr__gCXStrAccess_x                                      0x140C1FF68

// CXWnd
#define CXWnd__BringToTop_x                                        0x140530AB0
#define CXWnd__ClrFocus_x                                          0x140530CF0
#define CXWnd__Destroy_x                                           0x140530E30
#define CXWnd__DoAllDrawing_x                                      0x140530F30
#define CXWnd__DrawColoredRect_x                                   0x1405316F0
#define CXWnd__DrawTooltip_x                                       0x140532D70
#define CXWnd__DrawTooltipAtPoint_x                                0x140532E20
#define CXWnd__GetChildItem_x                                      0x140533730
#define CXWnd__GetChildWndAt_x                                     0x1405337E0
#define CXWnd__GetClientClipRect_x                                 0x140533950
#define CXWnd__GetRelativeRect_x                                   0x140535340
#define CXWnd__GetScreenClipRect_x                                 0x140535450
#define CXWnd__GetScreenRect_x                                     0x1405355D0
#define CXWnd__GetTooltipRect_x                                    0x140535750
#define CXWnd__IsActive_x                                          0x140535CD0
#define CXWnd__IsDescendantOf_x                                    0x140535D00
#define CXWnd__IsReallyVisible_x                                   0x140535D70
#define CXWnd__IsType_x                                            0x140535DB0
#define CXWnd__Minimize_x                                          0x140535EB0
#define CXWnd__ProcessTransition_x                                 0x140536F00
#define CXWnd__Resize_x                                            0x140537020
#define CXWnd__Right_x                                             0x1405370C0
#define CXWnd__SetFocus_x                                          0x140537480
#define CXWnd__SetFont_x                                           0x1405374D0
#define CXWnd__SetKeyTooltip_x                                     0x1405375E0
#define CXWnd__SetMouseOver_x                                      0x140537710
#define CXWnd__SetParent_x                                         0x140537790
#define CXWnd__StartFade_x                                         0x140537BC0
#define CXWnd__vftable_x                                           0x1407E2488
#define CXWnd__CXWnd_x                                             0x14052F680
#define CXWnd__dCXWnd_x                                            0x14052FFB0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405748F0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x140539100
#define CXWndManager__DrawCursor_x                                 0x1405393E0
#define CXWndManager__DrawWindows_x                                0x140539510
#define CXWndManager__GetKeyboardFlags_x                           0x140539BD0
#define CXWndManager__HandleKeyboardMsg_x                          0x140539C10
#define CXWndManager__RemoveWnd_x                                  0x14053CFB0

// CDBStr
#define CDBStr__GetString_x                                        0x140151210

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405C5760

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1CE0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0A10
#define CCharacterListWnd__Quit_x                                  0x1400A1CC0
#define CCharacterListWnd__UpdateList_x                            0x1400A29E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140595C90
#define ItemBase__CreateItemTagString_x                            0x140596690
#define ItemBase__GetImageNum_x                                    0x140598880
#define ItemBase__GetItemValue_x                                   0x14059A450
#define ItemBase__IsEmpty_x                                        0x14059BFB0
#define ItemBase__IsKeyRingItem_x                                  0x14059C6C0
#define ItemBase__ValueSellMerchant_x                              0x1405A0AB0
#define ItemClient__CanDrop_x                                      0x140268DA0
#define ItemClient__CanGoInBag_x                                   0x140268ED0
#define ItemClient__CreateItemClient_x                             0x140269190
#define ItemClient__dItemClient_x                                  0x140268C00

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016FFE0
#define EQ_LoadingS__Array_x                                       0x140A43A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405AC4C0
#define PcBase__GetCombatAbility_x                                 0x1405ACB10
#define PcBase__GetCombatAbilityTimer_x                            0x1405ACBB0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405AD2C0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405ADB30
#define PcClient__AlertInventoryChanged_x                          0x140289970
#define PcClient__GetConLevel_x                                    0x140289E50  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x14028C720
#define PcClient__HasLoreItem_x                                    0x14028D790
#define PcZoneClient__GetItemRecastTimer_x                         0x140299630
#define PcZoneClient__RemoveMyAffect_x                             0x14029BCD0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401DC470  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401DC4E0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401DC5F0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401DC550  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x1402128E0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014BB10

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140607D50
#define PlayerBase__CanSee1_x                                      0x140607E20
#define PlayerBase__GetVisibilityLineSegment_x                     0x140608350
#define PlayerBase__HasProperty_x                                  0x140608570
#define PlayerBase__IsTargetable_x                                 0x140608630
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A7760
#define PlayerClient__GetPcClient_x                                0x1402A9CF0
#define PlayerClient__PlayerClient_x                               0x1402A0AD0
#define PlayerClient__SetNameSpriteState_x                         0x1402AD120
#define PlayerClient__SetNameSpriteTint_x                          0x1402AE0C0
#define PlayerZoneClient__ChangeHeight_x                           0x1402BBC70
#define PlayerZoneClient__DoAttack_x                               0x1402BC930
#define PlayerZoneClient__GetLevel_x                               0x1402BFEA0
#define PlayerZoneClient__IsValidTeleport_x                        0x140215690
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015F3E0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B5A60  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B5A90  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B5B40
#define PlayerManagerClient__CreatePlayer_x                        0x1402B5450
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406079D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14026E120
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14026DD20
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14026DD90
#define KeypressHandler__ClearCommandStateArray_x                  0x14026E0B0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14026E240
#define KeypressHandler__HandleKeyUp_x                             0x14026E320
#define KeypressHandler__SaveKeymapping_x                          0x14026DFC0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405C3370  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405BDF40

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140292CE0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140297CA0
#define PcZoneClient__GetPcSkillLimit_x                            0x140299B90
#define PcZoneClient__RemovePetEffect_x                            0x14029BDD0
#define PcZoneClient__HasAlternateAbility_x                        0x14029A600
#define PcZoneClient__CanEquipItem_x                               0x140296070
#define PcZoneClient__GetItemByID_x                                0x140298BE0
#define PcZoneClient__RemoveBuffEffect_x                           0x14029BB80
#define PcZoneClient__BandolierSwap_x                              0x140295230
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140299AE0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14021A150

// IconCache
#define IconCache__GetIcon_x                                       0x140366860

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14035D6D0
#define CContainerMgr__CloseContainer_x                            0x14035D090
#define CContainerMgr__OpenExperimentContainer_x                   0x14035DA30

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140442040

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140261690

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403D5660
#define CLootWnd__RequestLootSlot_x                                0x1403D65C0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019F430
#define EQ_Spell__SpellAffects_x                                   0x1401A06E0
#define EQ_Spell__SpellAffectBase_x                                0x1401A0640
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA640
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA5F0
#define EQ_Spell__IsSPAStacking_x                                  0x1401A0300
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019FEC0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019F7A0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140093190

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14049BFB0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14049BFF0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14049B500
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14049AAB0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404A3140  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401484C0
#define CTaskManager__GetTaskStatus_x                              0x1401485D0
#define CTaskManager__GetElementDescription_x                      0x140148150

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x14019D790
#define EqSoundManager__PlayScriptMp3_x                            0x14019C590
#define EqSoundManager__SoundAssistPlay_x                          0x1402DF150  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DF480  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140558EA0
#define CTextureAnimation__SetCurCell_x                            0x1405591B0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025F950

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405DB9F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405DBA70
#define CharacterBase__IsExpansionFlag_x                           0x1401BEFE0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14033DA10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14033E350
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033F790

// messages
#define msg_spell_worn_off_x                                       0x1401D2FB0
#define msg_new_text_x                                             0x1401CEA00
#define __msgTokenTextParam_x                                      0x1401C6820
#define msgTokenText_x                                             0x1401C6740

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E0B10
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E0A30

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140616C20

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403CF210

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140362A00
#define CCursorAttachment__AttachToCursor1_x                       0x140361660
#define CCursorAttachment__Deactivate_x                            0x140362F00

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14056C0E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14056C2D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x14056C2E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140113540
#define CFindItemWnd__Update_x                                     0x140113D10
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E2C0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011CAF0
#define LootFiltersManager__GetItemFilterData_x                    0x14011D610
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011DEB0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011E160

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404254B0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14061AFF0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D84D0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140359CA0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405DF960  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405DF850  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x14037BFA0
#define CGroupWnd__UpdateDisplay_x                                 0x14037BD40

// ItemBase
#define ItemBase__IsLore_x                                         0x14059C790
#define ItemBase__IsLoreEquipped_x                                 0x14059C8F0

#define MultipleItemMoveManager__ProcessMove_x                     0x140280700

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140212A40
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402129D0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140212A10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D2F20

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF350
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF700
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEB20
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEB20
#define FactionManagerClient__GetMinFaction_x                      0x1400EE9D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DD20

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAA10

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140178820
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177BA0
#define CAltAbilityData__GetMercCurrentRank_x                      0x140178640  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401785C0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E5200

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D2F20

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401DC6E0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056B260

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056110

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F63C0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D9C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
