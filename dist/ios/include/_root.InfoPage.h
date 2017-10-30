// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/InfoPage.g.uno.
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
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct InfoPage;}

namespace g{

// public partial sealed class InfoPage :2
// {
::g::Fuse::Controls::Panel_type* InfoPage_typeof();
void InfoPage__ctor_9_fn(InfoPage* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
void InfoPage__InitializeUX1_fn(InfoPage* __this);
void InfoPage__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, InfoPage** __retval);

struct InfoPage : ::g::BasePage
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return InfoPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return InfoPage_typeof()->Init(), __selector0_; }
    uStrong< ::g::Fuse::Visual*> navBar;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;

    void ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
    void InitializeUX1();
    static InfoPage* New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1);
};
// }

} // ::g
