// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NavBar.g.uno.
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
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct NavBar;}

namespace g{

// public partial sealed class NavBar :2
// {
::g::Fuse::Controls::Panel_type* NavBar_typeof();
void NavBar__ctor_7_fn(NavBar* __this, ::g::Fuse::Navigation::Router* router1);
void NavBar__InitializeUX_fn(NavBar* __this);
void NavBar__New4_fn(::g::Fuse::Navigation::Router* router1, NavBar** __retval);

struct NavBar : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NavBar_typeof()->Init(), __selector0_; }
    uStrong< ::g::Fuse::UserEvent*> openSideBar;
    uStrong< ::g::Fuse::Navigation::Router*> router;

    void ctor_7(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static NavBar* New4(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
