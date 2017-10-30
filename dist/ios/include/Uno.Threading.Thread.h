// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Thread.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <pthread.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class Thread :19
// {
uType* Thread_typeof();
void Thread__ctor__fn(Thread* __this, bool* started);
void Thread__ctor_1_fn(Thread* __this, uDelegate* start);
void Thread__get_CurrentThread_fn(Thread** __retval);
void Thread__Join_fn(Thread* __this);
void Thread__New1_fn(bool* started, Thread** __retval);
void Thread__New2_fn(uDelegate* start, Thread** __retval);
void Thread__Sleep_fn(int* millis);
void Thread__Start_fn(Thread* __this);

struct Thread : uObject
{
    bool _started;
    pthread_t _threadHandle;
    uStrong<uDelegate*> _threadStart;

    void ctor_(bool started);
    void ctor_1(uDelegate* start);
    void Join();
    void Start();
    static Thread* New1(bool started);
    static Thread* New2(uDelegate* start);
    static void Sleep(int millis);
    static Thread* CurrentThread();
};
// }

}}} // ::g::Uno::Threading
