// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpStatusReasonPhrase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpStatusReasonPhrase;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public static class HttpStatusReasonPhrase :5
// {
uClassType* HttpStatusReasonPhrase_typeof();
void HttpStatusReasonPhrase__GetFromStatusCode_fn(int* statusCode, uString** __retval);

struct HttpStatusReasonPhrase : uObject
{
    static uSStrong<uObject*> ClientErrors_;
    static uSStrong<uObject*>& ClientErrors() { return ClientErrors_; }
    static uSStrong<uObject*> Informational_;
    static uSStrong<uObject*>& Informational() { return Informational_; }
    static uSStrong<uObject*> Redirection_;
    static uSStrong<uObject*>& Redirection() { return Redirection_; }
    static uSStrong<uObject*> ServerErrors_;
    static uSStrong<uObject*>& ServerErrors() { return ServerErrors_; }
    static uSStrong<uObject*> Success_;
    static uSStrong<uObject*>& Success() { return Success_; }

    static uString* GetFromStatusCode(int statusCode);
};
// }

}}}} // ::g::Uno::Net::Http
