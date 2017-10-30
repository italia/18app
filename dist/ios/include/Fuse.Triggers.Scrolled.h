// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Triggers/Scrolled.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.ScrolledArgs.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct Scrolled;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollRegion;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Scrolled :8
// {
::g::Fuse::Triggers::Trigger_type* Scrolled_typeof();
void Scrolled__check_fn(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args);
void Scrolled__Check_fn(Scrolled* __this);
void Scrolled__OnRooted_fn(Scrolled* __this);
void Scrolled__OnScrollPositionChanged_fn(Scrolled* __this, uObject* s, uObject* args);
void Scrolled__OnUnrooted_fn(Scrolled* __this);

struct Scrolled : ::g::Fuse::Triggers::PulseTrigger
{
    bool _inZone;
    uStrong< ::g::Fuse::Triggers::ScrollRegion*> _region;
    uStrong< ::g::Fuse::Controls::ScrollViewBase*> _scrollable;

    void Check();
    void OnScrollPositionChanged(uObject* s, uObject* args);
    static void check(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args);
};
// }

}}} // ::g::Fuse::Triggers
