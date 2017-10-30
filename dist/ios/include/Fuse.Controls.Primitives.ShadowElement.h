// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/ShadowElement.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace Primitives{struct ShadowElement;}}}}
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Primitives{

// internal sealed class ShadowElement :11
// {
::g::Fuse::Elements::Element_type* ShadowElement_typeof();
void ShadowElement__ctor_4_fn(ShadowElement* __this);
void ShadowElement__CalcRenderBounds_fn(ShadowElement* __this, ::g::Fuse::VisualBounds** __retval);
void ShadowElement__get_Color_fn(ShadowElement* __this, ::g::Uno::Float4* __retval);
void ShadowElement__set_Color_fn(ShadowElement* __this, ::g::Uno::Float4* value);
void ShadowElement__get_CornerRadius_fn(ShadowElement* __this, ::g::Uno::Float4* __retval);
void ShadowElement__get_MaxSize_fn(ShadowElement* __this, float* __retval);
void ShadowElement__New2_fn(ShadowElement** __retval);
void ShadowElement__OnDraw_fn(ShadowElement* __this, ::g::Fuse::DrawContext* dc);
void ShadowElement__OnRooted_fn(ShadowElement* __this);
void ShadowElement__OnUnrooted_fn(ShadowElement* __this);
void ShadowElement__get_Size_fn(ShadowElement* __this, float* __retval);
void ShadowElement__set_Size_fn(ShadowElement* __this, float* value);
void ShadowElement__get_Smoothness_fn(ShadowElement* __this, float* __retval);
void ShadowElement__UnoUXIPropertyListenerOnPropertyChanged_fn(ShadowElement* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct ShadowElement : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Controls::Circle*> _circleParent;
    ::g::Uno::Float4 _color;
    uStrong< ::g::Fuse::Drawing::SolidColor*> _fill;
    float _minSmoothness;
    uStrong< ::g::Fuse::Controls::Rectangle*> _rectangleParent;
    float _size;

    void ctor_4();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    ::g::Uno::Float4 CornerRadius();
    float MaxSize();
    float Size();
    void Size(float value);
    float Smoothness();
    static ShadowElement* New2();
};
// }

}}}} // ::g::Fuse::Controls::Primitives
