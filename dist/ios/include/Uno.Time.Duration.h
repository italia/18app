// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Duration.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct Duration;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct Duration :3
// {
uStructType* Duration_typeof();
void Duration__ctor__fn(Duration* __this, int64_t* ticks1);
void Duration__Equals_fn(Duration* __this, uType* __type, uObject* obj, bool* __retval);
void Duration__Equals2_fn(Duration* __this, Duration* other, bool* __retval);
void Duration__GetHashCode_fn(Duration* __this, uType* __type, int* __retval);
void Duration__New1_fn(int64_t* ticks1, Duration* __retval);
void Duration__get_Ticks_fn(Duration* __this, int64_t* __retval);

struct Duration
{
    static Duration Zero_;
    static Duration& Zero() { return Duration_typeof()->Init(), Zero_; }
    static Duration Epsilon_;
    static Duration& Epsilon() { return Duration_typeof()->Init(), Epsilon_; }
    static Duration OneStandardWeek_;
    static Duration& OneStandardWeek() { return Duration_typeof()->Init(), OneStandardWeek_; }
    static Duration OneStandardDay_;
    static Duration& OneStandardDay() { return Duration_typeof()->Init(), OneStandardDay_; }
    static Duration OneHour_;
    static Duration& OneHour() { return Duration_typeof()->Init(), OneHour_; }
    static Duration OneMinute_;
    static Duration& OneMinute() { return Duration_typeof()->Init(), OneMinute_; }
    static Duration OneSecond_;
    static Duration& OneSecond() { return Duration_typeof()->Init(), OneSecond_; }
    static Duration OneMillisecond_;
    static Duration& OneMillisecond() { return Duration_typeof()->Init(), OneMillisecond_; }
    int64_t ticks;

    void ctor_(int64_t ticks1);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Duration__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(Duration other);
    int GetHashCode(uType* __type) { int __retval; return Duration__GetHashCode_fn(this, __type, &__retval), __retval; }
    int64_t Ticks();
};

Duration Duration__New1(int64_t ticks1);
// }

}}} // ::g::Uno::Time
