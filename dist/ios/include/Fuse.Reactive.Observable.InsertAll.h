// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observable.Operation.h>
namespace g{namespace Fuse{namespace Reactive{struct ArrayMirror;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__InsertAll;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.InsertAll :541
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAll_typeof();
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Reactive::Observable* obs, int* index, ::g::Fuse::Reactive::ArrayMirror* items);
void Observable__InsertAll__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, ::g::Fuse::Reactive::ArrayMirror* items, Observable__InsertAll** __retval);
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub);
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this);

struct Observable__InsertAll : ::g::Fuse::Reactive::Observable__Operation
{
    int _index;
    uStrong< ::g::Fuse::Reactive::ArrayMirror*> _items;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, int index, ::g::Fuse::Reactive::ArrayMirror* items);
    static Observable__InsertAll* New1(::g::Fuse::Reactive::Observable* obs, int index, ::g::Fuse::Reactive::ArrayMirror* items);
};
// }

}}} // ::g::Fuse::Reactive
