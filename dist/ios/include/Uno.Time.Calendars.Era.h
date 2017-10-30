// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Calendars/Era.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct Era;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// public sealed class Era :3
// {
uType* Era_typeof();
void Era__ctor__fn(Era* __this, uString* name);
void Era__New1_fn(uString* name, Era** __retval);
void Era__ToString_fn(Era* __this, uString** __retval);

struct Era : uObject
{
    uStrong<uString*> _name;
    static uSStrong<Era*> AnnoHegirae_;
    static uSStrong<Era*>& AnnoHegirae() { return AnnoHegirae_; }
    static uSStrong<Era*> AnnoMartyrum_;
    static uSStrong<Era*>& AnnoMartyrum() { return AnnoMartyrum_; }
    static uSStrong<Era*> AnnoMundi_;
    static uSStrong<Era*>& AnnoMundi() { return AnnoMundi_; }
    static uSStrong<Era*> AnnoPersico_;
    static uSStrong<Era*>& AnnoPersico() { return AnnoPersico_; }
    static uSStrong<Era*> BeforeCommon_;
    static uSStrong<Era*>& BeforeCommon() { return BeforeCommon_; }
    static uSStrong<Era*> Common_;
    static uSStrong<Era*>& Common() { return Common_; }

    void ctor_(uString* name);
    static Era* New1(uString* name);
};
// }

}}}} // ::g::Uno::Time::Calendars
