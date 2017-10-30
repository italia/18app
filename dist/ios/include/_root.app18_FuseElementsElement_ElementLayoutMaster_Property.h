// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Element.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct app18_FuseElementsElement_ElementLayoutMaster_Property;}

namespace g{

// internal sealed class app18_FuseElementsElement_ElementLayoutMaster_Property :570
// {
::g::Uno::UX::Property1_type* app18_FuseElementsElement_ElementLayoutMaster_Property_typeof();
void app18_FuseElementsElement_ElementLayoutMaster_Property__ctor_3_fn(app18_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void app18_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn(app18_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval);
void app18_FuseElementsElement_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, app18_FuseElementsElement_ElementLayoutMaster_Property** __retval);
void app18_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn(app18_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void app18_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn(app18_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin);

struct app18_FuseElementsElement_ElementLayoutMaster_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static app18_FuseElementsElement_ElementLayoutMaster_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
