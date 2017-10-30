// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Generic.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Generic;}}

namespace g{
namespace Uno{

// public static class Generic :7
// {
uClassType* Generic_typeof();
void Generic__Equals_fn(uType* __type, void* left, void* right, bool* __retval);

struct Generic : uObject
{
    template<class T>
    static bool Equals(uType* __type, T left, T right) { bool __retval; return Generic__Equals_fn(__type, uConstrain(__type->U(0), left), uConstrain(__type->U(0), right), &__retval), __retval; }
};
// }

}} // ::g::Uno
