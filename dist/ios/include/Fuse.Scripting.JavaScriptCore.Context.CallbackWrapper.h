// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/1.3.1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context__CallbackWrapper;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// private sealed extern class Context.CallbackWrapper :285
// {
uType* Context__CallbackWrapper_typeof();
void Context__CallbackWrapper__ctor__fn(Context__CallbackWrapper* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback);
void Context__CallbackWrapper__Call_fn(Context__CallbackWrapper* __this, uArray* args, ::JSValueRef* exception, ::JSValueRef* __retval);
void Context__CallbackWrapper__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback, Context__CallbackWrapper** __retval);

struct Context__CallbackWrapper : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::JavaScriptCore::Context*> _context;

    void ctor_(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback);
    ::JSValueRef Call(uArray* args, ::JSValueRef* exception);
    static Context__CallbackWrapper* New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
