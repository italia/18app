// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.VarArgFunction.Subscription.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct SimpleVarArgFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct SimpleVarArgFunction__SimpleSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class SimpleVarArgFunction.SimpleSubscription :174
// {
::g::Fuse::Reactive::VarArgFunction__Subscription_type* SimpleVarArgFunction__SimpleSubscription_typeof();
void SimpleVarArgFunction__SimpleSubscription__ctor_2_fn(SimpleVarArgFunction__SimpleSubscription* __this, ::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener);
void SimpleVarArgFunction__SimpleSubscription__Dispose_fn(SimpleVarArgFunction__SimpleSubscription* __this);
void SimpleVarArgFunction__SimpleSubscription__New1_fn(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener, SimpleVarArgFunction__SimpleSubscription** __retval);
void SimpleVarArgFunction__SimpleSubscription__OnNewArguments_fn(SimpleVarArgFunction__SimpleSubscription* __this, uArray* args);
void SimpleVarArgFunction__SimpleSubscription__OnNewPartialArguments_fn(SimpleVarArgFunction__SimpleSubscription* __this, uArray* args);

struct SimpleVarArgFunction__SimpleSubscription : ::g::Fuse::Reactive::VarArgFunction__Subscription
{
    uStrong< ::g::Fuse::Reactive::SimpleVarArgFunction*> _func1;
    uStrong<uObject*> _listener;

    void ctor_2(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener);
    static SimpleVarArgFunction__SimpleSubscription* New1(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
