// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct app18_ButtonEntry_icon_Property;}
namespace g{struct ButtonEntry;}

namespace g{

// internal sealed class app18_ButtonEntry_icon_Property :437
// {
::g::Uno::UX::Property1_type* app18_ButtonEntry_icon_Property_typeof();
void app18_ButtonEntry_icon_Property__ctor_3_fn(app18_ButtonEntry_icon_Property* __this, ::g::ButtonEntry* obj, ::g::Uno::UX::Selector* name);
void app18_ButtonEntry_icon_Property__Get1_fn(app18_ButtonEntry_icon_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval);
void app18_ButtonEntry_icon_Property__New1_fn(::g::ButtonEntry* obj, ::g::Uno::UX::Selector* name, app18_ButtonEntry_icon_Property** __retval);
void app18_ButtonEntry_icon_Property__get_Object_fn(app18_ButtonEntry_icon_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void app18_ButtonEntry_icon_Property__Set1_fn(app18_ButtonEntry_icon_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin);
void app18_ButtonEntry_icon_Property__get_SupportsOriginSetter_fn(app18_ButtonEntry_icon_Property* __this, bool* __retval);

struct app18_ButtonEntry_icon_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ButtonEntry*> _obj;

    void ctor_3(::g::ButtonEntry* obj, ::g::Uno::UX::Selector name);
    static app18_ButtonEntry_icon_Property* New1(::g::ButtonEntry* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
