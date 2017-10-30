// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/BinaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct BinaryOperator;}}}
namespace g{namespace Fuse{namespace Reactive{struct BinaryOperator__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class BinaryOperator.Subscription :40
// {
::g::Fuse::Reactive::InnerListener_type* BinaryOperator__Subscription_typeof();
void BinaryOperator__Subscription__ctor_1_fn(BinaryOperator__Subscription* __this, ::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener);
void BinaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener, BinaryOperator__Subscription** __retval);
void BinaryOperator__Subscription__Dispose_fn(BinaryOperator__Subscription* __this);
void BinaryOperator__Subscription__Init_fn(BinaryOperator__Subscription* __this, uObject* context);
void BinaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener, BinaryOperator__Subscription** __retval);
void BinaryOperator__Subscription__OnNewData_fn(BinaryOperator__Subscription* __this, uObject* source, uObject* value);
void BinaryOperator__Subscription__OnNewOperands_fn(BinaryOperator__Subscription* __this, uObject* left, uObject* right);

struct BinaryOperator__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong< ::g::Fuse::Reactive::BinaryOperator*> _bo;
    bool _hasLeft;
    bool _hasRight;
    uStrong<uObject*> _left;
    uStrong<uObject*> _leftSub;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _right;
    uStrong<uObject*> _rightSub;

    void ctor_1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener);
    void Init(uObject* context);
    void OnNewOperands(uObject* left, uObject* right);
    static BinaryOperator__Subscription* Create(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener);
    static BinaryOperator__Subscription* New1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
