// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Int3.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Int3;}}

namespace g{
namespace Uno{

// public intrinsic struct Int3 :7
// {
uStructType* Int3_typeof();
void Int3__Equals_fn(Int3* __this, uType* __type, uObject* o, bool* __retval);
void Int3__GetHashCode_fn(Int3* __this, uType* __type, int* __retval);
void Int3__ToString_fn(Int3* __this, uType* __type, uString** __retval);

struct Int3
{
    int X;
    int Y;
    int Z;

    bool Equals(uType* __type, uObject* o) { bool __retval; return Int3__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Int3__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Int3__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
