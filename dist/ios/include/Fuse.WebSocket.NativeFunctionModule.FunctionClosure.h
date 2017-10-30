// This file was generated based on /usr/local/share/uno/Packages/Fuse.WebSockets/1.3.1/WebSocketModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace WebSocket{struct NativeFunctionModule__FunctionClosure;}}}

namespace g{
namespace Fuse{
namespace WebSocket{

// private sealed class NativeFunctionModule.FunctionClosure :30
// {
uType* NativeFunctionModule__FunctionClosure_typeof();
void NativeFunctionModule__FunctionClosure__ctor__fn(NativeFunctionModule__FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback);
void NativeFunctionModule__FunctionClosure__get_Callback_fn(NativeFunctionModule__FunctionClosure* __this, uDelegate** __retval);
void NativeFunctionModule__FunctionClosure__function_fn(NativeFunctionModule__FunctionClosure* __this, uArray* args, uObject** __retval);
void NativeFunctionModule__FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, NativeFunctionModule__FunctionClosure** __retval);

struct NativeFunctionModule__FunctionClosure : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::Context*> _context;

    void ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback);
    uDelegate* Callback();
    uObject* function(uArray* args);
    static NativeFunctionModule__FunctionClosure* New1(::g::Fuse::Scripting::Context* context, uDelegate* callback);
};
// }

}}} // ::g::Fuse::WebSocket
