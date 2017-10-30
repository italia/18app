// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/LineSegment.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public struct LineSegment :36
// {
uStructType* LineSegment_typeof();
void LineSegment__get_HasTo_fn(LineSegment* __this, bool* __retval);
void LineSegment__Scale_fn(LineSegment* __this, ::g::Uno::Float2* factor);
void LineSegment__Translate_fn(LineSegment* __this, ::g::Uno::Float2* offset);

struct LineSegment
{
    ::g::Uno::Float2 To;
    ::g::Uno::Float2 A;
    ::g::Uno::Float2 B;
    int Flags;
    int Type;

    bool HasTo();
    void Scale(::g::Uno::Float2 factor);
    void Translate(::g::Uno::Float2 offset);
};
// }

}}} // ::g::Fuse::Drawing
