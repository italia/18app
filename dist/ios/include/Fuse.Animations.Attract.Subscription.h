// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attract.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Animations{struct Attract;}}}
namespace g{namespace Fuse{namespace Animations{struct Attract__Subscription;}}}
namespace g{namespace Fuse{namespace Animations{struct DestinationBehavior;}}}

namespace g{
namespace Fuse{
namespace Animations{

// private sealed class Attract.Subscription :61
// {
::g::Fuse::Reactive::InnerListener_type* Attract__Subscription_typeof();
void Attract__Subscription__ctor_1_fn(Attract__Subscription* __this, ::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target);
void Attract__Subscription__CleanSimulation_fn(Attract__Subscription* __this);
void Attract__Subscription__Dispose_fn(Attract__Subscription* __this);
void Attract__Subscription__Init_fn(Attract__Subscription* __this, uObject* context);
void Attract__Subscription__NeedSim_fn(Attract__Subscription* __this, int* size);
void Attract__Subscription__New1_fn(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target, Attract__Subscription** __retval);
void Attract__Subscription__OnNewData_fn(Attract__Subscription* __this, uObject* source, uObject* oValue);
void Attract__Subscription__OnValueUpdate_fn(Attract__Subscription* __this, uType* __type, void* value);
void Attract__Subscription__OnValueUpdate1_fn(Attract__Subscription* __this, float* value);
void Attract__Subscription__OnValueUpdate2_fn(Attract__Subscription* __this, ::g::Uno::Float2* value);
void Attract__Subscription__OnValueUpdate3_fn(Attract__Subscription* __this, ::g::Uno::Float3* value);
void Attract__Subscription__OnValueUpdate4_fn(Attract__Subscription* __this, ::g::Uno::Float4* value);

struct Attract__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong< ::g::Fuse::Animations::Attract*> _attract;
    int _simSize;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _simulation1;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _simulation2;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _simulation3;
    uStrong< ::g::Fuse::Animations::DestinationBehavior*> _simulation4;
    uStrong<uObject*> _sourceSub;
    uStrong<uObject*> _target;

    void ctor_1(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target);
    void CleanSimulation();
    void Init(uObject* context);
    void NeedSim(int size);
    template<class T>
    void OnValueUpdate(uType* __type, T value) { Attract__Subscription__OnValueUpdate_fn(this, __type, uConstrain(__type->U(0), value)); }
    void OnValueUpdate1(float value);
    void OnValueUpdate2(::g::Uno::Float2 value);
    void OnValueUpdate3(::g::Uno::Float3 value);
    void OnValueUpdate4(::g::Uno::Float4 value);
    static Attract__Subscription* New1(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target);
};
// }

}}} // ::g::Fuse::Animations
