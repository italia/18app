// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.3.1/WebSocketModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace WebSocket{struct NativeFunctionModule;}}}

namespace g{
namespace Fuse{
namespace WebSocket{

// public abstract class NativeFunctionModule :10
// {
struct NativeFunctionModule_type : ::g::Fuse::Scripting::NativeModule_type
{
    void(*fp_Create)(::g::Fuse::WebSocket::NativeFunctionModule*, ::g::Fuse::Scripting::Context*, uArray*, uObject**);
};

NativeFunctionModule_type* NativeFunctionModule_typeof();
void NativeFunctionModule__ctor_2_fn(NativeFunctionModule* __this, uString* name);
void NativeFunctionModule__Evaluate_fn(NativeFunctionModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result);

struct NativeFunctionModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<NativeFunctionModule*> _instance_;
    static uSStrong<NativeFunctionModule*>& _instance() { return _instance_; }

    void ctor_2(uString* name);
    uObject* Create(::g::Fuse::Scripting::Context* context, uArray* args) { uObject* __retval; return (((NativeFunctionModule_type*)__type)->fp_Create)(this, context, args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::WebSocket
