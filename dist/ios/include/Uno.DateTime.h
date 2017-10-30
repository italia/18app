// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/DateTime.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct Duration;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Uno{

// public struct DateTime :13
// {
uStructType* DateTime_typeof();
void DateTime__ctor__fn(DateTime* __this, int64_t* ticks, int* kind);
void DateTime__Equals_fn(DateTime* __this, uType* __type, uObject* obj, bool* __retval);
void DateTime__GetHashCode_fn(DateTime* __this, uType* __type, int* __retval);
void DateTime__InternalTimeOrDefault_fn(DateTime* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void DateTime__New1_fn(int64_t* ticks, int* kind, DateTime* __retval);
void DateTime__op_Equality_fn(DateTime* x, DateTime* y, bool* __retval);
void DateTime__get_Ticks_fn(DateTime* __this, int64_t* __retval);

struct DateTime
{
    static ::g::Uno::Time::Instant UnixEpoch_;
    static ::g::Uno::Time::Instant& UnixEpoch() { return UnixEpoch_; }
    static ::g::Uno::Time::Instant DotNetTimeBase_;
    static ::g::Uno::Time::Instant& DotNetTimeBase() { return DotNetTimeBase_; }
    static ::g::Uno::Time::Duration DotNetTimeOffset_;
    static ::g::Uno::Time::Duration& DotNetTimeOffset() { return DotNetTimeOffset_; }
    int _kind;
    uStrong< ::g::Uno::Time::ZonedDateTime*> _time;

    void ctor_(int64_t ticks, int kind);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return DateTime__Equals_fn(this, __type, obj, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return DateTime__GetHashCode_fn(this, __type, &__retval), __retval; }
    ::g::Uno::Time::ZonedDateTime* InternalTimeOrDefault();
    int64_t Ticks();
};

DateTime DateTime__New1(int64_t ticks, int kind);
bool DateTime__op_Equality(DateTime x, DateTime y);
// }

}} // ::g::Uno
