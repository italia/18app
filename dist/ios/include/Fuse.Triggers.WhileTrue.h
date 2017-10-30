// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/WhileBool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class WhileTrue :85
// {
::g::Fuse::Triggers::WhileBool_type* WhileTrue_typeof();
void WhileTrue__ctor_8_fn(WhileTrue* __this);
void WhileTrue__get_IsOn_fn(WhileTrue* __this, bool* __retval);
void WhileTrue__New2_fn(WhileTrue** __retval);

struct WhileTrue : ::g::Fuse::Triggers::WhileBool
{
    void ctor_8();
    static WhileTrue* New2();
};
// }

}}} // ::g::Fuse::Triggers
