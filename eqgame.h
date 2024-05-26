/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-present MacroQuest Authors
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

#define __ClientDate                                               20240520u
#define __ExpectedVersionDate                                     "May 20 2024"
#define __ExpectedVersionTime                                     "19:10:18"
#define __ActualVersionDate_x                                      0x14093FA50
#define __ActualVersionTime_x                                      0x14093FA40
#define __ActualVersionBuild_x                                     0x1408D6490

// Memory Protection
#define __MemChecker0_x                                            0x1402AFE40
#define __MemChecker1_x                                            0x14056C550
#define __MemChecker4_x                                            0x14027E750
#define __EncryptPad0_x                                            0x140D0CE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E45A80
#define instEQZoneInfo_x                                           0x140E45C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140215C10
#define __gfMaxZoomCameraDistance_x                                0x1408D7708
#define __gfMaxCameraDistance_x                                    0x140A7C264
#define __CurrentSocial_x                                          0x140BC8940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D04710
#define g_eqCommandStates_x                                        0x140D05780
#define __CommandList_x                                            0x140D059C0
#define __ScreenMode_x                                             0x140D8D27C
#define __gWorld_x                                                 0x140E3E320
#define __gpbCommandEvent_x                                        0x140E408E4
#define __ServerHost_x                                             0x140E3E008
#define __Guilds_x                                                 0x140E44630
#define __MouseEventTime_x                                         0x140EBAFF0
#define DI8__MouseState_x                                          0x140EBF200
#define __heqmain_x                                                0x140EC1690
#define DI8__Mouse_x                                               0x140EBF1D0
#define __HWnd_x                                                   0x140EBF1D8
#define __Mouse_x                                                  0x140EC16A8
#define DI8__Keyboard_x                                            0x140EC16C8
#define __LoginName_x                                              0x140EC1DAC
#define __CurrentMapLabel_x                                        0x140ED55B0
#define __LabelCache_x                                             0x140ED6180
#define __ChatFilterDefs_x                                         0x140A17350
#define Teleport_Table_Size_x                                      0x140E40970
#define Teleport_Table_x                                           0x140E3E420

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E409C0
#define pinstActiveBanker_x                                        0x140E3E348
#define pinstActiveCorpse_x                                        0x140E3E338
#define pinstActiveGMaster_x                                       0x140E3E340
#define pinstActiveMerchant_x                                      0x140E3E330
#define pinstAltAdvManager_x                                       0x140D8E1D8
#define pinstCEverQuest_x                                          0x140EBF148
#define pinstCamActor_x                                            0x140D8D268
#define pinstCDBStr_x                                              0x140D8CF90
#define pinstCDisplay_x                                            0x140E40430
#define pinstControlledPlayer_x                                    0x140E3E3D8
#define pinstCResolutionHandler_x                                  0x141546948
#define pinstCSidlManager_x                                        0x140EE7480
#define pinstCXWndManager_x                                        0x140EE7478
#define instDynamicZone_x                                          0x140E444F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4453E
#define instExpeditionName_x                                       0x140E4457E
#define pinstDZMember_x                                            0x140E44608
#define pinstDZTimerInfo_x                                         0x140E44610
#define pinstEqLogin_x                                             0x140EC16F0
#define instTribute_x                                              0x140CFFD50
#define pinstEQSoundManager_x                                      0x140D8E558
#define pinstEQSpellStrings_x                                      0x140D71B60
#define pinstSGraphicsEngine_x                                     0x1415466C8
#define pinstLocalPC_x                                             0x140E3E410
#define pinstLocalPlayer_x                                         0x140E3E328
#define pinstCMercenaryClientManager_x                             0x140EBC8E8
#define pinstModelPlayer_x                                         0x140E3E358
#define pinstRenderInterface_x                                     0x1415466E0
#define pinstSkillMgr_x                                            0x140EBE580
#define pinstSpawnManager_x                                        0x140EBCCA0
#define pinstSpellManager_x                                        0x140EBE5E8
#define pinstStringTable_x                                         0x140E3E418
#define pinstSwitchManager_x                                       0x140E3DE80
#define pinstTarget_x                                              0x140E3E3D0
#define pinstTaskMember_x                                          0x140CFFD40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E3E3E0
#define pinstTradeTarget_x                                         0x140E3E350
#define instTributeActive_x                                        0x140CFFD79
#define pinstViewActor_x                                           0x140D8D260
#define pinstWorldData_x                                           0x140E40420
#define pinstPlayerPath_x                                          0x140EBCCC8
#define pinstTargetIndicator_x                                     0x140EBE698
#define EQObject_Top_x                                             0x140E3E3F8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED2708
#define pinstCContainerMgr_x                                       0x140D8D508
#define pinstCContextMenuManager_x                                 0x140EE7160
#define pinstCInvSlotMgr_x                                         0x140D8D500
#define pinstCItemDisplayManager_x                                 0x140ED5180
#define pinstCPopupWndManager_x                                    0x140ED5A10
#define pinstCSpellDisplayMgr_x                                    0x140ED6060
#define pinstCTaskManager_x                                        0x140BC8C80
#define pinstEQSuiteTextureLoader_x                                0x140D16530
#define pinstItemIconCache_x                                       0x140ED2A68
#define pinstLootFiltersManager_x                                  0x140D8C9D8
#define pinstGFViewListener_x                                      0x140EE6938


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023E810
#define __CastRay_x                                                0x140236C60
#define __CastRay2_x                                               0x140236960
#define __ConvertItemTags_x                                        0x1402370C0
#define __CleanItemTags_x                                          0x140087F30
#define __CreateCascadeMenuItems_x                                 0x140186560
#define __DoesFileExist_x                                          0x140570400
#define __EQGetTime_x                                              0x14056CB00
#define __ExecuteCmd_x                                             0x14020D520
#define __FixHeading_x                                             0x1406980D0
#define __FlushDxKeyboard_x                                        0x140331D80
#define __get_bearing_x                                            0x140240A00
#define __get_melee_range_x                                        0x140240AF0
#define __GetAnimationCache_x                                      0x1403AF550
#define __GetGaugeValueFromEQ_x                                    0x1404E2C90
#define __GetLabelFromEQ_x                                         0x1404E4290
#define __GetXTargetType_x                                         0x1406993B0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140698150
#define __HelpPath_x                                               0x140EBAEB8   // Why?
#define __NewUIINI_x                                               0x1404EFC60   // Why?
#define __ProcessGameEvents_x                                      0x140273C50
#define __ProcessKeyboardEvents_x                                  0x1403334D0
#define __ProcessMouseEvents_x                                     0x140275170
#define __SaveColors_x                                             0x140196550
#define __STMLToText_x                                             0x140574D40
#define __WndProc_x                                                0x140330580
#define CMemoryMappedFile__SetFile_x                               0x1407D0320
#define DrawNetStatus_x                                            0x1402BE290
#define Util__FastTime_x                                           0x14056C090
#define __eq_delete_x                                              0x1406A0014
#define __eq_new_x                                                 0x14069FFD0
#define __CopyLayout_x                                             0x1402AC250
#define __ThrottleFrameRate_x                                      0x1402634B4
#define __ThrottleFrameRateEnd_x                                   0x140263514

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140342E70
#define CAAWnd__Update_x                                           0x140343170
#define CAAWnd__UpdateSelected_x                                   0x1403441B0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA340
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2C30
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140824A60
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAC30

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1660
#define AltAdvManager__IsAbilityReady_x                            0x1401A18E0
#define AltAdvManager__GetAAById_x                                 0x1401A0F30
#define AltAdvManager__CanTrainAbility_x                           0x1401A0D60
#define AltAdvManager__CanSeeAbility_x                             0x1401A0A20

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0D00
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1B40
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1D90
#define CharacterZoneClient__CanUseItem_x                          0x1400E60D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2760
#define CharacterZoneClient__CastSpell_x                           0x1400D2800
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1C00
#define CharacterZoneClient__Cur_HP_x                              0x1400E77E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E79A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5590
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDE60
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC890  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6AC0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E55A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFA20
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE8F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6C90
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7110
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8AE0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF030
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7450
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFCB0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6D10
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0A90
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6F10
#define CharacterZoneClient__GetModCap_x                           0x1400F8050
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6FA0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D71B0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC50
#define CharacterZoneClient__HasSkill_x                            0x1400F3A80
#define CharacterZoneClient__HitBySpell_x                          0x1400D7C60
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB400
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7B30
#define CharacterZoneClient__Max_Endurance_x                       0x1402DAE60  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7E80
#define CharacterZoneClient__Max_Mana_x                            0x1402DB080  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F82E0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE790
#define CharacterZoneClient__SpellDuration_x                       0x1400DF490
#define CharacterZoneClient__TotalEffect_x                         0x1400E07E0
#define CharacterZoneClient__UseSkill_x                            0x1400FD800


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361340

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036B670

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140367500
#define CBarterSearchWnd__UpdateInventoryList_x                    0x140366590

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036DD20

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9AF50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140390ED0
#define CChatWindowManager__InitContextMenu_x                      0x140391060
#define CChatWindowManager__FreeChatWindow_x                       0x14038FF50
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140398C10
#define CChatWindowManager__CreateChatWindow_x                     0x14038F890

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105BA0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140399C50
#define CChatWindow__Clear_x                                       0x14039ABA0
#define CChatWindow__WndNotification_x                             0x14039BD70
#define CChatWindow__AddHistory_x                                  0x14039A6B0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A9C50
#define CContextMenu__RemoveMenuItem_x                             0x1405AA030
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AA000
#define CContextMenu__CheckMenuItem_x                              0x1405A9E70
#define CContextMenu__SetMenuItem_x                                0x1405AA050
#define CContextMenu__AddSeparator_x                               0x1405A9DB0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059BBA0
#define CContextMenuManager__RemoveMenu_x                          0x14059C180
#define CContextMenuManager__PopupMenu_x                           0x14059BEC0
#define CContextMenuManager__Flush_x                               0x14059BC20
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A74A0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140661380
#define CChatService__GetFriendName_x                              0x140661390

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058CBA0
#define CComboWnd__Draw_x                                          0x14058CC90
#define CComboWnd__GetCurChoice_x                                  0x14058CF60  // unused
#define CComboWnd__GetListRect_x                                   0x14058D000
#define CComboWnd__InsertChoice_x                                  0x14058D320
#define CComboWnd__SetColors_x                                     0x14058D6B0
#define CComboWnd__SetChoice_x                                     0x14058D670
#define CComboWnd__GetItemCount_x                                  0x14058CFF0
#define CComboWnd__GetCurChoiceText_x                              0x14058CFA0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058CF30
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058D3E0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5220
#define CContainerWnd__SetContainer_x                              0x1403FA6B0
#define CContainerWnd__vftable_x                                   0x1409B3498

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8CFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C3DB0
#define CDisplay__PreZoneMainUI_x                                  0x140193480
#define CDisplay__CleanGameUI_x                                    0x140185640
#define CDisplay__GetClickedActor_x                                0x1401897B0
#define CDisplay__GetUserDefinedColor_x                            0x14018A420
#define CDisplay__InitCharSelectUI_x                               0x14018A6D0
#define CDisplay__ReloadUI_x                                       0x140195770
#define CDisplay__WriteTextHD2_x                                   0x14019C780
#define CDisplay__TrueDistance_x                                   0x14019C430
#define CDisplay__SetViewActor_x                                   0x140198C70
#define CDisplay__GetFloorHeight_x                                 0x140189A10
#define CDisplay__ToggleScreenshotMode_x                           0x14019BF20
#define CDisplay__RealRender_World_x                               0x140194B50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CDF70
#define CEditWnd__DrawCaret_x                                      0x1405BFAB0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405BFF40
#define CEditWnd__GetCaretPt_x                                     0x1405C01B0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C01F0
#define CEditWnd__GetDisplayString_x                               0x1405C0450
#define CEditWnd__GetHorzOffset_x                                  0x1405C0690
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C07D0
#define CEditWnd__GetSelStartPt_x                                  0x1405C0AB0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C0900
#define CEditWnd__PointFromPrintableChar_x                         0x1405C16D0
#define CEditWnd__ReplaceSelection_x                               0x1405C1A70
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C1F10
#define CEditWnd__SetEditable_x                                    0x1405C2190
#define CEditWnd__SetWindowText_x                                  0x1405C21C0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402645C0
#define CEverQuest__ClickedPlayer_x                                0x14025A0C0
#define CEverQuest__CreateTargetIndicator_x                        0x14025A980
#define CEverQuest__DoTellWindow_x                                 0x1401058B0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106170 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140265F80
#define CEverQuest__dsp_chat_x                                     0x1401052E0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140290170
#define CEverQuest__Emote_x                                        0x140266960
#define CEverQuest__GetBodyTypeDesc_x                              0x140267710
#define CEverQuest__GetClassDesc_x                                 0x140267770
#define CEverQuest__GetClassThreeLetterCode_x                      0x140267B40
#define CEverQuest__GetDeityDesc_x                                 0x140267DF0
#define CEverQuest__GetLangDesc_x                                  0x140268220
#define CEverQuest__GetRaceDesc_x                                  0x1402685C0
#define CEverQuest__InterpretCmd_x                                 0x140269EF0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027EDD0
#define CEverQuest__LMouseUp_x                                     0x14026B8E0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027C5F0
#define CEverQuest__RMouseUp_x                                     0x140275CF0
#define CEverQuest__SetGameState_x                                 0x140281310
#define CEverQuest__UPCNotificationFlush_x                         0x140286C40 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026B550
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402770A0
#define CEverQuest__ReportSuccessfulHit_x                          0x140277EC0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B9920

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0EB0
#define CGuild__GetGuildName_x                                     0x1400C0EF0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DBE40

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A1D70
#define CHotButton__SetCheck_x                                     0x1402A2040

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F3450
#define CInvSlotMgr__MoveItem_x                                    0x1403F3630
#define CInvSlotMgr__SelectSlot_x                                  0x1403F4FA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F0680
#define CInvSlot__SliderComplete_x                                 0x1403F1BD0
#define CInvSlot__GetItemBase_x                                    0x1403EC2B0
#define CInvSlot__UpdateItem_x                                     0x1403F2080

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F6330

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x1404174A0
#define CItemDisplayWnd__UpdateStrings_x                           0x140419DB0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140413FF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140415730
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404168C0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404DF7B0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E14A0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051AF60

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140410740

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DE90

// CLabel
#define CLabel__UpdateText_x                                       0x140421190

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405904F0
#define CListWnd__dCListWnd_x                                      0x140590930
#define CListWnd__vftable_x                                        0x140A990A8
#define CListWnd__AddColumn_x                                      0x140590FD0
#define CListWnd__AddColumn1_x                                     0x140591070
#define CListWnd__AddLine_x                                        0x1405911D0
#define CListWnd__AddString_x                                      0x140591760
#define CListWnd__CalculateFirstVisibleLine_x                      0x140591CD0
#define CListWnd__CalculateVSBRange_x                              0x140591FB0
#define CListWnd__ClearSel_x                                       0x140592150
#define CListWnd__ClearAllSel_x                                    0x1405920F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405921B0
#define CListWnd__Compare_x                                        0x140592370
#define CListWnd__Draw_x                                           0x140592840
#define CListWnd__DrawColumnSeparators_x                           0x1405933E0
#define CListWnd__DrawHeader_x                                     0x1405934A0
#define CListWnd__DrawItem_x                                       0x140593B70
#define CListWnd__DrawLine_x                                       0x1405944E0
#define CListWnd__DrawSeparator_x                                  0x1405949A0
#define CListWnd__EnableLine_x                                     0x140594DC0
#define CListWnd__EnsureVisible_x                                  0x140594E20
#define CListWnd__ExtendSel_x                                      0x140594F10
#define CListWnd__GetColumnMinWidth_x                              0x140595240
#define CListWnd__GetColumnWidth_x                                 0x1405952C0
#define CListWnd__GetCurSel_x                                      0x1405953C0
#define CListWnd__GetItemData_x                                    0x140595740
#define CListWnd__GetItemHeight_x                                  0x140595780
#define CListWnd__GetItemRect_x                                    0x1405959A0
#define CListWnd__GetItemText_x                                    0x140595C40
#define CListWnd__GetSelList_x                                     0x140595E90
#define CListWnd__GetSeparatorRect_x                               0x140596080
#define CListWnd__InsertLine_x                                     0x1405974D0
#define CListWnd__RemoveLine_x                                     0x140597B40
#define CListWnd__SetColors_x                                      0x140597F00
#define CListWnd__SetColumnJustification_x                         0x140597F20
#define CListWnd__SetColumnLabel_x                                 0x140597FA0
#define CListWnd__SetColumnWidth_x                                 0x140598140
#define CListWnd__SetCurSel_x                                      0x140598210
#define CListWnd__SetItemColor_x                                   0x140598480
#define CListWnd__SetItemData_x                                    0x140598520
#define CListWnd__SetItemText_x                                    0x140598760
#define CListWnd__Sort_x                                           0x140598B70
#define CListWnd__ToggleSel_x                                      0x140598CE0
#define CListWnd__SetColumnsSizable_x                              0x140598190
#define CListWnd__SetItemWnd_x                                     0x140598890
#define CListWnd__GetItemWnd_x                                     0x140595E20
#define CListWnd__SetItemIcon_x                                    0x140598560
#define CListWnd__CalculateCustomWindowPositions_x                 0x140591AA0
#define CListWnd__SetVScrollPos_x                                  0x140598AD0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140434420

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409FFF68
#define MapViewMap__Clear_x                                        0x140435FA0
#define MapViewMap__SetZoom_x                                      0x14043C5F0
#define MapViewMap__HandleLButtonDown_x                            0x140439130

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045DCD0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140464260
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140464A00
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140468200
#define CMerchantWnd__SelectBuySellSlot_x                          0x140467550
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046C480

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063DE00
#define CPacketScrambler__hton_x                                   0x14063DDF0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B9380
#define CSidlManagerBase__FindAnimation1_x                         0x1405B92C0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B99B0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B9760
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B86C0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B8650
#define CSidlManagerBase__CreateXWnd_x                             0x1405B7CB0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D27C0
#define CSidlManager__CreateXWnd_x                                 0x1404D2980

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057E1D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057E0A0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C8520 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057E340
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057D7F0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057D8C0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057DAD0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057EA20
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057EC50
#define CSidlScreenWnd__GetChildItem_x                             0x14057EDF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14057F040
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140589110 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14057F3B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x14057F720
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14057FFE0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405808D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE67D8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140580F10
#define CSidlScreenWnd__StoreIniVis_x                              0x140581700
#define CSidlScreenWnd__vftable_x                                  0x140A98318
#define CSidlScreenWnd__WndNotification_x                          0x140581750

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031B2F0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031B790 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031B6C0
#define CSkillMgr__IsActivatedSkill_x                              0x14031BB40
#define CSkillMgr__IsCombatSkill_x                                 0x14031BB80
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031BAB0
#define CSkillMgr__GetSkillLastUsed_x                              0x14031B710

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140599660
#define CSliderWnd__SetValue_x                                     0x140599E70
#define CSliderWnd__SetNumTicks_x                                  0x140599CF0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D8E10

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059E600
#define CStmlWnd__CalculateHSBRange_x                              0x140588AC0
#define CStmlWnd__CalculateVSBRange_x                              0x14059F510
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14059FF50
#define CStmlWnd__ForceParseNow_x                                  0x14059FFF0
#define CStmlWnd__GetVisibleText_x                                 0x1405A06B0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A2400
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A2440
#define CStmlWnd__SetSTMLText_x                                    0x1405A9400
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A95B0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A9940

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059A240
#define CTabWnd__DrawCurrentPage_x                                 0x14059A2E0
#define CTabWnd__DrawTab_x                                         0x14059A6B0
#define CTabWnd__GetTabRect_x                                      0x14059AD10
#define CTabWnd__InsertPage_x                                      0x14059AFE0
#define CTabWnd__RemovePage_x                                      0x14059B270
#define CTabWnd__SetPage_x                                         0x14059B3D0
#define CTabWnd__UpdatePage_x                                      0x14059B6D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C2620
#define CPageWnd__SetTabText_x                                     0x1405C2690

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA600  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BAA10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B0D60
#define CTextureFont__DrawWrappedText1_x                           0x1405B0C70
#define CTextureFont__DrawWrappedText2_x                           0x1405B0E90
#define CTextureFont__GetTextExtent_x                              0x1405B1240
#define CTextureFont__GetHeight_x                                  0x1405B1200

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C6C80

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057D3D0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D15EA0
#define CXStr__gCXStrAccess_x                                      0x140EE65D8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140584150
#define CXWnd__ClrFocus_x                                          0x140584440
#define CXWnd__Destroy_x                                           0x1405845C0
#define CXWnd__DoAllDrawing_x                                      0x1405846D0
#define CXWnd__DrawColoredRect_x                                   0x140584EA0
#define CXWnd__DrawTooltip_x                                       0x140586500
#define CXWnd__DrawTooltipAtPoint_x                                0x1405865B0
#define CXWnd__GetChildItem_x                                      0x140586EB0
#define CXWnd__GetChildWndAt_x                                     0x140586F70
#define CXWnd__GetClientRect_x                                     0x140587220
#define CXWnd__GetClientClipRect_x                                 0x1405870D0
#define CXWnd__GetRelativeRect_x                                   0x140588C00
#define CXWnd__GetScreenClipRect_x                                 0x140588D10
#define CXWnd__GetScreenRect_x                                     0x140588E90
#define CXWnd__GetTooltipRect_x                                    0x140589010
#define CXWnd__IsActive_x                                          0x1405895D0
#define CXWnd__IsDescendantOf_x                                    0x140589600
#define CXWnd__IsReallyVisible_x                                   0x140589670
#define CXWnd__IsType_x                                            0x1405896B0
#define CXWnd__Minimize_x                                          0x1405897B0
#define CXWnd__ProcessTransition_x                                 0x14058A6A0
#define CXWnd__Resize_x                                            0x14058A7C0
#define CXWnd__Right_x                                             0x14058A860
#define CXWnd__SetFocus_x                                          0x14058AC10
#define CXWnd__SetFont_x                                           0x14058AC60
#define CXWnd__SetKeyTooltip_x                                     0x14058AD60
#define CXWnd__SetMouseOver_x                                      0x14058AEA0
#define CXWnd__SetParent_x                                         0x14058AF20
#define CXWnd__StartFade_x                                         0x14058B360
#define CXWnd__vftable_x                                           0x140A98908
#define CXWnd__CXWnd_x                                             0x140582D10
#define CXWnd__dCXWnd_x                                            0x140583650

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CD6F0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AB1F0
#define CXWndManager__DrawCursor_x                                 0x1405AB4D0
#define CXWndManager__DrawWindows_x                                0x1405AB730
#define CXWndManager__GetKeyboardFlags_x                           0x1405ABE00
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ABE40
#define CXWndManager__RemoveWnd_x                                  0x1405AF430

// CDBStr
#define CDBStr__GetString_x                                        0x1401837F0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140647090

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE880
#define CCharacterListWnd__EnterWorld_x                            0x1400CD580
#define CCharacterListWnd__Quit_x                                  0x1400CE860
#define CCharacterListWnd__UpdateList_x                            0x1400CF6F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140615B20
#define ItemBase__CreateItemTagString_x                            0x140616590
#define ItemBase__GetImageNum_x                                    0x140618B50
#define ItemBase__GetItemValue_x                                   0x14061A600
#define ItemBase__IsEmpty_x                                        0x14061C200
#define ItemBase__IsKeyRingItem_x                                  0x14061C940
#define ItemBase__ValueSellMerchant_x                              0x140620B10
#define ItemClient__CanDrop_x                                      0x1402A4330
#define ItemClient__CanGoInBag_x                                   0x1402A4460
#define ItemClient__CreateItemClient_x                             0x1402A4740
#define ItemClient__dItemClient_x                                  0x1402A41A0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A2E00
#define EQ_LoadingS__Array_x                                       0x140D02220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062D250
#define PcBase__GetCombatAbility_x                                 0x14062D8F0
#define PcBase__GetCombatAbilityTimer_x                            0x14062D990
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062E0E0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14062EBD0
#define PcClient__AlertInventoryChanged_x                          0x1402C6870
#define PcClient__GetConLevel_x                                    0x1402C6E90  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C95D0
#define PcClient__HasLoreItem_x                                    0x1402CA5A0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D7E10
#define PcZoneClient__RemoveMyAffect_x                             0x1402DBF00

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140211C30  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140211DE0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140211F40  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140211E80  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024B790  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E040

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068A960
#define PlayerBase__CanSee1_x                                      0x14068AA30
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068AEF0
#define PlayerBase__HasProperty_x                                  0x14068B0C0
#define PlayerBase__IsTargetable_x                                 0x14068B180
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E89F0
#define PlayerClient__GetPcClient_x                                0x1402EB220
#define PlayerClient__PlayerClient_x                               0x1402E1CB0
#define PlayerClient__SetNameSpriteState_x                         0x1402EE670
#define PlayerClient__SetNameSpriteTint_x                          0x1402EF630
#define PlayerZoneClient__ChangeHeight_x                           0x1402FDAB0
#define PlayerZoneClient__DoAttack_x                               0x1402FE7C0
#define PlayerZoneClient__GetLevel_x                               0x140301EF0
#define PlayerZoneClient__IsValidTeleport_x                        0x14024E520
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191D00

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F73D0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F7480  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F7580
#define PlayerManagerClient__CreatePlayer_x                        0x1402F6EA0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068A520

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A9750
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A9350
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A93C0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A96E0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A9870
#define KeypressHandler__HandleKeyUp_x                             0x1402A9990
#define KeypressHandler__SaveKeymapping_x                          0x1402A95F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140644BD0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x14063F530

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D0B50  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D5E50
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D8510
#define PcZoneClient__RemovePetEffect_x                            0x1402DC000
#define PcZoneClient__HasAlternateAbility_x                        0x1402D90F0
#define PcZoneClient__CanEquipItem_x                               0x1402D4180
#define PcZoneClient__GetItemByID_x                                0x1402D6EE0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DBD80
#define PcZoneClient__BandolierSwap_x                              0x1402D3160

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253050

// IconCache
#define IconCache__GetIcon_x                                       0x1403AF580

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A3FD0
#define CContainerMgr__CloseContainer_x                            0x1403A3910
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4350

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404974F0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029C530

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140428470
#define CLootWnd__RequestLootSlot_x                                0x140429490

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D20B0
#define EQ_Spell__SpellAffects_x                                   0x1401D3370
#define EQ_Spell__SpellAffectBase_x                                0x1401D32D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7380
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7330
#define EQ_Spell__IsSPAStacking_x                                  0x1401D2F90
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2B50
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D2420

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFAF0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F3420
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F2B30
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F2330

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FAAE0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AA10
#define CTaskManager__GetTaskStatus_x                              0x14017AB20
#define CTaskManager__GetElementDescription_x                      0x14017A6A0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D0420
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF260
#define EqSoundManager__SoundAssistPlay_x                          0x140320940  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140320C80  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058C130
#define CTextureAnimation__SetCurCell_x                            0x14058C440

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029A790

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x14065EAC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x14065EB40
#define CharacterBase__IsExpansionFlag_x                           0x1401F36F0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140381F30
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403828A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140383DF0

// messages
#define msg_spell_worn_off_x                                       0x140208560
#define msg_new_text_x                                             0x140203DF0
#define __msgTokenTextParam_x                                      0x1401FBB10
#define msgTokenText_x                                             0x1401FBA30

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140322300
#define SpellManager__GetSpellByGroupAndRank_x                     0x140322220

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140699790

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404218E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A8CA0
#define CCursorAttachment__IsOkToActivate_x                        0x1403ABC00
#define CCursorAttachment__RemoveAttachment_x                      0x1403ABEB0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C5120
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C5310
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C5320

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149130
#define CFindItemWnd__Update_x                                     0x140149AD0
#define CFindItemWnd__PickupSelectedItem_x                         0x140143600

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152960
#define LootFiltersManager__GetItemFilterData_x                    0x140153470
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153D10
#define LootFiltersManager__SetItemLootFilter_x                    0x140153FC0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047A300

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14069E040
#define CResolutionHandler__GetWindowedStyle_x                     0x14031AEB0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A0300

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140662E30  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140662D20  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C4FC0
#define CGroupWnd__UpdateDisplay_x                                 0x1403C4BA0

// ItemBase
#define ItemBase__IsLore_x                                         0x14061CA10
#define ItemBase__IsLoreEquipped_x                                 0x14061CAA0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BC4B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024B8F0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024B880
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024B8C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140315480

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123510
#define FactionManagerClient__HandleFactionMessage_x               0x1401238C0
#define FactionManagerClient__GetFactionStanding_x                 0x140122CE0
#define FactionManagerClient__GetMaxFaction_x                      0x140122CE0
#define FactionManagerClient__GetMinFaction_x                      0x140122B90

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC7E0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012ECB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB750
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAAD0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB570  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB4F0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140327370

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140315480

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140211FD0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140581D40

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084DE0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140338DD0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C7B0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140647C10
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAC930

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
