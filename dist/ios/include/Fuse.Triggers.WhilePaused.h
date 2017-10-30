// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/WhilePlaying.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhilePaused;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhilePaused :51
// {
::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof();
void WhilePaused__IsPaused_fn(::g::Fuse::Visual* n, bool* __retval);
void WhilePaused__OnRooted_fn(WhilePaused* __this);
void WhilePaused__SetState_fn(::g::Fuse::Visual* n, bool* paused);

struct WhilePaused : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whilePausedProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whilePausedProp() { return _whilePausedProp_; }

    static bool IsPaused(::g::Fuse::Visual* n);
    static void SetState(::g::Fuse::Visual* n, bool paused);
};
// }

}}} // ::g::Fuse::Triggers
