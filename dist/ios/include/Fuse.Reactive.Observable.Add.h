// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observable.Operation.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Add;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.Add :442
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__Add_typeof();
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value);
void Observable__Add__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, Observable__Add** __retval);
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub);

struct Observable__Add : ::g::Fuse::Reactive::Observable__Operation
{
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value);
    static Observable__Add* New1(::g::Fuse::Reactive::Observable* obs, uObject* value);
};
// }

}}} // ::g::Fuse::Reactive
