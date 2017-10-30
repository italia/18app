// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IWriteable :30
// {
uInterfaceType* IWriteable_typeof();

struct IWriteable
{
    void(*fp_SetExclusive)(uObject*, uObject*);
    static void SetExclusive(const uInterface& __this, uObject* value) { __this.VTable<IWriteable>()->fp_SetExclusive(__this, value); }
};
// }

}}} // ::g::Fuse::Reactive
