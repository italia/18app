// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observable.Operation.h>
namespace g{namespace Fuse{namespace Reactive{struct ArrayMirror;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__NewAll;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.NewAll :411
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAll_typeof();
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int* origin);
void Observable__NewAll__New1_fn(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int* origin, Observable__NewAll** __retval);
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub);
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this);

struct Observable__NewAll : ::g::Fuse::Reactive::Observable__Operation
{
    uStrong< ::g::Fuse::Reactive::ArrayMirror*> _newValues;
    int _origin;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int origin);
    static Observable__NewAll* New1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int origin);
};
// }

}}} // ::g::Fuse::Reactive
