// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/.uno/ux13/Fuse.Controls.NavigationInternal.NavRemoveHorizontal.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.IBeginRemoveVisualListener.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct NavRemoveHorizontal;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class NavRemoveHorizontal :4
// {
::g::Fuse::Triggers::RemovingAnimation_type* NavRemoveHorizontal_typeof();
void NavRemoveHorizontal__ctor_6_fn(NavRemoveHorizontal* __this);
void NavRemoveHorizontal__InitializeUX_fn(NavRemoveHorizontal* __this);
void NavRemoveHorizontal__New3_fn(NavRemoveHorizontal** __retval);

struct NavRemoveHorizontal : ::g::Fuse::Triggers::RemovingAnimation
{
    void ctor_6();
    void InitializeUX();
    static NavRemoveHorizontal* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
