// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/EventWaitHandle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Implementation/Posix/posix_reset_event.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct EventWaitHandle;}}}

namespace g{
namespace Uno{
namespace Threading{

// public class EventWaitHandle :13
// {
struct EventWaitHandle_type : uType
{
    ::g::Uno::IDisposable interface0;
};

EventWaitHandle_type* EventWaitHandle_typeof();
void EventWaitHandle__ctor__fn(EventWaitHandle* __this, bool* initialState, int* mode);
void EventWaitHandle__Dispose_fn(EventWaitHandle* __this);
void EventWaitHandle__Reset_fn(EventWaitHandle* __this, bool* __retval);
void EventWaitHandle__Set_fn(EventWaitHandle* __this, bool* __retval);
void EventWaitHandle__WaitOne_fn(EventWaitHandle* __this, bool* __retval);
void EventWaitHandle__WaitOne1_fn(EventWaitHandle* __this, int* timeoutMillis, bool* __retval);

struct EventWaitHandle : uObject
{
    uPosixResetEvent * _resetEventHandle;

    void ctor_(bool initialState, int mode);
    void Dispose();
    bool Reset();
    bool Set();
    bool WaitOne();
    bool WaitOne1(int timeoutMillis);
};
// }

}}} // ::g::Uno::Threading
