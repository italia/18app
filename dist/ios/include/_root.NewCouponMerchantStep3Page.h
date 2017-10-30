// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NewCouponMerchantStep3Page.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <_root.BasePage.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NewCouponMerchantStep3Page;}

namespace g{

// public partial sealed class NewCouponMerchantStep3Page :2
// {
::g::Fuse::Controls::Panel_type* NewCouponMerchantStep3Page_typeof();
void NewCouponMerchantStep3Page__ctor_9_fn(NewCouponMerchantStep3Page* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
void NewCouponMerchantStep3Page__InitializeUX1_fn(NewCouponMerchantStep3Page* __this);
void NewCouponMerchantStep3Page__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, NewCouponMerchantStep3Page** __retval);

struct NewCouponMerchantStep3Page : ::g::BasePage
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return NewCouponMerchantStep3Page_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NewCouponMerchantStep3Page_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return NewCouponMerchantStep3Page_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return NewCouponMerchantStep3Page_typeof()->Init(), __selector2_; }
    uStrong< ::g::Fuse::Visual*> navBar;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb19;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Selected_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
    void InitializeUX1();
    static NewCouponMerchantStep3Page* New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
};
// }

} // ::g
