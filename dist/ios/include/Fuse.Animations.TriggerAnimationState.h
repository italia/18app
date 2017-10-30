// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Player;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class TriggerAnimationState :241
// {
struct TriggerAnimationState_type : uType
{
    ::g::Fuse::Animations::IPlayerFeedback interface0;
    ::g::Fuse::Animations::IBasePlayerFeedback interface1;
};

TriggerAnimationState_type* TriggerAnimationState_typeof();
void TriggerAnimationState__ctor__fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node);
void TriggerAnimationState__get_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void TriggerAnimationState__set_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void TriggerAnimationState__get_CurrentAnimatorsDuration_fn(TriggerAnimationState* __this, double* __retval);
void TriggerAnimationState__Dispose_fn(TriggerAnimationState* __this);
void TriggerAnimationState__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn(TriggerAnimationState* __this, uObject* s);
void TriggerAnimationState__FuseAnimationsIBasePlayerFeedbackOnStable_fn(TriggerAnimationState* __this, uObject* s);
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn(TriggerAnimationState* __this, uObject* s, int* flags);
void TriggerAnimationState__GetCurrentPlayer_fn(TriggerAnimationState* __this, int* tendTo, int* flags, ::g::Fuse::Animations::Player** __retval);
void TriggerAnimationState__GetPlayer_fn(TriggerAnimationState* __this, int* variant, bool* noFade, ::g::Fuse::Animations::Player** __retval);
void TriggerAnimationState__get_IsStable_fn(TriggerAnimationState* __this, bool* __retval);
void TriggerAnimationState__New1_fn(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node, TriggerAnimationState** __retval);
void TriggerAnimationState__OnTimeChanged_fn(TriggerAnimationState* __this);
void TriggerAnimationState__PlayEnd_fn(TriggerAnimationState* __this, bool* on);
void TriggerAnimationState__PlayOff_fn(TriggerAnimationState* __this);
void TriggerAnimationState__PlayOn_fn(TriggerAnimationState* __this);
void TriggerAnimationState__PlayToProgress_fn(TriggerAnimationState* __this, double* progress, int* tendTo, int* flags);
void TriggerAnimationState__get_Progress_fn(TriggerAnimationState* __this, double* __retval);
void TriggerAnimationState__get_ProgressFullOff_fn(TriggerAnimationState* __this, bool* __retval);
void TriggerAnimationState__get_ProgressFullOn_fn(TriggerAnimationState* __this, bool* __retval);
void TriggerAnimationState__SeekProgress_fn(TriggerAnimationState* __this, double* newProgress, int* tendTo, int* flags);
void TriggerAnimationState__TrackProgress_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::Player* player);

struct TriggerAnimationState : uObject
{
    uStrong< ::g::Fuse::Animations::Player*> _backPlayer;
    uStrong< ::g::Fuse::Animations::Player*> _curPlayer;
    int _curPlayerVariant;
    uStrong< ::g::Fuse::Animations::Player*> _forePlayer;
    uStrong< ::g::Fuse::Visual*> _node;
    double _prevProgress;
    uStrong<uObject*> Feedback;
    uStrong< ::g::Fuse::Animations::TriggerAnimation*> _Animation;

    void ctor_(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node);
    ::g::Fuse::Animations::TriggerAnimation* Animation();
    void Animation(::g::Fuse::Animations::TriggerAnimation* value);
    double CurrentAnimatorsDuration();
    void Dispose();
    ::g::Fuse::Animations::Player* GetCurrentPlayer(int tendTo, int flags);
    ::g::Fuse::Animations::Player* GetPlayer(int variant, bool noFade);
    bool IsStable();
    void OnTimeChanged();
    void PlayEnd(bool on);
    void PlayOff();
    void PlayOn();
    void PlayToProgress(double progress, int tendTo, int flags);
    double Progress();
    bool ProgressFullOff();
    bool ProgressFullOn();
    void SeekProgress(double newProgress, int tendTo, int flags);
    void TrackProgress(::g::Fuse::Animations::Player* player);
    static TriggerAnimationState* New1(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node);
};
// }

}}} // ::g::Fuse::Animations
