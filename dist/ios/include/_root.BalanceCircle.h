// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/BalanceCircle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
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
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct BalanceCircle;}

namespace g{

// public partial sealed class BalanceCircle :2
// {
::g::Fuse::Controls::Panel_type* BalanceCircle_typeof();
void BalanceCircle__ctor_8_fn(BalanceCircle* __this);
void BalanceCircle__InitializeUX_fn(BalanceCircle* __this);
void BalanceCircle__New5_fn(BalanceCircle** __retval);

struct BalanceCircle : ::g::Fuse::Controls::StackPanel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BalanceCircle_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return BalanceCircle_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return BalanceCircle_typeof()->Init(), __selector2_; }
    uStrong< ::g::Fuse::Controls::Circle*> CurrentBalance;
    uStrong< ::g::Uno::UX::Property1*> CurrentBalance_EndAngleDegrees_inst;
    uStrong< ::g::Fuse::Controls::Circle*> TotalBalance;

    void ctor_8();
    void InitializeUX();
    static BalanceCircle* New5();
};
// }

} // ::g
