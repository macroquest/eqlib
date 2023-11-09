/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2023 MacroQuest Authors
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

#define __ClientDate                                               20231106u
#define __ExpectedVersionDate                                     "Nov  6 2023"
#define __ExpectedVersionTime                                     "12:28:54"
#define __ActualVersionDate_x                                      0x140820148
#define __ActualVersionTime_x                                      0x140820138
#define __ActualVersionBuild_x                                     0x140814B80

// Memory Protection
#define __MemChecker0_x                                            0x1402A75A0
#define __MemChecker1_x                                            0x14055BC30
#define __MemChecker4_x                                            0x1402765B0
#define __EncryptPad0_x                                            0x140AD38E0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140C0C3A0
#define instEQZoneInfo_x                                           0x140C0C594 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020EA80
#define __gfMaxZoomCameraDistance_x                                0x140815D30
#define __gfMaxCameraDistance_x                                    0x140855300
#define __CurrentSocial_x                                          0x14098F940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140ACB1D0
#define g_eqCommandStates_x                                        0x140ACC240
#define __CommandList_x                                            0x140ACC470
#define __ScreenMode_x                                             0x140B53D04
#define __gWorld_x                                                 0x140C071D8
#define __gpbCommandEvent_x                                        0x140C06CE4
#define __ServerHost_x                                             0x140C06EC8
#define __Guilds_x                                                 0x140C0AF50
#define __MouseEventTime_x                                         0x140C818E0
#define DI8__Mouse_Check_x                                         0x140C85A18
#define __heqmain_x                                                0x140C87EB0
#define DI8__Mouse_x                                               0x140C88928
#define __HWnd_x                                                   0x140C88930
#define __Mouse_x                                                  0x140C87EC8
#define DI8__Main_x                                                0x140C87EE0
#define DI8__Keyboard_x                                            0x140C87EE8
#define __LoginName_x                                              0x140C885BC
#define __CurrentMapLabel_x                                        0x140C9BB90
#define __LabelCache_x                                             0x140C9C760
#define Teleport_Table_Size_x                                      0x140C06D70
#define Teleport_Table_x                                           0x140C04830

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140C072E0
#define pinstActiveBanker_x                                        0x140C07208
#define pinstActiveCorpse_x                                        0x140C071F8
#define pinstActiveGMaster_x                                       0x140C07200
#define pinstActiveMerchant_x                                      0x140C071F0
#define pinstAltAdvManager_x                                       0x140B54B08
#define pinstCEverQuest_x                                          0x140C88938
#define pinstCamActor_x                                            0x140B53CF0
#define pinstCDBStr_x                                              0x140B53900
#define pinstCDisplay_x                                            0x140C04828
#define pinstControlledPlayer_x                                    0x140C07298
#define pinstCResolutionHandler_x                                  0x14130A1F8
#define pinstCSidlManager_x                                        0x140CADA60
#define pinstCXWndManager_x                                        0x140CADA58
#define instDynamicZone_x                                          0x140C0AE10 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140C0AE5E
#define instExpeditionName_x                                       0x140C0AE9E
#define pinstDZMember_x                                            0x140C0AF28
#define pinstDZTimerInfo_x                                         0x140C0AF30
#define pinstEqLogin_x                                             0x140C87F00
#define instTribute_x                                              0x140AC6840
#define pinstEQSoundManager_x                                      0x140B54E88
#define pinstEQSpellStrings_x                                      0x140B38510
#define pinstSGraphicsEngine_x                                     0x141309F78
#define pinstLocalPC_x                                             0x140C072D8
#define pinstLocalPlayer_x                                         0x140C071E8
#define pinstCMercenaryClientManager_x                             0x140C83188
#define pinstModelPlayer_x                                         0x140C07218
#define pinstRenderInterface_x                                     0x141309F90
#define pinstSkillMgr_x                                            0x140C84E30
#define pinstSpawnManager_x                                        0x140C83550
#define pinstSpellManager_x                                        0x140C84E98
#define pinstStringTable_x                                         0x140C04820
#define pinstSwitchManager_x                                       0x140C047A0
#define pinstTarget_x                                              0x140C07290
#define pinstTaskMember_x                                          0x140AC6830 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140C072A0
#define pinstTradeTarget_x                                         0x140C07210
#define instTributeActive_x                                        0x140AC6869
#define pinstViewActor_x                                           0x140B53CE8
#define pinstWorldData_x                                           0x140C072D0
#define pinstPlayerPath_x                                          0x140C83578
#define pinstTargetIndicator_x                                     0x140C84F48
#define EQObject_Top_x                                             0x140C072B8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140C98CE8
#define pinstCContainerMgr_x                                       0x140B539B0
#define pinstCContextMenuManager_x                                 0x140CAD740
#define pinstCInvSlotMgr_x                                         0x140B539A8
#define pinstCItemDisplayManager_x                                 0x140C9B760
#define pinstCPopupWndManager_x                                    0x140C9BFF0
#define pinstCSpellDisplayMgr_x                                    0x140C9C640
#define pinstCTaskManager_x                                        0x14098FC80
#define pinstEQSuiteTextureLoader_x                                0x140ADCF60
#define pinstItemIconCache_x                                       0x140C99048
#define pinstLootFiltersManager_x                                  0x140B53348
#define pinstGFViewListener_x                                      0x140CACF18


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402370F0
#define __CastRay_x                                                0x14022F970
#define __CastRay2_x                                               0x14022F670
#define __ConvertItemTags_x                                        0x14022FDD0
#define __CleanItemTags_x                                          0x140087850
#define __CreateCascadeMenuItems_x                                 0x140180960
#define __DoesFileExist_x                                          0x14055FAE0
#define __EQGetTime_x                                              0x14055C1E0
#define __ExecuteCmd_x                                             0x140206450
#define __FixHeading_x                                             0x140686BF0
#define __FlushDxKeyboard_x                                        0x140326340
#define __get_bearing_x                                            0x1402392E0
#define __get_melee_range_x                                        0x1402393E0
#define __GetAnimationCache_x                                      0x1403A1B30
#define __GetGaugeValueFromEQ_x                                    0x1404D3000
#define __GetLabelFromEQ_x                                         0x1404D45F0
#define __GetXTargetType_x                                         0x140687ED0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140686C70
#define __HelpPath_x                                               0x140C817A8   // Why?
#define __NewUIINI_x                                               0x1404DFB40   // Why?
#define __ProcessGameEvents_x                                      0x14026B9D0
#define __ProcessKeyboardEvents_x                                  0x140327BA0
#define __ProcessMouseEvents_x                                     0x14026CED0
#define __SaveColors_x                                             0x140190A60
#define __STMLToText_x                                             0x140564420
#define __WndProc_x                                                0x140324A90
#define CMemoryMappedFile__SetFile_x                               0x1407BEBC0
#define DrawNetStatus_x                                            0x1402B59D0
#define Util__FastTime_x                                           0x14055B770
#define __eq_delete_x                                              0x14068E034
#define __eq_new_x                                                 0x14068DFF0
#define __CopyLayout_x                                             0x1402A39D0
#define __ThrottleFrameRate_x                                      0x14025B275
#define __ThrottleFrameRateEnd_x                                   0x14025B2D5

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140337010
#define CAAWnd__Update_x                                           0x140337310
#define CAAWnd__UpdateSelected_x                                   0x140338310

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400A9AA0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A23A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1407FB918
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AA390

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BAB0
#define AltAdvManager__IsAbilityReady_x                            0x14019BD30
#define AltAdvManager__GetAAById_x                                 0x14019B380
#define AltAdvManager__CanTrainAbility_x                           0x14019B1B0
#define AltAdvManager__CanSeeAbility_x                             0x14019AE70

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0290
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D10D0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1320
#define CharacterZoneClient__CanUseItem_x                          0x1400E5AF0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D1CF0
#define CharacterZoneClient__CastSpell_x                           0x1400D1D90
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1620
#define CharacterZoneClient__Cur_HP_x                              0x1400E71F0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E73B0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D4DA0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400ED7F0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC5B0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6210
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E4FC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF380
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE250
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D63E0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C68A0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8270
#define CharacterZoneClient__GetHPRegen_x                          0x1400EE990
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E6E60
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF610
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D64E0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0370
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D66F0
#define CharacterZoneClient__GetModCap_x                           0x1400F7B00
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6790
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D69A0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CB3E0
#define CharacterZoneClient__HasSkill_x                            0x1400F3360
#define CharacterZoneClient__HitBySpell_x                          0x1400D7450
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DAD80
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F75F0
#define CharacterZoneClient__Max_Endurance_x                       0x1402CFE70  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7930
#define CharacterZoneClient__Max_Mana_x                            0x1402D0090  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7D90
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE1D0
#define CharacterZoneClient__SpellDuration_x                       0x1400DEED0
#define CharacterZoneClient__TotalEffect_x                         0x1400E0210
#define CharacterZoneClient__UseSkill_x                            0x1400FD500


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403555E0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14035F930

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x14035B7C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035A850

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140361FF0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1408634A0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140384250
#define CChatWindowManager__InitContextMenu_x                      0x1403843E0
#define CChatWindowManager__FreeChatWindow_x                       0x140383470
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14038B430
#define CChatWindowManager__CreateChatWindow_x                     0x140382DB0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105680

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14038C420
#define CChatWindow__Clear_x                                       0x14038D2C0
#define CChatWindow__WndNotification_x                             0x14038E4B0
#define CChatWindow__AddHistory_x                                  0x14038CDC0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405992D0
#define CContextMenu__RemoveMenuItem_x                             0x1405996C0
#define CContextMenu__RemoveAllMenuItems_x                         0x140599690
#define CContextMenu__CheckMenuItem_x                              0x140599500
#define CContextMenu__SetMenuItem_x                                0x1405996E0
#define CContextMenu__AddSeparator_x                               0x140599440

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14058B200
#define CContextMenuManager__RemoveMenu_x                          0x14058B7E0
#define CContextMenuManager__PopupMenu_x                           0x14058B520
#define CContextMenuManager__Flush_x                               0x14058B280
#define CContextMenuManager__CreateDefaultMenu_x                   0x140399BB0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x14064F930
#define CChatService__GetFriendName_x                              0x14064F940

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14057BFD0
#define CComboWnd__Draw_x                                          0x14057C0D0
#define CComboWnd__GetCurChoice_x                                  0x14057C3B0  // unused
#define CComboWnd__GetListRect_x                                   0x14057C450
#define CComboWnd__InsertChoice_x                                  0x14057C790
#define CComboWnd__SetColors_x                                     0x14057CB20
#define CComboWnd__SetChoice_x                                     0x14057CAE0
#define CComboWnd__GetItemCount_x                                  0x14057C440
#define CComboWnd__GetCurChoiceText_x                              0x14057C3F0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14057C380
#define CComboWnd__InsertChoiceAtIndex_x                           0x14057C850

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x140397930
#define CContainerWnd__SetContainer_x                              0x1403EA8B0
#define CContainerWnd__vftable_x                                   0x14082F4D0

// CDisplay
#define CDisplay__cameraType_x                                     0x140B53AB4
#define CDisplay__ZoneMainUI_x                                     0x1405B33F0
#define CDisplay__PreZoneMainUI_x                                  0x14018D880
#define CDisplay__CleanGameUI_x                                    0x14017FA60
#define CDisplay__GetClickedActor_x                                0x140183BF0
#define CDisplay__GetUserDefinedColor_x                            0x140184860
#define CDisplay__InitCharSelectUI_x                               0x140184B10
#define CDisplay__ReloadUI_x                                       0x14018FB60
#define CDisplay__WriteTextHD2_x                                   0x140196D00
#define CDisplay__TrueDistance_x                                   0x1401969B0
#define CDisplay__SetViewActor_x                                   0x1401931D0
#define CDisplay__GetFloorHeight_x                                 0x140183E50
#define CDisplay__ToggleScreenshotMode_x                           0x1401964A0
#define CDisplay__RealRender_World_x                               0x14018EF50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405BD5A0
#define CEditWnd__DrawCaret_x                                      0x1405AF100  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405AF5C0
#define CEditWnd__GetCaretPt_x                                     0x1405AF840  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405AF880
#define CEditWnd__GetDisplayString_x                               0x1405AFAF0
#define CEditWnd__GetHorzOffset_x                                  0x1405AFD30
#define CEditWnd__GetLineForPrintableChar_x                        0x1405AFE80
#define CEditWnd__GetSelStartPt_x                                  0x1405B0160  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405AFFB0
#define CEditWnd__PointFromPrintableChar_x                         0x1405B0D10
#define CEditWnd__ReplaceSelection_x                               0x1405B10C0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405B1560
#define CEditWnd__SetEditable_x                                    0x1405B17F0
#define CEditWnd__SetWindowText_x                                  0x1405B1820

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025C260
#define CEverQuest__ClickedPlayer_x                                0x140251FA0
#define CEverQuest__CreateTargetIndicator_x                        0x140252860
#define CEverQuest__DoTellWindow_x                                 0x140105390 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105C50 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025DC90
#define CEverQuest__dsp_chat_x                                     0x140104DC0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140287E90
#define CEverQuest__Emote_x                                        0x14025E640
#define CEverQuest__GetBodyTypeDesc_x                              0x14025F3E0
#define CEverQuest__GetClassDesc_x                                 0x14025F440
#define CEverQuest__GetClassThreeLetterCode_x                      0x14025F810
#define CEverQuest__GetDeityDesc_x                                 0x14025FAC0
#define CEverQuest__GetLangDesc_x                                  0x14025FEF0
#define CEverQuest__GetRaceDesc_x                                  0x140260290
#define CEverQuest__InterpretCmd_x                                 0x140261BA0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140276C30
#define CEverQuest__LMouseUp_x                                     0x140263550
#define CEverQuest__RightClickedOnPlayer_x                         0x140274480
#define CEverQuest__RMouseUp_x                                     0x14026DA50
#define CEverQuest__SetGameState_x                                 0x140279160
#define CEverQuest__UPCNotificationFlush_x                         0x14027E950 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402631C0
#define CEverQuest__ReportSuccessfulHeal_x                         0x14026EE00
#define CEverQuest__ReportSuccessfulHit_x                          0x14026FC60

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403ABEF0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0600
#define CGuild__GetGuildName_x                                     0x1400C0640

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403CE3F0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x140299490
#define CHotButton__SetCheck_x                                     0x140299760

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403E3600
#define CInvSlotMgr__MoveItem_x                                    0x1403E37E0
#define CInvSlotMgr__SelectSlot_x                                  0x1403E5180

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E07F0
#define CInvSlot__SliderComplete_x                                 0x1403E1D40
#define CInvSlot__GetItemBase_x                                    0x1403DC430
#define CInvSlot__UpdateItem_x                                     0x1403E2200

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403E6510

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140407800
#define CItemDisplayWnd__UpdateStrings_x                           0x14040A200
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140404220
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140405A70
#define CItemDisplayWnd__RequestConvertItem_x                      0x140406C20

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404CFB00
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D17B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14050A770

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140400960

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148470

// CLabel
#define CLabel__UpdateText_x                                       0x1404115F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x14057F960
#define CListWnd__dCListWnd_x                                      0x14057FDB0
#define CListWnd__vftable_x                                        0x140861668
#define CListWnd__AddColumn_x                                      0x140580450
#define CListWnd__AddColumn1_x                                     0x1405804F0
#define CListWnd__AddLine_x                                        0x140580650
#define CListWnd__AddString_x                                      0x140580BE0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140581150
#define CListWnd__CalculateVSBRange_x                              0x140581420
#define CListWnd__ClearSel_x                                       0x1405815D0
#define CListWnd__ClearAllSel_x                                    0x140581570
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140581630
#define CListWnd__Compare_x                                        0x1405817F0
#define CListWnd__Draw_x                                           0x140581CC0
#define CListWnd__DrawColumnSeparators_x                           0x140582860
#define CListWnd__DrawHeader_x                                     0x140582920
#define CListWnd__DrawItem_x                                       0x140582FF0
#define CListWnd__DrawLine_x                                       0x140583970
#define CListWnd__DrawSeparator_x                                  0x140583E30
#define CListWnd__EnableLine_x                                     0x140584250
#define CListWnd__EnsureVisible_x                                  0x1405842B0
#define CListWnd__ExtendSel_x                                      0x1405843B0
#define CListWnd__GetColumnMinWidth_x                              0x1405846E0
#define CListWnd__GetColumnWidth_x                                 0x140584760
#define CListWnd__GetCurSel_x                                      0x140584860
#define CListWnd__GetItemData_x                                    0x140584BE0
#define CListWnd__GetItemHeight_x                                  0x140584C20
#define CListWnd__GetItemRect_x                                    0x140584E40
#define CListWnd__GetItemText_x                                    0x1405850E0
#define CListWnd__GetSelList_x                                     0x140585330
#define CListWnd__GetSeparatorRect_x                               0x140585520
#define CListWnd__InsertLine_x                                     0x140586980
#define CListWnd__RemoveLine_x                                     0x140586FF0
#define CListWnd__SetColors_x                                      0x1405873B0
#define CListWnd__SetColumnJustification_x                         0x1405873D0
#define CListWnd__SetColumnLabel_x                                 0x140587450
#define CListWnd__SetColumnWidth_x                                 0x1405875F0
#define CListWnd__SetCurSel_x                                      0x1405876C0
#define CListWnd__SetItemColor_x                                   0x140587930
#define CListWnd__SetItemData_x                                    0x1405879D0
#define CListWnd__SetItemText_x                                    0x140587C10
#define CListWnd__Sort_x                                           0x140588020
#define CListWnd__ToggleSel_x                                      0x140588190
#define CListWnd__SetColumnsSizable_x                              0x140587640
#define CListWnd__SetItemWnd_x                                     0x140587D40
#define CListWnd__GetItemWnd_x                                     0x1405852C0
#define CListWnd__SetItemIcon_x                                    0x140587A10
#define CListWnd__CalculateCustomWindowPositions_x                 0x140580F20
#define CListWnd__SetVScrollPos_x                                  0x140587F80

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404248C0

// MapViewMap
#define MapViewMap__vftable_x                                      0x14083C020
#define MapViewMap__Clear_x                                        0x140426430
#define MapViewMap__SetZoom_x                                      0x14042CA70
#define MapViewMap__HandleLButtonDown_x                            0x1404295B0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14044E0E0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404546C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140454E60
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140458680
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404579D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14045C930

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14062CA50
#define CPacketScrambler__hton_x                                   0x14062CA40

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405A89E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405A8920
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405A9010
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405A8DC0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405A7D20
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405A7CB0
#define CSidlManagerBase__CreateXWnd_x                             0x1405A7310

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404C2B50
#define CSidlManager__CreateXWnd_x                                 0x1404C2D10

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14056D890
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14056D780
#define CSidlScreenWnd__ConvertToRes_x                             0x1405B7B60 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14056DA10
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14056CED0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14056CFA0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14056D1B0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14056E0B0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14056E2E0
#define CSidlScreenWnd__GetChildItem_x                             0x14056E470
#define CSidlScreenWnd__GetSidlPiece_x                             0x14056E6C0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140578620 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14056EA30
#define CSidlScreenWnd__LoadIniInfo_x                              0x14056EDA0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14056F660
#define CSidlScreenWnd__LoadSidlScreen_x                           0x14056FF50
#define CSidlScreenWnd__m_layoutCopy_x                             0x140CACDB8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140570580
#define CSidlScreenWnd__StoreIniVis_x                              0x140570D70
#define CSidlScreenWnd__vftable_x                                  0x140860908
#define CSidlScreenWnd__WndNotification_x                          0x140570DC0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14030FAB0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14030FEC0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14030FDF0
#define CSkillMgr__IsActivatedSkill_x                              0x140310270
#define CSkillMgr__IsCombatSkill_x                                 0x1403102B0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DFBC0
#define CSliderWnd__SetValue_x                                     0x140589310
#define CSliderWnd__SetNumTicks_x                                  0x140589190

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404C9170

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14058DC60
#define CStmlWnd__CalculateHSBRange_x                              0x140578020
#define CStmlWnd__CalculateVSBRange_x                              0x14058EAF0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14058F5C0
#define CStmlWnd__ForceParseNow_x                                  0x14058F660
#define CStmlWnd__GetVisibleText_x                                 0x14058FD30
#define CStmlWnd__MakeStmlColorTag_x                               0x140591A70
#define CStmlWnd__MakeWndNotificationTag_x                         0x140591AB0
#define CStmlWnd__SetSTMLText_x                                    0x140598A80
#define CStmlWnd__StripFirstSTMLLines_x                            0x140598C30
#define CStmlWnd__UpdateHistoryString_x                            0x140598FC0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405898C0
#define CTabWnd__DrawCurrentPage_x                                 0x140589960
#define CTabWnd__DrawTab_x                                         0x140589D30
#define CTabWnd__GetTabRect_x                                      0x14058A390
#define CTabWnd__InsertPage_x                                      0x14058A660
#define CTabWnd__RemovePage_x                                      0x14058A8E0
#define CTabWnd__SetPage_x                                         0x14058AA40
#define CTabWnd__UpdatePage_x                                      0x14058AD40

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405B1C70
#define CPageWnd__SetTabText_x                                     0x1405B1CE0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400B9D60  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA170


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A03E0
#define CTextureFont__DrawWrappedText1_x                           0x1405A02F0
#define CTextureFont__DrawWrappedText2_x                           0x1405A0510
#define CTextureFont__GetTextExtent_x                              0x1405A08C0
#define CTextureFont__GetHeight_x                                  0x1405A0880

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405B62C0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14056CAB0

// CXStr
#define CXStr__gFreeLists_x                                        0x140ADC8D0
#define CXStr__gCXStrAccess_x                                      0x140CACBB8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405737E0
#define CXWnd__ClrFocus_x                                          0x140573A20
#define CXWnd__Destroy_x                                           0x140573BA0
#define CXWnd__DoAllDrawing_x                                      0x140573CA0
#define CXWnd__DrawColoredRect_x                                   0x140574460
#define CXWnd__DrawTooltip_x                                       0x140575AB0
#define CXWnd__DrawTooltipAtPoint_x                                0x140575B60
#define CXWnd__GetChildItem_x                                      0x140576450
#define CXWnd__GetChildWndAt_x                                     0x140576510
#define CXWnd__GetClientRect_x                                     0x1405767B0
#define CXWnd__GetClientClipRect_x                                 0x140576670
#define CXWnd__GetRelativeRect_x                                   0x140578150
#define CXWnd__GetScreenClipRect_x                                 0x140578250
#define CXWnd__GetScreenRect_x                                     0x1405783C0
#define CXWnd__GetTooltipRect_x                                    0x140578530
#define CXWnd__IsActive_x                                          0x140578AD0
#define CXWnd__IsDescendantOf_x                                    0x140578B00
#define CXWnd__IsReallyVisible_x                                   0x140578B70
#define CXWnd__IsType_x                                            0x140578BB0
#define CXWnd__Minimize_x                                          0x140578CB0
#define CXWnd__ProcessTransition_x                                 0x140579B30
#define CXWnd__Resize_x                                            0x140579C50
#define CXWnd__Right_x                                             0x140579CF0
#define CXWnd__SetFocus_x                                          0x14057A0A0
#define CXWnd__SetFont_x                                           0x14057A0F0
#define CXWnd__SetKeyTooltip_x                                     0x14057A1E0
#define CXWnd__SetMouseOver_x                                      0x14057A320
#define CXWnd__SetParent_x                                         0x14057A390
#define CXWnd__StartFade_x                                         0x14057A7C0
#define CXWnd__vftable_x                                           0x140860EE8
#define CXWnd__CXWnd_x                                             0x140572380
#define CXWnd__dCXWnd_x                                            0x140572CD0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405BCD20

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x14059A890
#define CXWndManager__DrawCursor_x                                 0x14059AB70
#define CXWndManager__DrawWindows_x                                0x14059ADD0
#define CXWndManager__GetKeyboardFlags_x                           0x14059B4A0
#define CXWndManager__HandleKeyboardMsg_x                          0x14059B4E0
#define CXWndManager__RemoveWnd_x                                  0x14059EAB0

// CDBStr
#define CDBStr__GetString_x                                        0x14017DBD0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140635B60

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CDFF0
#define CCharacterListWnd__EnterWorld_x                            0x1400CCCF0
#define CCharacterListWnd__Quit_x                                  0x1400CDFD0
#define CCharacterListWnd__UpdateList_x                            0x1400CECE0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140605150
#define ItemBase__CreateItemTagString_x                            0x140605BC0
#define ItemBase__GetImageNum_x                                    0x140608170
#define ItemBase__GetItemValue_x                                   0x140609C30
#define ItemBase__IsEmpty_x                                        0x14060B840
#define ItemBase__IsKeyRingItem_x                                  0x14060BF70
#define ItemBase__ValueSellMerchant_x                              0x140610120
#define ItemClient__CanDrop_x                                      0x14029BA90
#define ItemClient__CanGoInBag_x                                   0x14029BBC0
#define ItemClient__CreateItemClient_x                             0x14029BEA0
#define ItemClient__dItemClient_x                                  0x14029B900

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D250
#define EQ_LoadingS__Array_x                                       0x140AC8CE0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14061C0B0
#define PcBase__GetCombatAbility_x                                 0x14061C750
#define PcBase__GetCombatAbilityTimer_x                            0x14061C7F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14061CF40
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14061D8D0
#define PcClient__AlertInventoryChanged_x                          0x1402BD5E0
#define PcClient__GetConLevel_x                                    0x1402BDBC0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C0290
#define PcClient__HasLoreItem_x                                    0x1402C1390
#define PcZoneClient__GetItemRecastTimer_x                         0x1402CE3B0
#define PcZoneClient__RemoveMyAffect_x                             0x1402D0F40

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020AAC0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020AC70  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020ADD0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020AD10  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x1402438B0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x140178410

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140679520
#define PlayerBase__CanSee1_x                                      0x1406795F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x140679AB0
#define PlayerBase__HasProperty_x                                  0x140679CD0
#define PlayerBase__IsTargetable_x                                 0x140679D90
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402DCE80
#define PlayerClient__GetPcClient_x                                0x1402DF6B0
#define PlayerClient__PlayerClient_x                               0x1402D61F0
#define PlayerClient__SetNameSpriteState_x                         0x1402E2B60
#define PlayerClient__SetNameSpriteTint_x                          0x1402E3B20
#define PlayerZoneClient__ChangeHeight_x                           0x1402F21F0
#define PlayerZoneClient__DoAttack_x                               0x1402F2F00
#define PlayerZoneClient__GetLevel_x                               0x1402F6670
#define PlayerZoneClient__IsValidTeleport_x                        0x140246630
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C110

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402EB9B0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402EBA60  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402EBB60
#define PlayerManagerClient__CreatePlayer_x                        0x1402EB480
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140679100

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A0EF0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A0AF0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A0B60
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A0E80  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A1010
#define KeypressHandler__HandleKeyUp_x                             0x1402A1110
#define KeypressHandler__SaveKeymapping_x                          0x1402A0D90  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406336E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14062E180

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C6B20  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CC3C0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402CEAB0
#define PcZoneClient__RemovePetEffect_x                            0x1402D1040
#define PcZoneClient__HasAlternateAbility_x                        0x1402CF790
#define PcZoneClient__CanEquipItem_x                               0x1402CA6C0
#define PcZoneClient__GetItemByID_x                                0x1402CD450
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D0DC0
#define PcZoneClient__BandolierSwap_x                              0x1402C96A0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x1402CEA00

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024B160

// IconCache
#define IconCache__GetIcon_x                                       0x1403A1B60

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403966E0
#define CContainerMgr__CloseContainer_x                            0x140396020
#define CContainerMgr__OpenExperimentContainer_x                   0x140396A60

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404879E0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140293C70

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404188D0
#define CLootWnd__RequestLootSlot_x                                0x140419900

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC560
#define EQ_Spell__SpellAffects_x                                   0x1401CD820
#define EQ_Spell__SpellAffectBase_x                                0x1401CD780
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6B80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6B30
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD440
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD000
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CC8D0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF250

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404E3250
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404E2960
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404E2190

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404EA2D0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140174CB0
#define CTaskManager__GetTaskStatus_x                              0x140174DC0
#define CTaskManager__GetElementDescription_x                      0x140174940

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CA8D0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9710
#define EqSoundManager__SoundAssistPlay_x                          0x140314FA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x1403152E0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14057B560
#define CTextureAnimation__SetCurCell_x                            0x14057B870

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140291EE0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14064D350
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14064D3D0
#define CharacterBase__IsExpansionFlag_x                           0x1401ECF60

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403761C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140376B30
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140378070

// messages
#define msg_spell_worn_off_x                                       0x140201540
#define msg_new_text_x                                             0x1401FCE10
#define __msgTokenTextParam_x                                      0x1401F4BB0
#define msgTokenText_x                                             0x1401F4AD0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140316990
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403168B0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406882B0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140411D40

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x14039DBC0
#define CCursorAttachment__AttachToCursor1_x                       0x14039B280
#define CCursorAttachment__Deactivate_x                            0x14039E130

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405B4760
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405B4950
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405B4960

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140143710
#define CFindItemWnd__Update_x                                     0x1401440B0
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DBD0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CF10
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA20
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E2C0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E570

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14046A860

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14068D840
#define CResolutionHandler__GetWindowedStyle_x                     0x14030F610

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140392A20

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406513F0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406512E0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403B75E0
#define CGroupWnd__UpdateDisplay_x                                 0x1403B71C0

// ItemBase
#define ItemBase__IsLore_x                                         0x14060C040
#define ItemBase__IsLoreEquipped_x                                 0x14060C0D0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B3C00

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140243A10
#define EQPlacedItemManager__GetItemByGuid_x                       0x1402439A0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402439E0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140309BF0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DAF0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DEA0
#define FactionManagerClient__GetFactionStanding_x                 0x14011D2C0
#define FactionManagerClient__GetMaxFaction_x                      0x14011D2C0
#define FactionManagerClient__GetMinFaction_x                      0x14011D170

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400ABF40

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129240

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5BB0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A4F30
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A59D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5950  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14031BAA0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140309BF0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020AE60

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405713B0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084A10

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14032CF10

// AchievementManager
#define AchievementManager__Instance_x                             0x14008BF20

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140636580
#define FreeToPlayClient__RestrictionInfo_x                        0x140872D60

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
