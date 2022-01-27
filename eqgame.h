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
#define __ExpectedVersionDate                                     "Feb  7 2022"
#define __ExpectedVersionTime                                     "15:01:33"
#define __ActualVersionDate_x                                      0x1408BD0B8
#define __ActualVersionTime_x                                      0x1408BD0A8
#define __ActualVersionBuild_x                                     0x1408A9EF8

// Memory Protection
#define __MemChecker0_x                                            0x1402E6590
#define __MemChecker1_x                                            0x1405D3740
#define __MemChecker2_x                                            0x14037ACD0 // unused (original was inlined)
#define __MemChecker3_x                                            0x14037AC00
#define __MemChecker4_x                                            0x1402B12C0
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
#define __do_loot_x                                                0x14024B050
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
#define __CastRay_x                                                0x140245A80
#define __CastRay2_x                                               0x140245AF0
#define __ConvertItemTags_x                                        0x1402697A0
#define __CleanItemTags_x                                          0x1400A7400
#define __CreateCascadeMenuItems_x                                 0x1401C8570
#define __DoesFileExist_x                                          0x1405D6D30
#define __EQGetTime_x                                              0x1405D32B0
#define __ExecuteCmd_x                                             0x14023D990
#define __FixHeading_x                                             0x1406F8D40
#define __FlushDxKeyboard_x                                        0x1403755A0
#define __get_bearing_x                                            0x1402455F0
#define __get_melee_range_x                                        0x140245DF0
#define __GetAnimationCache_x                                      0x1403F4430
#define __GetGaugeValueFromEQ_x                                    0x14052A670
#define __GetLabelFromEQ_x                                         0x14052C1B0
#define __GetXTargetType_x                                         0x1406FB760   // ExtendedTargetList::ExtendedTargetRoleName
#define __HandleMouseWheel_x                                       0x14037ADA0
#define __HeadingDiff_x                                            0x1406F8DA0
#define __HelpPath_x                                               0x140DEAF70   // Why?
#define __NewUIINI_x                                               0x14052A290   // Why?
#define __ProcessGameEvents_x                                      0x1402C0810
#define __ProcessKeyboardEvents_x                                  0x140377900
#define __ProcessMouseEvents_x                                     0x1402BFE80
#define __SaveColors_x                                             0x1401C83E0
#define __STMLToText_x                                             0x1406191C0
#define __WndProc_x                                                0x140378620
#define CMemoryMappedFile__SetFile_x                               0x14083AC90
#define DrawNetStatus_x                                            0x1402F68D0
#define Util__FastTime_x                                           0x1405D2E20
#define __eq_delete_x                                              0x1407034E0
#define __eq_new_x                                                 0x140703AE4
#define __CopyLayout_x                                             0x1402E0E50
#define __ThrottleFrameRate_x                                      0x1402A40B4
#define __ThrottleFrameRateEnd_x                                   0x1402A4118

////
// Section 4: Function Offsets
////

// CAAwnd
#define CAAWnd__ShowAbility_x                                      0x140388BA0
#define CAAWnd__Update_x                                           0x140387CE0
#define CAAWnd__UpdateSelected_x                                   0x140384C90

// CAdvancedLootWnd
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x1400C7260
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x1400C9F50
#define CAdvancedLootWnd__AddPlayerToList_x                        0x1408994E8
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x1400C2510

// AltAdvManager
#define AltAdvManager__GetCalculatedTimer_x                        0x1401D3010
#define AltAdvManager__IsAbilityReady_x                            0x1401D17D0
#define AltAdvManager__GetAAById_x                                 0x1401D1C30
#define AltAdvManager__CanTrainAbility_x                           0x1401D1CA0
#define AltAdvManager__CanSeeAbility_x                             0x1401D2140

// CharacterZoneClient
#define CharacterZoneClient__BardCastBard_x                        0x140107790
#define CharacterZoneClient__CalcAffectChange_x                    0x140105C20
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x140105F20
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x1400F8CC0
#define CharacterZoneClient__CharacterZoneClient_x                 0x14010B4F0
#define CharacterZoneClient__FindAffectSlot_x                      0x140104240
#define CharacterZoneClient__GetCurrentMod_x                       0x14012B1A0
#define CharacterZoneClient__GetCursorItemCount_x                  0x14011C670
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x140105980
#define CharacterZoneClient__GetFocusDurationMod_x                 0x1400EBF30
#define CharacterZoneClient__GetFocusReuseMod_x                    0x1400EEFC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x14011C720
#define CharacterZoneClient__GetItemCountWorn_x                    0x14011C3D0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x140105A10
#define CharacterZoneClient__GetMaxEffects_x                       0x1400FD9B0
#define CharacterZoneClient__GetModCap_x                           0x14012B090
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x1401058A0
#define CharacterZoneClient__HasSkill_x                            0x140118EB0
#define CharacterZoneClient__IsStackBlocked_x                      0x1401018B0
#define CharacterZoneClient__MakeMeVisible_x                       0x14011ABA0
#define CharacterZoneClient__NotifyPCAffectChange_x                0x140125FC0
#define CharacterZoneClient__RemovePCAffectex_x                    0x140103820

// CBankWnd
#define CBankWnd__WndNotification_x                                0x1403A7790

// CBarterWnd
#define CBarterWnd__WndNotification_x                              0x1403B36B0

// CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x1403ADC40
#define CBarterSearchWnd__UpdateInventoryList_x                    0x1403AB6E0

// CBazaarSearchWnd
#define CBazaarSearchWnd__HandleSearchResults_x                    0x1403B8620

// CButtonWnd
#define CButtonWnd__vftable_x                                      0x1408FD978

// CChatWindowManager
#define CChatWindowManager__GetRGBAFromIndex_x                     0x1403DFA70
#define CChatWindowManager__InitContextMenu_x                      0x1403D7150
#define CChatWindowManager__FreeChatWindow_x                       0x1403DE0F0
#define CChatWindowManager__SetLockedActiveChatWindow_x            0x1403DF670
#define CChatWindowManager__CreateChatWindow_x                     0x1403DE810

// ChatManagerClient
#define ChatManagerClient__Instance_x                              0x14012F990

// CChatWindow
#define CChatWindow__CChatWindow_x                                 0x1403E0670
#define CChatWindow__Clear_x                                       0x1403E1C80
#define CChatWindow__WndNotification_x                             0x1403E2390
#define CChatWindow__AddHistory_x                                  0x1403E1440

// CContextMenu
#define CContextMenu__AddMenuItem_x                                0x14062E350
#define CContextMenu__RemoveMenuItem_x                             0x14062E790
#define CContextMenu__RemoveAllMenuItems_x                         0x14062E7B0
#define CContextMenu__CheckMenuItem_x                              0x14062E860
#define CContextMenu__SetMenuItem_x                                0x14062E6B0
#define CContextMenu__AddSeparator_x                               0x14062E680

// CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x14062EEE0
#define CContextMenuManager__RemoveMenu_x                          0x14062EF70
#define CContextMenuManager__PopupMenu_x                           0x14062F090
#define CContextMenuManager__Flush_x                               0x14062EE50
#define CContextMenuManager__CreateDefaultMenu_x                   0x1403EDB90

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x1406822A0
#define CChatService__GetFriendName_x                              0x1406CC240

// CComboWnd
#define CComboWnd__DeleteAll_x                                     0x14062AA70
#define CComboWnd__Draw_x                                          0x140629D90
#define CComboWnd__GetCurChoice_x                                  0x14062A7E0  // unused
#define CComboWnd__GetListRect_x                                   0x14062A320
#define CComboWnd__GetTextRect_x                                   0x14062AB10
#define CComboWnd__InsertChoice_x                                  0x14062A4D0
#define CComboWnd__SetColors_x                                     0x14062A490
#define CComboWnd__SetChoice_x                                     0x14062A7C0
#define CComboWnd__GetItemCount_x                                  0x14062A800
#define CComboWnd__GetCurChoiceText_x                              0x14062A850  // unused
#define CComboWnd__GetChoiceText_x                                 0x14062A820
#define CComboWnd__InsertChoiceAtIndex_x                           0x14062A590

// CContainerWnd
#define CContainerWnd__HandleCombine_x                             0x1403EAE80
#define CContainerWnd__SetContainer_x                              0x1403EC870
#define CContainerWnd__vftable_x                                   0x1408CAF50

// CDisplay
#define CDisplay__cameraType_x                                     0x140D30B84
#define CDisplay__ZoneMainUI_x                                     0x1401C28D0
#define CDisplay__PreZoneMainUI_x                                  0x1401C28F0
#define CDisplay__CleanGameUI_x                                    0x1401C8160
#define CDisplay__GetClickedActor_x                                0x1401B95D0
#define CDisplay__GetUserDefinedColor_x                            0x1401B01F0
#define CDisplay__InitCharSelectUI_x                               0x1401C2210
#define CDisplay__ReloadUI_x                                       0x1401C1AF0
#define CDisplay__WriteTextHD2_x                                   0x1401B5430
#define CDisplay__TrueDistance_x                                   0x1401BD6A0
#define CDisplay__SetViewActor_x                                   0x1401B8E10
#define CDisplay__GetFloorHeight_x                                 0x1401B5760
#define CDisplay__SetRenderWindow_x                                0x1401B3E80
#define CDisplay__ToggleScreenshotMode_x                           0x1401B87C0
#define CDisplay__RealRender_World_x                               0x1401B2FD0

// CEditWnd
#define CEditBaseWnd__SetSel_x                                     0x1406550D0
#define CEditWnd__DrawCaret_x                                      0x140632C70  // unused
#define CEditWnd__EnsureCaretVisible_x                             0x140635320
#define CEditWnd__GetCaretPt_x                                     0x140633F80  // unused
#define CEditWnd__GetCharIndexPt_x                                 0x140633D10
#define CEditWnd__GetDisplayString_x                               0x140633BC0
#define CEditWnd__GetHorzOffset_x                                  0x140632120
#define CEditWnd__GetLineForPrintableChar_x                        0x1406351D0
#define CEditWnd__GetSelStartPt_x                                  0x140633FD0  // unused
#define CEditWnd__GetSTMLSafeText_x                                0x140633A00
#define CEditWnd__PointFromPrintableChar_x                         0x140634DE0
#define CEditWnd__ReplaceSelection_x                               0x140634920
#define CEditWnd__SelectableCharFromPoint_x                        0x140634F30
#define CEditWnd__SetEditable_x                                    0x1406340C0
#define CEditWnd__SetWindowText_x                                  0x1406336E0

// CEverQuest
#define CEverQuest__DoPercentConvert_x                             0x1402A7120
#define CEverQuest__ClickedPlayer_x                                0x140296420
#define CEverQuest__CreateTargetIndicator_x                        0x1402BCE80
#define CEverQuest__DeleteTargetIndicator_x                        0x1402BCF10
#define CEverQuest__DoTellWindow_x                                 0x14012FA90 // ChatManagerClient__DisplayTellText
#define CEverQuest__OutputTextToLog_x                              0x14012FD70 // ChatManagerClient__WriteTextToLogFile
#define CEverQuest__DropHeldItemOnGround_x                         0x14028A3D0
#define CEverQuest__dsp_chat_x                                     0x140130180 // ChatManagerClient__DisplayChatText
#define CEverQuest__trimName_x                                     0x1402B6D50
#define CEverQuest__Emote_x                                        0x1402A7949
#define CEverQuest__EnterZone_x                                    0x1402A0480
#define CEverQuest__GetBodyTypeDesc_x                              0x1402AE250
#define CEverQuest__GetClassDesc_x                                 0x1402AE860
#define CEverQuest__GetClassThreeLetterCode_x                      0x1402AEE20
#define CEverQuest__GetDeityDesc_x                                 0x1402BAF00
#define CEverQuest__GetLangDesc_x                                  0x1402AEFE0
#define CEverQuest__GetRaceDesc_x                                  0x1402AE830
#define CEverQuest__InterpretCmd_x                                 0x1402BB600
#define CEverQuest__LeftClickedOnPlayer_x                          0x14028EF60
#define CEverQuest__LMouseUp_x                                     0x14028CB90
#define CEverQuest__RightClickedOnPlayer_x                         0x14028FC80
#define CEverQuest__RMouseUp_x                                     0x14028E1F0
#define CEverQuest__SetGameState_x                                 0x14028A150
#define CEverQuest__UPCNotificationFlush_x                         0x1402B6C10 // CEverQuest__UniversalChatProxyNotificationFlush
#define CEverQuest__IssuePetCommand_x                              0x1402B06F0
#define CEverQuest__ReportSuccessfulHeal_x                         0x1402A8940
#define CEverQuest__ReportSuccessfulHit_x                          0x1402A9670

// CGaugeWnd
#define CGaugeWnd__CalcFillRect_x                                  0x140400390
#define CGaugeWnd__CalcLinesFillRect_x                             0x1404003F0
#define CGaugeWnd__Draw_x                                          0x1403FF900

// CGuild
#define CGuild__FindMemberByName_x                                 0x1400E9620
#define CGuild__GetGuildName_x                                     0x1400E7680
#define CGuild__GetGuildIndex_x                                    0x1400E7F20

// CHotButtonWnd
#define CHotButtonWnd__DoHotButton_x                               0x140420970

//CHotButton
#define CHotButton__SetButtonSize_x                                0x1402D3890
#define CHotButton__SetCheck_x                                     0x1402D3410

// CInvSlotMgr
#define CInvSlotMgr__FindInvSlot_x                                 0x14042FF60
#define CInvSlotMgr__MoveItem_x                                    0x14042E690
#define CInvSlotMgr__SelectSlot_x                                  0x140430080

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x14042CA30
#define CInvSlot__SliderComplete_x                                 0x140428DA0
#define CInvSlot__GetItemBase_x                                    0x140428540
#define CInvSlot__UpdateItem_x                                     0x140428750

// CInvSlotWnd
#define CInvSlotWnd__CInvSlotWnd_x                                 0x140430FE0
#define CInvSlotWnd__HandleLButtonUp_x                             0x140431AD0

// CItemDisplayWnd
#define CItemDisplayWnd__SetItem_x                                 0x14044E3B0
#define CItemDisplayWnd__UpdateStrings_x                           0x14044DC90
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x140440670
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x140440D70
#define CItemDisplayWnd__RequestConvertItem_x                      0x14044F2C0

// CSpellDisplayWnd
#define CSpellDisplayWnd__SetSpell_x                               0x140523230
#define CSpellDisplayWnd__UpdateStrings_x                          0x1405231B0

// CWndDisplayManager
#define CWndDisplayManager__FindWindow_x                           0x140562310

// CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x1404567B0

// CKeyRingWnd
#define CKeyRingWnd__ExecuteRightClick_x                           0x140173060

// CLabel
#define CLabel__UpdateText_x                                       0x14045D850

// CListWnd
#define CListWnd__CListWnd_x                                       0x1405F6730
#define CListWnd__dCListWnd_x                                      0x1405F69C0
#define CListWnd__vftable_x                                        0x1408FCD88
#define CListWnd__AddColumn_x                                      0x1405FD050
#define CListWnd__AddColumn1_x                                     0x1405FD100
#define CListWnd__AddLine_x                                        0x1405FD4C0
#define CListWnd__AddString_x                                      0x1405FD2D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x1405FCCB0
#define CListWnd__CalculateVSBRange_x                              0x1405FC9C0
#define CListWnd__ClearSel_x                                       0x1405FE350
#define CListWnd__ClearAllSel_x                                    0x1405FE3B0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x1405FF140
#define CListWnd__Compare_x                                        0x1405FC010
#define CListWnd__Draw_x                                           0x1405F6B40
#define CListWnd__DrawColumnSeparators_x                           0x1405FA7C0
#define CListWnd__DrawHeader_x                                     0x1405FAF20
#define CListWnd__DrawItem_x                                       0x1405FB5E0
#define CListWnd__DrawLine_x                                       0x1405FAA60
#define CListWnd__DrawSeparator_x                                  0x1405FA880
#define CListWnd__EnableLine_x                                     0x1405F9C00
#define CListWnd__EnsureVisible_x                                  0x1405FF040
#define CListWnd__ExtendSel_x                                      0x1405FE1D0
#define CListWnd__GetColumnTooltip_x                               0x1405F9670  // unused
#define CListWnd__GetColumnMinWidth_x                              0x1405F96F0
#define CListWnd__GetColumnWidth_x                                 0x1405F95E0
#define CListWnd__GetCurSel_x                                      0x1405F8E40
#define CListWnd__GetItemAtPoint_x                                 0x1405FA020
#define CListWnd__GetItemAtPoint1_x                                0x1405FA1A0
#define CListWnd__GetItemData_x                                    0x1405F8EE0
#define CListWnd__GetItemHeight_x                                  0x1405F9380
#define CListWnd__GetItemIcon_x                                    0x1405F9050
#define CListWnd__GetItemRect_x                                    0x1405F9D30
#define CListWnd__GetItemText_x                                    0x1405F8F30
#define CListWnd__GetSelList_x                                     0x1405FE410
#define CListWnd__GetSeparatorRect_x                               0x1405FA560
#define CListWnd__InsertLine_x                                     0x1405FDCD0
#define CListWnd__RemoveLine_x                                     0x1405FDFB0
#define CListWnd__SetColors_x                                      0x1405FC9A0
#define CListWnd__SetColumnJustification_x                         0x1405FC5A0
#define CListWnd__SetColumnLabel_x                                 0x1405FD260
#define CListWnd__SetColumnWidth_x                                 0x1405FC4A0
#define CListWnd__SetCurSel_x                                      0x1405FE110
#define CListWnd__SetItemColor_x                                   0x1405FEBB0
#define CListWnd__SetItemData_x                                    0x1405FEB70
#define CListWnd__SetItemText_x                                    0x1405FE670
#define CListWnd__ShiftColumnSeparator_x                           0x1405FC6A0
#define CListWnd__Sort_x                                           0x1405FC300
#define CListWnd__ToggleSel_x                                      0x1405FE140
#define CListWnd__SetColumnsSizable_x                              0x1405FC7D0
#define CListWnd__SetItemWnd_x                                     0x1405FEA00
#define CListWnd__GetItemWnd_x                                     0x1405F90C0
#define CListWnd__SetItemIcon_x                                    0x1405FE720
#define CListWnd__CalculateCustomWindowPositions_x                 0x1405FCE20
#define CListWnd__SetVScrollPos_x                                  0x1405FC470

// CMapViewWnd
#define CMapViewWnd__CMapViewWnd_x                                 0x140477CC0

// MapViewMap
#define MapViewMap__MapViewMap_x                                   0x140471E00
#define MapViewMap__dMapViewMap_x                                  0x140471F30
#define MapViewMap__vftable_x                                      0x1408D68A0
#define MapViewMap__Clear_x                                        0x140476150
#define MapViewMap__SetZoom_x                                      0x14047D380
#define MapViewMap__HandleLButtonDown_x                            0x140472020
#define MapViewMap__GetWorldCoordinates_x                          0x140475BC0

// CMerchantWnd
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x14049F920    // CMerchantWnd__PurchasePageHandler__DisplayBuyOrSellPrice
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x1404A0380
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x1404A0BD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x14049DEE0
#define CMerchantWnd__SelectBuySellSlot_x                          0x1404AB910
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x14049F470

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x14067E880
#define CPacketScrambler__hton_x                                   0x14067E870

// CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x140625DF0
#define CSidlManagerBase__CreatePageWnd_x                          0x140625550
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x140620550
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x1406204A0
#define CSidlManagerBase__FindAnimation1_x                         0x140620950
#define CSidlManagerBase__FindScreenPieceTemplate_x                0x140620E10
#define CSidlManagerBase__FindScreenPieceTemplate1_x               0x140620BC0
#define CSidlManagerBase__CreateLabel_x                            0x140517A30
#define CSidlManagerBase__CreateXWndFromTemplate_x                 0x140624300
#define CSidlManagerBase__CreateXWndFromTemplate1_x                0x140855530
#define CSidlManagerBase__CreateXWnd_x                             0x140624660

// CSidlManager
#define CSidlManager__CreateHotButtonWnd_x                         0x140517F10
#define CSidlManager__CreateXWnd_x                                 0x1405175C0

// CSidlScreenWnd
#define CSidlScreenWnd__CalculateHSBRange_x                        0x14061BA70
#define CSidlScreenWnd__CalculateVSBRange_x                        0x14061B940
#define CSidlScreenWnd__ConvertToRes_x                             0x14064EE20 // LayoutTools::ConvertToRes
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x14061B1F0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x14061AEF0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x14061AFB0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x14061B070
#define CSidlScreenWnd__DrawSidlPiece_x                            0x14061C200
#define CSidlScreenWnd__EnableIniStorage_x                         0x14061C7E0
#define CSidlScreenWnd__GetChildItem_x                             0x14061C730
#define CSidlScreenWnd__GetSidlPiece_x                             0x14085F230
#define CSidlScreenWnd__HandleLButtonUp_x                          0x140607E50 // CXWnd::HandleLButtonUp
#define CSidlScreenWnd__Init1_x                                    0x14061A870
#define CSidlScreenWnd__LoadIniInfo_x                              0x14061C840
#define CSidlScreenWnd__LoadIniListWnd_x                           0x14061D6C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x140619910
#define CSidlScreenWnd__m_layoutCopy_x                             0x140E1E118
#define CSidlScreenWnd__StoreIniInfo_x                             0x14061D0F0
#define CSidlScreenWnd__StoreIniVis_x                              0x14061D540
#define CSidlScreenWnd__vftable_x                                  0x1408FDDB8
#define CSidlScreenWnd__WndNotification_x                          0x14061C090

// CSkillMgr   a.k.a. SkillManager
#define CSkillMgr__IsAvailable_x                                   0x140357BD0 // SkillManager::CanUseSkill
#define CSkillMgr__GetSkillCap_x                                   0x140357E10 // SkillManager::GetSkillLimit
#define CSkillMgr__GetNameToken_x                                  0x140357240
#define CSkillMgr__IsActivatedSkill_x                              0x140357330
#define CSkillMgr__IsCombatSkill_x                                 0x1403572A0

// CSliderWnd
#define CSliderWnd__GetValue_x                                     0x140630320
#define CSliderWnd__SetValue_x                                     0x1406300D0
#define CSliderWnd__SetNumTicks_x                                  0x140630120

// CSpellBookWnd
#define CSpellBookWnd__MemorizeSet_x                               0x14051F300

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x14063B190
#define CStmlWnd__CalculateHSBRange_x                              0x14060A2E0
#define CStmlWnd__CalculateVSBRange_x                              0x14063C370
#define CStmlWnd__CanBreakAtCharacter_x                            0x140642A90
#define CStmlWnd__FastForwardToEndOfTag_x                          0x140643830
#define CStmlWnd__ForceParseNow_x                                  0x14063B970
#define CStmlWnd__GetNextTagPiece_x                                0x1406429C0
#define CStmlWnd__GetVisibleText_x                                 0x14063B990
#define CStmlWnd__InitializeWindowVariables_x                      0x140643630
#define CStmlWnd__MakeStmlColorTag_x                               0x14063A840
#define CStmlWnd__MakeWndNotificationTag_x                         0x14063A890
#define CStmlWnd__SetSTMLText_x                                    0x140639100
#define CStmlWnd__StripFirstSTMLLines_x                            0x140644CE0
#define CStmlWnd__UpdateHistoryString_x                            0x140643A70

// CTabWnd
#define CTabWnd__Draw_x                                            0x140637D30
#define CTabWnd__DrawCurrentPage_x                                 0x140638820
#define CTabWnd__DrawTab_x                                         0x140638410
#define CTabWnd__GetCurrentPage_x                                  0x1406372A0
#define CTabWnd__GetCurrentTabIndex_x                              0x140637290
#define CTabWnd__GetPageFromTabIndex_x                             0x140638310
#define CTabWnd__GetPageInnerRect_x                                0x140637540
#define CTabWnd__GetTabInnerRect_x                                 0x140637460
#define CTabWnd__GetTabRect_x                                      0x1406372E0
#define CTabWnd__InsertPage_x                                      0x140637810
#define CTabWnd__RemovePage_x                                      0x1406379E0
#define CTabWnd__SetPage_x                                         0x1406375E0
#define CTabWnd__SetPageRect_x                                     0x140637BE0
#define CTabWnd__UpdatePage_x                                      0x140638180

// CPageWnd
#define CPageWnd__FlashTab_x                                       0x140636C10
#define CPageWnd__SetTabText_x                                     0x140636BA0

// CTextOverlay
#define CTextOverlay__DisplayText_x                                0x1400DFDC0  // CBroadcast::BroadcastString
#define CBroadcast__Get_x                                          0x1400DFB70


// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x140604040
#define CTextureFont__DrawWrappedText1_x                           0x140603F50
#define CTextureFont__DrawWrappedText2_x                           0x140604170
#define CTextureFont__GetTextExtent_x                              0x140604420

// CXMLDataManager
#define CXMLDataManager__GetXMLData_x                              0x14064B260

// CXMLSOMDocumentBase
#define CXMLSOMDocumentBase__XMLRead_x                             0x1405E98C0

// CXStr
#define CXStr__gFreeLists_x                                        0x140CA3D60
#define CXStr__gCXStrAccess_x                                      0x140E1D5C0

// CXWnd
#define CXWnd__BringToTop_x                                        0x14060C440
#define CXWnd__ClrFocus_x                                          0x14060BC60
#define CXWnd__Destroy_x                                           0x14060BD40
#define CXWnd__DoAllDrawing_x                                      0x140607220
#define CXWnd__DrawChildren_x                                      0x1406071D0
#define CXWnd__DrawColoredRect_x                                   0x140607930
#define CXWnd__DrawTooltip_x                                       0x140605740
#define CXWnd__DrawTooltipAtPoint_x                                0x140605800
#define CXWnd__GetBorderFrame_x                                    0x1406075A0
#define CXWnd__GetChildItem_x                                      0x14060C6E0
#define CXWnd__GetChildWndAt_x                                     0x14060C500
#define CXWnd__GetClientClipRect_x                                 0x14060A030
#define CXWnd__GetRelativeRect_x                                   0x14060A4B0
#define CXWnd__GetScreenClipRect_x                                 0x14060A160
#define CXWnd__GetScreenRect_x                                     0x14060A3C0
#define CXWnd__GetTooltipRect_x                                    0x1406079F0
#define CXWnd__IsActive_x                                          0x1406082B0
#define CXWnd__IsDescendantOf_x                                    0x14060B020
#define CXWnd__IsReallyVisible_x                                   0x14060B050
#define CXWnd__IsType_x                                            0x14060CE70
#define CXWnd__Minimize_x                                          0x14060B8A0
#define CXWnd__ProcessTransition_x                                 0x14060BE60
#define CXWnd__Refade_x                                            0x14060B510
#define CXWnd__Resize_x                                            0x14060B7F0
#define CXWnd__Right_x                                             0x14060C1E0
#define CXWnd__SetFocus_x                                          0x14060BC10
#define CXWnd__SetFont_x                                           0x14060BCA0
#define CXWnd__SetKeyTooltip_x                                     0x14060CBF0
#define CXWnd__SetMouseOver_x                                      0x140608DB0
#define CXWnd__SetParent_x                                         0x14060AC40
#define CXWnd__StartFade_x                                         0x14060AEA0
#define CXWnd__vftable_x                                           0x1408FD500
#define CXWnd__CXWnd_x                                             0x1406046F0
#define CXWnd__dCXWnd_x                                            0x140604D00

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x140650000

// CXWndManager
#define CXWndManager__DrawCursor_x                                 0x14060F920
#define CXWndManager__DrawWindows_x                                0x14060FA60
#define CXWndManager__GetKeyboardFlags_x                           0x140612D40
#define CXWndManager__HandleKeyboardMsg_x                          0x140612810
#define CXWndManager__RemoveWnd_x                                  0x140613120
#define CXWndManager__RemovePendingDeletionWnd_x                   0x1406138C0

// CDBStr
#define CDBStr__GetString_x                                        0x1401AEB70

// CharacterZoneClient
#define CharacterZoneClient__CanUseItem_x                          0x14011DCD0
#define CharacterZoneClient__CastSpell_x                           0x1400FE4B0
#define CharacterZoneClient__Cur_HP_x                              0x140114A80
#define CharacterZoneClient__Cur_Mana_x                            0x14011DA80
#define CharacterZoneClient__GetAdjustedSkill_x                    0x140118C00
#define CharacterZoneClient__GetBaseSkill_x                        0x140119F20  // CharacterZoneClient::Skill
#define CharacterZoneClient__GetCastingTimeModifier_x              0x140102130
#define CharacterZoneClient__GetEnduranceRegen_x                   0x140124BE0
#define CharacterZoneClient__GetFocusCastingTimeModifier_x         0x1400EEAE0
#define CharacterZoneClient__GetFocusRangeModifier_x               0x1400EEC80
#define CharacterZoneClient__GetHPRegen_x                          0x1401244E0
#define CharacterZoneClient__GetManaRegen_x                        0x140125220
#define CharacterZoneClient__GetPCSpellAffect_x                    0x140103210
#define CharacterZoneClient__Max_Endurance_x                       0x140309DB0  // PcZoneClient::Max_Endurance
#define CharacterZoneClient__Max_HP_x                              0x140114840
#define CharacterZoneClient__Max_Mana_x                            0x140309B50  // PcZoneclient::Max_Mana
#define CharacterZoneClient__SpellDuration_x                       0x140102CF0
#define CharacterZoneClient__TotalEffect_x                         0x140106F00
#define CharacterZoneClient__UseSkill_x                            0x140126880

// ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x1406B0900

// CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x1400F79A0
#define CCharacterListWnd__EnterWorld_x                            0x1400F7350
#define CCharacterListWnd__Quit_x                                  0x1400F6EB0
#define CCharacterListWnd__UpdateList_x                            0x1400F7510

// ItemClient
#define ItemBase__CanGemFitInSlot_x                                0x140680070
#define ItemBase__CreateItemTagString_x                            0x140680A80
#define ItemBase__GetImageNum_x                                    0x140682D00
#define ItemBase__GetItemValue_x                                   0x140684830
#define ItemBase__IsEmpty_x                                        0x140686460
#define ItemBase__IsKeyRingItem_x                                  0x140686D10
#define ItemBase__ValueSellMerchant_x                              0x14068B0C0
#define ItemClient__CanDrop_x                                      0x1402DA560
#define ItemClient__CanGoInBag_x                                   0x1402DA680
#define ItemClient__CreateItemClient_x                             0x1402D93C0
#define ItemClient__dItemClient_x                                  0x1402D92F0

// EQ_LoadingS
#define EQ_LoadingS__SetProgressBar_x                              0x1401D4460
#define EQ_LoadingS__Array_x                                       0x140B97CB0

// PcClient
#define PcBase__GetAlternateAbilityId_x                            0x1406968A0
#define PcBase__GetCombatAbility_x                                 0x140696F40
#define PcBase__GetCombatAbilityTimer_x                            0x140696FE0
#define PcBase__GetItemContainedRealEstateIds_x                    0x140697710
#define PcBase__GetNonArchivedOwnedRealEstates_x                   0x140697F80
#define PcClient__AlertInventoryChanged_x                          0x1402FED50
#define PcClient__GetConLevel_x                                    0x1402FF590  // PcClient::ConsiderTarget
#define PcClient__HasLoreItem_x                                    0x140300000
#define PcZoneClient__GetItemRecastTimer_x                         0x14030D800
#define PcZoneClient__RemoveMyAffect_x                             0x140311A40

// EQGroundItemListManager
#define EQItemList__EQItemList_x                                   0x140242330  // EQGroundItem::EQGroundItem
#define EQItemList__add_item_x                                     0x140242A50  // EQGroundItemListManager::Add
#define EQItemList__delete_item_x                                  0x140242AB0  // EQGroundItemListManager::Delete
#define EQItemList__FreeItemList_x                                 0x1402429A0  // EQGroundItemListManager::Clear

#define EQItemList__add_object_x                                   0x14027D040  // EQPlacedItemListManager::Add

// CTribute
#define CTribute__GetActiveFavorCost_x                             0x1401A97F0

// PlayerClient
#define PlayerBase__CanSee_x                                       0x1406F6E40
#define PlayerBase__CanSee1_x                                      0x1406F6F10
#define PlayerBase__GetVisibilityLineSegment_x                     0x1406F6B10
#define PlayerBase__HasProperty_x                                  0x1406F69C0
#define PlayerBase__IsTargetable_x                                 0x1406F7070
#define PlayerClient__ChangeBoneStringSprite_x                     0x140327E70
#define PlayerClient__dPlayerClient_x                              0x140318950
#define PlayerClient__GetPcClient_x                                0x140325F90
#define PlayerClient__PlayerClient_x                               0x140318750
#define PlayerClient__SetNameSpriteState_x                         0x14031E010
#define PlayerClient__SetNameSpriteTint_x                          0x14031F070
#define PlayerZoneClient__ChangeHeight_x                           0x140339F00
#define PlayerZoneClient__DoAttack_x                               0x140335600
#define PlayerZoneClient__GetLevel_x                               0x14033CBF0
#define PlayerZoneClient__IsValidTeleport_x                        0x14027E8F0
#define PlayerZoneClient__LegalPlayerRace_x                        0x1401CA860

// PlayerManagerClient
#define PlayerManagerClient__GetSpawnByID_x                        0x14032EB20  // ... GetPlayerById
#define PlayerManagerClient__GetSpawnByName_x                      0x14032EBE0  // ... GetPlayerByName
#define PlayerManagerClient__GetPlayerFromPartialName_x            0x14032EC90
#define PlayerManagerClient__CreatePlayer_x                        0x14032E650
#define PlayerManagerBase__PrepForDestroyPlayer_x                  0x1406F5C80

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x1402DEBD0
#define pinstKeyPressHandler_x                                     0x140DEC684
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x1402DED50
#define KeypressHandler__AttachKeyToEqCommand_x                    0x1402DECF0
#define KeypressHandler__ClearCommandStateArray_x                  0x1402E01C0  // KeypressHandler::Flush
#define KeypressHandler__HandleKeyDown_x                           0x1402E0210
#define KeypressHandler__HandleKeyUp_x                             0x1402E02F0
#define KeypressHandler__SaveKeymapping_x                          0x1402E0960  // FileKeymappingSave

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x1406AE1D0  // PlayerPointManager::GetPoints

// StringTable
#define StringTable__getString_x                                   0x1406A80F0

// PcZoneClient
#define PcZoneClient__doCombatAbility_x                            0x14030D0B0  // PcZoneClient::ActivateMeleeCombatAbility
#define PcZoneClient__DestroyHeldItemOrMoney_x                     0x14030AC70
#define PcZoneClient__GetPcSkillLimit_x                            0x140311570
#define PcZoneClient__RemovePetEffect_x                            0x140311E50
#define PcZoneClient__HasAlternateAbility_x                        0x140309940
#define PcZoneClient__CanEquipItem_x                               0x14030A0D0
#define PcZoneClient__GetItemByID_x                                0x14030DFE0
#define PcZoneClient__RemoveBuffEffect_x                           0x140311E50
#define PcZoneClient__BandolierSwap_x                              0x14030B320
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x14030D770

// Doors
#define EQSwitch__UseSwitch_x                                      0x140284D30

// IconCache
#define IconCache__GetIcon_x                                       0x1403F3DC0

// CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x1403E9B50
#define CContainerMgr__CloseContainer_x                            0x1403E9EB0
#define CContainerMgr__OpenExperimentContainer_x                   0x1403EAB60

// CQuantityWnd
#define CQuantityWnd__Open_x                                       0x1404DCB70

// CHelpWnd
#define CHelpWnd__SetFile_x                                        0x1402D1950

// CLootWnd
#define CLootWnd__LootAll_x                                        0x140466860
#define CLootWnd__RequestLootSlot_x                                0x140465990

// EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x140204DA0
#define EQ_Spell__SpellAffects_x                                   0x1402053D0
#define EQ_Spell__SpellAffectBase_x                                0x140205090
#define EQ_Spell__GetSpellAffectBySlot_x                           0x14010AE00
#define EQ_Spell__GetSpellAffectByIndex_x                          0x14010ADB0
#define EQ_Spell__IsSPAStacking_x                                  0x140206680
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x140205640
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x1402066B0
#define __IsResEffectSpell_x                                       0x14010A730

// EQSpellStrings
#define EQSpellStrings__GetString_x                                0x1400E5B60

// CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x140539F80  // CTargetWnd::WhoCast
#define CTargetWnd__WndNotification_x                              0x140539590
#define CTargetWnd__RefreshTargetBuffs_x                           0x140539990
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x140538210

// CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x14053F260  // CTaskWnd::UpdateTimes
#define CTaskWnd__ConfirmAbandonTask_x                             0x140542AE0

// CTaskManager
#define CTaskManager__GetEntry_x                                   0x1401A6D50
#define CTaskManager__HandleMessage_x                              0x1401A46E0
#define CTaskManager__GetTaskStatus_x                              0x1401A6E20
#define CTaskManager__GetElementDescription_x                      0x1401A6EA0

// EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x1401FED10
#define EqSoundManager__PlayScriptMp3_x                            0x1401FEFB0
#define EqSoundManager__SoundAssistPlay_x                          0x14035CBA0  // SoundAsset::Play
#define EqSoundManager__WaveInstancePlay_x                         0x14035BF90  // WaveInstance::Play

// CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x140191B00

// CTextureAnimation
#define CTextureAnimation__Draw_x                                  0x140636130
#define CTextureAnimation__SetCurCell_x                            0x140635E90

// FreeTargetTracker
#define FreeTargetTracker__CastSpell_x                             0x1402CE9A0

// CharacterBase
#define CharacterBase__GetItemByGlobalIndex_x                      0x1406C9E40
#define CharacterBase__GetItemByGlobalIndex1_x                     0x1406C9EC0
#define CharacterBase__IsExpansionFlag_x                           0x14023BF70

// CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x1403CAA80
#define CCastSpellWnd__IsBardSongPlaying_x                         0x1403CB590
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x1403CB670

// messages
#define msg_spell_worn_off_x                                       0x140231440
#define msg_new_text_x                                             0x140222AA0
#define __msgTokenTextParam_x                                      0x140234070
#define msgTokenText_x                                             0x140234480

// SpellManager
#define Spellmanager__LoadTextSpells_x                             0x140361F80
#define SpellManager__GetSpellByGroupAndRank_x                     0x140361490

// CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x 0x1406FC0E0

// CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x14045DCB0

// CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x1403EEE50
#define CCursorAttachment__AttachToCursor1_x                       0x1403EEF00
#define CCursorAttachment__Deactivate_x                            0x1403F08A0

// CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__CreateTexture_x                     0x1406496D0
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x140649FF0
#define CEQSuiteTextureLoader__GetTexture_x                        0x140649B40

// CFindItemWnd
#define CFindItemWnd__WndNotification_x                            0x14016BF00
#define CFindItemWnd__Update_x                                     0x14016CD10
#define CFindItemWnd__PickupSelectedItem_x                         0x14016A3B0

// LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x1401780C0
#define LootFiltersManager__GetItemFilterData_x                    0x140177800
#define LootFiltersManager__RemoveItemLootFilter_x                 0x140177840
#define LootFiltersManager__SetItemLootFilter_x                    0x140177AD0

// COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x1404C82A0

// CResolutionHandler
#define CResolutionHandler__UpdateResolution_x                     0x140702F20
#define CResolutionHandler__GetWindowedStyle_x                     0x140355F20

// CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x1403E5D00

// CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x1406CDBB0  // Rename..?
#define CDistillerInfo__Instance_x                                 0x1406CDCC0  // ItemDistillerManager__GetInstance

// CGroupWnd
#define CGroupWnd__WndNotification_x                               0x14040C1B0
#define CGroupWnd__UpdateDisplay_x                                 0x14040B450

// ItemBase
#define ItemBase__IsLore_x                                         0x140686DE0
#define ItemBase__IsLoreEquipped_x                                 0x140686F50

#define MultipleItemMoveManager__ProcessMove_x                     0x1402F1BF0

// EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x14027CF60
#define EQPlacedItemManager__GetItemByGuid_x                       0x14027D100
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x14027D150

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140347FD0

// FactionManagerClient
#define FactionManagerClient__Instance_x                           0x1401453D0
#define FactionManagerClient__HandleFactionMessage_x               0x140145CD0
#define FactionManagerClient__GetFactionStanding_x                 0x140146B30
#define FactionManagerClient__GetMaxFaction_x                      0x140146B30
#define FactionManagerClient__GetMinFaction_x                      0x140146AA0

// AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x1400CDB30

// ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x140154880

// MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x1401DCAC0
#define MercenaryAlternateAdvancementManagerClient__BuyAbility_x   0x1401DD7A0
#define CAltAbilityData__GetMercCurrentRank_x                      0x1401DDBA0  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxOwnedGroupRank
#define CAltAbilityData__GetMercMaxRank_x                          0x1401DDB20  // MercenaryAlternateAdvancementManagerClient::GetMercenaryMaxGroupRank

// CTargetManager
#define CTargetManager__Get_x                                      0x140366400

// RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x140347FD0

// EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x140242920

// KeyCombo
#define KeyCombo__GetTextDescription_x                             0x1405E5450

// CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x1400A69B0

// ZoneGuideManagerClient
#define ZoneGuideManagerClient__Instance_x                         0x14037BA60

// AchievementManager
#define AchievementManager__Instance_x                             0x1400A7D80

#if __has_include("../private/eqgame-private.h")
#include "../private/eqgame-private.h"
#endif
