// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Tuple.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ITuple.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}
namespace g{namespace Uno{struct Tuple2;}}

namespace g{
namespace Uno{

// public sealed class Tuple<T1, T2> :63
// {
struct Tuple2_type : uType
{
    ::g::Uno::ITuple interface0;
};

Tuple2_type* Tuple2_typeof();
void Tuple2__ctor__fn(Tuple2* __this, void* item1, void* item2);
void Tuple2__Equals_fn(Tuple2* __this, uObject* other, bool* __retval);
void Tuple2__GetHashCode_fn(Tuple2* __this, int* __retval);
void Tuple2__get_Item1_fn(Tuple2* __this, uTRef __retval);
void Tuple2__set_Item1_fn(Tuple2* __this, void* value);
void Tuple2__get_Item2_fn(Tuple2* __this, uTRef __retval);
void Tuple2__set_Item2_fn(Tuple2* __this, void* value);
void Tuple2__New1_fn(uType* __type, void* item1, void* item2, Tuple2** __retval);
void Tuple2__ToString_fn(Tuple2* __this, uString** __retval);
void Tuple2__UnoITupleAppendItems_fn(Tuple2* __this, ::g::Uno::Text::StringBuilder* sb);

struct Tuple2 : uObject
{
    uTField _Item1() { return __type->Field(this, 0); }
    uTField _Item2() { return __type->Field(this, 1); }

    template<class T1, class T2>
    void ctor_(T1 item1, T2 item2) { Tuple2__ctor__fn(this, uConstrain(__type->T(0), item1), uConstrain(__type->T(1), item2)); }
    template<class T1>
    T1 Item1() { T1 __retval; return Tuple2__get_Item1_fn(this, &__retval), __retval; }
    template<class T1>
    void Item1(T1 value) { Tuple2__set_Item1_fn(this, uConstrain(__type->T(0), value)); }
    template<class T2>
    T2 Item2() { T2 __retval; return Tuple2__get_Item2_fn(this, &__retval), __retval; }
    template<class T2>
    void Item2(T2 value) { Tuple2__set_Item2_fn(this, uConstrain(__type->T(1), value)); }
    template<class T1, class T2>
    static Tuple2* New1(uType* __type, T1 item1, T2 item2) { Tuple2* __retval; return Tuple2__New1_fn(__type, uConstrain(__type->T(0), item1), uConstrain(__type->T(1), item2), &__retval), __retval; }
};
// }

}} // ::g::Uno
