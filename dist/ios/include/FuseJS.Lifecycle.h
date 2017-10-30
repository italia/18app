// This file was generated based on /usr/local/share/uno/Packages/FuseJS/1.3.1/Lifecycle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty;}}}
namespace g{namespace FuseJS{struct Lifecycle;}}

namespace g{
namespace FuseJS{

// public sealed class Lifecycle :97
// {
::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof();
void Lifecycle__ctor_3_fn(Lifecycle* __this);
void Lifecycle__Converter_fn(::g::Fuse::Scripting::Context* context, int* state, int* __retval);
void Lifecycle__GetApplicationStateBackground_fn(int* __retval);
void Lifecycle__GetApplicationStateForeground_fn(int* __retval);
void Lifecycle__GetApplicationStateInteractive_fn(int* __retval);
void Lifecycle__GetCurrentState_fn(int* __retval);
void Lifecycle__New3_fn(Lifecycle** __retval);
void Lifecycle__OnEnteringBackground_fn(Lifecycle* __this, int* newState);
void Lifecycle__OnEnteringForeground_fn(Lifecycle* __this, int* newState);
void Lifecycle__OnEnteringInteractive_fn(Lifecycle* __this, int* newState);
void Lifecycle__OnExitedInteractive_fn(Lifecycle* __this, int* newState);
void Lifecycle__OnStateChanged_fn(Lifecycle* __this, int* newState);

struct Lifecycle : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    uStrong< ::g::Fuse::Scripting::NativeProperty*> _background;
    uStrong< ::g::Fuse::Scripting::NativeProperty*> _foreground;
    static uSStrong<Lifecycle*> _instance_;
    static uSStrong<Lifecycle*>& _instance() { return _instance_; }
    uStrong< ::g::Fuse::Scripting::NativeProperty*> _interactive;
    uStrong< ::g::Fuse::Scripting::NativeProperty*> _state;

    void ctor_3();
    void OnEnteringBackground(int newState);
    void OnEnteringForeground(int newState);
    void OnEnteringInteractive(int newState);
    void OnExitedInteractive(int newState);
    void OnStateChanged(int newState);
    static int Converter(::g::Fuse::Scripting::Context* context, int state);
    static int GetApplicationStateBackground();
    static int GetApplicationStateForeground();
    static int GetApplicationStateInteractive();
    static int GetCurrentState();
    static Lifecycle* New3();
};
// }

}} // ::g::FuseJS
