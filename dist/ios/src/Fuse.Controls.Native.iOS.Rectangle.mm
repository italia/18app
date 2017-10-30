// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Rectangle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.Rectangle.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Rectangle :11
// {
static void Rectangle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Rectangle_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Rectangle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Rectangle_type, interface2),
        ::g::Fuse::Controls::Native::IRectangleView_typeof(), offsetof(Rectangle_type, interface3));
    type->SetFields(12,
        ::g::Uno::Float4_typeof(), offsetof(Rectangle, _cornerRadius), 0);
}

Rectangle_type* Rectangle_typeof()
{
    static uSStrong<Rectangle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::Shape_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(Rectangle_type);
    type = (Rectangle_type*)uClassType::New("Fuse.Controls.Native.iOS.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New3_fn;
    type->fp_CreatePath = (void(*)(::g::Fuse::Controls::Native::iOS::Shape*, ::g::ObjC::Object**))Rectangle__CreatePath_fn;
    type->interface3.fp_set_CornerRadius = (void(*)(uObject*, ::g::Uno::Float4*))Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::iOS::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Rectangle() :11
void Rectangle__ctor_5_fn(Rectangle* __this)
{
    __this->ctor_5();
}

// private void AddArcWithCenter(ObjC.Object handle, float centerX, float centerY, float radius, float startAngle, float endAngle) :94
void Rectangle__AddArcWithCenter_fn(Rectangle* __this, ::g::ObjC::Object* handle, float* centerX, float* centerY, float* radius, float* startAngle, float* endAngle)
{
    __this->AddArcWithCenter(handle, *centerX, *centerY, *radius, *startAngle, *endAngle);
}

// private void AddLineToPoint(ObjC.Object handle, float x, float y) :87
void Rectangle__AddLineToPoint_fn(Rectangle* __this, ::g::ObjC::Object* handle, float* x, float* y)
{
    __this->AddLineToPoint(handle, *x, *y);
}

// private void ClosePath(ObjC.Object handle) :73
void Rectangle__ClosePath_fn(Rectangle* __this, ::g::ObjC::Object* handle)
{
    __this->ClosePath(handle);
}

// protected override sealed ObjC.Object CreatePath() :23
void Rectangle__CreatePath_fn(Rectangle* __this, ::g::ObjC::Object** __retval)
{
    ::g::Uno::Float2 pos = __this->ShapePosition();
    ::g::Uno::Float2 size = __this->ShapeSize();
    float mn = ::g::Uno::Math::Min1(size.X, size.Y) / 2.0f;
    ::g::Uno::Float4 cr = __this->_cornerRadius;

    for (int i = 0; i < 4; i++)
        cr.Item(i, ::g::Uno::Math::Min1(mn, cr.Item(i)));

    ::g::ObjC::Object* path = Rectangle::CreateUIBezierPath();
    __this->MoveToPoint(path, pos.X + cr.Item(0), pos.Y);
    ::g::Uno::Float2 t = ::g::Uno::Float2__op_Addition2(pos, ::g::Uno::Float2__New2(size.X - cr.Item(1), 0.0f));
    __this->AddLineToPoint(path, t.X, t.Y);
    t = ::g::Uno::Float2__op_Addition2(pos, ::g::Uno::Float2__New2(size.X - cr.Item(1), cr.Item(1)));
    __this->AddArcWithCenter(path, t.X, t.Y, cr.Item(1), -1.57079637f, 0.0f);
    t = ::g::Uno::Float2__op_Addition2(pos, ::g::Uno::Float2__New2(size.X, size.Y - cr.Item(2)));
    __this->AddLineToPoint(path, t.X, t.Y);
    t = ::g::Uno::Float2__op_Addition2(pos, ::g::Uno::Float2__New2(size.X - cr.Item(2), size.Y - cr.Item(2)));
    __this->AddArcWithCenter(path, t.X, t.Y, cr.Item(2), 0.0f, 1.57079637f);
    t = ::g::Uno::Float2__op_Addition2(pos, ::g::Uno::Float2__New2(cr.Item(3), size.Y));
    __this->AddLineToPoint(path, t.X, t.Y);
    t = ::g::Uno::Float2__op_Addition2(pos, ::g::Uno::Float2__New2(cr.Item(3), size.Y - cr.Item(3)));
    __this->AddArcWithCenter(path, t.X, t.Y, cr.Item(3), 1.57079637f, 3.14159274f);
    t = ::g::Uno::Float2__op_Addition2(pos, ::g::Uno::Float2__New2(0.0f, cr.Item(0)));
    __this->AddLineToPoint(path, t.X, t.Y);
    t = ::g::Uno::Float2__op_Addition2(pos, ::g::Uno::Float2__New2(cr.Item(0), cr.Item(0)));
    __this->AddArcWithCenter(path, t.X, t.Y, cr.Item(0), -3.14159274f, -1.57079637f);
    __this->ClosePath(path);
    return *__retval = path, void();
}

// private static ObjC.Object CreateUIBezierPath() :67
void Rectangle__CreateUIBezierPath_fn(::g::ObjC::Object** __retval)
{
    *__retval = Rectangle::CreateUIBezierPath();
}

// private void Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4 value) :16
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    __this->_cornerRadius = value_;
    __this->OnShapeChanged();
}

// private void MoveToPoint(ObjC.Object handle, float x, float y) :80
void Rectangle__MoveToPoint_fn(Rectangle* __this, ::g::ObjC::Object* handle, float* x, float* y)
{
    __this->MoveToPoint(handle, *x, *y);
}

// public generated Rectangle New() :11
void Rectangle__New3_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New3();
}

// public generated Rectangle() [instance] :11
void Rectangle::ctor_5()
{
    _cornerRadius = ::g::Uno::Float4__New1(0.0f);
    ctor_4();
}

// private void AddArcWithCenter(ObjC.Object handle, float centerX, float centerY, float radius, float startAngle, float endAngle) [instance] :94
void Rectangle::AddArcWithCenter(::g::ObjC::Object* handle, float centerX, float centerY, float radius, float startAngle, float endAngle)
{
    @autoreleasepool
    {
        [] (::id handle, float centerX, float centerY, float radius, float startAngle, float endAngle) -> void
        {
            UIBezierPath* path = (UIBezierPath*)handle;
            [path addArcWithCenter: { centerX, centerY } radius:radius startAngle:startAngle endAngle:endAngle clockwise:true];
        } (::g::ObjC::Object::GetHandle(handle), centerX, centerY, radius, startAngle, endAngle);
        
    }
    
}

// private void AddLineToPoint(ObjC.Object handle, float x, float y) [instance] :87
void Rectangle::AddLineToPoint(::g::ObjC::Object* handle, float x, float y)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y) -> void
        {
            UIBezierPath* path = (UIBezierPath*)handle;
            [path addLineToPoint: { x, y }];
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private void ClosePath(ObjC.Object handle) [instance] :73
void Rectangle::ClosePath(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            UIBezierPath* path = (UIBezierPath*)handle;
            [path closePath];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private void MoveToPoint(ObjC.Object handle, float x, float y) [instance] :80
void Rectangle::MoveToPoint(::g::ObjC::Object* handle, float x, float y)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y) -> void
        {
            UIBezierPath* path = (UIBezierPath*)handle;
            [path moveToPoint: { x, y }];
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static ObjC.Object CreateUIBezierPath() [static] :67
::g::ObjC::Object* Rectangle::CreateUIBezierPath()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return  [[UIBezierPath alloc] init];
        } ());
        
    }
    
}

// public generated Rectangle New() [static] :11
Rectangle* Rectangle::New3()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
