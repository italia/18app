// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/Http.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http__FunctionClosure;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Http.FunctionClosure :31
// {
uType* Http__FunctionClosure_typeof();
void Http__FunctionClosure__ctor__fn(Http__FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback);
void Http__FunctionClosure__get_Callback_fn(Http__FunctionClosure* __this, uDelegate** __retval);
void Http__FunctionClosure__function_fn(Http__FunctionClosure* __this, uArray* args, uObject** __retval);
void Http__FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, Http__FunctionClosure** __retval);

struct Http__FunctionClosure : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::Context*> _context;

    void ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback);
    uDelegate* Callback();
    uObject* function(uArray* args);
    static Http__FunctionClosure* New1(::g::Fuse::Scripting::Context* context, uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
