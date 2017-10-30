// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/Friction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct Friction;}}}}

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal sealed class Friction<T> :6
// {
struct Friction_type : uType
{
    ::g::Fuse::Motion::Simulation::MotionSimulation interface0;
    ::g::Fuse::Motion::Simulation::Simulation interface1;
};

Friction_type* Friction_typeof();
void Friction__ctor__fn(Friction* __this);
void Friction__CreateNormalized_fn(uType* __type, Friction** __retval);
void Friction__CreatePoints_fn(uType* __type, Friction** __retval);
void Friction__CreateRadians_fn(uType* __type, Friction** __retval);
void Friction__CreateUnit_fn(uType* __type, int* unit, Friction** __retval);
void Friction__get_HighFluidDeceleration_fn(Friction* __this, float* __retval);
void Friction__set_HighFluidDeceleration_fn(Friction* __this, float* value);
void Friction__get_IsStatic_fn(Friction* __this, bool* __retval);
void Friction__get_KineticDeceleration_fn(Friction* __this, float* __retval);
void Friction__set_KineticDeceleration_fn(Friction* __this, float* value);
void Friction__get_LowFluidDeceleration_fn(Friction* __this, float* __retval);
void Friction__set_LowFluidDeceleration_fn(Friction* __this, float* value);
void Friction__New1_fn(uType* __type, Friction** __retval);
void Friction__get_Position_fn(Friction* __this, uTRef __retval);
void Friction__set_Position_fn(Friction* __this, void* value);
void Friction__get_SpeedDropout_fn(Friction* __this, float* __retval);
void Friction__set_SpeedDropout_fn(Friction* __this, float* value);
void Friction__Update_fn(Friction* __this, double* elapsed);
void Friction__get_Velocity_fn(Friction* __this, uTRef __retval);
void Friction__set_Velocity_fn(Friction* __this, void* value);

struct Friction : uObject
{
    uStrong< ::g::Fuse::Internal::Blender*> _blender;
    float _highFluidDeceleration;
    bool _isStatic;
    float _kineticDeceleration;
    float _lowFluidDeceleration;
    uTField _position() { return __type->Field(this, 5); }
    float _speedDropout;
    uTField _velocity() { return __type->Field(this, 7); }

    void ctor_();
    float HighFluidDeceleration();
    void HighFluidDeceleration(float value);
    bool IsStatic();
    float KineticDeceleration();
    void KineticDeceleration(float value);
    float LowFluidDeceleration();
    void LowFluidDeceleration(float value);
    template<class T>
    T Position() { T __retval; return Friction__get_Position_fn(this, &__retval), __retval; }
    template<class T>
    void Position(T value) { Friction__set_Position_fn(this, uConstrain(__type->T(0), value)); }
    float SpeedDropout();
    void SpeedDropout(float value);
    void Update(double elapsed);
    template<class T>
    T Velocity() { T __retval; return Friction__get_Velocity_fn(this, &__retval), __retval; }
    template<class T>
    void Velocity(T value) { Friction__set_Velocity_fn(this, uConstrain(__type->T(0), value)); }
    static Friction* CreateNormalized(uType* __type);
    static Friction* CreatePoints(uType* __type);
    static Friction* CreateRadians(uType* __type);
    static Friction* CreateUnit(uType* __type, int unit);
    static Friction* New1(uType* __type);
};
// }

}}}} // ::g::Fuse::Motion::Simulation
