// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Short.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Short :12
// {
uStructType* Short_typeof();
void Short__Equals_fn(int16_t* __this, uType* __type, uObject* o, bool* __retval);
void Short__GetHashCode_fn(int16_t* __this, uType* __type, int* __retval);
void Short__ToString_fn(int16_t* __this, uType* __type, uString** __retval);

struct Short
{
    static bool Equals(int16_t __this, uType* __type, uObject* o) { bool __retval; return Short__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(int16_t __this, uType* __type) { int __retval; return Short__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(int16_t __this, uType* __type) { uString* __retval; return Short__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
