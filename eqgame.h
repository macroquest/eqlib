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

#define __ClientDate                                               20240722u
#define __ExpectedVersionDate                                     "Jul 22 2024"
#define __ExpectedVersionTime                                     "12:27:01"
#define __ActualVersionDate_x                                      0x140941B20
#define __ActualVersionTime_x                                      0x140941B10
#define __ActualVersionBuild_x                                     0x1408D8560

// Memory Protection
#define __MemChecker0_x                                            0x1402B1580
#define __MemChecker1_x                                            0x14056E210
#define __MemChecker4_x                                            0x14027FE90
#define __EncryptPad0_x                                            0x140D0EE30

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E47A80
#define instEQZoneInfo_x                                           0x140E47C74 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216AD0
#define __gfMaxZoomCameraDistance_x                                0x1408D97D8
#define __gfMaxCameraDistance_x                                    0x140A7E314
#define __CurrentSocial_x                                          0x140BCA940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D06710
#define g_eqCommandStates_x                                        0x140D07780
#define __CommandList_x                                            0x140D079C0
#define __ScreenMode_x                                             0x140D8F264
#define __gWorld_x                                                 0x140E3FF00
#define __gpbCommandEvent_x                                        0x140E3FF10
#define __ServerHost_x                                             0x140E400F8
#define __Guilds_x                                                 0x140E46630
#define __MemCheckBitmask_x                                        0x140E47FB7
#define __MemCheckActive_x                                         0x140E496A5
#define __MouseEventTime_x                                         0x140EBCFF0
#define DI8__MouseState_x                                          0x140EC1238
#define __heqmain_x                                                0x140EC36D8
#define DI8__Mouse_x                                               0x140EC1188
#define __HWnd_x                                                   0x140EC1210
#define __Mouse_x                                                  0x140EC1144
#define DI8__Keyboard_x                                            0x140EC1160
#define __LoginName_x                                              0x140EC3DBC
#define __CurrentMapLabel_x                                        0x140ED75C0
#define __LabelCache_x                                             0x140ED8190
#define __ChatFilterDefs_x                                         0x140A19420
#define Teleport_Table_Size_x                                      0x140E3FF18
#define Teleport_Table_x                                           0x140E40510

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E429C0
#define pinstActiveBanker_x                                        0x140E40428
#define pinstActiveCorpse_x                                        0x140E40418
#define pinstActiveGMaster_x                                       0x140E40420
#define pinstActiveMerchant_x                                      0x140E40410
#define pinstAltAdvManager_x                                       0x140D901D8
#define pinstCEverQuest_x                                          0x140EC1180
#define pinstCamActor_x                                            0x140D8F248
#define pinstCDBStr_x                                              0x140D8EF90
#define pinstCDisplay_x                                            0x140E40500
#define pinstControlledPlayer_x                                    0x140E404B8
#define pinstCResolutionHandler_x                                  0x141548958
#define pinstCSidlManager_x                                        0x140EE9490
#define pinstCXWndManager_x                                        0x140EE9488
#define instDynamicZone_x                                          0x140E464F0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4653E
#define instExpeditionName_x                                       0x140E4657E
#define pinstDZMember_x                                            0x140E46608
#define pinstDZTimerInfo_x                                         0x140E46610
#define pinstEqLogin_x                                             0x140EC3700
#define instTribute_x                                              0x140D01D50
#define pinstDeviceInputProxy_x                                    0x140E47ADC
#define pinstEQSoundManager_x                                      0x140D90558
#define pinstEQSpellStrings_x                                      0x140D73B60
#define pinstSGraphicsEngine_x                                     0x1415486D8
#define pinstLocalPC_x                                             0x140E404E8
#define pinstLocalPlayer_x                                         0x140E40408
#define pinstCMercenaryClientManager_x                             0x140EBE8E8
#define pinstModelPlayer_x                                         0x140E40438
#define pinstRenderInterface_x                                     0x1415486F0
#define pinstSkillMgr_x                                            0x140EC0580
#define pinstSpawnManager_x                                        0x140EBECA0
#define pinstSpellManager_x                                        0x140EC05E8
#define pinstStringTable_x                                         0x140E40508
#define pinstSwitchManager_x                                       0x140E3FE80
#define pinstTarget_x                                              0x140E404B0
#define pinstTaskMember_x                                          0x140D01D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E404C0
#define pinstTradeTarget_x                                         0x140E40430
#define instTributeActive_x                                        0x140D01D79
#define pinstViewActor_x                                           0x140D8F240
#define pinstWorldData_x                                           0x140E404F8
#define pinstPlayerPath_x                                          0x140EBECC8
#define pinstTargetIndicator_x                                     0x140EC0698
#define EQObject_Top_x                                             0x140E404D8

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED4718
#define pinstCContainerMgr_x                                       0x140D8F520
#define pinstCContextMenuManager_x                                 0x140EE9170
#define pinstCInvSlotMgr_x                                         0x140D8F518
#define pinstCItemDisplayManager_x                                 0x140ED7190
#define pinstCPopupWndManager_x                                    0x140ED7A20
#define pinstCSpellDisplayMgr_x                                    0x140ED8070
#define pinstCTaskManager_x                                        0x140BCAC80
#define pinstEQSuiteTextureLoader_x                                0x140D18530
#define pinstItemIconCache_x                                       0x140ED4A78
#define pinstLootFiltersManager_x                                  0x140D8E9D8
#define pinstGFViewListener_x                                      0x140EE8948


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023FC90
#define __CastRay_x                                                0x1402380E0
#define __CastRay2_x                                               0x140237DE0
#define __compress_block_x                                         0x1405238B0
#define __ConvertItemTags_x                                        0x140238540
#define __CleanItemTags_x                                          0x140088110
#define __CreateCascadeMenuItems_x                                 0x1401869A0
#define __decompress_block_x                                       0x140569A80
#define __DoesFileExist_x                                          0x1405720C0
#define __EQGetTime_x                                              0x14056E7C0
#define __ExecuteCmd_x                                             0x14020E3E0
#define __FixHeading_x                                             0x140699FE0
#define __FlushDxKeyboard_x                                        0x140333600
#define __get_bearing_x                                            0x140241E80
#define __get_melee_range_x                                        0x140241F70
#define __GetAnimationCache_x                                      0x1403B0CE0
#define __GetGaugeValueFromEQ_x                                    0x1404E4880
#define __GetLabelFromEQ_x                                         0x1404E5E90
#define __GetXTargetType_x                                         0x14069B2C0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069A060
#define __HelpPath_x                                               0x140EBCEB8   // Why?
#define __NewUIINI_x                                               0x1404F1920   // Why?
#define __ProcessDeviceEvents_x                                    0x1402804A0
#define __ProcessGameEvents_x                                      0x1402751C0
#define __ProcessKeyboardEvents_x                                  0x140334D50
#define __ProcessMouseEvents_x                                     0x1402768A0
#define __SaveColors_x                                             0x140196990
#define __STMLToText_x                                             0x140576A00
#define __WndProc_x                                                0x140331E20
#define CMemoryMappedFile__SetFile_x                               0x1407D24A0
#define DrawNetStatus_x                                            0x1402BF9F0
#define Util__FastTime_x                                           0x14056DD50
#define __eq_delete_x                                              0x1406A2194
#define __eq_new_x                                                 0x1406A2150
#define __CopyLayout_x                                             0x1402AD9A0
#define __ThrottleFrameRate_x                                      0x140264A24
#define __ThrottleFrameRateEnd_x                                   0x140264A84

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403443F0
#define CAAWnd__Update_x                                           0x1403446F0
#define CAAWnd__UpdateSelected_x                                   0x140345730

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA510
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2E00
#define CAdvancedLootWnd__AddPlayerToList_x                        0x140826B38
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AAE00

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1A90
#define AltAdvManager__IsAbilityReady_x                            0x1401A1D10
#define AltAdvManager__GetAAById_x                                 0x1401A1360
#define AltAdvManager__CanTrainAbility_x                           0x1401A1190
#define AltAdvManager__CanSeeAbility_x                             0x1401A0E50

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0F50
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1D90
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1FE0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5EA0
#define CharacterZoneClient__CanUseItem_x                          0x1400E62D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D29B0
#define CharacterZoneClient__CastSpell_x                           0x1400D2A50
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1E00
#define CharacterZoneClient__Cur_HP_x                              0x1400E79E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7BA0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D57F0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EE050
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FCA80  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6CA0
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E57A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EFC10
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EEAE0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6E70
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C7360
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8D30
#define CharacterZoneClient__GetHPRegen_x                          0x1400EF220
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7650
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFEA0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6EF0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0C80
#define CharacterZoneClient__GetModCap_x                           0x1400F8240
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D7180
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D7390
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBEA0
#define CharacterZoneClient__HasSkill_x                            0x1400F3C70
#define CharacterZoneClient__HitBySpell_x                          0x1400D7E40
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB5E0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7D20
#define CharacterZoneClient__Max_Endurance_x                       0x1402DC6D0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F8070
#define CharacterZoneClient__Max_Mana_x                            0x1402DC8F0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F84D0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE990
#define CharacterZoneClient__SpellDuration_x                       0x1400DF690
#define CharacterZoneClient__TotalEffect_x                         0x1400E09E0
#define CharacterZoneClient__UseSkill_x                            0x1400FD9F0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403628B0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036CBE0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140368A70
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036C660

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036F2A0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140A9D000

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140392590
#define CChatWindowManager__InitContextMenu_x                      0x140392720
#define CChatWindowManager__FreeChatWindow_x                       0x140391610
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x14039A2D0
#define CChatWindowManager__CreateChatWindow_x                     0x140390F50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105F60

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039B310
#define CChatWindow__Clear_x                                       0x14039C2C0
#define CChatWindow__WndNotification_x                             0x14039D4B0
#define CChatWindow__AddHistory_x                                  0x14039BDC0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405ABB10
#define CContextMenu__RemoveMenuItem_x                             0x1405ABF00
#define CContextMenu__RemoveAllMenuItems_x                         0x1405ABED0
#define CContextMenu__CheckMenuItem_x                              0x1405ABD40
#define CContextMenu__SetMenuItem_x                                0x1405ABF20
#define CContextMenu__AddSeparator_x                               0x1405ABC80

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059DA00
#define CContextMenuManager__RemoveMenu_x                          0x14059DFE0
#define CContextMenuManager__PopupMenu_x                           0x14059DD20
#define CContextMenuManager__Flush_x                               0x14059DA80
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A8C10

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140663760
#define CChatService__GetFriendName_x                              0x140663770

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058E9A0
#define CComboWnd__Draw_x                                          0x14058EAA0
#define CComboWnd__GetCurChoice_x                                  0x14058ED80  // unused
#define CComboWnd__GetListRect_x                                   0x14058EE20
#define CComboWnd__InsertChoice_x                                  0x14058F160
#define CComboWnd__SetColors_x                                     0x14058F4F0
#define CComboWnd__SetChoice_x                                     0x14058F4B0
#define CComboWnd__GetItemCount_x                                  0x14058EE10
#define CComboWnd__GetCurChoiceText_x                              0x14058EDC0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058ED50
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058F220

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A6980
#define CContainerWnd__SetContainer_x                              0x1403FBFF0
#define CContainerWnd__vftable_x                                   0x1409B5578

// CDisplay
#define CDisplay__cameraType_x                                     0x140D8EFEC
#define CDisplay__ZoneMainUI_x                                     0x1405C5C50
#define CDisplay__PreZoneMainUI_x                                  0x1401938B0
#define CDisplay__CleanGameUI_x                                    0x140185A80
#define CDisplay__GetClickedActor_x                                0x140189C00
#define CDisplay__GetUserDefinedColor_x                            0x14018A870
#define CDisplay__InitCharSelectUI_x                               0x14018AB20
#define CDisplay__ReloadUI_x                                       0x140195BA0
#define CDisplay__RestartUI_x                                      0x1401F4A60
#define CDisplay__WriteTextHD2_x                                   0x14019CBC0
#define CDisplay__TrueDistance_x                                   0x14019C870
#define CDisplay__SetViewActor_x                                   0x1401990B0
#define CDisplay__GetFloorHeight_x                                 0x140189E60
#define CDisplay__ToggleScreenshotMode_x                           0x14019C360
#define CDisplay__RealRender_World_x                               0x140194F80

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CFE50
#define CEditWnd__DrawCaret_x                                      0x1405C19A0  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C1E60
#define CEditWnd__GetCaretPt_x                                     0x1405C20E0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C2120
#define CEditWnd__GetDisplayString_x                               0x1405C2390
#define CEditWnd__GetHorzOffset_x                                  0x1405C25D0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C2720
#define CEditWnd__GetSelStartPt_x                                  0x1405C2A00  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C2850
#define CEditWnd__PointFromPrintableChar_x                         0x1405C35B0
#define CEditWnd__ReplaceSelection_x                               0x1405C3960
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3E00
#define CEditWnd__SetEditable_x                                    0x1405C4090
#define CEditWnd__SetWindowText_x                                  0x1405C40C0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265B30
#define CEverQuest__ClickedPlayer_x                                0x14025B650
#define CEverQuest__CreateTargetIndicator_x                        0x14025BF10
#define CEverQuest__DoTellWindow_x                                 0x140105C70 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106530 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x1402674F0
#define CEverQuest__dsp_chat_x                                     0x1401056A0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402918B0
#define CEverQuest__Emote_x                                        0x140267ED0
#define CEverQuest__GetBodyTypeDesc_x                              0x140268C80
#define CEverQuest__GetClassDesc_x                                 0x140268CE0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402690B0
#define CEverQuest__GetDeityDesc_x                                 0x140269360
#define CEverQuest__GetLangDesc_x                                  0x140269790
#define CEverQuest__GetRaceDesc_x                                  0x140269B30
#define CEverQuest__InterpretCmd_x                                 0x14026B460
#define CEverQuest__LeftClickedOnPlayer_x                          0x140280510
#define CEverQuest__LMouseUp_x                                     0x14026CE50
#define CEverQuest__RightClickedOnPlayer_x                         0x14027DD30
#define CEverQuest__RMouseUp_x                                     0x140277430
#define CEverQuest__SetGameState_x                                 0x140282A50
#define CEverQuest__UPCNotificationFlush_x                         0x140288380 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026CAC0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402787E0
#define CEverQuest__ReportSuccessfulHit_x                          0x140279600

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BB070

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C10D0
#define CGuild__GetGuildName_x                                     0x1400C1110

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DD610

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A34B0
#define CHotButton__SetCheck_x                                     0x1402A3780

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4D40
#define CInvSlotMgr__MoveItem_x                                    0x1403F4F20
#define CInvSlotMgr__SelectSlot_x                                  0x1403F68C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F1F40
#define CInvSlot__SliderComplete_x                                 0x1403F3490
#define CInvSlot__GetItemBase_x                                    0x1403EDB60
#define CInvSlot__UpdateItem_x                                     0x1403F3940

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F7C50

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418E80
#define CItemDisplayWnd__UpdateStrings_x                           0x14041B7F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140415960
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404170C0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140418290

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E13B0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E30A0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051CC20

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140412090

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014E250

// CLabel
#define CLabel__UpdateText_x                                       0x140422C00

// CListWnd
#define CListWnd__CListWnd_x                                       0x140592330
#define CListWnd__dCListWnd_x                                      0x140592780
#define CListWnd__vftable_x                                        0x140A9B158
#define CListWnd__AddColumn_x                                      0x140592E20
#define CListWnd__AddColumn1_x                                     0x140592EC0
#define CListWnd__AddLine_x                                        0x140593020
#define CListWnd__AddString_x                                      0x1405935B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593B20
#define CListWnd__CalculateVSBRange_x                              0x140593E00
#define CListWnd__ClearSel_x                                       0x140593FB0
#define CListWnd__ClearAllSel_x                                    0x140593F50
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140594010
#define CListWnd__Compare_x                                        0x1405941D0
#define CListWnd__Draw_x                                           0x1405946A0
#define CListWnd__DrawColumnSeparators_x                           0x140595250
#define CListWnd__DrawHeader_x                                     0x140595310
#define CListWnd__DrawItem_x                                       0x1405959E0
#define CListWnd__DrawLine_x                                       0x140596360
#define CListWnd__DrawSeparator_x                                  0x140596820
#define CListWnd__EnableLine_x                                     0x140596C40
#define CListWnd__EnsureVisible_x                                  0x140596CA0
#define CListWnd__ExtendSel_x                                      0x140596DA0
#define CListWnd__GetColumnMinWidth_x                              0x1405970D0
#define CListWnd__GetColumnWidth_x                                 0x140597150
#define CListWnd__GetCurSel_x                                      0x140597250
#define CListWnd__GetItemData_x                                    0x1405975D0
#define CListWnd__GetItemHeight_x                                  0x140597610
#define CListWnd__GetItemRect_x                                    0x140597830
#define CListWnd__GetItemText_x                                    0x140597AD0
#define CListWnd__GetSelList_x                                     0x140597D20
#define CListWnd__GetSeparatorRect_x                               0x140597F10
#define CListWnd__InsertLine_x                                     0x140599370
#define CListWnd__RemoveLine_x                                     0x1405999E0
#define CListWnd__SetColors_x                                      0x140599DA0
#define CListWnd__SetColumnJustification_x                         0x140599DC0
#define CListWnd__SetColumnLabel_x                                 0x140599E40
#define CListWnd__SetColumnWidth_x                                 0x140599FE0
#define CListWnd__SetCurSel_x                                      0x14059A0B0
#define CListWnd__SetItemColor_x                                   0x14059A320
#define CListWnd__SetItemData_x                                    0x14059A3C0
#define CListWnd__SetItemText_x                                    0x14059A600
#define CListWnd__Sort_x                                           0x14059AA10
#define CListWnd__ToggleSel_x                                      0x14059AB80
#define CListWnd__SetColumnsSizable_x                              0x14059A030
#define CListWnd__SetItemWnd_x                                     0x14059A730
#define CListWnd__GetItemWnd_x                                     0x140597CB0
#define CListWnd__SetItemIcon_x                                    0x14059A400
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405938F0
#define CListWnd__SetVScrollPos_x                                  0x14059A970

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140435EB0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A02038
#define MapViewMap__Clear_x                                        0x140437A30
#define MapViewMap__SetZoom_x                                      0x14043E080
#define MapViewMap__HandleLButtonDown_x                            0x14043ABC0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045F740  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140465CD0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140466470
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469C80
#define CMerchantWnd__SelectBuySellSlot_x                          0x140468FD0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046DF10

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x1406401D0
#define CPacketScrambler__hton_x                                   0x1406401C0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BB270
#define CSidlManagerBase__FindAnimation1_x                         0x1405BB1B0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BB8A0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BB650
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405BA5A0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405BA530
#define CSidlManagerBase__CreateXWnd_x                             0x1405B9B70

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D43B0
#define CSidlManager__CreateXWnd_x                                 0x1404D4570

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057FD70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057FE90
#define CSidlScreenWnd__ConvertToRes_x                             0x1405CA3C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x140580010
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057F4B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057F580
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057F790
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1405806F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140580920
#define CSidlScreenWnd__GetChildItem_x                             0x140580AC0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140580D10
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058AF40 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140581080
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405813C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581C70
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140582670
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EE87E8
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582D00
#define CSidlScreenWnd__StoreIniVis_x                              0x1405834F0
#define CSidlScreenWnd__vftable_x                                  0x140A9A3C8
#define CSidlScreenWnd__WndNotification_x                          0x140583540

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031CB90 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031D030 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031CF60
#define CSkillMgr__IsActivatedSkill_x                              0x14031D3E0
#define CSkillMgr__IsCombatSkill_x                                 0x14031D420
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031D350
#define CSkillMgr__GetSkillLastUsed_x                              0x14031CFB0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x1404F0010
#define CSliderWnd__SetValue_x                                     0x14059BCD0
#define CSliderWnd__SetNumTicks_x                                  0x14059BB50

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404DAA00

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1405A0460
#define CStmlWnd__CalculateHSBRange_x                              0x14058A8F0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A1380
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1DF0
#define CStmlWnd__ForceParseNow_x                                  0x1405A1E90
#define CStmlWnd__GetVisibleText_x                                 0x1405A2560
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A42A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A42E0
#define CStmlWnd__SetSTMLText_x                                    0x1405AB2B0
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AB460
#define CStmlWnd__UpdateHistoryString_x                            0x1405AB7F0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059C090
#define CTabWnd__DrawCurrentPage_x                                 0x14059C130
#define CTabWnd__DrawTab_x                                         0x14059C500
#define CTabWnd__GetTabRect_x                                      0x14059CB70
#define CTabWnd__InsertPage_x                                      0x14059CE40
#define CTabWnd__RemovePage_x                                      0x14059D0D0
#define CTabWnd__SetPage_x                                         0x14059D230
#define CTabWnd__UpdatePage_x                                      0x14059D530

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C4500
#define CPageWnd__SetTabText_x                                     0x1405C4570

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA800  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BAC10


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B2C30
#define CTextureFont__DrawWrappedText1_x                           0x1405B2B40
#define CTextureFont__DrawWrappedText2_x                           0x1405B2D60
#define CTextureFont__GetTextExtent_x                              0x1405B3110
#define CTextureFont__GetHeight_x                                  0x1405B30D0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C8B20

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057F090

// CXStr
#define CXStr__gFreeLists_x                                        0x140D17EA0
#define CXStr__gCXStrAccess_x                                      0x140EE85E8

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585F40
#define CXWnd__ClrFocus_x                                          0x140586230
#define CXWnd__Destroy_x                                           0x1405863B0
#define CXWnd__DoAllDrawing_x                                      0x1405864B0
#define CXWnd__DrawColoredRect_x                                   0x140586C80
#define CXWnd__DrawTooltip_x                                       0x140588310
#define CXWnd__DrawTooltipAtPoint_x                                0x1405883C0
#define CXWnd__GetChildItem_x                                      0x140588CD0
#define CXWnd__GetChildWndAt_x                                     0x140588D90
#define CXWnd__GetClientRect_x                                     0x140589050
#define CXWnd__GetClientClipRect_x                                 0x140588F00
#define CXWnd__GetRelativeRect_x                                   0x14058AA30
#define CXWnd__GetScreenClipRect_x                                 0x14058AB40
#define CXWnd__GetScreenRect_x                                     0x14058ACC0
#define CXWnd__GetTooltipRect_x                                    0x14058AE40
#define CXWnd__IsActive_x                                          0x14058B400
#define CXWnd__IsDescendantOf_x                                    0x14058B430
#define CXWnd__IsReallyVisible_x                                   0x14058B4A0
#define CXWnd__IsType_x                                            0x14058B4E0
#define CXWnd__Minimize_x                                          0x14058B5D0
#define CXWnd__ProcessTransition_x                                 0x14058C4A0
#define CXWnd__Resize_x                                            0x14058C5C0
#define CXWnd__Right_x                                             0x14058C660
#define CXWnd__SetFocus_x                                          0x14058CA20
#define CXWnd__SetFont_x                                           0x14058CA70
#define CXWnd__SetKeyTooltip_x                                     0x14058CB70
#define CXWnd__SetMouseOver_x                                      0x14058CCB0
#define CXWnd__SetParent_x                                         0x14058CD30
#define CXWnd__StartFade_x                                         0x14058D180
#define CXWnd__vftable_x                                           0x140A9A9B8
#define CXWnd__CXWnd_x                                             0x140584B00
#define CXWnd__dCXWnd_x                                            0x140585430

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CF5D0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AD0A0
#define CXWndManager__DrawCursor_x                                 0x1405AD380
#define CXWndManager__DrawWindows_x                                0x1405AD5E0
#define CXWndManager__GetKeyboardFlags_x                           0x1405ADCB0
#define CXWndManager__HandleKeyboardMsg_x                          0x1405ADCF0
#define CXWndManager__RemoveWnd_x                                  0x1405B1300

// CDBStr
#define CDBStr__GetString_x                                        0x140183C30

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140649460

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CEAD0
#define CCharacterListWnd__EnterWorld_x                            0x1400CD7D0
#define CCharacterListWnd__Quit_x                                  0x1400CEAB0
#define CCharacterListWnd__UpdateList_x                            0x1400CF940

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140617A10
#define ItemBase__CreateItemTagString_x                            0x140618490
#define ItemBase__GetImageNum_x                                    0x14061AA80
#define ItemBase__GetItemValue_x                                   0x14061C510
#define ItemBase__IsEmpty_x                                        0x14061E110
#define ItemBase__IsKeyRingItem_x                                  0x14061E850
#define ItemBase__ValueSellMerchant_x                              0x140622A10
#define ItemClient__CanDrop_x                                      0x1402A5A80
#define ItemClient__CanGoInBag_x                                   0x1402A5BB0
#define ItemClient__CreateItemClient_x                             0x1402A5E90
#define ItemClient__dItemClient_x                                  0x1402A58F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3230
#define EQ_LoadingS__Array_x                                       0x140D04220

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062F240
#define PcBase__GetCombatAbility_x                                 0x14062F930
#define PcBase__GetCombatAbilityTimer_x                            0x14062F9D0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140630120
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140630C10
#define PcClient__AlertInventoryChanged_x                          0x1402C7FD0
#define PcClient__GetConLevel_x                                    0x1402C85F0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CAD90
#define PcClient__HasLoreItem_x                                    0x1402CBD50
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9670
#define PcZoneClient__RemoveMyAffect_x                             0x1402DD810

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212AF0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212CA0  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140212E00  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212D40  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024CC20  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E430

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068CD40
#define PlayerBase__CanSee1_x                                      0x14068CE10
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068D2D0
#define PlayerBase__HasProperty_x                                  0x14068D4A0
#define PlayerBase__IsTargetable_x                                 0x14068D560
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402EA2F0
#define PlayerClient__GetPcClient_x                                0x1402ECB20
#define PlayerClient__PlayerClient_x                               0x1402E35C0
#define PlayerClient__SetNameSpriteState_x                         0x1402EFF70
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0F30
#define PlayerZoneClient__ChangeHeight_x                           0x1402FF3E0
#define PlayerZoneClient__DoAttack_x                               0x1403000F0
#define PlayerZoneClient__GetLevel_x                               0x140303820
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F9B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140192130

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8D00  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8DB0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8EB0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F87D0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068C900

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AAEA0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AAAA0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AAB10
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AAE30  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AAFC0
#define KeypressHandler__HandleKeyUp_x                             0x1402AB0E0
#define KeypressHandler__SaveKeymapping_x                          0x1402AAD40  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140646FA0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140641900

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D2310  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7690
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D9D70
#define PcZoneClient__RemovePetEffect_x                            0x1402DD910
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA960
#define PcZoneClient__CanEquipItem_x                               0x1402D59E0
#define PcZoneClient__GetItemByID_x                                0x1402D8730
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DD690
#define PcZoneClient__BandolierSwap_x                              0x1402D49C0

// Doors
#define EQSwitch__UseSwitch_x                                      0x1402544E0

// IconCache
#define IconCache__GetIcon_x                                       0x1403B0D10

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A5730
#define CContainerMgr__CloseContainer_x                            0x1403A5070
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A5AB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404990B0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029DC70

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140429EE0
#define CLootWnd__RequestLootSlot_x                                0x14042AF00

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2550
#define EQ_Spell__SpellAffects_x                                   0x1401D3810
#define EQ_Spell__SpellAffectBase_x                                0x1401D3770
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7560
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7510
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3430
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2FF0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D28C0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BFD10

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F50E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F47F0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F4000

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FC7A0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AE00
#define CTaskManager__GetTaskStatus_x                              0x14017AF10
#define CTaskManager__GetElementDescription_x                      0x14017AA90

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D08C0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF700
#define EqSoundManager__SoundAssistPlay_x                          0x1403221E0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140322520  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058DF50
#define CTextureAnimation__SetCurCell_x                            0x14058E260

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029BED0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140660EA0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140660F20
#define CharacterBase__IsExpansionFlag_x                           0x1401F42B0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403834C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140383E30
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140385380

// messages
#define msg_spell_worn_off_x                                       0x140209420
#define msg_new_text_x                                             0x140204CB0
#define __msgTokenTextParam_x                                      0x1401FC840
#define msgTokenText_x                                             0x1401FC760

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323BA0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323AC0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069B6A0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140423350

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403AA420
#define CCursorAttachment__IsOkToActivate_x                        0x1403AD390
#define CCursorAttachment__RemoveAttachment_x                      0x1403AD640
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6FC0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C71B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C71C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401494D0
#define CFindItemWnd__Update_x                                     0x140149E70
#define CFindItemWnd__PickupSelectedItem_x                         0x140143980

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152D50
#define LootFiltersManager__GetItemFilterData_x                    0x140153860
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140154100
#define LootFiltersManager__SetItemLootFilter_x                    0x1401543B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047BED0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031C750
#define CResolutionHandler__UpdateResolution_x                     0x14069FF80

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A1A50

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140665220  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140665110  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C6790
#define CGroupWnd__UpdateDisplay_x                                 0x1403C6370

// ItemBase
#define ItemBase__IsLore_x                                         0x14061E920
#define ItemBase__IsLoreEquipped_x                                 0x14061E9B0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BDC10

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024CD80
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024CD10
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024CD50

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316D50

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123860
#define FactionManagerClient__HandleFactionMessage_x               0x140123C10
#define FactionManagerClient__GetFactionStanding_x                 0x140123030
#define FactionManagerClient__GetMaxFaction_x                      0x140123030
#define FactionManagerClient__GetMinFaction_x                      0x140122EE0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC9B0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012F000

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABB90
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAF10
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB9B0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB930  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328C10

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316D50

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212E90

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583B30

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084FC0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14033A340

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C990

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x140649FE0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AAE9E0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529CD0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
