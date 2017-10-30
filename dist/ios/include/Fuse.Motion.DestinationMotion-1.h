// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/DestinationMotion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Motion.DestinationMotionConfig.h>
namespace g{namespace Fuse{namespace Motion{struct DestinationMotion;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public sealed class DestinationMotion<T> :186
// {
uType* DestinationMotion_typeof();
void DestinationMotion__ctor_1_fn(DestinationMotion* __this);
void DestinationMotion__Create1_fn(DestinationMotion* __this, uObject** __retval);
void DestinationMotion__New2_fn(uType* __type, DestinationMotion** __retval);

struct DestinationMotion : ::g::Fuse::Motion::DestinationMotionConfig
{
    void ctor_1();
    uObject* Create1();
    static DestinationMotion* New2(uType* __type);
};
// }

}}} // ::g::Fuse::Motion
