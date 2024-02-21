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

#include "Common.h"
#include "GraphicsEngine.h"
#include "CXWnd.h"
#include "UITemplates.h"

#include "eqstd/string.h"
#include "eqstd/unordered_map.h"

namespace eqlib {

class CGFScreenWnd;

template <typename T>
class BaseComponent
{
public:
	virtual eqstd::string GetTypeName() const { return ""; }
	virtual void SyncFromJS() {}
	virtual void SyncToJS() {}

/*0x00*/ // vftable
/*0x08*/ eqstd::string name;
/*0x28*/ eqstd::string fullName;
/*0x48*/ eqstd::string modelPrefix;
/*0x68*/ CGFScreenWnd* parent;
/*0x70*/ T*            target;
/*0x78*/ eqstd::string str_78;
/*0x98*/ uint64_t      u64_98;
};

class [[offsetcomments]] UIComponent : public BaseComponent<CXWnd>
{
public:
	void Setup(CGFScreenWnd* parentScreenWnd, const eqstd::string& name, bool required, CXWnd* wnd);

};

class UIStaticAnimationTemplate : public BaseComponent<CStaticAnimationTemplate>
{
public:
};

class [[offsetcomments]] UIScreenComponent : public UIComponent
{
public:
/*0xa0*/ uint8_t       u8_a0;     // = 255
/*0xa4*/
};

class [[offsetcomments]] CGFScreenWnd : public CSidlScreenWnd
{
public:
	CGFScreenWnd(CXWnd* parent, bool useClassicUI, const CXStr& screenName, int IniFlags, int IniVersion, const char* BlockName);
	CGFScreenWnd(CXWnd* parent, bool useClassicUI, const CXStr& screenName);

	void SetupComponent(UIComponent& component, const eqstd::string& ScreenID, bool required);

/*0x2e0*/ UIScreenComponent                                 WindowComponent;
/*0x388*/ eqstd::unordered_map<eqstd::string, UIComponent*> ChildComponents;
/*0x3c8*/
};

namespace cohtml {

//============================================================================
// IAllocator
//============================================================================

enum class MemTags
{
	Unknown = 0,
	Untagged,
	System,
	Logging,
	Loader,
	DOM,
	DOMStatic,
	Layout,
	CSS,
	CSSStatic,
	TaskSystemMemory,
	Display,
	Profiling,
	HTMLParser,
	TempAllocator,
	PoolAllocator,
	Dump,
	Script,
	XML,
	Server,
	Inspector,
	SVG,
	UnityPlugin,
	UriParser,
	Media,
	JSON,

	Count
};

class IAllocator
{
public:
	IAllocator();

	virtual void* Allocate(unsigned size, cohtml::MemTags memtag) = 0;
	virtual void* Reallocate(void* ptr, unsigned size, cohtml::MemTags memtag) = 0;
	virtual void Deallocate(void* ptr, cohtml::MemTags memtag) = 0;
	virtual void* AlignedAllocate(unsigned size, unsigned alignment, cohtml::MemTags memtag) = 0;
	virtual void AlignedDeallocate(void* ptr, cohtml::MemTags memtag) = 0;
	virtual void* VirtualAllocate(void* hint, unsigned size, int protection, int flags, cohtml::MemTags memtag) = 0;
	virtual bool VirtualFree(void* ptr, unsigned size, int flags, cohtml::MemTags memtag) = 0;
	virtual ~IAllocator();
};

//============================================================================
// IAsyncResourceHandler
//============================================================================

class IAsyncResourceRequest;
class IAsyncResourceResponse;
class IAsyncResourceStreamResponse;

//============================================================================

class IAsyncResourceHandler
{
public:
	IAsyncResourceHandler();
	virtual ~IAsyncResourceHandler();

	virtual void OnResourceRequest(const cohtml::IAsyncResourceRequest* request,
		cohtml::IAsyncResourceResponse* response) = 0;

	virtual void OnResourceStreamRequest(const cohtml::IAsyncResourceRequest* request,
		cohtml::IAsyncResourceStreamResponse* response) = 0;

	virtual void OnAbortResourceRequest(unsigned id) = 0;
};

//============================================================================
// IViewListener
//============================================================================

struct ScreenInfo
{
	uint32_t Width;
	uint32_t Height;
	uint32_t AvailableWidth;
	uint32_t AvailableHeight;
	uint32_t ColorDepth;
	uint32_t PixelDepth;
};

struct EventModifiersState
{
	bool shift;
	bool ctrl;
	bool alt;
	bool meta;
	bool numLock;
	bool capsLock;
};

struct EventMouseModifiersState
{
	bool left;
	bool middle;
	bool right;
	bool back;
	bool forward;
};

enum InterceptRequestStatus
{
	Allow,
	Restrict,
};

enum class EventAction
{
	ContinueHandling,
	InterruptHandling,
};

enum class InputEventPhase
{
	None,
	Capturing,
	AtTarget,
	Bubbling,
};

enum class TextInputControlType
{
	TextInput,
	Other,
};

enum class CursorTypes
{
	Alias,
	AllScroll,
	Auto,
	Cell,
	ContextMenu,
	ColResize,
	Copy,
	Crosshair,
	Default,
	EResize,
	EWResize,
	Grab,
	Grabbing,
	Help,
	Move,
	NResize,
	NEResize,
	NESWResize,
	NSResize,
	NWResize,
	NWSEResize,
	NoDrop,
	None,
	NotAllowed,
	Pointer,
	Progress,
	RowResize,
	SResize,
	SEResize,
	SWResize,
	Text,
	URL,
	VerticalText,
	WResize,
	Wait,
	ZoomIn,
	ZoomOut,
};

class INodeProxy;

// Data for a cohtml mouse event
struct MouseEventData
{
	enum EventType
	{
		MouseMove,
		MouseDown,
		MouseUp,
		MouseWheel,
		MouseLeave,
	};

	enum MouseButton
	{
		MouseLeft,
		MouseMiddle,
		MouseRight,
		ButtonBack,
		ButtonForward,
	};

	EventType type;
	MouseButton button;
	int x;
	int y;
	float wheelX;
	float wheelY;
	int deltaX;
	int deltaY;
	EventModifiersState modifiers;
	EventMouseModifiersState mouseModifiers;
};

// Data for a cohtml keyboard event
struct KeyEventData
{
	enum EventType
	{
		Unknown,
		KeyDown,
		KeyUp,
		Char,
	};

	enum EventLocation
	{
		Standard,
		Left,
		Right,
		Numpad,
	};

	int keyCode;
	EventType type;
	EventModifiersState modifiers;
	EventLocation location;
	bool isAutoRepeat;
	bool isNumPad;
	bool isSystemKey;
};

struct IClipboardData
{
	virtual void Set(const char* text, unsigned int lengthBytes) = 0;
	virtual ~IClipboardData() {}
};

class IClientSideSocket;
class ISocketListener;

class IViewListener
{
public:
	virtual ~IViewListener();
	virtual bool OnNavigateTo(const char* url);
	virtual cohtml::InterceptRequestStatus OnResourceRequestIntercepted(const char* url);
	virtual void OnScriptContextCreated();
	virtual void OnDOMBuilt();
	virtual void OnLoadFailed(const char* url, const char* error);
	virtual void OnFinishLoad(const char* url);
	virtual void OnReadyForBindings(); // overridden
	virtual void OnBindingsReleased(); // overridden
	virtual cohtml::ScreenInfo OnScreenInfoRequested();
	virtual cohtml::EventAction OnNodeMouseEvent(const cohtml::INodeProxy* node,
		const cohtml::MouseEventData* event, void* userData, cohtml::InputEventPhase phase);
	virtual cohtml::EventAction OnNodeKeyEvent(const cohtml::INodeProxy* node,
		const cohtml::KeyEventData* event, void* userData, cohtml::InputEventPhase phase);
	virtual void OnAudioStreamCreated(int id, int bitDepth, int channels, float samplingRate);
	virtual void OnAudioStreamClosed(int id);
	virtual void OnAudioStreamPlay(int id);
	virtual void OnAudioStreamPause(int id);
	virtual void OnAudioDataReceived(int id, int samples, float** pcm, int channels);
	virtual void OnAudoStreamEnded(int id);
	virtual void OnAudioStreamVolumneChanged(int id, float volume);
	virtual void OnTextInputTypeChanged(cohtml::TextInputControlType type);
	virtual void OnCaretRectChanged(int x, int y, unsigned int width, unsigned int height);
	virtual void OnIMEShouldCancelComposition();
	virtual void OnCursorChanged(cohtml::CursorTypes cursor, const char* url, const float* xHotSpot, const float* yHotSpot); // overridden
	virtual void OnClipboardTextSet(const char* text, unsigned int lengthBytes);
	virtual void OnClipboardTextGet(cohtml::IClipboardData*);
	virtual cohtml::IClientSideSocket* OnCreateWebSocket(cohtml::ISocketListener* listener, const char* url, const char** protocol, unsigned int protocolsCount);
};

//============================================================================
// ILogHandler
//============================================================================

namespace Logging {

enum Severity
{
	Trace,
	Debug,
	Info,
	Warning,
	Error,
	AssertFailure,
	Critical,
	SeveritiesCount,
};

class ILogHandler
{
public:
	ILogHandler();
	virtual ~ILogHandler();

	virtual void WriteLog(cohtml::Logging::Severity, const char* message, size_t length) = 0;
};

} // namespace Logging;

//============================================================================

class System;
class SystemRenderer;
class View;
class ViewRenderer;

class Library {
public:
};

class System {
public:
};

//----------------------------------------------------------------------------

struct ViewRendererSettings {};

class SystemRenderer {
public:
/*0x00*/ virtual ~SystemRenderer();
/*0x08*/ virtual ViewRenderer* CreateViewRenderer(View* owner, const ViewRendererSettings& settings) = 0;
/*0x10*/ virtual void Destroy() = 0;
/*0x18*/ virtual void RegisterRenderThread(void* /* renoir::RendererBackend* */ backend) = 0;
/*0x20*/ virtual void FreeRenderingResources() = 0;
};

class View {
public:
};

class ViewRenderer {
public:
};

class ArgumentsBinder;

class IEventHandler {
public:
	virtual ~IEventHandler() {}
	virtual void Invoke(ArgumentsBinder* binder) = 0;
	virtual const void* GetTarget() = 0;
	virtual void SetTarget(void* target) = 0;
};

//============================================================================

} // namespace cohtml

namespace GF {

//============================================================================

class LogHandler : public cohtml::Logging::ILogHandler
{
public:
	virtual void WriteLog(cohtml::Logging::Severity, const char* message, size_t length) override;
};

class Allocator : public cohtml::IAllocator
{
public:
	Allocator();
	virtual ~Allocator();

	virtual void* Allocate(unsigned size, cohtml::MemTags memtag) { return nullptr; }
	virtual void* Reallocate(void* ptr, unsigned size, cohtml::MemTags memtag) { return nullptr; }
	virtual void Deallocate(void* ptr, cohtml::MemTags memtag) {}
	virtual void* AlignedAllocate(unsigned size, unsigned alignment, cohtml::MemTags memtag) { return nullptr; }
	virtual void AlignedDeallocate(void* ptr, cohtml::MemTags memtag) {}
	virtual void* VirtualAllocate(void* hint, unsigned size, int protection, int flags, cohtml::MemTags memtag) { return nullptr; }
	virtual bool VirtualFree(void* ptr, unsigned size, int flags, cohtml::MemTags memtag) { return false; }
};

class ViewListener_Object3;

class AsyncResourceHandler : public cohtml::IAsyncResourceHandler
{
public:
	virtual ~AsyncResourceHandler() {}
	virtual void OnResourceRequest(const cohtml::IAsyncResourceRequest* request, cohtml::IAsyncResourceResponse* response) {}
	virtual void OnResourceStreamRequest(const cohtml::IAsyncResourceRequest* request, cohtml::IAsyncResourceStreamResponse* response) {}
	virtual void OnAbortResourceRequest(unsigned id) {}

	// Size of node = 0x10 + sizeof(key) + sizeof(value0

	struct UnknownObject {
		uint8_t data[0x40];
	}; // probably a resource of some kind.

	struct UnknownObject2 {
		uint8_t data[0x28];
	};

/*0x000*/ // vftable
/*0x008*/ eqstd::unordered_map<eqstd::string, UnknownObject> mappings; // node size: 0x70
/*0x048*/ void* a;
/*0x050*/ void* b;
/*0x058*/ void* c;
/*0x060*/ void* d; // looks like a pointer to a pointer to a string
/*0x068*/ void* e;
/*0x070*/ void* f;
/*0x078*/ eqstd::unordered_map<eqstd::string, UnknownObject2> mappings2; // node size: 0x58
/*0x0b8*/ uint32_t u32_b8;
/*0x0c0*/ CGameFaceRenderInterface* pGameFaceRenderInterface;
/*0x0c8*/ ViewListener_Object3* pObject3;

// probably a subobject
/*0x0d0*/ eqstd::unordered_map<int, void*> mappings3;
/*0x110*/ /* +40 */ bool mappings3Unknown;
/*0x118*/
};

// size: 0x58
class [[offsetcomments]] ViewListener_Object1
{
public:
/*0x00*/ eqstd::unordered_map<eqstd::string, void*> unordered_map_00;
/*0x40*/ void* pointer_40;
/*0x48*/ void* pointer_48;
/*0x50*/ void* pointer_50;
/*0x58*/
};

// This interface is probably exposed by the graphics engine. The implementation
// is passed back to it.
class ViewListener_Object2_Interface
{
public:
/*0x00*/ virtual ~ViewListener_Object2_Interface() {}
/*0x08*/ virtual void UnknownVirtualFunction1() = 0;
/*0x10*/ virtual void UnknownVirtualFunction2() = 0;
/*0x18*/ virtual void UnknownVirtualFunction3() = 0;
/*0x20*/ virtual void UnknownVirtualFunction4() = 0;
/*0x28*/ virtual void UnknownVirtualFunction5() = 0;
};

class ViewListener;

// size: 0x30
class [[offsetcomments]] ViewListener_Object2 : public ViewListener_Object2_Interface
{
public:
	virtual ~ViewListener_Object2() {}
	virtual void UnknownVirtualFunction1() {}
	virtual void UnknownVirtualFunction2() {}
	virtual void UnknownVirtualFunction3() {}
	virtual void UnknownVirtualFunction4() {}
	virtual void UnknownVirtualFunction5() {}

/*0x00*/ // vftable
/*0x08*/ ViewListener*              pViewListener; // 1b8
/*0x10*/ CGameFaceRenderInterface*  pGameFaceRender; // 1c0
/*0x18*/ CResourceManagerInterface* pResourceManager; // 1c8
/*0x20*/ uint64_t          u64_1d0;
/*0x28*/ uint64_t          u64_1d8;
/*0x30*/ // 1e0
};

// size: 0xa0
class [[offsetcomments]] ViewListener_Object3
{
public:
	struct UnknownObject1 { // size: 0x40
	/*0x00*/ eqstd::string fileName;
	/*0x20*/ uint32_t width;
	/*0x24*/ uint32_t height;
	/*0x28*/ eqstd::string* string_ptr_28; // probably a pointer to an object that starts with a string
	/*0x20*/ uint64_t data[2];
	/*0x40*/
	};

	struct UnknownObject2 {
	/*0x00*/ eqstd::string pieceName;
	/*0x20*/ uint64_t data[5];
	/*0x48*/
	};

/*0x00*/ eqstd::string string_00;
/*0x20*/ eqstd::unordered_map<eqstd::string, UnknownObject1> map_20; // node size: 0x70
/*0x60*/ eqstd::unordered_map<eqstd::string, UnknownObject2> map_60; // node size: 0x78
/*0xa0*/
};

// size: 0x498
class [[offsetcomments]] ViewListener : public cohtml::IViewListener
{
public:
	virtual void OnReadyForBindings() override;
	virtual void OnBindingsReleased() override;
	virtual void OnTextInputTypeChanged(cohtml::TextInputControlType type) override;
	virtual void OnCursorChanged(cohtml::CursorTypes cursor, const char* url, const float* xHotSpot, const float* yHotSpot) override;

/*0x000*/ // vftable
/*0x008*/ cohtml::Library*                  pLibrary;
/*0x010*/ cohtml::System*                   pSystem;
/*0x018*/ cohtml::SystemRenderer*           pSystemRenderer;
/*0x020*/ cohtml::ViewRenderer*             pViewRenderer;
/*0x028*/ cohtml::View*                     pView;
/*0x030*/ LogHandler                        logHandler;
/*0x038*/ Allocator                         allocator;
/*0x040*/ AsyncResourceHandler              resourceHandler;
/*0x158*/ ViewListener_Object1              object1;
/*0x1b0*/ ViewListener_Object2              object2;
/*0x1e0*/ eqstd::unordered_map<void*, void*>  map_1e0; // node size: 0x20
/*0x220*/ uint64_t                          u64_220[2]; // [0] = frame counter?
/*0x230*/ cohtml::IEventHandler*            pEventHandler; // maybe?
/*0x238*/ uint32_t                          u32_238[2];
/*0x240*/ ViewListener_Object3              object3;
/*0x2e0*/ ViewListener_Object3              object4;
/*0x380*/ ViewListener_Object3              object5;
/*0x420*/ eqstd::string                     string_420;
/*0x440*/ bool                              bool_440;
/*0x448*/ eqstd::string                     string_448;
/*0x468*/ bool                              bool_468;
/*0x46c*/ uint32_t                          u32_46c;
/*0x470*/ uint64_t                          u64_470[5]; // cursor, click focus?
/*0x498*/
};

} // namespace GF

extern GF::ViewListener* g_pViewListener;

} // namespace eqlib
