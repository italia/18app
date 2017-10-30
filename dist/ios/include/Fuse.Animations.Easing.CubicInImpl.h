// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Easing.h>
namespace g{namespace Fuse{namespace Animations{struct Easing__CubicInImpl;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class Easing.CubicInImpl :99
// {
::g::Fuse::Animations::Easing_type* Easing__CubicInImpl_typeof();
void Easing__CubicInImpl__ctor_1_fn(Easing__CubicInImpl* __this);
void Easing__CubicInImpl__Map_fn(Easing__CubicInImpl* __this, double* k, double* __retval);
void Easing__CubicInImpl__New1_fn(Easing__CubicInImpl** __retval);

struct Easing__CubicInImpl : ::g::Fuse::Animations::Easing
{
    void ctor_1();
    static Easing__CubicInImpl* New1();
};
// }

}}} // ::g::Fuse::Animations
