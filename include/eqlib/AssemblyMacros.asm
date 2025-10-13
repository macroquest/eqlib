
%ifdef ARCH_X64
; Expands into a function that implements a vtable function. It will jump to the original function in the parent table
%macro make_override 3
	global %2
	%2:
		mov rax, [rel %3]
		jmp [rax + %1]

%endmacro

; Expand into functions that are referenced by the vtable. These functions will call into the parent vtable.
; param 1: name of class  e.g. CItemDisplayWnd
; param 2: symbol of our vtable snapshot
%macro expand_cxwnd_overrides 2
	make_override 0x0, ?IsValid@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA_NXZ, %2
	; intentionally skipped destructor because we can't make this one ourselves.
	make_override 0x10, ?GetWndClassName@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAPEBDXZ, %2
	make_override 0x18, ?DrawNC@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAHXZ, %2
	make_override 0x20, ?Draw@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x28, ?PostDraw@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x30, ?DrawCursor@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@AEBVCXRect@3@AEA_N@Z, %2
	make_override 0x38, ?DrawChildItem@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAHPEBVCXWnd@3@PEAX@Z, %2
	make_override 0x40, ?DrawCaret@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAHXZ, %2
	make_override 0x48, ?DrawBackground@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAHXZ, %2
	make_override 0x50, ?DrawTooltip@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAHPEBVCXWnd@3@@Z, %2
	make_override 0x58, ?DrawTooltipAtPoint@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAHAEBVCXPoint@3@AEBVCXStr@3@@Z, %2
	make_override 0x60, ?GetMinimizedRect@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXRect@3@XZ, %2
	make_override 0x68, ?DrawTitleBar@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAHAEBVCXRect@3@@Z, %2
	make_override 0x70, ?SetZLayer@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXH@Z, %2
	make_override 0x78, ?GetCursorToDisplay@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAPEAUHICON__@@XZ, %2
	make_override 0x80, ?HandleLButtonDown@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0x88, ?HandleLButtonUp@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0x90, ?HandleLButtonHeld@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0x98, ?HandleLButtonUpAfterHeld@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0xa0, ?HandleRButtonDown@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0xa8, ?HandleRButtonUp@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0xb0, ?HandleRButtonHeld@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0xb8, ?HandleRButtonUpAfterHeld@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0xc0, ?HandleWheelButtonDown@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0xc8, ?HandleWheelButtonUp@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0xd0, ?HandleMouseMove@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@I@Z, %2
	make_override 0xd8, ?HandleWheelMove@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@HI@Z, %2
	make_override 0xe0, ?HandleKeyboardMsg@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHII_N@Z, %2
	make_override 0xe8, ?HandleMouseLeave@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0xf0, ?OnDragDrop@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHPEAUSDragDropInfo@3@@Z, %2
	make_override 0xf8, ?GetDragDropCursor@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAPEAUHICON__@@PEAUSDragDropInfo@3@@Z, %2
	make_override 0x100, ?QueryDropOK@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA_NPEAUSDragDropInfo@3@@Z, %2
	make_override 0x108, ?OnClickStick@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHPEAVCClickStickInfo@3@I_N@Z, %2
	make_override 0x110, ?GetClickStickCursor@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAPEAUHICON__@@PEAVCClickStickInfo@3@@Z	, %2
	make_override 0x118, ?QueryClickStickDropOK@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA_NPEAVCClickStickInfo@3@@Z, %2
	make_override 0x120, ?WndNotification@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHPEAVCXWnd@3@IPEAX@Z, %2
	make_override 0x128, ?OnWndNotification@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x130, ?Activate@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x138, ?Deactivate@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x140, ?OnShow@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x148, ?OnMove@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXRect@3@@Z, %2
	make_override 0x150, ?OnResize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHHH@Z, %2
	make_override 0x158, ?OnBeginMoveOrResize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x160, ?OnCompleteMoveOrResize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x168, ?OnMinimizeBox@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x170, ?OnMaximizeBox@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x178, ?OnTileBox@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x180, ?OnTile@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x188, ?OnSetFocus@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHPEAVCXWnd@3@@Z, %2
	make_override 0x190, ?OnKillFocus@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHPEAVCXWnd@3@@Z, %2
	make_override 0x198, ?OnProcessFrame@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x1a0, ?OnVScroll@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHW4EScrollCode@3@H@Z, %2
	make_override 0x1a8, ?OnHScroll@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHW4EScrollCode@3@H@Z, %2
	make_override 0x1b0, ?OnBroughtToTop@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ	, %2
	make_override 0x1b8, ?OnActivate@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHPEAVCXWnd@3@@Z, %2
	make_override 0x1c0, ?Show@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAH_N00@Z, %2
	make_override 0x1c8, ?AboutToShow@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAA_NXZ, %2
	make_override 0x1d0, ?AboutToHide@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAA_NXZ, %2
	make_override 0x1d8, ?RequestDockInfo@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHIPEAVCXWnd@3@PEAVCXRect@3@@Z, %2
	make_override 0x1e0, ?GetTooltip@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXStr@3@XZ, %2
	make_override 0x1e8, ?ClickThroughMenuItemTriggered@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x1f0, ?SetLocked@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAX_N@Z, %2
	make_override 0x1f8, ?HitTest@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAHAEBVCXPoint@3@PEAH@Z, %2
	make_override 0x200, ?GetHitTestRect@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXRect@3@H@Z, %2
	make_override 0x208, ?GetInnerRect@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXRect@3@XZ, %2
	make_override 0x210, ?GetClientRect@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXRect@3@XZ, %2
	make_override 0x218, ?GetClientClipRect@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXRect@3@XZ, %2
	make_override 0x220, ?GetMinSize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXSize@3@_N@Z, %2
	make_override 0x228, ?GetMaxSize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXSize@3@_N@Z, %2
	make_override 0x230, ?GetUntileSize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA?AVCXSize@3@XZ, %2
	make_override 0x238, ?IsPointTransparent@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA_NAEBVCXPoint@3@@Z, %2
	make_override 0x240, ?ShouldProcessChildrenFrames@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA_NXZ, %2
	make_override 0x248, ?ShouldProcessControllerFrame@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA_NXZ, %2
	make_override 0x250, ?SetDrawTemplate@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXPEAVCXWndDrawTemplate@3@@Z, %2
	make_override 0x258, ?SetBGType@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXI@Z, %2
	make_override 0x260, ?SetBGColor@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXK@Z, %2
	make_override 0x268, ?UpdateGeometry@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXRect@3@_N111@Z, %2
	make_override 0x270, ?Move@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHAEBVCXPoint@3@@Z, %2
	make_override 0x278, ?Minimize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAH_N@Z, %2
	make_override 0x280, ?SetWindowText@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXAEBVCXStr@3@@Z, %2
	make_override 0x288, ?SetTooltip@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXAEBVCXStr@3@@Z, %2
	make_override 0x290, ?Center@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x298, ?CenterVertically@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x2a0, ?CenterHorizontally@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x2a8, ?Top@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAX_N@Z, %2
	make_override 0x2b0, ?Bottom@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAX_N@Z, %2
	make_override 0x2b8, ?Right@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAX_N@Z, %2
	make_override 0x2c0, ?Left@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAX_N@Z, %2
	make_override 0x2c8, ?MoveToCursor@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x2d0, ?GetChildWndAt@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAPEAVCXWnd@3@AEBVCXPoint@3@_N1@Z, %2
	make_override 0x2d8, ?GetSidlPiece@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAPEAVCScreenPieceTemplate@3@AEBVCXStr@3@_N@Z, %2
	make_override 0x2e0, ?GetWindowName@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAPEBVCXStr@3@XZ, %2
	make_override 0x2e8, ?SetVScrollPos@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHH@Z, %2
	make_override 0x2f0, ?SetHScrollPos@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHH@Z, %2
	make_override 0x2f8, ?AutoSetVScrollPos@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHVCXRect@3@@Z, %2
	make_override 0x300, ?AutoSetHScrollPos@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHVCXRect@3@@Z, %2
	make_override 0x308, ?SetAttributesFromSidl@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXPEAVCParamScreenPiece@3@@Z, %2
	make_override 0x310, ?OnReloadSidl@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x318, ?HasActivatedFirstTimeAlert@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBA_NXZ, %2
	make_override 0x320, ?SetHasActivatedFirstTimeAlert@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAX_N@Z, %2
	make_override 0x328, ?GetMinClientSize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAAEBVCXSize@3@XZ, %2
	make_override 0x330, ?GetMaxClientSize@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAAEBVCXSize@3@XZ, %2
	make_override 0x338, ?GetActiveEditWnd@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEBAPEAVCEditWnd@3@XZ, %2
	make_override 0x340, ?UpdateLayout@?$CXWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAX_N@Z, %2
%endmacro

; Same as above, for CSidlScreenWnd vtable
%macro expand_csidlscreenwnd_overrides 2
	; CSidlScreenWnd virtual functions
	make_override 0x348, ?Unknown0x330@?$CSidlScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXPEBD_N@Z, %2
	make_override 0x350, ?OnZone@?$CSidlScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x358, ?OnPreZone@?$CSidlScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAHXZ, %2
	make_override 0x360, ?LoadIniInfo@?$CSidlScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x368, ?StoreIniInfo@?$CSidlScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x370, ?AsSidlScreenWnd@?$CSidlScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAPEAVCSidlScreenWnd@3@XZ, %2
	make_override 0x378, ?GetScreenWndType@?$CSidlScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAA_NXZ, %2
%endmacro

%macro expand_cgfscreenwnd_overrides 2
	; CGFScreenWnd virtual functions
	make_override 0x380, ?HandleJsEvent@?$CGFScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXPEAX0@Z, %2
	make_override 0x388, ?Unknown0x388@?$CGFScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXXZ, %2
	make_override 0x390, ?Unknown0x390@?$CGFScreenWndTrampoline@V%1@eqlib@@@detail@eqlib@@UEAAXAEBVCXRect@3@@Z, %2
%endmacro

; Expand the window override assembly functions for the window
; param 1: Name of the override class
; param 2: Name of the class we are overriding
; param 3: Name of the parent class (CXWnd, CSidlScreenWnd, or CGFScreenWnd)
; param 4: Name of the vtable
%macro create_window_override_funcs_impl 4

	section .text

	; Create name for the vtable variable which holds the vtable that we will be jumping to
	; eqlib::CSidlScreenWnd::VirtualFunctionTable * eqlib::detail::CXWndTrampoline<eqlib::CItemDisplayWnd>::s_originalVTable
	%define VTABLE_NAME ?s_originalVTable@?$CXWndTrampoline@V%2@eqlib@@@detail@eqlib@@2PEAUVirtualFunctionTable@%3@3@EA
	extern VTABLE_NAME

	%ifidn %3,CXWnd
		expand_cxwnd_overrides %2, VTABLE_NAME
	%elifidn %3,CSidlScreenWnd
		expand_cxwnd_overrides %2, VTABLE_NAME
		expand_csidlscreenwnd_overrides %2, VTABLE_NAME
	%elifidn %3,CGFScreenWnd
		expand_cxwnd_overrides %2, VTABLE_NAME
		expand_csidlscreenwnd_overrides %2, VTABLE_NAME
		expand_cgfscreenwnd_overrides %2, VTABLE_NAME
	%endif

	; Now create a function that will return the vtable for the derived class

	; const CItemDisplayWndOverride::`vftable'
	extern %4

	; eqlib::WindowOverride<class CItemDisplayWndOverride,class eqlib::CItemDisplayWnd,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>::GetVTableForDerivedClassASM(void)
	global ?GetVTableForDerivedClassASM@?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@CAPEAUVirtualFunctionTable@%3@2@XZ
	?GetVTableForDerivedClassASM@?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@CAPEAUVirtualFunctionTable@%3@2@XZ:
		lea rax, [rel %4]
		ret	

	; eqlib::WindowOverride<class CItemDisplayWndOverride,class eqlib::CItemDisplayWnd,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>::WindowOverride<class CItemDisplayWndOverride,class eqlib::CItemDisplayWnd,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>(void)
	global ??0?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@QEAA@XZ
	??0?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@QEAA@XZ:
		ret

	; virtual __cdecl eqlib::WindowOverride<class CharacterCreationOverride,class eqlib::CCharacterCreation,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>::~WindowOverride<class CharacterCreationOverride,class eqlib::CCharacterCreation,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>(void)
	global ??1?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@UEAA@XZ
	??1?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@UEAA@XZ:
		ret

%endmacro

; Expand the window override assembly functions for the window
; param 1: Name of the override class
; param 2: Name of the class we are overriding
; param 3: Name of the parent class (CXWnd, CSidlScreenWnd, or CGFScreenWnd)

%macro create_window_override_funcs 3
	create_window_override_funcs_impl %1, %2, %3, ??_7%1@@6B@
%endmacro

; Expand the window override assembly functions for the window, for classes with multiple inheritance
; param 1: Name of the override class
; param 2: Name of the class we are overriding
; param 3: Name of the parent class (CXWnd, CSidlScreenWnd, or CGFScreenWnd)
%macro create_window_override_funcs_2 3
	create_window_override_funcs_impl %1, %2, %3, ??_7%1@@6B%3@eqlib@@@
%endmacro

%else ; !ARCH_X64

; Expand the window override assembly functions for the window
; param 1: Name of the override class
; param 2: Name of the class we are overriding
; param 3: Name of the parent class (CXWnd, CSidlScreenWnd, or CGFScreenWnd)
%macro create_window_override_funcs 3
	%ifidn %3,CGFScreenWnd
		create_window_override_funcs_impl %1, %2, CSidlScreenWnd, ??_7%1@@6B@
	%else
		create_window_override_funcs_impl %1, %2, %3, ??_7%1@@6B@
	%endif
%endmacro ; create_window_override_funcs

; Expand the window override assembly functions for the window, for classes with multiple inheritance
; param 1: Name of the override class
; param 2: Name of the class we are overriding
; param 3: Name of the parent class (CXWnd, CSidlScreenWnd, or CGFScreenWnd)
%macro create_window_override_funcs_2 3
	%ifidn %3,CGFScreenWnd
		create_window_override_funcs_impl %1, %2, CSidlScreenWnd, ??_7%1@@6B%3@eqlib@@@
	%else
		create_window_override_funcs_impl %1, %2, %3, ??_7%1@@6B%3@eqlib@@@
	%endif
%endmacro

; Expand the window override assembly functions for the window
; param 1: Name of the override class
; param 2: Name of the class we are overriding
; param 3: Name of the parent class (CXWnd, CSidlScreenWnd, or CGFScreenWnd)
; param 4: Name of the vtable
%macro create_window_override_funcs_impl 4

	section .text

	; x86 doesn't have a CGFScreenWnd
	%define CGFScreenWnd CSidlScreenWnd

	; const CItemDisplayWndOverride::`vftable'
	extern %4

	; eqlib::WindowOverride<CItemDisplayWndOverride,eqlib::CItemDisplayWnd>::GetVTableForDerivedClass()
	global ?GetVTableForDerivedClassASM@?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@CSidlScreenWnd@3@@eqlib@@CAPAUVirtualFunctionTable@%3@2@XZ
	?GetVTableForDerivedClassASM@?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@CSidlScreenWnd@3@@eqlib@@CAPAUVirtualFunctionTable@%3@2@XZ:
		lea eax, [%4]
		ret	

	; public: __thiscall eqlib::WindowOverride<class CItemDisplayWndOverride,class eqlib::CItemDisplayWnd,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>::WindowOverride<class CItemDisplayWndOverride,class eqlib::CItemDisplayWnd,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>(void)
	global ??0?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@QAE@XZ
	??0?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@QAE@XZ:
		ret

	; public: virtual __thiscall eqlib::WindowOverride<class CharacterCreationOverride,class eqlib::CCharacterCreation,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>::~WindowOverride<class CharacterCreationOverride,class eqlib::CCharacterCreation,struct eqlib::CSidlScreenWnd::VirtualFunctionTable>(void)
	global ??1?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@UAE@XZ
	??1?$WindowOverride@V%1@@V%2@eqlib@@UVirtualFunctionTable@%3@3@@eqlib@@UAE@XZ:
		ret

%endmacro ; create_window_override_funcs_impl

%endif ; !ARCH_X64
