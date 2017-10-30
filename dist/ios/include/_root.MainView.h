// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Shadow;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BottomBar;}
namespace g{struct HomePage;}
namespace g{struct InfoPage;}
namespace g{struct MainView;}
namespace g{struct MerchantProfilePage;}
namespace g{struct MerchantsListPage;}
namespace g{struct MyCouponPage;}
namespace g{struct NavBar;}
namespace g{struct NewCouponMerchantStep1Page;}
namespace g{struct NewCouponMerchantStep2Page;}
namespace g{struct NewCouponMerchantStep3Page;}
namespace g{struct NewCouponMerchantStep4Page;}
namespace g{struct NewCouponStep1Page;}
namespace g{struct NewCouponStep2Page;}
namespace g{struct NewCouponStep3Page;}
namespace g{struct NewCouponStep4Page;}
namespace g{struct NotificationsPage;}
namespace g{struct ProfilePage;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New2_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MainView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MainView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MainView_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MainView_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return MainView_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return MainView_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return MainView_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return MainView_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return MainView_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return MainView_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return MainView_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return MainView_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return MainView_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainView_typeof()->Init(), __selector9_; }
    uStrong< ::g::BottomBar*> bottomBar;
    uStrong< ::g::Uno::UX::Property1*> bottomBar_Visibility_inst;
    uStrong< ::g::HomePage*> home;
    uStrong< ::g::InfoPage*> info;
    uStrong< ::g::MerchantProfilePage*> merchantProfile;
    uStrong< ::g::MerchantsListPage*> merchants;
    uStrong< ::g::MyCouponPage*> myCoupon;
    uStrong< ::g::NavBar*> navBar;
    uStrong< ::g::NewCouponMerchantStep1Page*> newCouponMerchantStep1;
    uStrong< ::g::NewCouponMerchantStep2Page*> newCouponMerchantStep2;
    uStrong< ::g::NewCouponMerchantStep3Page*> newCouponMerchantStep3;
    uStrong< ::g::NewCouponMerchantStep4Page*> newCouponMerchantStep4;
    uStrong< ::g::NewCouponStep1Page*> newCouponStep1;
    uStrong< ::g::NewCouponStep2Page*> newCouponStep2;
    uStrong< ::g::NewCouponStep3Page*> newCouponStep3;
    uStrong< ::g::NewCouponStep4Page*> newCouponStep4;
    uStrong< ::g::NotificationsPage*> notifications;
    uStrong< ::g::ProfilePage*> profile;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Controls::Shadow*> shadow;
    uStrong< ::g::Uno::UX::Property1*> shadow_Color_inst;
    uStrong< ::g::Fuse::Controls::DockPanel*> sidebar;
    uStrong< ::g::Fuse::Controls::Rectangle*> sidebarFade;
    uStrong< ::g::Uno::UX::Property1*> sidebarFade_Opacity_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;

    void ctor_4();
    void InitializeUX();
    static MainView* New2();
};
// }

} // ::g
