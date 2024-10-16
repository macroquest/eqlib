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

#define __ClientDate                                               20241008u
#define __ExpectedVersionDate                                     "Oct  8 2024"
#define __ExpectedVersionTime                                     "10:17:25"
#define __ActualVersionDate_x                                      0x140946CC0
#define __ActualVersionTime_x                                      0x140946CB0
#define __ActualVersionBuild_x                                     0x1408DD640

// Memory Protection
#define __MemChecker0_x                                            0x1402B0EF0
#define __MemChecker1_x                                            0x14056D810
#define __MemChecker4_x                                            0x14027F7F0
#define __EncryptPad0_x                                            0x140D13E50

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140E4CAA0
#define instEQZoneInfo_x                                           0x140E4CC94 // EverQuestinfo.zoneHdr

// Misc Globals
#define __do_loot_x                                                0x140216570
#define __gfMaxZoomCameraDistance_x                                0x1408DE8B8
#define __gfMaxCameraDistance_x                                    0x140A83458
#define __CurrentSocial_x                                          0x140BCF940 // CActionsWnd::StopSocial
#define __BindList_x                                               0x140D0B720
#define g_eqCommandStates_x                                        0x140D0C790
#define __CommandList_x                                            0x140D0C9D0
#define __ScreenMode_x                                             0x140D9434C
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
#define __ChatFilterDefs_x                                         0x140A1E570
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
#define __allowslashcommand_x                                      0x14023F5D0
#define __CastRay_x                                                0x140237A10
#define __CastRay2_x                                               0x140237710
#define __compress_block_x                                         0x140522EB0
#define __ConvertItemTags_x                                        0x140237E70
#define __CleanItemTags_x                                          0x1400880E0
#define __CreateCascadeMenuItems_x                                 0x140186900
#define __decompress_block_x                                       0x140569080
#define __DoesFileExist_x                                          0x1405716C0
#define __EQGetTime_x                                              0x14056DDC0
#define __ExecuteCmd_x                                             0x14020DE80
#define __FixHeading_x                                             0x14069B8C0
#define __FlushDxKeyboard_x                                        0x140332AC0
#define __get_bearing_x                                            0x1402417C0
#define __get_melee_range_x                                        0x1402418B0
#define __GetAnimationCache_x                                      0x1403AFEE0
#define __GetGaugeValueFromEQ_x                                    0x1404E3D70
#define __GetLabelFromEQ_x                                         0x1404E5380
#define __GetXTargetType_x                                         0x14069CBA0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HeadingDiff_x                                            0x14069B940
#define __HelpPath_x                                               0x140EC1ED8   // Why?
#define __NewUIINI_x                                               0x1404F0E20   // Why?
#define __ProcessDeviceEvents_x                                    0x14027FE00
#define __ProcessGameEvents_x                                      0x140274B30
#define __ProcessKeyboardEvents_x                                  0x140334210
#define __ProcessMouseEvents_x                                     0x140276200
#define __SaveColors_x                                             0x140196900
#define __STMLToText_x                                             0x140576010
#define __WndProc_x                                                0x1403312F0
#define CMemoryMappedFile__SetFile_x                               0x1407D77F0
#define DrawNetStatus_x                                            0x1402BF3A0
#define Util__FastTime_x                                           0x14056D350
#define __eq_delete_x                                              0x1406A3864
#define __eq_new_x                                                 0x1406A3820
#define __CopyLayout_x                                             0x1402AD310
#define __ThrottleFrameRate_x                                      0x140264354
#define __ThrottleFrameRateEnd_x                                   0x1402643B4

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x1403438D0
#define CAAWnd__Update_x                                           0x140343BD0
#define CAAWnd__UpdateSelected_x                                   0x140344C10

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400AA4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400A2DC0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14082BB68
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400AADC0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401A1A30
#define AltAdvManager__IsAbilityReady_x                            0x1401A1CB0
#define AltAdvManager__GetAAById_x                                 0x1401A1300
#define AltAdvManager__CanTrainAbility_x                           0x1401A1110
#define AltAdvManager__CanSeeAbility_x                             0x1401A0DD0

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x1400D0CB0
#define CharacterZoneClient__CalcAffectChange_x                    0x1400D1AF0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1400D1D40
#define CharacterZoneClient__CanMedOnHorse_x                       0x1400E5BE0
#define CharacterZoneClient__CanUseItem_x                          0x1400E6010
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400D2710
#define CharacterZoneClient__CastSpell_x                           0x1400D27B0
#define CharacterZoneClient__CharacterZoneClient_x                 0x1400E1B40
#define CharacterZoneClient__Cur_HP_x                              0x1400E76E0
#define CharacterZoneClient__Cur_Mana_x                            0x1400E78A0
#define CharacterZoneClient__FindAffectSlot_x                      0x1400D5550
#define CharacterZoneClient__GetAdjustedSkill_x                    0x1400EDD70
#define CharacterZoneClient__GetBaseSkill_x                        0x1400FC7A0  // CharacterZoneClient::Skill (inlineable)
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1400D6A00
#define CharacterZoneClient__GetCurrentMod_x                       0x1400E54E0
#define CharacterZoneClient__GetCursorItemCount_x                  0x1400EF930
#define CharacterZoneClient__GetEnduranceRegen_x                   0x1400EE800
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x1400D6BD0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400C70C0
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400C8A90
#define CharacterZoneClient__GetHPRegen_x                          0x1400EEF40
#define CharacterZoneClient__GetItemCountInInventory_x             0x1400E7350
#define CharacterZoneClient__GetItemCountWorn_x                    0x1400EFBC0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x1400D6C50
#define CharacterZoneClient__GetManaRegen_x                        0x1400F09A0
#define CharacterZoneClient__GetModCap_x                           0x1400F7F60
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1400D6EE0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1400D70F0
#define CharacterZoneClient__GetPctModAndMin_x                     0x1400CBC00
#define CharacterZoneClient__HasSkill_x                            0x1400F3990
#define CharacterZoneClient__HitBySpell_x                          0x1400D7BA0
#define CharacterZoneClient__IsStackBlocked_x                      0x1400DB340
#define CharacterZoneClient__MakeMeVisible_x                       0x1400F7A40
#define CharacterZoneClient__Max_Endurance_x                       0x1402DBA70  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1400F7D90
#define CharacterZoneClient__Max_Mana_x                            0x1402DBC90  // PcZoneclient::Max_Mana
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1400F81F0
#define CharacterZoneClient__RemovePCAffectex_x                    0x1400DE6D0
#define CharacterZoneClient__SpellDuration_x                       0x1400DF3D0
#define CharacterZoneClient__TotalEffect_x                         0x1400E0720
#define CharacterZoneClient__UseSkill_x                            0x1400FD710


// CBankWnd
#define CBankWnd__WndNotification_x                                0x140361DD0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x14036C130

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x140367FC0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x14036BBB0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x14036E7F0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x140AA21E0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x140391720
#define CChatWindowManager__InitContextMenu_x                      0x1403918B0
#define CChatWindowManager__FreeChatWindow_x                       0x1403907A0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x140399490
#define CChatWindowManager__CreateChatWindow_x                     0x1403900E0

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140105C70

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x14039A4D0
#define CChatWindow__Clear_x                                       0x14039B480
#define CChatWindow__WndNotification_x                             0x14039C670
#define CChatWindow__AddHistory_x                                  0x14039AF80

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x1405AB0D0
#define CContextMenu__RemoveMenuItem_x                             0x1405AB4C0
#define CContextMenu__RemoveAllMenuItems_x                         0x1405AB490
#define CContextMenu__CheckMenuItem_x                              0x1405AB300
#define CContextMenu__SetMenuItem_x                                0x1405AB4E0
#define CContextMenu__AddSeparator_x                               0x1405AB240

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14059CFA0
#define CContextMenuManager__RemoveMenu_x                          0x14059D570
#define CContextMenuManager__PopupMenu_x                           0x14059D2B0
#define CContextMenuManager__Flush_x                               0x14059D020
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403A7E00

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x140664680
#define CChatService__GetFriendName_x                              0x140664690

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14058DF00
#define CComboWnd__Draw_x                                          0x14058E000
#define CComboWnd__GetCurChoice_x                                  0x14058E2D0  // unused
#define CComboWnd__GetListRect_x                                   0x14058E370
#define CComboWnd__InsertChoice_x                                  0x14058E6B0
#define CComboWnd__SetColors_x                                     0x14058EA40
#define CComboWnd__SetChoice_x                                     0x14058EA00
#define CComboWnd__GetItemCount_x                                  0x14058E360
#define CComboWnd__GetCurChoiceText_x                              0x14058E310  // unused
#define CComboWnd__GetChoiceText_x                                 0x14058E2A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14058E770

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403A5B80
#define CContainerWnd__SetContainer_x                              0x1403FB370
#define CContainerWnd__vftable_x                                   0x1409BA6D8

// CDisplay
#define CDisplay__cameraType_x                                     0x140D940EC
#define CDisplay__ZoneMainUI_x                                     0x1405C5190
#define CDisplay__PreZoneMainUI_x                                  0x140193830
#define CDisplay__CleanGameUI_x                                    0x1401859C0
#define CDisplay__GetClickedActor_x                                0x140189B70
#define CDisplay__GetUserDefinedColor_x                            0x14018A7E0
#define CDisplay__InitCharSelectUI_x                               0x14018AA90
#define CDisplay__ReloadUI_x                                       0x140195B20
#define CDisplay__RestartUI_x                                      0x1401F44B0
#define CDisplay__WriteTextHD2_x                                   0x14019CB30
#define CDisplay__TrueDistance_x                                   0x14019C7E0
#define CDisplay__SetViewActor_x                                   0x140199020
#define CDisplay__GetFloorHeight_x                                 0x140189DD0
#define CDisplay__ToggleScreenshotMode_x                           0x14019C2D0
#define CDisplay__RealRender_World_x                               0x140194F00

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1405CF3C0
#define CEditWnd__DrawCaret_x                                      0x1405C0E70  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x1405C1330
#define CEditWnd__GetCaretPt_x                                     0x1405C15B0  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x1405C15F0
#define CEditWnd__GetDisplayString_x                               0x1405C1860
#define CEditWnd__GetHorzOffset_x                                  0x1405C1AA0
#define CEditWnd__GetLineForPrintableChar_x                        0x1405C1BF0
#define CEditWnd__GetSelStartPt_x                                  0x1405C1ED0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x1405C1D20
#define CEditWnd__PointFromPrintableChar_x                         0x1405C2A80
#define CEditWnd__ReplaceSelection_x                               0x1405C2E30
#define CEditWnd__SelectableCharFromPoint_x                        0x1405C32D0
#define CEditWnd__SetEditable_x                                    0x1405C3560
#define CEditWnd__SetWindowText_x                                  0x1405C3590

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x140265460
#define CEverQuest__ClickedPlayer_x                                0x14025AF70
#define CEverQuest__CreateTargetIndicator_x                        0x14025B830
#define CEverQuest__DoTellWindow_x                                 0x140105980 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140106240 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140266E20
#define CEverQuest__dsp_chat_x                                     0x1401053B0 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x140291210
#define CEverQuest__Emote_x                                        0x140267800
#define CEverQuest__GetBodyTypeDesc_x                              0x1402685B0
#define CEverQuest__GetClassDesc_x                                 0x140268610
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402689E0
#define CEverQuest__GetDeityDesc_x                                 0x140268C90
#define CEverQuest__GetLangDesc_x                                  0x1402690C0
#define CEverQuest__GetRaceDesc_x                                  0x140269460
#define CEverQuest__InterpretCmd_x                                 0x14026ADA0
#define CEverQuest__LeftClickedOnPlayer_x                          0x14027FE70
#define CEverQuest__LMouseUp_x                                     0x14026C7C0
#define CEverQuest__RightClickedOnPlayer_x                         0x14027D690
#define CEverQuest__RMouseUp_x                                     0x140276D90
#define CEverQuest__SetGameState_x                                 0x1402823B0
#define CEverQuest__UPCNotificationFlush_x                         0x140287CE0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x14026C430
#define CEverQuest__ReportSuccessfulHeal_x                         0x140278140
#define CEverQuest__ReportSuccessfulHit_x                          0x140278F60

// CGaugeWnd
#define CGaugeWnd__Draw_x                                          0x1403BA2C0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400C0C40
#define CGuild__GetGuildName_x                                     0x1400C0C80

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x1403DC7C0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402A2E10
#define CHotButton__SetCheck_x                                     0x1402A30E0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1403F40F0
#define CInvSlotMgr__MoveItem_x                                    0x1403F42D0
#define CInvSlotMgr__SelectSlot_x                                  0x1403F5C50

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x1403F1300
#define CInvSlot__SliderComplete_x                                 0x1403F2850
#define CInvSlot__GetItemBase_x                                    0x1403ECF10
#define CInvSlot__UpdateItem_x                                     0x1403F2D10

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1403F6FE0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140418320
#define CItemDisplayWnd__UpdateStrings_x                           0x14041AC20
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140414DF0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x1404165A0
#define CItemDisplayWnd__RequestConvertItem_x                      0x140417740

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x1404E08A0
#define CSpellDisplayWnd__UpdateStrings_x                          0x1404E2590

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x14051C220

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140411520

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x14014DF20

// CLabel
#define CLabel__UpdateText_x                                       0x140421FF0

// CListWnd
#define CListWnd__CListWnd_x                                       0x140591880
#define CListWnd__dCListWnd_x                                      0x140591CD0
#define CListWnd__vftable_x                                        0x140AA0338
#define CListWnd__AddColumn_x                                      0x140592370
#define CListWnd__AddColumn1_x                                     0x140592410
#define CListWnd__AddLine_x                                        0x140592570
#define CListWnd__AddString_x                                      0x140592B00
#define CListWnd__CalculateFirstVisibleLine_x                      0x140593070
#define CListWnd__CalculateVSBRange_x                              0x140593350
#define CListWnd__ClearSel_x                                       0x140593500
#define CListWnd__ClearAllSel_x                                    0x1405934A0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140593560
#define CListWnd__Compare_x                                        0x140593720
#define CListWnd__Draw_x                                           0x140593BF0
#define CListWnd__DrawColumnSeparators_x                           0x1405947A0
#define CListWnd__DrawHeader_x                                     0x140594860
#define CListWnd__DrawItem_x                                       0x140594F40
#define CListWnd__DrawLine_x                                       0x1405958C0
#define CListWnd__DrawSeparator_x                                  0x140595D80
#define CListWnd__EnableLine_x                                     0x1405961A0
#define CListWnd__EnsureVisible_x                                  0x140596200
#define CListWnd__ExtendSel_x                                      0x140596300
#define CListWnd__GetColumnMinWidth_x                              0x140596630
#define CListWnd__GetColumnWidth_x                                 0x1405966B0
#define CListWnd__GetCurSel_x                                      0x1405967B0
#define CListWnd__GetItemData_x                                    0x140596B30
#define CListWnd__GetItemHeight_x                                  0x140596B70
#define CListWnd__GetItemRect_x                                    0x140596D90
#define CListWnd__GetItemText_x                                    0x140597030
#define CListWnd__GetSelList_x                                     0x140597280
#define CListWnd__GetSeparatorRect_x                               0x140597470
#define CListWnd__InsertLine_x                                     0x1405988D0
#define CListWnd__RemoveLine_x                                     0x140598F40
#define CListWnd__SetColors_x                                      0x140599300
#define CListWnd__SetColumnJustification_x                         0x140599320
#define CListWnd__SetColumnLabel_x                                 0x1405993A0
#define CListWnd__SetColumnWidth_x                                 0x140599540
#define CListWnd__SetCurSel_x                                      0x140599610
#define CListWnd__SetItemColor_x                                   0x140599880
#define CListWnd__SetItemData_x                                    0x140599920
#define CListWnd__SetItemText_x                                    0x140599B60
#define CListWnd__Sort_x                                           0x140599F70
#define CListWnd__ToggleSel_x                                      0x14059A0E0
#define CListWnd__SetColumnsSizable_x                              0x140599590
#define CListWnd__SetItemWnd_x                                     0x140599C90
#define CListWnd__GetItemWnd_x                                     0x140597210
#define CListWnd__SetItemIcon_x                                    0x140599960
#define CListWnd__CalculateCustomWindowPositions_x                 0x140592E40
#define CListWnd__SetVScrollPos_x                                  0x140599ED0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x1404352E0

// MapViewMap
#define MapViewMap__vftable_x                                      0x140A07168
#define MapViewMap__Clear_x                                        0x140436E60
#define MapViewMap__SetZoom_x                                      0x14043D4B0
#define MapViewMap__HandleLButtonDown_x                            0x140439FF0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14045EB60  // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x140465100
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404658A0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404690B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404683F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14046D340

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14063FC30
#define CPacketScrambler__hton_x                                   0x14063FC20

// CSidlManagerBase
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x1405BA730
#define CSidlManagerBase__FindAnimation1_x                         0x1405BA670
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x1405BAD60
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x1405BAB10
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1405B9A70
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x1405B9A00
#define CSidlManagerBase__CreateXWnd_x                             0x1405B9040

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1404D3890
#define CSidlManager__CreateXWnd_x                                 0x1404D3A50

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14057F390
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14057F4A0
#define CSidlScreenWnd__ConvertToRes_x                             0x1405C9900 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14057F620
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14057EAC0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14057EB90
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14057EDA0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14057FD10
#define CSidlScreenWnd__EnableIniStorage_x                         0x14057FF40
#define CSidlScreenWnd__GetChildItem_x                             0x1405800E0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140580330
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14058A4C0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x1405806A0
#define CSidlScreenWnd__LoadIniInfo_x                              0x140580A10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x1405812C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140581CC0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140EED808
#define CSidlScreenWnd__StoreIniInfo_x                             0x140582340
#define CSidlScreenWnd__StoreIniVis_x                              0x140582B30
#define CSidlScreenWnd__vftable_x                                  0x140A9F5A8
#define CSidlScreenWnd__WndNotification_x                          0x140582B80

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14031BFC0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14031C460 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14031C390
#define CSkillMgr__IsActivatedSkill_x                              0x14031C810
#define CSkillMgr__IsCombatSkill_x                                 0x14031C850
#define CSkillMgr__GetSkillTimerDuration_x                         0x14031C780
#define CSkillMgr__GetSkillLastUsed_x                              0x14031C3E0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x14059AA50
#define CSliderWnd__SetValue_x                                     0x14059B260
#define CSliderWnd__SetNumTicks_x                                  0x14059B0E0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x1404D9EF0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14059F9F0
#define CStmlWnd__CalculateHSBRange_x                              0x140589EB0
#define CStmlWnd__CalculateVSBRange_x                              0x1405A0890
#define CStmlWnd__FastForwardToEndOfTag_x                          0x1405A1390
#define CStmlWnd__ForceParseNow_x                                  0x1405A1430
#define CStmlWnd__GetVisibleText_x                                 0x1405A1B00
#define CStmlWnd__MakeStmlColorTag_x                               0x1405A3860
#define CStmlWnd__MakeWndNotificationTag_x                         0x1405A38A0
#define CStmlWnd__SetSTMLText_x                                    0x1405AA870
#define CStmlWnd__StripFirstSTMLLines_x                            0x1405AAA20
#define CStmlWnd__UpdateHistoryString_x                            0x1405AADB0

// CTabWnd
#define CTabWnd__Draw_x                                            0x14059B630
#define CTabWnd__DrawCurrentPage_x                                 0x14059B6D0
#define CTabWnd__DrawTab_x                                         0x14059BAA0
#define CTabWnd__GetTabRect_x                                      0x14059C110
#define CTabWnd__InsertPage_x                                      0x14059C3E0
#define CTabWnd__RemovePage_x                                      0x14059C670
#define CTabWnd__SetPage_x                                         0x14059C7D0
#define CTabWnd__UpdatePage_x                                      0x14059CAD0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x1405C39F0
#define CPageWnd__SetTabText_x                                     0x1405C3A60

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400BA390  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400BA7A0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x1405B2140
#define CTextureFont__DrawWrappedText1_x                           0x1405B2050
#define CTextureFont__DrawWrappedText2_x                           0x1405B2270
#define CTextureFont__GetTextExtent_x                              0x1405B2620
#define CTextureFont__GetHeight_x                                  0x1405B25E0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x1405C8060

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x14057E6A0

// CXStr
#define CXStr__gFreeLists_x                                        0x140D1CEC0
#define CXStr__gCXStrAccess_x                                      0x140EED608

// CXWnd
#define CXWnd__BringToTop_x                                        0x140585580
#define CXWnd__ClrFocus_x                                          0x140585870
#define CXWnd__Destroy_x                                           0x1405859F0
#define CXWnd__DoAllDrawing_x                                      0x140585AF0
#define CXWnd__DrawColoredRect_x                                   0x1405862C0
#define CXWnd__DrawTooltip_x                                       0x140587940
#define CXWnd__DrawTooltipAtPoint_x                                0x1405879F0
#define CXWnd__GetChildItem_x                                      0x1405882F0
#define CXWnd__GetChildWndAt_x                                     0x1405883B0
#define CXWnd__GetClientRect_x                                     0x140588660
#define CXWnd__GetClientClipRect_x                                 0x140588520
#define CXWnd__GetRelativeRect_x                                   0x140589FE0
#define CXWnd__GetScreenClipRect_x                                 0x14058A0F0
#define CXWnd__GetScreenRect_x                                     0x14058A240
#define CXWnd__GetTooltipRect_x                                    0x14058A3C0
#define CXWnd__IsActive_x                                          0x14058A980
#define CXWnd__IsDescendantOf_x                                    0x14058A9B0
#define CXWnd__IsReallyVisible_x                                   0x14058AA20
#define CXWnd__IsType_x                                            0x14058AA60
#define CXWnd__Minimize_x                                          0x14058AB60
#define CXWnd__ProcessTransition_x                                 0x14058BA30
#define CXWnd__Resize_x                                            0x14058BB50
#define CXWnd__Right_x                                             0x14058BBF0
#define CXWnd__SetFocus_x                                          0x14058BFB0
#define CXWnd__SetFont_x                                           0x14058C000
#define CXWnd__SetKeyTooltip_x                                     0x14058C100
#define CXWnd__SetMouseOver_x                                      0x14058C230
#define CXWnd__SetParent_x                                         0x14058C2B0
#define CXWnd__StartFade_x                                         0x14058C6E0
#define CXWnd__vftable_x                                           0x140A9FB98
#define CXWnd__CXWnd_x                                             0x140584120
#define CXWnd__dCXWnd_x                                            0x140584A70

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x1405CEB40

// CXWndManager
#define CXWndManager__DestroyAllWindows_x                          0x1405AC680
#define CXWndManager__DrawCursor_x                                 0x1405AC960
#define CXWndManager__DrawWindows_x                                0x1405ACBC0
#define CXWndManager__GetKeyboardFlags_x                           0x1405AD290
#define CXWndManager__HandleKeyboardMsg_x                          0x1405AD2D0
#define CXWndManager__RemoveWnd_x                                  0x1405B0810

// CDBStr
#define CDBStr__GetString_x                                        0x140183B80

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x140649A30

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400CE830
#define CCharacterListWnd__EnterWorld_x                            0x1400CD530
#define CCharacterListWnd__Quit_x                                  0x1400CE810
#define CCharacterListWnd__UpdateList_x                            0x1400CF6A0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140617550
#define ItemBase__CreateItemTagString_x                            0x140617FA0
#define ItemBase__GetImageNum_x                                    0x14061A4A0
#define ItemBase__GetItemValue_x                                   0x14061BFF0
#define ItemBase__IsEmpty_x                                        0x14061DBC0
#define ItemBase__IsKeyRingItem_x                                  0x14061E2F0
#define ItemBase__ValueSellMerchant_x                              0x140622540
#define ItemClient__CanDrop_x                                      0x1402A53E0
#define ItemClient__CanGoInBag_x                                   0x1402A5510
#define ItemClient__CreateItemClient_x                             0x1402A57F0
#define ItemClient__dItemClient_x                                  0x1402A5250

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401A31D0
#define EQ_LoadingS__Array_x                                       0x140D09230

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14062EE60
#define PcBase__GetCombatAbility_x                                 0x14062F550
#define PcBase__GetCombatAbilityTimer_x                            0x14062F5F0
#define PcBase__GetItemContainedRealEstateIds_x                    0x14062FD40
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140630830
#define PcClient__AlertInventoryChanged_x                          0x1402C7980
#define PcClient__GetConLevel_x                                    0x1402C7FA0  // PcClient::ConsiderTarget
#define PcClient__GetMeleeSpellFromSkillIndex_x                    0x1402CA740
#define PcClient__HasLoreItem_x                                    0x1402CB700
#define PcZoneClient__GetItemRecastTimer_x                         0x1402D8FB0
#define PcZoneClient__RemoveMyAffect_x                             0x1402DCBB0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140212590  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140212740  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402128A0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402127E0  // EQGroundItemListManager::Clear
#define EQItemList__add_object_x                                   0x14024C560  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x14017E3B0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x14068DC30
#define PlayerBase__CanSee1_x                                      0x14068DD00
#define PlayerBase__GetVisibilityLineSegment_x                     0x14068E1C0
#define PlayerBase__HasProperty_x                                  0x14068E390
#define PlayerBase__IsTargetable_x                                 0x14068E450
#define PlayerClient__ChangeBoneStringSprite_x                     0x1402E9680
#define PlayerClient__GetPcClient_x                                0x1402EBEB0
#define PlayerClient__PlayerClient_x                               0x1402E2960
#define PlayerClient__SetNameSpriteState_x                         0x1402EF300
#define PlayerClient__SetNameSpriteTint_x                          0x1402F02C0
#define PlayerZoneClient__ChangeHeight_x                           0x1402FE740
#define PlayerZoneClient__DoAttack_x                               0x1402FF450
#define PlayerZoneClient__GetLevel_x                               0x140302B80
#define PlayerZoneClient__IsValidTeleport_x                        0x14024F2E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401920B0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x1402F8060  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x1402F8110  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x1402F8210
#define PlayerManagerClient__CreatePlayer_x                        0x1402F7B30
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x14068D7F0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402AA810
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402AA410
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402AA480
#define KeypressHandler__ClearCommandStateArray_x                  0x1402AA7A0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402AA930
#define KeypressHandler__HandleKeyUp_x                             0x1402AAA50
#define KeypressHandler__SaveKeymapping_x                          0x1402AA6B0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x140647570  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x140641360

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x1402D1CC0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x1402D6FF0
#define PcZoneClient__GetPcSkillLimit_x                            0x1402D96B0
#define PcZoneClient__RemovePetEffect_x                            0x1402DCCB0
#define PcZoneClient__HasAlternateAbility_x                        0x1402DA290
#define PcZoneClient__CanEquipItem_x                               0x1402D5330
#define PcZoneClient__GetItemByID_x                                0x1402D8080
#define PcZoneClient__RemoveBuffEffect_x                           0x1402DCA30
#define PcZoneClient__BandolierSwap_x                              0x1402D4380

// Doors
#define EQSwitch__UseSwitch_x                                      0x140253E10

// IconCache
#define IconCache__GetIcon_x                                       0x1403AFF10

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403A4930
#define CContainerMgr__CloseContainer_x                            0x1403A4270
#define CContainerMgr__OpenExperimentContainer_x                   0x1403A4CB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x140498530

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x14029D5D0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x1404292D0
#define CLootWnd__RequestLootSlot_x                                0x14042A2F0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x1401D2510
#define EQ_Spell__SpellAffects_x                                   0x1401D37D0
#define EQ_Spell__SpellAffectBase_x                                0x1401D3730
#define EQ_Spell__GetSpellAffectBySlot_x                           0x1400D72C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1400D7270
#define EQ_Spell__IsSPAStacking_x                                  0x1401D33F0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1401D2FB0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1401D2880

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400BF880

// CTargetWnd
#define CTargetWnd__WndNotification_x                              0x1404F45D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x1404F3CE0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x1404F34F0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x1404FBC20  // CTaskWnd::UpdateTimes

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x14017AD70
#define CTaskManager__GetTaskStatus_x                              0x14017AE80
#define CTaskManager__GetElementDescription_x                      0x14017AA00

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401D0880
#define EqSoundManager__PlayScriptMp3_x                            0x1401CF6C0
#define EqSoundManager__SoundAssistPlay_x                          0x140321610  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140321950  // WaveInstance::Play

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14058D490
#define CTextureAnimation__SetCurCell_x                            0x14058D7A0

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x14029B830

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x140661DC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x140661E40
#define CharacterBase__IsExpansionFlag_x                           0x1401F3D00

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x140382640
#define CCastSpellWnd__IsBardSongPlaying_x                         0x140382FB0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x140384500

// messages
#define msg_spell_worn_off_x                                       0x140208EC0
#define msg_new_text_x                                             0x140204750
#define __msgTokenTextParam_x                                      0x1401FC2B0
#define msgTokenText_x                                             0x1401FC1D0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140322FD0
#define SpellManager__GetSpellByGroupAndRank_x                     0x140322EF0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x14069CF80

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x140422740

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403A9610
#define CCursorAttachment__IsOkToActivate_x                        0x1403AC590
#define CCursorAttachment__RemoveAttachment_x                      0x1403AC840
// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1405C6500
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x1405C66F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x1405C6700

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x1401491B0
#define CFindItemWnd__Update_x                                     0x140149B50
#define CFindItemWnd__PickupSelectedItem_x                         0x140143680

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x140152A10
#define LootFiltersManager__GetItemFilterData_x                    0x140153520
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140153DC0
#define LootFiltersManager__SetItemLootFilter_x                    0x140154070

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x14047B310

// CResolutionHandler
#define CResolutionHandler__GetWindowedStyle_x                     0x14031BB80
#define CResolutionHandler__UpdateResolution_x                     0x1406A17E0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403A0C10

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x140666140  // Rename..?
#define CDistillerInfo__Instance_x                                 0x140666030  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x1403C5950
#define CGroupWnd__UpdateDisplay_x                                 0x1403C5530

// ItemBase
#define ItemBase__IsLore_x                                         0x14061E3C0
#define ItemBase__IsLoreEquipped_x                                 0x14061E450

#define MultipleItemMoveManager__ProcessMove_x                     0x1402BD5B0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14024C6C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14024C650
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14024C690

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316130

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140123580
#define FactionManagerClient__HandleFactionMessage_x               0x140123930
#define FactionManagerClient__GetFactionStanding_x                 0x140122D50
#define FactionManagerClient__GetMaxFaction_x                      0x140122D50
#define FactionManagerClient__GetMinFaction_x                      0x140122C00

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400AC970

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14012ED20

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401ABB30
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401AAEB0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401AB950  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401AB8D0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140328040

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140316130

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140212930

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x140583170

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x140084F90

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140339820

// AchievementManager
#define AchievementManager__Instance_x                             0x14008C960

// FreeToPlayClient
#define FreeToPlayClient__Instance_x                               0x14064A5B0
#define FreeToPlayClient__RestrictionInfo_x                        0x140AB3BF0

// UdpConnection
#define UdpConnection__GetStats_x                                  0x1405292D0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
