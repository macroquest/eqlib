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

#include "CXWnd.h"

namespace eqlib {

//============================================================================

namespace detail {

// This is a magic class that is used to create a virtual function table trampoline
// for dynamic runtime class overrides. We derive from this to achieve the ability
// to redirect virtual function parent class calls to the original instance without
// knowing which ones were actually implemented by the class.

// This works by tricking the compiler into thinking that we overrode everything,
// and then redirecting to the original function whether it was overridden or not.

// This template is intended to create a unique type for every instance, thus it
// is templated on the type that is overriding.

template <typename Target>
class CXWndTrampoline : public Target
{
public:
	static inline typename Target::VirtualFunctionTable* s_originalVTable = nullptr;

	using Target::Target;
	using Super = CXWndTrampoline<Target>;

	virtual bool IsValid() const override;
	virtual ~CXWndTrampoline() {}
	virtual const char* GetWndClassName() const override;
	virtual int DrawNC() const override;
	virtual int Draw() override;
	virtual int PostDraw() override;
	virtual int DrawCursor(const CXPoint& mousePos, const CXRect& clip, bool& drawn) override;
	virtual int DrawChildItem(const CXWnd* child, void* item) const override;
	virtual int DrawCaret() const override;
	virtual int DrawBackground() const override;
	virtual int DrawTooltip(const CXWnd* wnd) const override;
	virtual int DrawTooltipAtPoint(const CXPoint& pos, const CXStr& tooltip = {}) const override;
	virtual CXRect GetMinimizedRect() const override;
	virtual int DrawTitleBar(const CXRect& rect) const override;
	virtual void SetZLayer(int Value) override;
	virtual HCURSOR GetCursorToDisplay() const override;
	virtual int HandleLButtonDown(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleLButtonUp(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleLButtonHeld(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleLButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleRButtonDown(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleRButtonUp(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleRButtonHeld(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleRButtonUpAfterHeld(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleWheelButtonDown(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleWheelButtonUp(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleMouseMove(const CXPoint& pos, uint32_t flags) override;
	virtual int HandleWheelMove(const CXPoint& pos, int scroll, uint32_t flags) override;
	virtual int HandleKeyboardMsg(uint32_t message, uint32_t flags, bool down) override;
	virtual int HandleMouseLeave() override;
	virtual int OnDragDrop(SDragDropInfo* info) override;
	virtual HCURSOR GetDragDropCursor(SDragDropInfo* info) const override;
	virtual bool QueryDropOK(SDragDropInfo* info) const override;
	virtual int OnClickStick(CClickStickInfo* info, uint32_t flags, bool unk) override;
	virtual HCURSOR GetClickStickCursor(CClickStickInfo* info) const override;
	virtual bool QueryClickStickDropOK(CClickStickInfo* info) const override;
	virtual int WndNotification(CXWnd* sender, uint32_t message, void* data = nullptr) override;
	virtual void OnWndNotification() override;
	virtual void Activate() override;
	virtual void Deactivate() override;
	virtual int OnShow() override;
	virtual int OnMove(const CXRect& rect) override;
	virtual int OnResize(int w, int h) override;
	virtual int OnBeginMoveOrResize() override;
	virtual int OnCompleteMoveOrResize() override;
	virtual int OnMinimizeBox() override;
	virtual int OnMaximizeBox() override;
	virtual int OnTileBox() override;
	virtual int OnTile() override;
	virtual int OnSetFocus(CXWnd* old) override;
	virtual int OnKillFocus(CXWnd* old) override;
	virtual int OnProcessFrame() override;
	virtual int OnVScroll(EScrollCode code, int pos) override;
	virtual int OnHScroll(EScrollCode code, int pos) override;
	virtual int OnBroughtToTop() override;
	virtual int OnActivate(CXWnd* old) override;
	virtual int Show(bool show = true, bool bringToTop = true, bool updateLayout = true) override;
	virtual bool AboutToShow() override;
	virtual bool AboutToHide() override;
	virtual int RequestDockInfo(EDockAction action, CXWnd* wnd, CXRect* rect) override;
	virtual CXStr GetTooltip() const override;
	virtual void ClickThroughMenuItemTriggered() override;
	virtual void SetLocked(bool bValue) override;
	virtual int HitTest(const CXPoint& pos, int* result) const override;
	virtual CXRect GetHitTestRect(int code) const override;
	virtual CXRect GetInnerRect() const override;
	virtual CXRect GetClientRect() const override;
	virtual CXRect GetClientClipRect() const override;
	virtual CXSize GetMinSize(bool withBorder = true) const override;
	virtual CXSize GetMaxSize(bool withBorder = true) const override;
	virtual CXSize GetUntileSize() const override;
	virtual bool IsPointTransparent(const CXPoint& point) const override;
	virtual bool ShouldProcessChildrenFrames() const override;
	virtual bool ShouldProcessControllerFrame() const override;
	virtual void SetDrawTemplate(CXWndDrawTemplate* drawTemplate) override;
	virtual void SetBGType(uint32_t Value) override;
	void SetBGColor(COLORREF Value) override;
	virtual int UpdateGeometry(const CXRect& rect, bool updateLayout = true, bool forceUpdateLayout = false, bool completeMoveOrResize = false, bool moveAutoStretch = false) override;
	virtual int Move(const CXPoint& point) override;
	virtual int Minimize(bool) override;
	virtual void SetWindowText(const CXStr& text) override;
	virtual void SetTooltip(const CXStr& Value) override;
	virtual void Center() override;
	virtual void Top(bool center = true) override;
	virtual void Bottom(bool center = true) override;
	virtual void Right(bool center = true) override;
	virtual void Left(bool center = true) override;
	virtual int MoveToCursor() override;
	virtual CXWnd* GetChildWndAt(const CXPoint& pos, bool, bool) const override;
	virtual CScreenPieceTemplate* GetSidlPiece(const CXStr& screenId, bool top = true) const override;
	virtual const CXStr* GetWindowName() const override;
	virtual int SetVScrollPos(int pos) override;
	virtual int SetHScrollPos(int pos) override;
	virtual int AutoSetVScrollPos(CXRect rect) override;
	virtual int AutoSetHScrollPos(CXRect rect) override;
	virtual void SetAttributesFromSidl(CParamScreenPiece* screenPiece) override;
	virtual void OnReloadSidl() override;
	virtual bool HasActivatedFirstTimeAlert() const override;
	virtual void SetHasActivatedFirstTimeAlert(bool) override;
	virtual const CXSize& GetMinClientSize() const override;
	virtual const CXSize& GetMaxClientSize() const override;
	virtual CEditWnd* GetActiveEditWnd() const override;
	virtual void UpdateLayout(bool finish = false) override;
};

#if 0
// This is what the final version might look something like,
// but this currently doesn't optimize correctly without /O2. Instead, all the implementations
// are in an asm file.
#define IMPLEMENT_VTABLE_TRAMPOLINE(Orig, Class, RetType, Name, Signature)                  \
	FUNCTION_CHECKS_OFF()                                                                   \
	template <typename Target>                                                              \
	RetType Class<Target>::Name Signature {                                                 \
		static_assert(eqlib::detail::is_size_ok<RetType>::value == 1, "Cannot use this macro with a return type that would spill"); \
		using TargetFunction = RetType(*)();                                                \
		return ((TargetFunction)(Class<Target>::s_originalVTable->Name))();                 \
	}                                                                                       \
	FUNCTION_CHECKS_ON()
#endif

template <typename Target>
class CSidlScreenWndTrampoline : public CXWndTrampoline<Target>
{
public:
	using CXWndTrampoline<Target>::CXWndTrampoline;
	using Super = CSidlScreenWndTrampoline<Target>;

	virtual void Unknown0x330(const char* pUnkA, bool bUnkB);
	virtual int OnZone();
	virtual int OnPreZone();
	virtual void LoadIniInfo();
	virtual void StoreIniInfo();
	virtual CSidlScreenWnd* AsSidlScreenWnd();
	virtual bool GetScreenWndType();
};

template <typename T>
using TrampolineSelectorT = std::conditional_t<std::is_base_of_v<eqlib::CSidlScreenWnd, T>,
	CSidlScreenWndTrampoline<T>, CXWndTrampoline<T>>;

constexpr size_t vtableBytesCopySize = 4096;

} // namespace detail

// This class will work for overriding both CXWnd and CSidlScreenWnd.
//
// This patcher works by creating a new virtual function table and replacing the
// class instance's virtual function table with a new one that we create here.
// This is a singleton implementation, intended for being used by a single instance of
// a window at a time. We cannot store any data as members, so they should all be static.
//
// Target is the type of the class that we are overriding. We never actually instantiate this
// class, but we have a pointer to it (because its created by EQ)
//
// Derived is the type of the class that is doing the override.
//
template <typename Derived, typename Target>
class WindowOverride : public detail::TrampolineSelectorT<Target>
{
public:
	static void InstallHooks(Target* pWnd)
	{
		HookVFTable(pWnd);
	}

	static void RemoveHooks(Target* pWnd)
	{
		UnhookVFTable(pWnd, false);
	}

	// These statics can be overridden in the derived class.
	static void OnHooked(Derived*) {}
	static void OnAboutToUnhook(Derived*) {}

	static bool IsHooked() { return s_hooked; }

	// Duplicates the hook to a new window. Expects initial hook to be instantiated.
	static void InstallAdditionalHook(Target* pWnd)
	{
		HookVFTableExisting(pWnd);
	}

	static void RestoreVFTable(Target* pWnd)
	{
		UnhookVFTable(pWnd, true);
	}

private:
	using VirtualFunctionTable = typename Target::VirtualFunctionTable;
	using Trampoline = detail::TrampolineSelectorT<Target>;

	inline static typename VirtualFunctionTable* s_virtualTablePatched = nullptr;
	inline static bool s_patchingVFTable = false;
	inline static bool s_hooked = false;

	static VirtualFunctionTable* GetVTableForDerivedClass()
	{
		Derived d;
		VirtualFunctionTable* derivedTable = d.GetVFTable();

		return derivedTable;
	}

	// We need to get the vftable for Derived type. How do we do this?!
	static VirtualFunctionTable* GetPatchedVFTable(Target* pThis)
	{
		static std::unique_ptr<uint8_t[]> tableBytes = nullptr;

		// Acquire the unpatched vtable or the derived class
		if (!tableBytes)
		{
			tableBytes = std::make_unique<uint8_t[]>(detail::vtableBytesCopySize);

			VirtualFunctionTable* derivedTable = GetVTableForDerivedClass();
			VirtualFunctionTable* origTable = pThis->GetVFTable();

			// Initialize the vtable with the original bytes.
			std::memcpy(tableBytes.get(), origTable, detail::vtableBytesCopySize);

			size_t dwordSize = sizeof(VirtualFunctionTable) / sizeof(void*);
			uint32_t** derivedTablePointers = (uint32_t**)derivedTable;
			uint32_t** patchedTablePointers = (uint32_t**)tableBytes.get();

			for (size_t pos = 0; pos < dwordSize; ++pos)
			{
				patchedTablePointers[pos] = derivedTablePointers[pos];
			}

			// our table is now patched.
		}

		return reinterpret_cast<VirtualFunctionTable*>(tableBytes.get());
	}

	static void HookVFTableExisting(Target* pThis)
	{
		if (!s_hooked || !pThis || s_patchingVFTable)
			return;
		if (pThis->GetVFTable() == s_virtualTablePatched)
			return;

		s_patchingVFTable = true;

		pThis->ReplaceVFTable(s_virtualTablePatched);

		s_patchingVFTable = false;

		Derived::OnHooked(static_cast<Derived*>(pThis));
	}

	static void HookVFTable(Target* pThis)
	{
		if (s_patchingVFTable || s_hooked || !pThis)
			return;
		s_patchingVFTable = true;

		// Redirect base class to the original virtual table. This will enable
		// calls to the parent class through the trampoline.
		Trampoline::s_originalVTable = pThis->GetVFTable();

		// initialize the patched virtual function table.
		s_virtualTablePatched = GetPatchedVFTable(pThis);

		// now replace with the patched version
		pThis->ReplaceVFTable(s_virtualTablePatched);

		s_patchingVFTable = false;
		s_hooked = true;

		Derived::OnHooked(static_cast<Derived*>(pThis));
	}

	static void UnhookVFTable(Target* pThis, bool hooked = false)
	{
		if (!s_hooked || !pThis) return;

		Derived::OnAboutToUnhook(static_cast<Derived*>(pThis));

		// put the original table back
		pThis->ReplaceVFTable(Trampoline::s_originalVTable);

		s_hooked = hooked;
	}
};

} // namespace eqlib
