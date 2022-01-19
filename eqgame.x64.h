/*
 * MacroQuest: The extension platform for EverQuest
 * Copyright (C) 2002-2021 MacroQuest Authors
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

// Sizes

// PlayerClient 0x1F80 @ 0x14032E692

//
// eqgame.exe offsets
//

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Jan 11 2022"
#define __ExpectedVersionTime                                     "17:45:44"
#define __ActualVersionDate_x                                      0x1408BE138
#define __ActualVersionTime_x                                      0x1408BE128
#define __ActualVersionBuild_x                                     0x1408AAF08

// Memory Protection
#define __MemChecker0_x                                            0x1402E6310
#define __MemChecker1_x                                            0x1405D3DE0
#define __MemChecker2_x                                            0x14037AA50 // unused (original was inlined)
#define __MemChecker3_x                                            0x14037A980
#define __MemChecker4_x                                            0x1402B1030
#define __EncryptPad0_x                                            0x140C55F60

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140BAFAD0
#define __ScreenX_x                                                0x140BAFAE0 // flip flopped?
#define __ScreenY_x                                                0x140BAFAE4
#define __ScreenXMax_x                                             0x140BAFAE8
#define __ScreenYMax_x                                             0x140BAFAEC
#define __InChatMode_x                                             0x140BAFB2C
#define __RunWalkState_x                                           0x140BAFB30
#define DI8__Mouse_Copy_x                                          0x140BAFB44
#define __MouseLook_x                                              0x140BAFBC2
#define __NetStatusToggle_x                                        0x140BAFBC5
#define __pulAutoRun_x                                             0x140BAFBE0
#define __Clicks_x                                                 0x140BAFC04
#define __RMouseHeldTime_x                                         0x140BAFC64
#define __LMouseHeldTime_x                                         0x140BAFC68
#define instEQZoneInfo_x                                           0x140BAFDB8
#define __ZoneType_x                                               0x140BAFFC0 // zoneHdr.outdoor
#define __ShiftKeyDown_x                                           0x140BB01C8
#define __AutoSkillArray_x                                         0x140BB0668
#define __RangeAttackReady_x                                       0x140BB0A14
#define __AttackOnAssist_x                                         0x140BB0B8C
#define __ShowNames_x                                              0x140BB0BEC
#define __PCNames_x                                                0x140BB0D3C
#define __UseTellWindows_x                                         0x140BB0ED4
#define __pulForward_x                                             0x140BB0F30
#define __pulBackward_x                                            0x140BB0F34
#define __pulTurnRight_x                                           0x140BB0F38
#define __pulTurnLeft_x                                            0x140BB0F3C
#define __pulStrafeLeft_x                                          0x140BB0F40
#define __pulStrafeRight_x                                         0x140BB0F44
#define __LastTell_x                                               0x140BB2430
#define __ServerName_x                                             0x140BE6088
#define __DoAbilityList_x                                          0x140BE60C8
#define __SocialChangedList_x                                      0x140BE6110
#define __Socials_x                                                0x140BE6188
#define __Inviter_x                                                0x140C4F9D0
#define __Attack_x                                                 0x140C4FA53
#define __Autofire_x                                               0x140C4FA54

// Misc Globals
#define __do_loot_x                                                0x14024AC20
#define __gfMaxZoomCameraDistance_x                                0x1408B3A50
#define __gfMaxCameraDistance_x                                    0x1408EF738
#define __CurrentSocial_x                                          0x140A52A74
#define __BindList_x                                               0x140BA0AF0
#define g_eqCommandStates_x                                        0x140BA2090
#define __CommandList_x                                            0x140BA2C20
#define __ScreenMode_x                                             0x140D31E2C
#define __gWorld_x                                                 0x140DE6160
#define __gpbCommandEvent_x                                        0x140DE616C
#define __ServerHost_x                                             0x140DE6358
#define __Guilds_x                                                 0x140DEA3E0
#define __MouseEventTime_x                                         0x140DEC2BC
#define DI8__Mouse_Check_x                                         0x140DF28B0
#define __heqmain_x                                                0x140DF4D58
#define DI8__Mouse_x                                               0x140DF4D70
#define __HWnd_x                                                   0x140DF4D78
#define __Mouse_x                                                  0x140DF1DA8
#define DI8__Main_x                                                0x140DF1E40
#define DI8__Keyboard_x                                            0x140DF1E48
#define __LoginName_x                                              0x140DF252C
#define __CurrentMapLabel_x                                        0x140E0B078
#define __TargetAggroHolder_x                                      0x140E0DC08
#define __GroupAggro_x                                             0x140E0DC48
#define __SubscriptionType_x                                       0x140E45AC0
#define Teleport_Table_Size_x                                      0x140DE61F4
#define Teleport_Table_x                                           0x140DE3CB0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140DE6750
#define pinstActiveBanker_x                                        0x140DE6690
#define pinstActiveCorpse_x                                        0x140DE6680
#define pinstActiveGMaster_x                                       0x140DE6688
#define pinstActiveMerchant_x                                      0x140DE6678
#define pinstAltAdvManager_x                                       0x140D32D30
#define pinstCEverQuest_x                                          0x140DF1DA0
#define pinstCamActor_x                                            0x140D31E18
#define pinstCDBStr_x                                              0x140D31860
#define pinstCDisplay_x                                            0x140DE3CA8
#define pinstControlledPlayer_x                                    0x140DE6720
#define pinstCResolutionHandler_x                                  0x14147FBC0
#define pinstCSidlManager_x                                        0x140E1F2D0
#define pinstCXWndManager_x                                        0x140E1F2C0
#define instDynamicZone_x                                          0x140DEA2A0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140DEA2EE
#define instExpeditionName_x                                       0x140DEA32E
#define pinstDZMember_x                                            0x140DEA3B8
#define pinstDZTimerInfo_x                                         0x140DEA3C0
#define pinstEqLogin_x                                             0x140DF1E70
#define instTribute_x                                              0x140B947B0
#define pinstEQSoundManager_x                                      0x140D336C0
#define pinstEQSpellStrings_x                                      0x140D15068
#define pinstSGraphicsEngine_x                                     0x14147F958
#define pinstLocalPC_x                                             0x140DE3C88
#define pinstLocalPlayer_x                                         0x140DE6670
#define pinstMercenaryData_x                                       0x140DEDF08
#define pinstMercenaryStats_x                                      0x140E0DCD4
#define pinstModelPlayer_x                                         0x140DE66A0
#define pinstRenderInterface_x                                     0x14147F970
#define pinstSkillMgr_x                                            0x140DF0AC8
#define pinstSpawnManager_x                                        0x140DEEB60
#define pinstSpellManager_x                                        0x140DF0D60
#define pinstSpellSets_x                                           0x140C48678
#define pinstStringTable_x                                         0x140DE3CA0
#define pinstSwitchManager_x                                       0x140DE3B00
#define pinstTarget_x                                              0x140DE6718
#define pinstTaskMember_x                                          0x140B942F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140DE6728
#define pinstTradeTarget_x                                         0x140DE6698
#define instTributeActive_x                                        0x140B947D9
#define pinstViewActor_x                                           0x140D31E10
#define pinstWorldData_x                                           0x140DE3C98
#define pinstPlayerPath_x                                          0x140DEEC00
#define pinstTargetIndicator_x                                     0x140DF0FE0
#define EQObject_Top_x                                             0x140DE3C70

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140E06930
#define pinstCContainerMgr_x                                       0x140D31ED0
#define pinstCContextMenuManager_x                                 0x140E1F270
#define pinstCInvSlotMgr_x                                         0x140D31EC0
#define pinstCItemDisplayManager_x                                 0x140E0A530
#define pinstCPopupWndManager_x                                    0x140E0BC60
#define pinstCSpellDisplayMgr_x                                    0x140E0CEA0
#define pinstCTaskManager_x                                        0x140A5D740
#define pinstEQSuiteTextureLoader_x                                0x140CA53E0
#define pinstItemIconCache_x                                       0x140E072D0
#define pinstLootFiltersManager_x                                  0x140D30CA0

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x140245650
#define __CastRay2_x                                               0x1402456C0
#define __ConvertItemTags_x                                        0x140269380
#define __CleanItemTags_x                                          0x1400A7400
#define __CreateCascadeMenuItems_x                                 0x1401C8830
#define __DoesFileExist_x                                          0x1405D73D0
#define __EQGetTime_x                                              0x1405D3950
#define __ExecuteCmd_x                                             0x14023D520
#define __FixHeading_x                                             0x1406F99F0
#define __FlushDxKeyboard_x                                        0x140375320
#define __get_bearing_x                                            0x1402451C0
#define __get_melee_range_x                                        0x1402459C0
#define __GetAnimationCache_x                                      0x1403F4380
#define __GetGaugeValueFromEQ_x                                    0x14052AC60
#define __GetLabelFromEQ_x                                         0x14052C7A0
#define __GetXTargetType_x                                         0x1406FC410   // ExtendedTargetList::ExtendedTargetRoleName
#define __HandleMouseWheel_x                                       0x14037AB20
#define __HeadingDiff_x                                            0x1406F9A50
#define __HelpPath_x                                               0x140DEBF70   // Why?
#define __NewUIINI_x                                               0x14052A880   // Why?
#define __ProcessGameEvents_x                                      0x1402C0580
#define __ProcessKeyboardEvents_x                                  0x140377680
#define __ProcessMouseEvents_x                                     0x1402BFBF0
#define __SaveColors_x                                             0x1401C86A0
#define __STMLToText_x                                             0x14061A1E0
#define __WndProc_x                                                0x1403783A0
#define CMemoryMappedFile__SetFile_x                               0x14083B940
#define DrawNetStatus_x                                            0x1402F6660
#define Util__FastTime_x                                           0x1405D34C0
#define __eq_delete_x                                              0x140704190
#define __eq_new_x                                                 0x140704794
#define __CopyLayout_x                                             0x1402E0BD0
#define __ThrottleFrameRate_x                                      0x1402A3E14
#define __ThrottleFrameRateEnd_x                                   0x1402A3E78

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140388950
#define CAAWnd__Update_x                                           0x140387A90
#define CAAWnd__UpdateSelected_x                                   0x140384A40

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400C7430
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400CA120
#define CAdvancedLootWnd__AddPlayerToList_x                        0x14089A4E8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400C26E0

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401D32D0
#define AltAdvManager__IsAbilityReady_x                            0x1401D1A90
#define AltAdvManager__GetAAById_x                                 0x1401D1EF0
#define AltAdvManager__CanTrainAbility_x                           0x1401D1F60
#define AltAdvManager__CanSeeAbility_x                             0x1401D2400

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x140107A70
#define CharacterZoneClient__CalcAffectChange_x                    0x140105EF0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x1401061F0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400F8F80
#define CharacterZoneClient__CharacterZoneClient_x                 0x14010B7E0
#define CharacterZoneClient__FindAffectSlot_x                      0x140104510 // check
#define CharacterZoneClient__GetCurrentMod_x                       0x14012B4A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x14011C960
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x140105C50
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EC370 // check
#define CharacterZoneClient__GetFocusReuseMod_x                    0x1400EF400
#define CharacterZoneClient__GetItemCountInInventory_x             0x14011CA10
#define CharacterZoneClient__GetItemCountWorn_x                    0x14011C6C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x140105CE0
#define CharacterZoneClient__GetMaxEffects_x                       0x1400FDC70
#define CharacterZoneClient__GetModCap_x                           0x14012B390
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x140105B70
#define CharacterZoneClient__HasSkill_x                            0x1401191A0
#define CharacterZoneClient__IsStackBlocked_x                      0x140101B70
#define CharacterZoneClient__MakeMeVisible_x                       0x14011AE90
#define CharacterZoneClient__NotifyPCAffectChange_x                0x1401262C0
#define CharacterZoneClient__RemovePCAffectex_x                    0x140103AE0

// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403A75F0

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403B3540

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403ADAC0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403AB550

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403B84B0

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1408FE9F8

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403DF9A0
#define CChatWindowManager__InitContextMenu_x                      0x1403D7080
#define CChatWindowManager__FreeChatWindow_x                       0x1403DE020
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403DF5A0
#define CChatWindowManager__CreateChatWindow_x                     0x1403DE740

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14012FCA0

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403E05A0
#define CChatWindow__Clear_x                                       0x1403E1BC0
#define CChatWindow__WndNotification_x                             0x1403E22D0
#define CChatWindow__AddHistory_x                                  0x1403E1380

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14062F450
#define CContextMenu__RemoveMenuItem_x                             0x14062F890
#define CContextMenu__RemoveAllMenuItems_x                         0x14062F8B0
#define CContextMenu__CheckMenuItem_x                              0x14062F960
#define CContextMenu__SetMenuItem_x                                0x14062F7B0
#define CContextMenu__AddSeparator_x                               0x14062F780

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14062FFE0
#define CContextMenuManager__RemoveMenu_x                          0x140630070
#define CContextMenuManager__PopupMenu_x                           0x140630190
#define CContextMenuManager__Flush_x                               0x14062FF50
#define CContextMenuManager__GetMenu_x                             0x0            // inlined
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403EDAD0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406CCED0
#define CChatService__GetFriendName_x                              0x1406CCEE0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14062BAF0
#define CComboWnd__Draw_x                                          0x14062AE00
#define CComboWnd__GetCurChoice_x                                  0x14062B860
#define CComboWnd__GetListRect_x                                   0x14062B3A0
#define CComboWnd__GetTextRect_x                                   0x14062BB90
#define CComboWnd__InsertChoice_x                                  0x14062B550
#define CComboWnd__SetColors_x                                     0x14062B510
#define CComboWnd__SetChoice_x                                     0x14062B840
#define CComboWnd__GetItemCount_x                                  0x14062B880
#define CComboWnd__GetCurChoiceText_x                              0x14062B8D0
#define CComboWnd__GetChoiceText_x                                 0x14062B8A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14062B610

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403EADE0
#define CContainerWnd__SetContainer_x                              0x1403EC7B0
#define CContainerWnd__vftable_x                                   0x1408CBFD0

// CDisplay
#define CDisplay__cameraType_x                                     0x140D31B84
#define CDisplay__ZoneMainUI_x                                     0x1401C2B90
#define CDisplay__PreZoneMainUI_x                                  0x1401C2BB0
#define CDisplay__CleanGameUI_x                                    0x1401C8420
#define CDisplay__GetClickedActor_x                                0x1401B9940
#define CDisplay__GetUserDefinedColor_x                            0x1401B0560
#define CDisplay__InitCharSelectUI_x                               0x1401C24C0
#define CDisplay__ReloadUI_x                                       0x1401C1DA0
#define CDisplay__WriteTextHD2_x                                   0x1401B57A0
#define CDisplay__TrueDistance_x                                   0x1401BD950
#define CDisplay__SetViewActor_x                                   0x1401B9180
#define CDisplay__GetFloorHeight_x                                 0x1401B5AD0
#define CDisplay__SetRenderWindow_x                                0x1401B41F0
#define CDisplay__ToggleScreenshotMode_x                           0x1401B8B30
#define CDisplay__RealRender_World_x                               0x1401B3340

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140655FA0
#define CEditWnd__DrawCaret_x                                      0x140633D40
#define CEditWnd__EnsureCaretVisible_x                             0x1406363F0
#define CEditWnd__GetCaretPt_x                                     0x140635050
#define CEditWnd__GetCharIndexPt_x                                 0x140634DE0
#define CEditWnd__GetDisplayString_x                               0x140634C90
#define CEditWnd__GetHorzOffset_x                                  0x140633210
#define CEditWnd__GetLineForPrintableChar_x                        0x1406362A0
#define CEditWnd__GetSelStartPt_x                                  0x1406350A0
#define CEditWnd__GetSTMLSafeText_x                                0x140634AD0
#define CEditWnd__PointFromPrintableChar_x                         0x140635EB0
#define CEditWnd__ReplaceSelection_x                               0x1406359F0
#define CEditWnd__SelectableCharFromPoint_x                        0x140636000
#define CEditWnd__SetEditable_x                                    0x140635190
#define CEditWnd__SetWindowText_x                                  0x1406347B0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402A6E80
#define CEverQuest__ClickedPlayer_x                                0x140296170
#define CEverQuest__CreateTargetIndicator_x                        0x1402BCBF0
#define CEverQuest__DeleteTargetIndicator_x                        0x1402BCC80
#define CEverQuest__DoTellWindow_x                                 0x0
#define CEverQuest__OutputTextToLog_x                              0x0
#define CEverQuest__DropHeldItemOnGround_x                         0x0
#define CEverQuest__dsp_chat_x                                     0x0
#define CEverQuest__trimName_x                                     0x0
#define CEverQuest__Emote_x                                        0x0
#define CEverQuest__EnterZone_x                                    0x0
#define CEverQuest__GetBodyTypeDesc_x                              0x0
#define CEverQuest__GetClassDesc_x                                 0x0
#define CEverQuest__GetClassThreeLetterCode_x                      0x0
#define CEverQuest__GetDeityDesc_x                                 0x0
#define CEverQuest__GetLangDesc_x                                  0x0
#define CEverQuest__GetRaceDesc_x                                  0x0
#define CEverQuest__InterpretCmd_x                                 0x0
#define CEverQuest__LeftClickedOnPlayer_x                          0x0
#define CEverQuest__LMouseUp_x                                     0x0
#define CEverQuest__RightClickedOnPlayer_x                         0x0
#define CEverQuest__RMouseUp_x                                     0x0
#define CEverQuest__SetGameState_x                                 0x0
#define CEverQuest__UPCNotificationFlush_x                         0x0
#define CEverQuest__IssuePetCommand_x                              0x0
#define CEverQuest__ReportSuccessfulHeal_x                         0x0
#define CEverQuest__ReportSuccessfulHit_x                          0x0

// CGaugeWnd
// not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x0
#define CGaugeWnd__CalcLinesFillRect_x                             0x0
#define CGaugeWnd__Draw_x                                          0x0

// CGuild
#define CGuild__FindMemberByName_x                                 0x0
#define CGuild__GetGuildName_x                                     0x0
#define CGuild__GetGuildIndex_x                                    0x0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x0
#define CHotButton__SetCheck_x                                     0x0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x0
#define CInvSlotMgr__MoveItem_x                                    0x0
#define CInvSlotMgr__SelectSlot_x                                  0x0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x0
#define CInvSlot__SliderComplete_x                                 0x0
#define CInvSlot__GetItemBase_x                                    0x0
#define CInvSlot__UpdateItem_x                                     0x0

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x0
#define CInvSlotWnd__HandleLButtonUp_x                             0x0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x0
#define CItemDisplayWnd__UpdateStrings_x                           0x0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x0
#define CItemDisplayWnd__RequestConvertItem_x                      0x0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x0
#define CSpellDisplayWnd__UpdateStrings_x                          0x0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x0

// CLabel
#define CLabel__UpdateText_x                                       0x0

// CListWnd
#define CListWnd__CListWnd_x                                       0x0
#define CListWnd__dCListWnd_x                                      0x0
#define CListWnd__vftable_x                                        0x0
#define CListWnd__AddColumn_x                                      0x0
#define CListWnd__AddColumn1_x                                     0x0
#define CListWnd__AddLine_x                                        0x0
#define CListWnd__AddString_x                                      0x0
#define CListWnd__CalculateFirstVisibleLine_x                      0x0
#define CListWnd__CalculateVSBRange_x                              0x0
#define CListWnd__ClearSel_x                                       0x0
#define CListWnd__ClearAllSel_x                                    0x0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x0
#define CListWnd__Compare_x                                        0x0
#define CListWnd__Draw_x                                           0x0
#define CListWnd__DrawColumnSeparators_x                           0x0
#define CListWnd__DrawHeader_x                                     0x0
#define CListWnd__DrawItem_x                                       0x0
#define CListWnd__DrawLine_x                                       0x0
#define CListWnd__DrawSeparator_x                                  0x0
#define CListWnd__EnableLine_x                                     0x0
#define CListWnd__EnsureVisible_x                                  0x0
#define CListWnd__ExtendSel_x                                      0x0
#define CListWnd__GetColumnTooltip_x                               0x0
#define CListWnd__GetColumnMinWidth_x                              0x0
#define CListWnd__GetColumnWidth_x                                 0x0
#define CListWnd__GetCurSel_x                                      0x0
#define CListWnd__GetItemAtPoint_x                                 0x0
#define CListWnd__GetItemAtPoint1_x                                0x0
#define CListWnd__GetItemData_x                                    0x0
#define CListWnd__GetItemHeight_x                                  0x0
#define CListWnd__GetItemIcon_x                                    0x0
#define CListWnd__GetItemRect_x                                    0x0
#define CListWnd__GetItemText_x                                    0x0
#define CListWnd__GetSelList_x                                     0x0
#define CListWnd__GetSeparatorRect_x                               0x0
#define CListWnd__InsertLine_x                                     0x0
#define CListWnd__RemoveLine_x                                     0x0
#define CListWnd__SetColors_x                                      0x0
#define CListWnd__SetColumnJustification_x                         0x0
#define CListWnd__SetColumnLabel_x                                 0x0
#define CListWnd__SetColumnWidth_x                                 0x0
#define CListWnd__SetCurSel_x                                      0x0
#define CListWnd__SetItemColor_x                                   0x0
#define CListWnd__SetItemData_x                                    0x0
#define CListWnd__SetItemText_x                                    0x0
#define CListWnd__ShiftColumnSeparator_x                           0x0
#define CListWnd__Sort_x                                           0x0
#define CListWnd__ToggleSel_x                                      0x0
#define CListWnd__SetColumnsSizable_x                              0x0
#define CListWnd__SetItemWnd_x                                     0x0
#define CListWnd__GetItemWnd_x                                     0x0
#define CListWnd__SetItemIcon_x                                    0x0
#define CListWnd__CalculateCustomWindowPositions_x                 0x0
#define CListWnd__SetVScrollPos_x                                  0x0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x0

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x0
#define MapViewMap__dMapViewMap_x                                  0x0
#define MapViewMap__vftable_x                                      0x0
#define MapViewMap__Clear_x                                        0x0
#define MapViewMap__SetZoom_x                                      0x0
#define MapViewMap__HandleLButtonDown_x                            0x0
#define MapViewMap__GetWorldCoordinates_x                          0x0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x0
#define CMerchantWnd__SelectRecoverySlot_x                         0x0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x0
#define CMerchantWnd__SelectBuySellSlot_x                          0x0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x0
#define CPacketScrambler__hton_x                                   0x0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x0
#define CSidlManagerBase__CreatePageWnd_x                          0x0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x0
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x0
#define CSidlManagerBase__FindAnimation1_x                         0x0
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x0
#define CSidlManagerBase__CreateLabel_x                            0x0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x0
#define CSidlManagerBase__CreateXWnd_x                             0x0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x0
#define CSidlManager__CreateXWnd_x                                 0x0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x0
#define CSidlScreenWnd__ConvertToRes_x                             0x0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x0
#define CSidlScreenWnd__EnableIniStorage_x                         0x0
#define CSidlScreenWnd__GetChildItem_x                             0x0
#define CSidlScreenWnd__GetSidlPiece_x                             0x0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x0
#define CSidlScreenWnd__Init1_x                                    0x0
#define CSidlScreenWnd__LoadIniInfo_x                              0x0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x0
#define CSidlScreenWnd__m_layoutCopy_x                             0x0
#define CSidlScreenWnd__StoreIniInfo_x                             0x0
#define CSidlScreenWnd__StoreIniVis_x                              0x0
#define CSidlScreenWnd__vftable_x                                  0x0
#define CSidlScreenWnd__WndNotification_x                          0x0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x0
#define CSkillMgr__GetSkillCap_x                                   0x0
#define CSkillMgr__GetNameToken_x                                  0x0
#define CSkillMgr__IsActivatedSkill_x                              0x0
#define CSkillMgr__IsCombatSkill_x                                 0x0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x0
#define CSliderWnd__SetValue_x                                     0x0
#define CSliderWnd__SetNumTicks_x                                  0x0

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x0
#define CStmlWnd__CalculateHSBRange_x                              0x0
#define CStmlWnd__CalculateVSBRange_x                              0x0
#define CStmlWnd__CanBreakAtCharacter_x                            0x0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x0
#define CStmlWnd__ForceParseNow_x                                  0x0
#define CStmlWnd__GetNextTagPiece_x                                0x0
#define CStmlWnd__GetVisibleText_x                                 0x0
#define CStmlWnd__InitializeWindowVariables_x                      0x0
#define CStmlWnd__MakeStmlColorTag_x                               0x0
#define CStmlWnd__MakeWndNotificationTag_x                         0x0
#define CStmlWnd__SetSTMLText_x                                    0x0
#define CStmlWnd__StripFirstSTMLLines_x                            0x0
#define CStmlWnd__UpdateHistoryString_x                            0x0

// CTabWnd
#define CTabWnd__Draw_x                                            0x0
#define CTabWnd__DrawCurrentPage_x                                 0x0
#define CTabWnd__DrawTab_x                                         0x0
#define CTabWnd__GetCurrentPage_x                                  0x0
#define CTabWnd__GetCurrentTabIndex_x                              0x0
#define CTabWnd__GetPageFromTabIndex_x                             0x0
#define CTabWnd__GetPageInnerRect_x                                0x0
#define CTabWnd__GetTabInnerRect_x                                 0x0
#define CTabWnd__GetTabRect_x                                      0x0
#define CTabWnd__InsertPage_x                                      0x0
#define CTabWnd__RemovePage_x                                      0x0
#define CTabWnd__SetPage_x                                         0x0
#define CTabWnd__SetPageRect_x                                     0x0
#define CTabWnd__UpdatePage_x                                      0x0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x0
#define CPageWnd__SetTabText_x                                     0x0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x0
#define CTextureFont__DrawWrappedText1_x                           0x0
#define CTextureFont__DrawWrappedText2_x                           0x0
#define CTextureFont__GetTextExtent_x                              0x0

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x0

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x0

// CXStr
#define CXStr__gFreeLists_x                                        0x0
#define CXStr__gCXStrAccess_x                                      0x0

// CTileLayoutWnd
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x0

// CXWnd
#define CXWnd__BringToTop_x                                        0x0
#define CXWnd__ClrFocus_x                                          0x0
#define CXWnd__Destroy_x                                           0x0
#define CXWnd__DoAllDrawing_x                                      0x0
#define CXWnd__DrawChildren_x                                      0x0
#define CXWnd__DrawColoredRect_x                                   0x0
#define CXWnd__DrawTooltip_x                                       0x0
#define CXWnd__DrawTooltipAtPoint_x                                0x0
#define CXWnd__GetBorderFrame_x                                    0x0
#define CXWnd__GetChildItem_x                                      0x0
#define CXWnd__GetChildWndAt_x                                     0x0
#define CXWnd__GetClientClipRect_x                                 0x0
#define CXWnd__GetRelativeRect_x                                   0x0
#define CXWnd__GetScreenClipRect_x                                 0x0
#define CXWnd__GetScreenRect_x                                     0x0
#define CXWnd__GetTooltipRect_x                                    0x0
#define CXWnd__GetWindowTextA_x                                    0x0
#define CXWnd__IsActive_x                                          0x0
#define CXWnd__IsDescendantOf_x                                    0x0
#define CXWnd__IsReallyVisible_x                                   0x0
#define CXWnd__IsType_x                                            0x0
#define CXWnd__Minimize_x                                          0x0
#define CXWnd__ProcessTransition_x                                 0x0
#define CXWnd__Refade_x                                            0x0
#define CXWnd__Resize_x                                            0x0
#define CXWnd__Right_x                                             0x0
#define CXWnd__SetFocus_x                                          0x0
#define CXWnd__SetFont_x                                           0x0
#define CXWnd__SetKeyTooltip_x                                     0x0
#define CXWnd__SetMouseOver_x                                      0x0
#define CXWnd__SetParent_x                                         0x0
#define CXWnd__StartFade_x                                         0x0
#define CXWnd__vftable_x                                           0x0
#define CXWnd__CXWnd_x                                             0x0
#define CXWnd__dCXWnd_x                                            0x0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x0
#define CXWndManager__DrawWindows_x                                0x0
#define CXWndManager__GetKeyboardFlags_x                           0x0
#define CXWndManager__HandleKeyboardMsg_x                          0x0
#define CXWndManager__RemoveWnd_x                                  0x0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x0

// CDBStr
#define CDBStr__GetString_x                                        0x0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x0
#define CharacterZoneClient__CastSpell_x                           0x0
#define CharacterZoneClient__Cur_HP_x                              0x0
#define CharacterZoneClient__Cur_Mana_x                            0x0
#define CharacterZoneClient__GetAdjustedSkill_x                    0x0
#define CharacterZoneClient__GetBaseSkill_x                        0x0
#define CharacterZoneClient__GetCastingTimeModifier_x              0x0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x0
#define CharacterZoneClient__GetHPRegen_x                          0x0
#define CharacterZoneClient__GetManaRegen_x                        0x0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x0
#define CharacterZoneClient__Max_Endurance_x                       0x0
#define CharacterZoneClient__Max_HP_x                              0x0
#define CharacterZoneClient__Max_Mana_x                            0x0
#define CharacterZoneClient__SpellDuration_x                       0x0
#define CharacterZoneClient__TotalEffect_x                         0x0
#define CharacterZoneClient__UseSkill_x                            0x0

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x0

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x0
#define CCharacterListWnd__EnterWorld_x                            0x0
#define CCharacterListWnd__Quit_x                                  0x0
#define CCharacterListWnd__UpdateList_x                            0x0

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x0
#define ItemBase__CreateItemTagString_x                            0x0
#define ItemBase__GetImageNum_x                                    0x0
#define ItemBase__GetItemValue_x                                   0x0
#define ItemBase__IsEmpty_x                                        0x0
#define ItemBase__IsKeyRingItem_x                                  0x0
#define ItemBase__ValueSellMerchant_x                              0x0
#define ItemClient__CanDrop_x                                      0x0
#define ItemClient__CanGoInBag_x                                   0x0
#define ItemClient__CreateItemClient_x                             0x0
#define ItemClient__dItemClient_x                                  0x0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x0
#define EQ_LoadingS__Array_x                                       0x0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x0
#define PcBase__GetCombatAbility_x                                 0x0
#define PcBase__GetCombatAbilityTimer_x                            0x0
#define PcBase__GetItemContainedRealEstateIds_x                    0x0
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x0
#define PcClient__AlertInventoryChanged_x                          0x0
#define PcClient__GetConLevel_x                                    0x0
#define PcClient__HasLoreItem_x                                    0x0
#define PcZoneClient__GetItemRecastTimer_x                         0x0
#define PcZoneClient__RemoveMyAffect_x                             0x0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x0
#define EQItemList__add_object_x                                   0x0
#define EQItemList__add_item_x                                     0x0
#define EQItemList__delete_item_x                                  0x0
#define EQItemList__FreeItemList_x                                 0x0

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x0
#define PlayerBase__CanSee1_x                                      0x0
#define PlayerBase__GetVisibilityLineSegment_x                     0x0
#define PlayerBase__HasProperty_j_x                                0x0
#define PlayerBase__IsTargetable_x                                 0x0
#define PlayerClient__ChangeBoneStringSprite_x                     0x0
#define PlayerClient__dPlayerClient_x                              0x0
#define PlayerClient__GetPcClient_x                                0x0
#define PlayerClient__PlayerClient_x                               0x0
#define PlayerClient__SetNameSpriteState_x                         0x0
#define PlayerClient__SetNameSpriteTint_x                          0x0
#define PlayerZoneClient__ChangeHeight_x                           0x0
#define PlayerZoneClient__DoAttack_x                               0x0
#define PlayerZoneClient__GetLevel_x                               0x0
#define PlayerZoneClient__IsValidTeleport_x                        0x0
#define PlayerZoneClient__LegalPlayerRace_x                        0x0

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x0
#define PlayerManagerClient__GetSpawnByName_x                      0x0
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x0
#define KeypressHandler__ClearCommandStateArray_x                  0x0
#define KeypressHandler__HandleKeyDown_x                           0x0
#define KeypressHandler__HandleKeyUp_x                             0x0
#define KeypressHandler__SaveKeymapping_x                          0x0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x0

// StringTable
#define StringTable__getString_x                                   0x0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x0
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x0
#define PcZoneClient__GetPcSkillLimit_x                            0x0
#define PcZoneClient__RemovePetEffect_x                            0x0
#define PcZoneClient__HasAlternateAbility_x                        0x0
#define PcZoneClient__CanEquipItem_x                               0x0
#define PcZoneClient__GetItemByID_x                                0x0
#define PcZoneClient__RemoveBuffEffect_x                           0x0
#define PcZoneClient__BandolierSwap_x                              0x0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x0

// Doors
#define EQSwitch__UseSwitch_x                                      0x0

// IconCache
#define IconCache__GetIcon_x                                       0x0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x0
#define CContainerMgr__CloseContainer_x                            0x0
#define CContainerMgr__OpenExperimentContainer_x                   0x0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x0

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x0
#define CLootWnd__RequestLootSlot_x                                0x0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x0
#define EQ_Spell__SpellAffects_x                                   0x0
#define EQ_Spell__SpellAffectBase_x                                0x0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x0
#define EQ_Spell__IsSPAStacking_x                                  0x0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x0
#define __IsResEffectSpell_x                                       0x0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x0
#define CTargetWnd__WndNotification_x                              0x0
#define CTargetWnd__RefreshTargetBuffs_x                           0x0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x0

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x0
#define CTaskWnd__ConfirmAbandonTask_x                             0x0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x0
#define CTaskManager__HandleMessage_x                              0x0
#define CTaskManager__GetTaskStatus_x                              0x0
#define CTaskManager__GetElementDescription_x                      0x0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x0
#define EqSoundManager__PlayScriptMp3_x                            0x0
#define EqSoundManager__SoundAssistPlay_x                          0x0
#define EqSoundManager__WaveInstancePlay_x                         0x0

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x0
#define CTextureAnimation__SetCurCell_x                            0x0

// CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x0
#define CAltAbilityData__GetMercMaxRank_x                          0x0

// CTargetRing
#define CTargetRing__Cast_x                                        0x0

// CharacterBase
#define CharacterBase__CreateItemGlobalIndex_x                     0x0
#define CharacterBase__GetItemByGlobalIndex_x                      0x0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x0
#define CharacterBase__GetMemorizedSpell_x                         0x0
#define CharacterBase__IsExpansionFlag_x                           0x0

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x0

// messages
#define msg_spell_worn_off_x                                       0x0
#define msg_new_text_x                                             0x0
#define __msgTokenTextParam_x                                      0x0
#define msgTokenText_x                                             0x0

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x0
#define SpellManager__GetSpellByGroupAndRank_x                     0x0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x0
#define CCursorAttachment__AttachToCursor1_x                       0x0
#define CCursorAttachment__Deactivate_x                            0x0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x0
#define CEQSuiteTextureLoader__GetTexture_x                        0x0

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x0
#define CFindItemWnd__Update_x                                     0x0
#define CFindItemWnd__PickupSelectedItem_x                         0x0

// Camera
#define EverQuest__Cameras_x                                       0x0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x0
#define LootFiltersManager__GetItemFilterData_x                    0x0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x0
#define LootFiltersManager__SetItemLootFilter_x                    0x0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x0
#define CResolutionHandler__GetWindowedStyle_x                     0x0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x0
#define CDistillerInfo__Instance_x                                 0x0

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x0
#define CGroupWnd__UpdateDisplay_x                                 0x0

// ItemBase
#define ItemBase__IsLore_x                                         0x0
#define ItemBase__IsLoreEquipped_x                                 0x0

#define MultipleItemMoveManager__ProcessMove_x                     0x0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x0
#define EQPlacedItemManager__GetItemByGuid_x                       0x0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x0
#define FactionManagerClient__HandleFactionMessage_x               0x0
#define FactionManagerClient__GetFactionStanding_x                 0x0
#define FactionManagerClient__GetMaxFaction_x                      0x0
#define FactionManagerClient__GetMinFaction_x                      0x0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x0

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x0

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x0

// CTargetManager
#define CTargetManager__Get_x                                      0x0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x0

// CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x0

// EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0x0

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x0

// AchievementManager
#define AchievementManager__Instance_x                             0x0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
