// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Player.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IUpdateListener.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct Player;}}}
namespace g{namespace Fuse{namespace Animations{struct PlayerPart;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class Player :174
// {
struct Player_type : uType
{
    ::g::Fuse::IUpdateListener interface0;
};

Player_type* Player_typeof();
void Player__ctor__fn(Player* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode);
void Player__get_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation** __retval);
void Player__set_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation* value);
void Player__get_AnimatorsDuration_fn(Player* __this, double* __retval);
void Player__CheckUpdate_fn(Player* __this, bool* interval);
void Player__Disable_fn(Player* __this);
void Player__Done_fn(Player* __this);
void Player__FadeIn_fn(Player* __this, double* time);
void Player__FadeOut_fn(Player* __this, double* time);
void Player__FuseIUpdateListenerUpdate_fn(Player* __this);
void Player__get_IsStable_fn(Player* __this, bool* __retval);
void Player__get_IsSyncState_fn(Player* __this, bool* __retval);
void Player__get_Mode_fn(Player* __this, int* __retval);
void Player__set_Mode_fn(Player* __this, int* value);
void Player__New1_fn(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode, Player** __retval);
void Player__PlayToEnd_fn(Player* __this);
void Player__PlayToProgress_fn(Player* __this, double* progress);
void Player__PlayToStart_fn(Player* __this);
void Player__get_Progress_fn(Player* __this, double* __retval);
void Player__get_RemainTime_fn(Player* __this, double* __retval);
void Player__SeekProgress_fn(Player* __this, double* progress, bool* triggerUpdate);
void Player__Start_fn(Player* __this);
void Player__get_States_fn(Player* __this, uArray** __retval);
void Player__Stop_fn(Player* __this);
void Player__get_Strength_fn(Player* __this, double* __retval);
void Player__set_Strength_fn(Player* __this, double* value);
void Player__TimeChanged_fn(Player* __this);
void Player__UpdateStates_fn(Player* __this, bool* isInterval, bool* __retval);
void Player__get_Variant_fn(Player* __this, int* __retval);
void Player__set_Variant_fn(Player* __this, int* value);
void Player__get_Visual_fn(Player* __this, ::g::Fuse::Visual** __retval);
void Player__set_Visual_fn(Player* __this, ::g::Fuse::Visual* value);

struct Player : uObject
{
    bool _allStable;
    bool _isDone;
    bool _isStarted;
    uStrong< ::g::Fuse::Animations::PlayerPart*> _progress;
    int _seekDirection;
    uStrong<uArray*> _states;
    uStrong< ::g::Fuse::Animations::PlayerPart*> _strength;
    uStrong<uObject*> Feedback;
    uStrong< ::g::Fuse::Animations::TriggerAnimation*> _Animation;
    int _Mode;
    int _Variant;
    uStrong< ::g::Fuse::Visual*> _Visual;

    void ctor_(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode);
    ::g::Fuse::Animations::TriggerAnimation* Animation();
    void Animation(::g::Fuse::Animations::TriggerAnimation* value);
    double AnimatorsDuration();
    void CheckUpdate(bool interval);
    void Disable();
    void Done();
    void FadeIn(double time);
    void FadeOut(double time);
    bool IsStable();
    bool IsSyncState();
    int Mode();
    void Mode(int value);
    void PlayToEnd();
    void PlayToProgress(double progress);
    void PlayToStart();
    double Progress();
    double RemainTime();
    void SeekProgress(double progress, bool triggerUpdate);
    void Start();
    uArray* States();
    void Stop();
    double Strength();
    void Strength(double value);
    void TimeChanged();
    bool UpdateStates(bool isInterval);
    int Variant();
    void Variant(int value);
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static Player* New1(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode);
};
// }

}}} // ::g::Fuse::Animations
