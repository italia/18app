// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/FastMatrix.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public sealed class FastMatrix :5
// {
uType* FastMatrix_typeof();
void FastMatrix__ctor__fn(FastMatrix* __this);
void FastMatrix__ctor_1_fn(FastMatrix* __this, FastMatrix* orig);
void FastMatrix__AppendFastMatrix_fn(FastMatrix* __this, FastMatrix* fm);
void FastMatrix__AppendRotation_fn(FastMatrix* __this, float* zRadians);
void FastMatrix__AppendRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q);
void FastMatrix__AppendScale_fn(FastMatrix* __this, float* factor);
void FastMatrix__AppendScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale);
void FastMatrix__AppendShear_fn(FastMatrix* __this, float* xRadians, float* yRadians);
void FastMatrix__AppendTranslation_fn(FastMatrix* __this, float* x, float* y, float* z);
void FastMatrix__Copy_fn(FastMatrix* __this, FastMatrix** __retval);
void FastMatrix__FromFloat4x4_fn(::g::Uno::Float4x4* m, FastMatrix** __retval);
void FastMatrix__get_HasNonTranslation_fn(FastMatrix* __this, bool* __retval);
void FastMatrix__Identity_fn(FastMatrix** __retval);
void FastMatrix__Invert_fn(FastMatrix* __this);
void FastMatrix__get_IsValid_fn(FastMatrix* __this, bool* __retval);
void FastMatrix__get_Matrix_fn(FastMatrix* __this, ::g::Uno::Float4x4* __retval);
void FastMatrix__Mul_fn(FastMatrix* __this, FastMatrix* m, FastMatrix** __retval);
void FastMatrix__New1_fn(FastMatrix** __retval);
void FastMatrix__New2_fn(FastMatrix* orig, FastMatrix** __retval);
void FastMatrix__PrependFastMatrix_fn(FastMatrix* __this, FastMatrix* fm);
void FastMatrix__PrependRotation_fn(FastMatrix* __this, float* zRadians);
void FastMatrix__PrependRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q);
void FastMatrix__PrependScale_fn(FastMatrix* __this, float* factor);
void FastMatrix__PrependScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale);
void FastMatrix__PrependShear_fn(FastMatrix* __this, float* xRadians, float* yRadians);
void FastMatrix__PrependTranslation_fn(FastMatrix* __this, float* x, float* y, float* z);
void FastMatrix__PrependTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset);
void FastMatrix__ResetIdentity_fn(FastMatrix* __this);
void FastMatrix__SimpleTranslation_fn(FastMatrix* __this, float* x, float* y, float* z);
void FastMatrix__TransformVector_fn(FastMatrix* __this, ::g::Uno::Float3* v, ::g::Uno::Float3* __retval);
void FastMatrix__get_Translation_fn(FastMatrix* __this, ::g::Uno::Float3* __retval);

struct FastMatrix : uObject
{
    bool _hasNonTranslation;
    bool _isValid;
    ::g::Uno::Float4x4 _matrix;

    void ctor_();
    void ctor_1(FastMatrix* orig);
    void AppendFastMatrix(FastMatrix* fm);
    void AppendRotation(float zRadians);
    void AppendRotationQuaternion(::g::Uno::Float4 q);
    void AppendScale(float factor);
    void AppendScale1(::g::Uno::Float3 scale);
    void AppendShear(float xRadians, float yRadians);
    void AppendTranslation(float x, float y, float z);
    FastMatrix* Copy();
    bool HasNonTranslation();
    void Invert();
    bool IsValid();
    ::g::Uno::Float4x4 Matrix();
    FastMatrix* Mul(FastMatrix* m);
    void PrependFastMatrix(FastMatrix* fm);
    void PrependRotation(float zRadians);
    void PrependRotationQuaternion(::g::Uno::Float4 q);
    void PrependScale(float factor);
    void PrependScale1(::g::Uno::Float3 scale);
    void PrependShear(float xRadians, float yRadians);
    void PrependTranslation(float x, float y, float z);
    void PrependTranslation1(::g::Uno::Float3 offset);
    void ResetIdentity();
    void SimpleTranslation(float x, float y, float z);
    ::g::Uno::Float3 TransformVector(::g::Uno::Float3 v);
    ::g::Uno::Float3 Translation();
    static FastMatrix* FromFloat4x4(::g::Uno::Float4x4 m);
    static FastMatrix* Identity();
    static FastMatrix* New1();
    static FastMatrix* New2(FastMatrix* orig);
};
// }

}} // ::g::Fuse
