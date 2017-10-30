// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Resources/MemoryPolicy.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract interface IMemoryResource :86
// {
uInterfaceType* IMemoryResource_typeof();

struct IMemoryResource
{
    void(*fp_get_IsPinned)(uObject*, bool*);
    void(*fp_get_LastUsed)(uObject*, double*);
    void(*fp_get_MemoryPolicy)(uObject*, ::g::Fuse::Resources::MemoryPolicy**);
    void(*fp_SoftDispose)(uObject*);
    static bool IsPinned(const uInterface& __this) { bool __retval; return __this.VTable<IMemoryResource>()->fp_get_IsPinned(__this, &__retval), __retval; }
    static double LastUsed(const uInterface& __this) { double __retval; return __this.VTable<IMemoryResource>()->fp_get_LastUsed(__this, &__retval), __retval; }
    static ::g::Fuse::Resources::MemoryPolicy* MemoryPolicy(const uInterface& __this) { ::g::Fuse::Resources::MemoryPolicy* __retval; return __this.VTable<IMemoryResource>()->fp_get_MemoryPolicy(__this, &__retval), __retval; }
    static void SoftDispose(const uInterface& __this) { __this.VTable<IMemoryResource>()->fp_SoftDispose(__this); }
};
// }

}}} // ::g::Fuse::Resources
