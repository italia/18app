// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/.uno/ux13/Fuse.Controls.NavigationInternal.NavExitHorizontal.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Transition.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct NavExitHorizontal;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class NavExitHorizontal :4
// {
::g::Fuse::Triggers::Trigger_type* NavExitHorizontal_typeof();
void NavExitHorizontal__ctor_6_fn(NavExitHorizontal* __this);
void NavExitHorizontal__InitializeUX_fn(NavExitHorizontal* __this);
void NavExitHorizontal__New3_fn(NavExitHorizontal** __retval);

struct NavExitHorizontal : ::g::Fuse::Triggers::Transition
{
    void ctor_6();
    void InitializeUX();
    static NavExitHorizontal* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
