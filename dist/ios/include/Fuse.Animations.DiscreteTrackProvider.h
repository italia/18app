// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TrackAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface DiscreteTrackProvider :24
// {
uInterfaceType* DiscreteTrackProvider_typeof();

struct DiscreteTrackProvider
{
    void(*fp_GetSeekProgress)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*);
    void(*fp_GetSeekTime)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*);
    static int GetSeekProgress(const uInterface& __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, uObject** value, double* strength) { int __retval; return __this.VTable<DiscreteTrackProvider>()->fp_GetSeekProgress(__this, tas, &progress, &interval, &dir, value, strength, &__retval), __retval; }
    static int GetSeekTime(const uInterface& __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, uObject** value, double* strength) { int __retval; return __this.VTable<DiscreteTrackProvider>()->fp_GetSeekTime(__this, tas, &elapsed, &interval, &dir, value, strength, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
