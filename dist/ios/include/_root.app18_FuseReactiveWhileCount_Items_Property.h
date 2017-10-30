// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileCount;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct app18_FuseReactiveWhileCount_Items_Property;}

namespace g{

// internal sealed class app18_FuseReactiveWhileCount_Items_Property :429
// {
::g::Uno::UX::Property1_type* app18_FuseReactiveWhileCount_Items_Property_typeof();
void app18_FuseReactiveWhileCount_Items_Property__ctor_3_fn(app18_FuseReactiveWhileCount_Items_Property* __this, ::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector* name);
void app18_FuseReactiveWhileCount_Items_Property__Get1_fn(app18_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void app18_FuseReactiveWhileCount_Items_Property__New1_fn(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector* name, app18_FuseReactiveWhileCount_Items_Property** __retval);
void app18_FuseReactiveWhileCount_Items_Property__get_Object_fn(app18_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void app18_FuseReactiveWhileCount_Items_Property__Set1_fn(app18_FuseReactiveWhileCount_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);

struct app18_FuseReactiveWhileCount_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::WhileCount*> _obj;

    void ctor_3(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector name);
    static app18_FuseReactiveWhileCount_Items_Property* New1(::g::Fuse::Reactive::WhileCount* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
