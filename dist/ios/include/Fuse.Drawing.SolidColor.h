// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Brushes/SolidColor.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ISolidColor.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class SolidColor :13
// {
struct SolidColor_type : ::g::Fuse::Drawing::Brush_type
{
    ::g::Fuse::Drawing::ISolidColor interface0;
};

SolidColor_type* SolidColor_typeof();
void SolidColor__ctor_3_fn(SolidColor* __this);
void SolidColor__ctor_4_fn(SolidColor* __this, ::g::Uno::Float4* color);
void SolidColor__get_Color_fn(SolidColor* __this, ::g::Uno::Float4* __retval);
void SolidColor__set_Color_fn(SolidColor* __this, ::g::Uno::Float4* value);
void SolidColor__get_IsCompletelyTransparent_fn(SolidColor* __this, bool* __retval);
void SolidColor__New2_fn(SolidColor** __retval);
void SolidColor__New3_fn(::g::Uno::Float4* color, SolidColor** __retval);
void SolidColor__SetColor_fn(SolidColor* __this, ::g::Uno::Float4* c);
void SolidColor__SetColor1_fn(SolidColor* __this, ::g::Uno::Float4* c, uObject* origin);

struct SolidColor : ::g::Fuse::Drawing::DynamicBrush
{
    ::g::Uno::Float4 _color;
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return _colorName_; }

    void ctor_3();
    void ctor_4(::g::Uno::Float4 color);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void SetColor(::g::Uno::Float4 c);
    void SetColor1(::g::Uno::Float4 c, uObject* origin);
    static SolidColor* New2();
    static SolidColor* New3(::g::Uno::Float4 color);
};
// }

}}} // ::g::Fuse::Drawing
