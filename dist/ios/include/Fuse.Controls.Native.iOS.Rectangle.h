// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Rectangle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.Shape.h>
#include <Fuse.Controls.Native.IRectangleView.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Rectangle;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Rectangle :11
// {
struct Rectangle_type : ::g::Fuse::Controls::Native::iOS::Shape_type
{
    ::g::Fuse::Controls::Native::IRectangleView interface3;
};

Rectangle_type* Rectangle_typeof();
void Rectangle__ctor_5_fn(Rectangle* __this);
void Rectangle__AddArcWithCenter_fn(Rectangle* __this, ::g::ObjC::Object* handle, float* centerX, float* centerY, float* radius, float* startAngle, float* endAngle);
void Rectangle__AddLineToPoint_fn(Rectangle* __this, ::g::ObjC::Object* handle, float* x, float* y);
void Rectangle__ClosePath_fn(Rectangle* __this, ::g::ObjC::Object* handle);
void Rectangle__CreatePath_fn(Rectangle* __this, ::g::ObjC::Object** __retval);
void Rectangle__CreateUIBezierPath_fn(::g::ObjC::Object** __retval);
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value);
void Rectangle__MoveToPoint_fn(Rectangle* __this, ::g::ObjC::Object* handle, float* x, float* y);
void Rectangle__New3_fn(Rectangle** __retval);

struct Rectangle : ::g::Fuse::Controls::Native::iOS::Shape
{
    ::g::Uno::Float4 _cornerRadius;

    void ctor_5();
    void AddArcWithCenter(::g::ObjC::Object* handle, float centerX, float centerY, float radius, float startAngle, float endAngle);
    void AddLineToPoint(::g::ObjC::Object* handle, float x, float y);
    void ClosePath(::g::ObjC::Object* handle);
    void MoveToPoint(::g::ObjC::Object* handle, float x, float y);
    static ::g::ObjC::Object* CreateUIBezierPath();
    static Rectangle* New3();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
