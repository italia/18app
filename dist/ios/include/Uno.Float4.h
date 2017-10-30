// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Float4.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Uno{

// public intrinsic struct Float4 :7
// {
uStructType* Float4_typeof();
void Float4__ctor__fn(Float4* __this, float* xyzw);
void Float4__ctor_1_fn(Float4* __this, float* x, float* y, float* z, float* w);
void Float4__ctor_4_fn(Float4* __this, float* x, ::g::Uno::Float3* yzw);
void Float4__ctor_5_fn(Float4* __this, ::g::Uno::Float2* xy, float* z, float* w);
void Float4__ctor_6_fn(Float4* __this, ::g::Uno::Float2* xy, ::g::Uno::Float2* zw);
void Float4__ctor_7_fn(Float4* __this, ::g::Uno::Float3* xyz, float* w);
void Float4__Equals_fn(Float4* __this, uType* __type, uObject* o, bool* __retval);
void Float4__GetHashCode_fn(Float4* __this, uType* __type, int* __retval);
void Float4__get_Identity_fn(Float4* __retval);
void Float4__get_Item_fn(Float4* __this, int* index, float* __retval);
void Float4__set_Item_fn(Float4* __this, int* index, float* value);
void Float4__New1_fn(float* xyzw, Float4* __retval);
void Float4__New2_fn(float* x, float* y, float* z, float* w, Float4* __retval);
void Float4__New5_fn(float* x, ::g::Uno::Float3* yzw, Float4* __retval);
void Float4__New6_fn(::g::Uno::Float2* xy, float* z, float* w, Float4* __retval);
void Float4__New7_fn(::g::Uno::Float2* xy, ::g::Uno::Float2* zw, Float4* __retval);
void Float4__New8_fn(::g::Uno::Float3* xyz, float* w, Float4* __retval);
void Float4__op_Addition_fn(float* a, Float4* b, Float4* __retval);
void Float4__op_Addition2_fn(Float4* a, Float4* b, Float4* __retval);
void Float4__op_Division1_fn(Float4* a, float* b, Float4* __retval);
void Float4__op_Division2_fn(Float4* a, Float4* b, Float4* __retval);
void Float4__op_Equality_fn(Float4* a, Float4* b, bool* __retval);
void Float4__op_Implicit1_fn(::g::Uno::Int4* a, Float4* __retval);
void Float4__op_Inequality_fn(Float4* a, Float4* b, bool* __retval);
void Float4__op_Multiply_fn(float* a, Float4* b, Float4* __retval);
void Float4__op_Multiply1_fn(Float4* a, float* b, Float4* __retval);
void Float4__op_Multiply2_fn(Float4* a, Float4* b, Float4* __retval);
void Float4__op_Subtraction2_fn(Float4* a, Float4* b, Float4* __retval);
void Float4__ToString_fn(Float4* __this, uType* __type, uString** __retval);

struct Float4
{
    float X;
    float Y;
    float Z;
    float W;

    void ctor_(float xyzw);
    void ctor_1(float x, float y, float z, float w);
    void ctor_4(float x, ::g::Uno::Float3 yzw);
    void ctor_5(::g::Uno::Float2 xy, float z, float w);
    void ctor_6(::g::Uno::Float2 xy, ::g::Uno::Float2 zw);
    void ctor_7(::g::Uno::Float3 xyz, float w);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Float4__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Float4__GetHashCode_fn(this, __type, &__retval), __retval; }
    float Item(int index);
    void Item(int index, float value);
    uString* ToString(uType* __type) { uString* __retval; return Float4__ToString_fn(this, __type, &__retval), __retval; }
};

Float4 Float4__New1(float xyzw);
Float4 Float4__New2(float x, float y, float z, float w);
Float4 Float4__New5(float x, ::g::Uno::Float3 yzw);
Float4 Float4__New6(::g::Uno::Float2 xy, float z, float w);
Float4 Float4__New7(::g::Uno::Float2 xy, ::g::Uno::Float2 zw);
Float4 Float4__New8(::g::Uno::Float3 xyz, float w);
Float4 Float4__op_Addition(float a, Float4 b);
Float4 Float4__op_Addition2(Float4 a, Float4 b);
Float4 Float4__op_Division1(Float4 a, float b);
Float4 Float4__op_Division2(Float4 a, Float4 b);
bool Float4__op_Equality(Float4 a, Float4 b);
Float4 Float4__op_Implicit1(::g::Uno::Int4 a);
bool Float4__op_Inequality(Float4 a, Float4 b);
Float4 Float4__op_Multiply(float a, Float4 b);
Float4 Float4__op_Multiply1(Float4 a, float b);
Float4 Float4__op_Multiply2(Float4 a, Float4 b);
Float4 Float4__op_Subtraction2(Float4 a, Float4 b);
Float4 Float4__Identity();
// }

}} // ::g::Uno
