// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/BoundedRegion2D.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct BasicBoundedRegion2D;}}}}

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal sealed class BasicBoundedRegion2D :31
// {
struct BasicBoundedRegion2D_type : uType
{
    ::g::Fuse::Motion::Simulation::BoundedRegion2D interface0;
    ::g::Fuse::Motion::Simulation::MotionSimulation interface1;
    ::g::Fuse::Motion::Simulation::Simulation interface2;
};

BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof();
void BasicBoundedRegion2D__ctor__fn(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__Adjust_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* adjust);
void BasicBoundedRegion2D__CalcOver_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* sp, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__get_Destination_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__get_DestinationSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval);
void BasicBoundedRegion2D__set_DestinationSimulation_fn(BasicBoundedRegion2D* __this, uObject* value);
void BasicBoundedRegion2D__EndUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* velocity);
void BasicBoundedRegion2D__get_FrictionSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval);
void BasicBoundedRegion2D__set_FrictionSimulation_fn(BasicBoundedRegion2D* __this, uObject* value);
void BasicBoundedRegion2D__get_IsStatic_fn(BasicBoundedRegion2D* __this, bool* __retval);
void BasicBoundedRegion2D__get_IsUser_fn(BasicBoundedRegion2D* __this, bool* __retval);
void BasicBoundedRegion2D__get_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);
void BasicBoundedRegion2D__get_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);
void BasicBoundedRegion2D__MoveDestination_fn(BasicBoundedRegion2D* __this, double* elapsed);
void BasicBoundedRegion2D__MoveFriction_fn(BasicBoundedRegion2D* __this, double* elapsed);
void BasicBoundedRegion2D__MoveSnap_fn(BasicBoundedRegion2D* __this, double* elapsed, bool* X, bool* Y, bool* __retval);
void BasicBoundedRegion2D__MoveTo_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* target);
void BasicBoundedRegion2D__New1_fn(BasicBoundedRegion2D** __retval);
void BasicBoundedRegion2D__get_Overflow_fn(BasicBoundedRegion2D* __this, int* __retval);
void BasicBoundedRegion2D__set_Overflow_fn(BasicBoundedRegion2D* __this, int* value);
void BasicBoundedRegion2D__get_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);
void BasicBoundedRegion2D__get_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);
void BasicBoundedRegion2D__Reset_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* position);
void BasicBoundedRegion2D__SnapPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* prev, ::g::Uno::Float2* next, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__SnapSetPositionVelocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* nextPosition, ::g::Uno::Float2* nextVelocity);
void BasicBoundedRegion2D__get_SnapSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval);
void BasicBoundedRegion2D__set_SnapSimulation_fn(BasicBoundedRegion2D* __this, uObject* value);
void BasicBoundedRegion2D__SnapVelocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__StartUser_fn(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__StepUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* inOffset);
void BasicBoundedRegion2D__Update_fn(BasicBoundedRegion2D* __this, double* elapsed);
void BasicBoundedRegion2D__get_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval);
void BasicBoundedRegion2D__set_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value);

struct BasicBoundedRegion2D : uObject
{
    uStrong<uObject*> _destination;
    uStrong<uObject*> _friction;
    ::g::Uno::Float2 _maxPosition;
    ::g::Uno::Float2 _minPosition;
    int _moveMode;
    int _overflow;
    ::g::Uno::Float2 _overflowExtent;
    uStrong<uObject*> _snap;
    ::g::Uno::Float2 _velocity;
    ::g::Uno::Float2 _Position;

    void ctor_();
    void Adjust(::g::Uno::Float2 adjust);
    ::g::Uno::Float2 CalcOver(::g::Uno::Float2 sp);
    ::g::Uno::Float2 Destination();
    uObject* DestinationSimulation();
    void DestinationSimulation(uObject* value);
    void EndUser(::g::Uno::Float2 velocity);
    uObject* FrictionSimulation();
    void FrictionSimulation(uObject* value);
    bool IsStatic();
    bool IsUser();
    ::g::Uno::Float2 MaxPosition();
    void MaxPosition(::g::Uno::Float2 value);
    ::g::Uno::Float2 MinPosition();
    void MinPosition(::g::Uno::Float2 value);
    void MoveDestination(double elapsed);
    void MoveFriction(double elapsed);
    bool MoveSnap(double elapsed, bool X, bool Y);
    void MoveTo(::g::Uno::Float2 target);
    int Overflow();
    void Overflow(int value);
    ::g::Uno::Float2 OverflowExtent();
    void OverflowExtent(::g::Uno::Float2 value);
    ::g::Uno::Float2 Position();
    void Position(::g::Uno::Float2 value);
    void Reset(::g::Uno::Float2 position);
    ::g::Uno::Float2 SnapPosition(::g::Uno::Float2 prev, ::g::Uno::Float2 next);
    void SnapSetPositionVelocity(::g::Uno::Float2 nextPosition, ::g::Uno::Float2 nextVelocity);
    uObject* SnapSimulation();
    void SnapSimulation(uObject* value);
    ::g::Uno::Float2 SnapVelocity(::g::Uno::Float2 position, ::g::Uno::Float2 v);
    void StartUser();
    void StepUser(::g::Uno::Float2 inOffset);
    void Update(double elapsed);
    ::g::Uno::Float2 Velocity();
    void Velocity(::g::Uno::Float2 value);
    static BasicBoundedRegion2D* New1();
};
// }

}}}} // ::g::Fuse::Motion::Simulation
