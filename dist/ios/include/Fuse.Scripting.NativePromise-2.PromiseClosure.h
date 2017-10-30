// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativePromise.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativePromise__PromiseClosure;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativePromise<T, TJSResult>.PromiseClosure :90
// {
uType* NativePromise__PromiseClosure_typeof();
void NativePromise__PromiseClosure__ctor__fn(NativePromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter);
void NativePromise__PromiseClosure__InternalReject_fn(NativePromise__PromiseClosure* __this);
void NativePromise__PromiseClosure__InternalResolve_fn(NativePromise__PromiseClosure* __this);
void NativePromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter, NativePromise__PromiseClosure** __retval);
void NativePromise__PromiseClosure__Reject_fn(NativePromise__PromiseClosure* __this, ::g::Uno::Exception* reason);
void NativePromise__PromiseClosure__Resolve_fn(NativePromise__PromiseClosure* __this, void* result);
void NativePromise__PromiseClosure__Run_fn(NativePromise__PromiseClosure* __this, uArray* args, uObject** __retval);

struct NativePromise__PromiseClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _c;
    uStrong<uDelegate*> _converter;
    uStrong< ::g::Uno::Threading::Future1*> _promise;
    uStrong< ::g::Uno::Exception*> _reason;
    uStrong< ::g::Fuse::Scripting::Function*> _reject;
    uStrong< ::g::Fuse::Scripting::Function*> _resolve;
    uTField _result() { return __type->Field(this, 6); }

    void ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter);
    void InternalReject();
    void InternalResolve();
    void Reject(::g::Uno::Exception* reason);
    template<class T>
    void Resolve(T result) { NativePromise__PromiseClosure__Resolve_fn(this, uConstrain(__type->T(0), result)); }
    uObject* Run(uArray* args);
    static NativePromise__PromiseClosure* New1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter);
};
// }

}}} // ::g::Fuse::Scripting
