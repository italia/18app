// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MyCouponPage.g.uno.
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
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MyCouponPage;}

namespace g{

// public partial sealed class MyCouponPage :2
// {
::g::Fuse::Controls::Panel_type* MyCouponPage_typeof();
void MyCouponPage__ctor_9_fn(MyCouponPage* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
void MyCouponPage__InitializeUX1_fn(MyCouponPage* __this);
void MyCouponPage__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, MyCouponPage** __retval);

struct MyCouponPage : ::g::BasePage
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MyCouponPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MyCouponPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MyCouponPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MyCouponPage_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MyCouponPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MyCouponPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MyCouponPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MyCouponPage_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MyCouponPage_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MyCouponPage_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MyCouponPage_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MyCouponPage_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator;
    uStrong< ::g::Uno::UX::Property1*> indicator_Element_LayoutMaster_inst;
    uStrong< ::g::Fuse::Visual*> navBar;
    uStrong< ::g::Fuse::Controls::PageControl*> navigation;
    uStrong< ::g::Uno::UX::Property1*> navigation_Active_inst;
    uStrong< ::g::Fuse::Controls::Page*> page1;
    uStrong< ::g::Fuse::Controls::Panel*> page1Tab;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Controls::Panel*> page2Tab;
    uStrong< ::g::Fuse::Controls::Page*> page3;
    uStrong< ::g::Fuse::Controls::Panel*> page3Tab;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Items_inst;

    void ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
    void InitializeUX1();
    static MyCouponPage* New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
};
// }

} // ::g
