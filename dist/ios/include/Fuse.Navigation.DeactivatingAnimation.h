// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/NavigationAnimations.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct DeactivatingAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class DeactivatingAnimation :301
// {
::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof();
void DeactivatingAnimation__ForceUpdate_fn(DeactivatingAnimation* __this);
void DeactivatingAnimation__OnNavigationStateChanged_fn(DeactivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct DeactivatingAnimation : ::g::Fuse::Navigation::NavigationAnimation
{
};
// }

}}} // ::g::Fuse::Navigation
