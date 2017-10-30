// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Float.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Float :15
// {
uStructType* Float_typeof();
void Float__Equals_fn(float* __this, uType* __type, uObject* o, bool* __retval);
void Float__GetHashCode_fn(float* __this, uType* __type, int* __retval);
void Float__IsInfinity_fn(float* f, bool* __retval);
void Float__IsNaN_fn(float* f, bool* __retval);
void Float__IsNegativeInfinity_fn(float* f, bool* __retval);
void Float__IsPositiveInfinity_fn(float* f, bool* __retval);
void Float__Parse_fn(uString* str, float* __retval);
void Float__ToString_fn(float* __this, uType* __type, uString** __retval);
void Float__TryParse_fn(uString* str, float* res, bool* __retval);

struct Float
{
    static bool Equals(float __this, uType* __type, uObject* o) { bool __retval; return Float__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(float __this, uType* __type) { int __retval; return Float__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(float __this, uType* __type) { uString* __retval; return Float__ToString_fn(&__this, __type, &__retval), __retval; }
    static bool IsInfinity(float f);
    static bool IsNaN(float f);
    static bool IsNegativeInfinity(float f);
    static bool IsPositiveInfinity(float f);
    static float Parse(uString* str);
    static bool TryParse(uString* str, float* res);
};
// }

}} // ::g::Uno
