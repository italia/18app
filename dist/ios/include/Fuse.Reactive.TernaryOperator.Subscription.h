// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/TernaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct TernaryOperator;}}}
namespace g{namespace Fuse{namespace Reactive{struct TernaryOperator__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class TernaryOperator.Subscription :32
// {
::g::Fuse::Reactive::InnerListener_type* TernaryOperator__Subscription_typeof();
void TernaryOperator__Subscription__ctor_1_fn(TernaryOperator__Subscription* __this, ::g::Fuse::Reactive::TernaryOperator* to, uObject* listener);
void TernaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener, TernaryOperator__Subscription** __retval);
void TernaryOperator__Subscription__Dispose_fn(TernaryOperator__Subscription* __this);
void TernaryOperator__Subscription__Init_fn(TernaryOperator__Subscription* __this, uObject* context);
void TernaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener, TernaryOperator__Subscription** __retval);
void TernaryOperator__Subscription__OnNewData_fn(TernaryOperator__Subscription* __this, uObject* source, uObject* value);
void TernaryOperator__Subscription__OnNewOperands_fn(TernaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third);

struct TernaryOperator__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong<uObject*> _first;
    uStrong<uObject*> _firstSub;
    bool _hasFirst;
    bool _hasSecond;
    bool _hasThird;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _second;
    uStrong<uObject*> _secondSub;
    uStrong<uObject*> _third;
    uStrong<uObject*> _thirdSub;
    uStrong< ::g::Fuse::Reactive::TernaryOperator*> _to;

    void ctor_1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener);
    void Init(uObject* context);
    void OnNewOperands(uObject* first, uObject* second, uObject* third);
    static TernaryOperator__Subscription* Create(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener);
    static TernaryOperator__Subscription* New1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
