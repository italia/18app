// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MerchantsListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MerchantsListPage;}
namespace g{struct MerchantsListPage__Template;}

namespace g{

// public partial sealed class MerchantsListPage.Template :7
// {
::g::Uno::UX::Template_type* MerchantsListPage__Template_typeof();
void MerchantsListPage__Template__ctor_1_fn(MerchantsListPage__Template* __this, ::g::MerchantsListPage* parent, ::g::MerchantsListPage* parentInstance);
void MerchantsListPage__Template__New1_fn(MerchantsListPage__Template* __this, uObject** __retval);
void MerchantsListPage__Template__New2_fn(::g::MerchantsListPage* parent, ::g::MerchantsListPage* parentInstance, MerchantsListPage__Template** __retval);

struct MerchantsListPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::MerchantsListPage*> __parent1;
    uWeak< ::g::MerchantsListPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MerchantsListPage__Template_typeof()->Init(), __selector0_; }
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb14;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;

    void ctor_1(::g::MerchantsListPage* parent, ::g::MerchantsListPage* parentInstance);
    static MerchantsListPage__Template* New2(::g::MerchantsListPage* parent, ::g::MerchantsListPage* parentInstance);
};
// }

} // ::g
