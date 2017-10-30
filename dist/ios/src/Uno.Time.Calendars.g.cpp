// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.String.h>
#include <Uno.Time.Calendars.Era.h>
#include <Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <Uno.Time.Calendars.TimeOfDayCalculator.h>
#include <Uno.Time.Calendars.WeekYearCalculator.h>
#include <Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <Uno.Time.Converter.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.Preconditions.h>
static uString* STRINGS[11];
static uType* TYPES[4];

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Calendars/Era.uno
// -----------------------------------------------------------------------------

// public sealed class Era :3
// {
// static generated Era() :3
static void Era__cctor__fn(uType* __type)
{
    Era::Common_ = Era::New1(::STRINGS[0/*"CE"*/]);
    Era::BeforeCommon_ = Era::New1(::STRINGS[1/*"BCE"*/]);
    Era::AnnoMartyrum_ = Era::New1(::STRINGS[2/*"AM"*/]);
    Era::AnnoHegirae_ = Era::New1(::STRINGS[3/*"EH"*/]);
    Era::AnnoMundi_ = Era::New1(::STRINGS[2/*"AM"*/]);
    Era::AnnoPersico_ = Era::New1(::STRINGS[4/*"AP"*/]);
}

static void Era_build(uType* type)
{
    ::STRINGS[0] = uString::Const("CE");
    ::STRINGS[1] = uString::Const("BCE");
    ::STRINGS[2] = uString::Const("AM");
    ::STRINGS[3] = uString::Const("EH");
    ::STRINGS[4] = uString::Const("AP");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Era, _name), 0,
        type, (uintptr_t)&Era::AnnoHegirae_, uFieldFlagsStatic,
        type, (uintptr_t)&Era::AnnoMartyrum_, uFieldFlagsStatic,
        type, (uintptr_t)&Era::AnnoMundi_, uFieldFlagsStatic,
        type, (uintptr_t)&Era::AnnoPersico_, uFieldFlagsStatic,
        type, (uintptr_t)&Era::BeforeCommon_, uFieldFlagsStatic,
        type, (uintptr_t)&Era::Common_, uFieldFlagsStatic);
}

uType* Era_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Era);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Calendars.Era", options);
    type->fp_build_ = Era_build;
    type->fp_cctor_ = Era__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Era__ToString_fn;
    return type;
}

// internal Era(string name) :19
void Era__ctor__fn(Era* __this, uString* name)
{
    __this->ctor_(name);
}

// internal Era New(string name) :19
void Era__New1_fn(uString* name, Era** __retval)
{
    *__retval = Era::New1(name);
}

// public override sealed string ToString() :26
void Era__ToString_fn(Era* __this, uString** __retval)
{
    return *__retval = __this->_name, void();
}

uSStrong<Era*> Era::AnnoHegirae_;
uSStrong<Era*> Era::AnnoMartyrum_;
uSStrong<Era*> Era::AnnoMundi_;
uSStrong<Era*> Era::AnnoPersico_;
uSStrong<Era*> Era::BeforeCommon_;
uSStrong<Era*> Era::Common_;

// internal Era(string name) [instance] :19
void Era::ctor_(uString* name)
{
    _name = name;
}

// internal Era New(string name) [static] :19
Era* Era::New1(uString* name)
{
    Era* obj1 = (Era*)uNew(Era_typeof());
    obj1->ctor_(name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Calendars/GregorianYearMonthDayCalculator.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class GregorianYearMonthDayCalculator :3
// {
// static GregorianYearMonthDayCalculator() :24
static void GregorianYearMonthDayCalculator__cctor__fn(uType* __type)
{
    GregorianYearMonthDayCalculator::MonthStartTicks_ = uArray::New(::TYPES[0/*long[]*/], 2413);
    GregorianYearMonthDayCalculator::MonthLengths_ = uArray::New(::TYPES[1/*int[]*/], 2413);
    GregorianYearMonthDayCalculator::YearStartTicks_ = uArray::New(::TYPES[0/*long[]*/], 201);
    GregorianYearMonthDayCalculator::YearStartDays_ = uArray::New(::TYPES[1/*int[]*/], 201);
    GregorianYearMonthDayCalculator::MinDaysPerMonth_ = uArray::Init<int>(::TYPES[1/*int[]*/], 12, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31);
    GregorianYearMonthDayCalculator::MaxDaysPerMonth_ = uArray::Init<int>(::TYPES[1/*int[]*/], 12, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31);
    GregorianYearMonthDayCalculator::MinTotalTicksByMonth_ = uArray::New(::TYPES[0/*long[]*/], 12);
    GregorianYearMonthDayCalculator::MaxTotalTicksByMonth_ = uArray::New(::TYPES[0/*long[]*/], 12);
    int64_t minSum = 0LL;
    int64_t maxSum = 0LL;

    for (int i = 0; i < 11; i++)
    {
        minSum = minSum + ((int64_t)uPtr(GregorianYearMonthDayCalculator::MinDaysPerMonth_)->Item<int>(i) * 864000000000LL);
        maxSum = maxSum + ((int64_t)uPtr(GregorianYearMonthDayCalculator::MaxDaysPerMonth_)->Item<int>(i) * 864000000000LL);
        uPtr(GregorianYearMonthDayCalculator::MinTotalTicksByMonth_)->Item<int64_t>(i + 1) = minSum;
        uPtr(GregorianYearMonthDayCalculator::MaxTotalTicksByMonth_)->Item<int64_t>(i + 1) = maxSum;
    }

    GregorianYearMonthDayCalculator* instance = GregorianYearMonthDayCalculator::New1();

    for (int year = 1900; year <= 2100; year++)
    {
        uPtr(GregorianYearMonthDayCalculator::YearStartDays_)->Item<int>(year - 1900) = uPtr(instance)->CalculateStartOfYearDays(year);
        uPtr(GregorianYearMonthDayCalculator::YearStartTicks_)->Item<int64_t>(year - 1900) = (int64_t)uPtr(GregorianYearMonthDayCalculator::YearStartDays_)->Item<int>(year - 1900) * 864000000000LL;

        for (int month = 1; month <= 12; month++)
        {
            int yearMonthIndex = ((year - 1900) * 12) + month;
            uPtr(GregorianYearMonthDayCalculator::MonthStartTicks_)->Item<int64_t>(yearMonthIndex) = uPtr(instance)->GetYearMonthTicks(year, month);
            uPtr(GregorianYearMonthDayCalculator::MonthLengths_)->Item<int>(yearMonthIndex) = instance->GetDaysInMonth(year, month);
        }
    }
}

static void GregorianYearMonthDayCalculator_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Long_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Time::Calendars::Era_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Time::Calendars::Era_typeof());
    type->SetFields(6,
        ::TYPES[1/*int[]*/], (uintptr_t)&GregorianYearMonthDayCalculator::MaxDaysPerMonth_, uFieldFlagsStatic,
        ::TYPES[0/*long[]*/], (uintptr_t)&GregorianYearMonthDayCalculator::MaxTotalTicksByMonth_, uFieldFlagsStatic,
        ::TYPES[1/*int[]*/], (uintptr_t)&GregorianYearMonthDayCalculator::MinDaysPerMonth_, uFieldFlagsStatic,
        ::TYPES[0/*long[]*/], (uintptr_t)&GregorianYearMonthDayCalculator::MinTotalTicksByMonth_, uFieldFlagsStatic,
        ::TYPES[1/*int[]*/], (uintptr_t)&GregorianYearMonthDayCalculator::MonthLengths_, uFieldFlagsStatic,
        ::TYPES[0/*long[]*/], (uintptr_t)&GregorianYearMonthDayCalculator::MonthStartTicks_, uFieldFlagsStatic,
        ::TYPES[1/*int[]*/], (uintptr_t)&GregorianYearMonthDayCalculator::YearStartDays_, uFieldFlagsStatic,
        ::TYPES[0/*long[]*/], (uintptr_t)&GregorianYearMonthDayCalculator::YearStartTicks_, uFieldFlagsStatic);
}

::g::Uno::Time::Calendars::YearMonthDayCalculator_type* GregorianYearMonthDayCalculator_typeof()
{
    static uSStrong< ::g::Uno::Time::Calendars::YearMonthDayCalculator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof();
    options.FieldCount = 14;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GregorianYearMonthDayCalculator);
    options.TypeSize = sizeof(::g::Uno::Time::Calendars::YearMonthDayCalculator_type);
    type = (::g::Uno::Time::Calendars::YearMonthDayCalculator_type*)uClassType::New("Uno.Time.Calendars.GregorianYearMonthDayCalculator", options);
    type->fp_build_ = GregorianYearMonthDayCalculator_build;
    type->fp_ctor_ = (void*)GregorianYearMonthDayCalculator__New1_fn;
    type->fp_cctor_ = GregorianYearMonthDayCalculator__cctor__fn;
    type->fp_CalculateStartOfYearDays = (void(*)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, int*))GregorianYearMonthDayCalculator__CalculateStartOfYearDays_fn;
    type->fp_GetDaysInMonth = (void(*)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, int*, int*))GregorianYearMonthDayCalculator__GetDaysInMonth_fn;
    type->fp_GetInstant = (void(*)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, int*, int*, ::g::Uno::Time::Instant*))GregorianYearMonthDayCalculator__GetInstant_fn;
    type->fp_GetMonthOfYear1 = (void(*)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, ::g::Uno::Time::Instant*, int*, int*))GregorianYearMonthDayCalculator__GetMonthOfYear1_fn;
    type->fp_GetStartOfYearInTicks = (void(*)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, int64_t*))GregorianYearMonthDayCalculator__GetStartOfYearInTicks_fn;
    type->fp_GetTicksFromStartOfYearToStartOfMonth = (void(*)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, int*, int64_t*))GregorianYearMonthDayCalculator__GetTicksFromStartOfYearToStartOfMonth_fn;
    type->fp_IsLeapYear = (void(*)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int*, bool*))GregorianYearMonthDayCalculator__IsLeapYear_fn;
    return type;
}

// internal GregorianYearMonthDayCalculator() :53
void GregorianYearMonthDayCalculator__ctor_1_fn(GregorianYearMonthDayCalculator* __this)
{
    __this->ctor_1();
}

// protected override sealed int CalculateStartOfYearDays(int year) :80
void GregorianYearMonthDayCalculator__CalculateStartOfYearDays_fn(GregorianYearMonthDayCalculator* __this, int* year, int* __retval)
{
    int year_ = *year;
    int leapYears = year_ / 100;

    if (year_ < 0)
        leapYears = ((((year_ + 3) >> 2) - leapYears) + ((leapYears + 3) >> 2)) - 1;
    else
    {
        leapYears = ((year_ >> 2) - leapYears) + (leapYears >> 2);

        if (__this->IsLeapYear(year_))
            leapYears--;
    }

    return *__retval = (year_ * 365) + (leapYears - 719527), void();
}

// internal override sealed int GetDaysInMonth(int year, int month) :144
void GregorianYearMonthDayCalculator__GetDaysInMonth_fn(GregorianYearMonthDayCalculator* __this, int* year, int* month, int* __retval)
{
    int year_ = *year;
    int month_ = *month;
    return *__retval = __this->IsLeapYear(year_) ? uPtr(GregorianYearMonthDayCalculator::MaxDaysPerMonth_)->Item<int>(month_ - 1) : uPtr(GregorianYearMonthDayCalculator::MinDaysPerMonth_)->Item<int>(month_ - 1), void();
}

// internal override sealed Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth) :68
void GregorianYearMonthDayCalculator__GetInstant_fn(GregorianYearMonthDayCalculator* __this, int* year, int* monthOfYear, int* dayOfMonth, ::g::Uno::Time::Instant* __retval)
{
    int year_ = *year;
    int monthOfYear_ = *monthOfYear;
    int dayOfMonth_ = *dayOfMonth;
    ::g::Uno::Time::Instant ret2;
    int yearMonthIndex = ((year_ - 1900) * 12) + monthOfYear_;

    if ((((((year_ < 1900) || (year_ > 2099)) || (monthOfYear_ < 1)) || (monthOfYear_ > 12)) || (dayOfMonth_ < 1)) || (dayOfMonth_ > uPtr(GregorianYearMonthDayCalculator::MonthLengths_)->Item<int>(yearMonthIndex)))
        return *__retval = (::g::Uno::Time::Calendars::YearMonthDayCalculator__GetInstant_fn(__this, uCRef<int>(year_), uCRef<int>(monthOfYear_), uCRef<int>(dayOfMonth_), &ret2), ret2), void();

    return *__retval = ::g::Uno::Time::Instant__New1(uPtr(GregorianYearMonthDayCalculator::MonthStartTicks_)->Item<int64_t>(yearMonthIndex) + ((int64_t)(dayOfMonth_ - 1) * 864000000000LL)), void();
}

// protected override sealed int GetMonthOfYear(Uno.Time.Instant instant, int year) :120
void GregorianYearMonthDayCalculator__GetMonthOfYear1_fn(GregorianYearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* year, int* __retval)
{
    ::g::Uno::Time::Instant instant_ = *instant;
    int year_ = *year;
    int i = (int)(((instant_.Ticks() - __this->GetStartOfYearInTicks(year_)) >> 10) / 10000LL);
    return *__retval = __this->IsLeapYear(year_) ? (i < 15356250) ? (i < 7678125) ? (i < 2615625) ? 1 : (i < 5062500) ? 2 : 3 : (i < 10209375) ? 4 : (i < 12825000) ? 5 : 6 : (i < 23118750) ? (i < 17971875) ? 7 : (i < 20587500) ? 8 : 9 : (i < 25734375) ? 10 : (i < 28265625) ? 11 : 12 : (i < 15271875) ? (i < 7593750) ? (i < 2615625) ? 1 : (i < 4978125) ? 2 : 3 : (i < 10125000) ? 4 : (i < 12740625) ? 5 : 6 : (i < 23034375) ? (i < 17887500) ? 7 : (i < 20503125) ? 8 : 9 : (i < 25650000) ? 10 : (i < 28181250) ? 11 : 12, void();
}

// internal override sealed long GetStartOfYearInTicks(int year) :59
void GregorianYearMonthDayCalculator__GetStartOfYearInTicks_fn(GregorianYearMonthDayCalculator* __this, int* year, int64_t* __retval)
{
    int year_ = *year;
    int64_t ret3;

    if ((year_ < 1900) || (year_ > 2100))
        return *__retval = (::g::Uno::Time::Calendars::YearMonthDayCalculator__GetStartOfYearInTicks_fn(__this, uCRef<int>(year_), &ret3), ret3), void();

    return *__retval = uPtr(GregorianYearMonthDayCalculator::YearStartTicks_)->Item<int64_t>(year_ - 1900), void();
}

// protected override sealed long GetTicksFromStartOfYearToStartOfMonth(int year, int month) :149
void GregorianYearMonthDayCalculator__GetTicksFromStartOfYearToStartOfMonth_fn(GregorianYearMonthDayCalculator* __this, int* year, int* month, int64_t* __retval)
{
    int year_ = *year;
    int month_ = *month;
    return *__retval = __this->IsLeapYear(year_) ? uPtr(GregorianYearMonthDayCalculator::MaxTotalTicksByMonth_)->Item<int64_t>(month_ - 1) : uPtr(GregorianYearMonthDayCalculator::MinTotalTicksByMonth_)->Item<int64_t>(month_ - 1), void();
}

// internal override sealed bool IsLeapYear(int year) :105
void GregorianYearMonthDayCalculator__IsLeapYear_fn(GregorianYearMonthDayCalculator* __this, int* year, bool* __retval)
{
    int year_ = *year;
    return *__retval = ((year_ & 3) == 0) && (((year_ % 100) != 0) || ((year_ % 400) == 0)), void();
}

// internal GregorianYearMonthDayCalculator New() :53
void GregorianYearMonthDayCalculator__New1_fn(GregorianYearMonthDayCalculator** __retval)
{
    *__retval = GregorianYearMonthDayCalculator::New1();
}

uSStrong<uArray*> GregorianYearMonthDayCalculator::MaxDaysPerMonth_;
uSStrong<uArray*> GregorianYearMonthDayCalculator::MaxTotalTicksByMonth_;
uSStrong<uArray*> GregorianYearMonthDayCalculator::MinDaysPerMonth_;
uSStrong<uArray*> GregorianYearMonthDayCalculator::MinTotalTicksByMonth_;
uSStrong<uArray*> GregorianYearMonthDayCalculator::MonthLengths_;
uSStrong<uArray*> GregorianYearMonthDayCalculator::MonthStartTicks_;
uSStrong<uArray*> GregorianYearMonthDayCalculator::YearStartDays_;
uSStrong<uArray*> GregorianYearMonthDayCalculator::YearStartTicks_;

// internal GregorianYearMonthDayCalculator() [instance] :53
void GregorianYearMonthDayCalculator::ctor_1()
{
    ctor_(-27255, 31195, 12, 315569520000000LL, -621355968000000000LL, uArray::Init< ::g::Uno::Time::Calendars::Era*>(::TYPES[2/*Uno.Time.Calendars.Era[]*/], 2, (::g::Uno::Time::Calendars::Era*)::g::Uno::Time::Calendars::Era::BeforeCommon_, (::g::Uno::Time::Calendars::Era*)::g::Uno::Time::Calendars::Era::Common_));
}

// internal GregorianYearMonthDayCalculator New() [static] :53
GregorianYearMonthDayCalculator* GregorianYearMonthDayCalculator::New1()
{
    GregorianYearMonthDayCalculator* obj1 = (GregorianYearMonthDayCalculator*)uNew(GregorianYearMonthDayCalculator_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Calendars/TimeOfDayCalculator.uno
// ---------------------------------------------------------------------------------------------

// internal static class TimeOfDayCalculator :3
// {
static void TimeOfDayCalculator_build(uType* type)
{
    ::STRINGS[5] = uString::Const("hourOfDay");
    ::STRINGS[6] = uString::Const("minuteOfHour");
}

uClassType* TimeOfDayCalculator_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Calendars.TimeOfDayCalculator", options);
    type->fp_build_ = TimeOfDayCalculator_build;
    return type;
}

// internal static int GetHourOfDay(Uno.Time.Instant instant) :92
void TimeOfDayCalculator__GetHourOfDay_fn(::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = TimeOfDayCalculator::GetHourOfDay(*instant);
}

// internal static int GetHourOfDayFromTickOfDay(long tickOfDay) :108
void TimeOfDayCalculator__GetHourOfDayFromTickOfDay_fn(int64_t* tickOfDay, int* __retval)
{
    *__retval = TimeOfDayCalculator::GetHourOfDayFromTickOfDay(*tickOfDay);
}

// internal static int GetMinuteOfHour(Uno.Time.Instant instant) :82
void TimeOfDayCalculator__GetMinuteOfHour_fn(::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = TimeOfDayCalculator::GetMinuteOfHour(*instant);
}

// internal static int GetMinuteOfHourFromTickOfDay(long tickOfDay) :113
void TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay_fn(int64_t* tickOfDay, int* __retval)
{
    *__retval = TimeOfDayCalculator::GetMinuteOfHourFromTickOfDay(*tickOfDay);
}

// internal static int GetSecondOfMinute(Uno.Time.Instant instant) :72
void TimeOfDayCalculator__GetSecondOfMinute_fn(::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = TimeOfDayCalculator::GetSecondOfMinute(*instant);
}

// internal static int GetSecondOfMinuteFromTickOfDay(long tickOfDay) :119
void TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay_fn(int64_t* tickOfDay, int* __retval)
{
    *__retval = TimeOfDayCalculator::GetSecondOfMinuteFromTickOfDay(*tickOfDay);
}

// internal static long GetTickOfDay(Uno.Time.Instant instant) :38
void TimeOfDayCalculator__GetTickOfDay_fn(::g::Uno::Time::Instant* instant, int64_t* __retval)
{
    *__retval = TimeOfDayCalculator::GetTickOfDay(*instant);
}

// internal static long GetTicks(int hourOfDay, int minuteOfHour) :5
void TimeOfDayCalculator__GetTicks_fn(int* hourOfDay, int* minuteOfHour, int64_t* __retval)
{
    *__retval = TimeOfDayCalculator::GetTicks(*hourOfDay, *minuteOfHour);
}

// internal static int GetHourOfDay(Uno.Time.Instant instant) [static] :92
int TimeOfDayCalculator::GetHourOfDay(::g::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator::GetHourOfDayFromTickOfDay(TimeOfDayCalculator::GetTickOfDay(instant));
}

// internal static int GetHourOfDayFromTickOfDay(long tickOfDay) [static] :108
int TimeOfDayCalculator::GetHourOfDayFromTickOfDay(int64_t tickOfDay)
{
    return (int)(tickOfDay >> 11) / 17578125;
}

// internal static int GetMinuteOfHour(Uno.Time.Instant instant) [static] :82
int TimeOfDayCalculator::GetMinuteOfHour(::g::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator::GetMinuteOfHourFromTickOfDay(TimeOfDayCalculator::GetTickOfDay(instant));
}

// internal static int GetMinuteOfHourFromTickOfDay(long tickOfDay) [static] :113
int TimeOfDayCalculator::GetMinuteOfHourFromTickOfDay(int64_t tickOfDay)
{
    int minuteOfDay = (int)(tickOfDay / 600000000LL);
    return minuteOfDay % 60;
}

// internal static int GetSecondOfMinute(Uno.Time.Instant instant) [static] :72
int TimeOfDayCalculator::GetSecondOfMinute(::g::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator::GetSecondOfMinuteFromTickOfDay(TimeOfDayCalculator::GetTickOfDay(instant));
}

// internal static int GetSecondOfMinuteFromTickOfDay(long tickOfDay) [static] :119
int TimeOfDayCalculator::GetSecondOfMinuteFromTickOfDay(int64_t tickOfDay)
{
    int secondOfDay = (int)(tickOfDay / 10000000LL);
    return secondOfDay % 60;
}

// internal static long GetTickOfDay(Uno.Time.Instant instant) [static] :38
int64_t TimeOfDayCalculator::GetTickOfDay(::g::Uno::Time::Instant instant)
{
    int64_t ticks = instant.Ticks();

    if (ticks >= 0LL)
    {
        int days = ::g::Uno::Time::Converter::TicksToDays(instant.Ticks());
        return ticks - (((int64_t)days * 52734375LL) << 14);
    }
    else
        return 863999999999LL + ((ticks + 1LL) % 864000000000LL);
}

// internal static long GetTicks(int hourOfDay, int minuteOfHour) [static] :5
int64_t TimeOfDayCalculator::GetTicks(int hourOfDay, int minuteOfHour)
{
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[5/*"hourOfDay"*/], hourOfDay, 0, 23);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[6/*"minuteOfHour"*/], minuteOfHour, 0, 59);
    return ((int64_t)hourOfDay * 36000000000LL) + ((int64_t)minuteOfHour * 600000000LL);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Calendars/WeekYearCalculator.uno
// --------------------------------------------------------------------------------------------

// internal sealed class WeekYearCalculator :3
// {
static void WeekYearCalculator_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(WeekYearCalculator, minDaysInFirstWeek), 0,
        ::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof(), offsetof(WeekYearCalculator, yearMonthDayCalculator), 0);
}

uType* WeekYearCalculator_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(WeekYearCalculator);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Calendars.WeekYearCalculator", options);
    type->fp_build_ = WeekYearCalculator_build;
    return type;
}

// internal WeekYearCalculator(Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) :8
void WeekYearCalculator__ctor__fn(WeekYearCalculator* __this, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int* minDaysInFirstWeek1)
{
    __this->ctor_(yearMonthDayCalculator1, *minDaysInFirstWeek1);
}

// internal WeekYearCalculator New(Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) :8
void WeekYearCalculator__New1_fn(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int* minDaysInFirstWeek1, WeekYearCalculator** __retval)
{
    *__retval = WeekYearCalculator::New1(yearMonthDayCalculator1, *minDaysInFirstWeek1);
}

// internal WeekYearCalculator(Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) [instance] :8
void WeekYearCalculator::ctor_(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int minDaysInFirstWeek1)
{
    yearMonthDayCalculator = yearMonthDayCalculator1;
    minDaysInFirstWeek = minDaysInFirstWeek1;
}

// internal WeekYearCalculator New(Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) [static] :8
WeekYearCalculator* WeekYearCalculator::New1(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int minDaysInFirstWeek1)
{
    WeekYearCalculator* obj1 = (WeekYearCalculator*)uNew(WeekYearCalculator_typeof());
    obj1->ctor_(yearMonthDayCalculator1, minDaysInFirstWeek1);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Calendars/YearMonthDayCalculator.uno
// ------------------------------------------------------------------------------------------------

// internal abstract class YearMonthDayCalculator :3
// {
static void YearMonthDayCalculator_build(uType* type)
{
    ::STRINGS[7] = uString::Const("eras");
    ::STRINGS[8] = uString::Const("year");
    ::STRINGS[9] = uString::Const("monthOfYear");
    ::STRINGS[10] = uString::Const("dayOfMonth");
    ::TYPES[3] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(0/*CheckNotNull<Uno.Time.Calendars.Era[]>*/, ::g::Uno::Time::Calendars::Era_typeof()->Array(), NULL);
    type->SetFields(0,
        ::g::Uno::Long_typeof(), offsetof(YearMonthDayCalculator, _averageTicksPerYear), 0,
        ::g::Uno::Time::Calendars::Era_typeof()->Array(), offsetof(YearMonthDayCalculator, _eras), 0,
        ::g::Uno::Int_typeof(), offsetof(YearMonthDayCalculator, _maxYear), 0,
        ::g::Uno::Int_typeof(), offsetof(YearMonthDayCalculator, _minYear), 0,
        ::g::Uno::Int_typeof(), offsetof(YearMonthDayCalculator, _monthsInYear), 0,
        ::g::Uno::Long_typeof(), offsetof(YearMonthDayCalculator, _ticksAtStartOfYear1), 0);
}

YearMonthDayCalculator_type* YearMonthDayCalculator_typeof()
{
    static uSStrong<YearMonthDayCalculator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(YearMonthDayCalculator);
    options.TypeSize = sizeof(YearMonthDayCalculator_type);
    type = (YearMonthDayCalculator_type*)uClassType::New("Uno.Time.Calendars.YearMonthDayCalculator", options);
    type->fp_build_ = YearMonthDayCalculator_build;
    type->fp_GetInstant = YearMonthDayCalculator__GetInstant_fn;
    type->fp_GetStartOfYearInTicks = YearMonthDayCalculator__GetStartOfYearInTicks_fn;
    return type;
}

// protected YearMonthDayCalculator(int minYear, int maxYear, int monthsInYear, long averageTicksPerYear, long ticksAtStartOfYear1, Uno.Time.Calendars.Era[] eras) :21
void YearMonthDayCalculator__ctor__fn(YearMonthDayCalculator* __this, int* minYear, int* maxYear, int* monthsInYear, int64_t* averageTicksPerYear, int64_t* ticksAtStartOfYear1, uArray* eras)
{
    __this->ctor_(*minYear, *maxYear, *monthsInYear, *averageTicksPerYear, *ticksAtStartOfYear1, eras);
}

// internal Uno.Time.Calendars.Era[] get_Eras() :19
void YearMonthDayCalculator__get_Eras_fn(YearMonthDayCalculator* __this, uArray** __retval)
{
    *__retval = __this->Eras();
}

// internal int GetDayOfMonth(Uno.Time.Instant instant) :128
void YearMonthDayCalculator__GetDayOfMonth_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetDayOfMonth(*instant);
}

// protected int GetDayOfMonth(Uno.Time.Instant instant, int year, int month) :135
void YearMonthDayCalculator__GetDayOfMonth1_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* year, int* month, int* __retval)
{
    *__retval = __this->GetDayOfMonth1(*instant, *year, *month);
}

// internal virtual Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth) :162
void YearMonthDayCalculator__GetInstant_fn(YearMonthDayCalculator* __this, int* year, int* monthOfYear, int* dayOfMonth, ::g::Uno::Time::Instant* __retval)
{
    int year_ = *year;
    int monthOfYear_ = *monthOfYear;
    int dayOfMonth_ = *dayOfMonth;
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[8/*"year"*/], year_, __this->MinYear(), __this->MaxYear());
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[9/*"monthOfYear"*/], monthOfYear_, 1, __this->GetMaxMonth(year_));
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[10/*"dayOfMonth"*/], dayOfMonth_, 1, __this->GetDaysInMonth(year_, monthOfYear_));
    return *__retval = ::g::Uno::Time::Instant__New1(__this->GetYearMonthDayTicks(year_, monthOfYear_, dayOfMonth_)), void();
}

// internal int GetMaxMonth(int year) :40
void YearMonthDayCalculator__GetMaxMonth_fn(YearMonthDayCalculator* __this, int* year, int* __retval)
{
    *__retval = __this->GetMaxMonth(*year);
}

// internal int GetMonthOfYear(Uno.Time.Instant instant) :157
void YearMonthDayCalculator__GetMonthOfYear_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetMonthOfYear(*instant);
}

// internal virtual long GetStartOfYearInTicks(int year) :123
void YearMonthDayCalculator__GetStartOfYearInTicks_fn(YearMonthDayCalculator* __this, int* year, int64_t* __retval)
{
    int year_ = *year;
    return *__retval = (int64_t)__this->CalculateStartOfYearDays(year_) * 864000000000LL, void();
}

// protected long GetTicksInYear(int year) :283
void YearMonthDayCalculator__GetTicksInYear_fn(YearMonthDayCalculator* __this, int* year, int64_t* __retval)
{
    *__retval = __this->GetTicksInYear(*year);
}

// internal int GetYear(Uno.Time.Instant instant) :200
void YearMonthDayCalculator__GetYear_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetYear(*instant);
}

// internal long GetYearMonthDayTicks(int year, int month, int dayOfMonth) :170
void YearMonthDayCalculator__GetYearMonthDayTicks_fn(YearMonthDayCalculator* __this, int* year, int* month, int* dayOfMonth, int64_t* __retval)
{
    *__retval = __this->GetYearMonthDayTicks(*year, *month, *dayOfMonth);
}

// internal long GetYearMonthTicks(int year, int month) :176
void YearMonthDayCalculator__GetYearMonthTicks_fn(YearMonthDayCalculator* __this, int* year, int* month, int64_t* __retval)
{
    *__retval = __this->GetYearMonthTicks(*year, *month);
}

// internal int get_MaxYear() :9
void YearMonthDayCalculator__get_MaxYear_fn(YearMonthDayCalculator* __this, int* __retval)
{
    *__retval = __this->MaxYear();
}

// internal int get_MinYear() :6
void YearMonthDayCalculator__get_MinYear_fn(YearMonthDayCalculator* __this, int* __retval)
{
    *__retval = __this->MinYear();
}

// protected YearMonthDayCalculator(int minYear, int maxYear, int monthsInYear, long averageTicksPerYear, long ticksAtStartOfYear1, Uno.Time.Calendars.Era[] eras) [instance] :21
void YearMonthDayCalculator::ctor_(int minYear, int maxYear, int monthsInYear, int64_t averageTicksPerYear, int64_t ticksAtStartOfYear1, uArray* eras)
{
    _minYear = minYear;
    _maxYear = maxYear;
    _monthsInYear = monthsInYear;
    _eras = ((uArray*)::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[3/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.Calendars.Era[]>*/], eras, ::STRINGS[7/*"eras"*/]));
    _averageTicksPerYear = averageTicksPerYear;
    _ticksAtStartOfYear1 = ticksAtStartOfYear1;
}

// internal Uno.Time.Calendars.Era[] get_Eras() [instance] :19
uArray* YearMonthDayCalculator::Eras()
{
    return _eras;
}

// internal int GetDayOfMonth(Uno.Time.Instant instant) [instance] :128
int YearMonthDayCalculator::GetDayOfMonth(::g::Uno::Time::Instant instant)
{
    ::g::Uno::Time::Instant instant_ = instant;
    int year = GetYear(instant_);
    int month = GetMonthOfYear1(instant_, year);
    return GetDayOfMonth1(instant_, year, month);
}

// protected int GetDayOfMonth(Uno.Time.Instant instant, int year, int month) [instance] :135
int YearMonthDayCalculator::GetDayOfMonth1(::g::Uno::Time::Instant instant, int year, int month)
{
    int64_t dateTicks = GetYearMonthTicks(year, month);
    int64_t ticksWithinMonth = instant.Ticks() - dateTicks;
    return ::g::Uno::Time::Converter::TicksToDays(ticksWithinMonth) + 1;
}

// internal int GetMaxMonth(int year) [instance] :40
int YearMonthDayCalculator::GetMaxMonth(int year)
{
    return _monthsInYear;
}

// internal int GetMonthOfYear(Uno.Time.Instant instant) [instance] :157
int YearMonthDayCalculator::GetMonthOfYear(::g::Uno::Time::Instant instant)
{
    ::g::Uno::Time::Instant instant_ = instant;
    return GetMonthOfYear1(instant_, GetYear(instant_));
}

// protected long GetTicksInYear(int year) [instance] :283
int64_t YearMonthDayCalculator::GetTicksInYear(int year)
{
    int year_ = year;
    return IsLeapYear(year_) ? 316224000000000LL : 315360000000000LL;
}

// internal int GetYear(Uno.Time.Instant instant) [instance] :200
int YearMonthDayCalculator::GetYear(::g::Uno::Time::Instant instant)
{
    int64_t targetTicks = instant.Ticks();
    int64_t halfTicksPerYear = _averageTicksPerYear >> 1;
    int64_t halfTicksSinceStartOfYear1 = (targetTicks >> 1) - (_ticksAtStartOfYear1 >> 1);

    if (halfTicksSinceStartOfYear1 < 0LL)
        halfTicksSinceStartOfYear1 = halfTicksSinceStartOfYear1 + (1LL - halfTicksPerYear);

    int candidate = (int)(halfTicksSinceStartOfYear1 / halfTicksPerYear) + 1;
    int64_t candidateStart = GetStartOfYearInTicks(candidate);
    int64_t ticksFromCandidateStartToTarget = targetTicks - candidateStart;

    if (ticksFromCandidateStartToTarget < 0LL)
    {
        do
        {
            candidate--;
            ticksFromCandidateStartToTarget = ticksFromCandidateStartToTarget + GetTicksInYear(candidate);
        }
        while (ticksFromCandidateStartToTarget < 0LL);

        return candidate;
    }

    int64_t candidateLength = GetTicksInYear(candidate);

    while (ticksFromCandidateStartToTarget >= candidateLength)
    {
        candidate++;
        ticksFromCandidateStartToTarget = ticksFromCandidateStartToTarget - candidateLength;
        candidateLength = GetTicksInYear(candidate);
    }

    return candidate;
}

// internal long GetYearMonthDayTicks(int year, int month, int dayOfMonth) [instance] :170
int64_t YearMonthDayCalculator::GetYearMonthDayTicks(int year, int month, int dayOfMonth)
{
    int64_t ticks = GetYearMonthTicks(year, month);
    return ticks + ((int64_t)(dayOfMonth - 1) * 864000000000LL);
}

// internal long GetYearMonthTicks(int year, int month) [instance] :176
int64_t YearMonthDayCalculator::GetYearMonthTicks(int year, int month)
{
    int64_t ticks = GetStartOfYearInTicks(year);
    return ticks + GetTicksFromStartOfYearToStartOfMonth(year, month);
}

// internal int get_MaxYear() [instance] :9
int YearMonthDayCalculator::MaxYear()
{
    return _maxYear;
}

// internal int get_MinYear() [instance] :6
int YearMonthDayCalculator::MinYear()
{
    return _minYear;
}
// }

}}}} // ::g::Uno::Time::Calendars
