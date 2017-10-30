// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/SurfaceUtil.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfaceUtil;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class SurfaceUtil :12
// {
uClassType* SurfaceUtil_typeof();
void SurfaceUtil__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval);
void SurfaceUtil__EllipticArcDerivative_fn(::g::Uno::Float2* c, ::g::Uno::Float2* r, float* xAngle, float* t, ::g::Uno::Float2* __retval);
void SurfaceUtil__EllipticArcOutOfRange_fn(::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* arc, bool* __retval);
void SurfaceUtil__EllipticArcPoint_fn(::g::Uno::Float2* c, ::g::Uno::Float2* r, float* xAngle, float* t, ::g::Uno::Float2* __retval);
void SurfaceUtil__EllipticArcToBezierCurve_fn(::g::Uno::Float2* center, ::g::Uno::Float2* radius, float* xAngle, float* startAngle, float* deltaAngle, bool* moveToStart, uObject* curves);
void SurfaceUtil__EllipticArcToBezierCurve1_fn(::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* arc, uObject* curves);
void SurfaceUtil__EndpointToCenterArcParams_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* r_, float* xAngle, bool* flagA, bool* flagS, ::g::Uno::Float2* c, ::g::Uno::Float2* angles);
void SurfaceUtil__svgAngle_fn(double* ux, double* uy, double* vx, double* vy, float* __retval);

struct SurfaceUtil : uObject
{
    static bool AngleInRange(float angle, float start, float end);
    static ::g::Uno::Float2 EllipticArcDerivative(::g::Uno::Float2 c, ::g::Uno::Float2 r, float xAngle, float t);
    static bool EllipticArcOutOfRange(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment arc);
    static ::g::Uno::Float2 EllipticArcPoint(::g::Uno::Float2 c, ::g::Uno::Float2 r, float xAngle, float t);
    static void EllipticArcToBezierCurve(::g::Uno::Float2 center, ::g::Uno::Float2 radius, float xAngle, float startAngle, float deltaAngle, bool moveToStart, uObject* curves);
    static void EllipticArcToBezierCurve1(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment arc, uObject* curves);
    static void EndpointToCenterArcParams(::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2* r_, float xAngle, bool flagA, bool flagS, ::g::Uno::Float2* c, ::g::Uno::Float2* angles);
    static float svgAngle(double ux, double uy, double vx, double vy);
};
// }

}}} // ::g::Fuse::Drawing
