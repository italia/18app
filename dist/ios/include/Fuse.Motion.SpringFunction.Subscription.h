// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/SpringFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct ElasticForce;}}}}
namespace g{namespace Fuse{namespace Motion{struct SpringFunction;}}}
namespace g{namespace Fuse{namespace Motion{struct SpringFunction__Subscription;}}}

namespace g{
namespace Fuse{
namespace Motion{

// private sealed class SpringFunction.Subscription :24
// {
struct SpringFunction__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Reactive::IListener interface1;
};

SpringFunction__Subscription_type* SpringFunction__Subscription_typeof();
void SpringFunction__Subscription__ctor__fn(SpringFunction__Subscription* __this, ::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener);
void SpringFunction__Subscription__Dispose_fn(SpringFunction__Subscription* __this);
void SpringFunction__Subscription__New1_fn(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener, SpringFunction__Subscription** __retval);
void SpringFunction__Subscription__OnNewData_fn(SpringFunction__Subscription* __this, uObject* source, uObject* value);
void SpringFunction__Subscription__Simulate_fn(SpringFunction__Subscription* __this);
void SpringFunction__Subscription__StartSimulation_fn(SpringFunction__Subscription* __this);
void SpringFunction__Subscription__StopSimulation_fn(SpringFunction__Subscription* __this);

struct SpringFunction__Subscription : uObject
{
    bool _hasStartValue;
    bool _isSimulating;
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Motion::SpringFunction*> _sf;
    uStrong< ::g::Fuse::Motion::Simulation::ElasticForce*> _sim;
    uStrong<uObject*> _valueSub;

    void ctor_(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener);
    void Dispose();
    void OnNewData(uObject* source, uObject* value);
    void Simulate();
    void StartSimulation();
    void StopSimulation();
    static SpringFunction__Subscription* New1(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Motion
