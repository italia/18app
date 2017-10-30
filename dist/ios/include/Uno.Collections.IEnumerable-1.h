// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/IEnumerable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// public abstract interface IEnumerable<T> :6
// {
uInterfaceType* IEnumerable_typeof();

struct IEnumerable
{
    void(*fp_GetEnumerator)(uObject*, uObject**);
    static uObject* GetEnumerator(const uInterface& __this) { uObject* __retval; return __this.VTable<IEnumerable>()->fp_GetEnumerator(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Collections
