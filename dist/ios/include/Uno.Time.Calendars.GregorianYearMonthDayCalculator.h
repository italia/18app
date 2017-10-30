// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Calendars/GregorianYearMonthDayCalculator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Time.Calendars.YearMonthDayCalculator.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct GregorianYearMonthDayCalculator;}}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// internal sealed class GregorianYearMonthDayCalculator :3
// {
::g::Uno::Time::Calendars::YearMonthDayCalculator_type* GregorianYearMonthDayCalculator_typeof();
void GregorianYearMonthDayCalculator__ctor_1_fn(GregorianYearMonthDayCalculator* __this);
void GregorianYearMonthDayCalculator__CalculateStartOfYearDays_fn(GregorianYearMonthDayCalculator* __this, int* year, int* __retval);
void GregorianYearMonthDayCalculator__GetDaysInMonth_fn(GregorianYearMonthDayCalculator* __this, int* year, int* month, int* __retval);
void GregorianYearMonthDayCalculator__GetInstant_fn(GregorianYearMonthDayCalculator* __this, int* year, int* monthOfYear, int* dayOfMonth, ::g::Uno::Time::Instant* __retval);
void GregorianYearMonthDayCalculator__GetMonthOfYear1_fn(GregorianYearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* year, int* __retval);
void GregorianYearMonthDayCalculator__GetStartOfYearInTicks_fn(GregorianYearMonthDayCalculator* __this, int* year, int64_t* __retval);
void GregorianYearMonthDayCalculator__GetTicksFromStartOfYearToStartOfMonth_fn(GregorianYearMonthDayCalculator* __this, int* year, int* month, int64_t* __retval);
void GregorianYearMonthDayCalculator__IsLeapYear_fn(GregorianYearMonthDayCalculator* __this, int* year, bool* __retval);
void GregorianYearMonthDayCalculator__New1_fn(GregorianYearMonthDayCalculator** __retval);

struct GregorianYearMonthDayCalculator : ::g::Uno::Time::Calendars::YearMonthDayCalculator
{
    static uSStrong<uArray*> MaxDaysPerMonth_;
    static uSStrong<uArray*>& MaxDaysPerMonth() { return GregorianYearMonthDayCalculator_typeof()->Init(), MaxDaysPerMonth_; }
    static uSStrong<uArray*> MaxTotalTicksByMonth_;
    static uSStrong<uArray*>& MaxTotalTicksByMonth() { return GregorianYearMonthDayCalculator_typeof()->Init(), MaxTotalTicksByMonth_; }
    static uSStrong<uArray*> MinDaysPerMonth_;
    static uSStrong<uArray*>& MinDaysPerMonth() { return GregorianYearMonthDayCalculator_typeof()->Init(), MinDaysPerMonth_; }
    static uSStrong<uArray*> MinTotalTicksByMonth_;
    static uSStrong<uArray*>& MinTotalTicksByMonth() { return GregorianYearMonthDayCalculator_typeof()->Init(), MinTotalTicksByMonth_; }
    static uSStrong<uArray*> MonthLengths_;
    static uSStrong<uArray*>& MonthLengths() { return GregorianYearMonthDayCalculator_typeof()->Init(), MonthLengths_; }
    static uSStrong<uArray*> MonthStartTicks_;
    static uSStrong<uArray*>& MonthStartTicks() { return GregorianYearMonthDayCalculator_typeof()->Init(), MonthStartTicks_; }
    static uSStrong<uArray*> YearStartDays_;
    static uSStrong<uArray*>& YearStartDays() { return GregorianYearMonthDayCalculator_typeof()->Init(), YearStartDays_; }
    static uSStrong<uArray*> YearStartTicks_;
    static uSStrong<uArray*>& YearStartTicks() { return GregorianYearMonthDayCalculator_typeof()->Init(), YearStartTicks_; }

    void ctor_1();
    static GregorianYearMonthDayCalculator* New1();
};
// }

}}}} // ::g::Uno::Time::Calendars
