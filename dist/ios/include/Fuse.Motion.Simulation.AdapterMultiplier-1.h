// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/AngularAdapter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct AdapterMultiplier;}}}}

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal sealed class AdapterMultiplier<T> :92
// {
struct AdapterMultiplier_type : uType
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation interface0;
    ::g::Fuse::Motion::Simulation::MotionSimulation interface1;
    ::g::Fuse::Motion::Simulation::Simulation interface2;
};

AdapterMultiplier_type* AdapterMultiplier_typeof();
void AdapterMultiplier__ctor__fn(AdapterMultiplier* __this, uObject* impl, double* multiplier);
void AdapterMultiplier__get_Destination_fn(AdapterMultiplier* __this, uTRef __retval);
void AdapterMultiplier__set_Destination_fn(AdapterMultiplier* __this, void* value);
void AdapterMultiplier__In_fn(AdapterMultiplier* __this, void* val, uTRef __retval);
void AdapterMultiplier__get_IsStatic_fn(AdapterMultiplier* __this, bool* __retval);
void AdapterMultiplier__New1_fn(uType* __type, uObject* impl, double* multiplier, AdapterMultiplier** __retval);
void AdapterMultiplier__Out_fn(AdapterMultiplier* __this, void* val, uTRef __retval);
void AdapterMultiplier__get_Position_fn(AdapterMultiplier* __this, uTRef __retval);
void AdapterMultiplier__set_Position_fn(AdapterMultiplier* __this, void* value);
void AdapterMultiplier__Reset_fn(AdapterMultiplier* __this, void* value);
void AdapterMultiplier__Start_fn(AdapterMultiplier* __this);
void AdapterMultiplier__Update_fn(AdapterMultiplier* __this, double* elapsed);
void AdapterMultiplier__get_Velocity_fn(AdapterMultiplier* __this, uTRef __retval);
void AdapterMultiplier__set_Velocity_fn(AdapterMultiplier* __this, void* value);

struct AdapterMultiplier : uObject
{
    uStrong< ::g::Fuse::Internal::ScalarBlender*> _blender;
    uStrong<uObject*> _impl;
    double _multiplier;

    void ctor_(uObject* impl, double multiplier);
    template<class T>
    T Destination() { T __retval; return AdapterMultiplier__get_Destination_fn(this, &__retval), __retval; }
    template<class T>
    void Destination(T value) { AdapterMultiplier__set_Destination_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T In(T val) { T __retval; return AdapterMultiplier__In_fn(this, uConstrain(__type->T(0), val), &__retval), __retval; }
    bool IsStatic();
    template<class T>
    T Out(T val) { T __retval; return AdapterMultiplier__Out_fn(this, uConstrain(__type->T(0), val), &__retval), __retval; }
    template<class T>
    T Position() { T __retval; return AdapterMultiplier__get_Position_fn(this, &__retval), __retval; }
    template<class T>
    void Position(T value) { AdapterMultiplier__set_Position_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    void Reset(T value) { AdapterMultiplier__Reset_fn(this, uConstrain(__type->T(0), value)); }
    void Start();
    void Update(double elapsed);
    template<class T>
    T Velocity() { T __retval; return AdapterMultiplier__get_Velocity_fn(this, &__retval), __retval; }
    template<class T>
    void Velocity(T value) { AdapterMultiplier__set_Velocity_fn(this, uConstrain(__type->T(0), value)); }
    static AdapterMultiplier* New1(uType* __type, uObject* impl, double multiplier);
};
// }

}}}} // ::g::Fuse::Motion::Simulation
