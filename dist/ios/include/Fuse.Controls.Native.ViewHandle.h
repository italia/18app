// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/ViewHandle.iOS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public extern class ViewHandle :14
// {
struct ViewHandle_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Controls::Native::ViewHandle*);
    void(*fp_get_HitTestHandle)(::g::Fuse::Controls::Native::ViewHandle*, ::g::ObjC::Object**);
    void(*fp_OnPositionChanged)(::g::Fuse::Controls::Native::ViewHandle*);
    void(*fp_OnSizeChanged)(::g::Fuse::Controls::Native::ViewHandle*);
};

ViewHandle_type* ViewHandle_typeof();
void ViewHandle__ctor__fn(ViewHandle* __this, ::g::ObjC::Object* nativeHandle, int* inputMode);
void ViewHandle__ctor_1_fn(ViewHandle* __this, ::g::ObjC::Object* nativeHandle, bool* isLeafView, int* inputMode, int* invalidation);
void ViewHandle__BringToFront_fn(ViewHandle* __this);
void ViewHandle__Dispose_fn(ViewHandle* __this);
void ViewHandle__Format_fn(ViewHandle* __this, uString** __retval);
void ViewHandle__GetHitTesthandle_fn(ViewHandle* __this, ::g::ObjC::Object** __retval);
void ViewHandle__get_HandlesInput_fn(ViewHandle* __this, bool* __retval);
void ViewHandle__get_HitTestEnabled_fn(ViewHandle* __this, bool* __retval);
void ViewHandle__set_HitTestEnabled_fn(ViewHandle* __this, bool* value);
void ViewHandle__get_HitTestHandle_fn(ViewHandle* __this, ::g::ObjC::Object** __retval);
void ViewHandle__InitAnchorPoint_fn(ViewHandle* __this);
void ViewHandle__InsertChild_fn(ViewHandle* __this, ViewHandle* childHandle);
void ViewHandle__InsertChild1_fn(ViewHandle* __this, ViewHandle* childHandle, int* index);
void ViewHandle__Invalidate_fn(ViewHandle* __this);
void ViewHandle__get_IsEnabled_fn(ViewHandle* __this, bool* __retval);
void ViewHandle__set_IsEnabled_fn(ViewHandle* __this, bool* value);
void ViewHandle__Measure_fn(ViewHandle* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval);
void ViewHandle__New1_fn(::g::ObjC::Object* nativeHandle, int* inputMode, ViewHandle** __retval);
void ViewHandle__New2_fn(::g::ObjC::Object* nativeHandle, bool* isLeafView, int* inputMode, int* invalidation, ViewHandle** __retval);
void ViewHandle__OnPositionChanged_fn(ViewHandle* __this);
void ViewHandle__OnSizeChanged_fn(ViewHandle* __this);
void ViewHandle__get_Position_fn(ViewHandle* __this, ::g::Uno::Float2* __retval);
void ViewHandle__set_Position_fn(ViewHandle* __this, ::g::Uno::Float2* value);
void ViewHandle__RemoveChild_fn(ViewHandle* __this, ViewHandle* childHandle);
void ViewHandle__SetAccessibilityIdentifier_fn(ViewHandle* __this, uString* name);
void ViewHandle__SetBackground_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a);
void ViewHandle__SetBackgroundColor_fn(ViewHandle* __this, ::g::Uno::Float4* c);
void ViewHandle__SetClipToBounds_fn(ViewHandle* __this, bool* clipToBounds);
void ViewHandle__SetEnabled_fn(ViewHandle* __this, bool* value);
void ViewHandle__SetEnabledImpl_fn(ViewHandle* __this, bool* value);
void ViewHandle__SetHitTestEnabled_fn(ViewHandle* __this, bool* value);
void ViewHandle__SetIsVisible_fn(ViewHandle* __this, bool* isVisible);
void ViewHandle__SetOpacity_fn(ViewHandle* __this, float* value);
void ViewHandle__SetSize_fn(ViewHandle* __this, float* w, float* h);
void ViewHandle__SetSize1_fn(ViewHandle* __this, ::g::Uno::Float2* size);
void ViewHandle__SetSizeAndBounds_fn(ViewHandle* __this, float* w, float* h, float* bx, float* by, float* bw, float* bh);
void ViewHandle__SetSizeAndVisualBounds_fn(ViewHandle* __this, ::g::Uno::Float2* size, ::g::Fuse::VisualBounds* bounds);
void ViewHandle__SetTransform_fn(ViewHandle* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44);
void ViewHandle__SetTransform1_fn(ViewHandle* __this, ::g::Uno::Float4x4* t);
void ViewHandle__get_Size_fn(ViewHandle* __this, ::g::Uno::Float2* __retval);
void ViewHandle__set_Size_fn(ViewHandle* __this, ::g::Uno::Float2* value);
void ViewHandle__SizeThatFits_fn(ViewHandle* __this, float* w, float* h, float* resW, float* resH);
void ViewHandle__ToString_fn(ViewHandle* __this, uString** __retval);
void ViewHandle__UpdateViewRect_fn(ViewHandle* __this, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* size, float* density);

struct ViewHandle : uObject
{
    int _inputMode;
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _size;
    bool IsLeafView;
    uStrong< ::g::ObjC::Object*> NativeHandle;
    bool NeedsInvalidation;
    bool NeedsRenderBounds;
    bool _HitTestEnabled;
    bool _IsEnabled;

    void ctor_(::g::ObjC::Object* nativeHandle, int inputMode);
    void ctor_1(::g::ObjC::Object* nativeHandle, bool isLeafView, int inputMode, int invalidation);
    void BringToFront();
    void Dispose() { (((ViewHandle_type*)__type)->fp_Dispose)(this); }
    uString* Format();
    ::g::ObjC::Object* GetHitTesthandle();
    bool HandlesInput();
    bool HitTestEnabled();
    void HitTestEnabled(bool value);
    ::g::ObjC::Object* HitTestHandle() { ::g::ObjC::Object* __retval; return (((ViewHandle_type*)__type)->fp_get_HitTestHandle)(this, &__retval), __retval; }
    void InitAnchorPoint();
    void InsertChild(ViewHandle* childHandle);
    void InsertChild1(ViewHandle* childHandle, int index);
    void Invalidate();
    bool IsEnabled();
    void IsEnabled(bool value);
    ::g::Uno::Float2 Measure(::g::Fuse::LayoutParams lp, float density);
    void OnPositionChanged() { (((ViewHandle_type*)__type)->fp_OnPositionChanged)(this); }
    void OnSizeChanged() { (((ViewHandle_type*)__type)->fp_OnSizeChanged)(this); }
    ::g::Uno::Float2 Position();
    void Position(::g::Uno::Float2 value);
    void RemoveChild(ViewHandle* childHandle);
    void SetAccessibilityIdentifier(uString* name);
    void SetBackgroundColor(::g::Uno::Float4 c);
    void SetClipToBounds(bool clipToBounds);
    void SetEnabled(bool value);
    void SetEnabledImpl(bool value);
    void SetHitTestEnabled(bool value);
    void SetIsVisible(bool isVisible);
    void SetOpacity(float value);
    void SetSize(float w, float h);
    void SetSize1(::g::Uno::Float2 size);
    void SetSizeAndBounds(float w, float h, float bx, float by, float bw, float bh);
    void SetSizeAndVisualBounds(::g::Uno::Float2 size, ::g::Fuse::VisualBounds* bounds);
    void SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
    void SetTransform1(::g::Uno::Float4x4 t);
    ::g::Uno::Float2 Size();
    void Size(::g::Uno::Float2 value);
    void SizeThatFits(float w, float h, float* resW, float* resH);
    void UpdateViewRect(::g::Uno::Float4x4 transform, ::g::Uno::Float2 size, float density);
    static void Dispose(ViewHandle* __this) { ViewHandle__Dispose_fn(__this); }
    static ViewHandle* New1(::g::ObjC::Object* nativeHandle, int inputMode);
    static ViewHandle* New2(::g::ObjC::Object* nativeHandle, bool isLeafView, int inputMode, int invalidation);
    static void OnPositionChanged(ViewHandle* __this) { ViewHandle__OnPositionChanged_fn(__this); }
    static void OnSizeChanged(ViewHandle* __this) { ViewHandle__OnSizeChanged_fn(__this); }
    static void SetBackground(::g::ObjC::Object* handle, float r, float g, float b, float a);
    static ::g::ObjC::Object* HitTestHandle(ViewHandle* __this) { ::g::ObjC::Object* __retval; return ViewHandle__get_HitTestHandle_fn(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Controls::Native
