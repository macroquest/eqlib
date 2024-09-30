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

#define __ClientDate                                               20240924u
#define __ExpectedVersionDate                                     "Sep 24 2024"
#define __ExpectedVersionTime                                     "16:32:57"
#define __ActualVersionDate_x                                      0x140946C40
#define __ActualVersionTime_x                                      0x140946C30
#define __ActualVersionBuild_x                                     0x1408DD620

// Memory Protection
#define __MemChecker0_x                                            0x1402B0FC0
#define __MemChecker1_x                                            0x14056D6B0
#define __MemChecker4_x                                            0x14027F8E0
#define __EncryptPad0_x                                            0x140D13E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4CAA0
#define instEQZoneInfo_x                                           0x140E4CC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x1402164C0
#define __gfMaxZoomCameraDistance_x                                0x1408DE898
#define __gfMaxCameraDistance_x                                    0x140A833D8
#define __CurrentSocial_x                                          0x140BCF940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0B720
#define g_eqCommandStates_x                                        0x140D0C790
#define __CommandList_x                                            0x140D0C9D0
#define __ScreenMode_x                                             0x140D94354
#define __gWorld_x                                                 0x140E473D8
#define __gpbCommandEvent_x                                        0x140E473E4
#define __ServerHost_x                                             0x140E475C8
#define __Guilds_x                                                 0x140E4B660
#define __MemCheckBitmask_x                                        0x140E4CFD7
#define __MemCheckActive_x                                         0x140E4E6C5
#define __MouseEventTime_x                                         0x140EC2010
#define DI8__MouseState_x                                          0x140EC6258
#define __heqmain_x                                                0x140EC86F8
#define DI8__Mouse_x                                               0x140EC61A8
#define __HWnd_x                                                   0x140EC6230
#define __Mouse_x                                                  0x140EC6164
#define DI8__Keyboard_x                                            0x140EC6180
#define __LoginName_x                                              0x140EC8DDC
#define __CurrentMapLabel_x                                        0x140EDC5E0
#define __LabelCache_x                                             0x140EDD1B0
#define __ChatFilterDefs_x                                         0x140A1E4F0
#define Teleport_Table_Size_x                                      0x140E47470
#define Teleport_Table_x                                           0x140E44F20

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140E479F0
#define pinstActiveBanker_x                                        0x140E47900
#define pinstActiveCorpse_x                                        0x140E478F0
#define pinstActiveGMaster_x                                       0x140E478F8
#define pinstActiveMerchant_x                                      0x140E478E8
#define pinstAltAdvManager_x                                       0x140D951F8
#define pinstCEverQuest_x                                          0x140EC61A0
#define pinstCamActor_x                                            0x140D94338
#define pinstCDBStr_x                                              0x140D93FB0
#define pinstCDisplay_x                                            0x140E479D8
#define pinstControlledPlayer_x                                    0x140E47990
#define pinstCResolutionHandler_x                                  0x14154D978
#define pinstCSidlManager_x                                        0x140EEE4B0
#define pinstCXWndManager_x                                        0x140EEE4A8
#define instDynamicZone_x                                          0x140E4B520 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140E4B56E
#define instExpeditionName_x                                       0x140E4B5AE
#define pinstDZMember_x                                            0x140E4B638
#define pinstDZTimerInfo_x                                         0x140E4B640
#define pinstEqLogin_x                                             0x140EC8720
#define instTribute_x                                              0x140D06D50
#define pinstDeviceInputProxy_x                                    0x140E4CAFC
#define pinstEQSoundManager_x                                      0x140D95578
#define pinstEQSpellStrings_x                                      0x140D78B80
#define pinstSGraphicsEngine_x                                     0x14154D6F8
#define pinstLocalPC_x                                             0x140E479C0
#define pinstLocalPlayer_x                                         0x140E478E0
#define pinstCMercenaryClientManager_x                             0x140EC38F8
#define pinstModelPlayer_x                                         0x140E47910
#define pinstRenderInterface_x                                     0x14154D710
#define pinstSkillMgr_x                                            0x140EC55A0
#define pinstSpawnManager_x                                        0x140EC3CC0
#define pinstSpellManager_x                                        0x140EC5608
#define pinstStringTable_x                                         0x140E479E0
#define pinstSwitchManager_x                                       0x140E44EA0
#define pinstTarget_x                                              0x140E47988
#define pinstTaskMember_x                                          0x140D06D40 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140E47998
#define pinstTradeTarget_x                                         0x140E47908
#define instTributeActive_x                                        0x140D06D79
#define pinstViewActor_x                                           0x140D94330
#define pinstWorldData_x                                           0x140E479C8
#define pinstPlayerPath_x                                          0x140EC3CE8
#define pinstTargetIndicator_x                                     0x140EC56B8
#define EQObject_Top_x                                             0x140E479B0

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140ED9738
#define pinstCContainerMgr_x                                       0x140D93FF8
#define pinstCContextMenuManager_x                                 0x140EEE190
#define pinstCInvSlotMgr_x                                         0x140D93FF0
#define pinstCItemDisplayManager_x                                 0x140EDC1B0
#define pinstCPopupWndManager_x                                    0x140EDCA40
#define pinstCSpellDisplayMgr_x                                    0x140EDD090
#define pinstCTaskManager_x                                        0x140BCFC80
#define pinstEQSuiteTextureLoader_x                                0x140D1D550
#define pinstItemIconCache_x                                       0x140ED9A98
#define pinstLootFiltersManager_x                                  0x140D939F8
#define pinstGFViewListener_x                                      0x140EED968


////
// Section 3: Miscellaneous Offsets
////
#define __allowslashcommand_x                                      0x14023F690
#define __CastRay_x                                                0x140237AD0
#define __CastRay2_x                                               0x1402377D0
#define __compress_block_x                                         0x140522D50
#define __ConvertItemTags_x                                        0x140237F30
#define __CleanItemTags_x                                          0x1400880D0
#define __CreateCascadeMenuItems_x                                 0x1401867D0
#define __decompress_block_x                                       0x140568F20
#define __DoesFileExist_x                                          0x140571560
#define __EQGetTime_x                                              0x14056DC60
#define __ExecuteCmd_x                                             0x14020DDD0
#define __FixHeading_x                                             0x14069AE60
#define __FlushDxKeyboard_x                                        0x140332BD0
#define __get_bearing_x                                            0x140241880
#define __get_melee_range_x                                        0x140241970
#define __GetAnimationCache_x                                      0x1403AFF50
#define __GetGaugeValueFromEQ_x                                    0x1404E3D40
#define __GetLabelFromEQ_x                                         0x1404E5350
#define __GetXTargetType_x                                         0x14069C140   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069AEE0
#define __HelpPath_x                                               0x140EC1ED8   // Why?
#define __NewUIINI_x                                               0x1404F0DE0   // Why?
#define __ProcessDeviceEvents_x                                    0x14027FEF0
#define __ProcessGameEvents_x                                      0x140274C20
#define __ProcessKeyboardEvents_x                                  0x140334320
#define __ProcessMouseEvents_x                                     0x1402762F0
#define __SaveColors_x                                             0x1401967C0
#define __STMLToText_x                                             0x140575EA0
#define __WndProc_x                                                0x1403313F0
#define CMemoryMappedFile__SetFile_x                               0x1407D6E20
#define DrawNetStatus_x                                            0x1402BF450
#define Util__FastTime_x                                           0x14056D1F0
#define __eq_delete_x                                              0x1406A2E94
#define __eq_new_x                                                 0x1406A2E50
#define __CopyLayout_x                                             0x1402AD3C0
#define __ThrottleFrameRate_x                                      0x140264454
#define __ThrottleFrameRateEnd_x                                   0x1402644B4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403439C0
#define CAAWnd__Update_x                                           0x140343CC0
#define CAAWnd__UpdateSelected_x                                   0x140344D00

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2DC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082BB58
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A18D0
#define AltAdvManager__IsAbilityReady_x                            0x1401A1B50
#define AltAdvManager__GetAAById_x                                 0x1401A11A0
#define AltAdvManager__CanTrainAbility_x                           0x1401A0FD0
#define AltAdvManager__CanSeeAbility_x                             0x1401A0C90

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0B10
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1950
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1BA0
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5A40
#define CharacterZoneClient__CanUseItem_x                          0x1400E5E70
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2570
#define CharacterZoneClient__CastSpell_x                           0x1400D2610
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E19A0
#define CharacterZoneClient__Cur_HP_x                              0x1400E7580
#define CharacterZoneClient__Cur_Mana_x                            0x1400E7740
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D53B0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDC10
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC640  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6860
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E5340
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF7D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE6A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6A30
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C6F20
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C88F0
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEDE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E71F0
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFA60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6AB0
#define CharacterZoneClient__GetManaRegen_x                        0x1400F0840
#define CharacterZoneClient__GetModCap_x                           0x1400F7E00
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6D40
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D6F50
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBA60
#define CharacterZoneClient__HasSkill_x                            0x1400F3830
#define CharacterZoneClient__HitBySpell_x                          0x1400D7A00
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB1A0
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F78E0
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBAE0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7C30
#define CharacterZoneClient__Max_Mana_x                            0x1402DBD00  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F8090
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE530
#define CharacterZoneClient__SpellDuration_x                       0x1400DF230
#define CharacterZoneClient__TotalEffect_x                         0x1400E0580
#define CharacterZoneClient__UseSkill_x                            0x1400FD5B0


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361ED0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C240

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403680C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036BCC0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036E900

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA2160

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403917E0
#define CChatWindowManager__InitContextMenu_x                      0x140391970
#define CChatWindowManager__FreeChatWindow_x                       0x140390860
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140399550
#define CChatWindowManager__CreateChatWindow_x                     0x1403901A0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105B10

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039A590
#define CChatWindow__Clear_x                                       0x14039B550
#define CChatWindow__WndNotification_x                             0x14039C740
#define CChatWindow__AddHistory_x                                  0x14039B050

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AB090
#define CContextMenu__RemoveMenuItem_x                             0x1405AB480
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AB450
#define CContextMenu__CheckMenuItem_x                              0x1405AB2C0
#define CContextMenu__SetMenuItem_x                                0x1405AB4A0
#define CContextMenu__AddSeparator_x                               0x1405AB200

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059CF60
#define CContextMenuManager__RemoveMenu_x                          0x14059D530
#define CContextMenuManager__PopupMenu_x                           0x14059D270
#define CContextMenuManager__Flush_x                               0x14059CFE0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A7EA0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140663CB0
#define CChatService__GetFriendName_x                              0x140663CC0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058DE90
#define CComboWnd__Draw_x                                          0x14058DF90
#define CComboWnd__GetCurChoice_x                                  0x14058E270  // unused
#define CComboWnd__GetListRect_x                                   0x14058E310
#define CComboWnd__InsertChoice_x                                  0x14058E650
#define CComboWnd__SetColors_x                                     0x14058E9E0
#define CComboWnd__SetChoice_x                                     0x14058E9A0
#define CComboWnd__GetItemCount_x                                  0x14058E300
#define CComboWnd__GetCurChoiceText_x                              0x14058E2B0  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058E240
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058E710

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5C20
#define CContainerWnd__SetContainer_x                              0x1403FB480
#define CContainerWnd__vftable_x                                   0x1409BA658

// CDisplay
#define CDisplay__cameraType_x                                     0x140D940EC
#define CDisplay__ZoneMainUI_x                                     0x1405C5250
#define CDisplay__PreZoneMainUI_x                                  0x1401936E0
#define CDisplay__CleanGameUI_x                                    0x140185890
#define CDisplay__GetClickedActor_x                                0x140189A30
#define CDisplay__GetUserDefinedColor_x                            0x14018A6A0
#define CDisplay__InitCharSelectUI_x                               0x14018A950
#define CDisplay__ReloadUI_x                                       0x1401959D0
#define CDisplay__RestartUI_x                                      0x1401F4430
#define CDisplay__WriteTextHD2_x                                   0x14019C9F0
#define CDisplay__TrueDistance_x                                   0x14019C6A0
#define CDisplay__SetViewActor_x                                   0x140198EE0
#define CDisplay__GetFloorHeight_x                                 0x140189C90
#define CDisplay__ToggleScreenshotMode_x                           0x14019C190
#define CDisplay__RealRender_World_x                               0x140194DB0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CF450
#define CEditWnd__DrawCaret_x                                      0x1405C0F30  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C13F0
#define CEditWnd__GetCaretPt_x                                     0x1405C1670  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C16B0
#define CEditWnd__GetDisplayString_x                               0x1405C1920
#define CEditWnd__GetHorzOffset_x                                  0x1405C1B60
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1CB0
#define CEditWnd__GetSelStartPt_x                                  0x1405C1F90  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C1DE0
#define CEditWnd__PointFromPrintableChar_x                         0x1405C2B40
#define CEditWnd__ReplaceSelection_x                               0x1405C2EF0
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C3390
#define CEditWnd__SetEditable_x                                    0x1405C3620
#define CEditWnd__SetWindowText_x                                  0x1405C3650

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265560
#define CEverQuest__ClickedPlayer_x                                0x14025B050
#define CEverQuest__CreateTargetIndicator_x                        0x14025B910
#define CEverQuest__DoTellWindow_x                                 0x140105820 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x1401060E0 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266F20
#define CEverQuest__dsp_chat_x                                     0x140105250 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140291300
#define CEverQuest__Emote_x                                        0x140267900
#define CEverQuest__GetBodyTypeDesc_x                              0x1402686B0
#define CEverQuest__GetClassDesc_x                                 0x140268710
#define CEverQuest__GetClassThreeLetterCode_x                      0x140268AE0
#define CEverQuest__GetDeityDesc_x                                 0x140268D90
#define CEverQuest__GetLangDesc_x                                  0x1402691C0
#define CEverQuest__GetRaceDesc_x                                  0x140269560
#define CEverQuest__InterpretCmd_x                                 0x14026AE90
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027FF60
#define CEverQuest__LMouseUp_x                                     0x14026C8B0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D780
#define CEverQuest__RMouseUp_x                                     0x140276E80
#define CEverQuest__SetGameState_x                                 0x1402824A0
#define CEverQuest__UPCNotificationFlush_x                         0x140287DD0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026C520
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278230
#define CEverQuest__ReportSuccessfulHit_x                          0x140279050

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA330

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0CB0
#define CGuild__GetGuildName_x                                     0x1400C0CF0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DC8C0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2EF0
#define CHotButton__SetCheck_x                                     0x1402A31C0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F4200
#define CInvSlotMgr__MoveItem_x                                    0x1403F43E0
#define CInvSlotMgr__SelectSlot_x                                  0x1403F5D60

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F1410
#define CInvSlot__SliderComplete_x                                 0x1403F2960
#define CInvSlot__GetItemBase_x                                    0x1403ED040
#define CInvSlot__UpdateItem_x                                     0x1403F2E20

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F70F0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418290
#define CItemDisplayWnd__UpdateStrings_x                           0x14041ABD0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140414DC0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140416510
#define CItemDisplayWnd__RequestConvertItem_x                      0x1404176C0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E0860
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2550

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051C0C0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140411500

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DDD0

// CLabel
#define CLabel__UpdateText_x                                       0x140421FC0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140591820
#define CListWnd__dCListWnd_x                                      0x140591C70
#define CListWnd__vftable_x                                        0x140AA02B8
#define CListWnd__AddColumn_x                                      0x140592310
#define CListWnd__AddColumn1_x                                     0x1405923B0
#define CListWnd__AddLine_x                                        0x140592510
#define CListWnd__AddString_x                                      0x140592AA0
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593010
#define CListWnd__CalculateVSBRange_x                              0x1405932F0
#define CListWnd__ClearSel_x                                       0x1405934A0
#define CListWnd__ClearAllSel_x                                    0x140593440
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593500
#define CListWnd__Compare_x                                        0x1405936C0
#define CListWnd__Draw_x                                           0x140593B90
#define CListWnd__DrawColumnSeparators_x                           0x140594740
#define CListWnd__DrawHeader_x                                     0x140594800
#define CListWnd__DrawItem_x                                       0x140594EE0
#define CListWnd__DrawLine_x                                       0x140595860
#define CListWnd__DrawSeparator_x                                  0x140595D20
#define CListWnd__EnableLine_x                                     0x140596140
#define CListWnd__EnsureVisible_x                                  0x1405961A0
#define CListWnd__ExtendSel_x                                      0x1405962A0
#define CListWnd__GetColumnMinWidth_x                              0x1405965D0
#define CListWnd__GetColumnWidth_x                                 0x140596650
#define CListWnd__GetCurSel_x                                      0x140596750
#define CListWnd__GetItemData_x                                    0x140596AD0
#define CListWnd__GetItemHeight_x                                  0x140596B10
#define CListWnd__GetItemRect_x                                    0x140596D30
#define CListWnd__GetItemText_x                                    0x140596FD0
#define CListWnd__GetSelList_x                                     0x140597220
#define CListWnd__GetSeparatorRect_x                               0x140597410
#define CListWnd__InsertLine_x                                     0x140598880
#define CListWnd__RemoveLine_x                                     0x140598EF0
#define CListWnd__SetColors_x                                      0x1405992B0
#define CListWnd__SetColumnJustification_x                         0x1405992D0
#define CListWnd__SetColumnLabel_x                                 0x140599350
#define CListWnd__SetColumnWidth_x                                 0x1405994F0
#define CListWnd__SetCurSel_x                                      0x1405995C0
#define CListWnd__SetItemColor_x                                   0x140599830
#define CListWnd__SetItemData_x                                    0x1405998D0
#define CListWnd__SetItemText_x                                    0x140599B10
#define CListWnd__Sort_x                                           0x140599F20
#define CListWnd__ToggleSel_x                                      0x14059A090
#define CListWnd__SetColumnsSizable_x                              0x140599540
#define CListWnd__SetItemWnd_x                                     0x140599C40
#define CListWnd__GetItemWnd_x                                     0x1405971B0
#define CListWnd__SetItemIcon_x                                    0x140599910
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592DE0
#define CListWnd__SetVScrollPos_x                                  0x140599E80

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404352A0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A070E8
#define MapViewMap__Clear_x                                        0x140436E20
#define MapViewMap__SetZoom_x                                      0x14043D470
#define MapViewMap__HandleLButtonDown_x                            0x140439FB0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045EB30  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404650E0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x140465880
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x140469090
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404683E0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046D320

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063FBB0
#define CPacketScrambler__hton_x                                   0x14063FBA0

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BA7F0
#define CSidlManagerBase__FindAnimation1_x                         0x1405BA730
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BAE20
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BABD0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B9B30
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B9AC0
#define CSidlManagerBase__CreateXWnd_x                             0x1405B9100

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D3840
#define CSidlManager__CreateXWnd_x                                 0x1404D3A00

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F220
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F350
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C99C0 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F4D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057E950
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057EA20
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057EC30
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057FBC0
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057FDF0
#define CSidlScreenWnd__GetChildItem_x                             0x14057FF90
#define CSidlScreenWnd__GetSidlPiece_x                             0x1405801E0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058A460 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140580550
#define CSidlScreenWnd__LoadIniInfo_x                              0x1405808C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140581170
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581B70
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EED808
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582200
#define CSidlScreenWnd__StoreIniVis_x                              0x1405829F0
#define CSidlScreenWnd__vftable_x                                  0x140A9F528
#define CSidlScreenWnd__WndNotification_x                          0x140582A40

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031C160 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C600 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C530
#define CSkillMgr__IsActivatedSkill_x                              0x14031C9B0
#define CSkillMgr__IsCombatSkill_x                                 0x14031C9F0
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031C920
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C580

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059AA10
#define CSliderWnd__SetValue_x                                     0x14059B220
#define CSliderWnd__SetNumTicks_x                                  0x14059B0A0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D9EB0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059F9B0
#define CStmlWnd__CalculateHSBRange_x                              0x140589E10
#define CStmlWnd__CalculateVSBRange_x                              0x1405A0850
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1350
#define CStmlWnd__ForceParseNow_x                                  0x1405A13F0
#define CStmlWnd__GetVisibleText_x                                 0x1405A1AC0
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3820
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A3860
#define CStmlWnd__SetSTMLText_x                                    0x1405AA830
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AA9E0
#define CStmlWnd__UpdateHistoryString_x                            0x1405AAD70

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059B5F0
#define CTabWnd__DrawCurrentPage_x                                 0x14059B690
#define CTabWnd__DrawTab_x                                         0x14059BA60
#define CTabWnd__GetTabRect_x                                      0x14059C0D0
#define CTabWnd__InsertPage_x                                      0x14059C3A0
#define CTabWnd__RemovePage_x                                      0x14059C630
#define CTabWnd__SetPage_x                                         0x14059C790
#define CTabWnd__UpdatePage_x                                      0x14059CA90

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C3AB0
#define CPageWnd__SetTabText_x                                     0x1405C3B20

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA3F0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA800


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B21D0
#define CTextureFont__DrawWrappedText1_x                           0x1405B20E0
#define CTextureFont__DrawWrappedText2_x                           0x1405B2300
#define CTextureFont__GetTextExtent_x                              0x1405B26B0
#define CTextureFont__GetHeight_x                                  0x1405B2670

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C8120

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E530

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1CEC0
#define CXStr__gCXStrAccess_x                                      0x140EED608

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585450
#define CXWnd__ClrFocus_x                                          0x140585740
#define CXWnd__Destroy_x                                           0x1405858C0
#define CXWnd__DoAllDrawing_x                                      0x1405859C0
#define CXWnd__DrawColoredRect_x                                   0x140586190
#define CXWnd__DrawTooltip_x                                       0x140587810
#define CXWnd__DrawTooltipAtPoint_x                                0x1405878C0
#define CXWnd__GetChildItem_x                                      0x1405881D0
#define CXWnd__GetChildWndAt_x                                     0x140588290
#define CXWnd__GetClientRect_x                                     0x140588550
#define CXWnd__GetClientClipRect_x                                 0x140588400
#define CXWnd__GetRelativeRect_x                                   0x140589F50
#define CXWnd__GetScreenClipRect_x                                 0x14058A060
#define CXWnd__GetScreenRect_x                                     0x14058A1E0
#define CXWnd__GetTooltipRect_x                                    0x14058A360
#define CXWnd__IsActive_x                                          0x14058A920
#define CXWnd__IsDescendantOf_x                                    0x14058A950
#define CXWnd__IsReallyVisible_x                                   0x14058A9C0
#define CXWnd__IsType_x                                            0x14058AA00
#define CXWnd__Minimize_x                                          0x14058AB00
#define CXWnd__ProcessTransition_x                                 0x14058B9C0
#define CXWnd__Resize_x                                            0x14058BAD0
#define CXWnd__Right_x                                             0x14058BB70
#define CXWnd__SetFocus_x                                          0x14058BF20
#define CXWnd__SetFont_x                                           0x14058BF70
#define CXWnd__SetKeyTooltip_x                                     0x14058C080
#define CXWnd__SetMouseOver_x                                      0x14058C1C0
#define CXWnd__SetParent_x                                         0x14058C240
#define CXWnd__StartFade_x                                         0x14058C680
#define CXWnd__vftable_x                                           0x140A9FB18
#define CXWnd__CXWnd_x                                             0x140583FE0
#define CXWnd__dCXWnd_x                                            0x140584940

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CEBD0

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AC640
#define CXWndManager__DrawCursor_x                                 0x1405AC920
#define CXWndManager__DrawWindows_x                                0x1405ACB80
#define CXWndManager__GetKeyboardFlags_x                           0x1405AD250
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AD290
#define CXWndManager__RemoveWnd_x                                  0x1405B08A0

// CDBStr
#define CDBStr__GetString_x                                        0x140183A40

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406499B0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE690
#define CCharacterListWnd__EnterWorld_x                            0x1400CD390
#define CCharacterListWnd__Quit_x                                  0x1400CE670
#define CCharacterListWnd__UpdateList_x                            0x1400CF500

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140617630
#define ItemBase__CreateItemTagString_x                            0x140618090
#define ItemBase__GetImageNum_x                                    0x14061A640
#define ItemBase__GetItemValue_x                                   0x14061C100
#define ItemBase__IsEmpty_x                                        0x14061DD10
#define ItemBase__IsKeyRingItem_x                                  0x14061E440
#define ItemBase__ValueSellMerchant_x                              0x140622660
#define ItemClient__CanDrop_x                                      0x1402A54B0
#define ItemClient__CanGoInBag_x                                   0x1402A55E0
#define ItemClient__CreateItemClient_x                             0x1402A58C0
#define ItemClient__dItemClient_x                                  0x1402A5320

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A3070
#define EQ_LoadingS__Array_x                                       0x140D09230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062EE10
#define PcBase__GetCombatAbility_x                                 0x14062F500
#define PcBase__GetCombatAbilityTimer_x                            0x14062F5A0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062FCF0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x1406307E0
#define PcClient__AlertInventoryChanged_x                          0x1402C7A30
#define PcClient__GetConLevel_x                                    0x1402C8050  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA7F0
#define PcClient__HasLoreItem_x                                    0x1402CB7B0
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D9040
#define PcZoneClient__RemoveMyAffect_x                             0x1402DCC20

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x1402124E0  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212690  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402127F0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x140212730  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C620  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E270

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068D2A0
#define PlayerBase__CanSee1_x                                      0x14068D370
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068D830
#define PlayerBase__HasProperty_x                                  0x14068DA00
#define PlayerBase__IsTargetable_x                                 0x14068DAC0
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9700
#define PlayerClient__GetPcClient_x                                0x1402EBF30
#define PlayerClient__PlayerClient_x                               0x1402E29D0
#define PlayerClient__SetNameSpriteState_x                         0x1402EF380
#define PlayerClient__SetNameSpriteTint_x                          0x1402F0340
#define PlayerZoneClient__ChangeHeight_x                           0x1402FE8F0
#define PlayerZoneClient__DoAttack_x                               0x1402FF600
#define PlayerZoneClient__GetLevel_x                               0x140302D30
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F3B0
#define PlayerZoneClient__LegalPlayerRace_x                        0x140191F60

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8210  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F82C0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F83C0
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7CE0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068CE60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA8C0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AA4C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AA530
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA850  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA9E0
#define KeypressHandler__HandleKeyUp_x                             0x1402AAB00
#define KeypressHandler__SaveKeymapping_x                          0x1402AA760  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406474F0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406412E0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1D50  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D7080
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D9730
#define PcZoneClient__RemovePetEffect_x                            0x1402DCD20
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA300
#define PcZoneClient__CanEquipItem_x                               0x1402D53C0
#define PcZoneClient__GetItemByID_x                                0x1402D8110
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCAA0
#define PcZoneClient__BandolierSwap_x                              0x1402D4410

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253EE0

// IconCache
#define IconCache__GetIcon_x                                       0x1403AFF80

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A49D0
#define CContainerMgr__CloseContainer_x                            0x1403A4310
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4D50

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140498520

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D6C0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404292A0
#define CLootWnd__RequestLootSlot_x                                0x14042A2B0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2360
#define EQ_Spell__SpellAffects_x                                   0x1401D3620
#define EQ_Spell__SpellAffectBase_x                                0x1401D3580
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D7120
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D70D0
#define EQ_Spell__IsSPAStacking_x                                  0x1401D3240
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2E00
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D26D0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF8F0

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F4580
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F3C90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F34A0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FBBF0  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AC20
#define CTaskManager__GetTaskStatus_x                              0x14017AD30
#define CTaskManager__GetElementDescription_x                      0x14017A8B0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D06D0
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF510
#define EqSoundManager__SoundAssistPlay_x                          0x1403217B0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321AF0  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058D420
#define CTextureAnimation__SetCurCell_x                            0x14058D730

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029B920

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406613F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140661470
#define CharacterBase__IsExpansionFlag_x                           0x1401F3C80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140382700
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140383070
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403845C0

// messages
#define msg_spell_worn_off_x                                       0x140208E10
#define msg_new_text_x                                             0x1402046A0
#define __msgTokenTextParam_x                                      0x1401FC210
#define msgTokenText_x                                             0x1401FC130

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140323170
#define SpellManager__GetSpellByGroupAndRank_x                     0x140323090

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069C520

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140422710

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A96B0
#define CCursorAttachment__IsOkToActivate_x                        0x1403AC600
#define CCursorAttachment__RemoveAttachment_x                      0x1403AC8B0
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C65C0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C67B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C67C0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140149070
#define CFindItemWnd__Update_x                                     0x140149A10
#define CFindItemWnd__PickupSelectedItem_x                         0x140143540

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401528C0
#define LootFiltersManager__GetItemFilterData_x                    0x1401533D0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153C70
#define LootFiltersManager__SetItemLootFilter_x                    0x140153F20

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047B2E0

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031BD20
#define CResolutionHandler__UpdateResolution_x                     0x1406A0C90

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A0CE0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140665770  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140665660  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C5A30
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5610

// ItemBase
#define ItemBase__IsLore_x                                         0x14061E510
#define ItemBase__IsLoreEquipped_x                                 0x14061E5A0

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD660

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C780
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C710
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C750

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403162F0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123420
#define FactionManagerClient__HandleFactionMessage_x               0x1401237D0
#define FactionManagerClient__GetFactionStanding_x                 0x140122BF0
#define FactionManagerClient__GetMaxFaction_x                      0x140122BF0
#define FactionManagerClient__GetMinFaction_x                      0x140122AA0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC970

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012EBC0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401AB9E0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAD60
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB800  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB780  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x1403281E0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x1403162F0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212880

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583030

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084F80

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339910

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C950

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064A530
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB3B70

// UdpConnection
#define UdpConnection__GetStats_x                                  0x140529170

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
