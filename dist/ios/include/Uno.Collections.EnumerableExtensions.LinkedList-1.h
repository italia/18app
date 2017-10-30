// This file was generated based on /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct EnumerableExtensions__LinkedList;}}}

namespace g{
namespace Uno{
namespace Collections{

// private sealed class EnumerableExtensions.LinkedList<T> :80
// {
uType* EnumerableExtensions__LinkedList_typeof();
void EnumerableExtensions__LinkedList__ctor__fn(EnumerableExtensions__LinkedList* __this, void* item, EnumerableExtensions__LinkedList* next);
void EnumerableExtensions__LinkedList__New1_fn(uType* __type, void* item, EnumerableExtensions__LinkedList* next, EnumerableExtensions__LinkedList** __retval);

struct EnumerableExtensions__LinkedList : uObject
{
    uTField Item() { return __type->Field(this, 0); }
    uStrong<EnumerableExtensions__LinkedList*> Next;

    template<class T>
    void ctor_(T item, EnumerableExtensions__LinkedList* next) { EnumerableExtensions__LinkedList__ctor__fn(this, uConstrain(__type->T(0), item), next); }
    template<class T>
    static EnumerableExtensions__LinkedList* New1(uType* __type, T item, EnumerableExtensions__LinkedList* next) { EnumerableExtensions__LinkedList* __retval; return EnumerableExtensions__LinkedList__New1_fn(__type, uConstrain(__type->T(0), item), next, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Collections
