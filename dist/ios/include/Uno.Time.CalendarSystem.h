// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/CalendarSystem.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct Era;}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct WeekYearCalculator;}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator;}}}}
namespace g{namespace Uno{namespace Time{struct CalendarSystem;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class CalendarSystem :6
// {
uType* CalendarSystem_typeof();
void CalendarSystem__ctor__fn(CalendarSystem* __this, uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int* minDaysInFirstWeek);
void CalendarSystem__GetDayOfMonth_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void CalendarSystem__GetHourOfDay_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void CalendarSystem__GetInstant_fn(CalendarSystem* __this, int* year, int* monthOfYear, int* dayOfMonth, int* hourOfDay, int* minuteOfHour, ::g::Uno::Time::Instant* __retval);
void CalendarSystem__GetMinuteOfHour_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void CalendarSystem__GetMonthOfYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void CalendarSystem__GetSecondOfMinute_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void CalendarSystem__GetYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval);
void CalendarSystem__get_Iso_fn(CalendarSystem** __retval);
void CalendarSystem__New1_fn(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int* minDaysInFirstWeek, CalendarSystem** __retval);
void CalendarSystem__ToString_fn(CalendarSystem* __this, uString** __retval);

struct CalendarSystem : uObject
{
    uStrong<uArray*> _eras;
    static uSStrong<CalendarSystem*> _gregorianCalendarSystem_;
    static uSStrong<CalendarSystem*>& _gregorianCalendarSystem() { return _gregorianCalendarSystem_; }
    uStrong<uString*> _id;
    int64_t _maxTicks;
    int _maxYear;
    int64_t _minTicks;
    int _minYear;
    uStrong<uString*> _name;
    uStrong< ::g::Uno::Time::Calendars::WeekYearCalculator*> _weekYearCalculator;
    uStrong< ::g::Uno::Time::Calendars::YearMonthDayCalculator*> _yearMonthDayCalculator;

    void ctor_(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
    int GetDayOfMonth(::g::Uno::Time::Instant instant);
    int GetHourOfDay(::g::Uno::Time::Instant instant);
    ::g::Uno::Time::Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour);
    int GetMinuteOfHour(::g::Uno::Time::Instant instant);
    int GetMonthOfYear(::g::Uno::Time::Instant instant);
    int GetSecondOfMinute(::g::Uno::Time::Instant instant);
    int GetYear(::g::Uno::Time::Instant instant);
    static CalendarSystem* New1(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
    static CalendarSystem* Iso();
};
// }

}}} // ::g::Uno::Time
