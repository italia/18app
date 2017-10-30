// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/Behaviors/Shadow.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{namespace Primitives{struct ShadowElement;}}}}
namespace g{namespace Fuse{namespace Controls{struct Shadow;}}}
namespace g{namespace Fuse{namespace Effects{struct DropShadow;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Shadow :27
// {
::g::Fuse::Node_type* Shadow_typeof();
void Shadow__ctor_3_fn(Shadow* __this);
void Shadow__AddDecoration_fn(Shadow* __this);
void Shadow__get_Angle_fn(Shadow* __this, float* __retval);
void Shadow__set_Angle_fn(Shadow* __this, float* value);
void Shadow__get_Color_fn(Shadow* __this, ::g::Uno::Float4* __retval);
void Shadow__set_Color_fn(Shadow* __this, ::g::Uno::Float4* value);
void Shadow__get_Distance_fn(Shadow* __this, float* __retval);
void Shadow__set_Distance_fn(Shadow* __this, float* value);
void Shadow__New2_fn(Shadow** __retval);
void Shadow__get_Offset_fn(Shadow* __this, ::g::Uno::Float2* __retval);
void Shadow__OnRooted_fn(Shadow* __this);
void Shadow__OnUnrooted_fn(Shadow* __this);
void Shadow__RemoveDecoration_fn(Shadow* __this);
void Shadow__get_Size_fn(Shadow* __this, float* __retval);
void Shadow__set_Size_fn(Shadow* __this, float* value);

struct Shadow : ::g::Fuse::Behavior
{
    float _angle;
    ::g::Uno::Float4 _color;
    float _distance;
    uStrong< ::g::Fuse::Effects::DropShadow*> _dropShadow;
    uStrong< ::g::Fuse::Elements::Element*> _elementParent;
    int _mode;
    uStrong< ::g::Fuse::Controls::Primitives::ShadowElement*> _rectangle;
    uStrong< ::g::Fuse::Translation*> _rectangleTranslation;
    float _size;

    void ctor_3();
    void AddDecoration();
    float Angle();
    void Angle(float value);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    float Distance();
    void Distance(float value);
    ::g::Uno::Float2 Offset();
    void RemoveDecoration();
    float Size();
    void Size(float value);
    static Shadow* New2();
};
// }

}}} // ::g::Fuse::Controls
