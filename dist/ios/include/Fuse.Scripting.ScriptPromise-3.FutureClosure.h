// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptPromise__FutureClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptPromise__PromiseClosure;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptPromise<TSelf, TResult, TJSResult>.FutureClosure :200
// {
uType* ScriptPromise__FutureClosure_typeof();
void ScriptPromise__FutureClosure__ctor__fn(ScriptPromise__FutureClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* futureFactory, ::g::Fuse::Scripting::ScriptPromise__PromiseClosure* promiseClosure, void* self, uArray* args);
void ScriptPromise__FutureClosure__DispatchFuture_fn(ScriptPromise__FutureClosure* __this);
void ScriptPromise__FutureClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* futureFactory, ::g::Fuse::Scripting::ScriptPromise__PromiseClosure* promiseClosure, void* self, uArray* args, ScriptPromise__FutureClosure** __retval);
void ScriptPromise__FutureClosure__Run_fn(ScriptPromise__FutureClosure* __this);

struct ScriptPromise__FutureClosure : uObject
{
    uStrong<uArray*> _args;
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Uno::Threading::Future1*> _future;
    uStrong<uDelegate*> _futureFactory;
    uStrong< ::g::Fuse::Scripting::ScriptPromise__PromiseClosure*> _promiseClosure;
    uTField _self() { return __type->Field(this, 5); }

    template<class TSelf>
    void ctor_(::g::Fuse::Scripting::Context* context, uDelegate* futureFactory, ::g::Fuse::Scripting::ScriptPromise__PromiseClosure* promiseClosure, TSelf self, uArray* args) { ScriptPromise__FutureClosure__ctor__fn(this, context, futureFactory, promiseClosure, uConstrain(__type->T(0), self), args); }
    void DispatchFuture();
    void Run();
    template<class TSelf>
    static ScriptPromise__FutureClosure* New1(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* futureFactory, ::g::Fuse::Scripting::ScriptPromise__PromiseClosure* promiseClosure, TSelf self, uArray* args) { ScriptPromise__FutureClosure* __retval; return ScriptPromise__FutureClosure__New1_fn(__type, context, futureFactory, promiseClosure, uConstrain(__type->T(0), self), args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
