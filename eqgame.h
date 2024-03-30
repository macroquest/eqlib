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

#define __ClientDate                                               20240329u
#define __ExpectedVersionDate                                     "Mar 29 2024"
#define __ExpectedVersionTime                                     "16:58:29"
#define __ActualVersionDate_x                                      0x140935730
#define __ActualVersionTime_x                                      0x140935720
#define __ActualVersionBuild_x                                     0x1408CC2C0

// Memory Protection
#define __MemChecker0_x                                            0x1402A8FD0
#define __MemChecker1_x                                            0x140564740
#define __MemChecker4_x                                            0x1402779E0
#define __EncryptPad0_x                                            0x140D02E20

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E3B9E0
#define instEQZoneInfo_x                                           0x140E3BBD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14020F100
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
#define __allowslashcommand_x                                      0x140238310
#define __CastRay_x                                                0x140230680
#define __CastRay2_x                                               0x140230380
#define __ConvertItemTags_x                                        0x140230AE0
#define __CleanItemTags_x                                          0x140087DC0
#define __CreateCascadeMenuItems_x                                 0x140180D10
#define __DoesFileExist_x                                          0x1405685F0
#define __EQGetTime_x                                              0x140564CF0
#define __ExecuteCmd_x                                             0x140206A90
#define __FixHeading_x                                             0x140690220
#define __FlushDxKeyboard_x                                        0x14032AD90
#define __get_bearing_x                                            0x14023A500
#define __get_melee_range_x                                        0x14023A600
#define __GetAnimationCache_x                                      0x1403A7D70
#define __GetGaugeValueFromEQ_x                                    0x1404DB4C0
#define __GetLabelFromEQ_x                                         0x1404DCAC0
#define __GetXTargetType_x                                         0x140691500   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x1406902A0
#define __HelpPath_x                                               0x140EB0E10   // Why?
#define __NewUIINI_x                                               0x1404E8020   // Why?
#define __ProcessGameEvents_x                                      0x14026CEC0
#define __ProcessKeyboardEvents_x                                  0x14032C5F0
#define __ProcessMouseEvents_x                                     0x14026E400
#define __SaveColors_x                                             0x140190CD0
#define __STMLToText_x                                             0x14056CF30
#define __WndProc_x                                                0x140329570
#define CMemoryMappedFile__SetFile_x                               0x1407C8060
#define DrawNetStatus_x                                            0x1402B7430
#define Util__FastTime_x                                           0x140564280
#define __eq_delete_x                                              0x140697654
#define __eq_new_x                                                 0x140697610
#define __CopyLayout_x                                             0x1402A5400
#define __ThrottleFrameRate_x                                      0x14025C75C
#define __ThrottleFrameRateEnd_x                                   0x14025C7BC

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14033BB50
#define CAAWnd__Update_x                                           0x14033BE50
#define CAAWnd__UpdateSelected_x                                   0x14033CE90

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA1B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2AC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14081CA58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAAA0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x14019BDC0
#define AltAdvManager__IsAbilityReady_x                            0x14019C040
#define AltAdvManager__GetAAById_x                                 0x14019B690
#define AltAdvManager__CanTrainAbility_x                           0x14019B4C0
#define AltAdvManager__CanSeeAbility_x                             0x14019B180

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
#define CharacterZoneClient__Max_Endurance_x                       0x1402D3E60  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7B00
#define CharacterZoneClient__Max_Mana_x                            0x1402D4080  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F7F60
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE410
#define CharacterZoneClient__SpellDuration_x                       0x1400DF110
#define CharacterZoneClient__TotalEffect_x                         0x1400E0460
#define CharacterZoneClient__UseSkill_x                            0x1400FD480


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140359F90

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403642A0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140360140
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14035F1D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x140366960

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A90B50

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403897E0
#define CChatWindowManager__InitContextMenu_x                      0x140389970
#define CChatWindowManager__FreeChatWindow_x                       0x140388860
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140391520
#define CChatWindowManager__CreateChatWindow_x                     0x1403881A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x1401055F0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x140392560
#define CChatWindow__Clear_x                                       0x140393400
#define CChatWindow__WndNotification_x                             0x1403945F0
#define CChatWindow__AddHistory_x                                  0x140392F00

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405A1E10
#define CContextMenu__RemoveMenuItem_x                             0x1405A2200
#define CContextMenu__RemoveAllMenuItems_x                         0x1405A21D0
#define CContextMenu__CheckMenuItem_x                              0x1405A2040
#define CContextMenu__SetMenuItem_x                                0x1405A2220
#define CContextMenu__AddSeparator_x                               0x1405A1F80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x140593CD0
#define CContextMenuManager__RemoveMenu_x                          0x1405942B0
#define CContextMenuManager__PopupMenu_x                           0x140593FF0
#define CContextMenuManager__Flush_x                               0x140593D50
#define CContextMenuManager__CreateDefaultMenu_x                   0x14039FCE0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406597F0
#define CChatService__GetFriendName_x                              0x140659800

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140584C60
#define CComboWnd__Draw_x                                          0x140584D60
#define CComboWnd__GetCurChoice_x                                  0x140585030  // unused
#define CComboWnd__GetListRect_x                                   0x1405850D0
#define CComboWnd__InsertChoice_x                                  0x140585400
#define CComboWnd__SetColors_x                                     0x140585790
#define CComboWnd__SetChoice_x                                     0x140585750
#define CComboWnd__GetItemCount_x                                  0x1405850C0
#define CComboWnd__GetCurChoiceText_x                              0x140585070  // unused
#define CComboWnd__GetChoiceText_x                                 0x140585000
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405854C0

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x14039DA60
#define CContainerWnd__SetContainer_x                              0x1403F2FD0
#define CContainerWnd__vftable_x                                   0x1409A9090

// CDisplay
#define CDisplay__cameraType_x                                     0x140D832BC
#define CDisplay__ZoneMainUI_x                                     0x1405BBF70
#define CDisplay__PreZoneMainUI_x                                  0x14018DBD0
#define CDisplay__CleanGameUI_x                                    0x14017FDF0
#define CDisplay__GetClickedActor_x                                0x140183F60
#define CDisplay__GetUserDefinedColor_x                            0x140184BD0
#define CDisplay__InitCharSelectUI_x                               0x140184E80
#define CDisplay__ReloadUI_x                                       0x14018FEC0
#define CDisplay__WriteTextHD2_x                                   0x140196F00
#define CDisplay__TrueDistance_x                                   0x140196BB0
#define CDisplay__SetViewActor_x                                   0x1401933F0
#define CDisplay__GetFloorHeight_x                                 0x1401841C0
#define CDisplay__ToggleScreenshotMode_x                           0x1401966A0
#define CDisplay__RealRender_World_x                               0x14018F2A0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405C6120
#define CEditWnd__DrawCaret_x                                      0x1405B7C70  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405B8120
#define CEditWnd__GetCaretPt_x                                     0x1405B83A0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405B83E0
#define CEditWnd__GetDisplayString_x                               0x1405B8650
#define CEditWnd__GetHorzOffset_x                                  0x1405B8890
#define CEditWnd__GetLineForPrintableChar_x                        0x1405B89E0
#define CEditWnd__GetSelStartPt_x                                  0x1405B8CC0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405B8B10
#define CEditWnd__PointFromPrintableChar_x                         0x1405B9870
#define CEditWnd__ReplaceSelection_x                               0x1405B9C20
#define CEditWnd__SelectableCharFromPoint_x                        0x1405BA0C0
#define CEditWnd__SetEditable_x                                    0x1405BA350
#define CEditWnd__SetWindowText_x                                  0x1405BA380

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14025D870
#define CEverQuest__ClickedPlayer_x                                0x1402533B0
#define CEverQuest__CreateTargetIndicator_x                        0x140253C70
#define CEverQuest__DoTellWindow_x                                 0x140105300 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140105BC0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14025F230
#define CEverQuest__dsp_chat_x                                     0x140104D30 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140289400
#define CEverQuest__Emote_x                                        0x14025FC10
#define CEverQuest__GetBodyTypeDesc_x                              0x1402609C0
#define CEverQuest__GetClassDesc_x                                 0x140260A20
#define CEverQuest__GetClassThreeLetterCode_x                      0x140260DF0
#define CEverQuest__GetDeityDesc_x                                 0x1402610A0
#define CEverQuest__GetLangDesc_x                                  0x1402614D0
#define CEverQuest__GetRaceDesc_x                                  0x140261870
#define CEverQuest__InterpretCmd_x                                 0x1402631A0
#define CEverQuest__LeftClickedOnPlayer_x                          0x140278060
#define CEverQuest__LMouseUp_x                                     0x140264B70
#define CEverQuest__RightClickedOnPlayer_x                         0x140275880
#define CEverQuest__RMouseUp_x                                     0x14026EF80
#define CEverQuest__SetGameState_x                                 0x14027A5A0
#define CEverQuest__UPCNotificationFlush_x                         0x14027FED0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402647E0
#define CEverQuest__ReportSuccessfulHeal_x                         0x140270330
#define CEverQuest__ReportSuccessfulHit_x                          0x140271150

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403B2120

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0D30
#define CGuild__GetGuildName_x                                     0x1400C0D70

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403D45E0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x14029AF30
#define CHotButton__SetCheck_x                                     0x14029B200

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403EBD30
#define CInvSlotMgr__MoveItem_x                                    0x1403EBF10
#define CInvSlotMgr__SelectSlot_x                                  0x1403ED8B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403E8F30
#define CInvSlot__SliderComplete_x                                 0x1403EA480
#define CInvSlot__GetItemBase_x                                    0x1403E4B70
#define CInvSlot__UpdateItem_x                                     0x1403EA930

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403EEC30

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14040FDE0
#define CItemDisplayWnd__UpdateStrings_x                           0x140412760
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x14040C8E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x14040E030
#define CItemDisplayWnd__RequestConvertItem_x                      0x14040F200

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404D7FF0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404D9CE0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140513280

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140409010

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140148430

// CLabel
#define CLabel__UpdateText_x                                       0x140419B60

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405885D0
#define CListWnd__dCListWnd_x                                      0x140588A20
#define CListWnd__vftable_x                                        0x140A8ECA8
#define CListWnd__AddColumn_x                                      0x1405890C0
#define CListWnd__AddColumn1_x                                     0x140589160
#define CListWnd__AddLine_x                                        0x1405892C0
#define CListWnd__AddString_x                                      0x140589850
#define CListWnd__CalculateFirstVisibleLine_x                      0x140589DC0
#define CListWnd__CalculateVSBRange_x                              0x14058A0A0
#define CListWnd__ClearSel_x                                       0x14058A250
#define CListWnd__ClearAllSel_x                                    0x14058A1F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x14058A2B0
#define CListWnd__Compare_x                                        0x14058A460
#define CListWnd__Draw_x                                           0x14058A930
#define CListWnd__DrawColumnSeparators_x                           0x14058B4E0
#define CListWnd__DrawHeader_x                                     0x14058B5A0
#define CListWnd__DrawItem_x                                       0x14058BC80
#define CListWnd__DrawLine_x                                       0x14058C600
#define CListWnd__DrawSeparator_x                                  0x14058CAC0
#define CListWnd__EnableLine_x                                     0x14058CEE0
#define CListWnd__EnsureVisible_x                                  0x14058CF40
#define CListWnd__ExtendSel_x                                      0x14058D040
#define CListWnd__GetColumnMinWidth_x                              0x14058D370
#define CListWnd__GetColumnWidth_x                                 0x14058D3F0
#define CListWnd__GetCurSel_x                                      0x14058D4F0
#define CListWnd__GetItemData_x                                    0x14058D870
#define CListWnd__GetItemHeight_x                                  0x14058D8B0
#define CListWnd__GetItemRect_x                                    0x14058DAD0
#define CListWnd__GetItemText_x                                    0x14058DD70
#define CListWnd__GetSelList_x                                     0x14058DFC0
#define CListWnd__GetSeparatorRect_x                               0x14058E1B0
#define CListWnd__InsertLine_x                                     0x14058F620
#define CListWnd__RemoveLine_x                                     0x14058FC90
#define CListWnd__SetColors_x                                      0x140590050
#define CListWnd__SetColumnJustification_x                         0x140590070
#define CListWnd__SetColumnLabel_x                                 0x1405900F0
#define CListWnd__SetColumnWidth_x                                 0x140590290
#define CListWnd__SetCurSel_x                                      0x140590360
#define CListWnd__SetItemColor_x                                   0x1405905D0
#define CListWnd__SetItemData_x                                    0x140590670
#define CListWnd__SetItemText_x                                    0x1405908B0
#define CListWnd__Sort_x                                           0x140590CC0
#define CListWnd__ToggleSel_x                                      0x140590E30
#define CListWnd__SetColumnsSizable_x                              0x1405902E0
#define CListWnd__SetItemWnd_x                                     0x1405909E0
#define CListWnd__GetItemWnd_x                                     0x14058DF50
#define CListWnd__SetItemIcon_x                                    0x1405906B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x140589B90
#define CListWnd__SetVScrollPos_x                                  0x140590C20

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14042CE00

// MapViewMap
#define MapViewMap__vftable_x                                      0x1409F5B78
#define MapViewMap__Clear_x                                        0x14042E980
#define MapViewMap__SetZoom_x                                      0x140434FD0
#define MapViewMap__HandleLButtonDown_x                            0x140431B10

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140456650  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x14045CBE0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x14045D380
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140460B90
#define CMerchantWnd__SelectBuySellSlot_x                          0x14045FED0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x140464E10

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140636390
#define CPacketScrambler__hton_x                                   0x140636380

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405B1570
#define CSidlManagerBase__FindAnimation1_x                         0x1405B14B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405B1BA0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405B1950
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B08B0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B0840
#define CSidlManagerBase__CreateXWnd_x                             0x1405AFE80

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404CB060
#define CSidlManager__CreateXWnd_x                                 0x1404CB220

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405763B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140576290
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C06E0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140576520
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405759E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x140575AB0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140575CC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x140576BC0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140576DF0
#define CSidlScreenWnd__GetChildItem_x                             0x140576F90
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405771E0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140581240 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140577550
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405778C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140578170
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140578A60
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EDC6F8
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405790B0
#define CSidlScreenWnd__StoreIniVis_x                              0x1405798A0
#define CSidlScreenWnd__vftable_x                                  0x140A8DF18
#define CSidlScreenWnd__WndNotification_x                          0x1405798F0

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140314420 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x1403148C0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403147F0
#define CSkillMgr__IsActivatedSkill_x                              0x140314C70
#define CSkillMgr__IsCombatSkill_x                                 0x140314CB0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140314BE0
#define CSkillMgr__GetSkillLastUsed_x                              0x140314840

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404DB3E0
#define CSliderWnd__SetValue_x                                     0x140591FA0
#define CSliderWnd__SetNumTicks_x                                  0x140591E20

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D1670

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x140596730
#define CStmlWnd__CalculateHSBRange_x                              0x140580C40
#define CStmlWnd__CalculateVSBRange_x                              0x140597650
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405980D0
#define CStmlWnd__ForceParseNow_x                                  0x140598170
#define CStmlWnd__GetVisibleText_x                                 0x140598840
#define CStmlWnd__MakeStmlColorTag_x                               0x14059A5A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x14059A5E0
#define CStmlWnd__SetSTMLText_x                                    0x1405A15B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405A1760
#define CStmlWnd__UpdateHistoryString_x                            0x1405A1AF0

// CTabWnd
#define CTabWnd__Draw_x                                            0x140592370
#define CTabWnd__DrawCurrentPage_x                                 0x140592410
#define CTabWnd__DrawTab_x                                         0x1405927E0
#define CTabWnd__GetTabRect_x                                      0x140592E40
#define CTabWnd__InsertPage_x                                      0x140593110
#define CTabWnd__RemovePage_x                                      0x1405933A0
#define CTabWnd__SetPage_x                                         0x140593500
#define CTabWnd__UpdatePage_x                                      0x140593800

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405BA7E0
#define CPageWnd__SetTabText_x                                     0x1405BA850

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA490  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA8A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405A8F30
#define CTextureFont__DrawWrappedText1_x                           0x1405A8E40
#define CTextureFont__DrawWrappedText2_x                           0x1405A9060
#define CTextureFont__GetTextExtent_x                              0x1405A9410
#define CTextureFont__GetHeight_x                                  0x1405A93D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405BEE40

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405755C0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D0BE90
#define CXStr__gCXStrAccess_x                                      0x140EDC4F8

// CXWnd
#define CXWnd__BringToTop_x                                        0x14057C320
#define CXWnd__ClrFocus_x                                          0x14057C610
#define CXWnd__Destroy_x                                           0x14057C790
#define CXWnd__DoAllDrawing_x                                      0x14057C890
#define CXWnd__DrawColoredRect_x                                   0x14057D060
#define CXWnd__DrawTooltip_x                                       0x14057E6E0
#define CXWnd__DrawTooltipAtPoint_x                                0x14057E790
#define CXWnd__GetChildItem_x                                      0x14057F0A0
#define CXWnd__GetChildWndAt_x                                     0x14057F160
#define CXWnd__GetClientRect_x                                     0x14057F3F0
#define CXWnd__GetClientClipRect_x                                 0x14057F2C0
#define CXWnd__GetRelativeRect_x                                   0x140580D60
#define CXWnd__GetScreenClipRect_x                                 0x140580E70
#define CXWnd__GetScreenRect_x                                     0x140580FC0
#define CXWnd__GetTooltipRect_x                                    0x140581140
#define CXWnd__IsActive_x                                          0x140581700
#define CXWnd__IsDescendantOf_x                                    0x140581730
#define CXWnd__IsReallyVisible_x                                   0x140581790
#define CXWnd__IsType_x                                            0x1405817D0
#define CXWnd__Minimize_x                                          0x1405818D0
#define CXWnd__ProcessTransition_x                                 0x1405827B0
#define CXWnd__Resize_x                                            0x1405828D0
#define CXWnd__Right_x                                             0x140582970
#define CXWnd__SetFocus_x                                          0x140582D30
#define CXWnd__SetFont_x                                           0x140582D80
#define CXWnd__SetKeyTooltip_x                                     0x140582E80
#define CXWnd__SetMouseOver_x                                      0x140582FC0
#define CXWnd__SetParent_x                                         0x140583040
#define CXWnd__StartFade_x                                         0x140583470
#define CXWnd__vftable_x                                           0x140A8E508
#define CXWnd__CXWnd_x                                             0x14057AEB0
#define CXWnd__dCXWnd_x                                            0x14057B800

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405C58A0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405A33D0
#define CXWndManager__DrawCursor_x                                 0x1405A36B0
#define CXWndManager__DrawWindows_x                                0x1405A3910
#define CXWndManager__GetKeyboardFlags_x                           0x1405A3FD0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405A4010
#define CXWndManager__RemoveWnd_x                                  0x1405A7600

// CDBStr
#define CDBStr__GetString_x                                        0x14017DF60

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14063F4F0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE700
#define CCharacterListWnd__EnterWorld_x                            0x1400CD400
#define CCharacterListWnd__Quit_x                                  0x1400CE6E0
#define CCharacterListWnd__UpdateList_x                            0x1400CF3F0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14060DD50
#define ItemBase__CreateItemTagString_x                            0x14060E7D0
#define ItemBase__GetImageNum_x                                    0x140610DA0
#define ItemBase__GetItemValue_x                                   0x140612C00
#define ItemBase__IsEmpty_x                                        0x140614810
#define ItemBase__IsKeyRingItem_x                                  0x140614F40
#define ItemBase__ValueSellMerchant_x                              0x140619110
#define ItemClient__CanDrop_x                                      0x14029D4F0
#define ItemClient__CanGoInBag_x                                   0x14029D620
#define ItemClient__CreateItemClient_x                             0x14029D900
#define ItemClient__dItemClient_x                                  0x14029D360

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x14019D560
#define EQ_LoadingS__Array_x                                       0x140CF8220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406257F0
#define PcBase__GetCombatAbility_x                                 0x140625E90
#define PcBase__GetCombatAbilityTimer_x                            0x140625F30
#define PcBase__GetItemContainedRealEstateIds_x                    0x140626680
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140627170
#define PcClient__AlertInventoryChanged_x                          0x1402BFA10
#define PcClient__GetConLevel_x                                    0x1402C0030  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402C2760
#define PcClient__HasLoreItem_x                                    0x1402C3730
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D0FB0
#define PcZoneClient__RemoveMyAffect_x                             0x1402D4F00

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x14020B120  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x14020B2D0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x14020B430  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x14020B370  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x140244AE0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401787C0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140682EC0
#define PlayerBase__CanSee1_x                                      0x140682F90
#define PlayerBase__GetVisibilityLineSegment_x                     0x140683450
#define PlayerBase__HasProperty_x                                  0x140683680
#define PlayerBase__IsTargetable_x                                 0x140683740
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E19D0
#define PlayerClient__GetPcClient_x                                0x1402E4200
#define PlayerClient__PlayerClient_x                               0x1402DACB0
#define PlayerClient__SetNameSpriteState_x                         0x1402E7650
#define PlayerClient__SetNameSpriteTint_x                          0x1402E8610
#define PlayerZoneClient__ChangeHeight_x                           0x1402F6BA0
#define PlayerZoneClient__DoAttack_x                               0x1402F78B0
#define PlayerZoneClient__GetLevel_x                               0x1402FAFE0
#define PlayerZoneClient__IsValidTeleport_x                        0x140247860
#define PlayerZoneClient__LegalPlayerRace_x                        0x14018C450

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F04C0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F0570  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F0670
#define PlayerManagerClient__CreatePlayer_x                        0x1402EFF90
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140682A80

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402A2920
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402A2520
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402A2590
#define KeypressHandler__ClearCommandStateArray_x                  0x1402A28B0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402A2A40
#define KeypressHandler__HandleKeyUp_x                             0x1402A2B40
#define KeypressHandler__SaveKeymapping_x                          0x1402A27C0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x14063D030  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140637AC0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402C9CE0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402CEFE0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D16B0
#define PcZoneClient__RemovePetEffect_x                            0x1402D5000
#define PcZoneClient__HasAlternateAbility_x                        0x1402D2290
#define PcZoneClient__CanEquipItem_x                               0x1402CD310
#define PcZoneClient__GetItemByID_x                                0x1402D0070
#define PcZoneClient__RemoveBuffEffect_x                           0x1402D4D80
#define PcZoneClient__BandolierSwap_x                              0x1402CC2F0

// Doors
#define EQSwitch__UseSwitch_x                                      0x14024C390

// IconCache
#define IconCache__GetIcon_x                                       0x1403A7DA0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x14039C810
#define CContainerMgr__CloseContainer_x                            0x14039C150
#define CContainerMgr__OpenExperimentContainer_x                   0x14039CB90

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x14048FE30

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x140295700

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140420E40
#define CLootWnd__RequestLootSlot_x                                0x140421E50

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401CC880
#define EQ_Spell__SpellAffects_x                                   0x1401CDB40
#define EQ_Spell__SpellAffectBase_x                                0x1401CDAA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D6FE0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D6F90
#define EQ_Spell__IsSPAStacking_x                                  0x1401CD760
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401CD320
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401CCBF0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF970

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404EB760
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404EAE70
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404EA6A0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404F2E20  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x140175060
#define CTaskManager__GetTaskStatus_x                              0x140175170
#define CTaskManager__GetElementDescription_x                      0x140174CF0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401CABF0
#define EqSoundManager__PlayScriptMp3_x                            0x1401C9A30
#define EqSoundManager__SoundAssistPlay_x                          0x140319A70  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140319DB0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405841F0
#define CTextureAnimation__SetCurCell_x                            0x140584500

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x140293960

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140656F30
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140656FB0
#define CharacterBase__IsExpansionFlag_x                           0x1401ED560

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x14037AB00
#define CCastSpellWnd__IsBardSongPlaying_x                         0x14037B470
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x14037C9B0

// messages
#define msg_spell_worn_off_x                                       0x140201AD0
#define msg_new_text_x                                             0x1401FD3A0
#define __msgTokenTextParam_x                                      0x1401F5180
#define msgTokenText_x                                             0x1401F50A0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x14031B460
#define SpellManager__GetSpellByGroupAndRank_x                     0x14031B380

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406918E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14041A2B0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A14E0
#define CCursorAttachment__IsOkToActivate_x                        0x1403A4430
#define CCursorAttachment__RemoveAttachment_x                      0x1403A46E0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405BD2E0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405BD4D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405BD4E0

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
#define COptionsWnd__FillChatFilterList_x                          0x140472CB0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140696EA0
#define CResolutionHandler__GetWindowedStyle_x                     0x140313F90

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x140398B80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x14065B2B0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x14065B1A0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403BD7A0
#define CGroupWnd__UpdateDisplay_x                                 0x1403BD380

// ItemBase
#define ItemBase__IsLore_x                                         0x140615010
#define ItemBase__IsLoreEquipped_x                                 0x1406150A0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402B5650

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140244C40
#define EQPlacedItemManager__GetItemByGuid_x                       0x140244BD0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140244C10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E540

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
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401A5EC0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401A5240
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401A5CE0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401A5C60  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140320580

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14030E540

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x14020B4C0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140579EE0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084C70

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140331AC0

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C640

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140640070
#define FreeToPlayClient__RestrictionInfo_x                        0x140AA24D0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
