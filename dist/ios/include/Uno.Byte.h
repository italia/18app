// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Byte.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Byte :13
// {
uStructType* Byte_typeof();
void Byte__Equals_fn(uint8_t* __this, uType* __type, uObject* o, bool* __retval);
void Byte__GetHashCode_fn(uint8_t* __this, uType* __type, int* __retval);
void Byte__ToString_fn(uint8_t* __this, uType* __type, uString** __retval);

struct Byte
{
    static bool Equals(uint8_t __this, uType* __type, uObject* o) { bool __retval; return Byte__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(uint8_t __this, uType* __type) { int __retval; return Byte__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uint8_t __this, uType* __type) { uString* __retval; return Byte__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
