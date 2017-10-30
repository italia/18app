// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.iOSDisplay.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.OSFrame.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.Window.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
void uInitRtti();
void uStartApp();
static uString* STRINGS[14];
static uType* TYPES[7];

namespace g{
namespace Uno{
namespace Platform{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/CoreApp.uno
// ---------------------------------------------------------------------------

// public enum ApplicationState :11
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/CoreApp.uno
// ---------------------------------------------------------------------------

// public delegate void ApplicationStateTransitionHandler(Uno.Platform.ApplicationState newState) :21
uDelegateType* ApplicationStateTransitionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Platform.ApplicationStateTransitionHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Platform::ApplicationState_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/CoreApp.uno
// ---------------------------------------------------------------------------

// public abstract class CoreApp :26
// {
// static generated CoreApp() :26
static void CoreApp__cctor__fn(uType* __type)
{
    CoreApp::_delayedURIS_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
}

static void CoreApp_build(uType* type)
{
    ::STRINGS[0] = uString::Const("EnterBackground() called on terminating application");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/CoreApp.uno");
    ::STRINGS[2] = uString::Const("EnterBackground() called on uninitialized application");
    ::STRINGS[3] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Foreground");
    ::STRINGS[4] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Background");
    ::STRINGS[5] = uString::Const("EnterForeground() called on terminating application");
    ::STRINGS[6] = uString::Const("EnterForeground() called on uninitialized application");
    ::STRINGS[7] = uString::Const("EnterInteractive() called on terminating application");
    ::STRINGS[8] = uString::Const("EnterInteractive() called on uninitialized application");
    ::STRINGS[9] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Interactive");
    ::STRINGS[10] = uString::Const("ExitInteractive() called on terminating application");
    ::STRINGS[11] = uString::Const("ExitInteractive() called on uninitialized application");
    ::STRINGS[12] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Uninitialized");
    ::STRINGS[13] = uString::Const("Uno.Platform.CoreApp.State == Uno.Platform.ApplicationState.Terminating");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&CoreApp::_delayedURIS_, uFieldFlagsStatic,
        type, (uintptr_t)&CoreApp::_Current_, uFieldFlagsStatic,
        ::g::Uno::Platform::ApplicationState_typeof(), (uintptr_t)&CoreApp::_State_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler*/], (uintptr_t)&CoreApp::ReceivedLowMemoryWarning1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::Started1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (uintptr_t)&CoreApp::Terminating1_, uFieldFlagsStatic);
}

uType* CoreApp_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(CoreApp);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.CoreApp", options);
    type->fp_build_ = CoreApp_build;
    type->fp_cctor_ = CoreApp__cctor__fn;
    return type;
}

// protected CoreApp() :34
void CoreApp__ctor__fn(CoreApp* __this)
{
    __this->ctor_();
}

// public static generated Uno.Platform.CoreApp get_Current() :30
void CoreApp__get_Current_fn(CoreApp** __retval)
{
    *__retval = CoreApp::Current();
}

// internal static generated void set_Current(Uno.Platform.CoreApp value) :31
void CoreApp__set_Current_fn(CoreApp* value)
{
    CoreApp::Current(value);
}

// internal static void EnterBackground() :191
void CoreApp__EnterBackground_fn()
{
    CoreApp::EnterBackground();
}

// internal static void EnterForeground() :87
void CoreApp__EnterForeground_fn()
{
    CoreApp::EnterForeground();
}

// public static generated void add_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) :56
void CoreApp__add_EnteringBackground_fn(uDelegate* value)
{
    CoreApp::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) :56
void CoreApp__remove_EnteringBackground_fn(uDelegate* value)
{
    CoreApp::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) :53
void CoreApp__add_EnteringForeground_fn(uDelegate* value)
{
    CoreApp::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) :53
void CoreApp__remove_EnteringForeground_fn(uDelegate* value)
{
    CoreApp::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) :54
void CoreApp__add_EnteringInteractive_fn(uDelegate* value)
{
    CoreApp::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) :54
void CoreApp__remove_EnteringInteractive_fn(uDelegate* value)
{
    CoreApp::remove_EnteringInteractive(value);
}

// internal static void EnterInteractive() :120
void CoreApp__EnterInteractive_fn()
{
    CoreApp::EnterInteractive();
}

// public static generated void add_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) :55
void CoreApp__add_ExitedInteractive_fn(uDelegate* value)
{
    CoreApp::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) :55
void CoreApp__remove_ExitedInteractive_fn(uDelegate* value)
{
    CoreApp::remove_ExitedInteractive(value);
}

// internal static void ExitInteractive() :157
void CoreApp__ExitInteractive_fn()
{
    CoreApp::ExitInteractive();
}

// public void Load() :43
void CoreApp__Load_fn(CoreApp* __this)
{
    __this->Load();
}

// internal static void OnReceivedLowMemoryWarning() :260
void CoreApp__OnReceivedLowMemoryWarning_fn()
{
    CoreApp::OnReceivedLowMemoryWarning();
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) :258
void CoreApp__add_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    CoreApp::add_ReceivedLowMemoryWarning(value);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) :258
void CoreApp__remove_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    CoreApp::remove_ReceivedLowMemoryWarning(value);
}

// internal static void Start() :59
void CoreApp__Start_fn()
{
    CoreApp::Start();
}

// public static generated void add_Started(Uno.Platform.ApplicationStateTransitionHandler value) :52
void CoreApp__add_Started_fn(uDelegate* value)
{
    CoreApp::add_Started(value);
}

// public static generated void remove_Started(Uno.Platform.ApplicationStateTransitionHandler value) :52
void CoreApp__remove_Started_fn(uDelegate* value)
{
    CoreApp::remove_Started(value);
}

// public static generated Uno.Platform.ApplicationState get_State() :50
void CoreApp__get_State_fn(int* __retval)
{
    *__retval = CoreApp::State();
}

// private static generated void set_State(Uno.Platform.ApplicationState value) :50
void CoreApp__set_State_fn(int* value)
{
    CoreApp::State(*value);
}

// internal static void Terminate() :225
void CoreApp__Terminate_fn()
{
    CoreApp::Terminate();
}

// public static generated void add_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) :57
void CoreApp__add_Terminating_fn(uDelegate* value)
{
    CoreApp::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) :57
void CoreApp__remove_Terminating_fn(uDelegate* value)
{
    CoreApp::remove_Terminating(value);
}

uSStrong< ::g::Uno::Collections::List*> CoreApp::_delayedURIS_;
uSStrong<CoreApp*> CoreApp::_Current_;
int CoreApp::_State_;
uSStrong<uDelegate*> CoreApp::EnteringBackground1_;
uSStrong<uDelegate*> CoreApp::EnteringForeground1_;
uSStrong<uDelegate*> CoreApp::EnteringInteractive1_;
uSStrong<uDelegate*> CoreApp::ExitedInteractive1_;
uSStrong<uDelegate*> CoreApp::ReceivedLowMemoryWarning1_;
uSStrong<uDelegate*> CoreApp::Started1_;
uSStrong<uDelegate*> CoreApp::Terminating1_;

// protected CoreApp() [instance] :34
void CoreApp::ctor_()
{
    if (CoreApp::Current() == NULL)
        CoreApp::Current(this);
}

// public void Load() [instance] :43
void CoreApp::Load()
{
}

// internal static void EnterBackground() [static] :191
void CoreApp::EnterBackground()
{
    int assert9;
    int assert10;

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[0/*"EnterBackgr...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 196);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"EnterBackgr...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 200);
            return;
        }
        case 1:
            return;
        case 2:
            break;
        case 3:
        {
            CoreApp::ExitInteractive();
            break;
        }
    }

    assert9 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert9 == 2, ::STRINGS[3/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 214, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert9), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
    CoreApp::State(1);
    uDelegate* handler = CoreApp::EnteringBackground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert10 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert10 == 1, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 222, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert10), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
}

// internal static void EnterForeground() [static] :87
void CoreApp::EnterForeground()
{
    int assert3;
    int assert4;

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"EnterForegr...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 92);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[6/*"EnterForegr...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 96);
            return;
        }
        case 1:
            break;
        case 2:
        case 3:
            return;
    }

    assert3 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert3 == 1, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 108, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert3), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
    CoreApp::State(2);
    uDelegate* handler = CoreApp::EnteringForeground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert4 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert4 == 2, ::STRINGS[3/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 116, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert4), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
}

// internal static void EnterInteractive() [static] :120
void CoreApp::EnterInteractive()
{
    int assert5;
    int assert6;

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"EnterIntera...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 128);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[8/*"EnterIntera...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 132);
            return;
        }
        case 1:
        {
            CoreApp::EnterForeground();
            break;
        }
        case 2:
            break;
        case 3:
            return;
    }

    assert5 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert5 == 2, ::STRINGS[3/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 146, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert5), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
    CoreApp::State(3);
    uDelegate* handler = CoreApp::EnteringInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert6 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert6 == 3, ::STRINGS[9/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 154, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert6), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 3)));
}

// internal static void ExitInteractive() [static] :157
void CoreApp::ExitInteractive()
{
    int assert7;
    int assert8;

    switch (CoreApp::State())
    {
        case -1:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[10/*"ExitInterac...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 165);
            return;
        }
        case 0:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[11/*"ExitInterac...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 169);
            return;
        }
        case 1:
        case 2:
            return;
        case 3:
            break;
    }

    assert7 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert7 == 3, ::STRINGS[9/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 180, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert7), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 3)));
    CoreApp::State(2);
    uDelegate* handler = CoreApp::ExitedInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert8 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert8 == 2, ::STRINGS[3/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 188, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert8), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 2)));
}

// internal static void OnReceivedLowMemoryWarning() [static] :260
void CoreApp::OnReceivedLowMemoryWarning()
{
    uDelegate* handler = CoreApp::ReceivedLowMemoryWarning1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// internal static void Start() [static] :59
void CoreApp::Start()
{
    int assert1;
    int assert2;

    switch (CoreApp::State())
    {
        case 1:
        {
            CoreApp::Terminate();
            break;
        }
        case 0:
        case -1:
            break;
    }

    uInitRtti();
    assert1 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 == 0, ::STRINGS[12/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 74, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert1), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 0)));
    uStartApp();
    CoreApp::State(1);
    uDelegate* handler = CoreApp::Started1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert2 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert2 == 1, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 84, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert2), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
}

// internal static void Terminate() [static] :225
void CoreApp::Terminate()
{
    int assert11;
    int assert12;

    switch (CoreApp::State())
    {
        case -1:
        case 0:
            return;
        case 1:
            break;
        case 2:
        case 3:
        {
            CoreApp::EnterBackground();
            break;
        }
    }

    assert11 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert11 == 1, ::STRINGS[4/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 242, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert11), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), 1)));
    CoreApp::State(-1);
    uDelegate* handler = CoreApp::Terminating1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(CoreApp::State()));

    assert12 = CoreApp::State();
    ::g::Uno::Diagnostics::Debug::Assert(assert12 == -1, ::STRINGS[13/*"Uno.Platfor...*/], ::STRINGS[1/*"/usr/local/...*/], 250, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), assert12), uBox<int>(::g::Uno::Platform::ApplicationState_typeof(), -1)));
    CoreApp::State(0);
}

// public static generated Uno.Platform.CoreApp get_Current() [static] :30
CoreApp* CoreApp::Current()
{
    return CoreApp::_Current_;
}

// internal static generated void set_Current(Uno.Platform.CoreApp value) [static] :31
void CoreApp::Current(CoreApp* value)
{
    CoreApp::_Current_ = value;
}

// public static generated Uno.Platform.ApplicationState get_State() [static] :50
int CoreApp::State()
{
    return CoreApp::_State_;
}

// private static generated void set_State(Uno.Platform.ApplicationState value) [static] :50
void CoreApp::State(int value)
{
    CoreApp::_State_ = value;
}

// public static generated void add_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) [static] :56
void CoreApp::add_EnteringBackground(uDelegate* value)
{
    CoreApp::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringBackground1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringBackground(Uno.Platform.ApplicationStateTransitionHandler value) [static] :56
void CoreApp::remove_EnteringBackground(uDelegate* value)
{
    CoreApp::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringBackground1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) [static] :53
void CoreApp::add_EnteringForeground(uDelegate* value)
{
    CoreApp::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringForeground1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringForeground(Uno.Platform.ApplicationStateTransitionHandler value) [static] :53
void CoreApp::remove_EnteringForeground(uDelegate* value)
{
    CoreApp::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringForeground1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static] :54
void CoreApp::add_EnteringInteractive(uDelegate* value)
{
    CoreApp::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::EnteringInteractive1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static] :54
void CoreApp::remove_EnteringInteractive(uDelegate* value)
{
    CoreApp::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::EnteringInteractive1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static] :55
void CoreApp::add_ExitedInteractive(uDelegate* value)
{
    CoreApp::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::ExitedInteractive1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Platform.ApplicationStateTransitionHandler value) [static] :55
void CoreApp::remove_ExitedInteractive(uDelegate* value)
{
    CoreApp::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::ExitedInteractive1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) [static] :258
void CoreApp::add_ReceivedLowMemoryWarning(uDelegate* value)
{
    CoreApp::ReceivedLowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::ReceivedLowMemoryWarning1_, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) [static] :258
void CoreApp::remove_ReceivedLowMemoryWarning(uDelegate* value)
{
    CoreApp::ReceivedLowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::ReceivedLowMemoryWarning1_, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public static generated void add_Started(Uno.Platform.ApplicationStateTransitionHandler value) [static] :52
void CoreApp::add_Started(uDelegate* value)
{
    CoreApp::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::Started1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Started(Uno.Platform.ApplicationStateTransitionHandler value) [static] :52
void CoreApp::remove_Started(uDelegate* value)
{
    CoreApp::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::Started1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) [static] :57
void CoreApp::add_Terminating(uDelegate* value)
{
    CoreApp::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(CoreApp::Terminating1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Terminating(Uno.Platform.ApplicationStateTransitionHandler value) [static] :57
void CoreApp::remove_Terminating(uDelegate* value)
{
    CoreApp::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(CoreApp::Terminating1_, value), ::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/]);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Displays.uno
// ----------------------------------------------------------------------------

// public abstract class Display :54
// {
static void Display_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::UInt_typeof(), offsetof(Display, _ticksPerSecond), 0,
        ::TYPES[4/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], offsetof(Display, _tick1), 0);
}

Display_type* Display_typeof()
{
    static uSStrong<Display_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Display);
    options.TypeSize = sizeof(Display_type);
    type = (Display_type*)uClassType::New("Uno.Platform.Display", options);
    type->fp_build_ = Display_build;
    type->fp_DisableTicks = Display__DisableTicks_fn;
    type->fp_EnableTicks = Display__EnableTicks_fn;
    type->fp_SetTicksPerSecond = Display__SetTicksPerSecond_fn;
    return type;
}

// protected generated Display() :54
void Display__ctor__fn(Display* __this)
{
    __this->ctor_();
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :83
void Display__add__tick_fn(Display* __this, uDelegate* value)
{
    __this->add__tick(value);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :83
void Display__remove__tick_fn(Display* __this, uDelegate* value)
{
    __this->remove__tick(value);
}

// public float get_Density() :58
void Display__get_Density_fn(Display* __this, float* __retval)
{
    *__retval = __this->Density();
}

// protected virtual void DisableTicks() :113
void Display__DisableTicks_fn(Display* __this)
{
}

// protected virtual void EnableTicks() :112
void Display__EnableTicks_fn(Display* __this)
{
}

// internal void OnTick(Uno.Platform.TimerEventArgs args) :105
void Display__OnTick_fn(Display* __this, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(args);
}

// protected virtual void SetTicksPerSecond(uint value) :79
void Display__SetTicksPerSecond_fn(Display* __this, uint32_t* value)
{
}

// public void add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :86
void Display__add_Tick_fn(Display* __this, uDelegate* value)
{
    __this->add_Tick(value);
}

// public void remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :93
void Display__remove_Tick_fn(Display* __this, uDelegate* value)
{
    __this->remove_Tick(value);
}

// public uint get_TicksPerSecond() :67
void Display__get_TicksPerSecond_fn(Display* __this, uint32_t* __retval)
{
    *__retval = __this->TicksPerSecond();
}

// public void set_TicksPerSecond(uint value) :68
void Display__set_TicksPerSecond_fn(Display* __this, uint32_t* value)
{
    __this->TicksPerSecond(*value);
}

// protected generated Display() [instance] :54
void Display::ctor_()
{
    _ticksPerSecond = 0U;
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :83
void Display::add__tick(uDelegate* value)
{
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_tick1, value), ::TYPES[4/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :83
void Display::remove__tick(uDelegate* value)
{
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_tick1, value), ::TYPES[4/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// public float get_Density() [instance] :58
float Display::Density()
{
    return GetDensity();
}

// internal void OnTick(Uno.Platform.TimerEventArgs args) [instance] :105
void Display::OnTick(::g::Uno::Platform::TimerEventArgs* args)
{
    uDelegate* handler = _tick1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);
}

// public void add_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :86
void Display::add_Tick(uDelegate* value)
{
    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        EnableTicks();

    add__tick(value);
}

// public void remove_Tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :93
void Display::remove_Tick(uDelegate* value)
{
    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        return;

    remove__tick(value);

    if (::g::Uno::Delegate::op_Equality(_tick1, NULL))
        DisableTicks();
}

// public uint get_TicksPerSecond() [instance] :67
uint32_t Display::TicksPerSecond()
{
    return _ticksPerSecond;
}

// public void set_TicksPerSecond(uint value) [instance] :68
void Display::TicksPerSecond(uint32_t value)
{
    if (_ticksPerSecond == value)
        return;

    _ticksPerSecond = value;

    if (::g::Uno::Delegate::op_Inequality(_tick1, NULL))
        SetTicksPerSecond(value);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Displays.uno
// ----------------------------------------------------------------------------

// public static class Displays :10
// {
// static Displays() :15
static void Displays__cctor__fn(uType* __type)
{
    Displays::All((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Uno.Platform.Display>*/]));
    Displays::PopulateDisplaysList();
}

static void Displays_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Display_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Platform::Display_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Platform::iOSDisplay_typeof());
    type->SetFields(0,
        ::TYPES[5/*Uno.Collections.List<Uno.Platform.Display>*/], (uintptr_t)&Displays::_All_, uFieldFlagsStatic);
}

uClassType* Displays_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.Displays", options);
    type->fp_build_ = Displays_build;
    type->fp_cctor_ = Displays__cctor__fn;
    return type;
}

// public static generated Uno.Collections.List<Uno.Platform.Display> get_All() :12
void Displays__get_All_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = Displays::All();
}

// private static generated void set_All(Uno.Collections.List<Uno.Platform.Display> value) :12
void Displays__set_All_fn(::g::Uno::Collections::List* value)
{
    Displays::All(value);
}

// private static Uno.Platform.Display GetMainDisplay() :40
void Displays__GetMainDisplay_fn(::g::Uno::Platform::Display** __retval)
{
    *__retval = Displays::GetMainDisplay();
}

// public static Uno.Platform.Display get_MainDisplay() :13
void Displays__get_MainDisplay_fn(::g::Uno::Platform::Display** __retval)
{
    *__retval = Displays::MainDisplay();
}

// private static extern void PopulateDisplaysList() :28
void Displays__PopulateDisplaysList_fn()
{
    Displays::PopulateDisplaysList();
}

// internal static void TickAll(Uno.Platform.TimerEventArgs args) :45
void Displays__TickAll_fn(::g::Uno::Platform::TimerEventArgs* args)
{
    Displays::TickAll(args);
}

uSStrong< ::g::Uno::Collections::List*> Displays::_All_;

// private static Uno.Platform.Display GetMainDisplay() [static] :40
::g::Uno::Platform::Display* Displays::GetMainDisplay()
{
    Displays_typeof()->Init();
    ::g::Uno::Platform::Display* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(Displays::All()), uCRef<int>(0), &ret2), ret2);
}

// private static extern void PopulateDisplaysList() [static] :28
void Displays::PopulateDisplaysList()
{
    Displays_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Displays::All()), ::g::Uno::Platform::iOSDisplay::WrapMainDisplay());
}

// internal static void TickAll(Uno.Platform.TimerEventArgs args) [static] :45
void Displays::TickAll(::g::Uno::Platform::TimerEventArgs* args)
{
    Displays_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Platform::Display*> > ret3;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Platform::Display*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Displays::All()), &ret3), ret3);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::TYPES[6/*Uno.Collections.List<Uno.Platform.Display>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::TYPES[6/*Uno.Collections.List<Uno.Platform.Display>.Enumerator*/]))
        {
            ::g::Uno::Platform::Display* d = enum1.Current(::TYPES[6/*Uno.Collections.List<Uno.Platform.Display>.Enumerator*/]);
            uPtr(d)->OnTick(args);
        }
    }
}

// public static generated Uno.Collections.List<Uno.Platform.Display> get_All() [static] :12
::g::Uno::Collections::List* Displays::All()
{
    Displays_typeof()->Init();
    return Displays::_All_;
}

// private static generated void set_All(Uno.Collections.List<Uno.Platform.Display> value) [static] :12
void Displays::All(::g::Uno::Collections::List* value)
{
    Displays_typeof()->Init();
    Displays::_All_ = value;
}

// public static Uno.Platform.Display get_MainDisplay() [static] :13
::g::Uno::Platform::Display* Displays::MainDisplay()
{
    Displays_typeof()->Init();
    return Displays::GetMainDisplay();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Enums.uno
// -------------------------------------------------------------------------

// public enum EventModifiers :148
uEnumType* EventModifiers_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.EventModifiers", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "MetaKey", 1LL,
        "ControlKey", 2LL,
        "ShiftKey", 4LL,
        "AltKey", 8LL,
        "LeftButton", 16LL,
        "MiddleButton", 32LL,
        "RightButton", 64LL,
        "X1Button", 128LL,
        "X2Button", 256LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Enums.uno
// -------------------------------------------------------------------------

// public enum Key :6
uEnumType* Key_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.Key", ::g::Uno::Int_typeof(), 82);
    type->SetLiterals(
        "Backspace", 8LL,
        "Tab", 9LL,
        "Enter", 13LL,
        "ShiftKey", 16LL,
        "ControlKey", 17LL,
        "AltKey", 18LL,
        "Break", 19LL,
        "CapsLock", 20LL,
        "Escape", 27LL,
        "Space", 32LL,
        "PageUp", 33LL,
        "PageDown", 34LL,
        "End", 35LL,
        "Home", 36LL,
        "Left", 37LL,
        "Up", 38LL,
        "Right", 39LL,
        "Down", 40LL,
        "Insert", 45LL,
        "Delete", 46LL,
        "D0", 48LL,
        "D1", 49LL,
        "D2", 50LL,
        "D3", 51LL,
        "D4", 52LL,
        "D5", 53LL,
        "D6", 54LL,
        "D7", 55LL,
        "D8", 56LL,
        "D9", 57LL,
        "A", 65LL,
        "B", 66LL,
        "C", 67LL,
        "D", 68LL,
        "E", 69LL,
        "F", 70LL,
        "G", 71LL,
        "H", 72LL,
        "I", 73LL,
        "J", 74LL,
        "K", 75LL,
        "L", 76LL,
        "M", 77LL,
        "N", 78LL,
        "O", 79LL,
        "P", 80LL,
        "Q", 81LL,
        "R", 82LL,
        "S", 83LL,
        "T", 84LL,
        "U", 85LL,
        "V", 86LL,
        "W", 87LL,
        "X", 88LL,
        "Y", 89LL,
        "Z", 90LL,
        "NumPad0", 96LL,
        "NumPad1", 97LL,
        "NumPad2", 98LL,
        "NumPad3", 99LL,
        "NumPad4", 100LL,
        "NumPad5", 101LL,
        "NumPad6", 102LL,
        "NumPad7", 103LL,
        "NumPad8", 104LL,
        "NumPad9", 105LL,
        "F1", 112LL,
        "F2", 113LL,
        "F3", 114LL,
        "F4", 115LL,
        "F5", 116LL,
        "F6", 117LL,
        "F7", 118LL,
        "F8", 119LL,
        "F9", 120LL,
        "F10", 121LL,
        "F11", 122LL,
        "F12", 123LL,
        "MenuButton", 200LL,
        "BackButton", 201LL,
        "OSKey", 202LL,
        "MetaKey", 203LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/KeyEventArgs.uno
// --------------------------------------------------------------------------------

// public sealed class KeyEventArgs :6
// {
static void KeyEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(KeyEventArgs, _Handled), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(KeyEventArgs, _Key), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(KeyEventArgs, _Modifiers), 0);
}

uType* KeyEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.KeyEventArgs", options);
    type->fp_build_ = KeyEventArgs_build;
    return type;
}

// public generated bool get_Handled() :22
void KeyEventArgs__get_Handled_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :22
void KeyEventArgs__set_Handled_fn(KeyEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public bool get_IsAltKeyPressed() :52
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// public bool get_IsControlKeyPressed() :42
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// public bool get_IsMetaKeyPressed() :37
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// public bool get_IsShiftKeyPressed() :47
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// public generated Uno.Platform.Key get_Key() :27
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value) :27
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value)
{
    __this->Key(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() :32
void KeyEventArgs__get_Modifiers_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) :32
void KeyEventArgs__set_Modifiers_fn(KeyEventArgs* __this, int* value)
{
    __this->Modifiers(*value);
}

// public generated bool get_Handled() [instance] :22
bool KeyEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :22
void KeyEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public bool get_IsAltKeyPressed() [instance] :52
bool KeyEventArgs::IsAltKeyPressed()
{
    return (Modifiers() & 8) == 8;
}

// public bool get_IsControlKeyPressed() [instance] :42
bool KeyEventArgs::IsControlKeyPressed()
{
    return (Modifiers() & 2) == 2;
}

// public bool get_IsMetaKeyPressed() [instance] :37
bool KeyEventArgs::IsMetaKeyPressed()
{
    return (Modifiers() & 1) == 1;
}

// public bool get_IsShiftKeyPressed() [instance] :47
bool KeyEventArgs::IsShiftKeyPressed()
{
    return (Modifiers() & 4) == 4;
}

// public generated Uno.Platform.Key get_Key() [instance] :27
int KeyEventArgs::Key()
{
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance] :27
void KeyEventArgs::Key(int value)
{
    _Key = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance] :32
int KeyEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance] :32
void KeyEventArgs::Modifiers(int value)
{
    _Modifiers = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/OSFrame.uno
// ---------------------------------------------------------------------------

// public class OSFrame :7
// {
static void OSFrame_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), offsetof(OSFrame, _handle), 0);
}

uType* OSFrame_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(OSFrame);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.OSFrame", options);
    type->fp_build_ = OSFrame_build;
    return type;
}

// internal OSFrame() :11
void OSFrame__ctor__fn(OSFrame* __this)
{
    __this->ctor_();
}

// internal OSFrame() [instance] :11
void OSFrame::ctor_()
{
    _handle = (void*)NULL;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Enums.uno
// -------------------------------------------------------------------------

// public enum PointerType :130
uEnumType* PointerType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.PointerType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Mouse", 1LL,
        "Touch", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/TimerEventArgs.uno
// ----------------------------------------------------------------------------------

// public sealed class TimerEventArgs :6
// {
static void TimerEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(TimerEventArgs, _CurrentTime), 0,
        ::g::Uno::Double_typeof(), offsetof(TimerEventArgs, _LastTickTimestamp), 0,
        ::g::Uno::Double_typeof(), offsetof(TimerEventArgs, _TickDuration), 0);
}

uType* TimerEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TimerEventArgs", options);
    type->fp_build_ = TimerEventArgs_build;
    return type;
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration, double currentTime) :8
void TimerEventArgs__ctor_1_fn(TimerEventArgs* __this, double* lastTickTimestamp, double* tickDuration, double* currentTime)
{
    __this->ctor_1(*lastTickTimestamp, *tickDuration, *currentTime);
}

// public generated double get_CurrentTime() :17
void TimerEventArgs__get_CurrentTime_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->CurrentTime();
}

// private generated void set_CurrentTime(double value) :17
void TimerEventArgs__set_CurrentTime_fn(TimerEventArgs* __this, double* value)
{
    __this->CurrentTime(*value);
}

// public generated double get_LastTickTimestamp() :15
void TimerEventArgs__get_LastTickTimestamp_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->LastTickTimestamp();
}

// private generated void set_LastTickTimestamp(double value) :15
void TimerEventArgs__set_LastTickTimestamp_fn(TimerEventArgs* __this, double* value)
{
    __this->LastTickTimestamp(*value);
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration, double currentTime) :8
void TimerEventArgs__New2_fn(double* lastTickTimestamp, double* tickDuration, double* currentTime, TimerEventArgs** __retval)
{
    *__retval = TimerEventArgs::New2(*lastTickTimestamp, *tickDuration, *currentTime);
}

// public generated double get_TickDuration() :16
void TimerEventArgs__get_TickDuration_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->TickDuration();
}

// private generated void set_TickDuration(double value) :16
void TimerEventArgs__set_TickDuration_fn(TimerEventArgs* __this, double* value)
{
    __this->TickDuration(*value);
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration, double currentTime) [instance] :8
void TimerEventArgs::ctor_1(double lastTickTimestamp, double tickDuration, double currentTime)
{
    ctor_();
    LastTickTimestamp(lastTickTimestamp);
    TickDuration(tickDuration);
    CurrentTime(currentTime);
}

// public generated double get_CurrentTime() [instance] :17
double TimerEventArgs::CurrentTime()
{
    return _CurrentTime;
}

// private generated void set_CurrentTime(double value) [instance] :17
void TimerEventArgs::CurrentTime(double value)
{
    _CurrentTime = value;
}

// public generated double get_LastTickTimestamp() [instance] :15
double TimerEventArgs::LastTickTimestamp()
{
    return _LastTickTimestamp;
}

// private generated void set_LastTickTimestamp(double value) [instance] :15
void TimerEventArgs::LastTickTimestamp(double value)
{
    _LastTickTimestamp = value;
}

// public generated double get_TickDuration() [instance] :16
double TimerEventArgs::TickDuration()
{
    return _TickDuration;
}

// private generated void set_TickDuration(double value) [instance] :16
void TimerEventArgs::TickDuration(double value)
{
    _TickDuration = value;
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration, double currentTime) [static] :8
TimerEventArgs* TimerEventArgs::New2(double lastTickTimestamp, double tickDuration, double currentTime)
{
    TimerEventArgs* obj1 = (TimerEventArgs*)uNew(TimerEventArgs_typeof());
    obj1->ctor_1(lastTickTimestamp, tickDuration, currentTime);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Platform/Window.uno
// --------------------------------------------------------------------------

// public sealed extern class Window :7
// {
static void Window_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof(),
        ::g::Uno::EventArgs_typeof());
    type->SetFields(1,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(Window, GotFocus1), 0,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(Window, LostFocus1), 0,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(Window, Updating1), 0);
}

uType* Window_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Platform::OSFrame_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Window);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.Window", options);
    type->fp_build_ = Window_build;
    type->fp_ctor_ = (void*)Window__New2_fn;
    return type;
}

// internal Window() :9
void Window__ctor_1_fn(Window* __this)
{
    __this->ctor_1();
}

// public generated void add_GotFocus(Uno.EventHandler value) :95
void Window__add_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_GotFocus(value);
}

// public generated void remove_GotFocus(Uno.EventHandler value) :95
void Window__remove_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_GotFocus(value);
}

// public generated void add_LostFocus(Uno.EventHandler value) :103
void Window__add_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_LostFocus(value);
}

// public generated void remove_LostFocus(Uno.EventHandler value) :103
void Window__remove_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_LostFocus(value);
}

// internal Window New() :9
void Window__New2_fn(Window** __retval)
{
    *__retval = Window::New2();
}

// private void OnGotFocus(Uno.Platform.ApplicationState newState) :96
void Window__OnGotFocus_fn(Window* __this, int* newState)
{
    __this->OnGotFocus(*newState);
}

// private void OnLostFocus(Uno.Platform.ApplicationState newState) :104
void Window__OnLostFocus_fn(Window* __this, int* newState)
{
    __this->OnLostFocus(*newState);
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) :87
void Window__OnTick_fn(Window* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(sender, args);
}

// public generated void add_Updating(Uno.EventHandler value) :86
void Window__add_Updating_fn(Window* __this, uDelegate* value)
{
    __this->add_Updating(value);
}

// public generated void remove_Updating(Uno.EventHandler value) :86
void Window__remove_Updating_fn(Window* __this, uDelegate* value)
{
    __this->remove_Updating(value);
}

// internal Window() [instance] :9
void Window::ctor_1()
{
    ctor_();
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->add_Tick(uDelegate::New(::TYPES[4/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], (void*)Window__OnTick_fn, this));
    ::g::Uno::Platform::CoreApp::add_EnteringInteractive(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Window__OnGotFocus_fn, this));
    ::g::Uno::Platform::CoreApp::add_ExitedInteractive(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Window__OnLostFocus_fn, this));
}

// public generated void add_GotFocus(Uno.EventHandler value) [instance] :95
void Window::add_GotFocus(uDelegate* value)
{
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(GotFocus1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_GotFocus(Uno.EventHandler value) [instance] :95
void Window::remove_GotFocus(uDelegate* value)
{
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(GotFocus1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void add_LostFocus(Uno.EventHandler value) [instance] :103
void Window::add_LostFocus(uDelegate* value)
{
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LostFocus1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_LostFocus(Uno.EventHandler value) [instance] :103
void Window::remove_LostFocus(uDelegate* value)
{
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LostFocus1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// private void OnGotFocus(Uno.Platform.ApplicationState newState) [instance] :96
void Window::OnGotFocus(int newState)
{
    uDelegate* handler = GotFocus1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private void OnLostFocus(Uno.Platform.ApplicationState newState) [instance] :104
void Window::OnLostFocus(int newState)
{
    uDelegate* handler = LostFocus1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) [instance] :87
void Window::OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    uDelegate* handler = Updating1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, sender, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// public generated void add_Updating(Uno.EventHandler value) [instance] :86
void Window::add_Updating(uDelegate* value)
{
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Updating1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_Updating(Uno.EventHandler value) [instance] :86
void Window::remove_Updating(uDelegate* value)
{
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Updating1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// internal Window New() [static] :9
Window* Window::New2()
{
    Window* obj1 = (Window*)uNew(Window_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Platform
