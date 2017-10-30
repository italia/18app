// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.VarArgFunction.Subscription.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Navigation{struct RouteModificationCommand__InnerSubscription;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouteModificationCommand__OuterSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class RouteModificationCommand.InnerSubscription :68
// {
::g::Fuse::Reactive::VarArgFunction__Subscription_type* RouteModificationCommand__InnerSubscription_typeof();
void RouteModificationCommand__InnerSubscription__ctor_2_fn(RouteModificationCommand__InnerSubscription* __this, ::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub);
void RouteModificationCommand__InnerSubscription__Dispose_fn(RouteModificationCommand__InnerSubscription* __this);
void RouteModificationCommand__InnerSubscription__HandleRequest_fn(RouteModificationCommand__InnerSubscription* __this, uArray* args);
void RouteModificationCommand__InnerSubscription__New1_fn(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub, RouteModificationCommand__InnerSubscription** __retval);
void RouteModificationCommand__InnerSubscription__OnNewArguments_fn(RouteModificationCommand__InnerSubscription* __this, uArray* args);

struct RouteModificationCommand__InnerSubscription : ::g::Fuse::Reactive::VarArgFunction__Subscription
{
    uStrong< ::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription*> _outSub;
    bool _triggered;

    void ctor_2(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub);
    void HandleRequest(uArray* args);
    static RouteModificationCommand__InnerSubscription* New1(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub);
};
// }

}}} // ::g::Fuse::Navigation
