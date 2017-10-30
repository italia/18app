// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Shear.h>
namespace g{namespace Fuse{namespace Animations{struct Skew;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Skew :376
// {
::g::Fuse::Animations::TransformAnimator_type* Skew_typeof();
void Skew__Update_fn(Skew* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Shear* t, ::g::Uno::Float4* value);

struct Skew : ::g::Fuse::Animations::TransformAnimator
{
};
// }

}}} // ::g::Fuse::Animations
