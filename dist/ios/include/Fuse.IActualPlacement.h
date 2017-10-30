// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public abstract interface IActualPlacement :54
// {
uInterfaceType* IActualPlacement_typeof();

struct IActualPlacement
{
    void(*fp_get_ActualSize)(uObject*, ::g::Uno::Float3*);
    void(*fp_add_Placed)(uObject*, uDelegate*);
    void(*fp_remove_Placed)(uObject*, uDelegate*);
    static ::g::Uno::Float3 ActualSize(const uInterface& __this);
    static void add_Placed(const uInterface& __this, uDelegate* value) { __this.VTable<IActualPlacement>()->fp_add_Placed(__this, value); }
    static void remove_Placed(const uInterface& __this, uDelegate* value) { __this.VTable<IActualPlacement>()->fp_remove_Placed(__this, value); }
};

}} // ::g::Fuse

#include <Uno.Float3.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float3 IActualPlacement::ActualSize(const uInterface& __this) { ::g::Uno::Float3 __retval; return __this.VTable<IActualPlacement>()->fp_get_ActualSize(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
