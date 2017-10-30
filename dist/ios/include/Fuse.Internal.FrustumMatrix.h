// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/FrustumMatrix.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct FrustumMatrix;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class FrustumMatrix :5
// {
uClassType* FrustumMatrix_typeof();
void FrustumMatrix__OrthoLHInverse_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__OrthoRHInverse_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval);
void FrustumMatrix__TryOrthoLH_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* result, bool* __retval);
void FrustumMatrix__TryOrthoRH_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* result, bool* __retval);

struct FrustumMatrix : uObject
{
    static ::g::Uno::Float4x4 OrthoLHInverse(float width, float height, float near, float far);
    static ::g::Uno::Float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar);
    static bool TryOrthoLH(float width, float height, float near, float far, ::g::Uno::Float4x4* result);
    static bool TryOrthoRH(float width, float height, float zNear, float zFar, ::g::Uno::Float4x4* result);
};
// }

}}} // ::g::Fuse::Internal
