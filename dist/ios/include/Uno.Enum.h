// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Enum.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Enum;}}

namespace g{
namespace Uno{

// public static class Enum :6
// {
uClassType* Enum_typeof();
void Enum__Parse_fn(uType* type, uString* str, uObject** __retval);
void Enum__Parse1_fn(uType* type, uString* str, bool* ignoreCase, uObject** __retval);

struct Enum : uObject
{
    static uObject* Parse(uType* type, uString* str);
    static uObject* Parse1(uType* type, uString* str, bool ignoreCase);
};
// }

}} // ::g::Uno
