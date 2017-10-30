// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface Node.IDataEnumerator :20
// {
uInterfaceType* Node__IDataEnumerator_typeof();

struct Node__IDataEnumerator
{
    void(*fp_NextData)(uObject*, uObject*, bool*);
    static bool NextData(const uInterface& __this, uObject* data) { bool __retval; return __this.VTable<Node__IDataEnumerator>()->fp_NextData(__this, data, &__retval), __retval; }
};
// }

}} // ::g::Fuse
