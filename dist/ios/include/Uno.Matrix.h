// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Matrix.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Matrix;}}

namespace g{
namespace Uno{

// public static class Matrix :8
// {
uClassType* Matrix_typeof();
void Matrix__Compose_fn(::g::Uno::Float3* scale, ::g::Uno::Float4* rotationQuaternion, ::g::Uno::Float3* translation, ::g::Uno::Float4x4* __retval);
void Matrix__Invert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* __retval);
void Matrix__Mul8_fn(::g::Uno::Float4x4* left, ::g::Uno::Float4x4* right, ::g::Uno::Float4x4* __retval);
void Matrix__Mul9_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* __retval);
void Matrix__Mul10_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* d, ::g::Uno::Float4x4* __retval);
void Matrix__RotationAxis_fn(::g::Uno::Float3* axisNormalized, float* angleRadians, ::g::Uno::Float4x4* __retval);
void Matrix__RotationQuaternion_fn(::g::Uno::Float4* rotation, ::g::Uno::Float4x4* __retval);
void Matrix__RotationZ_fn(float* angleRadians, ::g::Uno::Float4x4* __retval);
void Matrix__Scaling1_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval);
void Matrix__Scaling2_fn(::g::Uno::Float3* scale, ::g::Uno::Float4x4* __retval);
void Matrix__Shear_fn(::g::Uno::Float2* angle, ::g::Uno::Float4x4* __retval);
void Matrix__Translation_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval);
void Matrix__Translation1_fn(::g::Uno::Float3* offset, ::g::Uno::Float4x4* __retval);
void Matrix__TryInvert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* result, bool* __retval);

struct Matrix : uObject
{
    static ::g::Uno::Float4x4 Compose(::g::Uno::Float3 scale, ::g::Uno::Float4 rotationQuaternion, ::g::Uno::Float3 translation);
    static ::g::Uno::Float4x4 Invert2(::g::Uno::Float4x4 value);
    static ::g::Uno::Float4x4 Mul8(::g::Uno::Float4x4 left, ::g::Uno::Float4x4 right);
    static ::g::Uno::Float4x4 Mul9(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c);
    static ::g::Uno::Float4x4 Mul10(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c, ::g::Uno::Float4x4 d);
    static ::g::Uno::Float4x4 RotationAxis(::g::Uno::Float3 axisNormalized, float angleRadians);
    static ::g::Uno::Float4x4 RotationQuaternion(::g::Uno::Float4 rotation);
    static ::g::Uno::Float4x4 RotationZ(float angleRadians);
    static ::g::Uno::Float4x4 Scaling1(float x, float y, float z);
    static ::g::Uno::Float4x4 Scaling2(::g::Uno::Float3 scale);
    static ::g::Uno::Float4x4 Shear(::g::Uno::Float2 angle);
    static ::g::Uno::Float4x4 Translation(float x, float y, float z);
    static ::g::Uno::Float4x4 Translation1(::g::Uno::Float3 offset);
    static bool TryInvert2(::g::Uno::Float4x4 value, ::g::Uno::Float4x4* result);
};
// }

}} // ::g::Uno
