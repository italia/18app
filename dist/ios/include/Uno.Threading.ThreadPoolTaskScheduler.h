// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Tasks/Tasks.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.ITaskScheduler.h>
namespace g{namespace Uno{namespace Threading{struct Task;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPoolTaskScheduler;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class ThreadPoolTaskScheduler :210
// {
struct ThreadPoolTaskScheduler_type : uType
{
    ::g::Uno::Threading::ITaskScheduler interface0;
    ::g::Uno::IDisposable interface1;
};

ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof();
void ThreadPoolTaskScheduler__ctor__fn(ThreadPoolTaskScheduler* __this);
void ThreadPoolTaskScheduler__get_Default_fn(ThreadPoolTaskScheduler** __retval);
void ThreadPoolTaskScheduler__Dispose_fn(ThreadPoolTaskScheduler* __this);
void ThreadPoolTaskScheduler__New1_fn(ThreadPoolTaskScheduler** __retval);
void ThreadPoolTaskScheduler__OnAppTerminating_fn(int* newState);
void ThreadPoolTaskScheduler__ScheduleTask_fn(ThreadPoolTaskScheduler* __this, ::g::Uno::Threading::Task* task);

struct ThreadPoolTaskScheduler : uObject
{
    static uSStrong<ThreadPoolTaskScheduler*> _default_;
    static uSStrong<ThreadPoolTaskScheduler*>& _default() { return _default_; }
    uStrong< ::g::Uno::Threading::ThreadPool*> _threadPool;

    void ctor_();
    void Dispose();
    void ScheduleTask(::g::Uno::Threading::Task* task);
    static ThreadPoolTaskScheduler* New1();
    static void OnAppTerminating(int newState);
    static ThreadPoolTaskScheduler* Default();
};
// }

}}} // ::g::Uno::Threading
