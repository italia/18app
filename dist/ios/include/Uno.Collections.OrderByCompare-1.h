// This file was generated based on /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct OrderByCompare;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class OrderByCompare<T> :438
// {
uType* OrderByCompare_typeof();
void OrderByCompare__ctor__fn(OrderByCompare* __this, uDelegate* orderFunction);
void OrderByCompare__Compare_fn(OrderByCompare* __this, void* a, void* b, int* __retval);
void OrderByCompare__New1_fn(uType* __type, uDelegate* orderFunction, OrderByCompare** __retval);

struct OrderByCompare : uObject
{
    uStrong<uDelegate*> _orderFunction;

    void ctor_(uDelegate* orderFunction);
    template<class T>
    int Compare(T a, T b) { int __retval; return OrderByCompare__Compare_fn(this, uConstrain(__type->T(0), a), uConstrain(__type->T(0), b), &__retval), __retval; }
    static OrderByCompare* New1(uType* __type, uDelegate* orderFunction);
};
// }

}}} // ::g::Uno::Collections
