// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.DiagnosticSubject.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Observable.Subscription :51
// {
struct Observable__Subscription_type : uType
{
    ::g::Fuse::Reactive::ISubscription interface0;
    ::g::Uno::IDisposable interface1;
};

Observable__Subscription_type* Observable__Subscription_typeof();
void Observable__Subscription__ctor_1_fn(Observable__Subscription* __this, ::g::Fuse::Reactive::Observable* om, uObject* obs);
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this);
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this);
void Observable__Subscription__New2_fn(::g::Fuse::Reactive::Observable* om, uObject* obs, Observable__Subscription** __retval);
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval);
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval);
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value);
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uObject* newValues);
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue);
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int* origin, bool* __retval);

struct Observable__Subscription : ::g::Fuse::Reactive::DiagnosticSubject
{
    static int _counter_;
    static int& _counter() { return _counter_; }
    uStrong<uObject*> _obs;
    uStrong< ::g::Fuse::Reactive::Observable*> _om;
    int _origin;
    bool _Removed;

    void ctor_1(::g::Fuse::Reactive::Observable* om, uObject* obs);
    void ClearExclusive();
    void Dispose();
    uObject* Observer();
    bool Removed();
    void Removed(bool value);
    void ReplaceAllExclusive(uObject* newValues);
    void SetExclusive(uObject* newValue);
    bool ShouldSend(int origin);
    static Observable__Subscription* New2(::g::Fuse::Reactive::Observable* om, uObject* obs);
};
// }

}}} // ::g::Fuse::Reactive
