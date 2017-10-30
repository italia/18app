// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ThreadPool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.ThreadPool.WorkItem.h>
namespace g{namespace Uno{namespace Threading{struct ThreadPool__DefaultWorkItem;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class ThreadPool.DefaultWorkItem :15
// {
::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof();
void ThreadPool__DefaultWorkItem__ctor_1_fn(ThreadPool__DefaultWorkItem* __this, uDelegate* action);
void ThreadPool__DefaultWorkItem__Invoke_fn(ThreadPool__DefaultWorkItem* __this);
void ThreadPool__DefaultWorkItem__New1_fn(uDelegate* action, ThreadPool__DefaultWorkItem** __retval);

struct ThreadPool__DefaultWorkItem : ::g::Uno::Threading::ThreadPool__WorkItem
{
    uStrong<uDelegate*> _action;

    void ctor_1(uDelegate* action);
    static ThreadPool__DefaultWorkItem* New1(uDelegate* action);
};
// }

}}} // ::g::Uno::Threading
