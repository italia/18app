// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ConcurrentQueue.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Queue;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class ConcurrentQueue<T> :8
// {
uType* ConcurrentQueue_typeof();
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this);
void ConcurrentQueue__get_Count_fn(ConcurrentQueue* __this, int* __retval);
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item);
void ConcurrentQueue__get_IsEmpty_fn(ConcurrentQueue* __this, bool* __retval);
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval);
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval);

struct ConcurrentQueue : uObject
{
    uStrong<uObject*> _mutex;
    uStrong< ::g::Uno::Collections::Queue*> _queue;

    void ctor_();
    int Count();
    template<class T>
    void Enqueue(T item) { ConcurrentQueue__Enqueue_fn(this, uConstrain(__type->T(0), item)); }
    bool IsEmpty();
    template<class T>
    bool TryDequeue(T* item) { bool __retval; return ConcurrentQueue__TryDequeue_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    static ConcurrentQueue* New1(uType* __type);
};
// }

}}} // ::g::Uno::Threading
