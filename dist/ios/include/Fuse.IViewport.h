// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ICommonViewport.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// public abstract interface IViewport :64
// {
uInterfaceType* IViewport_typeof();

struct IViewport
{
    void(*fp_PointToWorldRay)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*);
    void(*fp_WorldToLocalRay)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*);
    static ::g::Fuse::Ray PointToWorldRay(const uInterface& __this, ::g::Uno::Float2 pointPos);
    static ::g::Fuse::Ray WorldToLocalRay(const uInterface& __this, uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where);
};

}} // ::g::Fuse

#include <Fuse.Ray.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{

inline ::g::Fuse::Ray IViewport::PointToWorldRay(const uInterface& __this, ::g::Uno::Float2 pointPos) { ::g::Fuse::Ray __retval; return __this.VTable<IViewport>()->fp_PointToWorldRay(__this, &pointPos, &__retval), __retval; }
inline ::g::Fuse::Ray IViewport::WorldToLocalRay(const uInterface& __this, uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where) { ::g::Fuse::Ray __retval; return __this.VTable<IViewport>()->fp_WorldToLocalRay(__this, world, &worldRay, where, &__retval), __retval; }
// }

}} // ::g::Fuse
