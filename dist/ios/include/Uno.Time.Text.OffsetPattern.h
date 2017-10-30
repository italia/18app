// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Text/OffsetPattern.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct FixedFormatPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetPattern__OffsetBucket;}}}}
namespace g{namespace Uno{namespace Time{struct Offset;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// public sealed class OffsetPattern :3
// {
uType* OffsetPattern_typeof();
void OffsetPattern__ctor__fn(OffsetPattern* __this);
void OffsetPattern__Format_fn(OffsetPattern* __this, ::g::Uno::Time::Offset* value, uString** __retval);
void OffsetPattern__get_GeneralIsoPattern_fn(OffsetPattern** __retval);
void OffsetPattern__GetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval);
void OffsetPattern__GetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval);
void OffsetPattern__GetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval);
void OffsetPattern__GetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval);
void OffsetPattern__New1_fn(OffsetPattern** __retval);
void OffsetPattern__SetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* hour);
void OffsetPattern__SetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* minute);
void OffsetPattern__SetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* second);
void OffsetPattern__SetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* sign);

struct OffsetPattern : uObject
{
    uStrong< ::g::Uno::Time::Text::FixedFormatPattern*> _generalPattern;
    static uSStrong<OffsetPattern*> General_;
    static uSStrong<OffsetPattern*>& General() { return General_; }

    void ctor_();
    uString* Format(::g::Uno::Time::Offset value);
    int GetHour(OffsetPattern__OffsetBucket* value);
    int GetMinute(OffsetPattern__OffsetBucket* value);
    int GetSecond(OffsetPattern__OffsetBucket* value);
    int GetSign(OffsetPattern__OffsetBucket* value);
    void SetHour(OffsetPattern__OffsetBucket* value, int hour);
    void SetMinute(OffsetPattern__OffsetBucket* value, int minute);
    void SetSecond(OffsetPattern__OffsetBucket* value, int second);
    void SetSign(OffsetPattern__OffsetBucket* value, int sign);
    static OffsetPattern* New1();
    static OffsetPattern* GeneralIsoPattern();
};
// }

}}}} // ::g::Uno::Time::Text
