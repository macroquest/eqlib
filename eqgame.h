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

#define __ClientDate                                               20221102u
#define __ExpectedVersionDate                                     "Nov  2 2022"
#define __ExpectedVersionTime                                     "10:36:46"
#define __ActualVersionDate_x                                      0x140799BA8
#define __ActualVersionTime_x                                      0x140799B98
#define __ActualVersionBuild_x                                     0x140787E08

// Memory Protection
#define __MemChecker0_x                                            0x14026F400
#define __MemChecker1_x                                            0x140507680
#define __MemChecker4_x                                            0x14023F140
#define __EncryptPad0_x                                            0x140A415F0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7C9B0
#define instEQZoneInfo_x                                           0x140B7CBA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D9C90
#define __gfMaxZoomCameraDistance_x                                0x14078FED0
#define __gfMaxCameraDistance_x                                    0x1407CAB78
#define __CurrentSocial_x                                          0x1408FD900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A38F80
#define g_eqCommandStates_x                                        0x140A39FE0
#define __CommandList_x                                            0x140A3A220
#define __ScreenMode_x                                             0x140AC4554
#define __gWorld_x                                                 0x140B75398
#define __gpbCommandEvent_x                                        0x140B77864
#define __ServerHost_x                                             0x140B74F98
#define __Guilds_x                                                 0x140B7B560
#define __MouseEventTime_x                                         0x140BE7E20
#define DI8__Mouse_Check_x                                         0x140BECA80
#define __heqmain_x                                                0x140BEEF28
#define DI8__Mouse_x                                               0x140BEEF40
#define __HWnd_x                                                   0x140BEEF48
#define __Mouse_x                                                  0x140BEBF78
#define DI8__Main_x                                                0x140BEC010
#define DI8__Keyboard_x                                            0x140BEC018
#define __LoginName_x                                              0x140BEC6FC
#define __CurrentMapLabel_x                                        0x140C01C90
#define __LabelCache_x                                             0x140C028A0
#define __SubscriptionType_x                                       0x140C376B0
#define Teleport_Table_Size_x                                      0x140B74E34
#define Teleport_Table_x                                           0x140B753C0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B778F0
#define pinstActiveBanker_x                                        0x140B752D0
#define pinstActiveCorpse_x                                        0x140B752C0
#define pinstActiveGMaster_x                                       0x140B752C8
#define pinstActiveMerchant_x                                      0x140B752B8
#define pinstAltAdvManager_x                                       0x140AC5158
#define pinstCEverQuest_x                                          0x140BEBF70
#define pinstCamActor_x                                            0x140AC4540
#define pinstCDBStr_x                                              0x140AC3F60
#define pinstCDisplay_x                                            0x140B753A8
#define pinstControlledPlayer_x                                    0x140B75360
#define pinstCResolutionHandler_x                                  0x141270250
#define pinstCSidlManager_x                                        0x140C13900
#define pinstCXWndManager_x                                        0x140C13908
#define instDynamicZone_x                                          0x140B7B420 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B7B46E
#define instExpeditionName_x                                       0x140B7B4AE
#define pinstDZMember_x                                            0x140B7B538
#define pinstDZTimerInfo_x                                         0x140B7B540
#define pinstEqLogin_x                                             0x140BEC040
#define instTribute_x                                              0x140A34800
#define pinstEQSoundManager_x                                      0x140AC5498
#define pinstEQSpellStrings_x                                      0x140AA8B90
#define pinstSGraphicsEngine_x                                     0x14126FFE8
#define pinstLocalPC_x                                             0x140B753A0
#define pinstLocalPlayer_x                                         0x140B752B0
#define pinstCMercenaryClientManager_x                             0x140BE96C8
#define pinstModelPlayer_x                                         0x140B752E0
#define pinstRenderInterface_x                                     0x141270000
#define pinstSkillMgr_x                                            0x140BEB350
#define pinstSpawnManager_x                                        0x140BE9A80
#define pinstSpellManager_x                                        0x140BEB498
#define pinstStringTable_x                                         0x140B753B0
#define pinstSwitchManager_x                                       0x140B74DB0
#define pinstTarget_x                                              0x140B75358
#define pinstTaskMember_x                                          0x140A347F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B75368
#define pinstTradeTarget_x                                         0x140B752D8
#define instTributeActive_x                                        0x140A34829
#define pinstViewActor_x                                           0x140AC4538
#define pinstWorldData_x                                           0x140B77858
#define pinstPlayerPath_x                                          0x140BE9AA8
#define pinstTargetIndicator_x                                     0x140BEB548
#define EQObject_Top_x                                             0x140B75380

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BFEDF8
#define pinstCContainerMgr_x                                       0x140AC4068
#define pinstCContextMenuManager_x                                 0x140C138B0
#define pinstCInvSlotMgr_x                                         0x140AC4050
#define pinstCItemDisplayManager_x                                 0x140C01860
#define pinstCPopupWndManager_x                                    0x140C020F0
#define pinstCSpellDisplayMgr_x                                    0x140C02780
#define pinstCTaskManager_x                                        0x1408FDC40
#define pinstEQSuiteTextureLoader_x                                0x140A4AC50
#define pinstItemIconCache_x                                       0x140BFF158
#define pinstLootFiltersManager_x                                  0x140AC3978

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F8B30
#define __CastRay2_x                                               0x1401F8840
#define __ConvertItemTags_x                                        0x1401F8F30
#define __CleanItemTags_x                                          0x140058EB0
#define __CreateCascadeMenuItems_x                                 0x140152DF0
#define __DoesFileExist_x                                          0x14050BE60
#define __EQGetTime_x                                              0x140507C30
#define __ExecuteCmd_x                                             0x1401D1BD0
#define __FixHeading_x                                             0x14060ADF0
#define __FlushDxKeyboard_x                                        0x1402EA830
#define __get_bearing_x                                            0x140202160
#define __get_melee_range_x                                        0x140202250
#define __GetAnimationCache_x                                      0x1403615F0
#define __GetGaugeValueFromEQ_x                                    0x140480F20
#define __GetLabelFromEQ_x                                         0x1404824D0
#define __GetXTargetType_x                                         0x14060C130   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14060AE70
#define __HelpPath_x                                               0x140BE7CE8   // Why?
#define __NewUIINI_x                                               0x14048D660   // Why?
#define __ProcessGameEvents_x                                      0x140234980
#define __ProcessKeyboardEvents_x                                  0x1402EC030
#define __ProcessMouseEvents_x                                     0x140235DB0
#define __SaveColors_x                                             0x140162A70
#define __STMLToText_x                                             0x1405359E0
#define __WndProc_x                                                0x1402E8FB0
#define CMemoryMappedFile__SetFile_x                               0x140746960
#define DrawNetStatus_x                                            0x14027CFA0
#define Util__FastTime_x                                           0x140508930
#define __eq_delete_x                                              0x140610F70
#define __eq_new_x                                                 0x14061106C
#define __CopyLayout_x                                             0x14026B8A0
#define __ThrottleFrameRate_x                                      0x140224741
#define __ThrottleFrameRateEnd_x                                   0x1402247A1

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB4D0
#define CAAWnd__Update_x                                           0x1402FB7D0
#define CAAWnd__UpdateSelected_x                                   0x1402FC790

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B900
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140777400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C170

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016D7A0
#define AltAdvManager__IsAbilityReady_x                            0x14016DA20
#define AltAdvManager__GetAAById_x                                 0x14016D070
#define AltAdvManager__CanTrainAbility_x                           0x14016CEA0
#define AltAdvManager__CanSeeAbility_x                             0x14016CB60

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3DB0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4B60
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4D70
#define CharacterZoneClient__CanUseItem_x                          0x1400B8910
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5660
#define CharacterZoneClient__CastSpell_x                           0x1400A5700
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4A80
#define CharacterZoneClient__Cur_HP_x                              0x1400B9F40
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA100
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8700
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFBA0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE600  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9BF0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7E90
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C16C0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C05F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9DC0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009A900
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C170
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0CF0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9BF0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C18D0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9E40
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2360
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA050
#define CharacterZoneClient__GetModCap_x                           0x1400C9D10
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA0F0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA300
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F010
#define CharacterZoneClient__HasSkill_x                            0x1400C5540
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE620
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C97A0
#define CharacterZoneClient__Max_Endurance_x                       0x1402958C0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9AE0
#define CharacterZoneClient__Max_Mana_x                            0x140295AB0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400C9FA0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1B00
#define CharacterZoneClient__SpellDuration_x                       0x1400B26E0
#define CharacterZoneClient__TotalEffect_x                         0x1400B38C0
#define CharacterZoneClient__UseSkill_x                            0x1400CF550


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140319650

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140323790

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031F720
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031E7C0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140325E40

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D72C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140346740
#define CChatWindowManager__InitContextMenu_x                      0x1403468D0
#define CChatWindowManager__FreeChatWindow_x                       0x140345990
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034D660
#define CChatWindowManager__CreateChatWindow_x                     0x1403452D0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7340

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034E5D0
#define CChatWindow__Clear_x                                       0x14034F3E0
#define CChatWindow__WndNotification_x                             0x140350560
#define CChatWindow__AddHistory_x                                  0x14034EEE0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405469A0
#define CContextMenu__RemoveMenuItem_x                             0x140546EB0
#define CContextMenu__RemoveAllMenuItems_x                         0x140546E80
#define CContextMenu__CheckMenuItem_x                              0x140546CF0
#define CContextMenu__SetMenuItem_x                                0x140546ED0
#define CContextMenu__AddSeparator_x                               0x140546B00

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140547520
#define CContextMenuManager__RemoveMenu_x                          0x140547AA0
#define CContextMenuManager__PopupMenu_x                           0x140547820
#define CContextMenuManager__Flush_x                               0x1405475A0
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035B660

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D3BF0
#define CChatService__GetFriendName_x                              0x1405D3C00

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140542B20
#define CComboWnd__Draw_x                                          0x140542C20
#define CComboWnd__GetCurChoice_x                                  0x140542F00  // unused
#define CComboWnd__GetListRect_x                                   0x140542FA0
#define CComboWnd__InsertChoice_x                                  0x1405432E0
#define CComboWnd__SetColors_x                                     0x140543670
#define CComboWnd__SetChoice_x                                     0x140543630
#define CComboWnd__GetItemCount_x                                  0x140542F90
#define CComboWnd__GetCurChoiceText_x                              0x140542F40  // unused
#define CComboWnd__GetChoiceText_x                                 0x140542ED0
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405433A0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403596D0
#define CContainerWnd__SetContainer_x                              0x14035A480
#define CContainerWnd__vftable_x                                   0x1407A7AD8

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC42D4
#define CDisplay__ZoneMainUI_x                                     0x14055E170
#define CDisplay__PreZoneMainUI_x                                  0x14015F9F0
#define CDisplay__CleanGameUI_x                                    0x140151EF0
#define CDisplay__GetClickedActor_x                                0x140156080
#define CDisplay__GetUserDefinedColor_x                            0x140156B60
#define CDisplay__InitCharSelectUI_x                               0x140156E10
#define CDisplay__ReloadUI_x                                       0x140161D20
#define CDisplay__WriteTextHD2_x                                   0x140168C70
#define CDisplay__TrueDistance_x                                   0x140168950
#define CDisplay__SetViewActor_x                                   0x140165260
#define CDisplay__GetFloorHeight_x                                 0x1401562E0
#define CDisplay__ToggleScreenshotMode_x                           0x140168450
#define CDisplay__RealRender_World_x                               0x1401610C0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140569680
#define CEditWnd__DrawCaret_x                                      0x14054A3E0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054A8A0
#define CEditWnd__GetCaretPt_x                                     0x14054AB20  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14054AB60
#define CEditWnd__GetDisplayString_x                               0x14054ADD0
#define CEditWnd__GetHorzOffset_x                                  0x14054B010
#define CEditWnd__GetLineForPrintableChar_x                        0x14054B160
#define CEditWnd__GetSelStartPt_x                                  0x14054B440  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14054B290
#define CEditWnd__PointFromPrintableChar_x                         0x14054BFF0
#define CEditWnd__ReplaceSelection_x                               0x14054C3A0
#define CEditWnd__SelectableCharFromPoint_x                        0x14054C840
#define CEditWnd__SetEditable_x                                    0x14054CAD0
#define CEditWnd__SetWindowText_x                                  0x14054CB00

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402256F0
#define CEverQuest__ClickedPlayer_x                                0x14021B900
#define CEverQuest__CreateTargetIndicator_x                        0x14021C060
#define CEverQuest__DoTellWindow_x                                 0x1400D7050 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7910 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140227120
#define CEverQuest__dsp_chat_x                                     0x1400D6B70 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402508B0
#define CEverQuest__Emote_x                                        0x140227A80
#define CEverQuest__GetBodyTypeDesc_x                              0x140228820
#define CEverQuest__GetClassDesc_x                                 0x140228880
#define CEverQuest__GetClassThreeLetterCode_x                      0x140228C50
#define CEverQuest__GetDeityDesc_x                                 0x140228F00
#define CEverQuest__GetLangDesc_x                                  0x140229330
#define CEverQuest__GetRaceDesc_x                                  0x1402296D0
#define CEverQuest__InterpretCmd_x                                 0x14022AF30
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023F7C0
#define CEverQuest__LMouseUp_x                                     0x14022C8D0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023D160
#define CEverQuest__RMouseUp_x                                     0x140236930
#define CEverQuest__SetGameState_x                                 0x140241CB0
#define CEverQuest__UPCNotificationFlush_x                         0x1402473C0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022C550
#define CEverQuest__ReportSuccessfulHeal_x                         0x140237C60
#define CEverQuest__ReportSuccessfulHit_x                          0x1402389A0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036B940

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094690
#define CGuild__GetGuildName_x                                     0x1400946D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403881F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402616A0
#define CHotButton__SetCheck_x                                     0x140261930

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140397E50
#define CInvSlotMgr__MoveItem_x                                    0x140397FA0
#define CInvSlotMgr__SelectSlot_x                                  0x140399970

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140395AC0
#define CInvSlot__SliderComplete_x                                 0x140396CF0
#define CInvSlot__GetItemBase_x                                    0x140391BA0
#define CInvSlot__UpdateItem_x                                     0x140397150

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140399FD0
#define CInvSlotWnd__HandleLButtonUp_x                             0x14039AB20

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403BA380
#define CItemDisplayWnd__UpdateStrings_x                           0x1403BCC70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B7290
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B8910
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B97D0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14047DC10
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047F7E0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B7140

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403B3A40

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117280

// CLabel
#define CLabel__UpdateText_x                                       0x1403C4040

// CListWnd
#define CListWnd__CListWnd_x                                       0x140519AB0
#define CListWnd__dCListWnd_x                                      0x140519EF0
#define CListWnd__vftable_x                                        0x1407D66B0
#define CListWnd__AddColumn_x                                      0x14051A590
#define CListWnd__AddColumn1_x                                     0x14051A630
#define CListWnd__AddLine_x                                        0x14051A790
#define CListWnd__AddString_x                                      0x14051AD10
#define CListWnd__CalculateFirstVisibleLine_x                      0x14051B400
#define CListWnd__CalculateVSBRange_x                              0x14051B6E0
#define CListWnd__ClearSel_x                                       0x14051B890
#define CListWnd__ClearAllSel_x                                    0x14051B830
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14051B8F0
#define CListWnd__Compare_x                                        0x14051BAB0
#define CListWnd__Draw_x                                           0x14051BF80
#define CListWnd__DrawColumnSeparators_x                           0x14051CB20
#define CListWnd__DrawHeader_x                                     0x14051CBE0
#define CListWnd__DrawItem_x                                       0x14051D2A0
#define CListWnd__DrawLine_x                                       0x14051DC20
#define CListWnd__DrawSeparator_x                                  0x14051E0E0
#define CListWnd__EnableLine_x                                     0x14051E500
#define CListWnd__EnsureVisible_x                                  0x14051E560
#define CListWnd__ExtendSel_x                                      0x14051E660
#define CListWnd__GetColumnMinWidth_x                              0x14051E990
#define CListWnd__GetColumnWidth_x                                 0x14051EA10
#define CListWnd__GetCurSel_x                                      0x14051EB10
#define CListWnd__GetItemData_x                                    0x14051EE90
#define CListWnd__GetItemHeight_x                                  0x14051EED0
#define CListWnd__GetItemRect_x                                    0x14051F090
#define CListWnd__GetItemText_x                                    0x14051F330
#define CListWnd__GetSelList_x                                     0x14051F580
#define CListWnd__GetSeparatorRect_x                               0x14051F770
#define CListWnd__InsertLine_x                                     0x140520BE0
#define CListWnd__RemoveLine_x                                     0x140521200
#define CListWnd__SetColors_x                                      0x1405215D0
#define CListWnd__SetColumnJustification_x                         0x1405215F0
#define CListWnd__SetColumnLabel_x                                 0x140521670
#define CListWnd__SetColumnWidth_x                                 0x140521810
#define CListWnd__SetCurSel_x                                      0x1405218E0
#define CListWnd__SetItemColor_x                                   0x140521B50
#define CListWnd__SetItemData_x                                    0x140521BF0
#define CListWnd__SetItemText_x                                    0x140521E30
#define CListWnd__Sort_x                                           0x140522240
#define CListWnd__ToggleSel_x                                      0x1405223B0
#define CListWnd__SetColumnsSizable_x                              0x140521860
#define CListWnd__SetItemWnd_x                                     0x140521F60
#define CListWnd__GetItemWnd_x                                     0x14051F510
#define CListWnd__SetItemIcon_x                                    0x140521C30
#define CListWnd__CalculateCustomWindowPositions_x                 0x14051B1D0
#define CListWnd__SetVScrollPos_x                                  0x1405221A0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D6AE0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407B3170
#define MapViewMap__Clear_x                                        0x1403D8660
#define MapViewMap__SetZoom_x                                      0x1403DEC20
#define MapViewMap__HandleLButtonDown_x                            0x1403DB760

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140400120  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140405CC0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140407CE0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140409AF0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140408F10
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14040D880

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405B0CF0
#define CPacketScrambler__hton_x                                   0x1405B0CE0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405401F0
#define CSidlManagerBase__FindAnimation1_x                         0x140540130
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140540820
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405405D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053F540
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053F4D0
#define CSidlManagerBase__CreateXWnd_x                             0x14053EB10

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404703F0
#define CSidlManager__CreateXWnd_x                                 0x1404705B0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140537580
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140537450
#define CSidlScreenWnd__ConvertToRes_x                             0x140563C30 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405376B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140536CF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140536C40
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140536F10
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140537C80
#define CSidlScreenWnd__EnableIniStorage_x                         0x140537EB0
#define CSidlScreenWnd__GetChildItem_x                             0x140538050
#define CSidlScreenWnd__GetSidlPiece_x                             0x140538270
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140529CE0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405385E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140538950
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140539200
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140539AB0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C13758
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053A0E0
#define CSidlScreenWnd__StoreIniVis_x                              0x14053A8D0
#define CSidlScreenWnd__vftable_x                                  0x1407D7728
#define CSidlScreenWnd__WndNotification_x                          0x14053A920

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D3770 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D3B70 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D3AB0
#define CSkillMgr__IsActivatedSkill_x                              0x1402D3F10
#define CSkillMgr__IsCombatSkill_x                                 0x1402D3F50

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14048D710
#define CSliderWnd__SetValue_x                                     0x140549060
#define CSliderWnd__SetNumTicks_x                                  0x140548EE0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404778B0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405515B0
#define CStmlWnd__CalculateHSBRange_x                              0x1405296B0
#define CStmlWnd__CalculateVSBRange_x                              0x1405524E0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140552F60
#define CStmlWnd__ForceParseNow_x                                  0x140553000
#define CStmlWnd__GetVisibleText_x                                 0x1405536E0
#define CStmlWnd__MakeStmlColorTag_x                               0x140555470
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405554B0
#define CStmlWnd__SetSTMLText_x                                    0x14055C490
#define CStmlWnd__StripFirstSTMLLines_x                            0x14055C640
#define CStmlWnd__UpdateHistoryString_x                            0x14055C9D0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14054E0A0
#define CTabWnd__DrawCurrentPage_x                                 0x14054E140
#define CTabWnd__DrawTab_x                                         0x14054E510
#define CTabWnd__GetTabRect_x                                      0x14054EB70
#define CTabWnd__InsertPage_x                                      0x14054EE40
#define CTabWnd__RemovePage_x                                      0x14054F0D0
#define CTabWnd__SetPage_x                                         0x14054F230
#define CTabWnd__UpdatePage_x                                      0x14054F530

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14054DCA0
#define CPageWnd__SetTabText_x                                     0x14054DD10

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DBF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E000


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140523500
#define CTextureFont__DrawWrappedText1_x                           0x140523410
#define CTextureFont__DrawWrappedText2_x                           0x140523630
#define CTextureFont__GetTextExtent_x                              0x1405239E0
#define CTextureFont__GetHeight_x                                  0x1405239A0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140562390

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140516720

// CXStr
#define CXStr__gFreeLists_x                                        0x140A4A5D0
#define CXStr__gCXStrAccess_x                                      0x140C12D18

// CXWnd
#define CXWnd__BringToTop_x                                        0x140524F50
#define CXWnd__ClrFocus_x                                          0x140525190
#define CXWnd__Destroy_x                                           0x1405252D0
#define CXWnd__DoAllDrawing_x                                      0x1405253E0
#define CXWnd__DrawColoredRect_x                                   0x140525BA0
#define CXWnd__DrawTooltip_x                                       0x140527220
#define CXWnd__DrawTooltipAtPoint_x                                0x1405272D0
#define CXWnd__GetChildItem_x                                      0x140527BD0
#define CXWnd__GetChildWndAt_x                                     0x140527C90
#define CXWnd__GetClientClipRect_x                                 0x140527E00
#define CXWnd__GetRelativeRect_x                                   0x1405297D0
#define CXWnd__GetScreenClipRect_x                                 0x1405298E0
#define CXWnd__GetScreenRect_x                                     0x140529A60
#define CXWnd__GetTooltipRect_x                                    0x140529BE0
#define CXWnd__IsActive_x                                          0x14052A160
#define CXWnd__IsDescendantOf_x                                    0x14052A190
#define CXWnd__IsReallyVisible_x                                   0x14052A200
#define CXWnd__IsType_x                                            0x14052A240
#define CXWnd__Minimize_x                                          0x14052A340
#define CXWnd__ProcessTransition_x                                 0x14052B390
#define CXWnd__Refade_x                                            0x14052B490
#define CXWnd__Resize_x                                            0x14052B4B0
#define CXWnd__Right_x                                             0x14052B550
#define CXWnd__SetFocus_x                                          0x14052B910
#define CXWnd__SetFont_x                                           0x14052B960
#define CXWnd__SetKeyTooltip_x                                     0x14052BA70
#define CXWnd__SetMouseOver_x                                      0x14052BBB0
#define CXWnd__SetParent_x                                         0x14052BC30
#define CXWnd__StartFade_x                                         0x14052C070
#define CXWnd__vftable_x                                           0x1407D6E38
#define CXWnd__CXWnd_x                                             0x140523B00
#define CXWnd__dCXWnd_x                                            0x140524440

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140568E00

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14052D890
#define CXWndManager__DrawWindows_x                                0x14052D9C0
#define CXWndManager__GetKeyboardFlags_x                           0x14052E080
#define CXWndManager__HandleKeyboardMsg_x                          0x14052E0C0
#define CXWndManager__RemoveWnd_x                                  0x140531450

// CDBStr
#define CDBStr__GetString_x                                        0x1401500F0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B9BE0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1B90
#define CCharacterListWnd__EnterWorld_x                            0x1400A08C0
#define CCharacterListWnd__Quit_x                                  0x1400A1B70
#define CCharacterListWnd__UpdateList_x                            0x1400A2890

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058A180
#define ItemBase__CreateItemTagString_x                            0x14058AB70
#define ItemBase__GetImageNum_x                                    0x14058CD40
#define ItemBase__GetItemValue_x                                   0x14058E920
#define ItemBase__IsEmpty_x                                        0x140590480
#define ItemBase__IsKeyRingItem_x                                  0x140590BB0
#define ItemBase__ValueSellMerchant_x                              0x140594FB0
#define ItemClient__CanDrop_x                                      0x140263A80
#define ItemClient__CanGoInBag_x                                   0x140263BB0
#define ItemClient__CreateItemClient_x                             0x140263E70
#define ItemClient__dItemClient_x                                  0x1402638E0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016EF40
#define EQ_LoadingS__Array_x                                       0x140A36A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A09C0
#define PcBase__GetCombatAbility_x                                 0x1405A1010
#define PcBase__GetCombatAbilityTimer_x                            0x1405A10B0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A17C0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A2020
#define PcClient__AlertInventoryChanged_x                          0x1402845F0
#define PcClient__GetConLevel_x                                    0x140284AC0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140287390
#define PcClient__HasLoreItem_x                                    0x140288410
#define PcZoneClient__GetItemRecastTimer_x                         0x140294270
#define PcZoneClient__RemoveMyAffect_x                             0x140296910

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D6250  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D62C0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D63D0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D6330  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020D400  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014A9B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405FD9C0
#define PlayerBase__CanSee1_x                                      0x1405FDA90
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405FDFC0
#define PlayerBase__HasProperty_x                                  0x1405FE1E0
#define PlayerBase__IsTargetable_x                                 0x1405FE2A0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A24E0
#define PlayerClient__GetPcClient_x                                0x1402A4A70
#define PlayerClient__PlayerClient_x                               0x14029B710
#define PlayerClient__SetNameSpriteState_x                         0x1402A7EA0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A8E40
#define PlayerZoneClient__ChangeHeight_x                           0x1402B6A40
#define PlayerZoneClient__DoAttack_x                               0x1402B7720
#define PlayerZoneClient__GetLevel_x                               0x1402BACA0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402101C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E290

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B06E0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B0710  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B07C0
#define PlayerManagerClient__CreatePlayer_x                        0x1402B00D0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FD640

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140268DE0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402689E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140268A50
#define KeypressHandler__ClearCommandStateArray_x                  0x140268D70  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140268F00
#define KeypressHandler__HandleKeyUp_x                             0x140268FE0
#define KeypressHandler__SaveKeymapping_x                          0x140268C80  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B77E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B2390

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028D920  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402928C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402947D0
#define PcZoneClient__RemovePetEffect_x                            0x140296A10
#define PcZoneClient__HasAlternateAbility_x                        0x140295240
#define PcZoneClient__CanEquipItem_x                               0x140290C90
#define PcZoneClient__GetItemByID_x                                0x140293830
#define PcZoneClient__RemoveBuffEffect_x                           0x1402967C0
#define PcZoneClient__BandolierSwap_x                              0x14028FE50
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140294720

// Doors
#define EQSwitch__UseSwitch_x                                      0x140214C80

// IconCache
#define IconCache__GetIcon_x                                       0x140361620

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403584B0
#define CContainerMgr__CloseContainer_x                            0x140357E70
#define CContainerMgr__OpenExperimentContainer_x                   0x140358810

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140437600

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025C3D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403CACB0
#define CLootWnd__RequestLootSlot_x                                0x1403CBC90

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140199FD0
#define EQ_Spell__SpellAffects_x                                   0x14019B270
#define EQ_Spell__SpellAffectBase_x                                0x14019B1D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA4E0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA490
#define EQ_Spell__IsSPAStacking_x                                  0x14019AE90
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019AA50
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019A330

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400930C0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140491440  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140491480
#define CTargetWnd__RefreshTargetBuffs_x                           0x140490990
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048FF40

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140498560  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147370
#define CTaskManager__GetTaskStatus_x                              0x140147480
#define CTaskManager__GetElementDescription_x                      0x140147000

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198330
#define EqSoundManager__PlayScriptMp3_x                            0x140197130
#define EqSoundManager__SoundAssistPlay_x                          0x1402D9F70  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DA2A0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14054D300
#define CTextureAnimation__SetCurCell_x                            0x14054D610

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025A690

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D1710
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D1790
#define CharacterBase__IsExpansionFlag_x                           0x1401B97C0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140338840
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140339160
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033A5A0

// messages
#define msg_spell_worn_off_x                                       0x1401CD320
#define msg_new_text_x                                             0x1401C8D80
#define __msgTokenTextParam_x                                      0x1401C0BE0
#define msgTokenText_x                                             0x1401C0B00

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DB930
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DB850

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14060C510

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C4780

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035D7E0
#define CCursorAttachment__AttachToCursor1_x                       0x14035C430
#define CCursorAttachment__Deactivate_x                            0x14035DCE0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405605E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405607D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405607E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112E20
#define CFindItemWnd__Update_x                                     0x140113020
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E060

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BA40
#define LootFiltersManager__GetItemFilterData_x                    0x14011C550
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CDF0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D0A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14041AAF0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406108E0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D32D0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140354A80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D5560  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D5670  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140376D20
#define CGroupWnd__UpdateDisplay_x                                 0x140376AC0

// ItemBase
#define ItemBase__IsLore_x                                         0x140590C80
#define ItemBase__IsLoreEquipped_x                                 0x140590DE0

#define MultipleItemMoveManager__ProcessMove_x                     0x14027B3F0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020D560
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020D4F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020D530

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CDCF0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF140
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF4F0
#define FactionManagerClient__GetFactionStanding_x                 0x1400EE910
#define FactionManagerClient__GetMaxFaction_x                      0x1400EE910
#define FactionManagerClient__GetMinFaction_x                      0x1400EE7C0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC70

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA800

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401777C0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140176B40
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401775E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177560  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E0020

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CDCF0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D64C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055F760

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F1560

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
