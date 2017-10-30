// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Timeline.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Timeline :76
// {
struct Timeline_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Triggers::IPlayback interface8;
    ::g::Fuse::Triggers::IPulseTrigger interface9;
    ::g::Fuse::Triggers::IProgress interface10;
};

Timeline_type* Timeline_typeof();
void Timeline__BypassOff_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackPause_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackPlayTo_fn(Timeline* __this, double* progress);
void Timeline__FuseTriggersIPlaybackResume_fn(Timeline* __this);
void Timeline__FuseTriggersIPlaybackStop_fn(Timeline* __this);
void Timeline__OnProgressChanged_fn(Timeline* __this);
void Timeline__OnRooted_fn(Timeline* __this);
void Timeline__pause_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__Pause_fn(Timeline* __this);
void Timeline__Play_fn(Timeline* __this, double* progress);
void Timeline__playTo_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__PlayTo1_fn(Timeline* __this, double* progress);
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval);
void Timeline__set_Progress_fn(Timeline* __this, double* value);
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__pulse_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__Pulse1_fn(Timeline* __this);
void Timeline__pulseBackward_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__PulseBackward1_fn(Timeline* __this);
void Timeline__pulseForward_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__PulseForward_fn(Timeline* __this);
void Timeline__resume_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__Resume_fn(Timeline* __this);
void Timeline__seek_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__stop_fn(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
void Timeline__Stop1_fn(Timeline* __this);
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval);
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value);
void Timeline__TimelinePlayTo_fn(Timeline* __this, double* progress);

struct Timeline : ::g::Fuse::Triggers::Trigger
{
    bool _hasInitialProgress;
    bool _hasTargetProgress;
    double _initialProgress;
    int _lastPlay;
    static ::g::Uno::UX::Selector _progressName_;
    static ::g::Uno::UX::Selector& _progressName() { return Timeline_typeof()->Init(), _progressName_; }
    uStrong<uObject*> _progressOrigin;
    int _state;
    double _targetProgress;
    uStrong<uDelegate*> ProgressChanged1;

    void BypassOff();
    void Pause();
    void Play(double progress);
    void PlayTo1(double progress);
    double Progress1();
    void Progress1(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Pulse1();
    void PulseBackward1();
    void PulseForward();
    void Resume();
    void Stop1();
    double TargetProgress();
    void TargetProgress(double value);
    void TimelinePlayTo(double progress);
    static void pause(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void playTo(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void pulse(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void pulseBackward(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void pulseForward(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void resume(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void seek(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
    static void stop(::g::Fuse::Scripting::Context* c, Timeline* n, uArray* args);
};
// }

}}} // ::g::Fuse::Triggers
