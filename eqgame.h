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

#define __ClientDate                                               20221108u
#define __ExpectedVersionDate                                     "Nov  8 2022"
#define __ExpectedVersionTime                                     "13:11:29"
#define __ActualVersionDate_x                                      0x140799BA8
#define __ActualVersionTime_x                                      0x140799B98
#define __ActualVersionBuild_x                                     0x140787E08

// Memory Protection
#define __MemChecker0_x                                            0x14026F730
#define __MemChecker1_x                                            0x140507880
#define __MemChecker4_x                                            0x14023F4B0
#define __EncryptPad0_x                                            0x140A415F0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7C9B0
#define instEQZoneInfo_x                                           0x140B7CBA4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D9F90
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
#define __CastRay_x                                                0x1401F8E30
#define __CastRay2_x                                               0x1401F8B40
#define __ConvertItemTags_x                                        0x1401F9230
#define __CleanItemTags_x                                          0x140058EB0
#define __CreateCascadeMenuItems_x                                 0x140152E50
#define __DoesFileExist_x                                          0x14050C060
#define __EQGetTime_x                                              0x140507E30
#define __ExecuteCmd_x                                             0x1401D1ED0
#define __FixHeading_x                                             0x14060B180
#define __FlushDxKeyboard_x                                        0x1402EAC80
#define __get_bearing_x                                            0x140202460
#define __get_melee_range_x                                        0x140202550
#define __GetAnimationCache_x                                      0x140361720
#define __GetGaugeValueFromEQ_x                                    0x1404810E0
#define __GetLabelFromEQ_x                                         0x140482690
#define __GetXTargetType_x                                         0x14060C4C0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14060B200
#define __HelpPath_x                                               0x140BE7CE8   // Why?
#define __NewUIINI_x                                               0x14048D800   // Why?
#define __ProcessGameEvents_x                                      0x140234CF0
#define __ProcessKeyboardEvents_x                                  0x1402EC480
#define __ProcessMouseEvents_x                                     0x140236120
#define __SaveColors_x                                             0x140162AD0
#define __STMLToText_x                                             0x140535C90
#define __WndProc_x                                                0x1402E9400
#define CMemoryMappedFile__SetFile_x                               0x140746D00
#define DrawNetStatus_x                                            0x14027D2D0
#define Util__FastTime_x                                           0x140508B30
#define __eq_delete_x                                              0x140611300
#define __eq_new_x                                                 0x1406113FC
#define __CopyLayout_x                                             0x14026BBD0
#define __ThrottleFrameRate_x                                      0x140224AC1
#define __ThrottleFrameRateEnd_x                                   0x140224B21

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402FB640
#define CAAWnd__Update_x                                           0x1402FB940
#define CAAWnd__UpdateSelected_x                                   0x1402FC900

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B8F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400740F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140777400
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007C160

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016D7E0
#define AltAdvManager__IsAbilityReady_x                            0x14016DA60
#define AltAdvManager__GetAAById_x                                 0x14016D0B0
#define AltAdvManager__CanTrainAbility_x                           0x14016CEE0
#define AltAdvManager__CanSeeAbility_x                             0x14016CBA0

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
#define CharacterZoneClient__Max_Endurance_x                       0x140295C20  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9B00
#define CharacterZoneClient__Max_Mana_x                            0x140295E10  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400C9FC0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1B20
#define CharacterZoneClient__SpellDuration_x                       0x1400B2700
#define CharacterZoneClient__TotalEffect_x                         0x1400B38E0
#define CharacterZoneClient__UseSkill_x                            0x1400CF570


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403197D0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140323910

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031F8A0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031E940

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140325FC0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D72C0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140346890
#define CChatWindowManager__InitContextMenu_x                      0x140346A20
#define CChatWindowManager__FreeChatWindow_x                       0x140345AE0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14034D7B0
#define CChatWindowManager__CreateChatWindow_x                     0x140345420

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7370

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034E720
#define CChatWindow__Clear_x                                       0x14034F530
#define CChatWindow__WndNotification_x                             0x1403506B0
#define CChatWindow__AddHistory_x                                  0x14034F030

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140546C40
#define CContextMenu__RemoveMenuItem_x                             0x140547150
#define CContextMenu__RemoveAllMenuItems_x                         0x140547120
#define CContextMenu__CheckMenuItem_x                              0x140546F90
#define CContextMenu__SetMenuItem_x                                0x140547170
#define CContextMenu__AddSeparator_x                               0x140546DA0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405477C0
#define CContextMenuManager__RemoveMenu_x                          0x140547D40
#define CContextMenuManager__PopupMenu_x                           0x140547AC0
#define CContextMenuManager__Flush_x                               0x140547840
#define CContextMenuManager__CreateDefaultMenu_x                   0x14035B790

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405D3AD0
#define CChatService__GetFriendName_x                              0x1405D3AE0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140542DC0
#define CComboWnd__Draw_x                                          0x140542EC0
#define CComboWnd__GetCurChoice_x                                  0x1405431A0  // unused
#define CComboWnd__GetListRect_x                                   0x140543240
#define CComboWnd__InsertChoice_x                                  0x140543580
#define CComboWnd__SetColors_x                                     0x140543910
#define CComboWnd__SetChoice_x                                     0x1405438D0
#define CComboWnd__GetItemCount_x                                  0x140543230
#define CComboWnd__GetCurChoiceText_x                              0x1405431E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140543170
#define CComboWnd__InsertChoiceAtIndex_x                           0x140543640

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140359820
#define CContainerWnd__SetContainer_x                              0x14035A5B0
#define CContainerWnd__vftable_x                                   0x1407A7AD8

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC42D4
#define CDisplay__ZoneMainUI_x                                     0x14055E400
#define CDisplay__PreZoneMainUI_x                                  0x14015FA50
#define CDisplay__CleanGameUI_x                                    0x140151F50
#define CDisplay__GetClickedActor_x                                0x1401560E0
#define CDisplay__GetUserDefinedColor_x                            0x140156BC0
#define CDisplay__InitCharSelectUI_x                               0x140156E70
#define CDisplay__ReloadUI_x                                       0x140161D80
#define CDisplay__WriteTextHD2_x                                   0x140168CD0
#define CDisplay__TrueDistance_x                                   0x1401689B0
#define CDisplay__SetViewActor_x                                   0x1401652C0
#define CDisplay__GetFloorHeight_x                                 0x140156340
#define CDisplay__ToggleScreenshotMode_x                           0x1401684B0
#define CDisplay__RealRender_World_x                               0x140161120

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140569910
#define CEditWnd__DrawCaret_x                                      0x14054A680  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14054AB40
#define CEditWnd__GetCaretPt_x                                     0x14054ADC0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14054AE00
#define CEditWnd__GetDisplayString_x                               0x14054B070
#define CEditWnd__GetHorzOffset_x                                  0x14054B2B0
#define CEditWnd__GetLineForPrintableChar_x                        0x14054B400
#define CEditWnd__GetSelStartPt_x                                  0x14054B6E0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14054B530
#define CEditWnd__PointFromPrintableChar_x                         0x14054C290
#define CEditWnd__ReplaceSelection_x                               0x14054C640
#define CEditWnd__SelectableCharFromPoint_x                        0x14054CAE0
#define CEditWnd__SetEditable_x                                    0x14054CD70
#define CEditWnd__SetWindowText_x                                  0x14054CDA0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140225A70
#define CEverQuest__ClickedPlayer_x                                0x14021BCC0
#define CEverQuest__CreateTargetIndicator_x                        0x14021C420
#define CEverQuest__DoTellWindow_x                                 0x1400D7080 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7940 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402274A0
#define CEverQuest__dsp_chat_x                                     0x1400D6BA0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140250B80
#define CEverQuest__Emote_x                                        0x140227E00
#define CEverQuest__GetBodyTypeDesc_x                              0x140228BA0
#define CEverQuest__GetClassDesc_x                                 0x140228C00
#define CEverQuest__GetClassThreeLetterCode_x                      0x140228FD0
#define CEverQuest__GetDeityDesc_x                                 0x140229280
#define CEverQuest__GetLangDesc_x                                  0x1402296B0
#define CEverQuest__GetRaceDesc_x                                  0x140229A50
#define CEverQuest__InterpretCmd_x                                 0x14022B2B0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023FB30
#define CEverQuest__LMouseUp_x                                     0x14022CC50
#define CEverQuest__RightClickedOnPlayer_x                         0x14023D4D0
#define CEverQuest__RMouseUp_x                                     0x140236CA0
#define CEverQuest__SetGameState_x                                 0x140242020
#define CEverQuest__UPCNotificationFlush_x                         0x140247690 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022C8D0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140237FD0
#define CEverQuest__ReportSuccessfulHit_x                          0x140238D10

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x14036BA60

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400946B0
#define CGuild__GetGuildName_x                                     0x1400946F0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140388330

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140261950
#define CHotButton__SetCheck_x                                     0x140261BE0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140397FB0
#define CInvSlotMgr__MoveItem_x                                    0x140398100
#define CInvSlotMgr__SelectSlot_x                                  0x140399AF0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140395C10
#define CInvSlot__SliderComplete_x                                 0x140396E40
#define CInvSlot__GetItemBase_x                                    0x140391CF0
#define CInvSlot__UpdateItem_x                                     0x1403972A0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x14039A150
#define CInvSlotWnd__HandleLButtonUp_x                             0x14039ACA0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403BA600
#define CItemDisplayWnd__UpdateStrings_x                           0x1403BCF30
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B7420
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B8B30
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B9A40

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x14047DDD0
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047F9A0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B7330

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403B3BD0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117290

// CLabel
#define CLabel__UpdateText_x                                       0x1403C4300

// CListWnd
#define CListWnd__CListWnd_x                                       0x140519CB0
#define CListWnd__dCListWnd_x                                      0x14051A0F0
#define CListWnd__vftable_x                                        0x1407D66B0
#define CListWnd__AddColumn_x                                      0x14051A790
#define CListWnd__AddColumn1_x                                     0x14051A830
#define CListWnd__AddLine_x                                        0x14051A990
#define CListWnd__AddString_x                                      0x14051AF10
#define CListWnd__CalculateFirstVisibleLine_x                      0x14051B600
#define CListWnd__CalculateVSBRange_x                              0x14051B8E0
#define CListWnd__ClearSel_x                                       0x14051BA90
#define CListWnd__ClearAllSel_x                                    0x14051BA30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14051BAF0
#define CListWnd__Compare_x                                        0x14051BCB0
#define CListWnd__Draw_x                                           0x14051C180
#define CListWnd__DrawColumnSeparators_x                           0x14051CD20
#define CListWnd__DrawHeader_x                                     0x14051CDE0
#define CListWnd__DrawItem_x                                       0x14051D4A0
#define CListWnd__DrawLine_x                                       0x14051DE20
#define CListWnd__DrawSeparator_x                                  0x14051E2E0
#define CListWnd__EnableLine_x                                     0x14051E700
#define CListWnd__EnsureVisible_x                                  0x14051E760
#define CListWnd__ExtendSel_x                                      0x14051E860
#define CListWnd__GetColumnMinWidth_x                              0x14051EB90
#define CListWnd__GetColumnWidth_x                                 0x14051EC10
#define CListWnd__GetCurSel_x                                      0x14051ED10
#define CListWnd__GetItemData_x                                    0x14051F090
#define CListWnd__GetItemHeight_x                                  0x14051F0D0
#define CListWnd__GetItemRect_x                                    0x14051F290
#define CListWnd__GetItemText_x                                    0x14051F530
#define CListWnd__GetSelList_x                                     0x14051F780
#define CListWnd__GetSeparatorRect_x                               0x14051F970
#define CListWnd__InsertLine_x                                     0x140520DF0
#define CListWnd__RemoveLine_x                                     0x140521410
#define CListWnd__SetColors_x                                      0x1405217E0
#define CListWnd__SetColumnJustification_x                         0x140521800
#define CListWnd__SetColumnLabel_x                                 0x140521880
#define CListWnd__SetColumnWidth_x                                 0x140521A20
#define CListWnd__SetCurSel_x                                      0x140521AF0
#define CListWnd__SetItemColor_x                                   0x140521D60
#define CListWnd__SetItemData_x                                    0x140521E00
#define CListWnd__SetItemText_x                                    0x140522040
#define CListWnd__Sort_x                                           0x140522450
#define CListWnd__ToggleSel_x                                      0x1405225C0
#define CListWnd__SetColumnsSizable_x                              0x140521A70
#define CListWnd__SetItemWnd_x                                     0x140522170
#define CListWnd__GetItemWnd_x                                     0x14051F710
#define CListWnd__SetItemIcon_x                                    0x140521E40
#define CListWnd__CalculateCustomWindowPositions_x                 0x14051B3D0
#define CListWnd__SetVScrollPos_x                                  0x1405223B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D6DA0

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407B3170
#define MapViewMap__Clear_x                                        0x1403D8920
#define MapViewMap__SetZoom_x                                      0x1403DEEE0
#define MapViewMap__HandleLButtonDown_x                            0x1403DBA20

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140400380  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140405F30
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140407F50
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140409D70
#define CMerchantWnd__SelectBuySellSlot_x                          0x140409190
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14040DB00

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405B0BB0
#define CPacketScrambler__hton_x                                   0x1405B0BA0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140540490
#define CSidlManagerBase__FindAnimation1_x                         0x1405403D0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140540AC0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140540870
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053F7D0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053F760
#define CSidlManagerBase__CreateXWnd_x                             0x14053EDC0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404705D0
#define CSidlManager__CreateXWnd_x                                 0x140470790

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140537810
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140537700
#define CSidlScreenWnd__ConvertToRes_x                             0x140563EC0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140537940
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140536FA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140536EF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405371C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140537F10
#define CSidlScreenWnd__EnableIniStorage_x                         0x140538140
#define CSidlScreenWnd__GetChildItem_x                             0x1405382E0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140538500
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140529F30 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140538870
#define CSidlScreenWnd__LoadIniInfo_x                              0x140538BE0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405394A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140539D50
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C13758
#define CSidlScreenWnd__StoreIniInfo_x                             0x14053A380
#define CSidlScreenWnd__StoreIniVis_x                              0x14053AB80
#define CSidlScreenWnd__vftable_x                                  0x1407D7728
#define CSidlScreenWnd__WndNotification_x                          0x14053ABD0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D3BC0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D3FC0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D3F00
#define CSkillMgr__IsActivatedSkill_x                              0x1402D4360
#define CSkillMgr__IsCombatSkill_x                                 0x1402D43A0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14048D880
#define CSliderWnd__SetValue_x                                     0x140549300
#define CSliderWnd__SetNumTicks_x                                  0x140549180

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140477A80

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140551850
#define CStmlWnd__CalculateHSBRange_x                              0x1405298F0
#define CStmlWnd__CalculateVSBRange_x                              0x140552770
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405531F0
#define CStmlWnd__ForceParseNow_x                                  0x140553290
#define CStmlWnd__GetVisibleText_x                                 0x140553970
#define CStmlWnd__MakeStmlColorTag_x                               0x140555700
#define CStmlWnd__MakeWndNotificationTag_x                         0x140555740
#define CStmlWnd__SetSTMLText_x                                    0x14055C720
#define CStmlWnd__StripFirstSTMLLines_x                            0x14055C8D0
#define CStmlWnd__UpdateHistoryString_x                            0x14055CC60

// CTabWnd
#define CTabWnd__Draw_x                                            0x14054E340
#define CTabWnd__DrawCurrentPage_x                                 0x14054E3E0
#define CTabWnd__DrawTab_x                                         0x14054E7B0
#define CTabWnd__GetTabRect_x                                      0x14054EE10
#define CTabWnd__InsertPage_x                                      0x14054F0E0
#define CTabWnd__RemovePage_x                                      0x14054F370
#define CTabWnd__SetPage_x                                         0x14054F4D0
#define CTabWnd__UpdatePage_x                                      0x14054F7D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14054DF40
#define CPageWnd__SetTabText_x                                     0x14054DFB0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008DBF0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008E000


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140523710
#define CTextureFont__DrawWrappedText1_x                           0x140523620
#define CTextureFont__DrawWrappedText2_x                           0x140523840
#define CTextureFont__GetTextExtent_x                              0x140523BF0
#define CTextureFont__GetHeight_x                                  0x140523BB0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140562620

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140516920

// CXStr
#define CXStr__gFreeLists_x                                        0x140A4A5D0
#define CXStr__gCXStrAccess_x                                      0x140C12D18

// CXWnd
#define CXWnd__BringToTop_x                                        0x140525160
#define CXWnd__ClrFocus_x                                          0x1405253A0
#define CXWnd__Destroy_x                                           0x1405254E0
#define CXWnd__DoAllDrawing_x                                      0x1405255F0
#define CXWnd__DrawColoredRect_x                                   0x140525DB0
#define CXWnd__DrawTooltip_x                                       0x140527420
#define CXWnd__DrawTooltipAtPoint_x                                0x1405274D0
#define CXWnd__GetChildItem_x                                      0x140527DD0
#define CXWnd__GetChildWndAt_x                                     0x140527E90
#define CXWnd__GetClientClipRect_x                                 0x140528000
#define CXWnd__GetRelativeRect_x                                   0x140529A20
#define CXWnd__GetScreenClipRect_x                                 0x140529B30
#define CXWnd__GetScreenRect_x                                     0x140529CB0
#define CXWnd__GetTooltipRect_x                                    0x140529E30
#define CXWnd__IsActive_x                                          0x14052A3B0
#define CXWnd__IsDescendantOf_x                                    0x14052A3E0
#define CXWnd__IsReallyVisible_x                                   0x14052A450
#define CXWnd__IsType_x                                            0x14052A490
#define CXWnd__Minimize_x                                          0x14052A590
#define CXWnd__ProcessTransition_x                                 0x14052B5B0
#define CXWnd__Refade_x                                            0x14052B6A0
#define CXWnd__Resize_x                                            0x14052B6B0
#define CXWnd__Right_x                                             0x14052B750
#define CXWnd__SetFocus_x                                          0x14052BB20
#define CXWnd__SetFont_x                                           0x14052BB70
#define CXWnd__SetKeyTooltip_x                                     0x14052BC70
#define CXWnd__SetMouseOver_x                                      0x14052BDB0
#define CXWnd__SetParent_x                                         0x14052BE30
#define CXWnd__StartFade_x                                         0x14052C270
#define CXWnd__vftable_x                                           0x1407D6E38
#define CXWnd__CXWnd_x                                             0x140523D10
#define CXWnd__dCXWnd_x                                            0x140524640

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140569090

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14052DA90
#define CXWndManager__DrawWindows_x                                0x14052DBC0
#define CXWndManager__GetKeyboardFlags_x                           0x14052E280
#define CXWndManager__HandleKeyboardMsg_x                          0x14052E2C0
#define CXWndManager__RemoveWnd_x                                  0x140531720

// CDBStr
#define CDBStr__GetString_x                                        0x140150150

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B9AA0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1BB0
#define CCharacterListWnd__EnterWorld_x                            0x1400A08E0
#define CCharacterListWnd__Quit_x                                  0x1400A1B90
#define CCharacterListWnd__UpdateList_x                            0x1400A28B0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14058A3F0
#define ItemBase__CreateItemTagString_x                            0x14058ADB0
#define ItemBase__GetImageNum_x                                    0x14058CF10
#define ItemBase__GetItemValue_x                                   0x14058EA90
#define ItemBase__IsEmpty_x                                        0x1405905B0
#define ItemBase__IsKeyRingItem_x                                  0x140590C80
#define ItemBase__ValueSellMerchant_x                              0x140594F60
#define ItemClient__CanDrop_x                                      0x140263D60
#define ItemClient__CanGoInBag_x                                   0x140263E90
#define ItemClient__CreateItemClient_x                             0x140264150
#define ItemClient__dItemClient_x                                  0x140263BC0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016EF80
#define EQ_LoadingS__Array_x                                       0x140A36A90

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1405A08D0
#define PcBase__GetCombatAbility_x                                 0x1405A0F20
#define PcBase__GetCombatAbilityTimer_x                            0x1405A0FC0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1405A16D0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1405A1F30
#define PcClient__AlertInventoryChanged_x                          0x140284920
#define PcClient__GetConLevel_x                                    0x140284DF0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402876C0
#define PcClient__HasLoreItem_x                                    0x140288740
#define PcZoneClient__GetItemRecastTimer_x                         0x1402945D0
#define PcZoneClient__RemoveMyAffect_x                             0x140296C70

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D6550  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D65C0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D66D0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D6630  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020D7D0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014AA10

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405FD8A0
#define PlayerBase__CanSee1_x                                      0x1405FD970
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405FDEA0
#define PlayerBase__HasProperty_x                                  0x1405FE0C0
#define PlayerBase__IsTargetable_x                                 0x1405FE180
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402A2820
#define PlayerClient__GetPcClient_x                                0x1402A4DB0
#define PlayerClient__PlayerClient_x                               0x14029BA60
#define PlayerClient__SetNameSpriteState_x                         0x1402A81E0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A9180
#define PlayerZoneClient__ChangeHeight_x                           0x1402B6E70
#define PlayerZoneClient__DoAttack_x                               0x1402B7B50
#define PlayerZoneClient__GetLevel_x                               0x1402BB0D0
#define PlayerZoneClient__IsValidTeleport_x                        0x140210580
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E2F0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402B0B10  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402B0B40  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402B0BF0
#define PlayerManagerClient__CreatePlayer_x                        0x1402B0500
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405FD520

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140269110
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140268D10
#define KeypressHandler__AttachKeyToEqCommand_x                    0x140268D80
#define KeypressHandler__ClearCommandStateArray_x                  0x1402690A0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140269230
#define KeypressHandler__HandleKeyUp_x                             0x140269310
#define KeypressHandler__SaveKeymapping_x                          0x140268FB0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B76A0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405B2250

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028DC50  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140292C10
#define PcZoneClient__GetPcSkillLimit_x                            0x140294B30
#define PcZoneClient__RemovePetEffect_x                            0x140296D70
#define PcZoneClient__HasAlternateAbility_x                        0x1402955A0
#define PcZoneClient__CanEquipItem_x                               0x140290FE0
#define PcZoneClient__GetItemByID_x                                0x140293B80
#define PcZoneClient__RemoveBuffEffect_x                           0x140296B20
#define PcZoneClient__BandolierSwap_x                              0x1402901A0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140294A80

// Doors
#define EQSwitch__UseSwitch_x                                      0x140215040

// IconCache
#define IconCache__GetIcon_x                                       0x140361750

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140358600
#define CContainerMgr__CloseContainer_x                            0x140357FC0
#define CContainerMgr__OpenExperimentContainer_x                   0x140358960

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140437890

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14025C690

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403CAF70
#define CLootWnd__RequestLootSlot_x                                0x1403CBF50

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A010
#define EQ_Spell__SpellAffects_x                                   0x14019B2C0
#define EQ_Spell__SpellAffectBase_x                                0x14019B220
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA500
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA4B0
#define EQ_Spell__IsSPAStacking_x                                  0x14019AEE0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019AAA0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019A380

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400930E0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x1404915C0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140491600
#define CTargetWnd__RefreshTargetBuffs_x                           0x140490B10
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404900C0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404986E0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401473C0
#define CTaskManager__GetTaskStatus_x                              0x1401474D0
#define CTaskManager__GetElementDescription_x                      0x140147050

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140198370
#define EqSoundManager__PlayScriptMp3_x                            0x140197170
#define EqSoundManager__SoundAssistPlay_x                          0x1402DA3C0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402DA6F0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14054D5A0
#define CTextureAnimation__SetCurCell_x                            0x14054D8B0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14025A950

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405D15F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405D1670
#define CharacterBase__IsExpansionFlag_x                           0x1401B9A80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140338990
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403392D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14033A710

// messages
#define msg_spell_worn_off_x                                       0x1401CD620
#define msg_new_text_x                                             0x1401C9070
#define __msgTokenTextParam_x                                      0x1401C0EB0
#define msgTokenText_x                                             0x1401C0DD0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402DBD80
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402DBCA0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14060C8A0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403C4A40

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14035D910
#define CCursorAttachment__AttachToCursor1_x                       0x14035C560
#define CCursorAttachment__Deactivate_x                            0x14035DE10

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140560870
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140560A60
#define CEQSuiteTextureLoader__GetTexture_x                        0x140560A70

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112E30
#define CFindItemWnd__Update_x                                     0x140113030
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E0A0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BA50
#define LootFiltersManager__GetItemFilterData_x                    0x14011C570
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CE10
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D0C0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14041AD80

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140610C70
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D3720

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140354BD0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D5440  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D5550  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140376E70
#define CGroupWnd__UpdateDisplay_x                                 0x140376C10

// ItemBase
#define ItemBase__IsLore_x                                         0x140590D50
#define ItemBase__IsLoreEquipped_x                                 0x140590EA0

#define MultipleItemMoveManager__ProcessMove_x                     0x14027B720

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020D930
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020D8C0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020D900

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CE160

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF160
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF510
#define FactionManagerClient__GetFactionStanding_x                 0x1400EE930
#define FactionManagerClient__GetMaxFaction_x                      0x1400EE930
#define FactionManagerClient__GetMinFaction_x                      0x1400EE7E0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007DC60

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA820

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401777F0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140176B70
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177610  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177590  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402E0470

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CE160

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D67C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055F9F0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400560E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402F16D0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D8F0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
