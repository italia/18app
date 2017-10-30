// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/WhileCanGoBack.uno.
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
namespace g{namespace Fuse{namespace Navigation{struct WhileHistoryTrigger;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class WhileHistoryTrigger :11
// {
struct WhileHistoryTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_get_IsOn)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*);
};

WhileHistoryTrigger_type* WhileHistoryTrigger_typeof();
void WhileHistoryTrigger__ctor_6_fn(WhileHistoryTrigger* __this);
void WhileHistoryTrigger__get_NavigationContext_fn(WhileHistoryTrigger* __this, uObject** __retval);
void WhileHistoryTrigger__set_NavigationContext_fn(WhileHistoryTrigger* __this, uObject* value);
void WhileHistoryTrigger__OnHistoryChanged_fn(WhileHistoryTrigger* __this, uObject* sender);
void WhileHistoryTrigger__OnRooted_fn(WhileHistoryTrigger* __this);
void WhileHistoryTrigger__OnUnrooted_fn(WhileHistoryTrigger* __this);

struct WhileHistoryTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong<uObject*> _context;
    uStrong<uObject*> _NavigationContext;

    void ctor_6();
    bool IsOn() { bool __retval; return (((WhileHistoryTrigger_type*)__type)->fp_get_IsOn)(this, &__retval), __retval; }
    uObject* NavigationContext();
    void NavigationContext(uObject* value);
    void OnHistoryChanged(uObject* sender);
};
// }

}}} // ::g::Fuse::Navigation
