// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/PriorityQueue.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.PriorityQueueItem-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct PriorityQueue;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class PriorityQueue<T> :23
// {
uType* PriorityQueue_typeof();
void PriorityQueue__ctor__fn(PriorityQueue* __this, int* type);
void PriorityQueue__Add2_fn(PriorityQueue* __this, void* value, ::g::Uno::Float2* priority);
void PriorityQueue__Add4_fn(PriorityQueue* __this, void* value, ::g::Uno::Float4* priority);
void PriorityQueue__Compare_fn(uType* __type, ::g::Uno::Float4* a, ::g::Uno::Float4* b, int* __retval);
void PriorityQueue__get_Count_fn(PriorityQueue* __this, int* __retval);
void PriorityQueue__get_Empty_fn(PriorityQueue* __this, bool* __retval);
void PriorityQueue__LowerBound_fn(PriorityQueue* __this, ::g::Uno::Float4* priority, int* __retval);
void PriorityQueue__New1_fn(uType* __type, int* type, PriorityQueue** __retval);
void PriorityQueue__PopTop1_fn(PriorityQueue* __this, ::g::Uno::Float4* priority, uTRef __retval);
void PriorityQueue__UpperBound_fn(PriorityQueue* __this, ::g::Uno::Float4* priority, int* __retval);

struct PriorityQueue : uObject
{
    uStrong< ::g::Uno::Collections::List*> _items;
    int _type;

    void ctor_(int type);
    template<class T>
    void Add2(T value, ::g::Uno::Float2 priority);
    template<class T>
    void Add4(T value, ::g::Uno::Float4 priority);
    int Count();
    bool Empty();
    int LowerBound(::g::Uno::Float4 priority);
    template<class T>
    T PopTop1(::g::Uno::Float4* priority) { T __retval; return PriorityQueue__PopTop1_fn(this, priority, &__retval), __retval; }
    int UpperBound(::g::Uno::Float4 priority);
    static int Compare(uType* __type, ::g::Uno::Float4 a, ::g::Uno::Float4 b);
    static PriorityQueue* New1(uType* __type, int type);
};

}}} // ::g::Uno::Collections

#include <Uno.Float2.h>
#include <Uno.Float4.h>

namespace g{
namespace Uno{
namespace Collections{

template<class T>
void PriorityQueue::Add2(T value, ::g::Uno::Float2 priority) { PriorityQueue__Add2_fn(this, uConstrain(__type->T(0), value), &priority); }
template<class T>
void PriorityQueue::Add4(T value, ::g::Uno::Float4 priority) { PriorityQueue__Add4_fn(this, uConstrain(__type->T(0), value), &priority); }
// }

}}} // ::g::Uno::Collections
