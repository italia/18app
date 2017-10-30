// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Future.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Threading.Future.h>
namespace g{namespace Uno{namespace Collections{struct Queue;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Threading{

// public abstract class Future<T> :15
// {
::g::Uno::Threading::Future_type* Future1_typeof();
void Future1__ctor_1_fn(Future1* __this);
void Future1__ctor_2_fn(Future1* __this, uObject* dispatcher);
void Future1__Dispose_fn(Future1* __this);
void Future1__InternalReject_fn(Future1* __this, ::g::Uno::Exception* reason);
void Future1__InternalResolve_fn(Future1* __this, void* result);
void Future1__Invoke_fn(Future1* __this, uType* __type, uDelegate* action, void* arg);
void Future1__Then1_fn(Future1* __this, uDelegate* fulfilled, uDelegate* rejected, Future1** __retval);

struct Future1 : ::g::Uno::Threading::Future
{
    uStrong< ::g::Uno::Collections::Queue*> _catchables;
    uStrong< ::g::Uno::Collections::Queue*> _chainables;
    uStrong<uObject*> _dispatcher;
    bool _isDisposed;
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;
    uStrong< ::g::Uno::Collections::Queue*> _thenables;
    uStrong< ::g::Uno::Exception*> Reason;
    uTField Result() { return __type->Field(this, 8); }

    void ctor_1();
    void ctor_2(uObject* dispatcher);
    void InternalReject(::g::Uno::Exception* reason);
    template<class T>
    void InternalResolve(T result) { Future1__InternalResolve_fn(this, uConstrain(__type->GetBase(Future1_typeof())->T(0), result)); }
    template<class T1>
    void Invoke(uType* __type, uDelegate* action, T1 arg) { Future1__Invoke_fn(this, __type, action, uConstrain(__type->U(0), arg)); }
    Future1* Then1(uDelegate* fulfilled, uDelegate* rejected);
};
// }

}}} // ::g::Uno::Threading
