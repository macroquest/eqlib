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

#define __ClientDate                                               20221213u
#define __ExpectedVersionDate                                     "Dec 13 2022"
#define __ExpectedVersionTime                                     "12:59:37"
#define __ActualVersionDate_x                                      0x1407A50C8
#define __ActualVersionTime_x                                      0x1407A50B8
#define __ActualVersionBuild_x                                     0x1407933B8

// Memory Protection
#define __MemChecker0_x                                            0x140273C80
#define __MemChecker1_x                                            0x1405125F0
#define __MemChecker4_x                                            0x140243A80
#define __EncryptPad0_x                                            0x140A4E610

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B89A90
#define instEQZoneInfo_x                                           0x140B89C84 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401DF330
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
#define __CastRay_x                                                0x1401FE1D0
#define __CastRay2_x                                               0x1401FDEE0
#define __ConvertItemTags_x                                        0x1401FE5D0
#define __CleanItemTags_x                                          0x140058F80
#define __CreateCascadeMenuItems_x                                 0x140153B70
#define __DoesFileExist_x                                          0x140516DD0
#define __EQGetTime_x                                              0x140512BA0
#define __ExecuteCmd_x                                             0x1401D7250
#define __FixHeading_x                                             0x140615C20
#define __FlushDxKeyboard_x                                        0x1402EF000
#define __get_bearing_x                                            0x140207820
#define __get_melee_range_x                                        0x140207910
#define __GetAnimationCache_x                                      0x140365D40
#define __GetGaugeValueFromEQ_x                                    0x14048AE80
#define __GetLabelFromEQ_x                                         0x14048C430
#define __GetXTargetType_x                                         0x140616F00   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140615CA0
#define __HelpPath_x                                               0x140BF4DC0   // Why?
#define __NewUIINI_x                                               0x1404975B0   // Why?
#define __ProcessGameEvents_x                                      0x1402392C0
#define __ProcessKeyboardEvents_x                                  0x1402F0800
#define __ProcessMouseEvents_x                                     0x14023A6F0
#define __SaveColors_x                                             0x140163830
#define __STMLToText_x                                             0x140540990
#define __WndProc_x                                                0x1402ED780
#define CMemoryMappedFile__SetFile_x                               0x140751720
#define DrawNetStatus_x                                            0x140281830
#define Util__FastTime_x                                           0x1405138A0
#define __eq_delete_x                                              0x14061BD40
#define __eq_new_x                                                 0x14061BE3C
#define __CopyLayout_x                                             0x140270120
#define __ThrottleFrameRate_x                                      0x140229071
#define __ThrottleFrameRateEnd_x                                   0x1402290D1

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FFC90
#define CAAWnd__Update_x                                           0x1402FFF90
#define CAAWnd__UpdateSelected_x                                   0x140300F50

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B9D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400741C0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140782420
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C240

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016E510
#define AltAdvManager__IsAbilityReady_x                            0x14016E790
#define AltAdvManager__GetAAById_x                                 0x14016DDE0
#define AltAdvManager__CanTrainAbility_x                           0x14016DC10
#define AltAdvManager__CanSeeAbility_x                             0x14016D8D0

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
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400C02A0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE730  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9D50
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7FF0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1DC0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0CF0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9F20
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA20
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C290
#define CharacterZoneClient__GetHPRegen_x                          0x1400C13F0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9D50
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1FD0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9FA0
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2A60
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA1B0
#define CharacterZoneClient__GetModCap_x                           0x1400C9E40
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA250
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA460
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F130
#define CharacterZoneClient__HasSkill_x                            0x1400C5670
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE770
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C98D0
#define CharacterZoneClient__Max_Endurance_x                       0x14029A200  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9C10
#define CharacterZoneClient__Max_Mana_x                            0x14029A3F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA0D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1C60
#define CharacterZoneClient__SpellDuration_x                       0x1400B2840
#define CharacterZoneClient__TotalEffect_x                         0x1400B3A20
#define CharacterZoneClient__UseSkill_x                            0x1400CF680


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14031DE00

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140327FB0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140323F30
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140322FC0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14032A660

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407E28E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x14034AF10
#define CChatWindowManager__InitContextMenu_x                      0x14034B0A0
#define CChatWindowManager__FreeChatWindow_x                       0x14034A160
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140351E30
#define CChatWindowManager__CreateChatWindow_x                     0x140349AA0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7540

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140352D90
#define CChatWindow__Clear_x                                       0x140353BA0
#define CChatWindow__WndNotification_x                             0x140354D10
#define CChatWindow__AddHistory_x                                  0x1403536A0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140551900
#define CContextMenu__RemoveMenuItem_x                             0x140551E20
#define CContextMenu__RemoveAllMenuItems_x                         0x140551DF0
#define CContextMenu__CheckMenuItem_x                              0x140551C60
#define CContextMenu__SetMenuItem_x                                0x140551E40
#define CContextMenu__AddSeparator_x                               0x140551A70

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140552490
#define CContextMenuManager__RemoveMenu_x                          0x140552A10
#define CContextMenuManager__PopupMenu_x                           0x140552790
#define CContextMenuManager__Flush_x                               0x140552510
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035FDC0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405DEC40
#define CChatService__GetFriendName_x                              0x1405DEC50

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14054DAA0
#define CComboWnd__Draw_x                                          0x14054DBA0
#define CComboWnd__GetCurChoice_x                                  0x14054DE70  // unused
#define CComboWnd__GetListRect_x                                   0x14054DF10
#define CComboWnd__InsertChoice_x                                  0x14054E250
#define CComboWnd__SetColors_x                                     0x14054E5E0
#define CComboWnd__SetChoice_x                                     0x14054E5A0
#define CComboWnd__GetItemCount_x                                  0x14054DF00
#define CComboWnd__GetCurChoiceText_x                              0x14054DEB0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14054DE40
#define CComboWnd__InsertChoiceAtIndex_x                           0x14054E310

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14035DE50
#define CContainerWnd__SetContainer_x                              0x14035EBE0
#define CContainerWnd__vftable_x                                   0x1407B3008

// CDisplay
#define CDisplay__cameraType_x                                     0x140AD1424
#define CDisplay__ZoneMainUI_x                                     0x140568FD0
#define CDisplay__PreZoneMainUI_x                                  0x1401607C0
#define CDisplay__CleanGameUI_x                                    0x140152C70
#define CDisplay__GetClickedActor_x                                0x140156E00
#define CDisplay__GetUserDefinedColor_x                            0x1401578E0
#define CDisplay__InitCharSelectUI_x                               0x140157B90
#define CDisplay__ReloadUI_x                                       0x140162AE0
#define CDisplay__WriteTextHD2_x                                   0x140169A10
#define CDisplay__TrueDistance_x                                   0x1401696F0
#define CDisplay__SetViewActor_x                                   0x140166020
#define CDisplay__GetFloorHeight_x                                 0x140157060
#define CDisplay__ToggleScreenshotMode_x                           0x140169200
#define CDisplay__RealRender_World_x                               0x140161E90

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405744E0
#define CEditWnd__DrawCaret_x                                      0x140555300  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405557A0
#define CEditWnd__GetCaretPt_x                                     0x140555A20  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140555A60
#define CEditWnd__GetDisplayString_x                               0x140555CD0
#define CEditWnd__GetHorzOffset_x                                  0x140555F00
#define CEditWnd__GetLineForPrintableChar_x                        0x140556050
#define CEditWnd__GetSelStartPt_x                                  0x140556330  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140556180
#define CEditWnd__PointFromPrintableChar_x                         0x140556EE0
#define CEditWnd__ReplaceSelection_x                               0x140557290
#define CEditWnd__SelectableCharFromPoint_x                        0x140557730
#define CEditWnd__SetEditable_x                                    0x1405579B0
#define CEditWnd__SetWindowText_x                                  0x1405579E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14022A020
#define CEverQuest__ClickedPlayer_x                                0x1402201B0
#define CEverQuest__CreateTargetIndicator_x                        0x140220910
#define CEverQuest__DoTellWindow_x                                 0x1400D7250 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7B10 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14022BA50
#define CEverQuest__dsp_chat_x                                     0x1400D6C90 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140255150
#define CEverQuest__Emote_x                                        0x14022C3B0
#define CEverQuest__GetBodyTypeDesc_x                              0x14022D150
#define CEverQuest__GetClassDesc_x                                 0x14022D1B0
#define CEverQuest__GetClassThreeLetterCode_x                      0x14022D580
#define CEverQuest__GetDeityDesc_x                                 0x14022D830
#define CEverQuest__GetLangDesc_x                                  0x14022DC60
#define CEverQuest__GetRaceDesc_x                                  0x14022E000
#define CEverQuest__InterpretCmd_x                                 0x14022F860
#define CEverQuest__LeftClickedOnPlayer_x                          0x140244100
#define CEverQuest__LMouseUp_x                                     0x140231200
#define CEverQuest__RightClickedOnPlayer_x                         0x140241AA0
#define CEverQuest__RMouseUp_x                                     0x14023B270
#define CEverQuest__SetGameState_x                                 0x1402465F0
#define CEverQuest__UPCNotificationFlush_x                         0x14024BC60 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140230E80
#define CEverQuest__ReportSuccessfulHeal_x                         0x14023C5A0
#define CEverQuest__ReportSuccessfulHit_x                          0x14023D2E0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x140370070

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094770
#define CGuild__GetGuildName_x                                     0x1400947B0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140391E20

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140265F20
#define CHotButton__SetCheck_x                                     0x1402661B0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403A1C40
#define CInvSlotMgr__MoveItem_x                                    0x1403A1D90
#define CInvSlotMgr__SelectSlot_x                                  0x1403A3780

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14039F890
#define CInvSlot__SliderComplete_x                                 0x1403A0AC0
#define CInvSlot__GetItemBase_x                                    0x14039B970
#define CInvSlot__UpdateItem_x                                     0x1403A0F20

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403A3DE0
#define CInvSlotWnd__HandleLButtonUp_x                             0x1403A4930

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403C42E0
#define CItemDisplayWnd__UpdateStrings_x                           0x1403C6C10
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403C1100
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403C2810
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403C3720

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140487B60
#define CSpellDisplayWnd__UpdateStrings_x                          0x140489730

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404C2160

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403BD8A0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117F70

// CLabel
#define CLabel__UpdateText_x                                       0x1403CDFE0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140524A20
#define CListWnd__dCListWnd_x                                      0x140524E60
#define CListWnd__vftable_x                                        0x1407E1CD0
#define CListWnd__AddColumn_x                                      0x140525500
#define CListWnd__AddColumn1_x                                     0x1405255A0
#define CListWnd__AddLine_x                                        0x140525700
#define CListWnd__AddString_x                                      0x140525C90
#define CListWnd__CalculateFirstVisibleLine_x                      0x140526390
#define CListWnd__CalculateVSBRange_x                              0x140526670
#define CListWnd__ClearSel_x                                       0x140526820
#define CListWnd__ClearAllSel_x                                    0x1405267C0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140526880
#define CListWnd__Compare_x                                        0x140526A40
#define CListWnd__Draw_x                                           0x140526F10
#define CListWnd__DrawColumnSeparators_x                           0x140527AB0
#define CListWnd__DrawHeader_x                                     0x140527B70
#define CListWnd__DrawItem_x                                       0x140528230
#define CListWnd__DrawLine_x                                       0x140528BB0
#define CListWnd__DrawSeparator_x                                  0x140529070
#define CListWnd__EnableLine_x                                     0x140529490
#define CListWnd__EnsureVisible_x                                  0x1405294F0
#define CListWnd__ExtendSel_x                                      0x1405295F0
#define CListWnd__GetColumnMinWidth_x                              0x140529920
#define CListWnd__GetColumnWidth_x                                 0x1405299A0
#define CListWnd__GetCurSel_x                                      0x140529AA0
#define CListWnd__GetItemData_x                                    0x140529E20
#define CListWnd__GetItemHeight_x                                  0x140529E60
#define CListWnd__GetItemRect_x                                    0x14052A020
#define CListWnd__GetItemText_x                                    0x14052A2C0
#define CListWnd__GetSelList_x                                     0x14052A510
#define CListWnd__GetSeparatorRect_x                               0x14052A700
#define CListWnd__InsertLine_x                                     0x14052BB60
#define CListWnd__RemoveLine_x                                     0x14052C180
#define CListWnd__SetColors_x                                      0x14052C550
#define CListWnd__SetColumnJustification_x                         0x14052C570
#define CListWnd__SetColumnLabel_x                                 0x14052C5F0
#define CListWnd__SetColumnWidth_x                                 0x14052C790
#define CListWnd__SetCurSel_x                                      0x14052C860
#define CListWnd__SetItemColor_x                                   0x14052CAD0
#define CListWnd__SetItemData_x                                    0x14052CB70
#define CListWnd__SetItemText_x                                    0x14052CDB0
#define CListWnd__Sort_x                                           0x14052D1B0
#define CListWnd__ToggleSel_x                                      0x14052D320
#define CListWnd__SetColumnsSizable_x                              0x14052C7E0
#define CListWnd__SetItemWnd_x                                     0x14052CEE0
#define CListWnd__GetItemWnd_x                                     0x14052A4A0
#define CListWnd__SetItemIcon_x                                    0x14052CBB0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140526160
#define CListWnd__SetVScrollPos_x                                  0x14052D110

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403E0920

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407BE740
#define MapViewMap__Clear_x                                        0x1403E24A0
#define MapViewMap__SetZoom_x                                      0x1403E8A60
#define MapViewMap__HandleLButtonDown_x                            0x1403E55A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140409FD0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14040FB90
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140411BB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404139D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140412DF0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140417780

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405BB9C0
#define CPacketScrambler__hton_x                                   0x1405BB9B0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14054B190
#define CSidlManagerBase__FindAnimation1_x                         0x14054B0D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14054B7C0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14054B570
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14054A4D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14054A460
#define CSidlManagerBase__CreateXWnd_x                             0x140549AA0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14047A380
#define CSidlManager__CreateXWnd_x                                 0x14047A540

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140542530
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140542400
#define CSidlScreenWnd__ConvertToRes_x                             0x14056EA90 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140542660
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140541CA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140541BF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140541EC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140542C30
#define CSidlScreenWnd__EnableIniStorage_x                         0x140542E60
#define CSidlScreenWnd__GetChildItem_x                             0x140543000
#define CSidlScreenWnd__GetSidlPiece_x                             0x140543220
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140534C70 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140543590
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405438D0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140544180
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140544A30
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C20A68
#define CSidlScreenWnd__StoreIniInfo_x                             0x140545070
#define CSidlScreenWnd__StoreIniVis_x                              0x140545860
#define CSidlScreenWnd__vftable_x                                  0x1407E2D48
#define CSidlScreenWnd__WndNotification_x                          0x1405458B0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D7F30 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D8330 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D8270
#define CSkillMgr__IsActivatedSkill_x                              0x1402D86D0
#define CSkillMgr__IsCombatSkill_x                                 0x1402D8710

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404975F0
#define CSliderWnd__SetValue_x                                     0x140553FB0
#define CSliderWnd__SetNumTicks_x                                  0x140553E30

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140481810

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14055C440
#define CStmlWnd__CalculateHSBRange_x                              0x140534640
#define CStmlWnd__CalculateVSBRange_x                              0x14055D370
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14055DDF0
#define CStmlWnd__ForceParseNow_x                                  0x14055DE90
#define CStmlWnd__GetVisibleText_x                                 0x14055E570
#define CStmlWnd__MakeStmlColorTag_x                               0x140560300
#define CStmlWnd__MakeWndNotificationTag_x                         0x140560340
#define CStmlWnd__SetSTMLText_x                                    0x140567320
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405674D0
#define CStmlWnd__UpdateHistoryString_x                            0x140567860

// CTabWnd
#define CTabWnd__Draw_x                                            0x140558F30
#define CTabWnd__DrawCurrentPage_x                                 0x140558FD0
#define CTabWnd__DrawTab_x                                         0x1405593A0
#define CTabWnd__GetTabRect_x                                      0x140559A00
#define CTabWnd__InsertPage_x                                      0x140559CD0
#define CTabWnd__RemovePage_x                                      0x140559F60
#define CTabWnd__SetPage_x                                         0x14055A0C0
#define CTabWnd__UpdatePage_x                                      0x14055A3C0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140558B50
#define CPageWnd__SetTabText_x                                     0x140558BC0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DCC0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E0D0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14052E480
#define CTextureFont__DrawWrappedText1_x                           0x14052E390
#define CTextureFont__DrawWrappedText2_x                           0x14052E5B0
#define CTextureFont__GetTextExtent_x                              0x14052E960
#define CTextureFont__GetHeight_x                                  0x14052E920

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14056D1F0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140521690

// CXStr
#define CXStr__gFreeLists_x                                        0x140A57660
#define CXStr__gCXStrAccess_x                                      0x140C20028

// CXWnd
#define CXWnd__BringToTop_x                                        0x14052FE90
#define CXWnd__ClrFocus_x                                          0x1405300D0
#define CXWnd__Destroy_x                                           0x140530210
#define CXWnd__DoAllDrawing_x                                      0x140530320
#define CXWnd__DrawColoredRect_x                                   0x140530AE0
#define CXWnd__DrawTooltip_x                                       0x140532160
#define CXWnd__DrawTooltipAtPoint_x                                0x140532210
#define CXWnd__GetChildItem_x                                      0x140532B00
#define CXWnd__GetChildWndAt_x                                     0x140532BC0
#define CXWnd__GetClientClipRect_x                                 0x140532D30
#define CXWnd__GetRelativeRect_x                                   0x140534770
#define CXWnd__GetScreenClipRect_x                                 0x140534880
#define CXWnd__GetScreenRect_x                                     0x1405349F0
#define CXWnd__GetTooltipRect_x                                    0x140534B70
#define CXWnd__IsActive_x                                          0x1405350F0
#define CXWnd__IsDescendantOf_x                                    0x140535120
#define CXWnd__IsReallyVisible_x                                   0x140535190
#define CXWnd__IsType_x                                            0x1405351D0
#define CXWnd__Minimize_x                                          0x1405352C0
#define CXWnd__ProcessTransition_x                                 0x140536300
#define CXWnd__Resize_x                                            0x140536410
#define CXWnd__Right_x                                             0x1405364B0
#define CXWnd__SetFocus_x                                          0x140536860
#define CXWnd__SetFont_x                                           0x1405368B0
#define CXWnd__SetKeyTooltip_x                                     0x1405369C0
#define CXWnd__SetMouseOver_x                                      0x140536B00
#define CXWnd__SetParent_x                                         0x140536B80
#define CXWnd__StartFade_x                                         0x140536FC0
#define CXWnd__vftable_x                                           0x1407E2458
#define CXWnd__CXWnd_x                                             0x14052EA80
#define CXWnd__dCXWnd_x                                            0x14052F380

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140573C60

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x1405387F0
#define CXWndManager__DrawWindows_x                                0x140538920
#define CXWndManager__GetKeyboardFlags_x                           0x140538FD0
#define CXWndManager__HandleKeyboardMsg_x                          0x140539010
#define CXWndManager__RemoveWnd_x                                  0x14053C470

// CDBStr
#define CDBStr__GetString_x                                        0x140150E80

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405C48A0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1CF0
#define CCharacterListWnd__EnterWorld_x                            0x1400A0A20
#define CCharacterListWnd__Quit_x                                  0x1400A1CD0
#define CCharacterListWnd__UpdateList_x                            0x1400A29E0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140594FA0
#define ItemBase__CreateItemTagString_x                            0x140595970
#define ItemBase__GetImageNum_x                                    0x140597AF0
#define ItemBase__GetItemValue_x                                   0x140599670
#define ItemBase__IsEmpty_x                                        0x14059B190
#define ItemBase__IsKeyRingItem_x                                  0x14059B870
#define ItemBase__ValueSellMerchant_x                              0x14059FB60
#define ItemClient__CanDrop_x                                      0x140268300
#define ItemClient__CanGoInBag_x                                   0x140268430
#define ItemClient__CreateItemClient_x                             0x1402686F0
#define ItemClient__dItemClient_x                                  0x140268160

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016FCB0
#define EQ_LoadingS__Array_x                                       0x140A43A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405AB5D0
#define PcBase__GetCombatAbility_x                                 0x1405ABC20
#define PcBase__GetCombatAbilityTimer_x                            0x1405ABCC0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405AC3D0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405ACC40
#define PcClient__AlertInventoryChanged_x                          0x140288E80
#define PcClient__GetConLevel_x                                    0x140289370  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x14028BC40
#define PcClient__HasLoreItem_x                                    0x14028CCC0
#define PcZoneClient__GetItemRecastTimer_x                         0x140298BA0
#define PcZoneClient__RemoveMyAffect_x                             0x14029B250

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401DB8F0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401DB960  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401DBA70  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401DB9D0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x140211D80  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014B750

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140608A90
#define PlayerBase__CanSee1_x                                      0x140608B60
#define PlayerBase__GetVisibilityLineSegment_x                     0x140609090
#define PlayerBase__HasProperty_x                                  0x1406092B0
#define PlayerBase__IsTargetable_x                                 0x140609370
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A6CD0
#define PlayerClient__GetPcClient_x                                0x1402A9260
#define PlayerClient__PlayerClient_x                               0x1402A0040
#define PlayerClient__SetNameSpriteState_x                         0x1402AC690
#define PlayerClient__SetNameSpriteTint_x                          0x1402AD630
#define PlayerZoneClient__ChangeHeight_x                           0x1402BB1E0
#define PlayerZoneClient__DoAttack_x                               0x1402BBEA0
#define PlayerZoneClient__GetLevel_x                               0x1402BF410
#define PlayerZoneClient__IsValidTeleport_x                        0x140214B30
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015F060

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B4FD0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B5000  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B50B0
#define PlayerManagerClient__CreatePlayer_x                        0x1402B49C0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140608710

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x14026D660
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x14026D260
#define KeypressHandler__AttachKeyToEqCommand_x                    0x14026D2D0
#define KeypressHandler__ClearCommandStateArray_x                  0x14026D5F0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x14026D780
#define KeypressHandler__HandleKeyUp_x                             0x14026D860
#define KeypressHandler__SaveKeymapping_x                          0x14026D500  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405C24B0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405BD060

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140292220  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402971E0
#define PcZoneClient__GetPcSkillLimit_x                            0x140299100
#define PcZoneClient__RemovePetEffect_x                            0x14029B350
#define PcZoneClient__HasAlternateAbility_x                        0x140299B80
#define PcZoneClient__CanEquipItem_x                               0x1402955B0
#define PcZoneClient__GetItemByID_x                                0x140298150
#define PcZoneClient__RemoveBuffEffect_x                           0x14029B100
#define PcZoneClient__BandolierSwap_x                              0x140294770
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140299050

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402195F0

// IconCache
#define IconCache__GetIcon_x                                       0x140365D70

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14035CC30
#define CContainerMgr__CloseContainer_x                            0x14035C5F0
#define CContainerMgr__OpenExperimentContainer_x                   0x14035CF90

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140441560

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140260C70

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403D4B60
#define CLootWnd__RequestLootSlot_x                                0x1403D5AC0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019E780
#define EQ_Spell__SpellAffects_x                                   0x14019FA30
#define EQ_Spell__SpellAffectBase_x                                0x14019F990
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA640
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA5F0
#define EQ_Spell__IsSPAStacking_x                                  0x14019F650
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019F210
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019EAF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400931A0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14049B370  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14049B3B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x14049A8C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140499E80

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404A2500  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140148100
#define CTaskManager__GetTaskStatus_x                              0x140148210
#define CTaskManager__GetElementDescription_x                      0x140147D90

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x14019CAE0
#define EqSoundManager__PlayScriptMp3_x                            0x14019B8E0
#define EqSoundManager__SoundAssistPlay_x                          0x1402DE730  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DEA60  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405581E0
#define CTextureAnimation__SetCurCell_x                            0x1405584F0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025EF30

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405DC760
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405DC7E0
#define CharacterBase__IsExpansionFlag_x                           0x1401BE510

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14033D000
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14033D940
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033ED80

// messages
#define msg_spell_worn_off_x                                       0x1401D24F0
#define msg_new_text_x                                             0x1401CDF40
#define __msgTokenTextParam_x                                      0x1401C5D60
#define msgTokenText_x                                             0x1401C5C80

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402E00F0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402E0010

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406172E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403CE710

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x140361F30
#define CCursorAttachment__AttachToCursor1_x                       0x140360B90
#define CCursorAttachment__Deactivate_x                            0x140362430

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14056B440
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14056B630
#define CEQSuiteTextureLoader__GetTexture_x                        0x14056B640

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401133E0
#define CFindItemWnd__Update_x                                     0x140113BB0
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E2F0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011C730
#define LootFiltersManager__GetItemFilterData_x                    0x14011D250
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011DAF0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011DDA0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140424A10

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14061B6B0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D7A90

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140359230

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405E06D0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405E05C0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x14037B480
#define CGroupWnd__UpdateDisplay_x                                 0x14037B220

// ItemBase
#define ItemBase__IsLore_x                                         0x14059B940
#define ItemBase__IsLoreEquipped_x                                 0x14059BA90

#define MultipleItemMoveManager__ProcessMove_x                     0x14027FC70

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140211EE0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140211E70
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140211EB0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D24B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF360
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF710
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEB30
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEB30
#define FactionManagerClient__GetMinFaction_x                      0x1400EE9E0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DD40

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FAA20

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140178530
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401778B0
#define CAltAbilityData__GetMercCurrentRank_x                      0x140178350  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401782D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E47E0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402D24B0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401DBB60

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14056A5C0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056110

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F5D30

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D9C0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
