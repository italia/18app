// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/InstantiatorFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator;}}}
namespace g{namespace Fuse{namespace Reactive{struct InstantiatorFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct InstantiatorFunction__InstantiatorSubscription;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class InstantiatorFunction.InstantiatorSubscription :42
// {
::g::Fuse::Reactive::InnerListener_type* InstantiatorFunction__InstantiatorSubscription_typeof();
void InstantiatorFunction__InstantiatorSubscription__ctor_1_fn(InstantiatorFunction__InstantiatorSubscription* __this, ::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node);
void InstantiatorFunction__InstantiatorSubscription__Dispose_fn(InstantiatorFunction__InstantiatorSubscription* __this);
void InstantiatorFunction__InstantiatorSubscription__New1_fn(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node, InstantiatorFunction__InstantiatorSubscription** __retval);
void InstantiatorFunction__InstantiatorSubscription__OnNewData_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* source, uObject* value);
void InstantiatorFunction__InstantiatorSubscription__OnNewNode_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* obj);
void InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn(InstantiatorFunction__InstantiatorSubscription* __this);
void InstantiatorFunction__InstantiatorSubscription__PushValue_fn(InstantiatorFunction__InstantiatorSubscription* __this);

struct InstantiatorFunction__InstantiatorSubscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong<uObject*> _context;
    uStrong< ::g::Fuse::Reactive::InstantiatorFunction*> _expr;
    uStrong< ::g::Fuse::Node*> _instance;
    uStrong< ::g::Fuse::Reactive::Instantiator*> _instantiator;
    ::g::Uno::UX::Selector _item;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _node;
    uStrong<uObject*> _nodeSub;

    void ctor_1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node);
    void OnNewNode(uObject* obj);
    void OnUpdatedWindowItems();
    void PushValue();
    static InstantiatorFunction__InstantiatorSubscription* New1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node);
};
// }

}}} // ::g::Fuse::Reactive
