// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Stroke.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class Stroke :21
// {
struct Stroke_type : uType
{
    ::g::Uno::UX::IPropertyListener interface0;
};

Stroke_type* Stroke_typeof();
void Stroke__ctor_1_fn(Stroke* __this);
void Stroke__Adjust_fn(Stroke* __this, float* w, float* ppi, float* __retval);
void Stroke__get_Adjustment_fn(Stroke* __this, int* __retval);
void Stroke__set_Adjustment_fn(Stroke* __this, int* value);
void Stroke__AdjustPosition_fn(Stroke* __this, float* w, float* ppi, float* __retval);
void Stroke__get_Alignment_fn(Stroke* __this, int* __retval);
void Stroke__set_Alignment_fn(Stroke* __this, int* value);
void Stroke__get_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush** __retval);
void Stroke__set_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* value);
void Stroke__get_Color_fn(Stroke* __this, ::g::Uno::Float4* __retval);
void Stroke__set_Color_fn(Stroke* __this, ::g::Uno::Float4* value);
void Stroke__GetDeviceAdjusted_fn(Stroke* __this, float* pixelsPerPoint, ::g::Uno::Float2* __retval);
void Stroke__get_IsPinned_fn(Stroke* __this, bool* __retval);
void Stroke__get_LineCap_fn(Stroke* __this, int* __retval);
void Stroke__set_LineCap_fn(Stroke* __this, int* value);
void Stroke__get_LineJoin_fn(Stroke* __this, int* __retval);
void Stroke__set_LineJoin_fn(Stroke* __this, int* value);
void Stroke__get_LineJoinMiterLimit_fn(Stroke* __this, float* __retval);
void Stroke__set_LineJoinMiterLimit_fn(Stroke* __this, float* value);
void Stroke__New2_fn(Stroke** __retval);
void Stroke__get_Offset_fn(Stroke* __this, float* __retval);
void Stroke__set_Offset_fn(Stroke* __this, float* value);
void Stroke__OnPinned_fn(Stroke* __this);
void Stroke__OnUnpinned_fn(Stroke* __this);
void Stroke__Pin_fn(Stroke* __this);
void Stroke__Prepare_fn(Stroke* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Stroke__SetColor_fn(Stroke* __this, ::g::Uno::Float4* color, uObject* origin);
void Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn(Stroke* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void Stroke__Unpin_fn(Stroke* __this);
void Stroke__get_Width_fn(Stroke* __this, float* __retval);
void Stroke__set_Width_fn(Stroke* __this, float* value);

struct Stroke : ::g::Uno::UX::PropertyObject
{
    int _adjustment;
    static ::g::Uno::UX::Selector _adjustmentName_;
    static ::g::Uno::UX::Selector& _adjustmentName() { return _adjustmentName_; }
    int _alignment;
    static ::g::Uno::UX::Selector _alignmentName_;
    static ::g::Uno::UX::Selector& _alignmentName() { return _alignmentName_; }
    uStrong< ::g::Fuse::Drawing::Brush*> _brush;
    static ::g::Uno::UX::Selector _brushName_;
    static ::g::Uno::UX::Selector& _brushName() { return _brushName_; }
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return _colorName_; }
    int _lineCap;
    static ::g::Uno::UX::Selector _lineCapName_;
    static ::g::Uno::UX::Selector& _lineCapName() { return _lineCapName_; }
    int _lineJoin;
    float _lineJoinMiterLimit;
    static ::g::Uno::UX::Selector _lineJoinMiterLimitName_;
    static ::g::Uno::UX::Selector& _lineJoinMiterLimitName() { return _lineJoinMiterLimitName_; }
    static ::g::Uno::UX::Selector _lineJoinName_;
    static ::g::Uno::UX::Selector& _lineJoinName() { return _lineJoinName_; }
    float _offset;
    static ::g::Uno::UX::Selector _offsetName_;
    static ::g::Uno::UX::Selector& _offsetName() { return _offsetName_; }
    int _pinCount;
    static ::g::Uno::UX::Selector _shadingName_;
    static ::g::Uno::UX::Selector& _shadingName() { return _shadingName_; }
    float _width;
    static ::g::Uno::UX::Selector _widthName_;
    static ::g::Uno::UX::Selector& _widthName() { return _widthName_; }

    void ctor_1();
    float Adjust(float w, float ppi);
    int Adjustment();
    void Adjustment(int value);
    float AdjustPosition(float w, float ppi);
    int Alignment();
    void Alignment(int value);
    ::g::Fuse::Drawing::Brush* Brush();
    void Brush(::g::Fuse::Drawing::Brush* value);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    ::g::Uno::Float2 GetDeviceAdjusted(float pixelsPerPoint);
    bool IsPinned();
    int LineCap();
    void LineCap(int value);
    int LineJoin();
    void LineJoin(int value);
    float LineJoinMiterLimit();
    void LineJoinMiterLimit(float value);
    float Offset();
    void Offset(float value);
    void OnPinned();
    void OnUnpinned();
    void Pin();
    void Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void SetColor(::g::Uno::Float4 color, uObject* origin);
    void Unpin();
    float Width();
    void Width(float value);
    static Stroke* New2();
};
// }

}}} // ::g::Fuse::Drawing
