// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Ellipse.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.Ellipse.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class Ellipse :11
// {
static void Ellipse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Shape_type, interface2));
    type->SetFields(12);
}

::g::Fuse::Controls::Native::iOS::Shape_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::iOS::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::Shape_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::iOS::Shape_type);
    type = (::g::Fuse::Controls::Native::iOS::Shape_type*)uClassType::New("Fuse.Controls.Native.iOS.Ellipse", options);
    type->fp_build_ = Ellipse_build;
    type->fp_ctor_ = (void*)Ellipse__New3_fn;
    type->fp_CreatePath = (void(*)(::g::Fuse::Controls::Native::iOS::Shape*, ::g::ObjC::Object**))Ellipse__CreatePath_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::iOS::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public generated Ellipse() :11
void Ellipse__ctor_5_fn(Ellipse* __this)
{
    __this->ctor_5();
}

// protected override sealed ObjC.Object CreatePath() :13
void Ellipse__CreatePath_fn(Ellipse* __this, ::g::ObjC::Object** __retval)
{
    return *__retval = Ellipse::CreateUIBezierPath(__this->ShapePosition().X, __this->ShapePosition().Y, __this->ShapeSize().X, __this->ShapeSize().Y), void();
}

// private static ObjC.Object CreateUIBezierPath(float x, float y, float width, float height) :19
void Ellipse__CreateUIBezierPath_fn(float* x, float* y, float* width, float* height, ::g::ObjC::Object** __retval)
{
    *__retval = Ellipse::CreateUIBezierPath(*x, *y, *width, *height);
}

// public generated Ellipse New() :11
void Ellipse__New3_fn(Ellipse** __retval)
{
    *__retval = Ellipse::New3();
}

// public generated Ellipse() [instance] :11
void Ellipse::ctor_5()
{
    ctor_4();
}

// private static ObjC.Object CreateUIBezierPath(float x, float y, float width, float height) [static] :19
::g::ObjC::Object* Ellipse::CreateUIBezierPath(float x, float y, float width, float height)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (float x, float y, float width, float height) -> ::id
        {
            return [UIBezierPath bezierPathWithOvalInRect:CGRectMake(x, y, width, height)];
        } (x, y, width, height));
        
    }
    
}

// public generated Ellipse New() [static] :11
Ellipse* Ellipse::New3()
{
    Ellipse* obj1 = (Ellipse*)uNew(Ellipse_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
