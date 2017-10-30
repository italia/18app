// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/BottomBar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
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
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{struct BottomBar;}

namespace g{

// public partial sealed class BottomBar :2
// {
::g::Fuse::Controls::Panel_type* BottomBar_typeof();
void BottomBar__ctor_8_fn(BottomBar* __this);
void BottomBar__InitializeUX_fn(BottomBar* __this);
void BottomBar__New5_fn(BottomBar** __retval);

struct BottomBar : ::g::Fuse::Controls::Grid
{
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;

    void ctor_8();
    void InitializeUX();
    static BottomBar* New5();
};
// }

} // ::g
