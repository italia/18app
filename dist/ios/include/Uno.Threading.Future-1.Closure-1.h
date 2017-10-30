// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Future.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Future1__Closure;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class Future<T>.Closure<T> :158
// {
uType* Future1__Closure_typeof();
void Future1__Closure__ctor__fn(Future1__Closure* __this, uDelegate* action, void* result);
void Future1__Closure__New1_fn(uType* __type, uDelegate* action, void* result, Future1__Closure** __retval);
void Future1__Closure__Run_fn(Future1__Closure* __this);

struct Future1__Closure : uObject
{
    uStrong<uDelegate*> _action;
    uTField _result() { return __type->Field(this, 1); }

    template<class T>
    void ctor_(uDelegate* action, T result) { Future1__Closure__ctor__fn(this, action, uConstrain(__type->T(1), result)); }
    void Run();
    template<class T>
    static Future1__Closure* New1(uType* __type, uDelegate* action, T result) { Future1__Closure* __retval; return Future1__Closure__New1_fn(__type, action, uConstrain(__type->T(1), result), &__retval), __retval; }
};
// }

}}} // ::g::Uno::Threading
