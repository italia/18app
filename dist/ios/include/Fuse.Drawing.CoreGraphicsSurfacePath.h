// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/CoreGraphics/CoreGraphicsSurface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.SurfacePath.h>
namespace g{namespace Fuse{namespace Drawing{struct CoreGraphicsSurfacePath;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class CoreGraphicsSurfacePath :12
// {
uType* CoreGraphicsSurfacePath_typeof();
void CoreGraphicsSurfacePath__ctor_1_fn(CoreGraphicsSurfacePath* __this);
void CoreGraphicsSurfacePath__New1_fn(CoreGraphicsSurfacePath** __retval);

struct CoreGraphicsSurfacePath : ::g::Fuse::Drawing::SurfacePath
{
    int FillRule;
    void* Path;

    void ctor_1();
    static CoreGraphicsSurfacePath* New1();
};
// }

}}} // ::g::Fuse::Drawing
