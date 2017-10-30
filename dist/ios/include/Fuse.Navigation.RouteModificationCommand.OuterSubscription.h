// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Navigation{struct RouteModificationCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouteModificationCommand__InnerSubscription;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouteModificationCommand__OuterSubscription;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class RouteModificationCommand.OuterSubscription :17
// {
struct RouteModificationCommand__OuterSubscription_type : ::g::Fuse::Reactive::InnerListener_type
{
    ::g::Fuse::Reactive::IEventHandler interface2;
};

RouteModificationCommand__OuterSubscription_type* RouteModificationCommand__OuterSubscription_typeof();
void RouteModificationCommand__OuterSubscription__ctor_1_fn(RouteModificationCommand__OuterSubscription* __this, ::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener);
void RouteModificationCommand__OuterSubscription__Dispose_fn(RouteModificationCommand__OuterSubscription* __this);
void RouteModificationCommand__OuterSubscription__DisposeInner_fn(RouteModificationCommand__OuterSubscription* __this, bool* fromInner);
void RouteModificationCommand__OuterSubscription__FuseReactiveIEventHandlerDispatch_fn(RouteModificationCommand__OuterSubscription* __this, uObject* e);
void RouteModificationCommand__OuterSubscription__New1_fn(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener, RouteModificationCommand__OuterSubscription** __retval);
void RouteModificationCommand__OuterSubscription__OnNewData_fn(RouteModificationCommand__OuterSubscription* __this, uObject* expr, uObject* value);

struct RouteModificationCommand__OuterSubscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong<uObject*> _context;
    uStrong< ::g::Fuse::Navigation::RouteModificationCommand*> _expr;
    uStrong< ::g::Fuse::Navigation::RouteModificationCommand__InnerSubscription*> _innerSub;
    uStrong<uObject*> _listener;

    void ctor_1(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener);
    void DisposeInner(bool fromInner);
    static RouteModificationCommand__OuterSubscription* New1(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Navigation
