// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriParsers/UserInfoParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct UserInfoParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class UserInfoParser :6
// {
uType* UserInfoParser_typeof();
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval);
void UserInfoParser__Parse_fn(uString* uriString, int* endIdx, int* idx, uString** __retval);

struct UserInfoParser : uObject
{
    static bool IsValid(uString* userInfo);
    static uString* Parse(uString* uriString, int endIdx, int* idx);
};
// }

}}}} // ::g::Uno::Net::Http
