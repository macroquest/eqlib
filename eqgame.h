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

//
// eqgame.exe offsets
//

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Feb 28 2022"
#define __ExpectedVersionTime                                     "16:37:54"
#define __ActualVersionDate_x                                      0x1408C50B8
#define __ActualVersionTime_x                                      0x1408C50A8
#define __ActualVersionBuild_x                                     0x1408B1EF8

// Memory Protection
#define __MemChecker0_x                                            0x1402EC590
#define __MemChecker1_x                                            0x1405DA500
#define __MemChecker2_x                                            0x140380EF0 // unused (original was inlined)
#define __MemChecker3_x                                            0x140380E20
#define __MemChecker4_x                                            0x1402B7330
#define __EncryptPad0_x                                            0x140C5DF60

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140BB7AD0
#define __ScreenX_x                                                0x140BB7AE0 // flip flopped?
#define __ScreenY_x                                                0x140BB7AE4
#define __ScreenXMax_x                                             0x140BB7AE8
#define __ScreenYMax_x                                             0x140BB7AEC
#define __InChatMode_x                                             0x140BB7B2C
#define __RunWalkState_x                                           0x140BB7B30
#define DI8__Mouse_Copy_x                                          0x140BB7B44
#define __MouseLook_x                                              0x140BB7BC2
#define __NetStatusToggle_x                                        0x140BB7BC5
#define __pulAutoRun_x                                             0x140BB7BE0
#define __Clicks_x                                                 0x140BB7BFC
#define __RMouseHeldTime_x                                         0x140BB7C64
#define __LMouseHeldTime_x                                         0x140BB7C68
#define instEQZoneInfo_x                                           0x140BB7DB8
#define __ZoneType_x                                               0x140BB7FC0 // zoneHdr.outdoor
#define __ShiftKeyDown_x                                           0x140BB81C8
#define __AutoSkillArray_x                                         0x140BB8668
#define __RangeAttackReady_x                                       0x140BB8A14
#define __AttackOnAssist_x                                         0x140BB8B8C
#define __ShowNames_x                                              0x140BB8BEC
#define __PCNames_x                                                0x140BB8D3C
#define __UseTellWindows_x                                         0x140BB8ED4
#define __pulForward_x                                             0x140BB8F30
#define __pulBackward_x                                            0x140BB8F34
#define __pulTurnRight_x                                           0x140BB8F38
#define __pulTurnLeft_x                                            0x140BB8F3C
#define __pulStrafeLeft_x                                          0x140BB8F40
#define __pulStrafeRight_x                                         0x140BB8F44
#define __LastTell_x                                               0x140BBA430
#define __ServerName_x                                             0x140BEE088
#define __DoAbilityList_x                                          0x140BEE0C8
#define __SocialChangedList_x                                      0x140BEE110
#define __Socials_x                                                0x140BEE188
#define __Inviter_x                                                0x140C579D0
#define __Attack_x                                                 0x140C57A53
#define __Autofire_x                                               0x140C57A54
#define EverQuest__Cameras_x                                       0x140BB8EE0  // part of EverQuestInfo
#define EverQuestinfo__IsItemPending_x                             0x140C57A58  // part of EverQuestInfo


// Misc Globals
#define __do_loot_x                                                0x140251050
#define __gfMaxZoomCameraDistance_x                                0x1408BA9E0
#define __gfMaxCameraDistance_x                                    0x1408F6718
#define __CurrentSocial_x                                          0x140A5AA74
#define __BindList_x                                               0x140BA8AF0
#define g_eqCommandStates_x                                        0x140BAA090
#define __CommandList_x                                            0x140BAAC20
#define __ScreenMode_x                                             0x140D39E0C
#define __gWorld_x                                                 0x140DEE160
#define __gpbCommandEvent_x                                        0x140DEE16C
#define __ServerHost_x                                             0x140DEE358
#define __Guilds_x                                                 0x140DF23E0
#define __MouseEventTime_x                                         0x140DF42BC
#define DI8__Mouse_Check_x                                         0x140DFA8B0
#define __heqmain_x                                                0x140DFCD58
#define DI8__Mouse_x                                               0x140DFCD70
#define __HWnd_x                                                   0x140DFCD78
#define __Mouse_x                                                  0x140DF9DA8
#define DI8__Main_x                                                0x140DF9E40
#define DI8__Keyboard_x                                            0x140DF9E48
#define __LoginName_x                                              0x140DFA52C
#define __CurrentMapLabel_x                                        0x140E13078
#define __LabelCache_x                                             0x140E15180
#define __SubscriptionType_x                                       0x140E4DAC0
#define Teleport_Table_Size_x                                      0x140DEE1F4
#define Teleport_Table_x                                           0x140DEBCB0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140DEE750
#define pinstActiveBanker_x                                        0x140DEE690
#define pinstActiveCorpse_x                                        0x140DEE680
#define pinstActiveGMaster_x                                       0x140DEE688
#define pinstActiveMerchant_x                                      0x140DEE678
#define pinstAltAdvManager_x                                       0x140D3AD30
#define pinstCEverQuest_x                                          0x140DF9DA0
#define pinstCamActor_x                                            0x140D39DF8
#define pinstCDBStr_x                                              0x140D39860
#define pinstCDisplay_x                                            0x140DEBCA8
#define pinstControlledPlayer_x                                    0x140DEE720
#define pinstCResolutionHandler_x                                  0x141487BC0
#define pinstCSidlManager_x                                        0x140E272D0
#define pinstCXWndManager_x                                        0x140E272C0
#define instDynamicZone_x                                          0x140DF22A0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140DF22EE
#define instExpeditionName_x                                       0x140DF232E
#define pinstDZMember_x                                            0x140DF23B8
#define pinstDZTimerInfo_x                                         0x140DF23C0
#define pinstEqLogin_x                                             0x140DF9E70
#define instTribute_x                                              0x140B9C7B0
#define pinstEQSoundManager_x                                      0x140D3B6C0
#define pinstEQSpellStrings_x                                      0x140D1D060
#define pinstSGraphicsEngine_x                                     0x141487958
#define pinstLocalPC_x                                             0x140DEBC88
#define pinstLocalPlayer_x                                         0x140DEE670
#define pinstCMercenaryClientManager_x                             0x140DF5F08
#define pinstMercenaryStats_x                                      0x140E15CD4
#define pinstModelPlayer_x                                         0x140DEE6A0
#define pinstRenderInterface_x                                     0x141487970
#define pinstSkillMgr_x                                            0x140DF8AC8
#define pinstSpawnManager_x                                        0x140DF6B60
#define pinstSpellManager_x                                        0x140DF8D60
#define pinstSpellSets_x                                           0x140C50678
#define pinstStringTable_x                                         0x140DEBCA0
#define pinstSwitchManager_x                                       0x140DEBB00
#define pinstTarget_x                                              0x140DEE718
#define pinstTaskMember_x                                          0x140B9C2F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140DEE728
#define pinstTradeTarget_x                                         0x140DEE698
#define instTributeActive_x                                        0x140B9C7D9
#define pinstViewActor_x                                           0x140D39DF0
#define pinstWorldData_x                                           0x140DEBC98
#define pinstPlayerPath_x                                          0x140DF6C00
#define pinstTargetIndicator_x                                     0x140DF8FE0
#define EQObject_Top_x                                             0x140DEBC70

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140E0E930
#define pinstCContainerMgr_x                                       0x140D39ED0
#define pinstCContextMenuManager_x                                 0x140E27270
#define pinstCInvSlotMgr_x                                         0x140D39EC0
#define pinstCItemDisplayManager_x                                 0x140E12530
#define pinstCPopupWndManager_x                                    0x140E13C60
#define pinstCSpellDisplayMgr_x                                    0x140E14EA0
#define pinstCTaskManager_x                                        0x140A65740
#define pinstEQSuiteTextureLoader_x                                0x140CAD3E0
#define pinstItemIconCache_x                                       0x140E0F2D0
#define pinstLootFiltersManager_x                                  0x140D38CA0

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x14024BA80
#define __CastRay2_x                                               0x14024BAF0
#define __ConvertItemTags_x                                        0x14026F7A0
#define __CleanItemTags_x                                          0x1400A7430
#define __CreateCascadeMenuItems_x                                 0x1401CE150
#define __DoesFileExist_x                                          0x1405DDAF0
#define __EQGetTime_x                                              0x1405DA070
#define __ExecuteCmd_x                                             0x140243890
#define __FixHeading_x                                             0x1407005A0
#define __FlushDxKeyboard_x                                        0x14037B7C0
#define __get_bearing_x                                            0x14024B5F0
#define __get_melee_range_x                                        0x14024BDF0
#define __GetAnimationCache_x                                      0x1403FA8A0
#define __GetGaugeValueFromEQ_x                                    0x1405311E0
#define __GetLabelFromEQ_x                                         0x140532D30
#define __GetXTargetType_x                                         0x140702FC0   // ExtendedTargetList::ExtendedTargetRoleName
#define __HandleMouseWheel_x                                       0x140380FC0
#define __HeadingDiff_x                                            0x140700600
#define __HelpPath_x                                               0x140DF3F70   // Why?
#define __NewUIINI_x                                               0x140530E00   // Why?
#define __ProcessGameEvents_x                                      0x1402C6880
#define __ProcessKeyboardEvents_x                                  0x14037DB20
#define __ProcessMouseEvents_x                                     0x1402C5EF0
#define __SaveColors_x                                             0x1401CDFC0
#define __STMLToText_x                                             0x1406203A0
#define __WndProc_x                                                0x14037E840
#define CMemoryMappedFile__SetFile_x                               0x1408424F0
#define DrawNetStatus_x                                            0x1402FC8F0
#define Util__FastTime_x                                           0x1405D9BE0
#define __eq_delete_x                                              0x14070AD40
#define __eq_new_x                                                 0x14070B344
#define __CopyLayout_x                                             0x1402E6E30
#define __ThrottleFrameRate_x                                      0x1402AA1D4
#define __ThrottleFrameRateEnd_x                                   0x1402AA21C

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x14038EDF0
#define CAAWnd__Update_x                                           0x14038DF30
#define CAAWnd__UpdateSelected_x                                   0x14038AED0

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400C72B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C9FA0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408A14E8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400C2560

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401D8C20
#define AltAdvManager__IsAbilityReady_x                            0x1401D73E0
#define AltAdvManager__GetAAById_x                                 0x1401D7840
#define AltAdvManager__CanTrainAbility_x                           0x1401D78B0
#define AltAdvManager__CanSeeAbility_x                             0x1401D7D50

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x14010D140
#define CharacterZoneClient__CalcAffectChange_x                    0x14010B510
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x14010B810
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400FE310
#define CharacterZoneClient__CharacterZoneClient_x                 0x140110FA0
#define CharacterZoneClient__FindAffectSlot_x                      0x140109AB0
#define CharacterZoneClient__GetCurrentMod_x                       0x140130D40
#define CharacterZoneClient__GetCursorItemCount_x                  0x140122130
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x14010B260
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EC4F0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x0
#define CharacterZoneClient__GetItemCountInInventory_x             0x1401221E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x140121E90
#define CharacterZoneClient__GetLastEffectSlot_x                   0x14010B2F0
#define CharacterZoneClient__GetMaxEffects_x                       0x1401030C0
#define CharacterZoneClient__GetModCap_x                           0x140130C30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x14010B180
#define CharacterZoneClient__HasSkill_x                            0x14011E970
#define CharacterZoneClient__IsStackBlocked_x                      0x140107010
#define CharacterZoneClient__MakeMeVisible_x                       0x140120660
#define CharacterZoneClient__NotifyPCAffectChange_x                0x14012BB40
#define CharacterZoneClient__RemovePCAffectex_x                    0x140109010

// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403ADA70

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403B99C0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403B3F40
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403B19D0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403BE940

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1409059F0

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403E5EB0
#define CChatWindowManager__InitContextMenu_x                      0x1403DD590
#define CChatWindowManager__FreeChatWindow_x                       0x1403E4530
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403E5AB0
#define CChatWindowManager__CreateChatWindow_x                     0x1403E4C50

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x140135530

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403E6AB0
#define CChatWindow__Clear_x                                       0x1403E80C0
#define CChatWindow__WndNotification_x                             0x1403E87D0
#define CChatWindow__AddHistory_x                                  0x1403E7880

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x140635840
#define CContextMenu__RemoveMenuItem_x                             0x140635C80
#define CContextMenu__RemoveAllMenuItems_x                         0x140635CA0
#define CContextMenu__CheckMenuItem_x                              0x140635D50
#define CContextMenu__SetMenuItem_x                                0x140635BA0
#define CContextMenu__AddSeparator_x                               0x140635B70

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x1406363D0
#define CContextMenuManager__RemoveMenu_x                          0x140636460
#define CContextMenuManager__PopupMenu_x                           0x140636580
#define CContextMenuManager__Flush_x                               0x140636340
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403F3FF0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406D3A90
#define CChatService__GetFriendName_x                              0x1406D3AA0

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x140631EE0
#define CComboWnd__Draw_x                                          0x140631200
#define CComboWnd__GetCurChoice_x                                  0x140631C50  // unused
#define CComboWnd__GetListRect_x                                   0x1406317A0
#define CComboWnd__GetTextRect_x                                   0x140631F80
#define CComboWnd__InsertChoice_x                                  0x140631940
#define CComboWnd__SetColors_x                                     0x140631910
#define CComboWnd__SetChoice_x                                     0x140631C30
#define CComboWnd__GetItemCount_x                                  0x140631C70
#define CComboWnd__GetCurChoiceText_x                              0x140631CC0  // unused
#define CComboWnd__GetChoiceText_x                                 0x140631C90
#define CComboWnd__InsertChoiceAtIndex_x                           0x140631A00

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403F12D0
#define CContainerWnd__SetContainer_x                              0x1403F2CC0
#define CContainerWnd__vftable_x                                   0x1408D2F70

// CDisplay
#define CDisplay__cameraType_x                                     0x140D39B84
#define CDisplay__ZoneMainUI_x                                     0x1401C84B0
#define CDisplay__PreZoneMainUI_x                                  0x1401C84D0
#define CDisplay__CleanGameUI_x                                    0x1401CDD40
#define CDisplay__GetClickedActor_x                                0x1401BF150
#define CDisplay__GetUserDefinedColor_x                            0x1401B5D70
#define CDisplay__InitCharSelectUI_x                               0x1401C7DB0
#define CDisplay__ReloadUI_x                                       0x1401C7670
#define CDisplay__WriteTextHD2_x                                   0x1401BAFB0
#define CDisplay__TrueDistance_x                                   0x1401C3220
#define CDisplay__SetViewActor_x                                   0x1401BE990
#define CDisplay__GetFloorHeight_x                                 0x1401BB2E0
#define CDisplay__SetRenderWindow_x                                0x1401B9A00
#define CDisplay__ToggleScreenshotMode_x                           0x1401BE340
#define CDisplay__RealRender_World_x                               0x1401B8B50

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x14065C3F0
#define CEditWnd__DrawCaret_x                                      0x14063A160  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x14063C810
#define CEditWnd__GetCaretPt_x                                     0x14063B470  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x14063B200
#define CEditWnd__GetDisplayString_x                               0x14063B0B0
#define CEditWnd__GetHorzOffset_x                                  0x140639620
#define CEditWnd__GetLineForPrintableChar_x                        0x14063C6C0
#define CEditWnd__GetSelStartPt_x                                  0x14063B4C0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x14063AEF0
#define CEditWnd__PointFromPrintableChar_x                         0x14063C2D0
#define CEditWnd__ReplaceSelection_x                               0x14063BE10
#define CEditWnd__SelectableCharFromPoint_x                        0x14063C420
#define CEditWnd__SetEditable_x                                    0x14063B5B0
#define CEditWnd__SetWindowText_x                                  0x14063ABD0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402AD240
#define CEverQuest__ClickedPlayer_x                                0x14029C550
#define CEverQuest__CreateTargetIndicator_x                        0x1402C2EF0
#define CEverQuest__DeleteTargetIndicator_x                        0x1402C2F80
#define CEverQuest__DoTellWindow_x                                 0x140135630 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x140135910 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x140290500
#define CEverQuest__dsp_chat_x                                     0x140135D20 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402BCDC0
#define CEverQuest__Emote_x                                        0x1402ADA69
#define CEverQuest__EnterZone_x                                    0x1402A65C0
#define CEverQuest__GetBodyTypeDesc_x                              0x1402B42C0
#define CEverQuest__GetClassDesc_x                                 0x1402B48D0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402B4E90
#define CEverQuest__GetDeityDesc_x                                 0x1402C0F70
#define CEverQuest__GetLangDesc_x                                  0x1402B5050
#define CEverQuest__GetRaceDesc_x                                  0x1402B48A0
#define CEverQuest__InterpretCmd_x                                 0x1402C1670
#define CEverQuest__LeftClickedOnPlayer_x                          0x140295090
#define CEverQuest__LMouseUp_x                                     0x140292CC0
#define CEverQuest__RightClickedOnPlayer_x                         0x140295DB0
#define CEverQuest__RMouseUp_x                                     0x140294320
#define CEverQuest__SetGameState_x                                 0x140290280
#define CEverQuest__UPCNotificationFlush_x                         0x1402BCC80 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402B6760
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402AEA70
#define CEverQuest__ReportSuccessfulHit_x                          0x1402AF7A0

// CGaugeWnd
#define CGaugeWnd__CalcFillRect_x                                  0x140406810
#define CGaugeWnd__CalcLinesFillRect_x                             0x140406870
#define CGaugeWnd__Draw_x                                          0x140405D70

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E97D0
#define CGuild__GetGuildName_x                                     0x1400E7830
#define CGuild__GetGuildIndex_x                                    0x1400E80D0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140426EF0

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402D9900
#define CHotButton__SetCheck_x                                     0x1402D9480

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x140436540
#define CInvSlotMgr__MoveItem_x                                    0x140434C70
#define CInvSlotMgr__SelectSlot_x                                  0x140436660

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x140433000
#define CInvSlot__SliderComplete_x                                 0x14042F360
#define CInvSlot__GetItemBase_x                                    0x14042EAF0
#define CInvSlot__UpdateItem_x                                     0x14042ED00

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x1404375D0
#define CInvSlotWnd__HandleLButtonUp_x                             0x1404380D0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x140454CE0
#define CItemDisplayWnd__UpdateStrings_x                           0x1404545C0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140446F70
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140447680
#define CItemDisplayWnd__RequestConvertItem_x                      0x140455BF0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140529D30
#define CSpellDisplayWnd__UpdateStrings_x                          0x140529CB0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x1405690D0

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x14045D0C0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140178C30

// CLabel
#define CLabel__UpdateText_x                                       0x140464180

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405FD480
#define CListWnd__dCListWnd_x                                      0x1405FD710
#define CListWnd__vftable_x                                        0x140904DE8
#define CListWnd__AddColumn_x                                      0x140603DA0
#define CListWnd__AddColumn1_x                                     0x140603E50
#define CListWnd__AddLine_x                                        0x140604210
#define CListWnd__AddString_x                                      0x140604020
#define CListWnd__CalculateFirstVisibleLine_x                      0x140603A00
#define CListWnd__CalculateVSBRange_x                              0x140603720
#define CListWnd__ClearSel_x                                       0x1406050A0
#define CListWnd__ClearAllSel_x                                    0x140605100
#define CListWnd__CloseAndUpdateEditWindow_x                       0x140605E90
#define CListWnd__Compare_x                                        0x140602D70
#define CListWnd__Draw_x                                           0x1405FD890
#define CListWnd__DrawColumnSeparators_x                           0x140601510
#define CListWnd__DrawHeader_x                                     0x140601C80
#define CListWnd__DrawItem_x                                       0x140602340
#define CListWnd__DrawLine_x                                       0x1406017B0
#define CListWnd__DrawSeparator_x                                  0x1406015D0
#define CListWnd__EnableLine_x                                     0x140600950
#define CListWnd__EnsureVisible_x                                  0x140605D90
#define CListWnd__ExtendSel_x                                      0x140604F20
#define CListWnd__GetColumnTooltip_x                               0x1406003C0  // unused
#define CListWnd__GetColumnMinWidth_x                              0x140600440
#define CListWnd__GetColumnWidth_x                                 0x140600330
#define CListWnd__GetCurSel_x                                      0x1405FFB90
#define CListWnd__GetItemAtPoint_x                                 0x140600D70
#define CListWnd__GetItemAtPoint1_x                                0x140600EF0
#define CListWnd__GetItemData_x                                    0x1405FFC30
#define CListWnd__GetItemHeight_x                                  0x1406000D0
#define CListWnd__GetItemIcon_x                                    0x1405FFDA0
#define CListWnd__GetItemRect_x                                    0x140600A80
#define CListWnd__GetItemText_x                                    0x1405FFC80
#define CListWnd__GetSelList_x                                     0x140605160
#define CListWnd__GetSeparatorRect_x                               0x1406012B0
#define CListWnd__InsertLine_x                                     0x140604A20
#define CListWnd__RemoveLine_x                                     0x140604D00
#define CListWnd__SetColors_x                                      0x140603700
#define CListWnd__SetColumnJustification_x                         0x140603300
#define CListWnd__SetColumnLabel_x                                 0x140603FB0
#define CListWnd__SetColumnWidth_x                                 0x140603200
#define CListWnd__SetCurSel_x                                      0x140604E60
#define CListWnd__SetItemColor_x                                   0x140605900
#define CListWnd__SetItemData_x                                    0x1406058C0
#define CListWnd__SetItemText_x                                    0x1406053C0
#define CListWnd__ShiftColumnSeparator_x                           0x140603400
#define CListWnd__Sort_x                                           0x140603060
#define CListWnd__ToggleSel_x                                      0x140604E90
#define CListWnd__SetColumnsSizable_x                              0x140603530
#define CListWnd__SetItemWnd_x                                     0x140605750
#define CListWnd__GetItemWnd_x                                     0x1405FFE10
#define CListWnd__SetItemIcon_x                                    0x140605470
#define CListWnd__CalculateCustomWindowPositions_x                 0x140603B70
#define CListWnd__SetVScrollPos_x                                  0x1406031D0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x14047E680

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x1404787C0
#define MapViewMap__dMapViewMap_x                                  0x1404788F0
#define MapViewMap__vftable_x                                      0x1408DE8D0
#define MapViewMap__Clear_x                                        0x14047CB10
#define MapViewMap__SetZoom_x                                      0x140483D60
#define MapViewMap__HandleLButtonDown_x                            0x1404789E0
#define MapViewMap__GetWorldCoordinates_x                          0x14047C580

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x1404A6340    // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A6DB0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A7600
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x1404A4900
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404B2370
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x1404A5E90

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x140685C20
#define CPacketScrambler__hton_x                                   0x140685C10

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x14062D260
#define CSidlManagerBase__CreatePageWnd_x                          0x14062C9A0
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140627980
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x1406278D0
#define CSidlManagerBase__FindAnimation1_x                         0x140627D80
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140628240
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140627FF0
#define CSidlManagerBase__CreateLabel_x                            0x14051E4F0
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x14062B730
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140861650
#define CSidlManagerBase__CreateXWnd_x                             0x14062BAA0

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x14051E9D0
#define CSidlManager__CreateXWnd_x                                 0x14051E070

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x140622DF0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x140622CC0
#define CSidlScreenWnd__ConvertToRes_x                             0x140656140 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x1406223D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x1406220E0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x1406221A0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x140622260
#define CSidlScreenWnd__DrawSidlPiece_x                            0x1406235A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x140623B80
#define CSidlScreenWnd__GetChildItem_x                             0x140623AD0
#define CSidlScreenWnd__GetSidlPiece_x                             0x140866D70
#define CSidlScreenWnd__HandleLButtonUp_x                          0x14060EBF0 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x140621A60
#define CSidlScreenWnd__LoadIniInfo_x                              0x140623BE0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x140624A90
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140620AF0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140E27118
#define CSidlScreenWnd__StoreIniInfo_x                             0x1406244A0
#define CSidlScreenWnd__StoreIniVis_x                              0x140624900
#define CSidlScreenWnd__vftable_x                                  0x140905E50
#define CSidlScreenWnd__WndNotification_x                          0x140623430

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x14035DD60 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x14035DFA0 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x14035D3D0
#define CSkillMgr__IsActivatedSkill_x                              0x14035D4C0
#define CSkillMgr__IsCombatSkill_x                                 0x14035D430

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140637820
#define CSliderWnd__SetValue_x                                     0x1406375D0
#define CSliderWnd__SetNumTicks_x                                  0x140637620

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x140525E00

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x1406424C0
#define CStmlWnd__CalculateHSBRange_x                              0x1406110A0
#define CStmlWnd__CalculateVSBRange_x                              0x140643720
#define CStmlWnd__CanBreakAtCharacter_x                            0x140649DB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x14064AB50
#define CStmlWnd__ForceParseNow_x                                  0x140642C90
#define CStmlWnd__GetNextTagPiece_x                                0x140649CE0
#define CStmlWnd__GetVisibleText_x                                 0x140642CB0
#define CStmlWnd__InitializeWindowVariables_x                      0x14064A950
#define CStmlWnd__MakeStmlColorTag_x                               0x140641B70
#define CStmlWnd__MakeWndNotificationTag_x                         0x140641BC0
#define CStmlWnd__SetSTMLText_x                                    0x140640420
#define CStmlWnd__StripFirstSTMLLines_x                            0x14064C000
#define CStmlWnd__UpdateHistoryString_x                            0x14064AD90

// CTabWnd
#define CTabWnd__Draw_x                                            0x14063F060
#define CTabWnd__DrawCurrentPage_x                                 0x14063FB50
#define CTabWnd__DrawTab_x                                         0x14063F740
#define CTabWnd__GetCurrentPage_x                                  0x14063E5C0
#define CTabWnd__GetCurrentTabIndex_x                              0x14063E5B0
#define CTabWnd__GetPageFromTabIndex_x                             0x14063F640
#define CTabWnd__GetPageInnerRect_x                                0x14063E860
#define CTabWnd__GetTabInnerRect_x                                 0x14063E780
#define CTabWnd__GetTabRect_x                                      0x14063E600
#define CTabWnd__InsertPage_x                                      0x14063EB30
#define CTabWnd__RemovePage_x                                      0x14063ED10
#define CTabWnd__SetPage_x                                         0x14063E900
#define CTabWnd__SetPageRect_x                                     0x14063EF10
#define CTabWnd__UpdatePage_x                                      0x14063F4B0

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x14063E100
#define CPageWnd__SetTabText_x                                     0x14063E090

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DFF30  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DFCE0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x14060AD90
#define CTextureFont__DrawWrappedText1_x                           0x14060ACA0
#define CTextureFont__DrawWrappedText2_x                           0x14060AEC0
#define CTextureFont__GetTextExtent_x                              0x14060B170

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x140652580

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405F0610

// CXStr
#define CXStr__gFreeLists_x                                        0x140CACD60
#define CXStr__gCXStrAccess_x                                      0x140E265C0

// CXWnd
#define CXWnd__BringToTop_x                                        0x1406132E0
#define CXWnd__ClrFocus_x                                          0x140612AF0
#define CXWnd__Destroy_x                                           0x140612BD0
#define CXWnd__DoAllDrawing_x                                      0x14060DFA0
#define CXWnd__DrawChildren_x                                      0x14060DF50
#define CXWnd__DrawColoredRect_x                                   0x14060E6D0
#define CXWnd__DrawTooltip_x                                       0x14060C4C0
#define CXWnd__DrawTooltipAtPoint_x                                0x14060C580
#define CXWnd__GetBorderFrame_x                                    0x14060E340
#define CXWnd__GetChildItem_x                                      0x140613590
#define CXWnd__GetChildWndAt_x                                     0x1406133A0
#define CXWnd__GetClientClipRect_x                                 0x140610DF0
#define CXWnd__GetRelativeRect_x                                   0x140611290
#define CXWnd__GetScreenClipRect_x                                 0x140610F40
#define CXWnd__GetScreenRect_x                                     0x140611190
#define CXWnd__GetTooltipRect_x                                    0x14060E790
#define CXWnd__IsActive_x                                          0x14060F070
#define CXWnd__IsDescendantOf_x                                    0x140611E30
#define CXWnd__IsReallyVisible_x                                   0x140611E60
#define CXWnd__IsType_x                                            0x140613D20
#define CXWnd__Minimize_x                                          0x140612700
#define CXWnd__ProcessTransition_x                                 0x140612CF0
#define CXWnd__Refade_x                                            0x140612390
#define CXWnd__Resize_x                                            0x140612650
#define CXWnd__Right_x                                             0x140613080
#define CXWnd__SetFocus_x                                          0x140612AA0
#define CXWnd__SetFont_x                                           0x140612B30
#define CXWnd__SetKeyTooltip_x                                     0x140613AA0
#define CXWnd__SetMouseOver_x                                      0x14060FB70
#define CXWnd__SetParent_x                                         0x140611A50
#define CXWnd__StartFade_x                                         0x140611CB0
#define CXWnd__vftable_x                                           0x140905560
#define CXWnd__CXWnd_x                                             0x14060B440
#define CXWnd__dCXWnd_x                                            0x14060BA80

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140657320

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x140616860
#define CXWndManager__DrawWindows_x                                0x1406169A0
#define CXWndManager__GetKeyboardFlags_x                           0x140619CB0
#define CXWndManager__HandleKeyboardMsg_x                          0x140619780
#define CXWndManager__RemoveWnd_x                                  0x14061A090
#define CXWndManager__RemovePendingDeletionWnd_x                   0x14061A850

// CDBStr
#define CDBStr__GetString_x                                        0x1401B46F0

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x1401237A0
#define CharacterZoneClient__CastSpell_x                           0x140103C00
#define CharacterZoneClient__Cur_HP_x                              0x14011A540
#define CharacterZoneClient__Cur_Mana_x                            0x140123550
#define CharacterZoneClient__GetAdjustedSkill_x                    0x14011E6C0
#define CharacterZoneClient__GetBaseSkill_x                        0x14011F9E0  // CharacterZoneClient::Skill
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1401078D0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x14012A740
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x0
#define CharacterZoneClient__GetHPRegen_x                          0x14012A020
#define CharacterZoneClient__GetManaRegen_x                        0x14012AD90
#define CharacterZoneClient__GetPCSpellAffect_x                    0x1401089E0
#define CharacterZoneClient__Max_Endurance_x                       0x14030FE20  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x14011A300
#define CharacterZoneClient__Max_Mana_x                            0x14030FBC0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__SpellDuration_x                       0x1401084C0
#define CharacterZoneClient__TotalEffect_x                         0x14010C840
#define CharacterZoneClient__UseSkill_x                            0x14012C430

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B7B10

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400FCFE0
#define CCharacterListWnd__EnterWorld_x                            0x1400FC990
#define CCharacterListWnd__Quit_x                                  0x1400FC4F0
#define CCharacterListWnd__UpdateList_x                            0x1400FCB50

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x1406873F0
#define ItemBase__CreateItemTagString_x                            0x140687DE0
#define ItemBase__GetImageNum_x                                    0x14068A020
#define ItemBase__GetItemValue_x                                   0x14068BB90
#define ItemBase__IsEmpty_x                                        0x14068D7B0
#define ItemBase__IsKeyRingItem_x                                  0x14068E040
#define ItemBase__ValueSellMerchant_x                              0x1406923C0
#define ItemClient__CanDrop_x                                      0x1402E0580
#define ItemClient__CanGoInBag_x                                   0x1402E06A0
#define ItemClient__CreateItemClient_x                             0x1402DF410
#define ItemClient__dItemClient_x                                  0x1402DF340

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401DA070
#define EQ_LoadingS__Array_x                                       0x140BA0CB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x14069DAE0
#define PcBase__GetCombatAbility_x                                 0x14069E170
#define PcBase__GetCombatAbilityTimer_x                            0x14069E210
#define PcBase__GetItemContainedRealEstateIds_x                    0x14069E940
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x14069F1B0
#define PcClient__AlertInventoryChanged_x                          0x140304DA0
#define PcClient__GetConLevel_x                                    0x1403055E0  // PcClient::ConsiderTarget
#define PcClient__HasLoreItem_x                                    0x140306050
#define PcZoneClient__GetItemRecastTimer_x                         0x1403138B0
#define PcZoneClient__RemoveMyAffect_x                             0x140317B00

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140248270  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140248990  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402489F0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402488E0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x140283170  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401AF3D0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406FE6A0
#define PlayerBase__CanSee1_x                                      0x1406FE770
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406FE370
#define PlayerBase__HasProperty_x                                  0x1406FE220
#define PlayerBase__IsTargetable_x                                 0x1406FE8D0
#define PlayerClient__ChangeBoneStringSprite_x                     0x14032E010
#define PlayerClient__dPlayerClient_x                              0x14031EA00
#define PlayerClient__GetPcClient_x                                0x14032C130
#define PlayerClient__PlayerClient_x                               0x14031E800
#define PlayerClient__SetNameSpriteState_x                         0x1403241B0
#define PlayerClient__SetNameSpriteTint_x                          0x140325210
#define PlayerZoneClient__ChangeHeight_x                           0x140340090
#define PlayerZoneClient__DoAttack_x                               0x14033B790
#define PlayerZoneClient__GetLevel_x                               0x140342DB0
#define PlayerZoneClient__IsValidTeleport_x                        0x140284A20
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401D0440

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x140334CB0  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x140334D70  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x140334E20
#define PlayerManagerClient__CreatePlayer_x                        0x1403347E0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406FD4E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402E4BB0
#define pinstKeyPressHandler_x                                     0x140DF5684
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402E4D30
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402E4CD0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402E61A0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402E61F0
#define KeypressHandler__HandleKeyUp_x                             0x1402E62D0
#define KeypressHandler__SaveKeymapping_x                          0x1402E6940  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406B53E0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406AF300

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x140313150  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x140310CF0
#define PcZoneClient__GetPcSkillLimit_x                            0x140317630
#define PcZoneClient__RemovePetEffect_x                            0x140317F10
#define PcZoneClient__HasAlternateAbility_x                        0x14030F9B0
#define PcZoneClient__CanEquipItem_x                               0x140310140
#define PcZoneClient__GetItemByID_x                                0x140314080
#define PcZoneClient__RemoveBuffEffect_x                           0x140317FE0
#define PcZoneClient__BandolierSwap_x                              0x1403113B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x140313820

// Doors
#define EQSwitch__UseSwitch_x                                      0x14028AE60

// IconCache
#define IconCache__GetIcon_x                                       0x1403FA230

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403EFFA0
#define CContainerMgr__CloseContainer_x                            0x1403F0300
#define CContainerMgr__OpenExperimentContainer_x                   0x1403F0FB0

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404E3620

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402D79C0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x14046D1C0
#define CLootWnd__RequestLootSlot_x                                0x14046C2D0

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x14020AEC0
#define EQ_Spell__SpellAffects_x                                   0x14020B4E0
#define EQ_Spell__SpellAffectBase_x                                0x14020B1A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x140110820
#define EQ_Spell__GetSpellAffectByIndex_x                          0x1401107D0
#define EQ_Spell__IsSPAStacking_x                                  0x14020C790
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x14020B750
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x14020C7C0
#define __IsResEffectSpell_x                                       0x1401101B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E5D00

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140540CF0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140540300
#define CTargetWnd__RefreshTargetBuffs_x                           0x140540700
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x14053EF00

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x140545FD0  // CTaskWnd::UpdateTimes
#define CTaskWnd__ConfirmAbandonTask_x                             0x140549850

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401AC940
#define CTaskManager__HandleMessage_x                              0x1401AA2E0
#define CTaskManager__GetTaskStatus_x                              0x1401ACA10
#define CTaskManager__GetElementDescription_x                      0x1401ACA90

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x140204DF0
#define EqSoundManager__PlayScriptMp3_x                            0x140205090
#define EqSoundManager__SoundAssistPlay_x                          0x140362D30  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x140362120  // WaveInstance::Play

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x1401976F0

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x14063D620
#define CTextureAnimation__SetCurCell_x                            0x14063D380

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402D4A10

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406D1690
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406D1710
#define CharacterBase__IsExpansionFlag_x                           0x140241E80

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403D0E70
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403D1980
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403D1A60

// messages
#define msg_spell_worn_off_x                                       0x140237200
#define msg_new_text_x                                             0x1402287A0
#define __msgTokenTextParam_x                                      0x140239E30
#define msgTokenText_x                                             0x14023A240

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140368190
#define SpellManager__GetSpellByGroupAndRank_x                     0x140367620

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x140703940

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x1404645E0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403F52B0
#define CCursorAttachment__AttachToCursor1_x                       0x1403F5360
#define CCursorAttachment__Deactivate_x                            0x1403F6D00

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1406509F0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140651310
#define CEQSuiteTextureLoader__GetTexture_x                        0x140650E60

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x140171AD0
#define CFindItemWnd__Update_x                                     0x1401728E0
#define CFindItemWnd__PickupSelectedItem_x                         0x14016FF70

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x14017DCA0
#define LootFiltersManager__GetItemFilterData_x                    0x14017D3E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x14017D420
#define LootFiltersManager__SetItemLootFilter_x                    0x14017D6B0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404CED10

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x14070A780
#define CResolutionHandler__GetWindowedStyle_x                     0x14035C0B0

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403EC150

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406D5410  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406D5520  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x140412700
#define CGroupWnd__UpdateDisplay_x                                 0x140411990

// ItemBase
#define ItemBase__IsLore_x                                         0x14068E110
#define ItemBase__IsLoreEquipped_x                                 0x14068E280

#define MultipleItemMoveManager__ProcessMove_x                     0x1402F7BD0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x140283090
#define EQPlacedItemManager__GetItemByGuid_x                       0x140283230
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x140283280

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14034E190

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x14014AF70
#define FactionManagerClient__HandleFactionMessage_x               0x14014B870
#define FactionManagerClient__GetFactionStanding_x                 0x14014C6C0
#define FactionManagerClient__GetMaxFaction_x                      0x14014C6C0
#define FactionManagerClient__GetMinFaction_x                      0x14014C630

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400CDC50

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x14015A410

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401E2A90
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401E37E0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401E3BE0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401E3B60  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x14036C610

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x14034E190

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140248860

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405EC1A0

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400A69E0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x140381C80

// AchievementManager
#define AchievementManager__Instance_x                             0x1400A7DB0

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
