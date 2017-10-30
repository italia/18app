// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/DiscreteSingleTrack.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct DiscreteSingleTrack;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteSingleTrack :5
// {
struct DiscreteSingleTrack_type : uType
{
    ::g::Fuse::Animations::DiscreteTrackProvider interface0;
    ::g::Fuse::Animations::TrackProvider interface1;
};

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof();
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this);
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval);
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval);
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval);
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval);
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval);

struct DiscreteSingleTrack : uObject
{
    static uSStrong<DiscreteSingleTrack*> Singleton_;
    static uSStrong<DiscreteSingleTrack*>& Singleton() { return Singleton_; }

    void ctor_();
    static DiscreteSingleTrack* New1();
};
// }

}}} // ::g::Fuse::Animations
