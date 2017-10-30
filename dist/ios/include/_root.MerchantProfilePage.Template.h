// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MerchantProfilePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MerchantProfilePage;}
namespace g{struct MerchantProfilePage__Template;}

namespace g{

// public partial sealed class MerchantProfilePage.Template :7
// {
::g::Uno::UX::Template_type* MerchantProfilePage__Template_typeof();
void MerchantProfilePage__Template__ctor_1_fn(MerchantProfilePage__Template* __this, ::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance);
void MerchantProfilePage__Template__New1_fn(MerchantProfilePage__Template* __this, uObject** __retval);
void MerchantProfilePage__Template__New2_fn(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance, MerchantProfilePage__Template** __retval);

struct MerchantProfilePage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::MerchantProfilePage*> __parent1;
    uWeak< ::g::MerchantProfilePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MerchantProfilePage__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance);
    static MerchantProfilePage__Template* New2(::g::MerchantProfilePage* parent, ::g::MerchantProfilePage* parentInstance);
};
// }

} // ::g
