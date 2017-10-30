// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Triggers/ScrollRegion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IScrolledLength.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__PointsLength;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class IScrolledLengths.PointsLength :15
// {
struct IScrolledLengths__PointsLength_type : uType
{
    ::g::Fuse::Triggers::IScrolledLength interface0;
};

IScrolledLengths__PointsLength_type* IScrolledLengths__PointsLength_typeof();
void IScrolledLengths__PointsLength__ctor__fn(IScrolledLengths__PointsLength* __this);
void IScrolledLengths__PointsLength__GetPoints_fn(IScrolledLengths__PointsLength* __this, float* value, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval);
void IScrolledLengths__PointsLength__New1_fn(IScrolledLengths__PointsLength** __retval);

struct IScrolledLengths__PointsLength : uObject
{
    void ctor_();
    ::g::Uno::Float2 GetPoints(float value, ::g::Fuse::Controls::ScrollViewBase* scrollable);
    static IScrolledLengths__PointsLength* New1();
};
// }

}}} // ::g::Fuse::Triggers
