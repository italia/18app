// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Brushes/SolidColor.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.ISolidColor.h>
#include <Fuse.Drawing.StaticBrush.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct StaticSolidColor;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class StaticSolidColor :67
// {
struct StaticSolidColor_type : ::g::Fuse::Drawing::Brush_type
{
    ::g::Fuse::Drawing::ISolidColor interface0;
};

StaticSolidColor_type* StaticSolidColor_typeof();
void StaticSolidColor__ctor_3_fn(StaticSolidColor* __this, ::g::Uno::Float4* color);
void StaticSolidColor__get_Color_fn(StaticSolidColor* __this, ::g::Uno::Float4* __retval);
void StaticSolidColor__get_IsCompletelyTransparent_fn(StaticSolidColor* __this, bool* __retval);
void StaticSolidColor__New2_fn(::g::Uno::Float4* color, StaticSolidColor** __retval);

struct StaticSolidColor : ::g::Fuse::Drawing::StaticBrush
{
    ::g::Uno::Float4 _color;

    void ctor_3(::g::Uno::Float4 color);
    ::g::Uno::Float4 Color();
    static StaticSolidColor* New2(::g::Uno::Float4 color);
};
// }

}}} // ::g::Fuse::Drawing
