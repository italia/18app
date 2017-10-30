// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface MasterPropertyGet :207
// {
uInterfaceType* MasterPropertyGet_typeof();

struct MasterPropertyGet
{
    void(*fp_GetPropertyObject)(uObject*, uObject**);
    static uObject* GetPropertyObject(const uInterface& __this) { uObject* __retval; return __this.VTable<MasterPropertyGet>()->fp_GetPropertyObject(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
