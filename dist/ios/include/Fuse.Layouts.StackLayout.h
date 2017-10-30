// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Layouts/StackLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct StackLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class StackLayout :24
// {
::g::Fuse::Layouts::Layout_type* StackLayout_typeof();
void StackLayout__ctor_2_fn(StackLayout* __this);
void StackLayout__ArrangePaddingBox_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void StackLayout__get_ContentAlignment_fn(StackLayout* __this, int* __retval);
void StackLayout__set_ContentAlignment_fn(StackLayout* __this, int* value);
void StackLayout__get_EffectiveContentAlignment_fn(StackLayout* __this, int* __retval);
void StackLayout__get_EffectiveItemSpacing_fn(StackLayout* __this, float* __retval);
void StackLayout__GetContentSize_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void StackLayout__GetElementsSize_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void StackLayout__get_ItemSpacing_fn(StackLayout* __this, float* __retval);
void StackLayout__set_ItemSpacing_fn(StackLayout* __this, float* value);
void StackLayout__get_Mode_fn(StackLayout* __this, int* __retval);
void StackLayout__set_Mode_fn(StackLayout* __this, int* value);
void StackLayout__New2_fn(StackLayout** __retval);
void StackLayout__get_Orientation_fn(StackLayout* __this, int* __retval);
void StackLayout__set_Orientation_fn(StackLayout* __this, int* value);

struct StackLayout : ::g::Fuse::Layouts::Layout
{
    int _contentAlignment;
    float _itemSpacing;
    int _mode;
    int _orientation;

    void ctor_2();
    int ContentAlignment();
    void ContentAlignment(int value);
    int EffectiveContentAlignment();
    float EffectiveItemSpacing();
    ::g::Uno::Float2 GetElementsSize(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp);
    float ItemSpacing();
    void ItemSpacing(float value);
    int Mode();
    void Mode(int value);
    int Orientation();
    void Orientation(int value);
    static StackLayout* New2();
};
// }

}}} // ::g::Fuse::Layouts
