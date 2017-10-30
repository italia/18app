// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Timezones/FixedDateTimeZone.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.Offset.h>
namespace g{namespace Uno{namespace Time{struct FixedDateTimeZone;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// internal sealed class FixedDateTimeZone :3
// {
::g::Uno::Time::DateTimeZone_type* FixedDateTimeZone_typeof();
void FixedDateTimeZone__ctor_1_fn(FixedDateTimeZone* __this, uString* id1, ::g::Uno::Time::Offset* offset1);
void FixedDateTimeZone__ctor_2_fn(FixedDateTimeZone* __this, ::g::Uno::Time::Offset* offset1);
void FixedDateTimeZone__EqualsImpl_fn(FixedDateTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval);
void FixedDateTimeZone__GetHashCode_fn(FixedDateTimeZone* __this, int* __retval);
void FixedDateTimeZone__GetUtcOffset_fn(FixedDateTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval);
void FixedDateTimeZone__New2_fn(::g::Uno::Time::Offset* offset1, FixedDateTimeZone** __retval);
void FixedDateTimeZone__ToString_fn(FixedDateTimeZone* __this, uString** __retval);

struct FixedDateTimeZone : ::g::Uno::Time::DateTimeZone
{
    ::g::Uno::Time::Offset offset;

    void ctor_1(uString* id1, ::g::Uno::Time::Offset offset1);
    void ctor_2(::g::Uno::Time::Offset offset1);
    static FixedDateTimeZone* New2(::g::Uno::Time::Offset offset1);
};
// }

}}} // ::g::Uno::Time
