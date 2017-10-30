// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/LineMetrics.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct LineMetrics;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class LineMetrics :8
// {
uClassType* LineMetrics_typeof();
void LineMetrics__GetBounds_fn(uObject* segments, ::g::Uno::Rect* __retval);

struct LineMetrics : uObject
{
    static ::g::Uno::Rect GetBounds(uObject* segments);
};
// }

}}} // ::g::Fuse::Drawing
