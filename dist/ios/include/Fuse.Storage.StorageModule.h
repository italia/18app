// This file was generated based on /usr/local/share/uno/Packages/Fuse.Storage/1.3.1/StorageModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Storage{struct StorageModule;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Storage{

// public sealed class StorageModule :18
// {
::g::Fuse::Scripting::NativeModule_type* StorageModule_typeof();
void StorageModule__ctor_2_fn(StorageModule* __this);
void StorageModule__Delete_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void StorageModule__New2_fn(StorageModule** __retval);
void StorageModule__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void StorageModule__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void StorageModule__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void StorageModule__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct StorageModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<StorageModule*> _instance_;
    static uSStrong<StorageModule*>& _instance() { return _instance_; }

    void ctor_2();
    static uObject* Delete(::g::Fuse::Scripting::Context* c, uArray* args);
    static StorageModule* New2();
    static uObject* Read(::g::Fuse::Scripting::Context* c, uArray* args);
    static ::g::Uno::Threading::Future1* ReadAsync(uArray* args);
    static uObject* Write(::g::Fuse::Scripting::Context* c, uArray* args);
    static ::g::Uno::Threading::Future1* WriteAsync(uArray* args);
};
// }

}}} // ::g::Fuse::Storage
