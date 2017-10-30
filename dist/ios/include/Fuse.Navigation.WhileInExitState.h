// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileNavigationTriggers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct WhileInExitState;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInExitState :181
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof();
void WhileInExitState__MapProgress_fn(WhileInExitState* __this, double* progress, double* __retval);

struct WhileInExitState : ::g::Fuse::Navigation::WhileNavigationTrigger
{
};
// }

}}} // ::g::Fuse::Navigation
