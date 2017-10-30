// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/IDispatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct IDispatcherExtensions__Arg2Invoke;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class IDispatcherExtensions.Arg2Invoke<T1, T2> :39
// {
uType* IDispatcherExtensions__Arg2Invoke_typeof();
void IDispatcherExtensions__Arg2Invoke__ctor__fn(IDispatcherExtensions__Arg2Invoke* __this, uDelegate* action, void* arg1, void* arg2);
void IDispatcherExtensions__Arg2Invoke__New1_fn(uType* __type, uDelegate* action, void* arg1, void* arg2, IDispatcherExtensions__Arg2Invoke** __retval);
void IDispatcherExtensions__Arg2Invoke__Run_fn(IDispatcherExtensions__Arg2Invoke* __this);

struct IDispatcherExtensions__Arg2Invoke : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg1() { return __type->Field(this, 1); }
    uTField _arg2() { return __type->Field(this, 2); }

    template<class T1, class T2>
    void ctor_(uDelegate* action, T1 arg1, T2 arg2) { IDispatcherExtensions__Arg2Invoke__ctor__fn(this, action, uConstrain(__type->T(0), arg1), uConstrain(__type->T(1), arg2)); }
    void Run();
    template<class T1, class T2>
    static IDispatcherExtensions__Arg2Invoke* New1(uType* __type, uDelegate* action, T1 arg1, T2 arg2) { IDispatcherExtensions__Arg2Invoke* __retval; return IDispatcherExtensions__Arg2Invoke__New1_fn(__type, action, uConstrain(__type->T(0), arg1), uConstrain(__type->T(1), arg2), &__retval), __retval; }
};
// }

}}} // ::g::Uno::Threading
