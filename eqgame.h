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

#define __ClientDate                                               20221012u
#define __ExpectedVersionDate                                     "Oct 12 2022"
#define __ExpectedVersionTime                                     "21:53:32"
#define __ActualVersionDate_x                                      0x140799BA8
#define __ActualVersionTime_x                                      0x140799B98
#define __ActualVersionBuild_x                                     0x140787E08

// Memory Protection
#define __MemChecker0_x                                            0x14026F880
#define __MemChecker1_x                                            0x140507750
#define __MemChecker4_x                                            0x14023F550
#define __EncryptPad0_x                                            0x140A415F0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7C9B0
#define instEQZoneInfo_x                                           0x140B7CBA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401DA0D0
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
#define __CastRay_x                                                0x1401F8F70
#define __CastRay2_x                                               0x1401F8C80
#define __ConvertItemTags_x                                        0x1401F9370
#define __CleanItemTags_x                                          0x140058EB0
#define __CreateCascadeMenuItems_x                                 0x140152E20
#define __DoesFileExist_x                                          0x14050BF30
#define __EQGetTime_x                                              0x140507D00
#define __ExecuteCmd_x                                             0x1401D2010
#define __FixHeading_x                                             0x14060A8E0
#define __FlushDxKeyboard_x                                        0x1402EACE0
#define __get_bearing_x                                            0x1402025A0
#define __get_melee_range_x                                        0x140202690
#define __GetAnimationCache_x                                      0x1403616B0
#define __GetGaugeValueFromEQ_x                                    0x140480F90
#define __GetLabelFromEQ_x                                         0x140482540
#define __GetXTargetType_x                                         0x14060BC20   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14060A960
#define __HelpPath_x                                               0x140BE7CE8   // Why?
#define __NewUIINI_x                                               0x14048D6F0   // Why?
#define __ProcessGameEvents_x                                      0x140234D90
#define __ProcessKeyboardEvents_x                                  0x1402EC4E0
#define __ProcessMouseEvents_x                                     0x1402361C0
#define __SaveColors_x                                             0x140162AA0
#define __STMLToText_x                                             0x140535A20
#define __WndProc_x                                                0x1402E9460
#define CMemoryMappedFile__SetFile_x                               0x140746450
#define DrawNetStatus_x                                            0x14027D410
#define Util__FastTime_x                                           0x140508A00
#define __eq_delete_x                                              0x140610A60
#define __eq_new_x                                                 0x140610B5C
#define __CopyLayout_x                                             0x14026BD20
#define __ThrottleFrameRate_x                                      0x140224B61
#define __ThrottleFrameRateEnd_x                                   0x140224BC1

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB690
#define CAAWnd__Update_x                                           0x1402FB990
#define CAAWnd__UpdateSelected_x                                   0x1402FC950

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B8F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740E0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140777400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C160

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016D7B0
#define AltAdvManager__IsAbilityReady_x                            0x14016DA30
#define AltAdvManager__GetAAById_x                                 0x14016D080
#define AltAdvManager__CanTrainAbility_x                           0x14016CEB0
#define AltAdvManager__CanSeeAbility_x                             0x14016CB70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3DD0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4B80
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4D90
#define CharacterZoneClient__CanUseItem_x                          0x1400B8940
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5680
#define CharacterZoneClient__CastSpell_x                           0x1400A5720
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4AB0
#define CharacterZoneClient__Cur_HP_x                              0x1400B9F70
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA130
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8720
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFBD0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE630  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9C10
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7EC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C16F0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0620
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9DE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009A920
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C190
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0D20
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9C20
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1900
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9E60
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2390
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA070
#define CharacterZoneClient__GetModCap_x                           0x1400C9D40
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA110
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA320
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F030
#define CharacterZoneClient__HasSkill_x                            0x1400C5570
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE640
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C97D0
#define CharacterZoneClient__Max_Endurance_x                       0x140295D50  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9B10
#define CharacterZoneClient__Max_Mana_x                            0x140295F40  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400C9FD0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1B30
#define CharacterZoneClient__SpellDuration_x                       0x1400B2710
#define CharacterZoneClient__TotalEffect_x                         0x1400B38F0
#define CharacterZoneClient__UseSkill_x                            0x1400CF580


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403197A0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403238D0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031F870
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031E910

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140325F80

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D72C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140346850
#define CChatWindowManager__InitContextMenu_x                      0x1403469E0
#define CChatWindowManager__FreeChatWindow_x                       0x140345AA0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034D770
#define CChatWindowManager__CreateChatWindow_x                     0x1403453E0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7380

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034E6E0
#define CChatWindow__Clear_x                                       0x14034F4F0
#define CChatWindow__WndNotification_x                             0x140350670
#define CChatWindow__AddHistory_x                                  0x14034EFF0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140546990
#define CContextMenu__RemoveMenuItem_x                             0x140546EA0
#define CContextMenu__RemoveAllMenuItems_x                         0x140546E70
#define CContextMenu__CheckMenuItem_x                              0x140546CE0
#define CContextMenu__SetMenuItem_x                                0x140546EC0
#define CContextMenu__AddSeparator_x                               0x140546AF0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140547510
#define CContextMenuManager__RemoveMenu_x                          0x140547A80
#define CContextMenuManager__PopupMenu_x                           0x140547800
#define CContextMenuManager__Flush_x                               0x140547590
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035B730

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D3B20
#define CChatService__GetFriendName_x                              0x1405D3B30

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140542B10
#define CComboWnd__Draw_x                                          0x140542C10
#define CComboWnd__GetCurChoice_x                                  0x140542EF0  // unused
#define CComboWnd__GetListRect_x                                   0x140542F90
#define CComboWnd__InsertChoice_x                                  0x1405432D0
#define CComboWnd__SetColors_x                                     0x140543660
#define CComboWnd__SetChoice_x                                     0x140543620
#define CComboWnd__GetItemCount_x                                  0x140542F80
#define CComboWnd__GetCurChoiceText_x                              0x140542F30  // unused
#define CComboWnd__GetChoiceText_x                                 0x140542EC0
#define CComboWnd__InsertChoiceAtIndex_x                           0x140543390

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403597B0
#define CContainerWnd__SetContainer_x                              0x14035A550
#define CContainerWnd__vftable_x                                   0x1407A7AD8

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC42D4
#define CDisplay__ZoneMainUI_x                                     0x14055E130
#define CDisplay__PreZoneMainUI_x                                  0x14015FA20
#define CDisplay__CleanGameUI_x                                    0x140151F20
#define CDisplay__GetClickedActor_x                                0x1401560B0
#define CDisplay__GetUserDefinedColor_x                            0x140156B90
#define CDisplay__InitCharSelectUI_x                               0x140156E40
#define CDisplay__ReloadUI_x                                       0x140161D50
#define CDisplay__WriteTextHD2_x                                   0x140168CA0
#define CDisplay__TrueDistance_x                                   0x140168980
#define CDisplay__SetViewActor_x                                   0x140165290
#define CDisplay__GetFloorHeight_x                                 0x140156310
#define CDisplay__ToggleScreenshotMode_x                           0x140168480
#define CDisplay__RealRender_World_x                               0x1401610F0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140569640
#define CEditWnd__DrawCaret_x                                      0x14054A3C0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054A870
#define CEditWnd__GetCaretPt_x                                     0x14054AAF0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14054AB30
#define CEditWnd__GetDisplayString_x                               0x14054ADA0
#define CEditWnd__GetHorzOffset_x                                  0x14054AFE0
#define CEditWnd__GetLineForPrintableChar_x                        0x14054B130
#define CEditWnd__GetSelStartPt_x                                  0x14054B410  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14054B260
#define CEditWnd__PointFromPrintableChar_x                         0x14054BFC0
#define CEditWnd__ReplaceSelection_x                               0x14054C370
#define CEditWnd__SelectableCharFromPoint_x                        0x14054C810
#define CEditWnd__SetEditable_x                                    0x14054CAA0
#define CEditWnd__SetWindowText_x                                  0x14054CAD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140225B10
#define CEverQuest__ClickedPlayer_x                                0x14021BD40
#define CEverQuest__CreateTargetIndicator_x                        0x14021C4A0
#define CEverQuest__DoTellWindow_x                                 0x1400D7090 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7950 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140227540
#define CEverQuest__dsp_chat_x                                     0x1400D6BB0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140250CC0
#define CEverQuest__Emote_x                                        0x140227EA0
#define CEverQuest__GetBodyTypeDesc_x                              0x140228C40
#define CEverQuest__GetClassDesc_x                                 0x140228CA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140229070
#define CEverQuest__GetDeityDesc_x                                 0x140229320
#define CEverQuest__GetLangDesc_x                                  0x140229750
#define CEverQuest__GetRaceDesc_x                                  0x140229AF0
#define CEverQuest__InterpretCmd_x                                 0x14022B350
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023FBD0
#define CEverQuest__LMouseUp_x                                     0x14022CCF0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023D570
#define CEverQuest__RMouseUp_x                                     0x140236D40
#define CEverQuest__SetGameState_x                                 0x1402420C0
#define CEverQuest__UPCNotificationFlush_x                         0x1402477D0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022C970
#define CEverQuest__ReportSuccessfulHeal_x                         0x140238070
#define CEverQuest__ReportSuccessfulHit_x                          0x140238DB0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036B9F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400946B0
#define CGuild__GetGuildName_x                                     0x1400946F0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140388290

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140261AA0
#define CHotButton__SetCheck_x                                     0x140261D30

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140397F20
#define CInvSlotMgr__MoveItem_x                                    0x140398070
#define CInvSlotMgr__SelectSlot_x                                  0x140399A60

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140395B70
#define CInvSlot__SliderComplete_x                                 0x140396DA0
#define CInvSlot__GetItemBase_x                                    0x140391C50
#define CInvSlot__UpdateItem_x                                     0x140397200

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14039A0C0
#define CInvSlotWnd__HandleLButtonUp_x                             0x14039AC20

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403BA500
#define CItemDisplayWnd__UpdateStrings_x                           0x1403BCE10
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B7380
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B8A30
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B9940

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14047DC70
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047F840

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B7210

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403B3B30

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117290

// CLabel
#define CLabel__UpdateText_x                                       0x1403C41D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140519B80
#define CListWnd__dCListWnd_x                                      0x140519FC0
#define CListWnd__vftable_x                                        0x1407D66B0
#define CListWnd__AddColumn_x                                      0x14051A660
#define CListWnd__AddColumn1_x                                     0x14051A700
#define CListWnd__AddLine_x                                        0x14051A860
#define CListWnd__AddString_x                                      0x14051ADE0
#define CListWnd__CalculateFirstVisibleLine_x                      0x14051B4D0
#define CListWnd__CalculateVSBRange_x                              0x14051B7B0
#define CListWnd__ClearSel_x                                       0x14051B960
#define CListWnd__ClearAllSel_x                                    0x14051B900
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14051B9C0
#define CListWnd__Compare_x                                        0x14051BB80
#define CListWnd__Draw_x                                           0x14051C050
#define CListWnd__DrawColumnSeparators_x                           0x14051CBF0
#define CListWnd__DrawHeader_x                                     0x14051CCB0
#define CListWnd__DrawItem_x                                       0x14051D370
#define CListWnd__DrawLine_x                                       0x14051DCF0
#define CListWnd__DrawSeparator_x                                  0x14051E1B0
#define CListWnd__EnableLine_x                                     0x14051E5D0
#define CListWnd__EnsureVisible_x                                  0x14051E630
#define CListWnd__ExtendSel_x                                      0x14051E730
#define CListWnd__GetColumnMinWidth_x                              0x14051EA60
#define CListWnd__GetColumnWidth_x                                 0x14051EAE0
#define CListWnd__GetCurSel_x                                      0x14051EBE0
#define CListWnd__GetItemData_x                                    0x14051EF60
#define CListWnd__GetItemHeight_x                                  0x14051EFA0
#define CListWnd__GetItemRect_x                                    0x14051F160
#define CListWnd__GetItemText_x                                    0x14051F400
#define CListWnd__GetSelList_x                                     0x14051F650
#define CListWnd__GetSeparatorRect_x                               0x14051F840
#define CListWnd__InsertLine_x                                     0x140520CB0
#define CListWnd__RemoveLine_x                                     0x1405212D0
#define CListWnd__SetColors_x                                      0x1405216A0
#define CListWnd__SetColumnJustification_x                         0x1405216C0
#define CListWnd__SetColumnLabel_x                                 0x140521740
#define CListWnd__SetColumnWidth_x                                 0x1405218E0
#define CListWnd__SetCurSel_x                                      0x1405219B0
#define CListWnd__SetItemColor_x                                   0x140521C20
#define CListWnd__SetItemData_x                                    0x140521CC0
#define CListWnd__SetItemText_x                                    0x140521F00
#define CListWnd__Sort_x                                           0x140522310
#define CListWnd__ToggleSel_x                                      0x140522480
#define CListWnd__SetColumnsSizable_x                              0x140521930
#define CListWnd__SetItemWnd_x                                     0x140522030
#define CListWnd__GetItemWnd_x                                     0x14051F5E0
#define CListWnd__SetItemIcon_x                                    0x140521D00
#define CListWnd__CalculateCustomWindowPositions_x                 0x14051B2A0
#define CListWnd__SetVScrollPos_x                                  0x140522270

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D6C70

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407B3170
#define MapViewMap__Clear_x                                        0x1403D87F0
#define MapViewMap__SetZoom_x                                      0x1403DEDB0
#define MapViewMap__HandleLButtonDown_x                            0x1403DB8F0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404002A0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140405E50
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140407E70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140409C90
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404090B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14040DA20

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405B0C10
#define CPacketScrambler__hton_x                                   0x1405B0C00

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405401F0
#define CSidlManagerBase__FindAnimation1_x                         0x140540130
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140540820
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405405D0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053F530
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053F4C0
#define CSidlManagerBase__CreateXWnd_x                             0x14053EB00

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140470470
#define CSidlManager__CreateXWnd_x                                 0x140470630

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140537490
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405375A0
#define CSidlScreenWnd__ConvertToRes_x                             0x140563BF0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405376D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140536D30
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140536C80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140536F50
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140537CA0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140537ED0
#define CSidlScreenWnd__GetChildItem_x                             0x140538070
#define CSidlScreenWnd__GetSidlPiece_x                             0x140538290
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140529DB0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140538600
#define CSidlScreenWnd__LoadIniInfo_x                              0x140538970
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140539210
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140539AC0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C13758
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053A0E0
#define CSidlScreenWnd__StoreIniVis_x                              0x14053A8C0
#define CSidlScreenWnd__vftable_x                                  0x1407D7728
#define CSidlScreenWnd__WndNotification_x                          0x14053A910

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D3C20 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D4020 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D3F60
#define CSkillMgr__IsActivatedSkill_x                              0x1402D43C0
#define CSkillMgr__IsCombatSkill_x                                 0x1402D4400

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14048D760
#define CSliderWnd__SetValue_x                                     0x140549040
#define CSliderWnd__SetNumTicks_x                                  0x140548EC0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140477910

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140551580
#define CStmlWnd__CalculateHSBRange_x                              0x140529770
#define CStmlWnd__CalculateVSBRange_x                              0x1405524A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140552F20
#define CStmlWnd__ForceParseNow_x                                  0x140552FC0
#define CStmlWnd__GetVisibleText_x                                 0x1405536A0
#define CStmlWnd__MakeStmlColorTag_x                               0x140555430
#define CStmlWnd__MakeWndNotificationTag_x                         0x140555470
#define CStmlWnd__SetSTMLText_x                                    0x14055C450
#define CStmlWnd__StripFirstSTMLLines_x                            0x14055C600
#define CStmlWnd__UpdateHistoryString_x                            0x14055C990

// CTabWnd
#define CTabWnd__Draw_x                                            0x14054E070
#define CTabWnd__DrawCurrentPage_x                                 0x14054E110
#define CTabWnd__DrawTab_x                                         0x14054E4E0
#define CTabWnd__GetTabRect_x                                      0x14054EB40
#define CTabWnd__InsertPage_x                                      0x14054EE10
#define CTabWnd__RemovePage_x                                      0x14054F0A0
#define CTabWnd__SetPage_x                                         0x14054F200
#define CTabWnd__UpdatePage_x                                      0x14054F500

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14054DC70
#define CPageWnd__SetTabText_x                                     0x14054DCE0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DBE0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DFF0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405235D0
#define CTextureFont__DrawWrappedText1_x                           0x1405234E0
#define CTextureFont__DrawWrappedText2_x                           0x140523700
#define CTextureFont__GetTextExtent_x                              0x140523AB0
#define CTextureFont__GetHeight_x                                  0x140523A70

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140562350

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405167F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140A4A5D0
#define CXStr__gCXStrAccess_x                                      0x140C12D18

// CXWnd
#define CXWnd__BringToTop_x                                        0x140525020
#define CXWnd__ClrFocus_x                                          0x140525260
#define CXWnd__Destroy_x                                           0x1405253A0
#define CXWnd__DoAllDrawing_x                                      0x1405254A0
#define CXWnd__DrawColoredRect_x                                   0x140525C60
#define CXWnd__DrawTooltip_x                                       0x1405272D0
#define CXWnd__DrawTooltipAtPoint_x                                0x140527380
#define CXWnd__GetChildItem_x                                      0x140527C80
#define CXWnd__GetChildWndAt_x                                     0x140527D40
#define CXWnd__GetClientClipRect_x                                 0x140527EB0
#define CXWnd__GetRelativeRect_x                                   0x1405298A0
#define CXWnd__GetScreenClipRect_x                                 0x1405299B0
#define CXWnd__GetScreenRect_x                                     0x140529B30
#define CXWnd__GetTooltipRect_x                                    0x140529CB0
#define CXWnd__IsActive_x                                          0x14052A230
#define CXWnd__IsDescendantOf_x                                    0x14052A260
#define CXWnd__IsReallyVisible_x                                   0x14052A2D0
#define CXWnd__IsType_x                                            0x14052A310
#define CXWnd__Minimize_x                                          0x14052A410
#define CXWnd__ProcessTransition_x                                 0x14052B410
#define CXWnd__Refade_x                                            0x14052B510
#define CXWnd__Resize_x                                            0x14052B530
#define CXWnd__Right_x                                             0x14052B5D0
#define CXWnd__SetFocus_x                                          0x14052B990
#define CXWnd__SetFont_x                                           0x14052B9E0
#define CXWnd__SetKeyTooltip_x                                     0x14052BAE0
#define CXWnd__SetMouseOver_x                                      0x14052BC20
#define CXWnd__SetParent_x                                         0x14052BCA0
#define CXWnd__StartFade_x                                         0x14052C0E0
#define CXWnd__vftable_x                                           0x1407D6E38
#define CXWnd__CXWnd_x                                             0x140523BD0
#define CXWnd__dCXWnd_x                                            0x140524510

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140568DC0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14052D8E0
#define CXWndManager__DrawWindows_x                                0x14052DA10
#define CXWndManager__GetKeyboardFlags_x                           0x14052E0D0
#define CXWndManager__HandleKeyboardMsg_x                          0x14052E110
#define CXWndManager__RemoveWnd_x                                  0x140531490

// CDBStr
#define CDBStr__GetString_x                                        0x140150120

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B9B00

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1BB0
#define CCharacterListWnd__EnterWorld_x                            0x1400A08E0
#define CCharacterListWnd__Quit_x                                  0x1400A1B90
#define CCharacterListWnd__UpdateList_x                            0x1400A28B0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058A100
#define ItemBase__CreateItemTagString_x                            0x14058AAC0
#define ItemBase__GetImageNum_x                                    0x14058CC00
#define ItemBase__GetItemValue_x                                   0x14058EAA0
#define ItemBase__IsEmpty_x                                        0x1405905E0
#define ItemBase__IsKeyRingItem_x                                  0x140590CB0
#define ItemBase__ValueSellMerchant_x                              0x140594FC0
#define ItemClient__CanDrop_x                                      0x140263EB0
#define ItemClient__CanGoInBag_x                                   0x140263FE0
#define ItemClient__CreateItemClient_x                             0x1402642A0
#define ItemClient__dItemClient_x                                  0x140263D10

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016EF50
#define EQ_LoadingS__Array_x                                       0x140A36A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A0930
#define PcBase__GetCombatAbility_x                                 0x1405A0F80
#define PcBase__GetCombatAbilityTimer_x                            0x1405A1020
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A1730
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A1F90
#define PcClient__AlertInventoryChanged_x                          0x140284A60
#define PcClient__GetConLevel_x                                    0x140284F30  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140287800
#define PcClient__HasLoreItem_x                                    0x140288890
#define PcZoneClient__GetItemRecastTimer_x                         0x140294700
#define PcZoneClient__RemoveMyAffect_x                             0x140296DA0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D6690  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D6700  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D6810  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D6770  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020D850  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014AA30

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405FD900
#define PlayerBase__CanSee1_x                                      0x1405FD9D0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405FDF00
#define PlayerBase__HasProperty_x                                  0x1405FE120
#define PlayerBase__IsTargetable_x                                 0x1405FE1E0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A2960
#define PlayerClient__GetPcClient_x                                0x1402A4EF0
#define PlayerClient__PlayerClient_x                               0x14029BB90
#define PlayerClient__SetNameSpriteState_x                         0x1402A8320
#define PlayerClient__SetNameSpriteTint_x                          0x1402A92C0
#define PlayerZoneClient__ChangeHeight_x                           0x1402B6EC0
#define PlayerZoneClient__DoAttack_x                               0x1402B7BA0
#define PlayerZoneClient__GetLevel_x                               0x1402BB120
#define PlayerZoneClient__IsValidTeleport_x                        0x140210600
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E2C0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B0B60  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B0B90  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B0C40
#define PlayerManagerClient__CreatePlayer_x                        0x1402B0550
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FD580

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140269260
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140268E60
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140268ED0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402691F0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140269380
#define KeypressHandler__HandleKeyUp_x                             0x140269460
#define KeypressHandler__SaveKeymapping_x                          0x140269100  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B7700  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B22B0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028DDA0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140292D40
#define PcZoneClient__GetPcSkillLimit_x                            0x140294C60
#define PcZoneClient__RemovePetEffect_x                            0x140296EA0
#define PcZoneClient__HasAlternateAbility_x                        0x1402956D0
#define PcZoneClient__CanEquipItem_x                               0x140291110
#define PcZoneClient__GetItemByID_x                                0x140293CB0
#define PcZoneClient__RemoveBuffEffect_x                           0x140296C50
#define PcZoneClient__BandolierSwap_x                              0x1402902D0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140294BB0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402150C0

// IconCache
#define IconCache__GetIcon_x                                       0x1403616E0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140358590
#define CContainerMgr__CloseContainer_x                            0x140357F50
#define CContainerMgr__OpenExperimentContainer_x                   0x1403588F0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140437770

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025C7D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403CAE40
#define CLootWnd__RequestLootSlot_x                                0x1403CBE20

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A080
#define EQ_Spell__SpellAffects_x                                   0x14019B320
#define EQ_Spell__SpellAffectBase_x                                0x14019B280
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA500
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA4B0
#define EQ_Spell__IsSPAStacking_x                                  0x14019AF40
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019AB00
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019A3E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400930E0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404914C0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140491500
#define CTargetWnd__RefreshTargetBuffs_x                           0x140490A10
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048FFD0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404985E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401473C0
#define CTaskManager__GetTaskStatus_x                              0x1401474D0
#define CTaskManager__GetElementDescription_x                      0x140147050

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401983E0
#define EqSoundManager__PlayScriptMp3_x                            0x1401971E0
#define EqSoundManager__SoundAssistPlay_x                          0x1402DA420  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DA750  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14054D2D0
#define CTextureAnimation__SetCurCell_x                            0x14054D5E0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025AA90

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D1640
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D16C0
#define CharacterBase__IsExpansionFlag_x                           0x1401B9C20

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140338950
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140339270
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033A6B0

// messages
#define msg_spell_worn_off_x                                       0x1401CD760
#define msg_new_text_x                                             0x1401C91C0
#define __msgTokenTextParam_x                                      0x1401C1030
#define msgTokenText_x                                             0x1401C0F50

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DBDE0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DBD00

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14060C000

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C4910

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035D8A0
#define CCursorAttachment__AttachToCursor1_x                       0x14035C4F0
#define CCursorAttachment__Deactivate_x                            0x14035DDA0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405605A0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140560790
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405607A0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112E30
#define CFindItemWnd__Update_x                                     0x140113030
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E070

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BA50
#define LootFiltersManager__GetItemFilterData_x                    0x14011C570
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CE10
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D0C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14041AC80

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406103D0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D3780

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140354B80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D54A0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D55B0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140376DC0
#define CGroupWnd__UpdateDisplay_x                                 0x140376B60

// ItemBase
#define ItemBase__IsLore_x                                         0x140590D80
#define ItemBase__IsLoreEquipped_x                                 0x140590ED0

#define MultipleItemMoveManager__ProcessMove_x                     0x14027B860

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020D9B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020D940
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020D980

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CE1C0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF180
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF530
#define FactionManagerClient__GetFactionStanding_x                 0x1400EE950
#define FactionManagerClient__GetMaxFaction_x                      0x1400EE950
#define FactionManagerClient__GetMinFaction_x                      0x1400EE800

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC60

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA840

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401777C0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140176B40
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401775E0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177560  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E04D0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CE1C0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D6900

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055F720

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F1730

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
