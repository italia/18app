// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/BoundedRegion2D.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal abstract interface BoundedRegion2D :7
// {
uInterfaceType* BoundedRegion2D_typeof();

struct BoundedRegion2D
{
    void(*fp_Adjust)(uObject*, ::g::Uno::Float2*);
    void(*fp_EndUser)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_IsUser)(uObject*, bool*);
    void(*fp_get_MaxPosition)(uObject*, ::g::Uno::Float2*);
    void(*fp_set_MaxPosition)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_MinPosition)(uObject*, ::g::Uno::Float2*);
    void(*fp_set_MinPosition)(uObject*, ::g::Uno::Float2*);
    void(*fp_MoveTo)(uObject*, ::g::Uno::Float2*);
    void(*fp_Reset)(uObject*, ::g::Uno::Float2*);
    void(*fp_StartUser)(uObject*);
    void(*fp_StepUser)(uObject*, ::g::Uno::Float2*);
    static void Adjust(const uInterface& __this, ::g::Uno::Float2 adjust) { __this.VTable<BoundedRegion2D>()->fp_Adjust(__this, &adjust); }
    static void EndUser(const uInterface& __this, ::g::Uno::Float2 velocity) { __this.VTable<BoundedRegion2D>()->fp_EndUser(__this, &velocity); }
    static bool IsUser(const uInterface& __this) { bool __retval; return __this.VTable<BoundedRegion2D>()->fp_get_IsUser(__this, &__retval), __retval; }
    static ::g::Uno::Float2 MaxPosition(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<BoundedRegion2D>()->fp_get_MaxPosition(__this, &__retval), __retval; }
    static void MaxPosition(const uInterface& __this, ::g::Uno::Float2 value) { __this.VTable<BoundedRegion2D>()->fp_set_MaxPosition(__this, &value); }
    static ::g::Uno::Float2 MinPosition(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<BoundedRegion2D>()->fp_get_MinPosition(__this, &__retval), __retval; }
    static void MinPosition(const uInterface& __this, ::g::Uno::Float2 value) { __this.VTable<BoundedRegion2D>()->fp_set_MinPosition(__this, &value); }
    static void MoveTo(const uInterface& __this, ::g::Uno::Float2 position) { __this.VTable<BoundedRegion2D>()->fp_MoveTo(__this, &position); }
    static void Reset(const uInterface& __this, ::g::Uno::Float2 position) { __this.VTable<BoundedRegion2D>()->fp_Reset(__this, &position); }
    static void StartUser(const uInterface& __this) { __this.VTable<BoundedRegion2D>()->fp_StartUser(__this); }
    static void StepUser(const uInterface& __this, ::g::Uno::Float2 offset) { __this.VTable<BoundedRegion2D>()->fp_StepUser(__this, &offset); }
};
// }

}}}} // ::g::Fuse::Motion::Simulation
