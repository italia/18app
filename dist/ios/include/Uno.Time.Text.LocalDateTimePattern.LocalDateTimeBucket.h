// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/LocalDateTimePattern.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDateTimePattern__LocalDateTimeBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class LocalDateTimePattern.LocalDateTimeBucket :142
// {
uType* LocalDateTimePattern__LocalDateTimeBucket_typeof();
void LocalDateTimePattern__LocalDateTimeBucket__ctor__fn(LocalDateTimePattern__LocalDateTimeBucket* __this);
void LocalDateTimePattern__LocalDateTimeBucket__New1_fn(LocalDateTimePattern__LocalDateTimeBucket** __retval);

struct LocalDateTimePattern__LocalDateTimeBucket : uObject
{
    int Day;
    int Hour;
    int Minute;
    int Month;
    int Second;
    int Sign;
    int Year;

    void ctor_();
    static LocalDateTimePattern__LocalDateTimeBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
