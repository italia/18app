// This file was generated based on /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/DropShadow.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Effects{struct DropShadow;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class DropShadow :11
// {
::g::Fuse::Effects::BasicEffect_type* DropShadow_typeof();
void DropShadow__ctor_4_fn(DropShadow* __this);
void DropShadow__get_Active_fn(DropShadow* __this, bool* __retval);
void DropShadow__get_Angle_fn(DropShadow* __this, float* __retval);
void DropShadow__set_Angle_fn(DropShadow* __this, float* value);
void DropShadow__get_Color_fn(DropShadow* __this, ::g::Uno::Float4* __retval);
void DropShadow__set_Color_fn(DropShadow* __this, ::g::Uno::Float4* value);
void DropShadow__get_Distance_fn(DropShadow* __this, float* __retval);
void DropShadow__set_Distance_fn(DropShadow* __this, float* value);
void DropShadow__ModifyRenderBounds_fn(DropShadow* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval);
void DropShadow__New2_fn(DropShadow** __retval);
void DropShadow__get_Offset_fn(DropShadow* __this, ::g::Uno::Float2* __retval);
void DropShadow__OnRender_fn(DropShadow* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void DropShadow__get_Padding_fn(DropShadow* __this, float* __retval);
void DropShadow__get_Radius_fn(DropShadow* __this, float* __retval);
void DropShadow__get_Sigma_fn(DropShadow* __this, float* __retval);
void DropShadow__get_Size_fn(DropShadow* __this, float* __retval);
void DropShadow__set_Size_fn(DropShadow* __this, float* value);
void DropShadow__get_Spread_fn(DropShadow* __this, float* __retval);
void DropShadow__set_Spread_fn(DropShadow* __this, float* value);

struct DropShadow : ::g::Fuse::Effects::BasicEffect
{
    float _angle;
    ::g::Uno::Float4 _color;
    float _distance;
    float _size;
    float _spread;

    void ctor_4();
    float Angle();
    void Angle(float value);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    float Distance();
    void Distance(float value);
    ::g::Uno::Float2 Offset();
    float Padding();
    float Radius();
    float Sigma();
    float Size();
    void Size(float value);
    float Spread();
    void Spread(float value);
    static DropShadow* New2();
};
// }

}}} // ::g::Fuse::Effects
