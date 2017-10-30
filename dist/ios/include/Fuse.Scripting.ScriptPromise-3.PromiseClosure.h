// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptPromise__PromiseClosure;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure :235
// {
uType* ScriptPromise__PromiseClosure_typeof();
void ScriptPromise__PromiseClosure__ctor__fn(ScriptPromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter);
void ScriptPromise__PromiseClosure__DispatchReject_fn(ScriptPromise__PromiseClosure* __this);
void ScriptPromise__PromiseClosure__DispatchResolve_fn(ScriptPromise__PromiseClosure* __this);
void ScriptPromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter, ScriptPromise__PromiseClosure** __retval);
void ScriptPromise__PromiseClosure__OnFutureReady_fn(ScriptPromise__PromiseClosure* __this, ::g::Uno::Threading::Future1* future);
void ScriptPromise__PromiseClosure__Reject_fn(ScriptPromise__PromiseClosure* __this, ::g::Uno::Exception* reason);
void ScriptPromise__PromiseClosure__Resolve_fn(ScriptPromise__PromiseClosure* __this, void* result);
void ScriptPromise__PromiseClosure__Run_fn(ScriptPromise__PromiseClosure* __this, uArray* args, uObject** __retval);

struct ScriptPromise__PromiseClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Uno::Threading::Future1*> _future;
    uStrong< ::g::Uno::Exception*> _reason;
    uStrong< ::g::Fuse::Scripting::Function*> _reject;
    uStrong< ::g::Fuse::Scripting::Function*> _resolve;
    uTField _result() { return __type->Field(this, 5); }
    uStrong<uDelegate*> _resultConverter;

    void ctor_(::g::Fuse::Scripting::Context* context, uDelegate* resultConverter);
    void DispatchReject();
    void DispatchResolve();
    void OnFutureReady(::g::Uno::Threading::Future1* future);
    void Reject(::g::Uno::Exception* reason);
    template<class TResult>
    void Resolve(TResult result) { ScriptPromise__PromiseClosure__Resolve_fn(this, uConstrain(__type->T(1), result)); }
    uObject* Run(uArray* args);
    static ScriptPromise__PromiseClosure* New1(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter);
};
// }

}}} // ::g::Fuse::Scripting
