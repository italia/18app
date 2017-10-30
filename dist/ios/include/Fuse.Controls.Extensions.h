// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/TreeRenderer.iOS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct Extensions;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static extern class Extensions :190
// {
uClassType* Extensions_typeof();
void Extensions__GetColor_fn(::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float4* __retval);

struct Extensions : uObject
{
    static ::g::Uno::Float4 GetColor(::g::Fuse::Drawing::Brush* brush);
};
// }

}}} // ::g::Fuse::Controls
