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

#define __ClientDate                                               20240307u
#define __ExpectedVersionDate                                     "Mar  7 2024"
#define __ExpectedVersionTime                                     "11:46:46"
#define __ActualVersionDate_x                                      0x140935730
#define __ActualVersionTime_x                                      0x140935720
#define __ActualVersionBuild_x                                     0x1408CC2C0

// Memory Protection
#define __MemChecker0_x                                            0x1402A9040
#define __MemChecker1_x                                            0x1405647B0
#define __MemChecker4_x                                            0x140277A50
#define __EncryptPad0_x                                            0x140D02E20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3B9E0
#define instEQZoneInfo_x                                           0x140E3BBD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F160
#define __gfMaxZoomCameraDistance_x                                0x1408CD530
#define __gfMaxCameraDistance_x                                    0x140A736A0
#define __CurrentSocial_x                                          0x140BBE940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140CFA710
#define g_eqCommandStates_x                                        0x140CFB780
#define __CommandList_x                                            0x140CFB9B0
#define __ScreenMode_x                                             0x140D83534
#define __gWorld_x                                                 0x140E33F30
#define __gpbCommandEvent_x                                        0x140E36424
#define __ServerHost_x                                             0x140E36608
#define __Guilds_x                                                 0x140E3A590
#define __MouseEventTime_x                                         0x140EB0F48
#define DI8__MouseState_x                                          0x140EB5100
#define __heqmain_x                                                0x140EB7598
#define DI8__Mouse_x                                               0x140EB75B0
#define __HWnd_x                                                   0x140EB75B8
#define __Mouse_x                                                  0x140EB75C0
#define DI8__Keyboard_x                                            0x140EB75E0
#define __LoginName_x                                              0x140EB7CBC
#define __CurrentMapLabel_x                                        0x140ECB4D0
#define __LabelCache_x                                             0x140ECC0A0
#define __ChatFilterDefs_x                                         0x140A0CF90
#define Teleport_Table_Size_x                                      0x140E364B0
#define Teleport_Table_x                                           0x140E33F60

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E36920
#define pinstActiveBanker_x                                        0x140E33E80
#define pinstActiveCorpse_x                                        0x140E33E70
#define pinstActiveGMaster_x                                       0x140E33E78
#define pinstActiveMerchant_x                                      0x140E33E68
#define pinstAltAdvManager_x                                       0x140D84148
#define pinstCEverQuest_x                                          0x140EB5050
#define pinstCamActor_x                                            0x140D83520
#define pinstCDBStr_x                                              0x140D82F00
#define pinstCDisplay_x                                            0x140E35F70
#define pinstControlledPlayer_x                                    0x140E33F10
#define pinstCResolutionHandler_x                                  0x14153C858
#define pinstCSidlManager_x                                        0x140EDD3A0
#define pinstCXWndManager_x                                        0x140EDD398
#define instDynamicZone_x                                          0x140E3A450 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E3A49E
#define instExpeditionName_x                                       0x140E3A4DE
#define pinstDZMember_x                                            0x140E3A568
#define pinstDZTimerInfo_x                                         0x140E3A570
#define pinstEqLogin_x                                             0x140EB7600
#define instTribute_x                                              0x140CF5D50
#define pinstEQSoundManager_x                                      0x140D844C8
#define pinstEQSpellStrings_x                                      0x140D67B10
#define pinstSGraphicsEngine_x                                     0x14153C5D8
#define pinstLocalPC_x                                             0x140E33F50
#define pinstLocalPlayer_x                                         0x140E33E60
#define pinstCMercenaryClientManager_x                             0x140EB27E8
#define pinstModelPlayer_x                                         0x140E33E90
#define pinstRenderInterface_x                                     0x14153C5F0
#define pinstSkillMgr_x                                            0x140EB4490
#define pinstSpawnManager_x                                        0x140EB2BB0
#define pinstSpellManager_x                                        0x140EB44F8
#define pinstStringTable_x                                         0x140E33F58
#define pinstSwitchManager_x                                       0x140E33DE0
#define pinstTarget_x                                              0x140E33F08
#define pinstTaskMember_x                                          0x140CF5D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E33F18
#define pinstTradeTarget_x                                         0x140E33E88
#define instTributeActive_x                                        0x140CF5D79
#define pinstViewActor_x                                           0x140D83518
#define pinstWorldData_x                                           0x140E35F60
#define pinstPlayerPath_x                                          0x140EB2BD8
#define pinstTargetIndicator_x                                     0x140EB45A8
#define EQObject_Top_x                                             0x140E33F38

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140EC8628
#define pinstCContainerMgr_x                                       0x140D83198
#define pinstCContextMenuManager_x                                 0x140EDD080
#define pinstCInvSlotMgr_x                                         0x140D83190
#define pinstCItemDisplayManager_x                                 0x140ECB0A0
#define pinstCPopupWndManager_x                                    0x140ECB930
#define pinstCSpellDisplayMgr_x                                    0x140ECBF80
#define pinstCTaskManager_x                                        0x140BBEC80
#define pinstEQSuiteTextureLoader_x                                0x140D0C520
#define pinstItemIconCache_x                                       0x140EC8988
#define pinstLootFiltersManager_x                                  0x140D82948
#define pinstGFViewListener_x                                      0x140EDC858


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x140238370
#define __CastRay_x                                                0x1402306E0
#define __CastRay2_x                                               0x1402303E0
#define __ConvertItemTags_x                                        0x140230B40
#define __CleanItemTags_x                                          0x140087DC0
#define __CreateCascadeMenuItems_x                                 0x140180D10
#define __DoesFileExist_x                                          0x140568660
#define __EQGetTime_x                                              0x140564D60
#define __ExecuteCmd_x                                             0x140206AF0
#define __FixHeading_x                                             0x140690C20
#define __FlushDxKeyboard_x                                        0x14032AE00
#define __get_bearing_x                                            0x14023A560
#define __get_melee_range_x                                        0x14023A660
#define __GetAnimationCache_x                                      0x1403A7DE0
#define __GetGaugeValueFromEQ_x                                    0x1404DB530
#define __GetLabelFromEQ_x                                         0x1404DCB30
#define __GetXTargetType_x                                         0x140691F00   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140690CA0
#define __HelpPath_x                                               0x140EB0E10   // Why?
#define __NewUIINI_x                                               0x1404E8090   // Why?
#define __ProcessGameEvents_x                                      0x14026CF30
#define __ProcessKeyboardEvents_x                                  0x14032C660
#define __ProcessMouseEvents_x                                     0x14026E470
#define __SaveColors_x                                             0x140190CD0
#define __STMLToText_x                                             0x14056CFA0
#define __WndProc_x                                                0x1403295E0
#define CMemoryMappedFile__SetFile_x                               0x1407C8B90
#define DrawNetStatus_x                                            0x1402B74A0
#define Util__FastTime_x                                           0x1405642F0
#define __eq_delete_x                                              0x140698054
#define __eq_new_x                                                 0x140698010
#define __CopyLayout_x                                             0x1402A5470
#define __ThrottleFrameRate_x                                      0x14025C7BC
#define __ThrottleFrameRateEnd_x                                   0x14025C81C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033BBC0
#define CAAWnd__Update_x                                           0x14033BEC0
#define CAAWnd__UpdateSelected_x                                   0x14033CF00

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081CA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BE00
#define AltAdvManager__IsAbilityReady_x                            0x14019C080
#define AltAdvManager__GetAAById_x                                 0x14019B6D0
#define AltAdvManager__CanTrainAbility_x                           0x14019B500
#define AltAdvManager__CanSeeAbility_x                             0x14019B1C0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0A20
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1860
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1AB0
#define CharacterZoneClient__CanUseItem_x                          0x1400E5D50
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2480
#define CharacterZoneClient__CastSpell_x                           0x1400D2520
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1880
#define CharacterZoneClient__Cur_HP_x                              0x1400E7460
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7620
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D52C0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDAE0
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC510  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6720
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5220
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF6A0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE570
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D68F0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6F70
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8940
#define CharacterZoneClient__GetHPRegen_x                          0x1400EECB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E70D0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EF930
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6970
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0710
#define CharacterZoneClient__GetMaxEffects_x                       0x1400D6B70
#define CharacterZoneClient__GetModCap_x                           0x1400F7CD0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6C00
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6E10
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBAB0
#define CharacterZoneClient__HasSkill_x                            0x1400F3700
#define CharacterZoneClient__HitBySpell_x                          0x1400D78C0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB060
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F77B0
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3ED0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7B00
#define CharacterZoneClient__Max_Mana_x                            0x1402D40F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7F60
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE410
#define CharacterZoneClient__SpellDuration_x                       0x1400DF110
#define CharacterZoneClient__TotalEffect_x                         0x1400E0460
#define CharacterZoneClient__UseSkill_x                            0x1400FD480


// CBankWnd
#define CBankWnd__WndNotification_x                                0x14035A000

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x140364310

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403601B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035F240

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403669D0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A90B50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140389850
#define CChatWindowManager__InitContextMenu_x                      0x1403899E0
#define CChatWindowManager__FreeChatWindow_x                       0x1403888D0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140391590
#define CChatWindowManager__CreateChatWindow_x                     0x140388210

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401055F0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403925D0
#define CChatWindow__Clear_x                                       0x140393470
#define CChatWindow__WndNotification_x                             0x140394660
#define CChatWindow__AddHistory_x                                  0x140392F70

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A1E80
#define CContextMenu__RemoveMenuItem_x                             0x1405A2270
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A2240
#define CContextMenu__CheckMenuItem_x                              0x1405A20B0
#define CContextMenu__SetMenuItem_x                                0x1405A2290
#define CContextMenu__AddSeparator_x                               0x1405A1FF0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140593D40
#define CContextMenuManager__RemoveMenu_x                          0x140594320
#define CContextMenuManager__PopupMenu_x                           0x140594060
#define CContextMenuManager__Flush_x                               0x140593DC0
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039FD50

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140659860
#define CChatService__GetFriendName_x                              0x140659870

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140584CD0
#define CComboWnd__Draw_x                                          0x140584DD0
#define CComboWnd__GetCurChoice_x                                  0x1405850A0  // unused
#define CComboWnd__GetListRect_x                                   0x140585140
#define CComboWnd__InsertChoice_x                                  0x140585470
#define CComboWnd__SetColors_x                                     0x140585800
#define CComboWnd__SetChoice_x                                     0x1405857C0
#define CComboWnd__GetItemCount_x                                  0x140585130
#define CComboWnd__GetCurChoiceText_x                              0x1405850E0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140585070
#define CComboWnd__InsertChoiceAtIndex_x                           0x140585530

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039DAD0
#define CContainerWnd__SetContainer_x                              0x1403F3040
#define CContainerWnd__vftable_x                                   0x1409A9090

// CDisplay
#define CDisplay__cameraType_x                                     0x140D832BC
#define CDisplay__ZoneMainUI_x                                     0x1405BBFE0
#define CDisplay__PreZoneMainUI_x                                  0x14018DBD0
#define CDisplay__CleanGameUI_x                                    0x14017FDF0
#define CDisplay__GetClickedActor_x                                0x140183F60
#define CDisplay__GetUserDefinedColor_x                            0x140184BD0
#define CDisplay__InitCharSelectUI_x                               0x140184E80
#define CDisplay__ReloadUI_x                                       0x14018FEC0
#define CDisplay__WriteTextHD2_x                                   0x140196F40
#define CDisplay__TrueDistance_x                                   0x140196BF0
#define CDisplay__SetViewActor_x                                   0x1401933F0
#define CDisplay__GetFloorHeight_x                                 0x1401841C0
#define CDisplay__ToggleScreenshotMode_x                           0x1401966E0
#define CDisplay__RealRender_World_x                               0x14018F2A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C6190
#define CEditWnd__DrawCaret_x                                      0x1405B7CE0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8190
#define CEditWnd__GetCaretPt_x                                     0x1405B8410  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B8450
#define CEditWnd__GetDisplayString_x                               0x1405B86C0
#define CEditWnd__GetHorzOffset_x                                  0x1405B8900
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B8A50
#define CEditWnd__GetSelStartPt_x                                  0x1405B8D30  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B8B80
#define CEditWnd__PointFromPrintableChar_x                         0x1405B98E0
#define CEditWnd__ReplaceSelection_x                               0x1405B9C90
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BA130
#define CEditWnd__SetEditable_x                                    0x1405BA3C0
#define CEditWnd__SetWindowText_x                                  0x1405BA3F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D8D0
#define CEverQuest__ClickedPlayer_x                                0x140253410
#define CEverQuest__CreateTargetIndicator_x                        0x140253CD0
#define CEverQuest__DoTellWindow_x                                 0x140105300 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105BC0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F290
#define CEverQuest__dsp_chat_x                                     0x140104D30 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140289470
#define CEverQuest__Emote_x                                        0x14025FC70
#define CEverQuest__GetBodyTypeDesc_x                              0x140260A20
#define CEverQuest__GetClassDesc_x                                 0x140260A80
#define CEverQuest__GetClassThreeLetterCode_x                      0x140260E50
#define CEverQuest__GetDeityDesc_x                                 0x140261100
#define CEverQuest__GetLangDesc_x                                  0x140261530
#define CEverQuest__GetRaceDesc_x                                  0x1402618D0
#define CEverQuest__InterpretCmd_x                                 0x140263200
#define CEverQuest__LeftClickedOnPlayer_x                          0x1402780D0
#define CEverQuest__LMouseUp_x                                     0x140264BD0
#define CEverQuest__RightClickedOnPlayer_x                         0x1402758F0
#define CEverQuest__RMouseUp_x                                     0x14026EFF0
#define CEverQuest__SetGameState_x                                 0x14027A610
#define CEverQuest__UPCNotificationFlush_x                         0x14027FF40 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140264840
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402703A0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402711C0

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B2190

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D30
#define CGuild__GetGuildName_x                                     0x1400C0D70

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D4650

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029AFA0
#define CHotButton__SetCheck_x                                     0x14029B270

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EBDA0
#define CInvSlotMgr__MoveItem_x                                    0x1403EBF80
#define CInvSlotMgr__SelectSlot_x                                  0x1403ED920

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E8FA0
#define CInvSlot__SliderComplete_x                                 0x1403EA4F0
#define CInvSlot__GetItemBase_x                                    0x1403E4BE0
#define CInvSlot__UpdateItem_x                                     0x1403EA9A0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EECA0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040FE50
#define CItemDisplayWnd__UpdateStrings_x                           0x1404127D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040C950
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040E0A0
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040F270

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D8060
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D9D50

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405132F0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140409080

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148430

// CLabel
#define CLabel__UpdateText_x                                       0x140419BD0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140588640
#define CListWnd__dCListWnd_x                                      0x140588A90
#define CListWnd__vftable_x                                        0x140A8ECA8
#define CListWnd__AddColumn_x                                      0x140589130
#define CListWnd__AddColumn1_x                                     0x1405891D0
#define CListWnd__AddLine_x                                        0x140589330
#define CListWnd__AddString_x                                      0x1405898C0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140589E30
#define CListWnd__CalculateVSBRange_x                              0x14058A110
#define CListWnd__ClearSel_x                                       0x14058A2C0
#define CListWnd__ClearAllSel_x                                    0x14058A260
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058A320
#define CListWnd__Compare_x                                        0x14058A4D0
#define CListWnd__Draw_x                                           0x14058A9A0
#define CListWnd__DrawColumnSeparators_x                           0x14058B550
#define CListWnd__DrawHeader_x                                     0x14058B610
#define CListWnd__DrawItem_x                                       0x14058BCF0
#define CListWnd__DrawLine_x                                       0x14058C670
#define CListWnd__DrawSeparator_x                                  0x14058CB30
#define CListWnd__EnableLine_x                                     0x14058CF50
#define CListWnd__EnsureVisible_x                                  0x14058CFB0
#define CListWnd__ExtendSel_x                                      0x14058D0B0
#define CListWnd__GetColumnMinWidth_x                              0x14058D3E0
#define CListWnd__GetColumnWidth_x                                 0x14058D460
#define CListWnd__GetCurSel_x                                      0x14058D560
#define CListWnd__GetItemData_x                                    0x14058D8E0
#define CListWnd__GetItemHeight_x                                  0x14058D920
#define CListWnd__GetItemRect_x                                    0x14058DB40
#define CListWnd__GetItemText_x                                    0x14058DDE0
#define CListWnd__GetSelList_x                                     0x14058E030
#define CListWnd__GetSeparatorRect_x                               0x14058E220
#define CListWnd__InsertLine_x                                     0x14058F690
#define CListWnd__RemoveLine_x                                     0x14058FD00
#define CListWnd__SetColors_x                                      0x1405900C0
#define CListWnd__SetColumnJustification_x                         0x1405900E0
#define CListWnd__SetColumnLabel_x                                 0x140590160
#define CListWnd__SetColumnWidth_x                                 0x140590300
#define CListWnd__SetCurSel_x                                      0x1405903D0
#define CListWnd__SetItemColor_x                                   0x140590640
#define CListWnd__SetItemData_x                                    0x1405906E0
#define CListWnd__SetItemText_x                                    0x140590920
#define CListWnd__Sort_x                                           0x140590D30
#define CListWnd__ToggleSel_x                                      0x140590EA0
#define CListWnd__SetColumnsSizable_x                              0x140590350
#define CListWnd__SetItemWnd_x                                     0x140590A50
#define CListWnd__GetItemWnd_x                                     0x14058DFC0
#define CListWnd__SetItemIcon_x                                    0x140590720
#define CListWnd__CalculateCustomWindowPositions_x                 0x140589C00
#define CListWnd__SetVScrollPos_x                                  0x140590C90

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042CE70

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F5B78
#define MapViewMap__Clear_x                                        0x14042E9F0
#define MapViewMap__SetZoom_x                                      0x140435040
#define MapViewMap__HandleLButtonDown_x                            0x140431B80

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404566C0  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045CC50
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045D3F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140460C00
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045FF40
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140464E80

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140636400
#define CPacketScrambler__hton_x                                   0x1406363F0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B15E0
#define CSidlManagerBase__FindAnimation1_x                         0x1405B1520
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B1C10
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B19C0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B0920
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B08B0
#define CSidlManagerBase__CreateXWnd_x                             0x1405AFEF0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CB0D0
#define CSidlManager__CreateXWnd_x                                 0x1404CB290

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140576420
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140576300
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C0750 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140576590
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x140575A50
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140575B20
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140575D30
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140576C30
#define CSidlScreenWnd__EnableIniStorage_x                         0x140576E60
#define CSidlScreenWnd__GetChildItem_x                             0x140577000
#define CSidlScreenWnd__GetSidlPiece_x                             0x140577250
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405812B0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405775C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140577930
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405781E0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140578AD0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDC6F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140579120
#define CSidlScreenWnd__StoreIniVis_x                              0x140579910
#define CSidlScreenWnd__vftable_x                                  0x140A8DF18
#define CSidlScreenWnd__WndNotification_x                          0x140579960

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140314490 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140314930 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140314860
#define CSkillMgr__IsActivatedSkill_x                              0x140314CE0
#define CSkillMgr__IsCombatSkill_x                                 0x140314D20
#define CSkillMgr__GetSkillTimerDuration_x                         0x140314C50
#define CSkillMgr__GetSkillLastUsed_x                              0x1403148B0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DB450
#define CSliderWnd__SetValue_x                                     0x140592010
#define CSliderWnd__SetNumTicks_x                                  0x140591E90

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D16E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405967A0
#define CStmlWnd__CalculateHSBRange_x                              0x140580CB0
#define CStmlWnd__CalculateVSBRange_x                              0x1405976C0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140598140
#define CStmlWnd__ForceParseNow_x                                  0x1405981E0
#define CStmlWnd__GetVisibleText_x                                 0x1405988B0
#define CStmlWnd__MakeStmlColorTag_x                               0x14059A610
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059A650
#define CStmlWnd__SetSTMLText_x                                    0x1405A1620
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A17D0
#define CStmlWnd__UpdateHistoryString_x                            0x1405A1B60

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405923E0
#define CTabWnd__DrawCurrentPage_x                                 0x140592480
#define CTabWnd__DrawTab_x                                         0x140592850
#define CTabWnd__GetTabRect_x                                      0x140592EB0
#define CTabWnd__InsertPage_x                                      0x140593180
#define CTabWnd__RemovePage_x                                      0x140593410
#define CTabWnd__SetPage_x                                         0x140593570
#define CTabWnd__UpdatePage_x                                      0x140593870

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BA850
#define CPageWnd__SetTabText_x                                     0x1405BA8C0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA490  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA8A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A8FA0
#define CTextureFont__DrawWrappedText1_x                           0x1405A8EB0
#define CTextureFont__DrawWrappedText2_x                           0x1405A90D0
#define CTextureFont__GetTextExtent_x                              0x1405A9480
#define CTextureFont__GetHeight_x                                  0x1405A9440

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BEEB0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x140575630

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0BE90
#define CXStr__gCXStrAccess_x                                      0x140EDC4F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057C390
#define CXWnd__ClrFocus_x                                          0x14057C680
#define CXWnd__Destroy_x                                           0x14057C800
#define CXWnd__DoAllDrawing_x                                      0x14057C900
#define CXWnd__DrawColoredRect_x                                   0x14057D0D0
#define CXWnd__DrawTooltip_x                                       0x14057E750
#define CXWnd__DrawTooltipAtPoint_x                                0x14057E800
#define CXWnd__GetChildItem_x                                      0x14057F110
#define CXWnd__GetChildWndAt_x                                     0x14057F1D0
#define CXWnd__GetClientRect_x                                     0x14057F460
#define CXWnd__GetClientClipRect_x                                 0x14057F330
#define CXWnd__GetRelativeRect_x                                   0x140580DD0
#define CXWnd__GetScreenClipRect_x                                 0x140580EE0
#define CXWnd__GetScreenRect_x                                     0x140581030
#define CXWnd__GetTooltipRect_x                                    0x1405811B0
#define CXWnd__IsActive_x                                          0x140581770
#define CXWnd__IsDescendantOf_x                                    0x1405817A0
#define CXWnd__IsReallyVisible_x                                   0x140581800
#define CXWnd__IsType_x                                            0x140581840
#define CXWnd__Minimize_x                                          0x140581940
#define CXWnd__ProcessTransition_x                                 0x140582820
#define CXWnd__Resize_x                                            0x140582940
#define CXWnd__Right_x                                             0x1405829E0
#define CXWnd__SetFocus_x                                          0x140582DA0
#define CXWnd__SetFont_x                                           0x140582DF0
#define CXWnd__SetKeyTooltip_x                                     0x140582EF0
#define CXWnd__SetMouseOver_x                                      0x140583030
#define CXWnd__SetParent_x                                         0x1405830B0
#define CXWnd__StartFade_x                                         0x1405834E0
#define CXWnd__vftable_x                                           0x140A8E508
#define CXWnd__CXWnd_x                                             0x14057AF20
#define CXWnd__dCXWnd_x                                            0x14057B870

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C5910

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A3440
#define CXWndManager__DrawCursor_x                                 0x1405A3720
#define CXWndManager__DrawWindows_x                                0x1405A3980
#define CXWndManager__GetKeyboardFlags_x                           0x1405A4040
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A4080
#define CXWndManager__RemoveWnd_x                                  0x1405A7670

// CDBStr
#define CDBStr__GetString_x                                        0x14017DF60

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063F560

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE700
#define CCharacterListWnd__EnterWorld_x                            0x1400CD400
#define CCharacterListWnd__Quit_x                                  0x1400CE6E0
#define CCharacterListWnd__UpdateList_x                            0x1400CF3F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060DDC0
#define ItemBase__CreateItemTagString_x                            0x14060E840
#define ItemBase__GetImageNum_x                                    0x140610E10
#define ItemBase__GetItemValue_x                                   0x140612C70
#define ItemBase__IsEmpty_x                                        0x140614880
#define ItemBase__IsKeyRingItem_x                                  0x140614FB0
#define ItemBase__ValueSellMerchant_x                              0x140619180
#define ItemClient__CanDrop_x                                      0x14029D560
#define ItemClient__CanGoInBag_x                                   0x14029D690
#define ItemClient__CreateItemClient_x                             0x14029D970
#define ItemClient__dItemClient_x                                  0x14029D3D0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D5A0
#define EQ_LoadingS__Array_x                                       0x140CF8220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x140625860
#define PcBase__GetCombatAbility_x                                 0x140625F00
#define PcBase__GetCombatAbilityTimer_x                            0x140625FA0
#define PcBase__GetItemContainedRealEstateIds_x                    0x1406266F0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406271E0
#define PcClient__AlertInventoryChanged_x                          0x1402BFA80
#define PcClient__GetConLevel_x                                    0x1402C00A0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C27D0
#define PcClient__HasLoreItem_x                                    0x1402C37A0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D1020
#define PcZoneClient__RemoveMyAffect_x                             0x1402D4F70

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B180  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B330  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B490  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B3D0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244B40  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401787C0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140682F30
#define PlayerBase__CanSee1_x                                      0x140683000
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406834C0
#define PlayerBase__HasProperty_x                                  0x1406836F0
#define PlayerBase__IsTargetable_x                                 0x1406837B0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E1A40
#define PlayerClient__GetPcClient_x                                0x1402E4270
#define PlayerClient__PlayerClient_x                               0x1402DAD20
#define PlayerClient__SetNameSpriteState_x                         0x1402E76C0
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8680
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6C10
#define PlayerZoneClient__DoAttack_x                               0x1402F7920
#define PlayerZoneClient__GetLevel_x                               0x1402FB050
#define PlayerZoneClient__IsValidTeleport_x                        0x1402478C0
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C450

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F0530  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F05E0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F06E0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F0000
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140682AF0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2990
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A2590
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A2600
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A2920  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2AB0
#define KeypressHandler__HandleKeyUp_x                             0x1402A2BB0
#define KeypressHandler__SaveKeymapping_x                          0x1402A2830  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063D0A0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140637B30

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C9D50  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CF050
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D1720
#define PcZoneClient__RemovePetEffect_x                            0x1402D5070
#define PcZoneClient__HasAlternateAbility_x                        0x1402D2300
#define PcZoneClient__CanEquipItem_x                               0x1402CD380
#define PcZoneClient__GetItemByID_x                                0x1402D00E0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4DF0
#define PcZoneClient__BandolierSwap_x                              0x1402CC360

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C3F0

// IconCache
#define IconCache__GetIcon_x                                       0x1403A7E10

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039C880
#define CContainerMgr__CloseContainer_x                            0x14039C1C0
#define CContainerMgr__OpenExperimentContainer_x                   0x14039CC00

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048FEA0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140295770

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140420EB0
#define CLootWnd__RequestLootSlot_x                                0x140421EC0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC8C0
#define EQ_Spell__SpellAffects_x                                   0x1401CDB80
#define EQ_Spell__SpellAffectBase_x                                0x1401CDAE0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6FE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6F90
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD7A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD360
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCC30

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF970

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EB7D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EAEE0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EA710

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F2E90  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140175060
#define CTaskManager__GetTaskStatus_x                              0x140175170
#define CTaskManager__GetElementDescription_x                      0x140174CF0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CAC30
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9A70
#define EqSoundManager__SoundAssistPlay_x                          0x140319AE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319E20  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140584260
#define CTextureAnimation__SetCurCell_x                            0x140584570

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402939D0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140656FA0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140657020
#define CharacterBase__IsExpansionFlag_x                           0x1401ED5A0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037AB70
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B4E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037CA20

// messages
#define msg_spell_worn_off_x                                       0x140201B30
#define msg_new_text_x                                             0x1401FD400
#define __msgTokenTextParam_x                                      0x1401F51E0
#define msgTokenText_x                                             0x1401F5100

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031B4D0
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B3F0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406922E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041A320

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A1550
#define CCursorAttachment__IsOkToActivate_x                        0x1403A44A0
#define CCursorAttachment__RemoveAttachment_x                      0x1403A4750
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BD350
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BD540
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BD550

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401436B0
#define CFindItemWnd__Update_x                                     0x140144050
#define CFindItemWnd__PickupSelectedItem_x                         0x14013DB80

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14014CF20
#define LootFiltersManager__GetItemFilterData_x                    0x14014DA30
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14014E2D0
#define LootFiltersManager__SetItemLootFilter_x                    0x14014E580

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x140472D20

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x1406978A0
#define CResolutionHandler__GetWindowedStyle_x                     0x140314000

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140398BF0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065B320  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065B210  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BD810
#define CGroupWnd__UpdateDisplay_x                                 0x1403BD3F0

// ItemBase
#define ItemBase__IsLore_x                                         0x140615080
#define ItemBase__IsLoreEquipped_x                                 0x140615110

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B56C0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244CA0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244C30
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244C70

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E5B0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14011DAC0
#define FactionManagerClient__HandleFactionMessage_x               0x14011DE70
#define FactionManagerClient__GetFactionStanding_x                 0x14011D290
#define FactionManagerClient__GetMaxFaction_x                      0x14011D290
#define FactionManagerClient__GetMinFaction_x                      0x14011D140

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC640

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140129250

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5F00
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5280
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5D20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5CA0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403205F0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E5B0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B520

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140579F50

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331B30

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C640

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x1406400E0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA24D0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
