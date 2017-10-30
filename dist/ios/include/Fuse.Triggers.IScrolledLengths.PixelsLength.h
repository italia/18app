// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Triggers/ScrollRegion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IScrolledLength.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__PixelsLength;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class IScrolledLengths.PixelsLength :27
// {
struct IScrolledLengths__PixelsLength_type : uType
{
    ::g::Fuse::Triggers::IScrolledLength interface0;
};

IScrolledLengths__PixelsLength_type* IScrolledLengths__PixelsLength_typeof();
void IScrolledLengths__PixelsLength__ctor__fn(IScrolledLengths__PixelsLength* __this);
void IScrolledLengths__PixelsLength__GetPoints_fn(IScrolledLengths__PixelsLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval);
void IScrolledLengths__PixelsLength__New1_fn(IScrolledLengths__PixelsLength** __retval);

struct IScrolledLengths__PixelsLength : uObject
{
    void ctor_();
    ::g::Uno::Float2 GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable);
    static IScrolledLengths__PixelsLength* New1();
};
// }

}}} // ::g::Fuse::Triggers
