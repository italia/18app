// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/EventBinding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ExpressionBinding.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IListener.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventRecord;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class EventBinding :26
// {
::g::Fuse::Reactive::ExpressionBinding_type* EventBinding_typeof();
void EventBinding__ctor_2_fn(EventBinding* __this, uObject* key);
void EventBinding__New1_fn(uObject* key, EventBinding** __retval);
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj);
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args);
void EventBinding__OnUnrooted_fn(EventBinding* __this);
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this);

struct EventBinding : ::g::Fuse::Reactive::ExpressionBinding
{
    uStrong<uObject*> _eventHandler;
    uStrong< ::g::Uno::Collections::List*> _queuedEvents;

    void ctor_2(uObject* key);
    void OnEvent(uObject* sender, ::g::Uno::EventArgs* args);
    void ProcessQueuedEvents();
    static EventBinding* New1(uObject* key);
};
// }

}}} // ::g::Fuse::Reactive
