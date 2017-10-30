// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/PointerVelocity.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// public sealed class PointerVelocity<T> :17
// {
uType* PointerVelocity_typeof();
void PointerVelocity__ctor__fn(PointerVelocity* __this);
void PointerVelocity__AddSample_fn(PointerVelocity* __this, void* location, double* elapsed, int* flags);
void PointerVelocity__AddSampleTime_fn(PointerVelocity* __this, void* location, double* timestamp, int* flags);
void PointerVelocity__ApplySample_fn(PointerVelocity* __this, void* sample, double* elapsed);
void PointerVelocity__get_CurrentVelocity_fn(PointerVelocity* __this, uTRef __retval);
void PointerVelocity__set_CurrentVelocity_fn(PointerVelocity* __this, void* value);
void PointerVelocity__New1_fn(uType* __type, PointerVelocity** __retval);
void PointerVelocity__Reset_fn(PointerVelocity* __this, void* location0);
void PointerVelocity__Reset1_fn(PointerVelocity* __this, void* location0, void* velocity0, double* currentTime);

struct PointerVelocity : uObject
{
    float _accelFactor;
    float _accelLimit;
    float _accelThreshold;
    uStrong< ::g::Fuse::Internal::Blender*> _blender;
    uTField _currentLocation() { return __type->Field(this, 4); }
    float _inSpeedLimit;
    float _period;
    double _prevTime;
    float _speedDistanceThreshold;
    double _speedThreshold;
    uTField _startLocation() { return __type->Field(this, 10); }
    double _totalDistance;
    double _totalTime;
    uTField _velocity() { return __type->Field(this, 13); }

    void ctor_();
    template<class T>
    void AddSample(T location, double elapsed, int flags) { PointerVelocity__AddSample_fn(this, uConstrain(__type->T(0), location), &elapsed, &flags); }
    template<class T>
    void AddSampleTime(T location, double timestamp, int flags) { PointerVelocity__AddSampleTime_fn(this, uConstrain(__type->T(0), location), &timestamp, &flags); }
    template<class T>
    void ApplySample(T sample, double elapsed) { PointerVelocity__ApplySample_fn(this, uConstrain(__type->T(0), sample), &elapsed); }
    template<class T>
    T CurrentVelocity() { T __retval; return PointerVelocity__get_CurrentVelocity_fn(this, &__retval), __retval; }
    template<class T>
    void CurrentVelocity(T value) { PointerVelocity__set_CurrentVelocity_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    void Reset(T location0) { PointerVelocity__Reset_fn(this, uConstrain(__type->T(0), location0)); }
    template<class T>
    void Reset1(T location0, T velocity0, double currentTime) { PointerVelocity__Reset1_fn(this, uConstrain(__type->T(0), location0), uConstrain(__type->T(0), velocity0), &currentTime); }
    static PointerVelocity* New1(uType* __type);
};
// }

}}}} // ::g::Fuse::Motion::Simulation
