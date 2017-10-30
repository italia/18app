// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/FindRouter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct FindRouter;}}}
namespace g{namespace Fuse{namespace Navigation{struct FindRouter__Subscription;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class FindRouter.Subscription :37
// {
struct FindRouter__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

FindRouter__Subscription_type* FindRouter__Subscription_typeof();
void FindRouter__Subscription__ctor__fn(FindRouter__Subscription* __this, ::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener);
void FindRouter__Subscription__Dispose_fn(FindRouter__Subscription* __this);
void FindRouter__Subscription__New1_fn(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener, FindRouter__Subscription** __retval);

struct FindRouter__Subscription : uObject
{
    uStrong< ::g::Fuse::Navigation::FindRouter*> _expr;
    uStrong<uObject*> _listener;

    void ctor_(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener);
    void Dispose();
    static FindRouter__Subscription* New1(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener);
};
// }

}}} // ::g::Fuse::Navigation
