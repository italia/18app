// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Float3x3.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float3x3;}}

namespace g{
namespace Uno{

// public intrinsic struct Float3x3 :7
// {
uStructType* Float3x3_typeof();
void Float3x3__ctor__fn(Float3x3* __this, float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33);
void Float3x3__Equals_fn(Float3x3* __this, uType* __type, uObject* o, bool* __retval);
void Float3x3__GetHashCode_fn(Float3x3* __this, uType* __type, int* __retval);
void Float3x3__New1_fn(float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33, Float3x3* __retval);
void Float3x3__ToString_fn(Float3x3* __this, uType* __type, uString** __retval);

struct Float3x3
{
    float M11;
    float M12;
    float M13;
    float M21;
    float M22;
    float M23;
    float M31;
    float M32;
    float M33;

    void ctor_(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Float3x3__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Float3x3__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Float3x3__ToString_fn(this, __type, &__retval), __retval; }
};

Float3x3 Float3x3__New1(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);
// }

}} // ::g::Uno
