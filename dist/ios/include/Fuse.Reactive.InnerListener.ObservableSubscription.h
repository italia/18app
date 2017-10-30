// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Subscription.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct InnerListener;}}}
namespace g{namespace Fuse{namespace Reactive{struct InnerListener__ObservableSubscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class InnerListener.ObservableSubscription :70
// {
::g::Fuse::Reactive::ValueObserver_type* InnerListener__ObservableSubscription_typeof();
void InnerListener__ObservableSubscription__ctor_1_fn(InnerListener__ObservableSubscription* __this, uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener);
void InnerListener__ObservableSubscription__Dispose_fn(InnerListener__ObservableSubscription* __this);
void InnerListener__ObservableSubscription__New1_fn(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener, InnerListener__ObservableSubscription** __retval);
void InnerListener__ObservableSubscription__PushData_fn(InnerListener__ObservableSubscription* __this, uObject* newValue);

struct InnerListener__ObservableSubscription : ::g::Fuse::Reactive::ValueObserver
{
    uStrong< ::g::Fuse::Reactive::InnerListener*> _listener;
    uStrong<uObject*> _source;

    void ctor_1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener);
    static InnerListener__ObservableSubscription* New1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener);
};
// }

}}} // ::g::Fuse::Reactive
