// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Implementation/Posix/PthreadHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Implementation/Posix/posix_reset_event.h>
#include <pthread.h>
#include <Uno.h>
namespace g{namespace Uno{namespace Threading{struct PthreadHelpers;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal static extern class PthreadHelpers :5
// {
uClassType* PthreadHelpers_typeof();
void PthreadHelpers__CreateMutex_fn(pthread_mutex_t* mutexHandle);
void PthreadHelpers__CreateResetEvent_fn(bool* initialState, bool* autoReset, uPosixResetEvent ** __retval);
void PthreadHelpers__CreateThread_fn(::g::Uno::Threading::Thread* thread, pthread_t* __retval);
void PthreadHelpers__DisposeMutex_fn(pthread_mutex_t* mutexHandle);
void PthreadHelpers__DisposeResetEvent_fn(uPosixResetEvent ** resetEventHandle);
void PthreadHelpers__GetCurrentThread_fn(::g::Uno::Threading::Thread** __retval);
void PthreadHelpers__JoinThread_fn(pthread_t* threadHandle);
void PthreadHelpers__ReleaseMutex_fn(pthread_mutex_t* mutexHandle);
void PthreadHelpers__ResetResetEvent_fn(uPosixResetEvent ** resetEventHandle, bool* __retval);
void PthreadHelpers__SetCurrentThread_fn(::g::Uno::Threading::Thread* thread);
void PthreadHelpers__SetResetEvent_fn(uPosixResetEvent ** resetEventHandle, bool* __retval);
void PthreadHelpers__Sleep_fn(int* millis);
void PthreadHelpers__WaitOneMutex_fn(pthread_mutex_t* mutexHandle, int* millisecondsTimeout, bool* __retval);
void PthreadHelpers__WaitOneResetEvent_fn(uPosixResetEvent ** resetEventHandle, int* timeoutMillis, bool* __retval);

struct PthreadHelpers : uObject
{
    static void CreateMutex(pthread_mutex_t* mutexHandle);
    static uPosixResetEvent * CreateResetEvent(bool initialState, bool autoReset);
    static pthread_t CreateThread(::g::Uno::Threading::Thread* thread);
    static void DisposeMutex(pthread_mutex_t* mutexHandle);
    static void DisposeResetEvent(uPosixResetEvent * resetEventHandle);
    static ::g::Uno::Threading::Thread* GetCurrentThread();
    static void JoinThread(pthread_t threadHandle);
    static void ReleaseMutex(pthread_mutex_t* mutexHandle);
    static bool ResetResetEvent(uPosixResetEvent * resetEventHandle);
    static void SetCurrentThread(::g::Uno::Threading::Thread* thread);
    static bool SetResetEvent(uPosixResetEvent * resetEventHandle);
    static void Sleep(int millis);
    static bool WaitOneMutex(pthread_mutex_t* mutexHandle, int millisecondsTimeout);
    static bool WaitOneResetEvent(uPosixResetEvent * resetEventHandle, int timeoutMillis);
};
// }

}}} // ::g::Uno::Threading
