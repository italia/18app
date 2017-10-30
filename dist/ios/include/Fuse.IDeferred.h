// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Deferred.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface IDeferred :10
// {
uInterfaceType* IDeferred_typeof();

struct IDeferred
{
    void(*fp_Perform)(uObject*, bool*);
    static bool Perform(const uInterface& __this) { bool __retval; return __this.VTable<IDeferred>()->fp_Perform(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
