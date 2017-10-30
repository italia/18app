// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.InterApp.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.StatusBarAnimation.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemUIID.h>
#include <Fuse.Platform.SystemUIResizeReason.h>
#include <Fuse.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.EventSources.InterAppInvoke.h>
#include <Uno.String.h>
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Platform{

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/AppAlerts.uno
// ---------------------------------------------------------------

// internal static class AppEvents :13
// {
// static AppEvents() :17
static void AppEvents__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)AppEvents__OnLowMemoryWarning_fn));
}

static void AppEvents_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Action*/], (uintptr_t)&AppEvents::LowMemoryWarning1_, uFieldFlagsStatic);
}

uClassType* AppEvents_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.AppEvents", options);
    type->fp_build_ = AppEvents_build;
    type->fp_cctor_ = AppEvents__cctor__fn;
    return type;
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) :15
void AppEvents__add_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::add_LowMemoryWarning(value);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) :15
void AppEvents__remove_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::remove_LowMemoryWarning(value);
}

// private static void OnLowMemoryWarning(object s, object a) :22
void AppEvents__OnLowMemoryWarning_fn(uObject* s, uObject* a)
{
    AppEvents::OnLowMemoryWarning(s, a);
}

uSStrong<uDelegate*> AppEvents::LowMemoryWarning1_;

// private static void OnLowMemoryWarning(object s, object a) [static] :22
void AppEvents::OnLowMemoryWarning(uObject* s, uObject* a)
{
    AppEvents_typeof()->Init();
    uDelegate* handler = AppEvents::LowMemoryWarning1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid();
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) [static] :15
void AppEvents::add_LowMemoryWarning(uDelegate* value)
{
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AppEvents::LowMemoryWarning1_, value), ::TYPES[1/*Uno.Action*/]);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) [static] :15
void AppEvents::remove_LowMemoryWarning(uDelegate* value)
{
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AppEvents::LowMemoryWarning1_, value), ::TYPES[1/*Uno.Action*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/Lifecycle.uno
// ---------------------------------------------------------------

// public enum ApplicationState :5
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/InterApp.uno
// --------------------------------------------------------------

// public static class InterApp :9
// {
// static InterApp() :14
static void InterApp__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::EventSources::InterAppInvoke_typeof()->Init();
    ::g::Uno::Platform::EventSources::InterAppInvoke::add_ReceivedURI(uDelegate::New(::TYPES[2/*Uno.EventHandler<string>*/], (void*)InterApp__OnReceivedURI_fn));
}

static void InterApp_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[3/*Uno.Action<string>*/], (uintptr_t)&InterApp::ReceivedURI1_, uFieldFlagsStatic);
}

uClassType* InterApp_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.InterApp", options);
    type->fp_build_ = InterApp_build;
    type->fp_cctor_ = InterApp__cctor__fn;
    return type;
}

// private static void OnReceivedURI(object sender, string uri) :19
void InterApp__OnReceivedURI_fn(uObject* sender, uString* uri)
{
    InterApp::OnReceivedURI(sender, uri);
}

// public static generated void add_ReceivedURI(Uno.Action<string> value) :12
void InterApp__add_ReceivedURI_fn(uDelegate* value)
{
    InterApp::add_ReceivedURI(value);
}

// public static generated void remove_ReceivedURI(Uno.Action<string> value) :12
void InterApp__remove_ReceivedURI_fn(uDelegate* value)
{
    InterApp::remove_ReceivedURI(value);
}

uSStrong<uDelegate*> InterApp::ReceivedURI1_;

// private static void OnReceivedURI(object sender, string uri) [static] :19
void InterApp::OnReceivedURI(uObject* sender, uString* uri)
{
    InterApp_typeof()->Init();
    uDelegate* handler = InterApp::ReceivedURI1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uri);
}

// public static generated void add_ReceivedURI(Uno.Action<string> value) [static] :12
void InterApp::add_ReceivedURI(uDelegate* value)
{
    InterApp_typeof()->Init();
    InterApp::ReceivedURI1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(InterApp::ReceivedURI1_, value), ::TYPES[3/*Uno.Action<string>*/]);
}

// public static generated void remove_ReceivedURI(Uno.Action<string> value) [static] :12
void InterApp::remove_ReceivedURI(uDelegate* value)
{
    InterApp_typeof()->Init();
    InterApp::ReceivedURI1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(InterApp::ReceivedURI1_, value), ::TYPES[3/*Uno.Action<string>*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/Lifecycle.uno
// ---------------------------------------------------------------

// public static class Lifecycle :22
// {
// static Lifecycle() :34
static void Lifecycle__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_Started(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnStarted_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringForeground(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_ExitedInteractive(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringBackground(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[4/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

static void Lifecycle_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::Started1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::Terminating1_, uFieldFlagsStatic);
}

uClassType* Lifecycle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_cctor_ = Lifecycle__cctor__fn;
    return type;
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :31
void Lifecycle__add_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :31
void Lifecycle__remove_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :28
void Lifecycle__add_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :28
void Lifecycle__remove_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :29
void Lifecycle__add_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :29
void Lifecycle__remove_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringInteractive(value);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :30
void Lifecycle__add_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :30
void Lifecycle__remove_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_ExitedInteractive(value);
}

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) :72
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) :51
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) :58
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) :65
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) :44
void Lifecycle__OnStarted_fn(int* newState)
{
    Lifecycle::OnStarted(*newState);
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) :79
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :27
void Lifecycle__add_Started_fn(uDelegate* value)
{
    Lifecycle::add_Started(value);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :27
void Lifecycle__remove_Started_fn(uDelegate* value)
{
    Lifecycle::remove_Started(value);
}

// public static Fuse.Platform.ApplicationState get_State() :25
void Lifecycle__get_State_fn(int* __retval)
{
    *__retval = Lifecycle::State();
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :32
void Lifecycle__add_Terminating_fn(uDelegate* value)
{
    Lifecycle::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :32
void Lifecycle__remove_Terminating_fn(uDelegate* value)
{
    Lifecycle::remove_Terminating(value);
}

uSStrong<uDelegate*> Lifecycle::EnteringBackground1_;
uSStrong<uDelegate*> Lifecycle::EnteringForeground1_;
uSStrong<uDelegate*> Lifecycle::EnteringInteractive1_;
uSStrong<uDelegate*> Lifecycle::ExitedInteractive1_;
uSStrong<uDelegate*> Lifecycle::Started1_;
uSStrong<uDelegate*> Lifecycle::Terminating1_;

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) [static] :72
void Lifecycle::OnEnteringBackground(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringBackground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) [static] :51
void Lifecycle::OnEnteringForeground(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringForeground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) [static] :58
void Lifecycle::OnEnteringInteractive(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) [static] :65
void Lifecycle::OnExitedInteractive(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::ExitedInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) [static] :44
void Lifecycle::OnStarted(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Started1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) [static] :79
void Lifecycle::OnTerminating(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Terminating1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// public static Fuse.Platform.ApplicationState get_State() [static] :25
int Lifecycle::State()
{
    Lifecycle_typeof()->Init();
    return ::g::Uno::Platform::CoreApp::State();
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :31
void Lifecycle::add_EnteringBackground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringBackground1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :31
void Lifecycle::remove_EnteringBackground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringBackground1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :28
void Lifecycle::add_EnteringForeground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringForeground1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :28
void Lifecycle::remove_EnteringForeground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringForeground1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :29
void Lifecycle::add_EnteringInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringInteractive1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :29
void Lifecycle::remove_EnteringInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringInteractive1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :30
void Lifecycle::add_ExitedInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::ExitedInteractive1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :30
void Lifecycle::remove_ExitedInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::ExitedInteractive1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :27
void Lifecycle::add_Started(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Started1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :27
void Lifecycle::remove_Started(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Started1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :32
void Lifecycle::add_Terminating(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Terminating1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :32
void Lifecycle::remove_Terminating(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Terminating1_, value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/iOS/SystemUI.uno
// ------------------------------------------------------------------

// public enum StatusBarAnimation :14
uEnumType* StatusBarAnimation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.StatusBarAnimation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Fade", 1LL,
        "Slide", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/iOS/SystemUI.uno
// ------------------------------------------------------------------

// public enum StatusBarStyle :8
uEnumType* StatusBarStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.StatusBarStyle", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Dark", 0LL,
        "Light", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/SystemUI.uno
// --------------------------------------------------------------

// public enum SystemUIID :8
uEnumType* SystemUIID_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SystemUIID", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "TopFrame", 0LL,
        "BottomFrame", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/SystemUI.uno
// --------------------------------------------------------------

// public enum SystemUIResizeReason :14
uEnumType* SystemUIResizeReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SystemUIResizeReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/SystemUI.uno
// --------------------------------------------------------------

// public sealed class SystemUIWillResizeEventArgs :28
// {
static void SystemUIWillResizeEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(SystemUIWillResizeEventArgs, _AnimationCurve), 0,
        ::g::Uno::Double_typeof(), offsetof(SystemUIWillResizeEventArgs, _AnimationDuration), 0,
        ::g::Uno::Rect_typeof(), offsetof(SystemUIWillResizeEventArgs, _EndFrame), 0,
        ::g::Fuse::Platform::SystemUIID_typeof(), offsetof(SystemUIWillResizeEventArgs, _ID), 0,
        ::g::Uno::Bool_typeof(), offsetof(SystemUIWillResizeEventArgs, _IsAnimated), 0,
        ::g::Fuse::Platform::SystemUIResizeReason_typeof(), offsetof(SystemUIWillResizeEventArgs, _ResizeReason), 0,
        ::g::Uno::Rect_typeof(), offsetof(SystemUIWillResizeEventArgs, _StartFrame), 0);
}

uType* SystemUIWillResizeEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SystemUIWillResizeEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Platform.SystemUIWillResizeEventArgs", options);
    type->fp_build_ = SystemUIWillResizeEventArgs_build;
    return type;
}

// public SystemUIWillResizeEventArgs(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :39
void SystemUIWillResizeEventArgs__ctor_1_fn(SystemUIWillResizeEventArgs* __this, int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve)
{
    __this->ctor_1(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated int get_AnimationCurve() :36
void SystemUIWillResizeEventArgs__get_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->AnimationCurve();
}

// private generated void set_AnimationCurve(int value) :36
void SystemUIWillResizeEventArgs__set_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->AnimationCurve(*value);
}

// public generated double get_AnimationDuration() :35
void SystemUIWillResizeEventArgs__get_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* __retval)
{
    *__retval = __this->AnimationDuration();
}

// private generated void set_AnimationDuration(double value) :35
void SystemUIWillResizeEventArgs__set_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* value)
{
    __this->AnimationDuration(*value);
}

// public generated Uno.Rect get_EndFrame() :33
void SystemUIWillResizeEventArgs__get_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->EndFrame();
}

// private generated void set_EndFrame(Uno.Rect value) :33
void SystemUIWillResizeEventArgs__set_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->EndFrame(*value);
}

// public generated Fuse.Platform.SystemUIID get_ID() :30
void SystemUIWillResizeEventArgs__get_ID_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ID();
}

// private generated void set_ID(Fuse.Platform.SystemUIID value) :30
void SystemUIWillResizeEventArgs__set_ID_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ID(*value);
}

// public generated bool get_IsAnimated() :34
void SystemUIWillResizeEventArgs__get_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAnimated();
}

// private generated void set_IsAnimated(bool value) :34
void SystemUIWillResizeEventArgs__set_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* value)
{
    __this->IsAnimated(*value);
}

// public SystemUIWillResizeEventArgs New(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :39
void SystemUIWillResizeEventArgs__New2_fn(int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve, SystemUIWillResizeEventArgs** __retval)
{
    *__retval = SystemUIWillResizeEventArgs::New2(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated Fuse.Platform.SystemUIResizeReason get_ResizeReason() :31
void SystemUIWillResizeEventArgs__get_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ResizeReason();
}

// private generated void set_ResizeReason(Fuse.Platform.SystemUIResizeReason value) :31
void SystemUIWillResizeEventArgs__set_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ResizeReason(*value);
}

// public generated Uno.Rect get_StartFrame() :32
void SystemUIWillResizeEventArgs__get_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->StartFrame();
}

// private generated void set_StartFrame(Uno.Rect value) :32
void SystemUIWillResizeEventArgs__set_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->StartFrame(*value);
}

// public SystemUIWillResizeEventArgs(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [instance] :39
void SystemUIWillResizeEventArgs::ctor_1(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    ctor_();
    ID(id);
    ResizeReason(resizeReason);
    StartFrame(startFrame);
    EndFrame(endFrame);

    if (animationDuration != 0.0)
    {
        IsAnimated(true);
        AnimationDuration(animationDuration);
        AnimationCurve(animationCurve);
    }
}

// public generated int get_AnimationCurve() [instance] :36
int SystemUIWillResizeEventArgs::AnimationCurve()
{
    return _AnimationCurve;
}

// private generated void set_AnimationCurve(int value) [instance] :36
void SystemUIWillResizeEventArgs::AnimationCurve(int value)
{
    _AnimationCurve = value;
}

// public generated double get_AnimationDuration() [instance] :35
double SystemUIWillResizeEventArgs::AnimationDuration()
{
    return _AnimationDuration;
}

// private generated void set_AnimationDuration(double value) [instance] :35
void SystemUIWillResizeEventArgs::AnimationDuration(double value)
{
    _AnimationDuration = value;
}

// public generated Uno.Rect get_EndFrame() [instance] :33
::g::Uno::Rect SystemUIWillResizeEventArgs::EndFrame()
{
    return _EndFrame;
}

// private generated void set_EndFrame(Uno.Rect value) [instance] :33
void SystemUIWillResizeEventArgs::EndFrame(::g::Uno::Rect value)
{
    _EndFrame = value;
}

// public generated Fuse.Platform.SystemUIID get_ID() [instance] :30
int SystemUIWillResizeEventArgs::ID()
{
    return _ID;
}

// private generated void set_ID(Fuse.Platform.SystemUIID value) [instance] :30
void SystemUIWillResizeEventArgs::ID(int value)
{
    _ID = value;
}

// public generated bool get_IsAnimated() [instance] :34
bool SystemUIWillResizeEventArgs::IsAnimated()
{
    return _IsAnimated;
}

// private generated void set_IsAnimated(bool value) [instance] :34
void SystemUIWillResizeEventArgs::IsAnimated(bool value)
{
    _IsAnimated = value;
}

// public generated Fuse.Platform.SystemUIResizeReason get_ResizeReason() [instance] :31
int SystemUIWillResizeEventArgs::ResizeReason()
{
    return _ResizeReason;
}

// private generated void set_ResizeReason(Fuse.Platform.SystemUIResizeReason value) [instance] :31
void SystemUIWillResizeEventArgs::ResizeReason(int value)
{
    _ResizeReason = value;
}

// public generated Uno.Rect get_StartFrame() [instance] :32
::g::Uno::Rect SystemUIWillResizeEventArgs::StartFrame()
{
    return _StartFrame;
}

// private generated void set_StartFrame(Uno.Rect value) [instance] :32
void SystemUIWillResizeEventArgs::StartFrame(::g::Uno::Rect value)
{
    _StartFrame = value;
}

// public SystemUIWillResizeEventArgs New(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [static] :39
SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs::New2(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    SystemUIWillResizeEventArgs* obj1 = (SystemUIWillResizeEventArgs*)uNew(SystemUIWillResizeEventArgs_typeof());
    obj1->ctor_1(id, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    return obj1;
}
// }

}}} // ::g::Fuse::Platform
