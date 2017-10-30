// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observable.Operation.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Set;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.Set :306
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__Set_typeof();
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin);
void Observable__Set__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin, Observable__Set** __retval);
void Observable__Set__OnPerform_fn(Observable__Set* __this, uObject* sub);
void Observable__Set__Unsubscribe_fn(Observable__Set* __this);

struct Observable__Set : ::g::Fuse::Reactive::Observable__Operation
{
    int _origin;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin);
    static Observable__Set* New1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin);
};
// }

}}} // ::g::Fuse::Reactive
