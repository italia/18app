// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/Internal/Helpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Gestures{struct DegreeSpan;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Gestures{

// internal sealed class SwipeGestureHelper :45
// {
uType* SwipeGestureHelper_typeof();
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans);
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval);
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval);

struct SwipeGestureHelper : uObject
{
    float _lengthThreshold;
    uStrong<uArray*> _spans;

    void ctor_(float lengthThreshold, uArray* spans);
    bool IsWithinBounds(::g::Uno::Float2 vector);
    static SwipeGestureHelper* New1(float lengthThreshold, uArray* spans);
};
// }

}}} // ::g::Fuse::Gestures
