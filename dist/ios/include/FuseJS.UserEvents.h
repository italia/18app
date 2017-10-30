// This file was generated based on /usr/local/share/uno/Packages/FuseJS/1.3.1/UserEvents.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace FuseJS{struct UserEvents;}}

namespace g{
namespace FuseJS{

// public sealed class UserEvents :30
// {
::g::Fuse::Scripting::NativeModule_type* UserEvents_typeof();
void UserEvents__ctor_2_fn(UserEvents* __this);
void UserEvents__New2_fn(UserEvents** __retval);
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct UserEvents : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<UserEvents*> _instance_;
    static uSStrong<UserEvents*>& _instance() { return _instance_; }
    static bool _warn_;
    static bool& _warn() { return _warn_; }

    void ctor_2();
    static UserEvents* New2();
    static uObject* Raise(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}} // ::g::FuseJS
