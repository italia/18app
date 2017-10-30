// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface Node.ISiblingDataProvider :9
// {
uInterfaceType* Node__ISiblingDataProvider_typeof();

struct Node__ISiblingDataProvider
{
    void(*fp_get_Data)(uObject*, uObject**);
    static uObject* Data(const uInterface& __this) { uObject* __retval; return __this.VTable<Node__ISiblingDataProvider>()->fp_get_Data(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
