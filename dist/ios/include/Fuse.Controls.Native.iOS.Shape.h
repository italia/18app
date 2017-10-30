// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Shape.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Shape;}}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal abstract extern class Shape :15
// {
struct Shape_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::IShapeView interface2;
    void(*fp_CreatePath)(::g::Fuse::Controls::Native::iOS::Shape*, ::g::ObjC::Object**);
};

Shape_type* Shape_typeof();
void Shape__ctor_4_fn(Shape* __this);
void Shape__Create_fn(::g::ObjC::Object** __retval);
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint);
void Shape__MakeLayers_fn(::g::ObjC::Object* handle, int* layerCount);
void Shape__OnPositionChanged_fn(Shape* __this);
void Shape__OnShapeChanged_fn(Shape* __this);
void Shape__OnSizeChanged_fn(Shape* __this);
void Shape__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval);
void Shape__SetBrush_fn(Shape* __this, ::g::Fuse::Drawing::Brush* brush, int* layer, ::g::ObjC::Object* path, bool* isLine, float* strokeWidth);
void Shape__SetBrush1_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a, int* layerIndex, ::g::ObjC::Object* pathHandle, bool* isLine, float* strokeWidth, float* opacity);
void Shape__SetLinearGradient_fn(Shape* __this, ::g::Fuse::Drawing::LinearGradient* gradient, int* layer, ::g::ObjC::Object* path, bool* isLine, float* strokeWidth);
void Shape__SetLinearGradient1_fn(::g::ObjC::Object* handle, int* layerIndex, ::g::ObjC::Object* pathHandle, bool* isLine, float* strokeWidth, float* startX, float* startY, float* endX, float* endY, uArray* colors, uArray* offsets, float* width, float* height);
void Shape__get_ShapePosition_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__get_ShapeSize_fn(Shape* __this, ::g::Uno::Float2* __retval);

struct Shape : ::g::Fuse::Controls::Native::iOS::View
{
    uStrong<uArray*> _fills;
    uStrong<uArray*> _strokes;

    void ctor_4();
    ::g::ObjC::Object* CreatePath() { ::g::ObjC::Object* __retval; return (((Shape_type*)__type)->fp_CreatePath)(this, &__retval), __retval; }
    void OnShapeChanged();
    void SetBrush(::g::Fuse::Drawing::Brush* brush, int layer, ::g::ObjC::Object* path, bool isLine, float strokeWidth);
    void SetLinearGradient(::g::Fuse::Drawing::LinearGradient* gradient, int layer, ::g::ObjC::Object* path, bool isLine, float strokeWidth);
    ::g::Uno::Float2 ShapePosition();
    ::g::Uno::Float2 ShapeSize();
    static ::g::ObjC::Object* Create();
    static void MakeLayers(::g::ObjC::Object* handle, int layerCount);
    static int SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b);
    static void SetBrush1(::g::ObjC::Object* handle, float r, float g, float b, float a, int layerIndex, ::g::ObjC::Object* pathHandle, bool isLine, float strokeWidth, float opacity);
    static void SetLinearGradient1(::g::ObjC::Object* handle, int layerIndex, ::g::ObjC::Object* pathHandle, bool isLine, float strokeWidth, float startX, float startY, float endX, float endY, uArray* colors, uArray* offsets, float width, float height);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
