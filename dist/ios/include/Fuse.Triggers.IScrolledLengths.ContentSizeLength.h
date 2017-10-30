// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Triggers/ScrollRegion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IScrolledLength.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__ContentSizeLength;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class IScrolledLengths.ContentSizeLength :39
// {
struct IScrolledLengths__ContentSizeLength_type : uType
{
    ::g::Fuse::Triggers::IScrolledLength interface0;
};

IScrolledLengths__ContentSizeLength_type* IScrolledLengths__ContentSizeLength_typeof();
void IScrolledLengths__ContentSizeLength__ctor__fn(IScrolledLengths__ContentSizeLength* __this);
void IScrolledLengths__ContentSizeLength__GetPoints_fn(IScrolledLengths__ContentSizeLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval);
void IScrolledLengths__ContentSizeLength__New1_fn(IScrolledLengths__ContentSizeLength** __retval);

struct IScrolledLengths__ContentSizeLength : uObject
{
    void ctor_();
    ::g::Uno::Float2 GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable);
    static IScrolledLengths__ContentSizeLength* New1();
};
// }

}}} // ::g::Fuse::Triggers
