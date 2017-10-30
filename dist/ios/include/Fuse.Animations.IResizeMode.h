// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Resize.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract interface IResizeMode :10
// {
uInterfaceType* IResizeMode_typeof();

struct IResizeMode
{
    void(*fp_GetSizeChange)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*);
    static bool GetSizeChange(const uInterface& __this, ::g::Fuse::Visual* target, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize) { bool __retval; return __this.VTable<IResizeMode>()->fp_GetSizeChange(__this, target, relative, baseSize, deltaSize, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
