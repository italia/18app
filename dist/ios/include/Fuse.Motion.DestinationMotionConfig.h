// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/DestinationMotion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotionConfig;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public class DestinationMotionConfig :15
// {
uType* DestinationMotionConfig_typeof();
void DestinationMotionConfig__ctor__fn(DestinationMotionConfig* __this);
void DestinationMotionConfig__Create_fn(DestinationMotionConfig* __this, uType* __type, uObject** __retval);
void DestinationMotionConfig__get_Distance_fn(DestinationMotionConfig* __this, float* __retval);
void DestinationMotionConfig__set_Distance_fn(DestinationMotionConfig* __this, float* value);
void DestinationMotionConfig__get_Duration_fn(DestinationMotionConfig* __this, float* __retval);
void DestinationMotionConfig__set_Duration_fn(DestinationMotionConfig* __this, float* value);
void DestinationMotionConfig__get_DurationExp_fn(DestinationMotionConfig* __this, float* __retval);
void DestinationMotionConfig__set_DurationExp_fn(DestinationMotionConfig* __this, float* value);
void DestinationMotionConfig__get_Easing_fn(DestinationMotionConfig* __this, ::g::Fuse::Animations::Easing** __retval);
void DestinationMotionConfig__set_Easing_fn(DestinationMotionConfig* __this, ::g::Fuse::Animations::Easing* value);
void DestinationMotionConfig__get_Type_fn(DestinationMotionConfig* __this, int* __retval);
void DestinationMotionConfig__set_Type_fn(DestinationMotionConfig* __this, int* value);
void DestinationMotionConfig__get_Unit_fn(DestinationMotionConfig* __this, int* __retval);
void DestinationMotionConfig__set_Unit_fn(DestinationMotionConfig* __this, int* value);

struct DestinationMotionConfig : uObject
{
    float _distance;
    float _duration;
    float _durationExp;
    uStrong< ::g::Fuse::Animations::Easing*> _easing;
    bool _explicitType;
    bool _hasDistance;
    bool _hasDuration;
    int _type;
    int _unit;

    void ctor_();
    uObject* Create(uType* __type);
    float Distance();
    void Distance(float value);
    float Duration();
    void Duration(float value);
    float DurationExp();
    void DurationExp(float value);
    ::g::Fuse::Animations::Easing* Easing();
    void Easing(::g::Fuse::Animations::Easing* value);
    int Type();
    void Type(int value);
    int Unit();
    void Unit(int value);
};
// }

}}} // ::g::Fuse::Motion
