// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IDisposable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public abstract interface IDisposable :6
// {
uInterfaceType* IDisposable_typeof();

struct IDisposable
{
    void(*fp_Dispose)(uObject*);
    static void Dispose(const uInterface& __this) { __this.VTable<IDisposable>()->fp_Dispose(__this); }
};
// }

}} // ::g::Uno
