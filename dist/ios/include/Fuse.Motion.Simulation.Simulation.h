// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/Simulation/Simulation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// internal abstract interface Simulation :5
// {
uInterfaceType* Simulation_typeof();

struct Simulation
{
    void(*fp_get_IsStatic)(uObject*, bool*);
    void(*fp_Update)(uObject*, double*);
    static bool IsStatic(const uInterface& __this) { bool __retval; return __this.VTable<Simulation>()->fp_get_IsStatic(__this, &__retval), __retval; }
    static void Update(const uInterface& __this, double elapsed) { __this.VTable<Simulation>()->fp_Update(__this, &elapsed); }
};
// }

}}}} // ::g::Fuse::Motion::Simulation
