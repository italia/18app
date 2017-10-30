// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/HashParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HashParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HashParser :6
// {
uType* HashParser_typeof();
void HashParser__Parse_fn(uString* uriString, int* idx, int* startPartIdx, uString** __retval);

struct HashParser : uObject
{
    static uString* Parse(uString* uriString, int idx, int* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
