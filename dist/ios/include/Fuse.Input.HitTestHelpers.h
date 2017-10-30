// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/HitTestHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct HitTestHelpers;}}}
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// public static class HitTestHelpers :29
// {
uClassType* HitTestHelpers_typeof();
void HitTestHelpers__HitTestNearest_fn(::g::Fuse::Visual* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval);

struct HitTestHelpers : uObject
{
    static ::g::Fuse::HitTestResult* HitTestNearest(::g::Fuse::Visual* root, ::g::Uno::Float2 point);
};
// }

}}} // ::g::Fuse::Input
