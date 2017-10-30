// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observable.Operation.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Failed;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.Failed :359
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__Failed_typeof();
void Observable__Failed__ctor_1_fn(Observable__Failed* __this, ::g::Fuse::Reactive::Observable* obs, uString* message);
void Observable__Failed__New1_fn(::g::Fuse::Reactive::Observable* obs, uString* message, Observable__Failed** __retval);
void Observable__Failed__OnPerform_fn(Observable__Failed* __this, uObject* sub);

struct Observable__Failed : ::g::Fuse::Reactive::Observable__Operation
{
    uStrong<uString*> _message;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, uString* message);
    static Observable__Failed* New1(::g::Fuse::Reactive::Observable* obs, uString* message);
};
// }

}}} // ::g::Fuse::Reactive
