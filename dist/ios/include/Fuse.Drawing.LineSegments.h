// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/LineSegments.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineSegment.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineSegments;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class LineSegments :9
// {
uType* LineSegments_typeof();
void LineSegments__ctor__fn(LineSegments* __this);
void LineSegments__Add_fn(LineSegments* __this, ::g::Fuse::Drawing::LineSegment* seg);
void LineSegments__BezierCurveTo_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* controlA, ::g::Uno::Float2* controlB);
void LineSegments__Clear_fn(LineSegments* __this);
void LineSegments__ClosePath_fn(LineSegments* __this);
void LineSegments__get_Count_fn(LineSegments* __this, int* __retval);
void LineSegments__EllipticArcTo_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* radius, float* xAngle, bool* large, bool* sweep);
void LineSegments__LineTo_fn(LineSegments* __this, ::g::Uno::Float2* pt);
void LineSegments__MoveTo_fn(LineSegments* __this, ::g::Uno::Float2* pt);
void LineSegments__New1_fn(LineSegments** __retval);
void LineSegments__get_Segments_fn(LineSegments* __this, uObject** __retval);
void LineSegments__set_Segments_fn(LineSegments* __this, uObject* value);

struct LineSegments : uObject
{
    ::g::Uno::Float2 _curPos;
    uStrong<uObject*> _Segments;

    void ctor_();
    void Add(::g::Fuse::Drawing::LineSegment seg);
    void BezierCurveTo(::g::Uno::Float2 pt, ::g::Uno::Float2 controlA, ::g::Uno::Float2 controlB);
    void Clear();
    void ClosePath();
    int Count();
    void EllipticArcTo(::g::Uno::Float2 pt, ::g::Uno::Float2 radius, float xAngle, bool large, bool sweep);
    void LineTo(::g::Uno::Float2 pt);
    void MoveTo(::g::Uno::Float2 pt);
    uObject* Segments();
    void Segments(uObject* value);
    static LineSegments* New1();
};
// }

}}} // ::g::Fuse::Drawing
