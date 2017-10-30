// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Mutex.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <pthread.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class Mutex :8
// {
struct Mutex_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Mutex_type* Mutex_typeof();
void Mutex__ctor__fn(Mutex* __this);
void Mutex__Dispose_fn(Mutex* __this);
void Mutex__New1_fn(Mutex** __retval);
void Mutex__ReleaseMutex_fn(Mutex* __this);
void Mutex__WaitOne_fn(Mutex* __this, bool* __retval);
void Mutex__WaitOne1_fn(Mutex* __this, int* millisecondsTimeout, bool* __retval);

struct Mutex : uObject
{
    pthread_mutex_t _mutexHandle;

    void ctor_();
    void Dispose();
    void ReleaseMutex();
    bool WaitOne();
    bool WaitOne1(int millisecondsTimeout);
    static Mutex* New1();
};
// }

}}} // ::g::Uno::Threading
