// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/EasingMotion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct EasingMotion;}}}}

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal sealed class EasingMotion<T> :7
// {
struct EasingMotion_type : uType
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation interface0;
    ::g::Fuse::Motion::Simulation::MotionSimulation interface1;
    ::g::Fuse::Motion::Simulation::Simulation interface2;
};

EasingMotion_type* EasingMotion_typeof();
void EasingMotion__ctor__fn(EasingMotion* __this);
void EasingMotion__CreateNormalized_fn(uType* __type, EasingMotion** __retval);
void EasingMotion__CreatePoints_fn(uType* __type, EasingMotion** __retval);
void EasingMotion__CreateRadians_fn(uType* __type, EasingMotion** __retval);
void EasingMotion__CreateUnit_fn(uType* __type, int* unit, EasingMotion** __retval);
void EasingMotion__get_Destination_fn(EasingMotion* __this, uTRef __retval);
void EasingMotion__set_Destination_fn(EasingMotion* __this, void* value);
void EasingMotion__get_Duration_fn(EasingMotion* __this, float* __retval);
void EasingMotion__set_Duration_fn(EasingMotion* __this, float* value);
void EasingMotion__get_DurationExp_fn(EasingMotion* __this, float* __retval);
void EasingMotion__set_DurationExp_fn(EasingMotion* __this, float* value);
void EasingMotion__get_Easing_fn(EasingMotion* __this, ::g::Fuse::Animations::Easing** __retval);
void EasingMotion__set_Easing_fn(EasingMotion* __this, ::g::Fuse::Animations::Easing* value);
void EasingMotion__get_IsStatic_fn(EasingMotion* __this, bool* __retval);
void EasingMotion__New1_fn(uType* __type, EasingMotion** __retval);
void EasingMotion__get_NominalDistance_fn(EasingMotion* __this, float* __retval);
void EasingMotion__set_NominalDistance_fn(EasingMotion* __this, float* value);
void EasingMotion__get_Position_fn(EasingMotion* __this, uTRef __retval);
void EasingMotion__set_Position_fn(EasingMotion* __this, void* value);
void EasingMotion__Reset_fn(EasingMotion* __this, void* destination);
void EasingMotion__Start_fn(EasingMotion* __this);
void EasingMotion__Update_fn(EasingMotion* __this, double* elapsed);
void EasingMotion__UpdateDestination_fn(EasingMotion* __this, bool* start);
void EasingMotion__get_Velocity_fn(EasingMotion* __this, uTRef __retval);
void EasingMotion__set_Velocity_fn(EasingMotion* __this, void* value);

struct EasingMotion : uObject
{
    uStrong< ::g::Fuse::Internal::Blender*> _blender;
    uTField _destination() { return __type->Field(this, 1); }
    float _duration;
    float _durationExp;
    uStrong< ::g::Fuse::Animations::Easing*> _easing;
    bool _isDirty;
    bool _isLocked;
    bool _isStatic;
    float _nominalDistance;
    uTField _position() { return __type->Field(this, 9); }
    double _progress;
    double _progressSpeed;
    uTField _source() { return __type->Field(this, 12); }
    uTField _transitionPosition() { return __type->Field(this, 13); }
    double _transitionRemain;
    double _transitionTime;
    uTField _transitionVelocity() { return __type->Field(this, 16); }
    uTField _velocity() { return __type->Field(this, 17); }

    void ctor_();
    template<class T>
    T Destination() { T __retval; return EasingMotion__get_Destination_fn(this, &__retval), __retval; }
    template<class T>
    void Destination(T value) { EasingMotion__set_Destination_fn(this, uConstrain(__type->T(0), value)); }
    float Duration();
    void Duration(float value);
    float DurationExp();
    void DurationExp(float value);
    ::g::Fuse::Animations::Easing* Easing();
    void Easing(::g::Fuse::Animations::Easing* value);
    bool IsStatic();
    float NominalDistance();
    void NominalDistance(float value);
    template<class T>
    T Position() { T __retval; return EasingMotion__get_Position_fn(this, &__retval), __retval; }
    template<class T>
    void Position(T value) { EasingMotion__set_Position_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    void Reset(T destination) { EasingMotion__Reset_fn(this, uConstrain(__type->T(0), destination)); }
    void Start();
    void Update(double elapsed);
    void UpdateDestination(bool start);
    template<class T>
    T Velocity() { T __retval; return EasingMotion__get_Velocity_fn(this, &__retval), __retval; }
    template<class T>
    void Velocity(T value) { EasingMotion__set_Velocity_fn(this, uConstrain(__type->T(0), value)); }
    static EasingMotion* CreateNormalized(uType* __type);
    static EasingMotion* CreatePoints(uType* __type);
    static EasingMotion* CreateRadians(uType* __type);
    static EasingMotion* CreateUnit(uType* __type, int unit);
    static EasingMotion* New1(uType* __type);
};
// }

}}}} // ::g::Fuse::Motion::Simulation
