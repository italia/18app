// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ListMyCoupon.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListMyCoupon;}
namespace g{struct ListMyCoupon__Template;}

namespace g{

// public partial sealed class ListMyCoupon.Template :50
// {
::g::Uno::UX::Template_type* ListMyCoupon__Template_typeof();
void ListMyCoupon__Template__ctor_1_fn(ListMyCoupon__Template* __this, ::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance);
void ListMyCoupon__Template__New1_fn(ListMyCoupon__Template* __this, uObject** __retval);
void ListMyCoupon__Template__New2_fn(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance, ListMyCoupon__Template** __retval);

struct ListMyCoupon__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::ListMyCoupon*> __parent1;
    uWeak< ::g::ListMyCoupon*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListMyCoupon__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListMyCoupon__Template_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> temp_icon_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_1(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance);
    static ListMyCoupon__Template* New2(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance);
};
// }

} // ::g
