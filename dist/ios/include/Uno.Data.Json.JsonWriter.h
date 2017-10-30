// This file was generated based on /usr/local/share/uno/Packages/Uno.Data.Json/1.0.1/source/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonWriter;}}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// public static class JsonWriter :280
// {
uClassType* JsonWriter_typeof();
void JsonWriter__EscapeString1_fn(uString* str, ::g::Uno::Text::StringBuilder* sb);
void JsonWriter__QuoteString_fn(uString* str, uString** __retval);

struct JsonWriter : uObject
{
    static void EscapeString1(uString* str, ::g::Uno::Text::StringBuilder* sb);
    static uString* QuoteString(uString* str);
};
// }

}}}} // ::g::Uno::Data::Json
