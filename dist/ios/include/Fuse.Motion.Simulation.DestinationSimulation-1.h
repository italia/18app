// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/Simulation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal abstract interface DestinationSimulation<T> :25
// {
uInterfaceType* DestinationSimulation_typeof();

struct DestinationSimulation
{
    void(*fp_get_Destination)(uObject*, uTRef);
    void(*fp_set_Destination)(uObject*, void*);
    void(*fp_Reset)(uObject*, void*);
    void(*fp_Start)(uObject*);
    template<class T>
    static T Destination(const uInterface& __this) { T __retval; return __this.VTable<DestinationSimulation>()->fp_get_Destination(__this, &__retval), __retval; }
    static void get_Destination_ex(const uInterface& __this, uTRef __retval) { __this.VTable<DestinationSimulation>()->fp_get_Destination(__this, __retval); }
    template<class T>
    static void Destination(const uInterface& __this, T value) { __this.VTable<DestinationSimulation>()->fp_set_Destination(__this, uConstrain(__this->__type->GetBase(DestinationSimulation_typeof())->T(0), value)); }
    static void set_Destination_ex(const uInterface& __this, void* value) { __this.VTable<DestinationSimulation>()->fp_set_Destination(__this, value); }
    template<class T>
    static void Reset(const uInterface& __this, T destination) { __this.VTable<DestinationSimulation>()->fp_Reset(__this, uConstrain(__this->__type->GetBase(DestinationSimulation_typeof())->T(0), destination)); }
    static void Reset_ex(const uInterface& __this, void* destination) { __this.VTable<DestinationSimulation>()->fp_Reset(__this, destination); }
    static void Start(const uInterface& __this) { __this.VTable<DestinationSimulation>()->fp_Start(__this); }
};
// }

}}}} // ::g::Fuse::Motion::Simulation
