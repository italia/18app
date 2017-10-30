// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Timezones/DeviceTimeZone.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Time.DateTimeZone.h>
namespace g{namespace Uno{namespace Time{struct DeviceTimeZone;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}
namespace g{namespace Uno{namespace Time{struct Offset;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class DeviceTimeZone :5
// {
::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof();
void DeviceTimeZone__ctor_1_fn(DeviceTimeZone* __this);
void DeviceTimeZone__ctor_2_fn(DeviceTimeZone* __this, uString* id1);
void DeviceTimeZone__EqualsImpl_fn(DeviceTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval);
void DeviceTimeZone__GetHashCode_fn(DeviceTimeZone* __this, int* __retval);
void DeviceTimeZone__GetUtcOffset_fn(DeviceTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval);
void DeviceTimeZone__New1_fn(DeviceTimeZone** __retval);
void DeviceTimeZone__ToString_fn(DeviceTimeZone* __this, uString** __retval);

struct DeviceTimeZone : ::g::Uno::Time::DateTimeZone
{
    void ctor_1();
    void ctor_2(uString* id1);
    static DeviceTimeZone* New1();
};
// }

}}} // ::g::Uno::Time
