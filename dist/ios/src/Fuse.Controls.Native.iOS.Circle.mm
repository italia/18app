// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Circle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.Circle.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Math.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Circle :11
// {
static void Circle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Circle_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Circle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Circle_type, interface2),
        ::g::Fuse::Controls::Native::ICircleView_typeof(), offsetof(Circle_type, interface3));
    type->SetFields(12,
        ::g::Uno::Float_typeof(), offsetof(Circle, _effectiveEndAngleDegrees), 0,
        ::g::Uno::Float_typeof(), offsetof(Circle, _startAngleDegrees), 0,
        ::g::Uno::Bool_typeof(), offsetof(Circle, _useAngle), 0);
}

Circle_type* Circle_typeof()
{
    static uSStrong<Circle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::Shape_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(Circle_type);
    type = (Circle_type*)uClassType::New("Fuse.Controls.Native.iOS.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New3_fn;
    type->fp_CreatePath = (void(*)(::g::Fuse::Controls::Native::iOS::Shape*, ::g::ObjC::Object**))Circle__CreatePath_fn;
    type->interface3.fp_set_StartAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn;
    type->interface3.fp_set_EndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn;
    type->interface3.fp_set_UseAngle = (void(*)(uObject*, bool*))Circle__FuseControlsNativeICircleViewset_UseAngle_fn;
    type->interface3.fp_set_EffectiveEndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::iOS::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Circle() :11
void Circle__ctor_5_fn(Circle* __this)
{
    __this->ctor_5();
}

// protected override sealed ObjC.Object CreatePath() :45
void Circle__CreatePath_fn(Circle* __this, ::g::ObjC::Object** __retval)
{
    ::g::Uno::Float2 size = __this->ShapeSize();
    float radius = ::g::Uno::Math::Min1(size.X, size.Y) / 2.0f;
    ::g::Uno::Float2 center = ::g::Uno::Float2__op_Addition2(__this->ShapePosition(), ::g::Uno::Float2__op_Division1(size, 2.0f));
    float start = __this->_useAngle ? ::g::Uno::Math::DegreesToRadians1(__this->_startAngleDegrees) : 0.0f;
    float end = __this->_useAngle ? ::g::Uno::Math::DegreesToRadians1(__this->_effectiveEndAngleDegrees) : 360.0f;
    return *__retval = Circle::CreateUIBezierPath(center.X, center.Y, radius, start, end), void();
}

// private static ObjC.Object CreateUIBezierPath(float x, float y, float r, float start, float end) :56
void Circle__CreateUIBezierPath_fn(float* x, float* y, float* r, float* start, float* end, ::g::ObjC::Object** __retval)
{
    *__retval = Circle::CreateUIBezierPath(*x, *y, *r, *start, *end);
}

// private void Fuse.Controls.Native.ICircleView.set_EffectiveEndAngleDegrees(float value) :38
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value)
{
    float value_ = *value;
    __this->_effectiveEndAngleDegrees = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float value) :23
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value)
{
}

// private void Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float value) :16
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value)
{
    float value_ = *value;
    __this->_startAngleDegrees = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_UseAngle(bool value) :28
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value)
{
    bool value_ = *value;
    __this->_useAngle = value_;
    __this->OnShapeChanged();
}

// public generated Circle New() :11
void Circle__New3_fn(Circle** __retval)
{
    *__retval = Circle::New3();
}

// public generated Circle() [instance] :11
void Circle::ctor_5()
{
    ctor_4();
}

// private static ObjC.Object CreateUIBezierPath(float x, float y, float r, float start, float end) [static] :56
::g::ObjC::Object* Circle::CreateUIBezierPath(float x, float y, float r, float start, float end)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (float x, float y, float r, float start, float end) -> ::id
        {
            return [UIBezierPath bezierPathWithArcCenter:{x, y} radius:r startAngle:start endAngle:end clockwise:true];
        } (x, y, r, start, end));
        
    }
    
}

// public generated Circle New() [static] :11
Circle* Circle::New3()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
