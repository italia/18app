// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/.uno/ux13/Fuse.Controls.PageIndicatorDot.g.uno.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct PageIndicatorDot;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PageIndicatorDot :4
// {
::g::Fuse::Controls::Panel_type* PageIndicatorDot_typeof();
void PageIndicatorDot__ctor_7_fn(PageIndicatorDot* __this);
void PageIndicatorDot__InitializeUX_fn(PageIndicatorDot* __this);
void PageIndicatorDot__New4_fn(PageIndicatorDot** __retval);

struct PageIndicatorDot : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return PageIndicatorDot_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return PageIndicatorDot_typeof()->Init(), __selector1_; }
    uStrong< ::g::Fuse::Controls::Circle*> TheCircle;
    uStrong< ::g::Uno::UX::Property1*> TheCircle_Color_inst;

    void ctor_7();
    void InitializeUX();
    static PageIndicatorDot* New4();
};
// }

}}} // ::g::Fuse::Controls
