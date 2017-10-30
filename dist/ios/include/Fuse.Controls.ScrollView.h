// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/ScrollView.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.ScrollViewBase.h>
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
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class ScrollView :58
// {
::g::Fuse::Controls::ScrollViewBase_type* ScrollView_typeof();
void ScrollView__ctor_7_fn(ScrollView* __this);
void ScrollView__InitializeUX_fn(ScrollView* __this);
void ScrollView__New4_fn(ScrollView** __retval);
void ScrollView__OnRooted_fn(ScrollView* __this);
void ScrollView__OnUnrooted_fn(ScrollView* __this);

struct ScrollView : ::g::Fuse::Controls::ScrollViewBase
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ScrollView_typeof()->Init(), __selector0_; }

    void ctor_7();
    void InitializeUX();
    static ScrollView* New4();
};
// }

}}} // ::g::Fuse::Controls
