// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/SyncDispatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Uno{namespace Threading{struct SyncDispatcher;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class SyncDispatcher :7
// {
struct SyncDispatcher_type : uType
{
    ::g::Uno::Threading::IDispatcher interface0;
};

SyncDispatcher_type* SyncDispatcher_typeof();
void SyncDispatcher__ctor__fn(SyncDispatcher* __this);
void SyncDispatcher__Invoke_fn(SyncDispatcher* __this, uDelegate* action);
void SyncDispatcher__New1_fn(SyncDispatcher** __retval);

struct SyncDispatcher : uObject
{
    void ctor_();
    void Invoke(uDelegate* action);
    static SyncDispatcher* New1();
};
// }

}}} // ::g::Uno::Threading
