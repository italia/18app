// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Int4.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Uno{

// public intrinsic struct Int4 :7
// {
uStructType* Int4_typeof();
void Int4__ctor_1_fn(Int4* __this, int* x, int* y, int* z, int* w);
void Int4__ctor_6_fn(Int4* __this, ::g::Uno::Int2* xy, ::g::Uno::Int2* zw);
void Int4__Equals_fn(Int4* __this, uType* __type, uObject* o, bool* __retval);
void Int4__GetHashCode_fn(Int4* __this, uType* __type, int* __retval);
void Int4__get_Item_fn(Int4* __this, int* index, int* __retval);
void Int4__set_Item_fn(Int4* __this, int* index, int* value);
void Int4__New2_fn(int* x, int* y, int* z, int* w, Int4* __retval);
void Int4__New7_fn(::g::Uno::Int2* xy, ::g::Uno::Int2* zw, Int4* __retval);
void Int4__ToString_fn(Int4* __this, uType* __type, uString** __retval);

struct Int4
{
    int X;
    int Y;
    int Z;
    int W;

    void ctor_1(int x, int y, int z, int w);
    void ctor_6(::g::Uno::Int2 xy, ::g::Uno::Int2 zw);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Int4__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Int4__GetHashCode_fn(this, __type, &__retval), __retval; }
    int Item(int index);
    void Item(int index, int value);
    uString* ToString(uType* __type) { uString* __retval; return Int4__ToString_fn(this, __type, &__retval), __retval; }
};

Int4 Int4__New2(int x, int y, int z, int w);
Int4 Int4__New7(::g::Uno::Int2 xy, ::g::Uno::Int2 zw);
// }

}} // ::g::Uno
