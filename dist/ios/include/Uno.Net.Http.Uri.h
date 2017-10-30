// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/Uri.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct Uri;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class Uri :7
// {
uType* Uri_typeof();
void Uri__ctor__fn(Uri* __this, uString* uriString);
void Uri__get_AbsolutePath_fn(Uri* __this, uString** __retval);
void Uri__set_AbsolutePath_fn(Uri* __this, uString* value);
void Uri__get_AbsoluteUri_fn(Uri* __this, uString** __retval);
void Uri__set_AbsoluteUri_fn(Uri* __this, uString* value);
void Uri__get_Authority_fn(Uri* __this, uString** __retval);
void Uri__set_Authority_fn(Uri* __this, uString* value);
void Uri__CreateThis_fn(Uri* __this, uString* uriString);
void Uri__Encode_fn(uString* value, uString** __retval);
void Uri__EscapeSymbol_fn(uint8_t* symbol, bool* __retval);
void Uri__GetHexFromNumber_fn(int* value, uChar* __retval);
void Uri__get_Hash_fn(Uri* __this, uString** __retval);
void Uri__set_Hash_fn(Uri* __this, uString* value);
void Uri__get_Host_fn(Uri* __this, uString** __retval);
void Uri__set_Host_fn(Uri* __this, uString* value);
void Uri__New1_fn(uString* uriString, Uri** __retval);
void Uri__get_OriginalString_fn(Uri* __this, uString** __retval);
void Uri__set_OriginalString_fn(Uri* __this, uString* value);
void Uri__get_PathAndQuery_fn(Uri* __this, uString** __retval);
void Uri__set_PathAndQuery_fn(Uri* __this, uString* value);
void Uri__get_Port_fn(Uri* __this, int* __retval);
void Uri__set_Port_fn(Uri* __this, int* value);
void Uri__get_Query_fn(Uri* __this, uString** __retval);
void Uri__set_Query_fn(Uri* __this, uString* value);
void Uri__get_Scheme_fn(Uri* __this, uString** __retval);
void Uri__set_Scheme_fn(Uri* __this, uString* value);
void Uri__get_UserInfo_fn(Uri* __this, uString** __retval);
void Uri__set_UserInfo_fn(Uri* __this, uString* value);

struct Uri : uObject
{
    uStrong<uString*> _AbsolutePath;
    uStrong<uString*> _AbsoluteUri;
    uStrong<uString*> _Authority;
    uStrong<uString*> _Hash;
    uStrong<uString*> _Host;
    uStrong<uString*> _OriginalString;
    uStrong<uString*> _PathAndQuery;
    int _Port;
    uStrong<uString*> _Query;
    uStrong<uString*> _Scheme;
    uStrong<uString*> _UserInfo;

    void ctor_(uString* uriString);
    uString* AbsolutePath();
    void AbsolutePath(uString* value);
    uString* AbsoluteUri();
    void AbsoluteUri(uString* value);
    uString* Authority();
    void Authority(uString* value);
    void CreateThis(uString* uriString);
    uString* Hash();
    void Hash(uString* value);
    uString* Host();
    void Host(uString* value);
    uString* OriginalString();
    void OriginalString(uString* value);
    uString* PathAndQuery();
    void PathAndQuery(uString* value);
    int Port();
    void Port(int value);
    uString* Query();
    void Query(uString* value);
    uString* Scheme();
    void Scheme(uString* value);
    uString* UserInfo();
    void UserInfo(uString* value);
    static uString* Encode(uString* value);
    static bool EscapeSymbol(uint8_t symbol);
    static uChar GetHexFromNumber(int value);
    static Uri* New1(uString* uriString);
};
// }

}}}} // ::g::Uno::Net::Http
