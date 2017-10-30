// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ThreadPool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class ThreadPool :7
// {
struct ThreadPool_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ThreadPool_type* ThreadPool_typeof();
void ThreadPool__ctor__fn(ThreadPool* __this, int* poolSize);
void ThreadPool__Dispose_fn(ThreadPool* __this);
void ThreadPool__DoTask_fn(ThreadPool* __this, bool* __retval);
void ThreadPool__New1_fn(int* poolSize, ThreadPool** __retval);
void ThreadPool__QueueAction_fn(ThreadPool* __this, uDelegate* action);
void ThreadPool__WorkerEntrypoint_fn(ThreadPool* __this);

struct ThreadPool : uObject
{
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _disposeQueue;
    bool _isDisposed;
    int _poolSize;
    uStrong< ::g::Uno::Threading::AutoResetEvent*> _resetEvent;
    bool _running;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _taskQueue;

    void ctor_(int poolSize);
    void Dispose();
    bool DoTask();
    void QueueAction(uDelegate* action);
    void WorkerEntrypoint();
    static ThreadPool* New1(int poolSize);
};
// }

}}} // ::g::Uno::Threading
