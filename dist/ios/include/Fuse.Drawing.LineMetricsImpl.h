// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/LineMetrics.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Drawing{struct LineMetricsImpl;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class LineMetricsImpl :16
// {
uType* LineMetricsImpl_typeof();
void LineMetricsImpl__ctor__fn(LineMetricsImpl* __this);
void LineMetricsImpl__AddPoint_fn(LineMetricsImpl* __this, ::g::Uno::Float2* pt);
void LineMetricsImpl__BezierBounds_fn(LineMetricsImpl* __this, ::g::Uno::Float2* s, ::g::Uno::Float2* e, ::g::Uno::Float2* c1, ::g::Uno::Float2* c2);
void LineMetricsImpl__BezierMinMax_fn(float* p0, float* p1, float* p2, float* p3, ::g::Uno::Float2* __retval);
void LineMetricsImpl__EllipticBounds_fn(LineMetricsImpl* __this, ::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* seg);
void LineMetricsImpl__GetBounds_fn(LineMetricsImpl* __this, uObject* segments, ::g::Uno::Rect* __retval);
void LineMetricsImpl__New1_fn(LineMetricsImpl** __retval);

struct LineMetricsImpl : uObject
{
    ::g::Uno::Rect _bounds;
    ::g::Uno::Float2 _curPos;
    bool _hasInit;

    void ctor_();
    void AddPoint(::g::Uno::Float2 pt);
    void BezierBounds(::g::Uno::Float2 s, ::g::Uno::Float2 e, ::g::Uno::Float2 c1, ::g::Uno::Float2 c2);
    void EllipticBounds(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment seg);
    ::g::Uno::Rect GetBounds(uObject* segments);
    static ::g::Uno::Float2 BezierMinMax(float p0, float p1, float p2, float p3);
    static LineMetricsImpl* New1();
};
// }

}}} // ::g::Fuse::Drawing
