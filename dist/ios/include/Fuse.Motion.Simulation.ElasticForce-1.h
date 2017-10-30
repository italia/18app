// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/ElasticForce.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct ElasticForce;}}}}

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal sealed class ElasticForce<T> :6
// {
struct ElasticForce_type : uType
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation interface0;
    ::g::Fuse::Motion::Simulation::MotionSimulation interface1;
    ::g::Fuse::Motion::Simulation::Simulation interface2;
};

ElasticForce_type* ElasticForce_typeof();
void ElasticForce__ctor__fn(ElasticForce* __this, float* scale);
void ElasticForce__get_Attraction_fn(ElasticForce* __this, uTRef __retval);
void ElasticForce__get_AttractionCurve_fn(ElasticForce* __this, float* __retval);
void ElasticForce__set_AttractionCurve_fn(ElasticForce* __this, float* value);
void ElasticForce__get_AttractionForce_fn(ElasticForce* __this, float* __retval);
void ElasticForce__set_AttractionForce_fn(ElasticForce* __this, float* value);
void ElasticForce__CreateNormalized_fn(uType* __type, ElasticForce** __retval);
void ElasticForce__CreatePoints_fn(uType* __type, ElasticForce** __retval);
void ElasticForce__CreateRadians_fn(uType* __type, ElasticForce** __retval);
void ElasticForce__CreateUnit_fn(uType* __type, int* unit, ElasticForce** __retval);
void ElasticForce__get_Damping_fn(ElasticForce* __this, float* __retval);
void ElasticForce__set_Damping_fn(ElasticForce* __this, float* value);
void ElasticForce__get_Destination_fn(ElasticForce* __this, uTRef __retval);
void ElasticForce__set_Destination_fn(ElasticForce* __this, void* value);
void ElasticForce__get_Energy_fn(ElasticForce* __this, float* __retval);
void ElasticForce__get_EnergyEps_fn(ElasticForce* __this, float* __retval);
void ElasticForce__set_EnergyEps_fn(ElasticForce* __this, float* value);
void ElasticForce__get_IsLocked_fn(ElasticForce* __this, bool* __retval);
void ElasticForce__set_IsLocked_fn(ElasticForce* __this, bool* value);
void ElasticForce__get_IsStatic_fn(ElasticForce* __this, bool* __retval);
void ElasticForce__set_IsStatic_fn(ElasticForce* __this, bool* value);
void ElasticForce__Iterate_fn(ElasticForce* __this);
void ElasticForce__get_MaxSpeed_fn(ElasticForce* __this, float* __retval);
void ElasticForce__set_MaxSpeed_fn(ElasticForce* __this, float* value);
void ElasticForce__New1_fn(uType* __type, float* scale, ElasticForce** __retval);
void ElasticForce__get_Position_fn(ElasticForce* __this, uTRef __retval);
void ElasticForce__set_Position_fn(ElasticForce* __this, void* value);
void ElasticForce__Reset_fn(ElasticForce* __this, void* value);
void ElasticForce__Start_fn(ElasticForce* __this);
void ElasticForce__Update_fn(ElasticForce* __this, double* elapsed);
void ElasticForce__get_Velocity_fn(ElasticForce* __this, uTRef __retval);
void ElasticForce__set_Velocity_fn(ElasticForce* __this, void* value);

struct ElasticForce : uObject
{
    float _attractionCurve;
    uTField _attractionDestination() { return __type->Field(this, 1); }
    float _attractionForce;
    uStrong< ::g::Fuse::Internal::Blender*> _blender;
    float _damping;
    float _energyEps;
    bool _hasMaxSpeed;
    bool _isStatic;
    float _maxSpeed;
    double _remainTime;
    float _scale;
    uTField _velocity() { return __type->Field(this, 11); }
    double timeStep;
    bool _IsLocked;
    uTField _Position() { return __type->Field(this, 14); }

    void ctor_(float scale);
    template<class T>
    T Attraction() { T __retval; return ElasticForce__get_Attraction_fn(this, &__retval), __retval; }
    float AttractionCurve();
    void AttractionCurve(float value);
    float AttractionForce();
    void AttractionForce(float value);
    float Damping();
    void Damping(float value);
    template<class T>
    T Destination() { T __retval; return ElasticForce__get_Destination_fn(this, &__retval), __retval; }
    template<class T>
    void Destination(T value) { ElasticForce__set_Destination_fn(this, uConstrain(__type->T(0), value)); }
    float Energy();
    float EnergyEps();
    void EnergyEps(float value);
    bool IsLocked();
    void IsLocked(bool value);
    bool IsStatic();
    void IsStatic(bool value);
    void Iterate();
    float MaxSpeed();
    void MaxSpeed(float value);
    template<class T>
    T Position() { T __retval; return ElasticForce__get_Position_fn(this, &__retval), __retval; }
    template<class T>
    void Position(T value) { ElasticForce__set_Position_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    void Reset(T value) { ElasticForce__Reset_fn(this, uConstrain(__type->T(0), value)); }
    void Start();
    void Update(double elapsed);
    template<class T>
    T Velocity() { T __retval; return ElasticForce__get_Velocity_fn(this, &__retval), __retval; }
    template<class T>
    void Velocity(T value) { ElasticForce__set_Velocity_fn(this, uConstrain(__type->T(0), value)); }
    static ElasticForce* CreateNormalized(uType* __type);
    static ElasticForce* CreatePoints(uType* __type);
    static ElasticForce* CreateRadians(uType* __type);
    static ElasticForce* CreateUnit(uType* __type, int unit);
    static ElasticForce* New1(uType* __type, float scale);
};
// }

}}}} // ::g::Fuse::Motion::Simulation
