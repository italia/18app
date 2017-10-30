// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Brush.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
namespace g{namespace Fuse{namespace Drawing{struct DynamicBrush;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract class DynamicBrush :81
// {
::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof();
void DynamicBrush__ctor_2_fn(DynamicBrush* __this);
void DynamicBrush__get_IsCompletelyTransparent_fn(DynamicBrush* __this, bool* __retval);
void DynamicBrush__get_Opacity_fn(DynamicBrush* __this, float* __retval);
void DynamicBrush__set_Opacity_fn(DynamicBrush* __this, float* value);

struct DynamicBrush : ::g::Fuse::Drawing::Brush
{
    float _opacity;
    static ::g::Uno::UX::Selector _opacityName_;
    static ::g::Uno::UX::Selector& _opacityName() { return _opacityName_; }

    void ctor_2();
    float Opacity();
    void Opacity(float value);
};
// }

}}} // ::g::Fuse::Drawing
