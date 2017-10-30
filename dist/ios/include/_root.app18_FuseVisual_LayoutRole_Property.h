// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.LayoutRole.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct app18_FuseVisual_LayoutRole_Property;}

namespace g{

// internal sealed class app18_FuseVisual_LayoutRole_Property :387
// {
::g::Uno::UX::Property1_type* app18_FuseVisual_LayoutRole_Property_typeof();
void app18_FuseVisual_LayoutRole_Property__ctor_3_fn(app18_FuseVisual_LayoutRole_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name);
void app18_FuseVisual_LayoutRole_Property__Get1_fn(app18_FuseVisual_LayoutRole_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval);
void app18_FuseVisual_LayoutRole_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, app18_FuseVisual_LayoutRole_Property** __retval);
void app18_FuseVisual_LayoutRole_Property__get_Object_fn(app18_FuseVisual_LayoutRole_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void app18_FuseVisual_LayoutRole_Property__Set1_fn(app18_FuseVisual_LayoutRole_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin);

struct app18_FuseVisual_LayoutRole_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Visual*> _obj;

    void ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
    static app18_FuseVisual_LayoutRole_Property* New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
