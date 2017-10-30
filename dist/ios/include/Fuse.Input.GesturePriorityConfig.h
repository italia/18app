// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/Gesture.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}

namespace g{
namespace Fuse{
namespace Input{

// public struct GesturePriorityConfig :28
// {
uStructType* GesturePriorityConfig_typeof();
void GesturePriorityConfig__ctor__fn(GesturePriorityConfig* __this, int* priority, float* significance, int* adjustment);
void GesturePriorityConfig__New1_fn(int* priority, float* significance, int* adjustment, GesturePriorityConfig* __retval);

struct GesturePriorityConfig
{
    int Priority;
    float Significance;
    int Adjustment;

    void ctor_(int priority, float significance, int adjustment);
};

GesturePriorityConfig GesturePriorityConfig__New1(int priority, float significance, int adjustment);
// }

}}} // ::g::Fuse::Input
