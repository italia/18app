// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observable.Operation.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__RemoveRange;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.RemoveRange :485
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveRange_typeof();
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Reactive::Observable* obs, int* index, int* count);
void Observable__RemoveRange__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, int* count, Observable__RemoveRange** __retval);
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub);

struct Observable__RemoveRange : ::g::Fuse::Reactive::Observable__Operation
{
    int _count;
    int _index;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, int index, int count);
    static Observable__RemoveRange* New1(::g::Fuse::Reactive::Observable* obs, int index, int count);
};
// }

}}} // ::g::Fuse::Reactive
