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

#define __ClientDate                                               20221122u
#define __ExpectedVersionDate                                     "Nov 22 2022"
#define __ExpectedVersionTime                                     "13:27:57"
#define __ActualVersionDate_x                                      0x1407A50C8
#define __ActualVersionTime_x                                      0x1407A50B8
#define __ActualVersionBuild_x                                     0x1407933B8

// Memory Protection
#define __MemChecker0_x                                            0x1402739D0
#define __MemChecker1_x                                            0x140511CF0
#define __MemChecker4_x                                            0x140243780
#define __EncryptPad0_x                                            0x140A4E610

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B89A90
#define instEQZoneInfo_x                                           0x140B89C84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401DF070
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
#define __CastRay_x                                                0x1401FDF00
#define __CastRay2_x                                               0x1401FDC10
#define __ConvertItemTags_x                                        0x1401FE300
#define __CleanItemTags_x                                          0x140058F80
#define __CreateCascadeMenuItems_x                                 0x140153AD0
#define __DoesFileExist_x                                          0x1405164D0
#define __EQGetTime_x                                              0x1405122A0
#define __ExecuteCmd_x                                             0x1401D6FB0
#define __FixHeading_x                                             0x140615380
#define __FlushDxKeyboard_x                                        0x1402EEBA0
#define __get_bearing_x                                            0x140207550
#define __get_melee_range_x                                        0x140207640
#define __GetAnimationCache_x                                      0x140365820
#define __GetGaugeValueFromEQ_x                                    0x14048A630
#define __GetLabelFromEQ_x                                         0x14048BBE0
#define __GetXTargetType_x                                         0x140616660   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140615400
#define __HelpPath_x                                               0x140BF4DC0   // Why?
#define __NewUIINI_x                                               0x140496D90   // Why?
#define __ProcessGameEvents_x                                      0x140238FC0
#define __ProcessKeyboardEvents_x                                  0x1402F03A0
#define __ProcessMouseEvents_x                                     0x14023A3F0
#define __SaveColors_x                                             0x140163790
#define __STMLToText_x                                             0x14053FFB0
#define __WndProc_x                                                0x1402ED320
#define CMemoryMappedFile__SetFile_x                               0x140750E70
#define DrawNetStatus_x                                            0x1402815A0
#define Util__FastTime_x                                           0x140512FA0
#define __eq_delete_x                                              0x14061B490
#define __eq_new_x                                                 0x14061B58C
#define __CopyLayout_x                                             0x14026FE90
#define __ThrottleFrameRate_x                                      0x140228D81
#define __ThrottleFrameRateEnd_x                                   0x140228DE1

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FF840
#define CAAWnd__Update_x                                           0x1402FFB40
#define CAAWnd__UpdateSelected_x                                   0x140300B00

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B9B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400741B0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140782420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C220

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016E470
#define AltAdvManager__IsAbilityReady_x                            0x14016E6F0
#define AltAdvManager__GetAAById_x                                 0x14016DD40
#define AltAdvManager__CanTrainAbility_x                           0x14016DB70
#define AltAdvManager__CanSeeAbility_x                             0x14016D830

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3F00
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4CB0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4EC0
#define CharacterZoneClient__CanUseItem_x                          0x1400B8A60
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A57B0
#define CharacterZoneClient__CastSpell_x                           0x1400A5850
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4BD0
#define CharacterZoneClient__Cur_HP_x                              0x1400BA090
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA250
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8850
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C0290
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE720  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D40
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7FE0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1DB0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0CE0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F10
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA10
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C280
#define CharacterZoneClient__GetHPRegen_x                          0x1400C13E0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9D40
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1FC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9F90
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2A50
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA1A0
#define CharacterZoneClient__GetModCap_x                           0x1400C9E30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA240
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA450
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F120
#define CharacterZoneClient__HasSkill_x                            0x1400C5660
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE760
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C98C0
#define CharacterZoneClient__Max_Endurance_x                       0x140299F20  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9C00
#define CharacterZoneClient__Max_Mana_x                            0x14029A110  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA0C0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1C50
#define CharacterZoneClient__SpellDuration_x                       0x1400B2830
#define CharacterZoneClient__TotalEffect_x                         0x1400B3A10
#define CharacterZoneClient__UseSkill_x                            0x1400CF670


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14031D960

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140327A90

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140323A30
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140322AD0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14032A150

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407E28E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14034A9C0
#define CChatWindowManager__InitContextMenu_x                      0x14034AB50
#define CChatWindowManager__FreeChatWindow_x                       0x140349C10
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403518D0
#define CChatWindowManager__CreateChatWindow_x                     0x140349550

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7530

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140352840
#define CChatWindow__Clear_x                                       0x140353650
#define CChatWindow__WndNotification_x                             0x1403547D0
#define CChatWindow__AddHistory_x                                  0x140353150

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140550EA0
#define CContextMenu__RemoveMenuItem_x                             0x1405513B0
#define CContextMenu__RemoveAllMenuItems_x                         0x140551380
#define CContextMenu__CheckMenuItem_x                              0x1405511F0
#define CContextMenu__SetMenuItem_x                                0x1405513D0
#define CContextMenu__AddSeparator_x                               0x140551000

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140551A20
#define CContextMenuManager__RemoveMenu_x                          0x140551FA0
#define CContextMenuManager__PopupMenu_x                           0x140551D20
#define CContextMenuManager__Flush_x                               0x140551AA0
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035F8A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405985C0
#define CChatService__GetFriendName_x                              0x1405DE480

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14054D080
#define CComboWnd__Draw_x                                          0x14054D180
#define CComboWnd__GetCurChoice_x                                  0x14054D450  // unused
#define CComboWnd__GetListRect_x                                   0x14054D4F0
#define CComboWnd__InsertChoice_x                                  0x14054D820
#define CComboWnd__SetColors_x                                     0x14054DBB0
#define CComboWnd__SetChoice_x                                     0x14054DB70
#define CComboWnd__GetItemCount_x                                  0x14054D4E0
#define CComboWnd__GetCurChoiceText_x                              0x14054D490  // unused
#define CComboWnd__GetChoiceText_x                                 0x14054D420
#define CComboWnd__InsertChoiceAtIndex_x                           0x14054D8E0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14035D920
#define CContainerWnd__SetContainer_x                              0x14035E6C0
#define CContainerWnd__vftable_x                                   0x1407B3008

// CDisplay
#define CDisplay__cameraType_x                                     0x140AD1424
#define CDisplay__ZoneMainUI_x                                     0x140568800
#define CDisplay__PreZoneMainUI_x                                  0x140160720
#define CDisplay__CleanGameUI_x                                    0x140152BD0
#define CDisplay__GetClickedActor_x                                0x140156D60
#define CDisplay__GetUserDefinedColor_x                            0x140157840
#define CDisplay__InitCharSelectUI_x                               0x140157AF0
#define CDisplay__ReloadUI_x                                       0x140162A40
#define CDisplay__WriteTextHD2_x                                   0x140169970
#define CDisplay__TrueDistance_x                                   0x140169650
#define CDisplay__SetViewActor_x                                   0x140165F80
#define CDisplay__GetFloorHeight_x                                 0x140156FC0
#define CDisplay__ToggleScreenshotMode_x                           0x140169160
#define CDisplay__RealRender_World_x                               0x140161DF0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140573D10
#define CEditWnd__DrawCaret_x                                      0x1405548F0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140554DB0
#define CEditWnd__GetCaretPt_x                                     0x140555030  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140555070
#define CEditWnd__GetDisplayString_x                               0x1405552E0
#define CEditWnd__GetHorzOffset_x                                  0x140555520
#define CEditWnd__GetLineForPrintableChar_x                        0x140555670
#define CEditWnd__GetSelStartPt_x                                  0x140555950  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405557A0
#define CEditWnd__PointFromPrintableChar_x                         0x140556500
#define CEditWnd__ReplaceSelection_x                               0x1405568B0
#define CEditWnd__SelectableCharFromPoint_x                        0x140556D50
#define CEditWnd__SetEditable_x                                    0x140556FE0
#define CEditWnd__SetWindowText_x                                  0x140557010

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140229D30
#define CEverQuest__ClickedPlayer_x                                0x14021FEE0
#define CEverQuest__CreateTargetIndicator_x                        0x140220640
#define CEverQuest__DoTellWindow_x                                 0x1400D7240 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7B00 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022B760
#define CEverQuest__dsp_chat_x                                     0x1400D6C80 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140254E50
#define CEverQuest__Emote_x                                        0x14022C0C0
#define CEverQuest__GetBodyTypeDesc_x                              0x14022CE60
#define CEverQuest__GetClassDesc_x                                 0x14022CEC0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14022D290
#define CEverQuest__GetDeityDesc_x                                 0x14022D540
#define CEverQuest__GetLangDesc_x                                  0x14022D970
#define CEverQuest__GetRaceDesc_x                                  0x14022DD10
#define CEverQuest__InterpretCmd_x                                 0x14022F570
#define CEverQuest__LeftClickedOnPlayer_x                          0x140243E00
#define CEverQuest__LMouseUp_x                                     0x140230F10
#define CEverQuest__RightClickedOnPlayer_x                         0x1402417A0
#define CEverQuest__RMouseUp_x                                     0x14023AF70
#define CEverQuest__SetGameState_x                                 0x1402462F0
#define CEverQuest__UPCNotificationFlush_x                         0x14024B960 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140230B90
#define CEverQuest__ReportSuccessfulHeal_x                         0x14023C2A0
#define CEverQuest__ReportSuccessfulHit_x                          0x14023CFE0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036FB60

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094780
#define CGuild__GetGuildName_x                                     0x1400947C0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403918B0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140265C40
#define CHotButton__SetCheck_x                                     0x140265ED0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403A1690
#define CInvSlotMgr__MoveItem_x                                    0x1403A17E0
#define CInvSlotMgr__SelectSlot_x                                  0x1403A31D0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14039F2E0
#define CInvSlot__SliderComplete_x                                 0x1403A0510
#define CInvSlot__GetItemBase_x                                    0x14039B3C0
#define CInvSlot__UpdateItem_x                                     0x1403A0970

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403A3820
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403A4370

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403C3CB0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403C65B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403C0AF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403C21E0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403C30F0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140487310
#define CSpellDisplayWnd__UpdateStrings_x                          0x140488EE0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404C1850

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403BD290

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117F40

// CLabel
#define CLabel__UpdateText_x                                       0x1403CD960

// CListWnd
#define CListWnd__CListWnd_x                                       0x140524120
#define CListWnd__dCListWnd_x                                      0x140524560
#define CListWnd__vftable_x                                        0x1407E1CD0
#define CListWnd__AddColumn_x                                      0x140524C00
#define CListWnd__AddColumn1_x                                     0x140524CA0
#define CListWnd__AddLine_x                                        0x140524E00
#define CListWnd__AddString_x                                      0x140525380
#define CListWnd__CalculateFirstVisibleLine_x                      0x140525A70
#define CListWnd__CalculateVSBRange_x                              0x140525D50
#define CListWnd__ClearSel_x                                       0x140525F00
#define CListWnd__ClearAllSel_x                                    0x140525EA0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140525F60
#define CListWnd__Compare_x                                        0x140526110
#define CListWnd__Draw_x                                           0x1405265E0
#define CListWnd__DrawColumnSeparators_x                           0x140527170
#define CListWnd__DrawHeader_x                                     0x140527230
#define CListWnd__DrawItem_x                                       0x1405278F0
#define CListWnd__DrawLine_x                                       0x140528270
#define CListWnd__DrawSeparator_x                                  0x140528730
#define CListWnd__EnableLine_x                                     0x140528B50
#define CListWnd__EnsureVisible_x                                  0x140528BB0
#define CListWnd__ExtendSel_x                                      0x140528CB0
#define CListWnd__GetColumnMinWidth_x                              0x140528FE0
#define CListWnd__GetColumnWidth_x                                 0x140529060
#define CListWnd__GetCurSel_x                                      0x140529160
#define CListWnd__GetItemData_x                                    0x1405294E0
#define CListWnd__GetItemHeight_x                                  0x140529520
#define CListWnd__GetItemRect_x                                    0x1405296E0
#define CListWnd__GetItemText_x                                    0x140529980
#define CListWnd__GetSelList_x                                     0x140529BD0
#define CListWnd__GetSeparatorRect_x                               0x140529DC0
#define CListWnd__InsertLine_x                                     0x14052B240
#define CListWnd__RemoveLine_x                                     0x14052B860
#define CListWnd__SetColors_x                                      0x14052BC30
#define CListWnd__SetColumnJustification_x                         0x14052BC50
#define CListWnd__SetColumnLabel_x                                 0x14052BCD0
#define CListWnd__SetColumnWidth_x                                 0x14052BE70
#define CListWnd__SetCurSel_x                                      0x14052BF40
#define CListWnd__SetItemColor_x                                   0x14052C1B0
#define CListWnd__SetItemData_x                                    0x14052C250
#define CListWnd__SetItemText_x                                    0x14052C490
#define CListWnd__Sort_x                                           0x14052C8A0
#define CListWnd__ToggleSel_x                                      0x14052CA10
#define CListWnd__SetColumnsSizable_x                              0x14052BEC0
#define CListWnd__SetItemWnd_x                                     0x14052C5C0
#define CListWnd__GetItemWnd_x                                     0x140529B60
#define CListWnd__SetItemIcon_x                                    0x14052C290
#define CListWnd__CalculateCustomWindowPositions_x                 0x140525840
#define CListWnd__SetVScrollPos_x                                  0x14052C800

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403E0250

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407BE740
#define MapViewMap__Clear_x                                        0x1403E1DC0
#define MapViewMap__SetZoom_x                                      0x1403E8380
#define MapViewMap__HandleLButtonDown_x                            0x1403E4EC0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140409890  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14040F450
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140411470
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140413280
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404126A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140417020

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405BB200
#define CPacketScrambler__hton_x                                   0x1405BB1F0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14054A760
#define CSidlManagerBase__FindAnimation1_x                         0x14054A6A0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14054AD90
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14054AB40
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140549AB0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140549A40
#define CSidlManagerBase__CreateXWnd_x                             0x1405490B0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140479B30
#define CSidlManager__CreateXWnd_x                                 0x140479CF0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140541B40
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140541A20
#define CSidlScreenWnd__ConvertToRes_x                             0x14056E2C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140541C70
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405412C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140541210
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405414E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140542240
#define CSidlScreenWnd__EnableIniStorage_x                         0x140542470
#define CSidlScreenWnd__GetChildItem_x                             0x140542610
#define CSidlScreenWnd__GetSidlPiece_x                             0x140542830
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140534290 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140542BA0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140542F10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405437C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140544070
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C20A68
#define CSidlScreenWnd__StoreIniInfo_x                             0x140544680
#define CSidlScreenWnd__StoreIniVis_x                              0x140544E70
#define CSidlScreenWnd__vftable_x                                  0x1407E2D48
#define CSidlScreenWnd__WndNotification_x                          0x140544EC0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D7AE0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D7EE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D7E20
#define CSkillMgr__IsActivatedSkill_x                              0x1402D8280
#define CSkillMgr__IsCombatSkill_x                                 0x1402D82C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140552D60
#define CSliderWnd__SetValue_x                                     0x140553570
#define CSliderWnd__SetNumTicks_x                                  0x1405533F0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140480FE0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14055BC80
#define CStmlWnd__CalculateHSBRange_x                              0x140533C50
#define CStmlWnd__CalculateVSBRange_x                              0x14055CBB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14055D620
#define CStmlWnd__ForceParseNow_x                                  0x14055D6C0
#define CStmlWnd__GetVisibleText_x                                 0x14055DDA0
#define CStmlWnd__MakeStmlColorTag_x                               0x14055FB30
#define CStmlWnd__MakeWndNotificationTag_x                         0x14055FB70
#define CStmlWnd__SetSTMLText_x                                    0x140566B50
#define CStmlWnd__StripFirstSTMLLines_x                            0x140566D00
#define CStmlWnd__UpdateHistoryString_x                            0x140567090

// CTabWnd
#define CTabWnd__Draw_x                                            0x140558780
#define CTabWnd__DrawCurrentPage_x                                 0x140558820
#define CTabWnd__DrawTab_x                                         0x140558BF0
#define CTabWnd__GetTabRect_x                                      0x140559250
#define CTabWnd__InsertPage_x                                      0x140559520
#define CTabWnd__RemovePage_x                                      0x1405597A0
#define CTabWnd__SetPage_x                                         0x140559900
#define CTabWnd__UpdatePage_x                                      0x140559C00

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405581A0
#define CPageWnd__SetTabText_x                                     0x140558210

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DCC0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E0D0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14052DB60
#define CTextureFont__DrawWrappedText1_x                           0x14052DA70
#define CTextureFont__DrawWrappedText2_x                           0x14052DC90
#define CTextureFont__GetTextExtent_x                              0x14052E040
#define CTextureFont__GetHeight_x                                  0x14052E000

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14056CA20

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140520D90

// CXStr
#define CXStr__gFreeLists_x                                        0x140A57660
#define CXStr__gCXStrAccess_x                                      0x140C20028

// CXWnd
#define CXWnd__BringToTop_x                                        0x14052F580
#define CXWnd__ClrFocus_x                                          0x14052F7C0
#define CXWnd__Destroy_x                                           0x14052F900
#define CXWnd__DoAllDrawing_x                                      0x14052FA00
#define CXWnd__DrawColoredRect_x                                   0x1405301B0
#define CXWnd__DrawTooltip_x                                       0x140531800
#define CXWnd__DrawTooltipAtPoint_x                                0x1405318B0
#define CXWnd__GetChildItem_x                                      0x1405321A0
#define CXWnd__GetChildWndAt_x                                     0x140532260
#define CXWnd__GetClientClipRect_x                                 0x1405323C0
#define CXWnd__GetRelativeRect_x                                   0x140533D90
#define CXWnd__GetScreenClipRect_x                                 0x140533EA0
#define CXWnd__GetScreenRect_x                                     0x140534010
#define CXWnd__GetTooltipRect_x                                    0x140534190
#define CXWnd__IsActive_x                                          0x140534710
#define CXWnd__IsDescendantOf_x                                    0x140534740
#define CXWnd__IsReallyVisible_x                                   0x1405347A0
#define CXWnd__IsType_x                                            0x1405347E0
#define CXWnd__Minimize_x                                          0x1405348E0
#define CXWnd__ProcessTransition_x                                 0x1405358F0
#define CXWnd__Refade_x                                            0x1405359F0
#define CXWnd__Resize_x                                            0x140535A10
#define CXWnd__Right_x                                             0x140535AB0
#define CXWnd__SetFocus_x                                          0x140535E80
#define CXWnd__SetFont_x                                           0x140535ED0
#define CXWnd__SetKeyTooltip_x                                     0x140535FD0
#define CXWnd__SetMouseOver_x                                      0x140536100
#define CXWnd__SetParent_x                                         0x140536180
#define CXWnd__StartFade_x                                         0x1405365C0
#define CXWnd__vftable_x                                           0x1407E2458
#define CXWnd__CXWnd_x                                             0x14052E160
#define CXWnd__dCXWnd_x                                            0x14052EA90

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140573490

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140537DC0
#define CXWndManager__DrawWindows_x                                0x140537EF0
#define CXWndManager__GetKeyboardFlags_x                           0x1405385B0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405385F0
#define CXWndManager__RemoveWnd_x                                  0x14053BA10

// CDBStr
#define CDBStr__GetString_x                                        0x140150DE0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405C40D0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1CE0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0A10
#define CCharacterListWnd__Quit_x                                  0x1400A1CC0
#define CCharacterListWnd__UpdateList_x                            0x1400A29E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1405947F0
#define ItemBase__CreateItemTagString_x                            0x1405951B0
#define ItemBase__GetImageNum_x                                    0x140597340
#define ItemBase__GetItemValue_x                                   0x140598ED0
#define ItemBase__IsEmpty_x                                        0x14059A9F0
#define ItemBase__IsKeyRingItem_x                                  0x14059B0C0
#define ItemBase__ValueSellMerchant_x                              0x14059F3A0
#define ItemClient__CanDrop_x                                      0x140268040
#define ItemClient__CanGoInBag_x                                   0x140268170
#define ItemClient__CreateItemClient_x                             0x140268430
#define ItemClient__dItemClient_x                                  0x140267EA0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016FC10
#define EQ_LoadingS__Array_x                                       0x140A43A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405AAE10
#define PcBase__GetCombatAbility_x                                 0x1405AB460
#define PcBase__GetCombatAbilityTimer_x                            0x1405AB500
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405ABC10
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405AC480
#define PcClient__AlertInventoryChanged_x                          0x140288BF0
#define PcClient__GetConLevel_x                                    0x1402890C0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x14028B990
#define PcClient__HasLoreItem_x                                    0x14028CA00
#define PcZoneClient__GetItemRecastTimer_x                         0x1402988C0
#define PcZoneClient__RemoveMyAffect_x                             0x14029AF70

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401DB630  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401DB6A0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401DB7B0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401DB710  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x140211AB0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B6F0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406082C0
#define PlayerBase__CanSee1_x                                      0x140608390
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406088C0
#define PlayerBase__HasProperty_x                                  0x140608AE0
#define PlayerBase__IsTargetable_x                                 0x140608BA0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A69E0
#define PlayerClient__GetPcClient_x                                0x1402A8F70
#define PlayerClient__PlayerClient_x                               0x14029FD60
#define PlayerClient__SetNameSpriteState_x                         0x1402AC3A0
#define PlayerClient__SetNameSpriteTint_x                          0x1402AD340
#define PlayerZoneClient__ChangeHeight_x                           0x1402BADE0
#define PlayerZoneClient__DoAttack_x                               0x1402BBAA0
#define PlayerZoneClient__GetLevel_x                               0x1402BF010
#define PlayerZoneClient__IsValidTeleport_x                        0x140214860
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015EFC0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B4BD0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B4C00  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B4CB0
#define PlayerManagerClient__CreatePlayer_x                        0x1402B45C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140607F40

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14026D3D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14026CFD0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14026D040
#define KeypressHandler__ClearCommandStateArray_x                  0x14026D360  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14026D4F0
#define KeypressHandler__HandleKeyUp_x                             0x14026D5D0
#define KeypressHandler__SaveKeymapping_x                          0x14026D270  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405C1CF0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405BC8A0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140291F40  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140296F00
#define PcZoneClient__GetPcSkillLimit_x                            0x140298E20
#define PcZoneClient__RemovePetEffect_x                            0x14029B070
#define PcZoneClient__HasAlternateAbility_x                        0x1402998A0
#define PcZoneClient__CanEquipItem_x                               0x1402952D0
#define PcZoneClient__GetItemByID_x                                0x140297E70
#define PcZoneClient__RemoveBuffEffect_x                           0x14029AE20
#define PcZoneClient__BandolierSwap_x                              0x140294490
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140298D70

// Doors
#define EQSwitch__UseSwitch_x                                      0x140219320

// IconCache
#define IconCache__GetIcon_x                                       0x140365850

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14035C700
#define CContainerMgr__CloseContainer_x                            0x14035C0C0
#define CContainerMgr__OpenExperimentContainer_x                   0x14035CA60

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140440D90

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140260970

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403D44D0
#define CLootWnd__RequestLootSlot_x                                0x1403D5430

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019E4A0
#define EQ_Spell__SpellAffects_x                                   0x14019F750
#define EQ_Spell__SpellAffectBase_x                                0x14019F6B0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA630
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA5E0
#define EQ_Spell__IsSPAStacking_x                                  0x14019F370
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019EF30
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019E810

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400931B0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14049AB60  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14049ABA0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14049A0B0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140499660

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404A1C70  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140148090
#define CTaskManager__GetTaskStatus_x                              0x1401481A0
#define CTaskManager__GetElementDescription_x                      0x140147D20

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x14019C800
#define EqSoundManager__PlayScriptMp3_x                            0x14019B600
#define EqSoundManager__SoundAssistPlay_x                          0x1402DE2E0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DE610  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140557810
#define CTextureAnimation__SetCurCell_x                            0x140557B20

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025EC30

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405DBFA0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405DC020
#define CharacterBase__IsExpansionFlag_x                           0x1401BE320

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14033CB00
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14033D440
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033E870

// messages
#define msg_spell_worn_off_x                                       0x1401D22F0
#define msg_new_text_x                                             0x1401CDD50
#define __msgTokenTextParam_x                                      0x1401C5B70
#define msgTokenText_x                                             0x1401C5A90

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DFCA0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DFBC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140616A40

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403CE0A0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140361A20
#define CCursorAttachment__AttachToCursor1_x                       0x140360670
#define CCursorAttachment__Deactivate_x                            0x140361F20

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14056AC70
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14056AE60
#define CEQSuiteTextureLoader__GetTexture_x                        0x14056AE70

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401133A0
#define CFindItemWnd__Update_x                                     0x140113B70
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E2C0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011C6E0
#define LootFiltersManager__GetItemFilterData_x                    0x14011D200
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011DAA0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011DD50

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140424290

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14061AE00
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D7650

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140358CF0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405DFF00  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405DFDF0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x14037AF80
#define CGroupWnd__UpdateDisplay_x                                 0x14037AD20

// ItemBase
#define ItemBase__IsLore_x                                         0x14059B190
#define ItemBase__IsLoreEquipped_x                                 0x14059B2E0

#define MultipleItemMoveManager__ProcessMove_x                     0x14027F9E0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140211C10
#define EQPlacedItemManager__GetItemByGuid_x                       0x140211BA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140211BE0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D2070

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF310
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF6C0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEAE0
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEAE0
#define FactionManagerClient__GetMinFaction_x                      0x1400EE990

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DD10

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA9D0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140178480
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177800
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401782A0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140178220  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E4390

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D2070

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401DB8A0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140569DF0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056110

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F58D0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D9C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
