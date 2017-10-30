// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/QuaternaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct QuaternaryOperator;}}}
namespace g{namespace Fuse{namespace Reactive{struct QuaternaryOperator__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class QuaternaryOperator.Subscription :35
// {
::g::Fuse::Reactive::InnerListener_type* QuaternaryOperator__Subscription_typeof();
void QuaternaryOperator__Subscription__ctor_1_fn(QuaternaryOperator__Subscription* __this, ::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener);
void QuaternaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener, QuaternaryOperator__Subscription** __retval);
void QuaternaryOperator__Subscription__Dispose_fn(QuaternaryOperator__Subscription* __this);
void QuaternaryOperator__Subscription__Init_fn(QuaternaryOperator__Subscription* __this, uObject* context);
void QuaternaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener, QuaternaryOperator__Subscription** __retval);
void QuaternaryOperator__Subscription__OnNewData_fn(QuaternaryOperator__Subscription* __this, uObject* source, uObject* value);
void QuaternaryOperator__Subscription__OnNewOperands_fn(QuaternaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third, uObject* fourth);

struct QuaternaryOperator__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong<uObject*> _first;
    uStrong<uObject*> _firstSub;
    uStrong<uObject*> _fourth;
    uStrong<uObject*> _fourthSub;
    bool _hasFirst;
    bool _hasFourth;
    bool _hasSecond;
    bool _hasThird;
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Reactive::QuaternaryOperator*> _qo;
    uStrong<uObject*> _second;
    uStrong<uObject*> _secondSub;
    uStrong<uObject*> _third;
    uStrong<uObject*> _thirdSub;

    void ctor_1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener);
    void Init(uObject* context);
    void OnNewOperands(uObject* first, uObject* second, uObject* third, uObject* fourth);
    static QuaternaryOperator__Subscription* Create(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener);
    static QuaternaryOperator__Subscription* New1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
