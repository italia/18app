// This file was generated based on '/Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.InterApp/1.3.1/InterApp/JS.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct InterApp;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class InterApp :32
// {
::g::Fuse::Scripting::NativeModule_type* InterApp_typeof();
void InterApp__ctor_3_fn(InterApp* __this);
void InterApp__LaunchUri_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void InterApp__New3_fn(InterApp** __retval);
void InterApp__OnReceivedUri_fn(InterApp* __this, uString* uri);

struct InterApp : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    static uSStrong<InterApp*> _instance_;
    static uSStrong<InterApp*>& _instance() { return _instance_; }

    void ctor_3();
    void OnReceivedUri(uString* uri);
    static uObject* LaunchUri(::g::Fuse::Scripting::Context* context, uArray* args);
    static InterApp* New3();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
