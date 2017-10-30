// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Float3.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Uno{

// public intrinsic struct Float3 :7
// {
uStructType* Float3_typeof();
void Float3__ctor__fn(Float3* __this, float* xyz);
void Float3__ctor_1_fn(Float3* __this, float* x, float* y, float* z);
void Float3__ctor_3_fn(Float3* __this, ::g::Uno::Float2* xy, float* z);
void Float3__Equals_fn(Float3* __this, uType* __type, uObject* o, bool* __retval);
void Float3__GetHashCode_fn(Float3* __this, uType* __type, int* __retval);
void Float3__New1_fn(float* xyz, Float3* __retval);
void Float3__New2_fn(float* x, float* y, float* z, Float3* __retval);
void Float3__New4_fn(::g::Uno::Float2* xy, float* z, Float3* __retval);
void Float3__op_Addition2_fn(Float3* a, Float3* b, Float3* __retval);
void Float3__op_Division1_fn(Float3* a, float* b, Float3* __retval);
void Float3__op_Division2_fn(Float3* a, Float3* b, Float3* __retval);
void Float3__op_Equality_fn(Float3* a, Float3* b, bool* __retval);
void Float3__op_Inequality_fn(Float3* a, Float3* b, bool* __retval);
void Float3__op_Multiply_fn(float* a, Float3* b, Float3* __retval);
void Float3__op_Multiply1_fn(Float3* a, float* b, Float3* __retval);
void Float3__op_Multiply2_fn(Float3* a, Float3* b, Float3* __retval);
void Float3__op_Subtraction2_fn(Float3* a, Float3* b, Float3* __retval);
void Float3__op_UnaryNegation_fn(Float3* a, Float3* __retval);
void Float3__ToString_fn(Float3* __this, uType* __type, uString** __retval);

struct Float3
{
    float X;
    float Y;
    float Z;

    void ctor_(float xyz);
    void ctor_1(float x, float y, float z);
    void ctor_3(::g::Uno::Float2 xy, float z);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Float3__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Float3__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Float3__ToString_fn(this, __type, &__retval), __retval; }
};

Float3 Float3__New1(float xyz);
Float3 Float3__New2(float x, float y, float z);
Float3 Float3__New4(::g::Uno::Float2 xy, float z);
Float3 Float3__op_Addition2(Float3 a, Float3 b);
Float3 Float3__op_Division1(Float3 a, float b);
Float3 Float3__op_Division2(Float3 a, Float3 b);
bool Float3__op_Equality(Float3 a, Float3 b);
bool Float3__op_Inequality(Float3 a, Float3 b);
Float3 Float3__op_Multiply(float a, Float3 b);
Float3 Float3__op_Multiply1(Float3 a, float b);
Float3 Float3__op_Multiply2(Float3 a, Float3 b);
Float3 Float3__op_Subtraction2(Float3 a, Float3 b);
Float3 Float3__op_UnaryNegation(Float3 a);
// }

}} // ::g::Uno
