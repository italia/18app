// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/AbsolutePathParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct AbsolutePathParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class AbsolutePathParser :6
// {
uType* AbsolutePathParser_typeof();
void AbsolutePathParser__Parse_fn(uString* uriString, int* idx, int* endIdx, int* startPartIdx, uString** __retval);

struct AbsolutePathParser : uObject
{
    static uString* Parse(uString* uriString, int idx, int endIdx, int* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
