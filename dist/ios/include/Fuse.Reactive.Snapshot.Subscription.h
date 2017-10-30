// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Snapshot.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Snapshot;}}}
namespace g{namespace Fuse{namespace Reactive{struct Snapshot__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Snapshot.Subscription :23
// {
struct Snapshot__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Reactive::IListener interface1;
};

Snapshot__Subscription_type* Snapshot__Subscription_typeof();
void Snapshot__Subscription__ctor__fn(Snapshot__Subscription* __this, ::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener);
void Snapshot__Subscription__Dispose_fn(Snapshot__Subscription* __this);
void Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn(Snapshot__Subscription* __this, uObject* source, uObject* value);
void Snapshot__Subscription__New1_fn(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener, Snapshot__Subscription** __retval);

struct Snapshot__Subscription : uObject
{
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Reactive::Snapshot*> _snap;
    uStrong<uObject*> _sub;

    void ctor_(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener);
    void Dispose();
    static Snapshot__Subscription* New1(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
