// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/IDispatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct IDispatcherExtensions__Arg1Invoke;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class IDispatcherExtensions.Arg1Invoke<T> :27
// {
uType* IDispatcherExtensions__Arg1Invoke_typeof();
void IDispatcherExtensions__Arg1Invoke__ctor__fn(IDispatcherExtensions__Arg1Invoke* __this, uDelegate* action, void* arg);
void IDispatcherExtensions__Arg1Invoke__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1Invoke** __retval);
void IDispatcherExtensions__Arg1Invoke__Run_fn(IDispatcherExtensions__Arg1Invoke* __this);

struct IDispatcherExtensions__Arg1Invoke : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg() { return __type->Field(this, 1); }

    template<class T>
    void ctor_(uDelegate* action, T arg) { IDispatcherExtensions__Arg1Invoke__ctor__fn(this, action, uConstrain(__type->T(0), arg)); }
    void Run();
    template<class T>
    static IDispatcherExtensions__Arg1Invoke* New1(uType* __type, uDelegate* action, T arg) { IDispatcherExtensions__Arg1Invoke* __retval; return IDispatcherExtensions__Arg1Invoke__New1_fn(__type, action, uConstrain(__type->T(0), arg), &__retval), __retval; }
};
// }

}}} // ::g::Uno::Threading
