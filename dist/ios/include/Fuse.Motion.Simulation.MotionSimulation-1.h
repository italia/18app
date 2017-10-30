// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/Simulation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal abstract interface MotionSimulation<T> :19
// {
uInterfaceType* MotionSimulation_typeof();

struct MotionSimulation
{
    void(*fp_get_Position)(uObject*, uTRef);
    void(*fp_set_Position)(uObject*, void*);
    void(*fp_get_Velocity)(uObject*, uTRef);
    void(*fp_set_Velocity)(uObject*, void*);
    template<class T>
    static T Position(const uInterface& __this) { T __retval; return __this.VTable<MotionSimulation>()->fp_get_Position(__this, &__retval), __retval; }
    static void get_Position_ex(const uInterface& __this, uTRef __retval) { __this.VTable<MotionSimulation>()->fp_get_Position(__this, __retval); }
    template<class T>
    static void Position(const uInterface& __this, T value) { __this.VTable<MotionSimulation>()->fp_set_Position(__this, uConstrain(__this->__type->GetBase(MotionSimulation_typeof())->T(0), value)); }
    static void set_Position_ex(const uInterface& __this, void* value) { __this.VTable<MotionSimulation>()->fp_set_Position(__this, value); }
    template<class T>
    static T Velocity(const uInterface& __this) { T __retval; return __this.VTable<MotionSimulation>()->fp_get_Velocity(__this, &__retval), __retval; }
    static void get_Velocity_ex(const uInterface& __this, uTRef __retval) { __this.VTable<MotionSimulation>()->fp_get_Velocity(__this, __retval); }
    template<class T>
    static void Velocity(const uInterface& __this, T value) { __this.VTable<MotionSimulation>()->fp_set_Velocity(__this, uConstrain(__this->__type->GetBase(MotionSimulation_typeof())->T(0), value)); }
    static void set_Velocity_ex(const uInterface& __this, void* value) { __this.VTable<MotionSimulation>()->fp_set_Velocity(__this, value); }
};
// }

}}}} // ::g::Fuse::Motion::Simulation
