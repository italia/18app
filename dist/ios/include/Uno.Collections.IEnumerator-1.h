// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/IEnumerator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// public abstract interface IEnumerator<T> :13
// {
uInterfaceType* IEnumerator1_typeof();

struct IEnumerator1
{
    void(*fp_get_Current)(uObject*, uTRef);
    template<class T>
    static T Current(const uInterface& __this) { T __retval; return __this.VTable<IEnumerator1>()->fp_get_Current(__this, &__retval), __retval; }
    static void get_Current_ex(const uInterface& __this, uTRef __retval) { __this.VTable<IEnumerator1>()->fp_get_Current(__this, __retval); }
};
// }

}}} // ::g::Uno::Collections
