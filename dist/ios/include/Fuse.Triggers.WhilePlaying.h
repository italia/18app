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
namespace g{namespace Fuse{namespace Triggers{struct WhilePlaying;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhilePlaying :15
// {
::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof();
void WhilePlaying__IsPlaying_fn(::g::Fuse::Visual* n, bool* __retval);
void WhilePlaying__OnRooted_fn(WhilePlaying* __this);
void WhilePlaying__SetState_fn(::g::Fuse::Visual* n, bool* playing);

struct WhilePlaying : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whilePlayingProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whilePlayingProp() { return _whilePlayingProp_; }

    static bool IsPlaying(::g::Fuse::Visual* n);
    static void SetState(::g::Fuse::Visual* n, bool playing);
};
// }

}}} // ::g::Fuse::Triggers
