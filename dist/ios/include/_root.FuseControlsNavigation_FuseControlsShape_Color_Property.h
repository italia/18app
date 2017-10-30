// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/.uno/ux13/Fuse.Controls.Navigation.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsNavigation_FuseControlsShape_Color_Property;}

namespace g{

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property :1
// {
::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof();
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name);
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void FuseControlsNavigation_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsShape_Color_Property** __retval);
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval);

struct FuseControlsNavigation_FuseControlsShape_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Shape*> _obj;

    void ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
    static FuseControlsNavigation_FuseControlsShape_Color_Property* New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
