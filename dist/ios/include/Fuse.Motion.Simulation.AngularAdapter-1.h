// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/AngularAdapter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct AngularAdapter;}}}}

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal sealed class AngularAdapter<T> :8
// {
struct AngularAdapter_type : uType
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation interface0;
    ::g::Fuse::Motion::Simulation::MotionSimulation interface1;
    ::g::Fuse::Motion::Simulation::Simulation interface2;
};

AngularAdapter_type* AngularAdapter_typeof();
void AngularAdapter__ctor__fn(AngularAdapter* __this, uObject* impl);
void AngularAdapter__get_Destination_fn(AngularAdapter* __this, uTRef __retval);
void AngularAdapter__set_Destination_fn(AngularAdapter* __this, void* value);
void AngularAdapter__get_IsStatic_fn(AngularAdapter* __this, bool* __retval);
void AngularAdapter__New1_fn(uType* __type, uObject* impl, AngularAdapter** __retval);
void AngularAdapter__get_Position_fn(AngularAdapter* __this, uTRef __retval);
void AngularAdapter__set_Position_fn(AngularAdapter* __this, void* value);
void AngularAdapter__Reset_fn(AngularAdapter* __this, void* value);
void AngularAdapter__Start_fn(AngularAdapter* __this);
void AngularAdapter__Update_fn(AngularAdapter* __this, double* elapsed);
void AngularAdapter__get_Velocity_fn(AngularAdapter* __this, uTRef __retval);
void AngularAdapter__set_Velocity_fn(AngularAdapter* __this, void* value);
void AngularAdapter__Wrap_fn(AngularAdapter* __this);

struct AngularAdapter : uObject
{
    uStrong< ::g::Fuse::Internal::ScalarBlender*> _blender;
    uStrong<uObject*> _impl;

    void ctor_(uObject* impl);
    template<class T>
    T Destination() { T __retval; return AngularAdapter__get_Destination_fn(this, &__retval), __retval; }
    template<class T>
    void Destination(T value) { AngularAdapter__set_Destination_fn(this, uConstrain(__type->T(0), value)); }
    bool IsStatic();
    template<class T>
    T Position() { T __retval; return AngularAdapter__get_Position_fn(this, &__retval), __retval; }
    template<class T>
    void Position(T value) { AngularAdapter__set_Position_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    void Reset(T value) { AngularAdapter__Reset_fn(this, uConstrain(__type->T(0), value)); }
    void Start();
    void Update(double elapsed);
    template<class T>
    T Velocity() { T __retval; return AngularAdapter__get_Velocity_fn(this, &__retval), __retval; }
    template<class T>
    void Velocity(T value) { AngularAdapter__set_Velocity_fn(this, uConstrain(__type->T(0), value)); }
    void Wrap();
    static AngularAdapter* New1(uType* __type, uObject* impl);
};
// }

}}}} // ::g::Fuse::Motion::Simulation
