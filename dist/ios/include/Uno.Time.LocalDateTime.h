// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/LocalDateTime.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.Instant.h>
namespace g{namespace Uno{namespace Time{struct CalendarSystem;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class LocalDateTime :7
// {
uType* LocalDateTime_typeof();
void LocalDateTime__ctor_8_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant);
void LocalDateTime__ctor_9_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__get_Calendar_fn(LocalDateTime* __this, ::g::Uno::Time::CalendarSystem** __retval);
void LocalDateTime__get_Day_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__Equals_fn(LocalDateTime* __this, uObject* obj, bool* __retval);
void LocalDateTime__Equals2_fn(LocalDateTime* __this, LocalDateTime* other, bool* __retval);
void LocalDateTime__GetHashCode_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__get_Hour_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__get_Instant_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* __retval);
void LocalDateTime__get_Minute_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__get_Month_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__New9_fn(::g::Uno::Time::Instant* instant, LocalDateTime** __retval);
void LocalDateTime__New10_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime** __retval);
void LocalDateTime__op_Equality_fn(LocalDateTime* left, LocalDateTime* right, bool* __retval);
void LocalDateTime__get_Second_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__ToString_fn(LocalDateTime* __this, uString** __retval);
void LocalDateTime__get_Year_fn(LocalDateTime* __this, int* __retval);

struct LocalDateTime : uObject
{
    uStrong< ::g::Uno::Time::CalendarSystem*> _calendar;
    ::g::Uno::Time::Instant _instant;

    void ctor_8(::g::Uno::Time::Instant instant);
    void ctor_9(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar);
    ::g::Uno::Time::CalendarSystem* Calendar();
    int Day();
    bool Equals2(LocalDateTime* other);
    int Hour();
    ::g::Uno::Time::Instant Instant();
    int Minute();
    int Month();
    int Second();
    int Year();
    static LocalDateTime* New9(::g::Uno::Time::Instant instant);
    static LocalDateTime* New10(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar);
    static bool op_Equality(LocalDateTime* left, LocalDateTime* right);
};
// }

}}} // ::g::Uno::Time
