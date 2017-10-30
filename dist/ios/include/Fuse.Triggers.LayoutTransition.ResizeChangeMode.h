// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Triggers/LayoutAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResizeMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ResizeChangeMode;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class LayoutTransition.ResizeChangeMode :93
// {
struct LayoutTransition__ResizeChangeMode_type : uType
{
    ::g::Fuse::Animations::IResizeMode interface0;
};

LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof();
void LayoutTransition__ResizeChangeMode__ctor__fn(LayoutTransition__ResizeChangeMode* __this);
void LayoutTransition__ResizeChangeMode__GetSizeChange_fn(LayoutTransition__ResizeChangeMode* __this, ::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval);
void LayoutTransition__ResizeChangeMode__New1_fn(LayoutTransition__ResizeChangeMode** __retval);

struct LayoutTransition__ResizeChangeMode : uObject
{
    void ctor_();
    bool GetSizeChange(::g::Fuse::Visual* n, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize);
    static LayoutTransition__ResizeChangeMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
