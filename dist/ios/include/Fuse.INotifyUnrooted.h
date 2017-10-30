// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.Rooting.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface INotifyUnrooted :15
// {
uInterfaceType* INotifyUnrooted_typeof();

struct INotifyUnrooted
{
    void(*fp_add_Unrooted)(uObject*, uDelegate*);
    void(*fp_remove_Unrooted)(uObject*, uDelegate*);
    static void add_Unrooted(const uInterface& __this, uDelegate* value) { __this.VTable<INotifyUnrooted>()->fp_add_Unrooted(__this, value); }
    static void remove_Unrooted(const uInterface& __this, uDelegate* value) { __this.VTable<INotifyUnrooted>()->fp_remove_Unrooted(__this, value); }
};
// }

}} // ::g::Fuse
