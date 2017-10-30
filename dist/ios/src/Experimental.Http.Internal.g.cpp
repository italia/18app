// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Http.Internal.DateUtil.h>
#include <Uno.Int.h>
#include <Uno.Time.ZonedDateTime.h>

namespace g{
namespace Experimental{
namespace Http{
namespace Internal{

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/Internal/DateUtil.uno
// ---------------------------------------------------------------------------

// internal static class DateUtil :6
// {
static void DateUtil_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Time::ZonedDateTime_typeof());
}

uClassType* DateUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.Http.Internal.DateUtil", options);
    type->fp_build_ = DateUtil_build;
    return type;
}

// public static int get_TimestampNow() :10
void DateUtil__get_TimestampNow_fn(int* __retval)
{
    *__retval = DateUtil::TimestampNow();
}

// public static int get_TimestampNow() [static] :10
int DateUtil::TimestampNow()
{
    ::g::Uno::Time::ZonedDateTime* d = ::g::Uno::Time::ZonedDateTime::Now();
    int mon = ((uPtr(d)->Year() - 2000) * 12) + uPtr(d)->Month();
    int day = (mon * 31) + d->Day();
    int hour = (day * 24) + d->Hour();
    int min = (hour * 60) + d->Minute();
    int sec = (min * 60) + d->Second();
    return sec;
}
// }

}}}} // ::g::Experimental::Http::Internal
