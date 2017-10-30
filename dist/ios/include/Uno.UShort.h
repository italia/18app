// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/UShort.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct UShort :11
// {
uStructType* UShort_typeof();
void UShort__Equals_fn(uint16_t* __this, uType* __type, uObject* o, bool* __retval);
void UShort__GetHashCode_fn(uint16_t* __this, uType* __type, int* __retval);
void UShort__ToString_fn(uint16_t* __this, uType* __type, uString** __retval);

struct UShort
{
    static bool Equals(uint16_t __this, uType* __type, uObject* o) { bool __retval; return UShort__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(uint16_t __this, uType* __type) { int __retval; return UShort__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uint16_t __this, uType* __type) { uString* __retval; return UShort__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
