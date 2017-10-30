// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NavBarTitle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NavBarTitle;}

namespace g{

// public partial sealed class NavBarTitle :2
// {
::g::Fuse::Controls::Panel_type* NavBarTitle_typeof();
void NavBarTitle__ctor_7_fn(NavBarTitle* __this, ::g::Fuse::Visual* navBar1);
void NavBarTitle__InitializeUX_fn(NavBarTitle* __this);
void NavBarTitle__New4_fn(::g::Fuse::Visual* navBar1, NavBarTitle** __retval);
void NavBarTitle__SetText_fn(NavBarTitle* __this, uString* value, uObject* origin);
void NavBarTitle__get_Text_fn(NavBarTitle* __this, uString** __retval);
void NavBarTitle__set_Text_fn(NavBarTitle* __this, uString* value);

struct NavBarTitle : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NavBarTitle_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return NavBarTitle_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return NavBarTitle_typeof()->Init(), __selector2_; }
    uStrong<uString*> _field_Text;
    uStrong< ::g::Fuse::Visual*> navBar;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Fuse::Controls::StackPanel*> title;
    uStrong< ::g::Uno::UX::Property1*> title_Opacity_inst;

    void ctor_7(::g::Fuse::Visual* navBar1);
    void InitializeUX();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static NavBarTitle* New4(::g::Fuse::Visual* navBar1);
};
// }

} // ::g
