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

#define __ClientDate                                               20221110u
#define __ExpectedVersionDate                                     "Nov 10 2022"
#define __ExpectedVersionTime                                     "17:48:48"
#define __ActualVersionDate_x                                      0x140799BA8
#define __ActualVersionTime_x                                      0x140799B98
#define __ActualVersionBuild_x                                     0x140787E08

// Memory Protection
#define __MemChecker0_x                                            0x14026F620
#define __MemChecker1_x                                            0x1405076B0
#define __MemChecker4_x                                            0x14023F3F0
#define __EncryptPad0_x                                            0x140A415F0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7C9B0
#define instEQZoneInfo_x                                           0x140B7CBA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D9ED0
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
#define __CastRay_x                                                0x1401F8D70
#define __CastRay2_x                                               0x1401F8A80
#define __ConvertItemTags_x                                        0x1401F9170
#define __CleanItemTags_x                                          0x140058EB0
#define __CreateCascadeMenuItems_x                                 0x140152DE0
#define __DoesFileExist_x                                          0x14050BE90
#define __EQGetTime_x                                              0x140507C60
#define __ExecuteCmd_x                                             0x1401D1E10
#define __FixHeading_x                                             0x14060AEF0
#define __FlushDxKeyboard_x                                        0x1402EABA0
#define __get_bearing_x                                            0x1402023A0
#define __get_melee_range_x                                        0x140202490
#define __GetAnimationCache_x                                      0x1403615A0
#define __GetGaugeValueFromEQ_x                                    0x140480EF0
#define __GetLabelFromEQ_x                                         0x1404824A0
#define __GetXTargetType_x                                         0x14060C230   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14060AF70
#define __HelpPath_x                                               0x140BE7CE8   // Why?
#define __NewUIINI_x                                               0x14048D630   // Why?
#define __ProcessGameEvents_x                                      0x140234C30
#define __ProcessKeyboardEvents_x                                  0x1402EC3A0
#define __ProcessMouseEvents_x                                     0x140236060
#define __SaveColors_x                                             0x140162A60
#define __STMLToText_x                                             0x140535A00
#define __WndProc_x                                                0x1402E9320
#define CMemoryMappedFile__SetFile_x                               0x140746A70
#define DrawNetStatus_x                                            0x14027D1C0
#define Util__FastTime_x                                           0x140508960
#define __eq_delete_x                                              0x140611070
#define __eq_new_x                                                 0x14061116C
#define __CopyLayout_x                                             0x14026BAD0
#define __ThrottleFrameRate_x                                      0x140224A01
#define __ThrottleFrameRateEnd_x                                   0x140224A61

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB550
#define CAAWnd__Update_x                                           0x1402FB850
#define CAAWnd__UpdateSelected_x                                   0x1402FC810

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B900
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140777400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C170

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016D770
#define AltAdvManager__IsAbilityReady_x                            0x14016D9F0
#define AltAdvManager__GetAAById_x                                 0x14016D040
#define AltAdvManager__CanTrainAbility_x                           0x14016CE70
#define AltAdvManager__CanSeeAbility_x                             0x14016CB30

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3DD0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4B80
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4D90
#define CharacterZoneClient__CanUseItem_x                          0x1400B8930
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5680
#define CharacterZoneClient__CastSpell_x                           0x1400A5720
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4AA0
#define CharacterZoneClient__Cur_HP_x                              0x1400B9F60
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA120
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8720
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFBC0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE620  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9C10
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7EB0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C16E0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0610
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9DE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009A920
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C190
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0D10
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9C10
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C18F0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9E60
#define CharacterZoneClient__GetManaRegen_x                        0x1400C2380
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA070
#define CharacterZoneClient__GetModCap_x                           0x1400C9D30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA110
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA320
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F030
#define CharacterZoneClient__HasSkill_x                            0x1400C5560
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE630
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C97C0
#define CharacterZoneClient__Max_Endurance_x                       0x140295B10  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9B00
#define CharacterZoneClient__Max_Mana_x                            0x140295D00  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400C9FC0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1B20
#define CharacterZoneClient__SpellDuration_x                       0x1400B2700
#define CharacterZoneClient__TotalEffect_x                         0x1400B38E0
#define CharacterZoneClient__UseSkill_x                            0x1400CF570


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140319690

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403237C0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031F760
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031E800

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140325E70

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D72C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140346700
#define CChatWindowManager__InitContextMenu_x                      0x140346890
#define CChatWindowManager__FreeChatWindow_x                       0x140345950
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034D610
#define CChatWindowManager__CreateChatWindow_x                     0x140345290

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7350

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034E580
#define CChatWindow__Clear_x                                       0x14034F390
#define CChatWindow__WndNotification_x                             0x140350510
#define CChatWindow__AddHistory_x                                  0x14034EE90

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140546940
#define CContextMenu__RemoveMenuItem_x                             0x140546E50
#define CContextMenu__RemoveAllMenuItems_x                         0x140546E20
#define CContextMenu__CheckMenuItem_x                              0x140546C90
#define CContextMenu__SetMenuItem_x                                0x140546E70
#define CContextMenu__AddSeparator_x                               0x140546AA0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405474C0
#define CContextMenuManager__RemoveMenu_x                          0x140547A40
#define CContextMenuManager__PopupMenu_x                           0x1405477C0
#define CContextMenuManager__Flush_x                               0x140547540
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035B610

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D3BA0
#define CChatService__GetFriendName_x                              0x1405D3BB0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140542AE0
#define CComboWnd__Draw_x                                          0x140542BE0
#define CComboWnd__GetCurChoice_x                                  0x140542EC0  // unused
#define CComboWnd__GetListRect_x                                   0x140542F60
#define CComboWnd__InsertChoice_x                                  0x1405432A0
#define CComboWnd__SetColors_x                                     0x140543630
#define CComboWnd__SetChoice_x                                     0x1405435F0
#define CComboWnd__GetItemCount_x                                  0x140542F50
#define CComboWnd__GetCurChoiceText_x                              0x140542F00  // unused
#define CComboWnd__GetChoiceText_x                                 0x140542E90
#define CComboWnd__InsertChoiceAtIndex_x                           0x140543360

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140359680
#define CContainerWnd__SetContainer_x                              0x14035A430
#define CContainerWnd__vftable_x                                   0x1407A7AD8

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC42D4
#define CDisplay__ZoneMainUI_x                                     0x14055E270
#define CDisplay__PreZoneMainUI_x                                  0x14015F9E0
#define CDisplay__CleanGameUI_x                                    0x140151EE0
#define CDisplay__GetClickedActor_x                                0x140156070
#define CDisplay__GetUserDefinedColor_x                            0x140156B50
#define CDisplay__InitCharSelectUI_x                               0x140156E00
#define CDisplay__ReloadUI_x                                       0x140161D10
#define CDisplay__WriteTextHD2_x                                   0x140168C60
#define CDisplay__TrueDistance_x                                   0x140168940
#define CDisplay__SetViewActor_x                                   0x140165250
#define CDisplay__GetFloorHeight_x                                 0x1401562D0
#define CDisplay__ToggleScreenshotMode_x                           0x140168440
#define CDisplay__RealRender_World_x                               0x1401610B0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140569780
#define CEditWnd__DrawCaret_x                                      0x14054A380  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054A840
#define CEditWnd__GetCaretPt_x                                     0x14054AAC0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14054AB00
#define CEditWnd__GetDisplayString_x                               0x14054AD70
#define CEditWnd__GetHorzOffset_x                                  0x14054AFB0
#define CEditWnd__GetLineForPrintableChar_x                        0x14054B100
#define CEditWnd__GetSelStartPt_x                                  0x14054B3E0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14054B230
#define CEditWnd__PointFromPrintableChar_x                         0x14054BF90
#define CEditWnd__ReplaceSelection_x                               0x14054C340
#define CEditWnd__SelectableCharFromPoint_x                        0x14054C7E0
#define CEditWnd__SetEditable_x                                    0x14054CA70
#define CEditWnd__SetWindowText_x                                  0x14054CAA0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402259B0
#define CEverQuest__ClickedPlayer_x                                0x14021BC00
#define CEverQuest__CreateTargetIndicator_x                        0x14021C360
#define CEverQuest__DoTellWindow_x                                 0x1400D7060 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7920 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402273E0
#define CEverQuest__dsp_chat_x                                     0x1400D6B80 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140250AC0
#define CEverQuest__Emote_x                                        0x140227D40
#define CEverQuest__GetBodyTypeDesc_x                              0x140228AE0
#define CEverQuest__GetClassDesc_x                                 0x140228B40
#define CEverQuest__GetClassThreeLetterCode_x                      0x140228F10
#define CEverQuest__GetDeityDesc_x                                 0x1402291C0
#define CEverQuest__GetLangDesc_x                                  0x1402295F0
#define CEverQuest__GetRaceDesc_x                                  0x140229990
#define CEverQuest__InterpretCmd_x                                 0x14022B1F0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023FA70
#define CEverQuest__LMouseUp_x                                     0x14022CB90
#define CEverQuest__RightClickedOnPlayer_x                         0x14023D410
#define CEverQuest__RMouseUp_x                                     0x140236BE0
#define CEverQuest__SetGameState_x                                 0x140241F60
#define CEverQuest__UPCNotificationFlush_x                         0x1402475D0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022C810
#define CEverQuest__ReportSuccessfulHeal_x                         0x140237F10
#define CEverQuest__ReportSuccessfulHit_x                          0x140238C50

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036B8F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400946C0
#define CGuild__GetGuildName_x                                     0x140094700

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140388150

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402618A0
#define CHotButton__SetCheck_x                                     0x140261B30

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140397DC0
#define CInvSlotMgr__MoveItem_x                                    0x140397F10
#define CInvSlotMgr__SelectSlot_x                                  0x140399900

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140395A10
#define CInvSlot__SliderComplete_x                                 0x140396C40
#define CInvSlot__GetItemBase_x                                    0x140391AF0
#define CInvSlot__UpdateItem_x                                     0x1403970A0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140399F60
#define CInvSlotWnd__HandleLButtonUp_x                             0x14039AAB0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403BA430
#define CItemDisplayWnd__UpdateStrings_x                           0x1403BCD70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B7260
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B8970
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B9870

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14047DBD0
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047F7A0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B7170

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403B3A10

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x1401172A0

// CLabel
#define CLabel__UpdateText_x                                       0x1403C4130

// CListWnd
#define CListWnd__CListWnd_x                                       0x140519AE0
#define CListWnd__dCListWnd_x                                      0x140519F20
#define CListWnd__vftable_x                                        0x1407D66B0
#define CListWnd__AddColumn_x                                      0x14051A5C0
#define CListWnd__AddColumn1_x                                     0x14051A660
#define CListWnd__AddLine_x                                        0x14051A7C0
#define CListWnd__AddString_x                                      0x14051AD40
#define CListWnd__CalculateFirstVisibleLine_x                      0x14051B430
#define CListWnd__CalculateVSBRange_x                              0x14051B710
#define CListWnd__ClearSel_x                                       0x14051B8C0
#define CListWnd__ClearAllSel_x                                    0x14051B860
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14051B920
#define CListWnd__Compare_x                                        0x14051BAE0
#define CListWnd__Draw_x                                           0x14051BFB0
#define CListWnd__DrawColumnSeparators_x                           0x14051CB40
#define CListWnd__DrawHeader_x                                     0x14051CC00
#define CListWnd__DrawItem_x                                       0x14051D2C0
#define CListWnd__DrawLine_x                                       0x14051DC40
#define CListWnd__DrawSeparator_x                                  0x14051E100
#define CListWnd__EnableLine_x                                     0x14051E520
#define CListWnd__EnsureVisible_x                                  0x14051E580
#define CListWnd__ExtendSel_x                                      0x14051E680
#define CListWnd__GetColumnMinWidth_x                              0x14051E9B0
#define CListWnd__GetColumnWidth_x                                 0x14051EA30
#define CListWnd__GetCurSel_x                                      0x14051EB30
#define CListWnd__GetItemData_x                                    0x14051EEB0
#define CListWnd__GetItemHeight_x                                  0x14051EEF0
#define CListWnd__GetItemRect_x                                    0x14051F0B0
#define CListWnd__GetItemText_x                                    0x14051F350
#define CListWnd__GetSelList_x                                     0x14051F5A0
#define CListWnd__GetSeparatorRect_x                               0x14051F790
#define CListWnd__InsertLine_x                                     0x140520C00
#define CListWnd__RemoveLine_x                                     0x140521210
#define CListWnd__SetColors_x                                      0x1405215E0
#define CListWnd__SetColumnJustification_x                         0x140521600
#define CListWnd__SetColumnLabel_x                                 0x140521680
#define CListWnd__SetColumnWidth_x                                 0x140521820
#define CListWnd__SetCurSel_x                                      0x1405218F0
#define CListWnd__SetItemColor_x                                   0x140521B60
#define CListWnd__SetItemData_x                                    0x140521C00
#define CListWnd__SetItemText_x                                    0x140521E40
#define CListWnd__Sort_x                                           0x140522250
#define CListWnd__ToggleSel_x                                      0x1405223C0
#define CListWnd__SetColumnsSizable_x                              0x140521870
#define CListWnd__SetItemWnd_x                                     0x140521F70
#define CListWnd__GetItemWnd_x                                     0x14051F530
#define CListWnd__SetItemIcon_x                                    0x140521C40
#define CListWnd__CalculateCustomWindowPositions_x                 0x14051B200
#define CListWnd__SetVScrollPos_x                                  0x1405221B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D6BB0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407B3170
#define MapViewMap__Clear_x                                        0x1403D8720
#define MapViewMap__SetZoom_x                                      0x1403DECE0
#define MapViewMap__HandleLButtonDown_x                            0x1403DB820

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404001C0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140405D60
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140407D70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140409B90
#define CMerchantWnd__SelectBuySellSlot_x                          0x140408FB0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14040D910

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405B0C80
#define CPacketScrambler__hton_x                                   0x1405B0C70

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405401C0
#define CSidlManagerBase__FindAnimation1_x                         0x140540100
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405407F0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405405A0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053F500
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053F490
#define CSidlManagerBase__CreateXWnd_x                             0x14053EB00

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404703D0
#define CSidlManager__CreateXWnd_x                                 0x140470590

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140537580
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140537470
#define CSidlScreenWnd__ConvertToRes_x                             0x140563D30 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405376B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140536D10
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140536C60
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140536F30
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140537C80
#define CSidlScreenWnd__EnableIniStorage_x                         0x140537EB0
#define CSidlScreenWnd__GetChildItem_x                             0x140538040
#define CSidlScreenWnd__GetSidlPiece_x                             0x140538260
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140529CD0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405385D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140538940
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140539200
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140539AB0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C13758
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053A0C0
#define CSidlScreenWnd__StoreIniVis_x                              0x14053A8C0
#define CSidlScreenWnd__vftable_x                                  0x1407D7728
#define CSidlScreenWnd__WndNotification_x                          0x14053A910

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D3AE0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D3EE0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D3E20
#define CSkillMgr__IsActivatedSkill_x                              0x1402D4280
#define CSkillMgr__IsCombatSkill_x                                 0x1402D42C0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14048D6E0
#define CSliderWnd__SetValue_x                                     0x140549000
#define CSliderWnd__SetNumTicks_x                                  0x140548E80

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140477880

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140551700
#define CStmlWnd__CalculateHSBRange_x                              0x1405296A0
#define CStmlWnd__CalculateVSBRange_x                              0x140552620
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140553080
#define CStmlWnd__ForceParseNow_x                                  0x140553120
#define CStmlWnd__GetVisibleText_x                                 0x140553800
#define CStmlWnd__MakeStmlColorTag_x                               0x140555580
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405555C0
#define CStmlWnd__SetSTMLText_x                                    0x14055C5A0
#define CStmlWnd__StripFirstSTMLLines_x                            0x14055C750
#define CStmlWnd__UpdateHistoryString_x                            0x14055CAE0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14054E200
#define CTabWnd__DrawCurrentPage_x                                 0x14054E2A0
#define CTabWnd__DrawTab_x                                         0x14054E670
#define CTabWnd__GetTabRect_x                                      0x14054ECD0
#define CTabWnd__InsertPage_x                                      0x14054EFA0
#define CTabWnd__RemovePage_x                                      0x14054F220
#define CTabWnd__SetPage_x                                         0x14054F380
#define CTabWnd__UpdatePage_x                                      0x14054F680

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14054DC20
#define CPageWnd__SetTabText_x                                     0x14054DC90

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DC00  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E010


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140523510
#define CTextureFont__DrawWrappedText1_x                           0x140523420
#define CTextureFont__DrawWrappedText2_x                           0x140523640
#define CTextureFont__GetTextExtent_x                              0x1405239F0
#define CTextureFont__GetHeight_x                                  0x1405239B0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140562490

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140516750

// CXStr
#define CXStr__gFreeLists_x                                        0x140A4A5D0
#define CXStr__gCXStrAccess_x                                      0x140C12D18

// CXWnd
#define CXWnd__BringToTop_x                                        0x140524F40
#define CXWnd__ClrFocus_x                                          0x140525180
#define CXWnd__Destroy_x                                           0x1405252C0
#define CXWnd__DoAllDrawing_x                                      0x1405253D0
#define CXWnd__DrawColoredRect_x                                   0x140525B80
#define CXWnd__DrawTooltip_x                                       0x1405271E0
#define CXWnd__DrawTooltipAtPoint_x                                0x140527290
#define CXWnd__GetChildItem_x                                      0x140527B90
#define CXWnd__GetChildWndAt_x                                     0x140527C50
#define CXWnd__GetClientClipRect_x                                 0x140527DB0
#define CXWnd__GetRelativeRect_x                                   0x1405297E0
#define CXWnd__GetScreenClipRect_x                                 0x1405298E0
#define CXWnd__GetScreenRect_x                                     0x140529A60
#define CXWnd__GetTooltipRect_x                                    0x140529BD0
#define CXWnd__IsActive_x                                          0x14052A150
#define CXWnd__IsDescendantOf_x                                    0x14052A180
#define CXWnd__IsReallyVisible_x                                   0x14052A1F0
#define CXWnd__IsType_x                                            0x14052A230
#define CXWnd__Minimize_x                                          0x14052A330
#define CXWnd__ProcessTransition_x                                 0x14052B350
#define CXWnd__Refade_x                                            0x14052B450
#define CXWnd__Resize_x                                            0x14052B460
#define CXWnd__Right_x                                             0x14052B500
#define CXWnd__SetFocus_x                                          0x14052B8C0
#define CXWnd__SetFont_x                                           0x14052B910
#define CXWnd__SetKeyTooltip_x                                     0x14052BA10
#define CXWnd__SetMouseOver_x                                      0x14052BB40
#define CXWnd__SetParent_x                                         0x14052BBC0
#define CXWnd__StartFade_x                                         0x14052BFF0
#define CXWnd__vftable_x                                           0x1407D6E38
#define CXWnd__CXWnd_x                                             0x140523B10
#define CXWnd__dCXWnd_x                                            0x140524430

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140568F00

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14052D830
#define CXWndManager__DrawWindows_x                                0x14052D960
#define CXWndManager__GetKeyboardFlags_x                           0x14052E020
#define CXWndManager__HandleKeyboardMsg_x                          0x14052E060
#define CXWndManager__RemoveWnd_x                                  0x140531460

// CDBStr
#define CDBStr__GetString_x                                        0x1401500E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B9B70

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1BB0
#define CCharacterListWnd__EnterWorld_x                            0x1400A08E0
#define CCharacterListWnd__Quit_x                                  0x1400A1B90
#define CCharacterListWnd__UpdateList_x                            0x1400A28B0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058A220
#define ItemBase__CreateItemTagString_x                            0x14058AC10
#define ItemBase__GetImageNum_x                                    0x14058CDE0
#define ItemBase__GetItemValue_x                                   0x14058E9C0
#define ItemBase__IsEmpty_x                                        0x140590520
#define ItemBase__IsKeyRingItem_x                                  0x140590C30
#define ItemBase__ValueSellMerchant_x                              0x140594FF0
#define ItemClient__CanDrop_x                                      0x140263C80
#define ItemClient__CanGoInBag_x                                   0x140263DB0
#define ItemClient__CreateItemClient_x                             0x140264070
#define ItemClient__dItemClient_x                                  0x140263AE0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016EF10
#define EQ_LoadingS__Array_x                                       0x140A36A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A0970
#define PcBase__GetCombatAbility_x                                 0x1405A0FC0
#define PcBase__GetCombatAbilityTimer_x                            0x1405A1060
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A1770
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A1FD0
#define PcClient__AlertInventoryChanged_x                          0x140284820
#define PcClient__GetConLevel_x                                    0x140284CF0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402875B0
#define PcClient__HasLoreItem_x                                    0x140288630
#define PcZoneClient__GetItemRecastTimer_x                         0x1402944C0
#define PcZoneClient__RemoveMyAffect_x                             0x140296B60

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D6490  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D6500  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D6610  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D6570  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020D710  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014A9F0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405FD980
#define PlayerBase__CanSee1_x                                      0x1405FDA50
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405FDF80
#define PlayerBase__HasProperty_x                                  0x1405FE1A0
#define PlayerBase__IsTargetable_x                                 0x1405FE260
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A2720
#define PlayerClient__GetPcClient_x                                0x1402A4CB0
#define PlayerClient__PlayerClient_x                               0x14029B960
#define PlayerClient__SetNameSpriteState_x                         0x1402A80D0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A9070
#define PlayerZoneClient__ChangeHeight_x                           0x1402B6D70
#define PlayerZoneClient__DoAttack_x                               0x1402B7A50
#define PlayerZoneClient__GetLevel_x                               0x1402BAFD0
#define PlayerZoneClient__IsValidTeleport_x                        0x1402104C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E280

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B0A10  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B0A40  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B0AF0
#define PlayerManagerClient__CreatePlayer_x                        0x1402B0400
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FD600

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140269010
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140268C10
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140268C80
#define KeypressHandler__ClearCommandStateArray_x                  0x140268FA0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140269130
#define KeypressHandler__HandleKeyUp_x                             0x140269210
#define KeypressHandler__SaveKeymapping_x                          0x140268EB0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B7770  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B2320

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028DB40  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140292B00
#define PcZoneClient__GetPcSkillLimit_x                            0x140294A20
#define PcZoneClient__RemovePetEffect_x                            0x140296C60
#define PcZoneClient__HasAlternateAbility_x                        0x140295490
#define PcZoneClient__CanEquipItem_x                               0x140290ED0
#define PcZoneClient__GetItemByID_x                                0x140293A70
#define PcZoneClient__RemoveBuffEffect_x                           0x140296A10
#define PcZoneClient__BandolierSwap_x                              0x140290090
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140294970

// Doors
#define EQSwitch__UseSwitch_x                                      0x140214F80

// IconCache
#define IconCache__GetIcon_x                                       0x1403615D0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140358460
#define CContainerMgr__CloseContainer_x                            0x140357E20
#define CContainerMgr__OpenExperimentContainer_x                   0x1403587C0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140437680

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025C5D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403CAD90
#define CLootWnd__RequestLootSlot_x                                0x1403CBD70

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140199FF0
#define EQ_Spell__SpellAffects_x                                   0x14019B2A0
#define EQ_Spell__SpellAffectBase_x                                0x14019B200
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA500
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA4B0
#define EQ_Spell__IsSPAStacking_x                                  0x14019AEC0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019AA80
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019A360

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400930F0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140491400  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140491440
#define CTargetWnd__RefreshTargetBuffs_x                           0x140490950
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048FF00

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140498510  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140147390
#define CTaskManager__GetTaskStatus_x                              0x1401474A0
#define CTaskManager__GetElementDescription_x                      0x140147020

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198350
#define EqSoundManager__PlayScriptMp3_x                            0x140197150
#define EqSoundManager__SoundAssistPlay_x                          0x1402DA2E0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DA610  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14054D2A0
#define CTextureAnimation__SetCurCell_x                            0x14054D5B0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025A890

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D16C0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D1740
#define CharacterBase__IsExpansionFlag_x                           0x1401B99B0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140338840
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140339180
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033A5B0

// messages
#define msg_spell_worn_off_x                                       0x1401CD560
#define msg_new_text_x                                             0x1401C8FB0
#define __msgTokenTextParam_x                                      0x1401C0DE0
#define msgTokenText_x                                             0x1401C0D00

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DBCA0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DBBC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14060C610

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C4870

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035D790
#define CCursorAttachment__AttachToCursor1_x                       0x14035C3E0
#define CCursorAttachment__Deactivate_x                            0x14035DC90

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405606E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405608D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405608E0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112E40
#define CFindItemWnd__Update_x                                     0x140113040
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E080

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BA30
#define LootFiltersManager__GetItemFilterData_x                    0x14011C540
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CDE0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D090

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14041AB80

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406109E0
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D3640

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140354A30

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D5630  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D5520  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140376C90
#define CGroupWnd__UpdateDisplay_x                                 0x140376A30

// ItemBase
#define ItemBase__IsLore_x                                         0x140590D00
#define ItemBase__IsLoreEquipped_x                                 0x140590E60

#define MultipleItemMoveManager__ProcessMove_x                     0x14027B610

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020D870
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020D800
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020D840

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CE060

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
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177790
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140176B10
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401775B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177530  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E0390

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CE060

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D6700

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055F860

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F15E0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
