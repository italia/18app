// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Easing.h>
namespace g{namespace Fuse{namespace Animations{struct Easing__LinearImpl;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class Easing.LinearImpl :60
// {
::g::Fuse::Animations::Easing_type* Easing__LinearImpl_typeof();
void Easing__LinearImpl__ctor_1_fn(Easing__LinearImpl* __this);
void Easing__LinearImpl__Map_fn(Easing__LinearImpl* __this, double* k, double* __retval);
void Easing__LinearImpl__New1_fn(Easing__LinearImpl** __retval);

struct Easing__LinearImpl : ::g::Fuse::Animations::Easing
{
    void ctor_1();
    static Easing__LinearImpl* New1();
};
// }

}}} // ::g::Fuse::Animations
