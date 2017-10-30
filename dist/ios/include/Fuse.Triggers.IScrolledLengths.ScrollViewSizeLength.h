// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Triggers/ScrollRegion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IScrolledLength.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__ScrollViewSizeLength;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class IScrolledLengths.ScrollViewSizeLength :52
// {
struct IScrolledLengths__ScrollViewSizeLength_type : uType
{
    ::g::Fuse::Triggers::IScrolledLength interface0;
};

IScrolledLengths__ScrollViewSizeLength_type* IScrolledLengths__ScrollViewSizeLength_typeof();
void IScrolledLengths__ScrollViewSizeLength__ctor__fn(IScrolledLengths__ScrollViewSizeLength* __this);
void IScrolledLengths__ScrollViewSizeLength__GetPoints_fn(IScrolledLengths__ScrollViewSizeLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval);
void IScrolledLengths__ScrollViewSizeLength__New1_fn(IScrolledLengths__ScrollViewSizeLength** __retval);

struct IScrolledLengths__ScrollViewSizeLength : uObject
{
    void ctor_();
    ::g::Uno::Float2 GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable);
    static IScrolledLengths__ScrollViewSizeLength* New1();
};
// }

}}} // ::g::Fuse::Triggers
