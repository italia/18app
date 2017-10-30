// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Collision.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Box;}}
namespace g{namespace Fuse{struct Collision;}}
namespace g{namespace Fuse{struct Ray;}}

namespace g{
namespace Fuse{

// public static class Collision :4
// {
uClassType* Collision_typeof();
void Collision__RayIntersectsBox_fn(::g::Fuse::Ray* ray, ::g::Fuse::Box* box, float* distance, bool* __retval);

struct Collision : uObject
{
    static bool RayIntersectsBox(::g::Fuse::Ray ray, ::g::Fuse::Box box, float* distance);
};
// }

}} // ::g::Fuse
