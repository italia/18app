// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Easing.h>
namespace g{namespace Fuse{namespace Animations{struct CubicBezierEasing;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class CubicBezierEasing :449
// {
::g::Fuse::Animations::Easing_type* CubicBezierEasing_typeof();
void CubicBezierEasing__get_C1X_fn(CubicBezierEasing* __this, double* __retval);
void CubicBezierEasing__set_C1X_fn(CubicBezierEasing* __this, double* value);
void CubicBezierEasing__get_C1Y_fn(CubicBezierEasing* __this, double* __retval);
void CubicBezierEasing__set_C1Y_fn(CubicBezierEasing* __this, double* value);
void CubicBezierEasing__get_C2X_fn(CubicBezierEasing* __this, double* __retval);
void CubicBezierEasing__set_C2X_fn(CubicBezierEasing* __this, double* value);
void CubicBezierEasing__get_C2Y_fn(CubicBezierEasing* __this, double* __retval);
void CubicBezierEasing__set_C2Y_fn(CubicBezierEasing* __this, double* value);
void CubicBezierEasing__Map_fn(CubicBezierEasing* __this, double* p, double* __retval);

struct CubicBezierEasing : ::g::Fuse::Animations::Easing
{
    double _C1X;
    double _C1Y;
    double _C2X;
    double _C2Y;

    double C1X();
    void C1X(double value);
    double C1Y();
    void C1Y(double value);
    double C2X();
    void C2X(double value);
    double C2Y();
    void C2Y(double value);
};
// }

}}} // ::g::Fuse::Animations
