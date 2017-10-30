// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Backgrounds/TopFrameBackground.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
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
namespace g{namespace Fuse{namespace Controls{struct TopFrameBackground;}}}
namespace g{namespace Fuse{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class TopFrameBackground :28
// {
::g::Fuse::Controls::Control_type* TopFrameBackground_typeof();
void TopFrameBackground__ctor_5_fn(TopFrameBackground* __this);
void TopFrameBackground__GetContentSize_fn(TopFrameBackground* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TopFrameBackground__OnFrameResized_fn(TopFrameBackground* __this, uObject* sender, ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
void TopFrameBackground__OnRooted_fn(TopFrameBackground* __this);
void TopFrameBackground__OnUnrooted_fn(TopFrameBackground* __this);

struct TopFrameBackground : ::g::Fuse::Controls::Control
{
    void ctor_5();
    void OnFrameResized(uObject* sender, ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
};
// }

}}} // ::g::Fuse::Controls
