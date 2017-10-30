// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Calendars/WeekYearCalculator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct WeekYearCalculator;}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// internal sealed class WeekYearCalculator :3
// {
uType* WeekYearCalculator_typeof();
void WeekYearCalculator__ctor__fn(WeekYearCalculator* __this, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int* minDaysInFirstWeek1);
void WeekYearCalculator__New1_fn(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int* minDaysInFirstWeek1, WeekYearCalculator** __retval);

struct WeekYearCalculator : uObject
{
    int minDaysInFirstWeek;
    uStrong< ::g::Uno::Time::Calendars::YearMonthDayCalculator*> yearMonthDayCalculator;

    void ctor_(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int minDaysInFirstWeek1);
    static WeekYearCalculator* New1(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int minDaysInFirstWeek1);
};
// }

}}}} // ::g::Uno::Time::Calendars
