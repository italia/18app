// This file was generated based on '/Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.3.1/Phone/JS.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Phone;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Phone :21
// {
::g::Fuse::Scripting::NativeModule_type* Phone_typeof();
void Phone__ctor_2_fn(Phone* __this);
void Phone__Call_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Phone__New2_fn(Phone** __retval);

struct Phone : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Phone*> _instance_;
    static uSStrong<Phone*>& _instance() { return _instance_; }

    void ctor_2();
    static uObject* Call(::g::Fuse::Scripting::Context* context, uArray* args);
    static Phone* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
