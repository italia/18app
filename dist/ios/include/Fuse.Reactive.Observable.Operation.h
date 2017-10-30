// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Operation;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class Observable.Operation :259
// {
struct Observable__Operation_type : uType
{
    void(*fp_OnPerform)(::g::Fuse::Reactive::Observable__Operation*, uObject*);
    void(*fp_Unsubscribe)(::g::Fuse::Reactive::Observable__Operation*);
};

Observable__Operation_type* Observable__Operation_typeof();
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable* observable);
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable** __retval);
void Observable__Operation__Perform_fn(Observable__Operation* __this);
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this);

struct Observable__Operation : uObject
{
    bool _isPerformed;
    uStrong< ::g::Fuse::Reactive::Observable*> _observable;

    void ctor_(::g::Fuse::Reactive::Observable* observable);
    ::g::Fuse::Reactive::Observable* Observable();
    void OnPerform(uObject* sub) { (((Observable__Operation_type*)__type)->fp_OnPerform)(this, sub); }
    void Perform();
    void Unsubscribe() { (((Observable__Operation_type*)__type)->fp_Unsubscribe)(this); }
    static void Unsubscribe(Observable__Operation* __this) { Observable__Operation__Unsubscribe_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
