// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder.h>
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.RootInfo.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.TouchPhase.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Focus.uno
// ----------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :8
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/LeafView.uno
// -------------------------------------------------------------------------

// public abstract extern class LeafView :6
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View_type, interface1));
    type->SetFields(10);
}

::g::Fuse::Controls::Native::iOS::View_type* LeafView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::iOS::View_type);
    type = (::g::Fuse::Controls::Native::iOS::View_type*)uClassType::New("Fuse.Controls.Native.iOS.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected LeafView(ObjC.Object handle) :8
void LeafView__ctor_4_fn(LeafView* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_4(handle);
}

// protected LeafView(ObjC.Object handle) [instance] :8
void LeafView::ctor_4(::g::ObjC::Object* handle)
{
    ctor_3(handle, true, 0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Focus.uno
// ----------------------------------------------------------------------

// internal static extern class NativeFocus :14
// {
// static generated NativeFocus() :14
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/], (uintptr_t)&NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) :20
void NativeFocus__AddListener_fn(::g::ObjC::Object* handle, uObject* listener)
{
    NativeFocus::AddListener(handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) :30
void NativeFocus__RaiseFocusGained_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :38
void NativeFocus__RaiseFocusLost_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

// public static void RemoveListener(ObjC.Object handle) :25
void NativeFocus__RemoveListener_fn(::g::ObjC::Object* handle)
{
    NativeFocus::RemoveListener(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) [static] :20
void NativeFocus::AddListener(::g::ObjC::Object* handle, uObject* listener)
{
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NativeFocus::_listeners_), handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) [static] :30
void NativeFocus::RaiseFocusGained(::g::ObjC::Object* handle)
{
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners_), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners_), handle, &ret2), ret2)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :38
void NativeFocus::RaiseFocusLost(::g::ObjC::Object* handle)
{
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners_), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners_), handle, &ret4), ret4)), ::TYPES[1/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RemoveListener(ObjC.Object handle) [static] :25
void NativeFocus::RemoveListener(::g::ObjC::Object* handle)
{
    bool ret5;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NativeFocus::_listeners_), handle, &ret5);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Focus.uno
// ----------------------------------------------------------------------

// private sealed class FocusHelpers.PerformBecomeFirstResponder :125
// {
static void FocusHelpers__PerformBecomeFirstResponder_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(FocusHelpers__PerformBecomeFirstResponder, _target), 0);
}

uType* FocusHelpers__PerformBecomeFirstResponder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FocusHelpers__PerformBecomeFirstResponder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder", options);
    type->fp_build_ = FocusHelpers__PerformBecomeFirstResponder_build;
    return type;
}

// public PerformBecomeFirstResponder(ObjC.Object target) :129
void FocusHelpers__PerformBecomeFirstResponder__ctor__fn(FocusHelpers__PerformBecomeFirstResponder* __this, ::g::ObjC::Object* target)
{
    __this->ctor_(target);
}

// public void BecomeFirstResponder() :134
void FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn(FocusHelpers__PerformBecomeFirstResponder* __this)
{
    __this->BecomeFirstResponder();
}

// public PerformBecomeFirstResponder New(ObjC.Object target) :129
void FocusHelpers__PerformBecomeFirstResponder__New1_fn(::g::ObjC::Object* target, FocusHelpers__PerformBecomeFirstResponder** __retval)
{
    *__retval = FocusHelpers__PerformBecomeFirstResponder::New1(target);
}

// public PerformBecomeFirstResponder(ObjC.Object target) [instance] :129
void FocusHelpers__PerformBecomeFirstResponder::ctor_(::g::ObjC::Object* target)
{
    _target = target;
}

// public void BecomeFirstResponder() [instance] :134
void FocusHelpers__PerformBecomeFirstResponder::BecomeFirstResponder()
{
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::BecomeFirstResponder(_target);
}

// public PerformBecomeFirstResponder New(ObjC.Object target) [static] :129
FocusHelpers__PerformBecomeFirstResponder* FocusHelpers__PerformBecomeFirstResponder::New1(::g::ObjC::Object* target)
{
    FocusHelpers__PerformBecomeFirstResponder* obj1 = (FocusHelpers__PerformBecomeFirstResponder*)uNew(FocusHelpers__PerformBecomeFirstResponder_typeof());
    obj1->ctor_(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/InputDispatch.uno
// ------------------------------------------------------------------------------

// private struct InputDispatch.RootInfo :84
// {
static void InputDispatch__RootInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(InputDispatch__RootInfo, RootVisual), 0,
        ::g::ObjC::Object_typeof(), offsetof(InputDispatch__RootInfo, RootView), 0);
}

uStructType* InputDispatch__RootInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(InputDispatch__RootInfo);
    options.ValueSize = sizeof(InputDispatch__RootInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Controls.Native.iOS.InputDispatch.RootInfo", options);
    type->fp_build_ = InputDispatch__RootInfo_build;
    return type;
}

// public RootInfo(Fuse.Visual rootVisual, ObjC.Object rootView) :89
void InputDispatch__RootInfo__ctor__fn(InputDispatch__RootInfo* __this, ::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    __this->ctor_(rootVisual, rootView);
}

// public RootInfo New(Fuse.Visual rootVisual, ObjC.Object rootView) :89
void InputDispatch__RootInfo__New1_fn(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView, InputDispatch__RootInfo* __retval)
{
    *__retval = InputDispatch__RootInfo__New1(rootVisual, rootView);
}

// public RootInfo(Fuse.Visual rootVisual, ObjC.Object rootView) [instance] :89
void InputDispatch__RootInfo::ctor_(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    RootVisual = rootVisual;
    RootView = rootView;
}

// public RootInfo New(Fuse.Visual rootVisual, ObjC.Object rootView) [static] :89
InputDispatch__RootInfo InputDispatch__RootInfo__New1(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView)
{
    InputDispatch__RootInfo obj1;
    obj1.ctor_(rootVisual, rootView);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/PointerCaptureAdapter.uno
// --------------------------------------------------------------------------------------

// internal enum TouchPhase :71
uEnumType* TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Stationary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

}}}}} // ::g::Fuse::Controls::Native::iOS
