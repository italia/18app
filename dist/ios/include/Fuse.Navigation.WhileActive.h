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
namespace g{namespace Fuse{namespace Navigation{struct WhileActive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileActive :137
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();
void WhileActive__ctor_7_fn(WhileActive* __this);
void WhileActive__MapProgress_fn(WhileActive* __this, double* progress, double* __retval);
void WhileActive__New2_fn(WhileActive** __retval);

struct WhileActive : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_7();
    static WhileActive* New2();
};
// }

}}} // ::g::Fuse::Navigation
