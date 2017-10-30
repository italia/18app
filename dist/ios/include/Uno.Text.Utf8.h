// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Text/Utf8.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Text{struct Utf8;}}}

namespace g{
namespace Uno{
namespace Text{

// public static class Utf8 :292
// {
uClassType* Utf8_typeof();
void Utf8__GetBytes_fn(uString* value, uArray** __retval);
void Utf8__GetString_fn(uArray* value, uString** __retval);

struct Utf8 : uObject
{
    static uArray* GetBytes(uString* value);
    static uString* GetString(uArray* value);
};
// }

}}} // ::g::Uno::Text
