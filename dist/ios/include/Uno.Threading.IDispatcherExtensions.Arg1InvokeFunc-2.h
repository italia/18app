// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/IDispatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct IDispatcherExtensions__Arg1InvokeFunc;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class IDispatcherExtensions.Arg1InvokeFunc<T, TResult> :99
// {
uType* IDispatcherExtensions__Arg1InvokeFunc_typeof();
void IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(IDispatcherExtensions__Arg1InvokeFunc* __this, uDelegate* action, void* arg);
void IDispatcherExtensions__Arg1InvokeFunc__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1InvokeFunc** __retval);
void IDispatcherExtensions__Arg1InvokeFunc__Run_fn(IDispatcherExtensions__Arg1InvokeFunc* __this);

struct IDispatcherExtensions__Arg1InvokeFunc : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg() { return __type->Field(this, 1); }

    template<class T>
    void ctor_(uDelegate* action, T arg) { IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(this, action, uConstrain(__type->T(0), arg)); }
    void Run();
    template<class T>
    static IDispatcherExtensions__Arg1InvokeFunc* New1(uType* __type, uDelegate* action, T arg) { IDispatcherExtensions__Arg1InvokeFunc* __retval; return IDispatcherExtensions__Arg1InvokeFunc__New1_fn(__type, action, uConstrain(__type->T(0), arg), &__retval), __retval; }
};
// }

}}} // ::g::Uno::Threading
