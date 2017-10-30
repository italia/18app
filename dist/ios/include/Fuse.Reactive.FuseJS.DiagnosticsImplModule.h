// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/DiagnosticsImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct DiagnosticsImplModule;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class DiagnosticsImplModule :12
// {
::g::Fuse::Scripting::NativeModule_type* DiagnosticsImplModule_typeof();
void DiagnosticsImplModule__ctor_2_fn(DiagnosticsImplModule* __this);
void DiagnosticsImplModule__New2_fn(DiagnosticsImplModule** __retval);
void DiagnosticsImplModule__Report_fn(DiagnosticsImplModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct DiagnosticsImplModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<DiagnosticsImplModule*> _instance_;
    static uSStrong<DiagnosticsImplModule*>& _instance() { return _instance_; }

    void ctor_2();
    uObject* Report(::g::Fuse::Scripting::Context* context, uArray* args);
    static DiagnosticsImplModule* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
