// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Future.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Future;}}}

namespace g{
namespace Uno{
namespace Threading{

// public abstract class Future :7
// {
struct Future_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Cancel)(::g::Uno::Threading::Future*, bool*);
    void(*fp_Dispose)(::g::Uno::Threading::Future*);
};

Future_type* Future_typeof();
void Future__ctor__fn(Future* __this);
void Future__get_State_fn(Future* __this, int* __retval);
void Future__set_State_fn(Future* __this, int* value);

struct Future : uObject
{
    int _State;

    void ctor_();
    void Cancel(bool shutdownGracefully) { (((Future_type*)__type)->fp_Cancel)(this, &shutdownGracefully); }
    void Dispose() { (((Future_type*)__type)->fp_Dispose)(this); }
    int State();
    void State(int value);
};
// }

}}} // ::g::Uno::Threading
