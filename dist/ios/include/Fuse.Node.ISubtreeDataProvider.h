// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public abstract interface Node.ISubtreeDataProvider :15
// {
uInterfaceType* Node__ISubtreeDataProvider_typeof();

struct Node__ISubtreeDataProvider
{
    void(*fp_GetData)(uObject*, ::g::Fuse::Node*, uObject**);
    static uObject* GetData(const uInterface& __this, ::g::Fuse::Node* child) { uObject* __retval; return __this.VTable<Node__ISubtreeDataProvider>()->fp_GetData(__this, child, &__retval), __retval; }
};
// }

}} // ::g::Fuse
