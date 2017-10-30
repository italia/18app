// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/Curves.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct Curves;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class Curves :5
// {
uClassType* Curves_typeof();
void Curves__CalcBezierAt_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* p3, float* t, ::g::Uno::Float2* __retval);
void Curves__CubicHermiteToBezier_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* t1, ::g::Uno::Float4* t2);
void Curves__KochanekBartelTangent_fn(::g::Uno::Float4* pa, ::g::Uno::Float4* pb, ::g::Uno::Float4* pc, ::g::Uno::Float4* pd, float* tension, float* bias, float* continuity, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut);

struct Curves : uObject
{
    static ::g::Uno::Float2 CalcBezierAt(::g::Uno::Float2 p0, ::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2 p3, float t);
    static void CubicHermiteToBezier(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4* t1, ::g::Uno::Float4* t2);
    static void KochanekBartelTangent(::g::Uno::Float4 pa, ::g::Uno::Float4 pb, ::g::Uno::Float4 pc, ::g::Uno::Float4 pd, float tension, float bias, float continuity, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut);
};
// }

}}} // ::g::Fuse::Internal
