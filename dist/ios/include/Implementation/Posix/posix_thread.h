#ifndef POSIX_THREAD_H
#define POSIX_THREAD_H

#include <pthread.h>

//#if !#{Uno.Threading.Thread:IsStripped}
#include <Uno.Threading.Thread.h>
//#endif // !#{Uno.Threading.Thread:IsStripped}

//#if !#{Uno.Threading.Thread.Start():IsStripped}
bool uPthreadsCreateThread(::g::Uno::Threading::Thread* thread, pthread_t* threadHandle);
//#endif // !#{Uno.Threading.Thread.Start():IsStripped}

//#if !#{Uno.Threading.Thread.CurrentThread:IsStripped}
::g::Uno::Threading::Thread* uPthreadsGetCurrentThread();
void uPthreadsSetCurrentThread(::g::Uno::Threading::Thread* thread);
//#endif // !#{Uno.Threading.Thread.CurrentThread:IsStripped}

#endif // POSIX_THREAD_H
