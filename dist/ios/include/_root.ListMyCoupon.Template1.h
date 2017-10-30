// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ListMyCoupon.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListMyCoupon;}
namespace g{struct ListMyCoupon__Template1;}

namespace g{

// public partial sealed class ListMyCoupon.Template1 :85
// {
::g::Uno::UX::Template_type* ListMyCoupon__Template1_typeof();
void ListMyCoupon__Template1__ctor_1_fn(ListMyCoupon__Template1* __this, ::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance);
void ListMyCoupon__Template1__New1_fn(ListMyCoupon__Template1* __this, uObject** __retval);
void ListMyCoupon__Template1__New2_fn(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance, ListMyCoupon__Template1** __retval);

struct ListMyCoupon__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::ListMyCoupon*> __parent1;
    uWeak< ::g::ListMyCoupon*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListMyCoupon__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListMyCoupon__Template1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListMyCoupon__Template1_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ListMyCoupon__Template1_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ListMyCoupon__Template1_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ListMyCoupon__Template1_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return ListMyCoupon__Template1_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return ListMyCoupon__Template1_typeof()->Init(), __selector7_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Category_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Currency_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb7;
    uStrong< ::g::Uno::UX::Property1*> temp_icon_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_id_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Price_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_ShopPlace_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_State_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_TypeCoupon_inst;

    void ctor_1(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance);
    static ListMyCoupon__Template1* New2(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance);
};
// }

} // ::g
