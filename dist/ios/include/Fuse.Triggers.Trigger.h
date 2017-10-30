// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Trigger.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction;}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class Trigger :77
// {
struct Trigger_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Animations::IUnwrappedPlayerFeedback interface6;
    ::g::Fuse::Animations::IBasePlayerFeedback interface7;
    void(*fp_OnPlayStateChanged)(::g::Fuse::Triggers::Trigger*, int*);
    void(*fp_OnProgressChanged)(::g::Fuse::Triggers::Trigger*);
};

Trigger_type* Trigger_typeof();
void Trigger__ctor_4_fn(Trigger* __this);
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval);
void Trigger__Activate_fn(Trigger* __this, uDelegate* done);
void Trigger__AddDeferredAction_fn(Trigger* __this, ::g::Fuse::Triggers::Actions::TriggerAction* i);
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval);
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void Trigger__get_Bypass_fn(Trigger* __this, int* __retval);
void Trigger__set_Bypass_fn(Trigger* __this, int* value);
void Trigger__BypassActivate_fn(Trigger* __this);
void Trigger__BypassDeactivate_fn(Trigger* __this);
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int* direction);
void Trigger__CleanupStableState_fn(Trigger* __this);
void Trigger__CleanupState_fn(Trigger* __this);
void Trigger__CreateState_fn(Trigger* __this);
void Trigger__Deactivate_fn(Trigger* __this);
void Trigger__DirectActivate_fn(Trigger* __this, uDelegate* done);
void Trigger__DirectDeactivate_fn(Trigger* __this);
void Trigger__DirectSeek_fn(Trigger* __this, double* progress, int* direction);
void Trigger__EnsureAnimationLength_fn(Trigger* __this);
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval);
void Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn(Trigger* __this, uObject* s);
void Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn(Trigger* __this, uObject* s);
void Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn(Trigger* __this, uObject* s, double* prev, double* cur, int* flags);
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval);
void Trigger__get_HasBackwardAnimation_fn(Trigger* __this, bool* __retval);
void Trigger__InversePulse_fn(Trigger* __this);
void Trigger__IsForward_fn(Trigger* __this, int* ps, bool* __retval);
void Trigger__OnPlayStateChanged_fn(Trigger* __this, int* state);
void Trigger__OnProgressChanged_fn(Trigger* __this);
void Trigger__OnRooted_fn(Trigger* __this);
void Trigger__OnUnrooted_fn(Trigger* __this);
void Trigger__PlayActions_fn(Trigger* __this, int* when);
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done);
void Trigger__PlayOn_fn(Trigger* __this);
void Trigger__get_PlayState_fn(Trigger* __this, int* __retval);
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int* variant);
void Trigger__get_Progress_fn(Trigger* __this, double* __retval);
void Trigger__Pulse_fn(Trigger* __this);
void Trigger__Seek_fn(Trigger* __this, double* progress, int* direction);
void Trigger__SeekImpl_fn(Trigger* __this, double* progress, int* direction, int* flags);
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on);
void Trigger__SetPlayState_fn(Trigger* __this, int* next);
void Trigger__get_ShouldBypass_fn(Trigger* __this, bool* __retval);
void Trigger__get_ShouldIgnore_fn(Trigger* __this, bool* __retval);
void Trigger__Start_fn(Trigger* __this);
void Trigger__Stop_fn(Trigger* __this, bool* force);
void Trigger__StopAction_fn(Trigger* __this);
void Trigger__UnrootActions_fn(Trigger* __this);
void Trigger__WhatDirection_fn(Trigger* __this, double* diff, bool* animating, int* __retval);

struct Trigger : ::g::Fuse::NodeGroupBase
{
    uStrong< ::g::Uno::Collections::List*> _actions;
    uStrong< ::g::Fuse::Animations::TriggerAnimation*> _animation;
    uStrong< ::g::Fuse::Animations::TriggerAnimationState*> _animState;
    int _bypass;
    uStrong<uDelegate*> _doneAction;
    bool _doneOn;
    bool _isStarted;
    int _lastPlayState;
    int _noLayoutFrame;
    int _rootCaptureIndex1;
    int _rootPlayState;
    double _rootProgress;
    bool _startAtZero;
    bool _suppressPropertyChangedProgress;
    static bool _warnBypass_;
    static bool& _warnBypass() { return _warnBypass_; }
    static ::g::Uno::UX::Selector ProgressName_;
    static ::g::Uno::UX::Selector& ProgressName() { return ProgressName_; }

    void ctor_4();
    uObject* Actions();
    void Activate(uDelegate* done);
    void AddDeferredAction(::g::Fuse::Triggers::Actions::TriggerAction* i);
    ::g::Fuse::Animations::TriggerAnimation* Animation();
    void Animation(::g::Fuse::Animations::TriggerAnimation* value);
    uObject* Animators();
    ::g::Fuse::Animations::TriggerAnimation* BackwardAnimation();
    void BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value);
    int Bypass();
    void Bypass(int value);
    void BypassActivate();
    void BypassDeactivate();
    void BypassSeek(double progress, int direction);
    void CleanupStableState();
    void CleanupState();
    void CreateState();
    void Deactivate();
    void DirectActivate(uDelegate* done);
    void DirectDeactivate();
    void DirectSeek(double progress, int direction);
    void EnsureAnimationLength();
    bool EnsureState(double progress);
    bool HasActions();
    bool HasBackwardAnimation();
    void InversePulse();
    bool IsForward(int ps);
    void OnPlayStateChanged(int state) { (((Trigger_type*)__type)->fp_OnPlayStateChanged)(this, &state); }
    void OnProgressChanged() { (((Trigger_type*)__type)->fp_OnProgressChanged)(this); }
    void PlayActions(int when);
    void PlayEnd(bool on, uDelegate* done);
    void PlayOn();
    int PlayState();
    void PlayTo(double progress, int variant);
    double Progress();
    void Pulse();
    void Seek(double progress, int direction);
    void SeekImpl(double progress, int direction, int flags);
    void SetDone(uDelegate* done, bool on);
    void SetPlayState(int next);
    bool ShouldBypass();
    bool ShouldIgnore();
    void Start();
    void Stop(bool force);
    void StopAction();
    void UnrootActions();
    int WhatDirection(double diff, bool animating);
    static void OnPlayStateChanged(Trigger* __this, int state) { Trigger__OnPlayStateChanged_fn(__this, &state); }
    static void OnProgressChanged(Trigger* __this) { Trigger__OnProgressChanged_fn(__this); }
};
// }

}}} // ::g::Fuse::Triggers
