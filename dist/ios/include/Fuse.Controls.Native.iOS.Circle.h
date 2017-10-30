// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Circle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ICircleView.h>
#include <Fuse.Controls.Native.iOS.Shape.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Circle;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Circle :11
// {
struct Circle_type : ::g::Fuse::Controls::Native::iOS::Shape_type
{
    ::g::Fuse::Controls::Native::ICircleView interface3;
};

Circle_type* Circle_typeof();
void Circle__ctor_5_fn(Circle* __this);
void Circle__CreatePath_fn(Circle* __this, ::g::ObjC::Object** __retval);
void Circle__CreateUIBezierPath_fn(float* x, float* y, float* r, float* start, float* end, ::g::ObjC::Object** __retval);
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value);
void Circle__New3_fn(Circle** __retval);

struct Circle : ::g::Fuse::Controls::Native::iOS::Shape
{
    float _effectiveEndAngleDegrees;
    float _startAngleDegrees;
    bool _useAngle;

    void ctor_5();
    static ::g::ObjC::Object* CreateUIBezierPath(float x, float y, float r, float start, float end);
    static Circle* New3();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
