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
#define __ExpectedVersionDate                                     "Feb 23 2022"
#define __ExpectedVersionTime                                     "07:55:10"
#define __ActualVersionDate_x                                      0x1408BD0B8
#define __ActualVersionTime_x                                      0x1408BD0A8
#define __ActualVersionBuild_x                                     0x1408A9EF8

// Memory Protection
#define __MemChecker0_x                                            0x1402E6510
#define __MemChecker1_x                                            0x1405D3CB0
#define __MemChecker2_x                                            0x14037AD10 // unused (original was inlined)
#define __MemChecker3_x                                            0x14037AC40
#define __MemChecker4_x                                            0x1402B1250
#define __EncryptPad0_x                                            0x140C54F60

// EverQuestInfo
#define pinstEverQuestInfo_x                                       0x140BAEAD0
#define __ScreenX_x                                                0x140BAEAE0 // flip flopped?
#define __ScreenY_x                                                0x140BAEAE4
#define __ScreenXMax_x                                             0x140BAEAE8
#define __ScreenYMax_x                                             0x140BAEAEC
#define __InChatMode_x                                             0x140BAEB2C
#define __RunWalkState_x                                           0x140BAEB30
#define DI8__Mouse_Copy_x                                          0x140BAEB44
#define __MouseLook_x                                              0x140BAEBC2
#define __NetStatusToggle_x                                        0x140BAEBC5
#define __pulAutoRun_x                                             0x140BAEBE0
#define __Clicks_x                                                 0x140BAEBFC
#define __RMouseHeldTime_x                                         0x140BAEC64
#define __LMouseHeldTime_x                                         0x140BAEC68
#define instEQZoneInfo_x                                           0x140BAEDB8
#define __ZoneType_x                                               0x140BAEFC0 // zoneHdr.outdoor
#define __ShiftKeyDown_x                                           0x140BAF1C8
#define __AutoSkillArray_x                                         0x140BAF668
#define __RangeAttackReady_x                                       0x140BAFA14
#define __AttackOnAssist_x                                         0x140BAFB8C
#define __ShowNames_x                                              0x140BAFBEC
#define __PCNames_x                                                0x140BAFD3C
#define __UseTellWindows_x                                         0x140BAFED4
#define __pulForward_x                                             0x140BAFF30
#define __pulBackward_x                                            0x140BAFF34
#define __pulTurnRight_x                                           0x140BAFF38
#define __pulTurnLeft_x                                            0x140BAFF3C
#define __pulStrafeLeft_x                                          0x140BAFF40
#define __pulStrafeRight_x                                         0x140BAFF44
#define __LastTell_x                                               0x140BB1430
#define __ServerName_x                                             0x140BE5088
#define __DoAbilityList_x                                          0x140BE50C8
#define __SocialChangedList_x                                      0x140BE5110
#define __Socials_x                                                0x140BE5188
#define __Inviter_x                                                0x140C4E9D0
#define __Attack_x                                                 0x140C4EA53
#define __Autofire_x                                               0x140C4EA54
#define EverQuest__Cameras_x                                       0x140BAFEE0  // part of EverQuestInfo
#define EverQuestinfo__IsItemPending_x                             0x140C4EA58  // part of EverQuestInfo


// Misc Globals
#define __do_loot_x                                                0x14024AF90
#define __gfMaxZoomCameraDistance_x                                0x1408B29D0
#define __gfMaxCameraDistance_x                                    0x1408EE6B8
#define __CurrentSocial_x                                          0x140A51A74
#define __BindList_x                                               0x140B9FAF0
#define g_eqCommandStates_x                                        0x140BA1090
#define __CommandList_x                                            0x140BA1C20
#define __ScreenMode_x                                             0x140D30E24
#define __gWorld_x                                                 0x140DE5160
#define __gpbCommandEvent_x                                        0x140DE516C
#define __ServerHost_x                                             0x140DE5358
#define __Guilds_x                                                 0x140DE93E0
#define __MouseEventTime_x                                         0x140DEB2BC
#define DI8__Mouse_Check_x                                         0x140DF18B0
#define __heqmain_x                                                0x140DF3D58
#define DI8__Mouse_x                                               0x140DF3D70
#define __HWnd_x                                                   0x140DF3D78
#define __Mouse_x                                                  0x140DF0DA8
#define DI8__Main_x                                                0x140DF0E40
#define DI8__Keyboard_x                                            0x140DF0E48
#define __LoginName_x                                              0x140DF152C
#define __CurrentMapLabel_x                                        0x140E0A078
#define __LabelCache_x                                             0x140E0C180
#define __SubscriptionType_x                                       0x140E44AC0
#define Teleport_Table_Size_x                                      0x140DE51F4
#define Teleport_Table_x                                           0x140DE2CB0

////
//Section 1: Vital Offsets
////
#define instCRaid_x                                                0x140DE5750
#define pinstActiveBanker_x                                        0x140DE5690
#define pinstActiveCorpse_x                                        0x140DE5680
#define pinstActiveGMaster_x                                       0x140DE5688
#define pinstActiveMerchant_x                                      0x140DE5678
#define pinstAltAdvManager_x                                       0x140D31D30
#define pinstCEverQuest_x                                          0x140DF0DA0
#define pinstCamActor_x                                            0x140D30E10
#define pinstCDBStr_x                                              0x140D30860
#define pinstCDisplay_x                                            0x140DE2CA8
#define pinstControlledPlayer_x                                    0x140DE5720
#define pinstCResolutionHandler_x                                  0x14147EBC0
#define pinstCSidlManager_x                                        0x140E1E2D0
#define pinstCXWndManager_x                                        0x140E1E2C0
#define instDynamicZone_x                                          0x140DE92A0 // Part of g_dynamicZone
#define instExpeditionLeader_x                                     0x140DE92EE
#define instExpeditionName_x                                       0x140DE932E
#define pinstDZMember_x                                            0x140DE93B8
#define pinstDZTimerInfo_x                                         0x140DE93C0
#define pinstEqLogin_x                                             0x140DF0E70
#define instTribute_x                                              0x140B937B0
#define pinstEQSoundManager_x                                      0x140D326C0
#define pinstEQSpellStrings_x                                      0x140D14060
#define pinstSGraphicsEngine_x                                     0x14147E958
#define pinstLocalPC_x                                             0x140DE2C88
#define pinstLocalPlayer_x                                         0x140DE5670
#define pinstCMercenaryClientManager_x                             0x140DECF08
#define pinstMercenaryStats_x                                      0x140E0CCD4
#define pinstModelPlayer_x                                         0x140DE56A0
#define pinstRenderInterface_x                                     0x14147E970
#define pinstSkillMgr_x                                            0x140DEFAC8
#define pinstSpawnManager_x                                        0x140DEDB60
#define pinstSpellManager_x                                        0x140DEFD60
#define pinstSpellSets_x                                           0x140C47678
#define pinstStringTable_x                                         0x140DE2CA0
#define pinstSwitchManager_x                                       0x140DE2B00
#define pinstTarget_x                                              0x140DE5718
#define pinstTaskMember_x                                          0x140B932F0 // Part of g_taskManager
#define pinstTrackTarget_x                                         0x140DE5728
#define pinstTradeTarget_x                                         0x140DE5698
#define instTributeActive_x                                        0x140B937D9
#define pinstViewActor_x                                           0x140D30E08
#define pinstWorldData_x                                           0x140DE2C98
#define pinstPlayerPath_x                                          0x140DEDC00
#define pinstTargetIndicator_x                                     0x140DEFFE0
#define EQObject_Top_x                                             0x140DE2C70

////
//Section 2:  UI Related Offsets
////
#define pinstCChatWindowManager_x                                  0x140E05930
#define pinstCContainerMgr_x                                       0x140D30ED0
#define pinstCContextMenuManager_x                                 0x140E1E270
#define pinstCInvSlotMgr_x                                         0x140D30EC0
#define pinstCItemDisplayManager_x                                 0x140E09530
#define pinstCPopupWndManager_x                                    0x140E0AC60
#define pinstCSpellDisplayMgr_x                                    0x140E0BEA0
#define pinstCTaskManager_x                                        0x140A5C740
#define pinstEQSuiteTextureLoader_x                                0x140CA43E0
#define pinstItemIconCache_x                                       0x140E062D0
#define pinstLootFiltersManager_x                                  0x140D2FCA0

////
// Section 3: Miscellaneous Offsets
////
#define __CastRay_x                                                0x1402459C0
#define __CastRay2_x                                               0x140245A30
#define __ConvertItemTags_x                                        0x1402696F0
#define __CleanItemTags_x                                          0x1400A7400
#define __CreateCascadeMenuItems_x                                 0x1401C8660
#define __DoesFileExist_x                                          0x1405D72A0
#define __EQGetTime_x                                              0x1405D3820
#define __ExecuteCmd_x                                             0x14023D880
#define __FixHeading_x                                             0x1406F8B20
#define __FlushDxKeyboard_x                                        0x1403755E0
#define __get_bearing_x                                            0x140245530
#define __get_melee_range_x                                        0x140245D30
#define __GetAnimationCache_x                                      0x1403F45F0
#define __GetGaugeValueFromEQ_x                                    0x14052AB90
#define __GetLabelFromEQ_x                                         0x14052C6D0
#define __GetXTargetType_x                                         0x1406FB540   // ExtendedTargetList::ExtendedTargetRoleName
#define __HandleMouseWheel_x                                       0x14037ADE0
#define __HeadingDiff_x                                            0x1406F8B80
#define __HelpPath_x                                               0x140DEAF70   // Why?
#define __NewUIINI_x                                               0x14052A7B0   // Why?
#define __ProcessGameEvents_x                                      0x1402C07A0
#define __ProcessKeyboardEvents_x                                  0x140377940
#define __ProcessMouseEvents_x                                     0x1402BFE10
#define __SaveColors_x                                             0x1401C84D0
#define __STMLToText_x                                             0x140619150
#define __WndProc_x                                                0x140378660
#define CMemoryMappedFile__SetFile_x                               0x14083AA80
#define DrawNetStatus_x                                            0x1402F6870
#define Util__FastTime_x                                           0x1405D3390
#define __eq_delete_x                                              0x1407032C0
#define __eq_new_x                                                 0x1407038C4
#define __CopyLayout_x                                             0x1402E0DE0
#define __ThrottleFrameRate_x                                      0x1402A4034
#define __ThrottleFrameRateEnd_x                                   0x1402A4098

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140388C10
#define CAAWnd__Update_x                                           0x140387D50
#define CAAWnd__UpdateSelected_x                                   0x140384D00

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400C7280
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C9F70
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408994E8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400C2530

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401D3100
#define AltAdvManager__IsAbilityReady_x                            0x1401D18C0
#define AltAdvManager__GetAAById_x                                 0x1401D1D20
#define AltAdvManager__CanTrainAbility_x                           0x1401D1D90
#define AltAdvManager__CanSeeAbility_x                             0x1401D2230

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x140107810
#define CharacterZoneClient__CalcAffectChange_x                    0x140105CA0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x140105FA0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400F8D40
#define CharacterZoneClient__CharacterZoneClient_x                 0x14010B570
#define CharacterZoneClient__FindAffectSlot_x                      0x1401042C0
#define CharacterZoneClient__GetCurrentMod_x                       0x14012B230
#define CharacterZoneClient__GetCursorItemCount_x                  0x14011C6F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x140105A00
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EBFB0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x1400EF040
#define CharacterZoneClient__GetItemCountInInventory_x             0x14011C7A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x14011C450
#define CharacterZoneClient__GetLastEffectSlot_x                   0x140105A90
#define CharacterZoneClient__GetMaxEffects_x                       0x1400FDA30
#define CharacterZoneClient__GetModCap_x                           0x14012B120
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x140105920
#define CharacterZoneClient__HasSkill_x                            0x140118F30
#define CharacterZoneClient__IsStackBlocked_x                      0x140101930
#define CharacterZoneClient__MakeMeVisible_x                       0x14011AC20
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140126050
#define CharacterZoneClient__RemovePCAffectex_x                    0x1401038A0

// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403A7880

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403B37B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403ADD50
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403AB7E0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403B8720

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1408FD978

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403DFBF0
#define CChatWindowManager__InitContextMenu_x                      0x1403D72D0
#define CChatWindowManager__FreeChatWindow_x                       0x1403DE270
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403DF7F0
#define CChatWindowManager__CreateChatWindow_x                     0x1403DE990

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14012FA30

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403E07F0
#define CChatWindow__Clear_x                                       0x1403E1E10
#define CChatWindow__WndNotification_x                             0x1403E2520
#define CChatWindow__AddHistory_x                                  0x1403E15D0

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14062E3A0
#define CContextMenu__RemoveMenuItem_x                             0x14062E7E0
#define CContextMenu__RemoveAllMenuItems_x                         0x14062E800
#define CContextMenu__CheckMenuItem_x                              0x14062E8B0
#define CContextMenu__SetMenuItem_x                                0x14062E700
#define CContextMenu__AddSeparator_x                               0x14062E6D0

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14062EF30
#define CContextMenuManager__RemoveMenu_x                          0x14062EFC0
#define CContextMenuManager__PopupMenu_x                           0x14062F0E0
#define CContextMenuManager__Flush_x                               0x14062EEA0
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403EDD50

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406CC020
#define CChatService__GetFriendName_x                              0x1406CC030

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14062AA40
#define CComboWnd__Draw_x                                          0x140629D50
#define CComboWnd__GetCurChoice_x                                  0x14062A7B0  // unused
#define CComboWnd__GetListRect_x                                   0x14062A2F0
#define CComboWnd__GetTextRect_x                                   0x14062AAE0
#define CComboWnd__InsertChoice_x                                  0x14062A4A0
#define CComboWnd__SetColors_x                                     0x14062A460
#define CComboWnd__SetChoice_x                                     0x14062A790
#define CComboWnd__GetItemCount_x                                  0x14062A7D0
#define CComboWnd__GetCurChoiceText_x                              0x14062A820  // unused
#define CComboWnd__GetChoiceText_x                                 0x14062A7F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x14062A560

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403EB030
#define CContainerWnd__SetContainer_x                              0x1403ECA20
#define CContainerWnd__vftable_x                                   0x1408CAF50

// CDisplay
#define CDisplay__cameraType_x                                     0x140D30B84
#define CDisplay__ZoneMainUI_x                                     0x1401C29C0
#define CDisplay__PreZoneMainUI_x                                  0x1401C29E0
#define CDisplay__CleanGameUI_x                                    0x1401C8250
#define CDisplay__GetClickedActor_x                                0x1401B96B0
#define CDisplay__GetUserDefinedColor_x                            0x1401B02D0
#define CDisplay__InitCharSelectUI_x                               0x1401C22F0
#define CDisplay__ReloadUI_x                                       0x1401C1BD0
#define CDisplay__WriteTextHD2_x                                   0x1401B5510
#define CDisplay__TrueDistance_x                                   0x1401BD780
#define CDisplay__SetViewActor_x                                   0x1401B8EF0
#define CDisplay__GetFloorHeight_x                                 0x1401B5840
#define CDisplay__SetRenderWindow_x                                0x1401B3F60
#define CDisplay__ToggleScreenshotMode_x                           0x1401B88A0
#define CDisplay__RealRender_World_x                               0x1401B30B0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x140654EB0
#define CEditWnd__DrawCaret_x                                      0x140632C80  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140635330
#define CEditWnd__GetCaretPt_x                                     0x140633F90  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140633D20
#define CEditWnd__GetDisplayString_x                               0x140633BD0
#define CEditWnd__GetHorzOffset_x                                  0x140632150
#define CEditWnd__GetLineForPrintableChar_x                        0x1406351E0
#define CEditWnd__GetSelStartPt_x                                  0x140633FE0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140633A10
#define CEditWnd__PointFromPrintableChar_x                         0x140634DF0
#define CEditWnd__ReplaceSelection_x                               0x140634930
#define CEditWnd__SelectableCharFromPoint_x                        0x140634F40
#define CEditWnd__SetEditable_x                                    0x1406340D0
#define CEditWnd__SetWindowText_x                                  0x1406336F0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402A70A0
#define CEverQuest__ClickedPlayer_x                                0x140296390
#define CEverQuest__CreateTargetIndicator_x                        0x1402BCE10
#define CEverQuest__DeleteTargetIndicator_x                        0x1402BCEA0
#define CEverQuest__DoTellWindow_x                                 0x14012FB30 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14012FE10 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14028A340
#define CEverQuest__dsp_chat_x                                     0x140130220 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B6CE0
#define CEverQuest__Emote_x                                        0x1402A78C9
#define CEverQuest__EnterZone_x                                    0x1402A0400
#define CEverQuest__GetBodyTypeDesc_x                              0x1402AE1E0
#define CEverQuest__GetClassDesc_x                                 0x1402AE7F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402AEDB0
#define CEverQuest__GetDeityDesc_x                                 0x1402BAE90
#define CEverQuest__GetLangDesc_x                                  0x1402AEF70
#define CEverQuest__GetRaceDesc_x                                  0x1402AE7C0
#define CEverQuest__InterpretCmd_x                                 0x1402BB590
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028EED0
#define CEverQuest__LMouseUp_x                                     0x14028CB00
#define CEverQuest__RightClickedOnPlayer_x                         0x14028FBF0
#define CEverQuest__RMouseUp_x                                     0x14028E160
#define CEverQuest__SetGameState_x                                 0x14028A0C0
#define CEverQuest__UPCNotificationFlush_x                         0x1402B6BA0 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402B0680
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402A88D0
#define CEverQuest__ReportSuccessfulHit_x                          0x1402A9600

// CGaugeWnd
#define CGaugeWnd__CalcFillRect_x                                  0x140400560
#define CGaugeWnd__CalcLinesFillRect_x                             0x1404005C0
#define CGaugeWnd__Draw_x                                          0x1403FFAC0

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E96A0
#define CGuild__GetGuildName_x                                     0x1400E7700
#define CGuild__GetGuildIndex_x                                    0x1400E7FA0

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140420B60

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402D3830
#define CHotButton__SetCheck_x                                     0x1402D33B0

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x1404301B0
#define CInvSlotMgr__MoveItem_x                                    0x14042E8E0
#define CInvSlotMgr__SelectSlot_x                                  0x1404302D0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14042CC80
#define CInvSlot__SliderComplete_x                                 0x140428FD0
#define CInvSlot__GetItemBase_x                                    0x140428770
#define CInvSlot__UpdateItem_x                                     0x140428980

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140431230
#define CInvSlotWnd__HandleLButtonUp_x                             0x140431D20

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14044E660
#define CItemDisplayWnd__UpdateStrings_x                           0x14044DF40
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x1404408F0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140441000
#define CItemDisplayWnd__RequestConvertItem_x                      0x14044F570

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140523750
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405236D0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140562880

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x140456A70

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140173150

// CLabel
#define CLabel__UpdateText_x                                       0x14045DB20

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405F6660
#define CListWnd__dCListWnd_x                                      0x1405F68F0
#define CListWnd__vftable_x                                        0x1408FCD88
#define CListWnd__AddColumn_x                                      0x1405FCF90
#define CListWnd__AddColumn1_x                                     0x1405FD040
#define CListWnd__AddLine_x                                        0x1405FD400
#define CListWnd__AddString_x                                      0x1405FD210
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405FCBF0
#define CListWnd__CalculateVSBRange_x                              0x1405FC900
#define CListWnd__ClearSel_x                                       0x1405FE290
#define CListWnd__ClearAllSel_x                                    0x1405FE2F0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405FF080
#define CListWnd__Compare_x                                        0x1405FBF50
#define CListWnd__Draw_x                                           0x1405F6A70
#define CListWnd__DrawColumnSeparators_x                           0x1405FA6F0
#define CListWnd__DrawHeader_x                                     0x1405FAE60
#define CListWnd__DrawItem_x                                       0x1405FB520
#define CListWnd__DrawLine_x                                       0x1405FA990
#define CListWnd__DrawSeparator_x                                  0x1405FA7B0
#define CListWnd__EnableLine_x                                     0x1405F9B30
#define CListWnd__EnsureVisible_x                                  0x1405FEF80
#define CListWnd__ExtendSel_x                                      0x1405FE110
#define CListWnd__GetColumnTooltip_x                               0x1405F95A0  // unused
#define CListWnd__GetColumnMinWidth_x                              0x1405F9620
#define CListWnd__GetColumnWidth_x                                 0x1405F9510
#define CListWnd__GetCurSel_x                                      0x1405F8D70
#define CListWnd__GetItemAtPoint_x                                 0x1405F9F50
#define CListWnd__GetItemAtPoint1_x                                0x1405FA0D0
#define CListWnd__GetItemData_x                                    0x1405F8E10
#define CListWnd__GetItemHeight_x                                  0x1405F92B0
#define CListWnd__GetItemIcon_x                                    0x1405F8F80
#define CListWnd__GetItemRect_x                                    0x1405F9C60
#define CListWnd__GetItemText_x                                    0x1405F8E60
#define CListWnd__GetSelList_x                                     0x1405FE350
#define CListWnd__GetSeparatorRect_x                               0x1405FA490
#define CListWnd__InsertLine_x                                     0x1405FDC10
#define CListWnd__RemoveLine_x                                     0x1405FDEF0
#define CListWnd__SetColors_x                                      0x1405FC8E0
#define CListWnd__SetColumnJustification_x                         0x1405FC4E0
#define CListWnd__SetColumnLabel_x                                 0x1405FD1A0
#define CListWnd__SetColumnWidth_x                                 0x1405FC3E0
#define CListWnd__SetCurSel_x                                      0x1405FE050
#define CListWnd__SetItemColor_x                                   0x1405FEAF0
#define CListWnd__SetItemData_x                                    0x1405FEAB0
#define CListWnd__SetItemText_x                                    0x1405FE5B0
#define CListWnd__ShiftColumnSeparator_x                           0x1405FC5E0
#define CListWnd__Sort_x                                           0x1405FC240
#define CListWnd__ToggleSel_x                                      0x1405FE080
#define CListWnd__SetColumnsSizable_x                              0x1405FC710
#define CListWnd__SetItemWnd_x                                     0x1405FE940
#define CListWnd__GetItemWnd_x                                     0x1405F8FF0
#define CListWnd__SetItemIcon_x                                    0x1405FE660
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405FCD60
#define CListWnd__SetVScrollPos_x                                  0x1405FC3B0

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140478010

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x140472150
#define MapViewMap__dMapViewMap_x                                  0x140472280
#define MapViewMap__vftable_x                                      0x1408D68A0
#define MapViewMap__Clear_x                                        0x1404764A0
#define MapViewMap__SetZoom_x                                      0x14047D6F0
#define MapViewMap__HandleLButtonDown_x                            0x140472370
#define MapViewMap__GetWorldCoordinates_x                          0x140475F10

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049FCC0    // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A0720
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A0F70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049E280
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404ABCC0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14049F810

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067E6B0
#define CPacketScrambler__hton_x                                   0x14067E6A0

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x140625DD0
#define CSidlManagerBase__CreatePageWnd_x                          0x140625520
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140620510
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x140620460
#define CSidlManagerBase__FindAnimation1_x                         0x140620910
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140620DD0
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140620B80
#define CSidlManagerBase__CreateLabel_x                            0x140517F10
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x1406242C0
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140855242
#define CSidlManagerBase__CreateXWnd_x                             0x140624630

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x1405183F0
#define CSidlManager__CreateXWnd_x                                 0x140517A90

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14061B9D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14061B8A0
#define CSidlScreenWnd__ConvertToRes_x                             0x14064EC00 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14061B150
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14061AE50
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14061AF10
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14061AFD0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14061C190
#define CSidlScreenWnd__EnableIniStorage_x                         0x14061C770
#define CSidlScreenWnd__GetChildItem_x                             0x14061C6C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x14085F020
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140607D70 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14061A810
#define CSidlScreenWnd__LoadIniInfo_x                              0x14061C7D0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14061D680
#define CSidlScreenWnd__LoadSidlScreen_x                           0x1406198A0
#define CSidlScreenWnd__m_layoutCopy_x                             0x140E1E118
#define CSidlScreenWnd__StoreIniInfo_x                             0x14061D090
#define CSidlScreenWnd__StoreIniVis_x                              0x14061D4F0
#define CSidlScreenWnd__vftable_x                                  0x1408FDDB8
#define CSidlScreenWnd__WndNotification_x                          0x14061C020

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140357C40 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140357E80 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x1403572B0
#define CSkillMgr__IsActivatedSkill_x                              0x1403573A0
#define CSkillMgr__IsCombatSkill_x                                 0x140357310

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140630350
#define CSliderWnd__SetValue_x                                     0x140630100
#define CSliderWnd__SetNumTicks_x                                  0x140630150

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14051F810

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14063AF90
#define CStmlWnd__CalculateHSBRange_x                              0x14060A200
#define CStmlWnd__CalculateVSBRange_x                              0x14063C160
#define CStmlWnd__CanBreakAtCharacter_x                            0x140642870
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140643610
#define CStmlWnd__ForceParseNow_x                                  0x14063B760
#define CStmlWnd__GetNextTagPiece_x                                0x1406427A0
#define CStmlWnd__GetVisibleText_x                                 0x14063B780
#define CStmlWnd__InitializeWindowVariables_x                      0x140643410
#define CStmlWnd__MakeStmlColorTag_x                               0x14063A640
#define CStmlWnd__MakeWndNotificationTag_x                         0x14063A690
#define CStmlWnd__SetSTMLText_x                                    0x140638EF0
#define CStmlWnd__StripFirstSTMLLines_x                            0x140644AC0
#define CStmlWnd__UpdateHistoryString_x                            0x140643850

// CTabWnd
#define CTabWnd__Draw_x                                            0x140637B30
#define CTabWnd__DrawCurrentPage_x                                 0x140638620
#define CTabWnd__DrawTab_x                                         0x140638210
#define CTabWnd__GetCurrentPage_x                                  0x140637090
#define CTabWnd__GetCurrentTabIndex_x                              0x140637080
#define CTabWnd__GetPageFromTabIndex_x                             0x140638110
#define CTabWnd__GetPageInnerRect_x                                0x140637330
#define CTabWnd__GetTabInnerRect_x                                 0x140637250
#define CTabWnd__GetTabRect_x                                      0x1406370D0
#define CTabWnd__InsertPage_x                                      0x140637600
#define CTabWnd__RemovePage_x                                      0x1406377E0
#define CTabWnd__SetPage_x                                         0x1406373D0
#define CTabWnd__SetPageRect_x                                     0x1406379E0
#define CTabWnd__UpdatePage_x                                      0x140637F80

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140636BF0
#define CPageWnd__SetTabText_x                                     0x140636B80

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DFE20  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DFBD0


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140603F80
#define CTextureFont__DrawWrappedText1_x                           0x140603E90
#define CTextureFont__DrawWrappedText2_x                           0x1406040B0
#define CTextureFont__GetTextExtent_x                              0x140604360

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14064B040

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405E97F0

// CXStr
#define CXStr__gFreeLists_x                                        0x140CA3D60
#define CXStr__gCXStrAccess_x                                      0x140E1D5C0

// CXWnd
#define CXWnd__BringToTop_x                                        0x14060C3D0
#define CXWnd__ClrFocus_x                                          0x14060BBF0
#define CXWnd__Destroy_x                                           0x14060BCD0
#define CXWnd__DoAllDrawing_x                                      0x140607140
#define CXWnd__DrawChildren_x                                      0x1406070F0
#define CXWnd__DrawColoredRect_x                                   0x140607860
#define CXWnd__DrawTooltip_x                                       0x140605660
#define CXWnd__DrawTooltipAtPoint_x                                0x140605710
#define CXWnd__GetBorderFrame_x                                    0x1406074D0
#define CXWnd__GetChildItem_x                                      0x14060C670
#define CXWnd__GetChildWndAt_x                                     0x14060C490
#define CXWnd__GetClientClipRect_x                                 0x140609F30
#define CXWnd__GetRelativeRect_x                                   0x14060A3F0
#define CXWnd__GetScreenClipRect_x                                 0x14060A080
#define CXWnd__GetScreenRect_x                                     0x14060A2F0
#define CXWnd__GetTooltipRect_x                                    0x140607920
#define CXWnd__IsActive_x                                          0x1406081C0
#define CXWnd__IsDescendantOf_x                                    0x14060AF80
#define CXWnd__IsReallyVisible_x                                   0x14060AFB0
#define CXWnd__IsType_x                                            0x14060CE00
#define CXWnd__Minimize_x                                          0x14060B800
#define CXWnd__ProcessTransition_x                                 0x14060BDF0
#define CXWnd__Refade_x                                            0x14060B4B0
#define CXWnd__Resize_x                                            0x14060B750
#define CXWnd__Right_x                                             0x14060C170
#define CXWnd__SetFocus_x                                          0x14060BBA0
#define CXWnd__SetFont_x                                           0x14060BC30
#define CXWnd__SetKeyTooltip_x                                     0x14060CB80
#define CXWnd__SetMouseOver_x                                      0x140608CD0
#define CXWnd__SetParent_x                                         0x14060ABB0
#define CXWnd__StartFade_x                                         0x14060AE00
#define CXWnd__vftable_x                                           0x1408FD500
#define CXWnd__CXWnd_x                                             0x140604630
#define CXWnd__dCXWnd_x                                            0x140604C30

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x14064FDE0

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14060F930
#define CXWndManager__DrawWindows_x                                0x14060FA70
#define CXWndManager__GetKeyboardFlags_x                           0x140612CA0
#define CXWndManager__HandleKeyboardMsg_x                          0x140612770
#define CXWndManager__RemoveWnd_x                                  0x140613080
#define CXWndManager__RemovePendingDeletionWnd_x                   0x140613830

// CDBStr
#define CDBStr__GetString_x                                        0x1401AEC50

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x14011DD60
#define CharacterZoneClient__CastSpell_x                           0x1400FE530
#define CharacterZoneClient__Cur_HP_x                              0x140114B00
#define CharacterZoneClient__Cur_Mana_x                            0x14011DB10
#define CharacterZoneClient__GetAdjustedSkill_x                    0x140118C80
#define CharacterZoneClient__GetBaseSkill_x                        0x140119FA0  // CharacterZoneClient::Skill
#define CharacterZoneClient__GetCastingTimeModifier_x              0x1401021B0
#define CharacterZoneClient__GetEnduranceRegen_x                   0x140124C70
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400EEB60
#define CharacterZoneClient__GetFocusRangeModifier_x               0x1400EED00
#define CharacterZoneClient__GetHPRegen_x                          0x140124570
#define CharacterZoneClient__GetManaRegen_x                        0x1401252B0
#define CharacterZoneClient__GetPCSpellAffect_x                    0x140103290
#define CharacterZoneClient__Max_Endurance_x                       0x140309D40  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x1401148C0
#define CharacterZoneClient__Max_Mana_x                            0x140309AE0  // PcZoneclient::Max_Mana
#define CharacterZoneClient__SpellDuration_x                       0x140102D70
#define CharacterZoneClient__TotalEffect_x                         0x140106F80
#define CharacterZoneClient__UseSkill_x                            0x140126910

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B0740

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400F7A20
#define CCharacterListWnd__EnterWorld_x                            0x1400F73D0
#define CCharacterListWnd__Quit_x                                  0x1400F6F30
#define CCharacterListWnd__UpdateList_x                            0x1400F7590

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x14067FEB0
#define ItemBase__CreateItemTagString_x                            0x1406808C0
#define ItemBase__GetImageNum_x                                    0x140682B30
#define ItemBase__GetItemValue_x                                   0x140684650
#define ItemBase__IsEmpty_x                                        0x1406862A0
#define ItemBase__IsKeyRingItem_x                                  0x140686B40
#define ItemBase__ValueSellMerchant_x                              0x14068AED0
#define ItemClient__CanDrop_x                                      0x1402DA4E0
#define ItemClient__CanGoInBag_x                                   0x1402DA600
#define ItemClient__CreateItemClient_x                             0x1402D9350
#define ItemClient__dItemClient_x                                  0x1402D9280

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401D4550
#define EQ_LoadingS__Array_x                                       0x140B97CB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406966D0
#define PcBase__GetCombatAbility_x                                 0x140696D70
#define PcBase__GetCombatAbilityTimer_x                            0x140696E10
#define PcBase__GetItemContainedRealEstateIds_x                    0x140697540
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140697DB0
#define PcClient__AlertInventoryChanged_x                          0x1402FECF0
#define PcClient__GetConLevel_x                                    0x1402FF530  // PcClient::ConsiderTarget
#define PcClient__HasLoreItem_x                                    0x1402FFFA0
#define PcZoneClient__GetItemRecastTimer_x                         0x14030D7C0
#define PcZoneClient__RemoveMyAffect_x                             0x1403119F0

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140242260  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140242980  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x1402429E0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402428D0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14027CFB0  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401A98E0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406F6C20
#define PlayerBase__CanSee1_x                                      0x1406F6CF0
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406F68F0
#define PlayerBase__HasProperty_x                                  0x1406F67A0
#define PlayerBase__IsTargetable_x                                 0x1406F6E50
#define PlayerClient__ChangeBoneStringSprite_x                     0x140327EC0
#define PlayerClient__dPlayerClient_x                              0x140318900
#define PlayerClient__GetPcClient_x                                0x140325FE0
#define PlayerClient__PlayerClient_x                               0x140318700
#define PlayerClient__SetNameSpriteState_x                         0x14031E060
#define PlayerClient__SetNameSpriteTint_x                          0x14031F0C0
#define PlayerZoneClient__ChangeHeight_x                           0x140339F50
#define PlayerZoneClient__DoAttack_x                               0x140335650
#define PlayerZoneClient__GetLevel_x                               0x14033CC50
#define PlayerZoneClient__IsValidTeleport_x                        0x14027E860
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401CA950

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14032EB70  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14032EC30  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14032ECE0
#define PlayerManagerClient__CreatePlayer_x                        0x14032E6A0
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406F5A60

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402DEB60
#define pinstKeyPressHandler_x                                     0x140DEC684
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402DECE0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402DEC80
#define KeypressHandler__ClearCommandStateArray_x                  0x1402E0150  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402E01A0
#define KeypressHandler__HandleKeyUp_x                             0x1402E0280
#define KeypressHandler__SaveKeymapping_x                          0x1402E08F0  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406AE010  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406A7F30

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14030D070  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14030AC10
#define PcZoneClient__GetPcSkillLimit_x                            0x140311520
#define PcZoneClient__RemovePetEffect_x                            0x140311E00
#define PcZoneClient__HasAlternateAbility_x                        0x1403098D0
#define PcZoneClient__CanEquipItem_x                               0x14030A060
#define PcZoneClient__GetItemByID_x                                0x14030DF90
#define PcZoneClient__RemoveBuffEffect_x                           0x140311ED0
#define PcZoneClient__BandolierSwap_x                              0x14030B2D0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x14030D730

// Doors
#define EQSwitch__UseSwitch_x                                      0x140284CA0

// IconCache
#define IconCache__GetIcon_x                                       0x1403F3F80

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403E9D00
#define CContainerMgr__CloseContainer_x                            0x1403EA060
#define CContainerMgr__OpenExperimentContainer_x                   0x1403EAD10

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404DCF80

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402D18E0

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140466B60
#define CLootWnd__RequestLootSlot_x                                0x140465C70

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140204F20
#define EQ_Spell__SpellAffects_x                                   0x140205550
#define EQ_Spell__SpellAffectBase_x                                0x140205210
#define EQ_Spell__GetSpellAffectBySlot_x                           0x14010AE80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x14010AE30
#define EQ_Spell__IsSPAStacking_x                                  0x140206800
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x1402057C0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x140206830
#define __IsResEffectSpell_x                                       0x14010A7B0

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E5BD0

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x14053A4A0  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140539AB0
#define CTargetWnd__RefreshTargetBuffs_x                           0x140539EB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140538730

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14053F780  // CTaskWnd::UpdateTimes
#define CTaskWnd__ConfirmAbandonTask_x                             0x140543000

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401A6E70
#define CTaskManager__HandleMessage_x                              0x1401A47F0
#define CTaskManager__GetTaskStatus_x                              0x1401A6F40
#define CTaskManager__GetElementDescription_x                      0x1401A6FC0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401FEE90
#define EqSoundManager__PlayScriptMp3_x                            0x1401FF130
#define EqSoundManager__SoundAssistPlay_x                          0x14035CBE0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14035BFD0  // WaveInstance::Play

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x140191C00

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140636130
#define CTextureAnimation__SetCurCell_x                            0x140635E90

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402CE930

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406C9C20
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406C9CA0
#define CharacterBase__IsExpansionFlag_x                           0x14023BE60

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403CABC0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403CB6D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403CB7B0

// messages
#define msg_spell_worn_off_x                                       0x140231330
#define msg_new_text_x                                             0x140222960
#define __msgTokenTextParam_x                                      0x140233F60
#define msgTokenText_x                                             0x140234370

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140361FC0
#define SpellManager__GetSpellByGroupAndRank_x                     0x1403614D0

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406FBEC0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045DF80

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403EF010
#define CCursorAttachment__AttachToCursor1_x                       0x1403EF0C0
#define CCursorAttachment__Deactivate_x                            0x1403F0A50

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1406494B0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140649DD0
#define CEQSuiteTextureLoader__GetTexture_x                        0x140649920

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14016BFF0
#define CFindItemWnd__Update_x                                     0x14016CE00
#define CFindItemWnd__PickupSelectedItem_x                         0x14016A480

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401781B0
#define LootFiltersManager__GetItemFilterData_x                    0x1401778F0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140177930
#define LootFiltersManager__SetItemLootFilter_x                    0x140177BC0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404C8670

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140702D00
#define CResolutionHandler__GetWindowedStyle_x                     0x140355F90

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403E5EA0

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406CD990  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406CDAA0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x14040C370
#define CGroupWnd__UpdateDisplay_x                                 0x14040B600

// ItemBase
#define ItemBase__IsLore_x                                         0x140686C10
#define ItemBase__IsLoreEquipped_x                                 0x140686D80

#define MultipleItemMoveManager__ProcessMove_x                     0x1402F1B70

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14027CED0
#define EQPlacedItemManager__GetItemByGuid_x                       0x14027D070
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14027D0C0

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140348040

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x140145490
#define FactionManagerClient__HandleFactionMessage_x               0x140145D90
#define FactionManagerClient__GetFactionStanding_x                 0x140146BE0
#define FactionManagerClient__GetMaxFaction_x                      0x140146BE0
#define FactionManagerClient__GetMinFaction_x                      0x140146B50

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400CDB60

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140154930

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401DCBB0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401DD9C0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401DDDC0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401DDD40  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140366440

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140348040

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140242850

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405E5380

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400A69B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14037BAA0

// AchievementManager
#define AchievementManager__Instance_x                             0x1400A7D80

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
