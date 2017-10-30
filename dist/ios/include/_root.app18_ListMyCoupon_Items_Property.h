// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct app18_ListMyCoupon_Items_Property;}
namespace g{struct ListMyCoupon;}

namespace g{

// internal sealed class app18_ListMyCoupon_Items_Property :578
// {
::g::Uno::UX::Property1_type* app18_ListMyCoupon_Items_Property_typeof();
void app18_ListMyCoupon_Items_Property__ctor_3_fn(app18_ListMyCoupon_Items_Property* __this, ::g::ListMyCoupon* obj, ::g::Uno::UX::Selector* name);
void app18_ListMyCoupon_Items_Property__Get1_fn(app18_ListMyCoupon_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void app18_ListMyCoupon_Items_Property__New1_fn(::g::ListMyCoupon* obj, ::g::Uno::UX::Selector* name, app18_ListMyCoupon_Items_Property** __retval);
void app18_ListMyCoupon_Items_Property__get_Object_fn(app18_ListMyCoupon_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void app18_ListMyCoupon_Items_Property__Set1_fn(app18_ListMyCoupon_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void app18_ListMyCoupon_Items_Property__get_SupportsOriginSetter_fn(app18_ListMyCoupon_Items_Property* __this, bool* __retval);

struct app18_ListMyCoupon_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::ListMyCoupon*> _obj;

    void ctor_3(::g::ListMyCoupon* obj, ::g::Uno::UX::Selector name);
    static app18_ListMyCoupon_Items_Property* New1(::g::ListMyCoupon* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
