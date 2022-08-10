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

#define __ClientDate                                               20220808u
#define __ExpectedVersionDate                                     "Aug  8 2022"
#define __ExpectedVersionTime                                     "15:14:47"
#define __ActualVersionDate_x                                      0x140795C08
#define __ActualVersionTime_x                                      0x140795BF8
#define __ActualVersionBuild_x                                     0x140783DA8

// Memory Protection
#define __MemChecker0_x                                            0x14026CD70
#define __MemChecker1_x                                            0x1405026F0
#define __MemChecker4_x                                            0x14023CF90
#define __EncryptPad0_x                                            0x140A3F0D0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140B7A4D0
#define instEQZoneInfo_x                                           0x140B7A6C4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1401D8EC0
#define __gfMaxZoomCameraDistance_x                                0x14078BF40
#define __gfMaxCameraDistance_x                                    0x1407C68DC
#define __CurrentSocial_x                                          0x1408F9900 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140A34F70
#define g_eqCommandStates_x                                        0x140A35FD0
#define __CommandList_x                                            0x140A36210
#define __ScreenMode_x                                             0x140AC1FFC
#define __gWorld_x                                                 0x140B74A60
#define __gpbCommandEvent_x                                        0x140B74F10
#define __ServerHost_x                                             0x140B750F8
#define __Guilds_x                                                 0x140B79080
#define __MouseEventTime_x                                         0x140BE5988
#define DI8__Mouse_Check_x                                         0x140BEA5E0
#define __heqmain_x                                                0x140BECA88
#define DI8__Mouse_x                                               0x140BECAA0
#define __HWnd_x                                                   0x140BECAA8
#define __Mouse_x                                                  0x140BE9AD8
#define DI8__Main_x                                                0x140BE9B70
#define DI8__Keyboard_x                                            0x140BE9B78
#define __LoginName_x                                              0x140BEA25C
#define __CurrentMapLabel_x                                        0x140BFF7F0
#define __LabelCache_x                                             0x140C00400
#define __SubscriptionType_x                                       0x140C379F0
#define Teleport_Table_Size_x                                      0x140B74F18
#define Teleport_Table_x                                           0x140B72A60

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140B75410
#define pinstActiveBanker_x                                        0x140B72968
#define pinstActiveCorpse_x                                        0x140B72958
#define pinstActiveGMaster_x                                       0x140B72960
#define pinstActiveMerchant_x                                      0x140B72950
#define pinstAltAdvManager_x                                       0x140AC2C68
#define pinstCEverQuest_x                                          0x140BE9AD0
#define pinstCamActor_x                                            0x140AC1FE8
#define pinstCDBStr_x                                              0x140AC1A70
#define pinstCDisplay_x                                            0x140B72A58
#define pinstControlledPlayer_x                                    0x140B729F8
#define pinstCResolutionHandler_x                                  0x141270590
#define pinstCSidlManager_x                                        0x140C11470
#define pinstCXWndManager_x                                        0x140C11460
#define instDynamicZone_x                                          0x140B78F40 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140B78F8E
#define instExpeditionName_x                                       0x140B78FCE
#define pinstDZMember_x                                            0x140B79058
#define pinstDZTimerInfo_x                                         0x140B79060
#define pinstEqLogin_x                                             0x140BE9BA0
#define instTribute_x                                              0x140A30800
#define pinstEQSoundManager_x                                      0x140AC2FA8
#define pinstEQSpellStrings_x                                      0x140AA66A0
#define pinstSGraphicsEngine_x                                     0x141270328
#define pinstLocalPC_x                                             0x140B72A48
#define pinstLocalPlayer_x                                         0x140B72948
#define pinstCMercenaryClientManager_x                             0x140BE7218
#define pinstModelPlayer_x                                         0x140B72978
#define pinstRenderInterface_x                                     0x141270340
#define pinstSkillMgr_x                                            0x140BE8EB0
#define pinstSpawnManager_x                                        0x140BE75E0
#define pinstSpellManager_x                                        0x140BE8FF8
#define pinstStringTable_x                                         0x140B72A50
#define pinstSwitchManager_x                                       0x140B728C0
#define pinstTarget_x                                              0x140B729F0
#define pinstTaskMember_x                                          0x140A307F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140B72A00
#define pinstTradeTarget_x                                         0x140B72970
#define instTributeActive_x                                        0x140A30829
#define pinstViewActor_x                                           0x140AC1FE0
#define pinstWorldData_x                                           0x140B72A28
#define pinstPlayerPath_x                                          0x140BE7608
#define pinstTargetIndicator_x                                     0x140BE90A8
#define EQObject_Top_x                                             0x140B72A20

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140BFC958
#define pinstCContainerMgr_x                                       0x140AC1AD8
#define pinstCContextMenuManager_x                                 0x140C11410
#define pinstCInvSlotMgr_x                                         0x140AC1AC0
#define pinstCItemDisplayManager_x                                 0x140BFF3C0
#define pinstCPopupWndManager_x                                    0x140BFFC50
#define pinstCSpellDisplayMgr_x                                    0x140C002E0
#define pinstCTaskManager_x                                        0x1408F9C40
#define pinstEQSuiteTextureLoader_x                                0x140A48730
#define pinstItemIconCache_x                                       0x140BFCCB8
#define pinstLootFiltersManager_x                                  0x140AC1488

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1401F73F0
#define __CastRay2_x                                               0x1401F7100
#define __ConvertItemTags_x                                        0x1401F77F0
#define __CleanItemTags_x                                          0x140058F30
#define __CreateCascadeMenuItems_x                                 0x140153430
#define __DoesFileExist_x                                          0x140506ED0
#define __EQGetTime_x                                              0x140502CA0
#define __ExecuteCmd_x                                             0x1401D0E20
#define __FixHeading_x                                             0x140606920
#define __FlushDxKeyboard_x                                        0x1402E84A0
#define __get_bearing_x                                            0x140200710
#define __get_melee_range_x                                        0x140200800
#define __GetAnimationCache_x                                      0x14035CEB0
#define __GetGaugeValueFromEQ_x                                    0x14047B920
#define __GetLabelFromEQ_x                                         0x14047CED0
#define __GetXTargetType_x                                         0x140607D90   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406069A0
#define __HelpPath_x                                               0x140BE5850   // Why?
#define __NewUIINI_x                                               0x140487A70   // Why?
#define __ProcessGameEvents_x                                      0x1402327D0
#define __ProcessKeyboardEvents_x                                  0x1402E9CA0
#define __ProcessMouseEvents_x                                     0x140233C00
#define __SaveColors_x                                             0x1401630E0
#define __STMLToText_x                                             0x1405309F0
#define __WndProc_x                                                0x1402E6C20
#define CMemoryMappedFile__SetFile_x                               0x1407425C0
#define DrawNetStatus_x                                            0x14027A8A0
#define Util__FastTime_x                                           0x1405039A0
#define __eq_delete_x                                              0x14060CBD0
#define __eq_new_x                                                 0x14060CCCC
#define __CopyLayout_x                                             0x140269210
#define __ThrottleFrameRate_x                                      0x140222657
#define __ThrottleFrameRateEnd_x                                   0x1402226B7

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1402F8B90
#define CAAWnd__Update_x                                           0x1402F8E90
#define CAAWnd__UpdateSelected_x                                   0x1402F9E50

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x14007B570
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x140073D70
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407733F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x14007BDE0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14016DDE0
#define AltAdvManager__IsAbilityReady_x                            0x14016E060
#define AltAdvManager__GetAAById_x                                 0x14016D6B0
#define AltAdvManager__CanTrainAbility_x                           0x14016D4E0
#define AltAdvManager__CanSeeAbility_x                             0x14016D1A0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400A3BB0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400A4960
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400A4B70
#define CharacterZoneClient__CanUseItem_x                          0x1400B8980
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400A5460
#define CharacterZoneClient__CastSpell_x                           0x1400A5500
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400B4AF0
#define CharacterZoneClient__Cur_HP_x                              0x1400B9FB0
#define CharacterZoneClient__Cur_Mana_x                            0x1400BA170
#define CharacterZoneClient__FindAffectSlot_x                      0x1400A8720
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400BFC00
#define CharacterZoneClient__GetBaseSkill_x                        0x1400CE660  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400A9C10
#define CharacterZoneClient__GetCurrentMod_x                       0x1400B7F00
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400C1720
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400C0650
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400A9DE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x14009AA20
#define CharacterZoneClient__GetFocusDurationMod_x                 0x14009C290
#define CharacterZoneClient__GetHPRegen_x                          0x1400C0D50
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400B9C60
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400C1930
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400A9E60
#define CharacterZoneClient__GetManaRegen_x                        0x1400C23C0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400AA070
#define CharacterZoneClient__GetModCap_x                           0x1400C9D70
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400AA110
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400AA320
#define CharacterZoneClient__GetPctModAndMin_x                     0x14009F130
#define CharacterZoneClient__HasSkill_x                            0x1400C55A0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400AE640
#define CharacterZoneClient__MakeMeVisible_x                       0x1400C9800
#define CharacterZoneClient__Max_Endurance_x                       0x1402931A0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400C9B40
#define CharacterZoneClient__Max_Mana_x                            0x140293390  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400CA000
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400B1B20
#define CharacterZoneClient__SpellDuration_x                       0x1400B2700
#define CharacterZoneClient__TotalEffect_x                         0x1400B3930
#define CharacterZoneClient__UseSkill_x                            0x1400CF5C0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140315FC0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403200D0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14031C070
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14031B110

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140322760

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1407D2FC0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140342EC0
#define CChatWindowManager__InitContextMenu_x                      0x140343050
#define CChatWindowManager__FreeChatWindow_x                       0x140342110
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140349DD0
#define CChatWindowManager__CreateChatWindow_x                     0x140341A50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1400D7390

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14034AD40
#define CChatWindow__Clear_x                                       0x14034BB40
#define CChatWindow__WndNotification_x                             0x14034CCC0
#define CChatWindow__AddHistory_x                                  0x14034B640

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405418F0
#define CContextMenu__RemoveMenuItem_x                             0x140541E00
#define CContextMenu__RemoveAllMenuItems_x                         0x140541DD0
#define CContextMenu__CheckMenuItem_x                              0x140541C40
#define CContextMenu__SetMenuItem_x                                0x140541E20
#define CContextMenu__AddSeparator_x                               0x140541A50

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140542470
#define CContextMenuManager__RemoveMenu_x                          0x1405429F0
#define CContextMenuManager__PopupMenu_x                           0x140542770
#define CContextMenuManager__Flush_x                               0x1405424F0
#define CContextMenuManager__CreateDefaultMenu_x                   0x140356F30

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1405CF2E0
#define CChatService__GetFriendName_x                              0x1405CF2F0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14053DAC0
#define CComboWnd__Draw_x                                          0x14053DBC0
#define CComboWnd__GetCurChoice_x                                  0x14053DEA0  // unused
#define CComboWnd__GetListRect_x                                   0x14053DF40
#define CComboWnd__InsertChoice_x                                  0x14053E270
#define CComboWnd__SetColors_x                                     0x14053E600
#define CComboWnd__SetChoice_x                                     0x14053E5C0
#define CComboWnd__GetItemCount_x                                  0x14053DF30
#define CComboWnd__GetCurChoiceText_x                              0x14053DEE0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14053DE70
#define CComboWnd__InsertChoiceAtIndex_x                           0x14053E330

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140354FB0
#define CContainerWnd__SetContainer_x                              0x140355D50
#define CContainerWnd__vftable_x                                   0x1407A3928

// CDisplay
#define CDisplay__cameraType_x                                     0x140AC1D64
#define CDisplay__ZoneMainUI_x                                     0x140559240
#define CDisplay__PreZoneMainUI_x                                  0x140160030
#define CDisplay__CleanGameUI_x                                    0x140152530
#define CDisplay__GetClickedActor_x                                0x1401566C0
#define CDisplay__GetUserDefinedColor_x                            0x1401571A0
#define CDisplay__InitCharSelectUI_x                               0x140157450
#define CDisplay__ReloadUI_x                                       0x140162390
#define CDisplay__WriteTextHD2_x                                   0x1401692E0
#define CDisplay__TrueDistance_x                                   0x140168FC0
#define CDisplay__SetViewActor_x                                   0x1401658D0
#define CDisplay__GetFloorHeight_x                                 0x140156920
#define CDisplay__ToggleScreenshotMode_x                           0x140168AC0
#define CDisplay__RealRender_World_x                               0x140161720

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140564750
#define CEditWnd__DrawCaret_x                                      0x140545340  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140545800
#define CEditWnd__GetCaretPt_x                                     0x140545A80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140545AC0
#define CEditWnd__GetDisplayString_x                               0x140545D30
#define CEditWnd__GetHorzOffset_x                                  0x140545F70
#define CEditWnd__GetLineForPrintableChar_x                        0x1405460C0
#define CEditWnd__GetSelStartPt_x                                  0x1405463A0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405461F0
#define CEditWnd__PointFromPrintableChar_x                         0x140546F50
#define CEditWnd__ReplaceSelection_x                               0x140547300
#define CEditWnd__SelectableCharFromPoint_x                        0x1405477A0
#define CEditWnd__SetEditable_x                                    0x140547A30
#define CEditWnd__SetWindowText_x                                  0x140547A60

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140223A00
#define CEverQuest__ClickedPlayer_x                                0x140219D80
#define CEverQuest__CreateTargetIndicator_x                        0x14021A4E0
#define CEverQuest__DoTellWindow_x                                 0x1400D70A0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1400D7960 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140224F00
#define CEverQuest__dsp_chat_x                                     0x1400D6BC0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x14024E460
#define CEverQuest__Emote_x                                        0x140225860
#define CEverQuest__GetBodyTypeDesc_x                              0x1402265D0
#define CEverQuest__GetClassDesc_x                                 0x140226630
#define CEverQuest__GetClassThreeLetterCode_x                      0x140226A00
#define CEverQuest__GetDeityDesc_x                                 0x140226DB0
#define CEverQuest__GetLangDesc_x                                  0x1402271E0
#define CEverQuest__GetRaceDesc_x                                  0x140227580
#define CEverQuest__InterpretCmd_x                                 0x140228C70
#define CEverQuest__LeftClickedOnPlayer_x                          0x14023D610
#define CEverQuest__LMouseUp_x                                     0x14022A6B0
#define CEverQuest__RightClickedOnPlayer_x                         0x14023AFB0
#define CEverQuest__RMouseUp_x                                     0x140234780
#define CEverQuest__SetGameState_x                                 0x14023F8C0
#define CEverQuest__UPCNotificationFlush_x                         0x140244F70 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14022A330
#define CEverQuest__ReportSuccessfulHeal_x                         0x140235AB0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402367F0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403671F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x140094300
#define CGuild__GetGuildName_x                                     0x140094340

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140383AE0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14025F010
#define CHotButton__SetCheck_x                                     0x14025F2A0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140392F00
#define CInvSlotMgr__MoveItem_x                                    0x140393050
#define CInvSlotMgr__SelectSlot_x                                  0x140394A20

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140390B80
#define CInvSlot__SliderComplete_x                                 0x140391DB0
#define CInvSlot__GetItemBase_x                                    0x14038CC60
#define CInvSlot__UpdateItem_x                                     0x140392200

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140395070
#define CInvSlotWnd__HandleLButtonUp_x                             0x140395BC0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1403B5450
#define CItemDisplayWnd__UpdateStrings_x                           0x1403B7D60
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1403B2330
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1403B39C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x1403B48A0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140478600
#define CSpellDisplayWnd__UpdateStrings_x                          0x14047A1D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1404B2120

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1403AEAD0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140117390

// CLabel
#define CLabel__UpdateText_x                                       0x1403BF120

// CListWnd
#define CListWnd__CListWnd_x                                       0x140514B20
#define CListWnd__dCListWnd_x                                      0x140514F60
#define CListWnd__vftable_x                                        0x1407D23C0
#define CListWnd__AddColumn_x                                      0x140515600
#define CListWnd__AddColumn1_x                                     0x1405156A0
#define CListWnd__AddLine_x                                        0x140515800
#define CListWnd__AddString_x                                      0x140515D80
#define CListWnd__CalculateFirstVisibleLine_x                      0x140516470
#define CListWnd__CalculateVSBRange_x                              0x140516750
#define CListWnd__ClearSel_x                                       0x140516900
#define CListWnd__ClearAllSel_x                                    0x1405168A0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140516960
#define CListWnd__Compare_x                                        0x140516B10
#define CListWnd__Draw_x                                           0x140516FE0
#define CListWnd__DrawColumnSeparators_x                           0x140517B80
#define CListWnd__DrawHeader_x                                     0x140517C40
#define CListWnd__DrawItem_x                                       0x140518300
#define CListWnd__DrawLine_x                                       0x140518C80
#define CListWnd__DrawSeparator_x                                  0x140519140
#define CListWnd__EnableLine_x                                     0x140519560
#define CListWnd__EnsureVisible_x                                  0x1405195C0
#define CListWnd__ExtendSel_x                                      0x1405196C0
#define CListWnd__GetColumnMinWidth_x                              0x1405199F0
#define CListWnd__GetColumnWidth_x                                 0x140519A70
#define CListWnd__GetCurSel_x                                      0x140519B70
#define CListWnd__GetItemData_x                                    0x140519EF0
#define CListWnd__GetItemHeight_x                                  0x140519F30
#define CListWnd__GetItemRect_x                                    0x14051A0F0
#define CListWnd__GetItemText_x                                    0x14051A390
#define CListWnd__GetSelList_x                                     0x14051A5E0
#define CListWnd__GetSeparatorRect_x                               0x14051A7D0
#define CListWnd__InsertLine_x                                     0x14051BC50
#define CListWnd__RemoveLine_x                                     0x14051C270
#define CListWnd__SetColors_x                                      0x14051C640
#define CListWnd__SetColumnJustification_x                         0x14051C660
#define CListWnd__SetColumnLabel_x                                 0x14051C6E0
#define CListWnd__SetColumnWidth_x                                 0x14051C880
#define CListWnd__SetCurSel_x                                      0x14051C950
#define CListWnd__SetItemColor_x                                   0x14051CBC0
#define CListWnd__SetItemData_x                                    0x14051CC60
#define CListWnd__SetItemText_x                                    0x14051CEA0
#define CListWnd__Sort_x                                           0x14051D2A0
#define CListWnd__ToggleSel_x                                      0x14051D410
#define CListWnd__SetColumnsSizable_x                              0x14051C8D0
#define CListWnd__SetItemWnd_x                                     0x14051CFD0
#define CListWnd__GetItemWnd_x                                     0x14051A570
#define CListWnd__SetItemIcon_x                                    0x14051CCA0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140516240
#define CListWnd__SetVScrollPos_x                                  0x14051D200

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1403D1B30

// MapViewMap
#define MapViewMap__vftable_x                                      0x1407AEFA0
#define MapViewMap__Clear_x                                        0x1403D36A0
#define MapViewMap__SetZoom_x                                      0x1403D9C60
#define MapViewMap__HandleLButtonDown_x                            0x1403D67A0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1403FB200  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140400EA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140402EC0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140404CB0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404040D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140408370

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1405ABF30
#define CPacketScrambler__hton_x                                   0x1405ABF20

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x14053B1A0
#define CSidlManagerBase__FindAnimation1_x                         0x14053B0E0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x14053B7D0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x14053B580
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14053A4F0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x14053A480
#define CSidlManagerBase__CreateXWnd_x                             0x140539AF0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14046AE00
#define CSidlManager__CreateXWnd_x                                 0x14046AFC0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140532460
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140532570
#define CSidlScreenWnd__ConvertToRes_x                             0x14055ED00 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405326A0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140531D00
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140531C50
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140531F20
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140532C70
#define CSidlScreenWnd__EnableIniStorage_x                         0x140532EA0
#define CSidlScreenWnd__GetChildItem_x                             0x140533040
#define CSidlScreenWnd__GetSidlPiece_x                             0x140533260
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140524CC0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405335D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140533940
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140534200
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140534AB0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140C112B8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405350C0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405358B0
#define CSidlScreenWnd__vftable_x                                  0x1407D3420
#define CSidlScreenWnd__WndNotification_x                          0x140535900

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1402D13F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1402D17F0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1402D1730
#define CSkillMgr__IsActivatedSkill_x                              0x1402D1B90
#define CSkillMgr__IsCombatSkill_x                                 0x1402D1BD0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405437B0
#define CSliderWnd__SetValue_x                                     0x140543FC0
#define CSliderWnd__SetNumTicks_x                                  0x140543E40

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404722D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14054C6D0
#define CStmlWnd__CalculateHSBRange_x                              0x1405246A0
#define CStmlWnd__CalculateVSBRange_x                              0x14054D570
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14054E060
#define CStmlWnd__ForceParseNow_x                                  0x14054E100
#define CStmlWnd__GetVisibleText_x                                 0x14054E7E0
#define CStmlWnd__MakeStmlColorTag_x                               0x140550570
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405505B0
#define CStmlWnd__SetSTMLText_x                                    0x140557590
#define CStmlWnd__StripFirstSTMLLines_x                            0x140557740
#define CStmlWnd__UpdateHistoryString_x                            0x140557AD0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405491D0
#define CTabWnd__DrawCurrentPage_x                                 0x140549270
#define CTabWnd__DrawTab_x                                         0x140549640
#define CTabWnd__GetTabRect_x                                      0x140549CA0
#define CTabWnd__InsertPage_x                                      0x140549F70
#define CTabWnd__RemovePage_x                                      0x14054A1F0
#define CTabWnd__SetPage_x                                         0x14054A350
#define CTabWnd__UpdatePage_x                                      0x14054A650

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140548BF0
#define CPageWnd__SetTabText_x                                     0x140548C60

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x14008D840  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x14008DC50


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14051E560
#define CTextureFont__DrawWrappedText1_x                           0x14051E470
#define CTextureFont__DrawWrappedText2_x                           0x14051E690
#define CTextureFont__GetTextExtent_x                              0x14051EA40
#define CTextureFont__GetHeight_x                                  0x14051EA00

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14055D460

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140511790

// CXStr
#define CXStr__gFreeLists_x                                        0x140A480B0
#define CXStr__gCXStrAccess_x                                      0x140C10878

// CXWnd
#define CXWnd__BringToTop_x                                        0x14051FFA0
#define CXWnd__ClrFocus_x                                          0x1405201E0
#define CXWnd__Destroy_x                                           0x140520320
#define CXWnd__DoAllDrawing_x                                      0x140520420
#define CXWnd__DrawColoredRect_x                                   0x140520BD0
#define CXWnd__DrawTooltip_x                                       0x140522230
#define CXWnd__DrawTooltipAtPoint_x                                0x1405222E0
#define CXWnd__GetChildItem_x                                      0x140522BE0
#define CXWnd__GetChildWndAt_x                                     0x140522CA0
#define CXWnd__GetClientClipRect_x                                 0x140522E00
#define CXWnd__GetRelativeRect_x                                   0x1405247D0
#define CXWnd__GetScreenClipRect_x                                 0x1405248D0
#define CXWnd__GetScreenRect_x                                     0x140524A40
#define CXWnd__GetTooltipRect_x                                    0x140524BC0
#define CXWnd__IsActive_x                                          0x140525130
#define CXWnd__IsDescendantOf_x                                    0x140525160
#define CXWnd__IsReallyVisible_x                                   0x1405251C0
#define CXWnd__IsType_x                                            0x140525200
#define CXWnd__Minimize_x                                          0x140525300
#define CXWnd__ProcessTransition_x                                 0x140526330
#define CXWnd__Refade_x                                            0x140526430
#define CXWnd__Resize_x                                            0x140526440
#define CXWnd__Right_x                                             0x1405264E0
#define CXWnd__SetFocus_x                                          0x1405268A0
#define CXWnd__SetFont_x                                           0x1405268F0
#define CXWnd__SetKeyTooltip_x                                     0x140526A00
#define CXWnd__SetMouseOver_x                                      0x140526B30
#define CXWnd__SetParent_x                                         0x140526BB0
#define CXWnd__StartFade_x                                         0x140526FF0
#define CXWnd__vftable_x                                           0x1407D2B38
#define CXWnd__CXWnd_x                                             0x14051EB60
#define CXWnd__dCXWnd_x                                            0x14051F490

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140563ED0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140528820
#define CXWndManager__DrawWindows_x                                0x140528950
#define CXWndManager__GetKeyboardFlags_x                           0x140529010
#define CXWndManager__HandleKeyboardMsg_x                          0x140529050
#define CXWndManager__RemoveWnd_x                                  0x14052C450

// CDBStr
#define CDBStr__GetString_x                                        0x140150730

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1405B5270

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400A1A30
#define CCharacterListWnd__EnterWorld_x                            0x1400A06E0
#define CCharacterListWnd__Quit_x                                  0x1400A1A10
#define CCharacterListWnd__UpdateList_x                            0x1400A2720

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140585220
#define ItemBase__CreateItemTagString_x                            0x140585C20
#define ItemBase__GetImageNum_x                                    0x140587E10
#define ItemBase__GetItemValue_x                                   0x140589D40
#define ItemBase__IsEmpty_x                                        0x14058B860
#define ItemBase__IsKeyRingItem_x                                  0x14058BF70
#define ItemBase__ValueSellMerchant_x                              0x1405902E0
#define ItemClient__CanDrop_x                                      0x1402613D0
#define ItemClient__CanGoInBag_x                                   0x140261500
#define ItemClient__CreateItemClient_x                             0x1402617C0
#define ItemClient__dItemClient_x                                  0x140261230

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14016F580
#define EQ_LoadingS__Array_x                                       0x140A32A80

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14059BC10
#define PcBase__GetCombatAbility_x                                 0x14059C260
#define PcBase__GetCombatAbilityTimer_x                            0x14059C300
#define PcBase__GetItemContainedRealEstateIds_x                    0x14059CA10
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14059D270
#define PcClient__AlertInventoryChanged_x                          0x140281E80
#define PcClient__GetConLevel_x                                    0x140282350  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x140284B70
#define PcClient__HasLoreItem_x                                    0x140285BF0
#define PcZoneClient__GetItemRecastTimer_x                         0x140291B40
#define PcZoneClient__RemoveMyAffect_x                             0x1402941F0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1401D5480  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x1401D54F0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1401D5600  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1401D5560  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14020B890  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14014AFF0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1405F9090
#define PlayerBase__CanSee1_x                                      0x1405F9160
#define PlayerBase__GetVisibilityLineSegment_x                     0x1405F9690
#define PlayerBase__HasProperty_x                                  0x1405F98B0
#define PlayerBase__IsTargetable_x                                 0x1405F9970
#define PlayerClient__ChangeBoneStringSprite_x                     0x14029FE00
#define PlayerClient__GetPcClient_x                                0x1402A2390
#define PlayerClient__PlayerClient_x                               0x140298FF0
#define PlayerClient__SetNameSpriteState_x                         0x1402A57B0
#define PlayerClient__SetNameSpriteTint_x                          0x1402A6750
#define PlayerZoneClient__ChangeHeight_x                           0x1402B4690
#define PlayerZoneClient__DoAttack_x                               0x1402B5380
#define PlayerZoneClient__GetLevel_x                               0x1402B88F0
#define PlayerZoneClient__IsValidTeleport_x                        0x14020E640
#define PlayerZoneClient__LegalPlayerRace_x                        0x14015E8D0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402AE110  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402AE140  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402AE1F0
#define PlayerManagerClient__CreatePlayer_x                        0x1402ADB00
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1405F8D10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x140266750
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x140266350
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402663C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402666E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x140266870
#define KeypressHandler__HandleKeyUp_x                             0x140266950
#define KeypressHandler__SaveKeymapping_x                          0x1402665F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1405B2B70  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1405AD5D0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14028B210  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402901B0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402920A0
#define PcZoneClient__RemovePetEffect_x                            0x1402942F0
#define PcZoneClient__HasAlternateAbility_x                        0x140292B10
#define PcZoneClient__CanEquipItem_x                               0x14028E580
#define PcZoneClient__GetItemByID_x                                0x1402910F0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402940A0
#define PcZoneClient__BandolierSwap_x                              0x14028D740
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140291FF0

// Doors
#define EQSwitch__UseSwitch_x                                      0x140213100

// IconCache
#define IconCache__GetIcon_x                                       0x14035CEE0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x140353D90
#define CContainerMgr__CloseContainer_x                            0x140353750
#define CContainerMgr__OpenExperimentContainer_x                   0x1403540F0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404320E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140259D70

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1403C5D70
#define CLootWnd__RequestLootSlot_x                                0x1403C6D50

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14019A690
#define EQ_Spell__SpellAffects_x                                   0x14019B930
#define EQ_Spell__SpellAffectBase_x                                0x14019B890
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400AA500
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400AA4B0
#define EQ_Spell__IsSPAStacking_x                                  0x14019B550
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14019B110
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14019A9F0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x140092D30

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14048B840  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x14048B880
#define CTargetWnd__RefreshTargetBuffs_x                           0x14048AD90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14048A340

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140492920  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401479A0
#define CTaskManager__GetTaskStatus_x                              0x140147AB0
#define CTaskManager__GetElementDescription_x                      0x140147630

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401989F0
#define EqSoundManager__PlayScriptMp3_x                            0x1401977F0
#define EqSoundManager__SoundAssistPlay_x                          0x1402D7BD0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1402D7F00  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140548260
#define CTextureAnimation__SetCurCell_x                            0x140548570

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140258030

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1405CCE00
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1405CCE80
#define CharacterBase__IsExpansionFlag_x                           0x1401B94F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140335120
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140335A60
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140336E90

// messages
#define msg_spell_worn_off_x                                       0x1401CC540
#define msg_new_text_x                                             0x1401C8380
#define __msgTokenTextParam_x                                      0x1401C01D0
#define msgTokenText_x                                             0x1401C00F0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x1402D9590
#define SpellManager__GetSpellByGroupAndRank_x                     0x1402D94B0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140608170

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1403BF860

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403590B0
#define CCursorAttachment__AttachToCursor1_x                       0x140357D00
#define CCursorAttachment__Deactivate_x                            0x1403595B0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x14055B6B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x14055B8A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x14055B8B0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140112F40
#define CFindItemWnd__Update_x                                     0x140113140
#define CFindItemWnd__PickupSelectedItem_x                         0x14010E190

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14011BB30
#define LootFiltersManager__GetItemFilterData_x                    0x14011C650
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14011CEF0
#define LootFiltersManager__SetItemLootFilter_x                    0x14011D1A0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404155E0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14060C540
#define CResolutionHandler__GetWindowedStyle_x                     0x1402D0F60

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140350380

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1405D0C60  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1405D0D70  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140372620
#define CGroupWnd__UpdateDisplay_x                                 0x1403723C0

// ItemBase
#define ItemBase__IsLore_x                                         0x14058C040
#define ItemBase__IsLoreEquipped_x                                 0x14058C1A0

#define MultipleItemMoveManager__ProcessMove_x                     0x140278CF0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14020B9F0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14020B980
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14020B9C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB920

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1400EF250
#define FactionManagerClient__HandleFactionMessage_x               0x1400EF600
#define FactionManagerClient__GetFactionStanding_x                 0x1400EEA20
#define FactionManagerClient__GetMaxFaction_x                      0x1400EEA20
#define FactionManagerClient__GetMinFaction_x                      0x1400EE8D0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x14007D8D0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x1400FA910

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x140177E00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x140177180
#define CAltAbilityData__GetMercCurrentRank_x                      0x140177C20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x140177BA0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1402DDC90

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1402CB920

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x1401D56F0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x14055A830

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140056160

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1402EEEF0

// AchievementManager
#define AchievementManager__Instance_x                             0x14005D690

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
