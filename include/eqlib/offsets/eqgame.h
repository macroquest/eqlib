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

#define __ClientDate                                               20260316u
#define __ExpectedVersionDate                                     "UPDATE ME"  // Mar 16 2026
#define __ExpectedVersionTime                                     "UPDATE ME"  // 09:51:23
#define __ActualVersionDate_x                                      0x140988148
#define __ActualVersionTime_x                                      0x140988138
#define __ActualVersionBuild_x                                     0x14091D300

// Memory Protection
#define __MemChecker0_x                                            0x1402CBD40
#define __MemChecker1_x                                            0x1405A4D40
#define __MemChecker4_x                                            0x1402991A0
#define __EncryptPad0_x                                            0x140D5AFC0

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E93AE0
#define instEQZoneInfo_x                                           0x140E93CD4 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x14022C140
#define __gfMaxZoomCameraDistance_x                                0x14091E5B8
#define __gfMaxCameraDistance_x                                    0x140AC8098
#define __CurrentSocial_x                                          0x140C169B0 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D52790
#define g_eqCommandStates_x                                        0x140D53830
#define __CommandList_x                                            0x140D53A60
#define __ScreenMode_x                                             0x140DDB4FC
#define __gWorld_x                                                 0x140E8E998
#define __gpbCommandEvent_x                                        0x140E8C46C
#define __ServerHost_x                                             0x140E8C658
#define __Guilds_x                                                 0x140E926A0
#define __MemCheckBitmask_x                                        0x140E94023
#define __MemCheckActive_x                                         0x140E9573D
#define __MouseEventTime_x                                         0x140F090B8
#define DI8__MouseState_x                                          0x140F0D268
#define __heqmain_x                                                0x140F0F6F8
#define DI8__Mouse_x                                               0x140F0F710
#define __HWnd_x                                                   0x140F0F718
#define __Mouse_x                                                  0x140F0F720
#define DI8__Keyboard_x                                            0x140F0F740
#define __LoginName_x                                              0x140F0FEAC
#define __CurrentMapLabel_x                                        0x140F239C0
#define __LabelCache_x                                             0x140F24590
#define __ChatFilterDefs_x                                         0x140A61FE0
#define Teleport_Table_Size_x                                      0x140E8C4F4
#define Teleport_Table_x                                           0x140E8C970

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E8EA30
#define pinstActiveBanker_x                                        0x140E8C3A0
#define pinstActiveCorpse_x                                        0x140E8C390
#define pinstActiveGMaster_x                                       0x140E8C398
#define pinstActiveMerchant_x                                      0x140E8C388
#define pinstAltAdvManager_x                                       0x140DDC240
#define pinstCEverQuest_x                                          0x140F0F758
#define pinstCamActor_x                                            0x140DDB4E8
#define pinstCDBStr_x                                              0x140DDAFF0
#define pinstCDisplay_x                                            0x140E8C450
#define pinstControlledPlayer_x                                    0x140E8C430
#define pinstCResolutionHandler_x                                  0x140F34B38
#define pinstCSidlManager_x                                        0x140F35B30
#define pinstCXWndManager_x                                        0x140F35B28
#define instDynamicZone_x                                          0x140E92560 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E925AE
#define instExpeditionName_x                                       0x140E925EE
#define pinstDZMember_x                                            0x140E92678
#define pinstDZTimerInfo_x                                         0x140E92680
#define pinstEqLogin_x                                             0x140F0F7F0
#define instTribute_x                                              0x140D4DDC0
#define pinstDeviceInputProxy_x                                    0x140E93B3C
#define pinstEQSoundManager_x                                      0x140DDC5C0
#define pinstEQSpellStrings_x                                      0x140DBFB80
#define pinstSGraphicsEngine_x                                     0x140F34B68
#define pinstLocalPC_x                                             0x140E8E9A8
#define pinstLocalPlayer_x                                         0x140E8C380
#define pinstCMercenaryClientManager_x                             0x140F0A9D8
#define pinstModelPlayer_x                                         0x140E8C3B0
#define pinstRenderInterface_x                                     0x140F34B80
#define pinstSkillMgr_x                                            0x140F0C688
#define pinstSpawnManager_x                                        0x140F0AD90
#define pinstSpellManager_x                                        0x140F0C6F0
#define pinstStringTable_x                                         0x140E8EA20
#define pinstSwitchManager_x                                       0x140E8BEF0
#define pinstTarget_x                                              0x140E8C428
#define pinstTaskMember_x                                          0x140D4DDB0 // Part of g_taskManager
#define pinstTradeTarget_x                                         0x140E8C3A8
#define instTributeActive_x                                        0x140D4DDE9
#define pinstViewActor_x                                           0x140DDB4E0
#define pinstWorldData_x                                           0x140E8C178
#define pinstPlayerPath_x                                          0x140F0ADB8
#define pinstTargetIndicator_x                                     0x140F0C7A0
#define EQObject_Top_x                                             0x140E8C458

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140F20B20
#define pinstCContainerMgr_x                                       0x140DDB600
#define pinstCContextMenuManager_x                                 0x140F35810
#define pinstCInvSlotMgr_x                                         0x140DDB5F0
#define pinstCItemDisplayManager_x                                 0x140F23590
#define pinstCPopupWndManager_x                                    0x140F23E20
#define pinstCSpellDisplayMgr_x                                    0x140F24470
#define pinstCTaskManager_x                                        0x140C16CF0
#define pinstEQSuiteTextureLoader_x                                0x140D646E0
#define pinstItemIconCache_x                                       0x140F20E80
#define pinstLootFiltersManager_x                                  0x140DDAA38
#define pinstGFViewListener_x                                      0x140F34FE8


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x1402565A0
#define __CastRay_x                                                0x14024E720
#define __CastRay2_x                                               0x14024E410
#define __compress_block_x                                         0x14055A0F0
#define __ConvertItemTags_x                                        0x14024EB80
#define __CleanItemTags_x                                          0x14008C740
#define __CreateCascadeMenuItems_x                                 0x140195E60
#define __decompress_block_x                                       0x1405A0530
#define __DoesFileExist_x                                          0x1405A8DB0
#define __EQGetTime_x                                              0x1405A52F0
#define __ExecuteCmd_x                                             0x1402235E0
#define __FixHeading_x                                             0x140660E20
#define __FlushDxKeyboard_x                                        0x140350790
#define __get_bearing_x                                            0x1402588C0
#define __get_melee_range_x                                        0x1402589B0
#define __GetAnimationCache_x                                      0x1403D5550
#define __GetGaugeValueFromEQ_x                                    0x1405192B0
#define __GetLabelFromEQ_x                                         0x14051A890
#define __GetXTargetType_x                                         0x140663310   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x140660EA0
#define __HelpPath_x                                               0x140F08F80   // Why?
#define __NewUIINI_x                                               0x1405262F0   // Why?
#define __ProcessDeviceEvents_x                                    0x1402997A0
#define __ProcessGameEvents_x                                      0x14028E180
#define __ProcessKeyboardEvents_x                                  0x140351EE0
#define __ProcessMouseEvents_x                                     0x14028F8C0
#define __SaveColors_x                                             0x1401A5DC0
#define __STMLToText_x                                             0x1405B9550
#define __WndProc_x                                                0x14034EF30
#define CMemoryMappedFile__SetFile_x                               0x14080FA20
#define DrawNetStatus_x                                            0x1402DB320
#define Util__FastTime_x                                           0x1405A4800
#define __eq_delete_x                                              0x1406DB9F8
#define __eq_new_x                                                 0x1406DBC50
#define __CopyLayout_x                                             0x1402C8120
#define __ThrottleFrameRate_x                                      0x14027D298
#define __ThrottleFrameRateEnd_x                                   0x14027D29E

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140361980
#define CAAWnd__Update_x                                           0x140361C80
#define CAAWnd__UpdateSelected_x                                   0x140362EA0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400B0870
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A9170
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408692D0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400B11D0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401B10D0
#define AltAdvManager__IsAbilityReady_x                            0x1401B1570
#define AltAdvManager__GetAAById_x                                 0x1401B0960
#define AltAdvManager__CanTrainAbility_x                           0x1401B0760
#define AltAdvManager__CanSeeAbility_x                             0x1401B0410

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D8400
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D92C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D9510
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400ED840
#define CharacterZoneClient__CanUseItem_x                          0x1400EDE00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D9EF0
#define CharacterZoneClient__CastSpell_x                           0x1400D9F90
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E9D00
#define CharacterZoneClient__Cur_HP_x                              0x1400EF540
#define CharacterZoneClient__Cur_Mana_x                            0x1400EF700
#define CharacterZoneClient__FindAffectSlot_x                      0x1400DD200
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400F5E20
#define CharacterZoneClient__GetBaseSkill_x                        0x140104370  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400DE6A0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400ED140
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400F76B0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400F65A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400DE820
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400CDE80
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400CFD50
#define CharacterZoneClient__GetHPRegen_x                          0x1400F6CD0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400EF190
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400F5EC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400DE8A0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F8540
#define CharacterZoneClient__GetModCap_x                           0x1400FFB20
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400DEB30
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400DED00
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400D33E0
#define CharacterZoneClient__HasSkill_x                            0x1400FB660
#define CharacterZoneClient__HitBySpell_x                          0x1400DF790
#define CharacterZoneClient__IsStackBlocked_x                      0x1400E3160
#define CharacterZoneClient__MakeMeVisible_x                       0x1400FF600
#define CharacterZoneClient__Max_Endurance_x                       0x1402F60F0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400FF950
#define CharacterZoneClient__Max_Mana_x                            0x1402F6310  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400FFDB0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400E67B0
#define CharacterZoneClient__SpellDuration_x                       0x1400E74E0
#define CharacterZoneClient__TotalEffect_x                         0x1400E88D0
#define CharacterZoneClient__UseSkill_x                            0x1401052F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403826C0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14038D4F0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403891B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14038CF60

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14038FD60

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AE7B10

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403B2FC0
#define CChatWindowManager__InitContextMenu_x                      0x1403B3150
#define CChatWindowManager__FreeChatWindow_x                       0x1403B1FC0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403BB4C0
#define CChatWindowManager__CreateChatWindow_x                     0x1403B1A00

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14010D8D0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403BC530
#define CChatWindow__Clear_x                                       0x1403BD540
#define CChatWindow__WndNotification_x                             0x1403BE7A0
#define CChatWindow__AddHistory_x                                  0x1403BD040

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405E6D10
#define CContextMenu__RemoveMenuItem_x                             0x1405E7120
#define CContextMenu__RemoveAllMenuItems_x                         0x1405E70F0
#define CContextMenu__CheckMenuItem_x                              0x1405E6F60
#define CContextMenu__SetMenuItem_x                                0x1405E7140
#define CContextMenu__AddSeparator_x                               0x1405E6E90

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1405D8AA0
#define CContextMenuManager__RemoveMenu_x                          0x1405D9080
#define CContextMenuManager__PopupMenu_x                           0x1405D8DC0
#define CContextMenuManager__Flush_x                               0x1405D8B20
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403CCDF0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406B5850
#define CChatService__GetFriendName_x                              0x1406B5860

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x1405C9980
#define CComboWnd__Draw_x                                          0x1405C9A80
#define CComboWnd__GetCurChoice_x                                  0x1405C9D70  // unused
#define CComboWnd__GetListRect_x                                   0x1405C9E10
#define CComboWnd__InsertChoice_x                                  0x1405CA150
#define CComboWnd__SetColors_x                                     0x1405CA4E0
#define CComboWnd__SetChoice_x                                     0x1405CA4A0
#define CComboWnd__GetItemCount_x                                  0x1405C9E00
#define CComboWnd__GetCurChoiceText_x                              0x1405C9DB0  // unused
#define CComboWnd__GetChoiceText_x                                 0x1405C9D40
#define CComboWnd__InsertChoiceAtIndex_x                           0x1405CA210

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403CAAF0
#define CContainerWnd__SetContainer_x                              0x14042A8A0
#define CContainerWnd__vftable_x                                   0x1409FCEC0

// CDisplay
#define CDisplay__cameraType_x                                     0x140DDB244
#define CDisplay__ZoneMainUI_x                                     0x140601300
#define CDisplay__PreZoneMainUI_x                                  0x1401A2CC0
#define CDisplay__CleanGameUI_x                                    0x140194F20
#define CDisplay__GetClickedActor_x                                0x140199140
#define CDisplay__GetUserDefinedColor_x                            0x140199DB0
#define CDisplay__InitCharSelectUI_x                               0x14019A060
#define CDisplay__ReloadUI_x                                       0x1401A4FC0
#define CDisplay__RestartUI_x                                      0x140207B40
#define CDisplay__WriteTextHD2_x                                   0x1401ABFE0
#define CDisplay__TrueDistance_x                                   0x1401ABC80
#define CDisplay__SetViewActor_x                                   0x1401A84F0
#define CDisplay__GetFloorHeight_x                                 0x1401993A0
#define CDisplay__ToggleScreenshotMode_x                           0x1401AB770
#define CDisplay__RealRender_World_x                               0x1401A4390

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14060B7C0
#define CEditWnd__DrawCaret_x                                      0x1405FCF90  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405FD4A0
#define CEditWnd__GetCaretPt_x                                     0x1405FD740  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405FD780
#define CEditWnd__GetDisplayString_x                               0x1405FD9E0
#define CEditWnd__GetHorzOffset_x                                  0x1405FDC30
#define CEditWnd__GetLineForPrintableChar_x                        0x1405FDD90
#define CEditWnd__GetSelStartPt_x                                  0x1405FE080  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405FDEC0
#define CEditWnd__PointFromPrintableChar_x                         0x1405FEC40
#define CEditWnd__ReplaceSelection_x                               0x1405FEFF0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405FF4B0
#define CEditWnd__SetEditable_x                                    0x1405FF730
#define CEditWnd__SetWindowText_x                                  0x1405FF760

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x14027E380
#define CEverQuest__ClickedPlayer_x                                0x140272540
#define CEverQuest__CreateTargetIndicator_x                        0x140272E10
#define CEverQuest__DoTellWindow_x                                 0x14010D5D0 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14010DEC0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14027FD70
#define CEverQuest__dsp_chat_x                                     0x14010D000 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402AB290
#define CEverQuest__Emote_x                                        0x140280760
#define CEverQuest__GetBodyTypeDesc_x                              0x140281540
#define CEverQuest__GetClassDesc_x                                 0x1402815A0
#define CEverQuest__GetClassThreeLetterCode_x                      0x140281970
#define CEverQuest__GetDeityDesc_x                                 0x140281C20
#define CEverQuest__GetLangDesc_x                                  0x140282050
#define CEverQuest__GetRaceDesc_x                                  0x1402823F0
#define CEverQuest__InterpretCmd_x                                 0x140284030
#define CEverQuest__LeftClickedOnPlayer_x                          0x140299810
#define CEverQuest__LMouseUp_x                                     0x140285B40
#define CEverQuest__RightClickedOnPlayer_x                         0x140296DB0
#define CEverQuest__RMouseUp_x                                     0x140290450
#define CEverQuest__SetGameState_x                                 0x14029C280
#define CEverQuest__UPCNotificationFlush_x                         0x1402A1C10 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x140285720
#define CEverQuest__ReportSuccessfulHeal_x                         0x140291840
#define CEverQuest__ReportSuccessfulHit_x                          0x140292660

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403E0710

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C7640
#define CGuild__GetGuildName_x                                     0x1400C7680

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140407570

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402BD800
#define CHotButton__SetCheck_x                                     0x1402BDAD0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1404213E0
#define CInvSlotMgr__MoveItem_x                                    0x140421F70
#define CInvSlotMgr__SelectSlot_x                                  0x140424290

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14041E1B0
#define CInvSlot__SliderComplete_x                                 0x14041F9E0
#define CInvSlot__GetItemBase_x                                    0x140419800
#define CInvSlot__UpdateItem_x                                     0x14041FEA0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404264A0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140448180
#define CItemDisplayWnd__UpdateStrings_x                           0x14044AE10
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140444A60
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140446390
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404475A0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140515D10
#define CSpellDisplayWnd__UpdateStrings_x                          0x140517AA0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140553450

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404410E0

// CSpellDisplayManager
#define CSpellDisplayManager__ShowSpell_x                          0x1405178E0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14015A8F0

// CLabel
#define CLabel__UpdateText_x                                       0x140452420

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405CD320
#define CListWnd__dCListWnd_x                                      0x1405CD760
#define CListWnd__vftable_x                                        0x140AE5C60
#define CListWnd__AddColumn_x                                      0x1405CDDF0
#define CListWnd__AddColumn1_x                                     0x1405CDE90
#define CListWnd__AddLine_x                                        0x1405CDFF0
#define CListWnd__AddString_x                                      0x1405CE590
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405CEB00
#define CListWnd__CalculateVSBRange_x                              0x1405CEDE0
#define CListWnd__ClearSel_x                                       0x1405CEF90
#define CListWnd__ClearAllSel_x                                    0x1405CEF30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405CEFF0
#define CListWnd__Compare_x                                        0x1405CF1B0
#define CListWnd__Draw_x                                           0x1405CF670
#define CListWnd__DrawColumnSeparators_x                           0x1405D0200
#define CListWnd__DrawHeader_x                                     0x1405D02C0
#define CListWnd__DrawItem_x                                       0x1405D0990
#define CListWnd__DrawLine_x                                       0x1405D1330
#define CListWnd__DrawSeparator_x                                  0x1405D17F0
#define CListWnd__EnableLine_x                                     0x1405D1C10
#define CListWnd__EnsureVisible_x                                  0x1405D1C70
#define CListWnd__ExtendSel_x                                      0x1405D1D70
#define CListWnd__GetColumnMinWidth_x                              0x1405D2100
#define CListWnd__GetColumnWidth_x                                 0x1405D2180
#define CListWnd__GetCurSel_x                                      0x1405D2280
#define CListWnd__GetItemData_x                                    0x1405D2600
#define CListWnd__GetItemHeight_x                                  0x1405D2640
#define CListWnd__GetItemRect_x                                    0x1405D2870
#define CListWnd__GetItemText_x                                    0x1405D2B10
#define CListWnd__GetSelList_x                                     0x1405D2D70
#define CListWnd__GetSeparatorRect_x                               0x1405D2F60
#define CListWnd__InsertLine_x                                     0x1405D43C0
#define CListWnd__RemoveLine_x                                     0x1405D4A30
#define CListWnd__SetColors_x                                      0x1405D4DF0
#define CListWnd__SetColumnJustification_x                         0x1405D4E10
#define CListWnd__SetColumnLabel_x                                 0x1405D4E90
#define CListWnd__SetColumnWidth_x                                 0x1405D5030
#define CListWnd__SetCurSel_x                                      0x1405D5100
#define CListWnd__SetItemColor_x                                   0x1405D5370
#define CListWnd__SetItemData_x                                    0x1405D5410
#define CListWnd__SetItemText_x                                    0x1405D5650
#define CListWnd__Sort_x                                           0x1405D5A60
#define CListWnd__ToggleSel_x                                      0x1405D5BD0
#define CListWnd__SetColumnsSizable_x                              0x1405D5080
#define CListWnd__SetItemWnd_x                                     0x1405D5780
#define CListWnd__GetItemWnd_x                                     0x1405D2D00
#define CListWnd__SetItemIcon_x                                    0x1405D5450
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405CE8D0
#define CListWnd__SetVScrollPos_x                                  0x1405D59C0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140465DE0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A4A850
#define MapViewMap__Clear_x                                        0x140467AA0
#define MapViewMap__SetZoom_x                                      0x14046E180
#define MapViewMap__HandleLButtonDown_x                            0x14046AC80

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x140490240  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140496BB0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140497380
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049ACC0
#define CMerchantWnd__SelectBuySellSlot_x                          0x140499FC0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14049F160

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140690C30
#define CPacketScrambler__hton_x                                   0x140690C20

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405F6850
#define CSidlManagerBase__FindAnimation1_x                         0x1405F6790
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405F6E90
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405F6C30
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405F5B90
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405F5B20
#define CSidlManagerBase__CreateXWnd_x                             0x1405F5160

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140508B70
#define CSidlManager__CreateXWnd_x                                 0x140508D30

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x1405BB160
#define CSidlScreenWnd__CalculateVSBRange_x                        0x1405BB040
#define CSidlScreenWnd__ConvertToRes_x                             0x140605B00 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1405BB2E0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1405BA780
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1405BA850
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x1405BAA60
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405BB9D0
#define CSidlScreenWnd__EnableIniStorage_x                         0x1405BBC00
#define CSidlScreenWnd__GetChildItem_x                             0x1405BBD90
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405BBFE0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x1405C5F90 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405BC350
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405BC6C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405BCF80
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1405BD980
#define CSidlScreenWnd__m_layoutCopy_x                             0x140F34E88
#define CSidlScreenWnd__StoreIniInfo_x                             0x1405BE000
#define CSidlScreenWnd__StoreIniVis_x                              0x1405BE7F0
#define CSidlScreenWnd__vftable_x                                  0x140AE4EE8
#define CSidlScreenWnd__WndNotification_x                          0x1405BE840

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x1403397D0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140339AF0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140339A20
#define CSkillMgr__IsActivatedSkill_x                              0x140339EB0
#define CSkillMgr__IsCombatSkill_x                                 0x140339EF0
#define CSkillMgr__GetSkillTimerDuration_x                         0x140339E20
#define CSkillMgr__GetSkillLastUsed_x                              0x140339A70

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1405D6530
#define CSliderWnd__SetValue_x                                     0x1405D6D40
#define CSliderWnd__SetNumTicks_x                                  0x1405D6BC0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14050F3E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405DB500
#define CStmlWnd__CalculateHSBRange_x                              0x1405C5990
#define CStmlWnd__CalculateVSBRange_x                              0x1405DC420
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405DCEC0
#define CStmlWnd__ForceParseNow_x                                  0x1405DCF60
#define CStmlWnd__GetVisibleText_x                                 0x1405DD630
#define CStmlWnd__MakeStmlColorTag_x                               0x1405DF3C0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405DF400
#define CStmlWnd__SetSTMLText_x                                    0x1405E6490
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405E6640
#define CStmlWnd__UpdateHistoryString_x                            0x1405E69E0

// CTabWnd
#define CTabWnd__Draw_x                                            0x1405D7110
#define CTabWnd__DrawCurrentPage_x                                 0x1405D71B0
#define CTabWnd__DrawTab_x                                         0x1405D7580
#define CTabWnd__GetTabRect_x                                      0x1405D7C10
#define CTabWnd__InsertPage_x                                      0x1405D7EE0
#define CTabWnd__RemovePage_x                                      0x1405D8170
#define CTabWnd__SetPage_x                                         0x1405D82D0
#define CTabWnd__UpdatePage_x                                      0x1405D85D0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405FFBB0
#define CPageWnd__SetTabText_x                                     0x1405FFC20

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400C0B30  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400C0F60


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405EE090
#define CTextureFont__DrawWrappedText1_x                           0x1405EDF90
#define CTextureFont__DrawWrappedText2_x                           0x1405EE1C0
#define CTextureFont__GetTextExtent_x                              0x1405EE570
#define CTextureFont__GetHeight_x                                  0x1405EE530

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140604220

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405B7BD0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D64050
#define CXStr__gCXStrAccess_x                                      0x140F349E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x1405C1050
#define CXWnd__ClrFocus_x                                          0x1405C1340
#define CXWnd__Destroy_x                                           0x1405C14C0
#define CXWnd__DoAllDrawing_x                                      0x1405C15C0
#define CXWnd__DrawColoredRect_x                                   0x1405C1D90
#define CXWnd__DrawTooltip_x                                       0x1405C3400
#define CXWnd__DrawTooltipAtPoint_x                                0x1405C34C0
#define CXWnd__GetChildItem_x                                      0x1405C3DD0
#define CXWnd__GetChildWndAt_x                                     0x1405C3E90
#define CXWnd__GetClientRect_x                                     0x1405C4120
#define CXWnd__GetClientClipRect_x                                 0x1405C3FF0
#define CXWnd__GetRelativeRect_x                                   0x1405C5AB0
#define CXWnd__GetScreenClipRect_x                                 0x1405C5BC0
#define CXWnd__GetScreenRect_x                                     0x1405C5D30
#define CXWnd__GetTooltipRect_x                                    0x1405C5EA0
#define CXWnd__IsActive_x                                          0x1405C6450
#define CXWnd__IsDescendantOf_x                                    0x1405C6480
#define CXWnd__IsReallyVisible_x                                   0x1405C64E0
#define CXWnd__IsType_x                                            0x1405C6530
#define CXWnd__Minimize_x                                          0x1405C6630
#define CXWnd__ProcessTransition_x                                 0x1405C74B0
#define CXWnd__Resize_x                                            0x1405C75D0
#define CXWnd__Right_x                                             0x1405C7670
#define CXWnd__SetFocus_x                                          0x1405C7A40
#define CXWnd__SetFont_x                                           0x1405C7A90
#define CXWnd__SetKeyTooltip_x                                     0x1405C7B90
#define CXWnd__SetMouseOver_x                                      0x1405C7CD0
#define CXWnd__SetParent_x                                         0x1405C7D40
#define CXWnd__StartFade_x                                         0x1405C8170
#define CXWnd__vftable_x                                           0x140AE54C0
#define CXWnd__CXWnd_x                                             0x1405BFC60
#define CXWnd__dCXWnd_x                                            0x1405C0590

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14060AF50

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405E8300
#define CXWndManager__DrawCursor_x                                 0x1405E85E0
#define CXWndManager__DrawWindows_x                                0x1405E8840
#define CXWndManager__GetKeyboardFlags_x                           0x1405E8EB0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405E8EF0
#define CXWndManager__RemoveWnd_x                                  0x1405EC710

// CDBStr
#define CDBStr__GetString_x                                        0x1401930E0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x14069AC20

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400D5D90
#define CCharacterListWnd__EnterWorld_x                            0x1400D4B90
#define CCharacterListWnd__Quit_x                                  0x1400D5D70
#define CCharacterListWnd__UpdateList_x                            0x1400D6AD0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140667FE0
#define ItemBase__CreateItemTagString_x                            0x140668A40
#define ItemBase__GetImageNum_x                                    0x14066B140
#define ItemBase__GetItemValue_x                                   0x14066CC60
#define ItemBase__IsEmpty_x                                        0x14066E970
#define ItemBase__IsKeyRingItem_x                                  0x14066F080
#define ItemBase__ValueSellMerchant_x                              0x1406732C0
#define ItemClient__CanDrop_x                                      0x1402C0070
#define ItemClient__CanGoInBag_x                                   0x1402C01A0
#define ItemClient__CreateItemClient_x                             0x1402C0430
#define ItemClient__dItemClient_x                                  0x1402BFEF0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401B2AA0
#define EQ_LoadingS__Array_x                                       0x140D502A0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14067F3C0
#define PcBase__GetCombatAbility_x                                 0x14067FAC0
#define PcBase__GetCombatAbilityTimer_x                            0x14067FB60
#define PcBase__GetItemContainedRealEstateIds_x                    0x140680330
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140680D90
#define PcClient__AlertInventoryChanged_x                          0x1402E35A0
#define PcClient__GetConLevel_x                                    0x1402E3CC0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402E63F0
#define PcClient__HasLoreItem_x                                    0x1402E7480
#define PcZoneClient__GetItemRecastTimer_x                         0x1402F3D60
#define PcZoneClient__RemoveMyAffect_x                             0x1402F7220

// EQGroundItemListManager
#define EQGroundItem__EQGroundItem_x                               0x1402280C0
#define EQGroundItemListManager__Add_x                             0x140228270
#define EQGroundItemListManager__Clear_x                           0x140228310
#define EQGroundItemListManager__Delete_x                          0x1402283D0
#define EQGroundItemListManager__Instance_x                        0x140228460

// EQPlacedItemManager
#define EQPlacedItemManager__Add_x                                 0x140263790

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14018D810

// PlayerClient
#define PlayerBase__CanSee_x                                       0x140654150
#define PlayerBase__CanSee1_x                                      0x140654230
#define PlayerBase__GetVisibilityLineSegment_x                     0x140654720
#define PlayerBase__HasProperty_x                                  0x140654900
#define PlayerBase__IsTargetable_x                                 0x1406549C0
#define PlayerClient__ChangeBoneStringSprite_x                     0x140304F20
#define PlayerClient__GetPcClient_x                                0x140307A30
#define PlayerClient__PlayerClient_x                               0x1402FD240
#define PlayerClient__SetNameSpriteState_x                         0x14030B160
#define PlayerClient__SetNameSpriteTint_x                          0x14030C120
#define PlayerZoneClient__ChangeHeight_x                           0x14031AC90
#define PlayerZoneClient__DoAttack_x                               0x14031B9A0
#define PlayerZoneClient__GetLevel_x                               0x14031F0F0
#define PlayerZoneClient__IsValidTeleport_x                        0x140266520
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401A1540

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140314160  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140314210  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140314310
#define PlayerManagerClient__CreatePlayer_x                        0x140313C20
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x140653D10

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402C5610
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402C4F20
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402C4F90
#define KeypressHandler__ClearCommandStateArray_x                  0x1402C55A0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402C5730
#define KeypressHandler__HandleKeyUp_x                             0x1402C5850
#define KeypressHandler__SaveKeymapping_x                          0x1402C5420  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140698730  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140692350

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402ED570  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402F1E90
#define PcZoneClient__GetPcSkillLimit_x                            0x1402F4E40
#define PcZoneClient__RemovePetEffect_x                            0x1402F7500
#define PcZoneClient__HasAlternateAbility_x                        0x1402F5A20
#define PcZoneClient__CanEquipItem_x                               0x1402F0150
#define PcZoneClient__GetItemByID_x                                0x1402F2DE0
#define PcZoneClient__RemoveBuffEffect_x                           0x1402F70B0
#define PcZoneClient__BandolierSwap_x                              0x1402E3650

// Doors
#define EQSwitch__UseSwitch_x                                      0x14026B0B0

// IconCache
#define IconCache__GetIcon_x                                       0x1403D5580

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403C9840
#define CContainerMgr__CloseContainer_x                            0x1403C9160
#define CContainerMgr__OpenExperimentContainer_x                   0x1403C9BE0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404CBDE0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402B75D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140459960
#define CLootWnd__RequestLootSlot_x                                0x14045A9B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401E2E60
#define EQ_Spell__SpellAffects_x                                   0x1401E4140
#define EQ_Spell__SpellAffectBase_x                                0x1401E40A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400DEE90
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400DEE40
#define EQ_Spell__IsSPAStacking_x                                  0x1401E3D70
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401E3920
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401E31E0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400C6140

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x140529B40
#define CTargetWnd__RefreshTargetBuffs_x                           0x140529260
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140528A60

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1405313F0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14018A2A0
#define CTaskManager__GetTaskStatus_x                              0x14018A3B0
#define CTaskManager__GetElementDescription_x                      0x140189F30

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401E1180
#define EqSoundManager__PlayScriptMp3_x                            0x1401DFFC0
#define EqSoundManager__SoundAssistPlay_x                          0x14033EC10  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14033EF50  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x1405C8F20
#define CTextureAnimation__SetCurCell_x                            0x1405C9230

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402B57C0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406B2FC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406B3040
#define CharacterBase__IsExpansionFlag_x                           0x140207190

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403A3EA0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403A4910
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403A5E80

// messages
#define msg_spell_worn_off_x                                       0x14021E300
#define msg_new_text_x                                             0x140219AD0
#define __msgTokenTextParam_x                                      0x140210F20
#define msgTokenText_x                                             0x140210E30

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140340870
#define SpellManager__GetSpellByGroupAndRank_x                     0x140340770

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406636F0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140452BA0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403CE680
#define CCursorAttachment__IsOkToActivate_x                        0x1403D1B20
#define CCursorAttachment__RemoveAttachment_x                      0x1403D1DD0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x140602680
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140602880
#define CEQSuiteTextureLoader__GetTexture_x                        0x140602890

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140155170
#define CFindItemWnd__Update_x                                     0x140155B30
#define CFindItemWnd__PickupSelectedItem_x                         0x14014E810

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14015FD80
#define LootFiltersManager__GetItemFilterData_x                    0x1401608A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140161150
#define LootFiltersManager__SetItemLootFilter_x                    0x140161400

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404ADC10

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x140339390
#define CResolutionHandler__UpdateResolution_x                     0x1405AD810

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403C5A80

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406B73E0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406B72D0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403EFD60
#define CGroupWnd__UpdateDisplay_x                                 0x1403EEEF0

// ItemBase
#define ItemBase__IsLore_x                                         0x14066F1C0
#define ItemBase__IsLoreEquipped_x                                 0x14066F250

#define MultipleItemMoveManager__ProcessMove_x                     0x1402D9110

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x1402638F0
#define EQPlacedItemManager__GetItemByGuid_x                       0x140263880
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x1402638C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140333670

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14012B400
#define FactionManagerClient__HandleFactionMessage_x               0x14012B7E0
#define FactionManagerClient__GetFactionStanding_x                 0x14012ABD0
#define FactionManagerClient__GetMaxFaction_x                      0x14012ABD0
#define FactionManagerClient__GetMinFaction_x                      0x14012AA80

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400B2ED0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140136DB0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401BB810
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401BA9B0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401BB630  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401BB5B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140345B80

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140333670

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405BEE30

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140088E20

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x1403572C0

// AchievementManager
#define AchievementManager__Instance_x                             0x140091FD0

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14069B7B0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AF9E70

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140560510

// CGFSCreenWnd
#define CGFScreenWnd__vftable_x                                    0x14084F8E8
#define CGFScreenWnd__CGFScreenWnd_x                               0x140072AD0
#define CGFScreenWnd__CGFScreenWnd1_x                              0x140072C60
#define CGFScreenWnd__dCGFScreenWnd_x                              0x140072E10

#if __has_include("../../../../private/eqgame-private.h")
#include "../../../../private/eqgame-private.h"
#endif
