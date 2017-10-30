// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Long.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Long :15
// {
uStructType* Long_typeof();
void Long__Equals_fn(int64_t* __this, uType* __type, uObject* o, bool* __retval);
void Long__GetHashCode_fn(int64_t* __this, uType* __type, int* __retval);
void Long__ToString_fn(int64_t* __this, uType* __type, uString** __retval);

struct Long
{
    static bool Equals(int64_t __this, uType* __type, uObject* o) { bool __retval; return Long__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(int64_t __this, uType* __type) { int __retval; return Long__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(int64_t __this, uType* __type) { uString* __retval; return Long__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
