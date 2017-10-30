// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Triggers/ScrollRegion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollRegion;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// internal sealed class ScrollRegion :76
// {
uType* ScrollRegion_typeof();
void ScrollRegion__CalcWithin_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval);
void ScrollRegion__IsInZone_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, bool* __retval);

struct ScrollRegion : uObject
{
    uStrong<uObject*> RelativeTo;
    int To;
    float Within;

    ::g::Uno::Float2 CalcWithin(::g::Fuse::Controls::ScrollViewBase* scrollable);
    bool IsInZone(::g::Fuse::Controls::ScrollViewBase* scrollable);
};
// }

}}} // ::g::Fuse::Triggers
