// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Player.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct PlayerPart;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class PlayerPart :14
// {
uType* PlayerPart_typeof();
void PlayerPart__ctor__fn(PlayerPart* __this, double* currentProgress);
void PlayerPart__AlterDuration_fn(PlayerPart* __this, double* t, double* timeMult);
void PlayerPart__MarkSource_fn(PlayerPart* __this, bool* isAnimating);
void PlayerPart__New1_fn(double* currentProgress, PlayerPart** __retval);
void PlayerPart__PlayToEnd_fn(PlayerPart* __this);
void PlayerPart__PlayToProgress_fn(PlayerPart* __this, double* progress);
void PlayerPart__PlayToStart_fn(PlayerPart* __this);
void PlayerPart__get_Progress_fn(PlayerPart* __this, double* __retval);
void PlayerPart__SeekProgress_fn(PlayerPart* __this, double* p);
void PlayerPart__Step_fn(PlayerPart* __this, bool* __retval);
void PlayerPart__get_TimeMultiplier_fn(PlayerPart* __this, double* __retval);
void PlayerPart__WrapStep_fn(PlayerPart* __this, bool* __retval);

struct PlayerPart : uObject
{
    double _stepTime;
    double _timeMultiplier;
    bool Animate;
    double Current;
    double Duration;
    bool IsProgress;
    double Source;
    double SourceTime;
    double Target;

    void ctor_(double currentProgress);
    void AlterDuration(double t, double timeMult);
    void MarkSource(bool isAnimating);
    void PlayToEnd();
    void PlayToProgress(double progress);
    void PlayToStart();
    double Progress();
    void SeekProgress(double p);
    bool Step();
    double TimeMultiplier();
    bool WrapStep();
    static PlayerPart* New1(double currentProgress);
};
// }

}}} // ::g::Fuse::Animations
