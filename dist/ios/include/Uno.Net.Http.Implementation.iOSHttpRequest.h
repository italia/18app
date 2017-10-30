// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/Implementation/iOS/iOSHttpRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <HttpRequest.h>
#include <Uno.IDisposable.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{struct iOSHttpRequest;}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// internal sealed extern class iOSHttpRequest :11
// {
struct iOSHttpRequest_type : uType
{
    ::g::Uno::Net::Http::Implementation::IHttpRequest interface0;
    ::g::Uno::IDisposable interface1;
};

iOSHttpRequest_type* iOSHttpRequest_typeof();
void iOSHttpRequest__ctor__fn(iOSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
void iOSHttpRequest__Abort_fn(iOSHttpRequest* __this);
void iOSHttpRequest__Dispose_fn(iOSHttpRequest* __this);
void iOSHttpRequest__EnableCache_fn(iOSHttpRequest* __this, bool* enableCache);
void iOSHttpRequest__GetResponseContentByteArray_fn(iOSHttpRequest* __this, uArray** __retval);
void iOSHttpRequest__GetResponseContentString_fn(iOSHttpRequest* __this, uString** __retval);
void iOSHttpRequest__GetResponseHeader_fn(iOSHttpRequest* __this, uString* name, uString** __retval);
void iOSHttpRequest__GetResponseHeaders_fn(iOSHttpRequest* __this, uString** __retval);
void iOSHttpRequest__GetResponseStatus_fn(iOSHttpRequest* __this, int* __retval);
void iOSHttpRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url, iOSHttpRequest** __retval);
void iOSHttpRequest__SendAsync_fn(iOSHttpRequest* __this);
void iOSHttpRequest__SendAsync1_fn(iOSHttpRequest* __this, uArray* data);
void iOSHttpRequest__SendAsync2_fn(iOSHttpRequest* __this, uString* data);
void iOSHttpRequest__SetHeader_fn(iOSHttpRequest* __this, uString* name, uString* value);
void iOSHttpRequest__SetTimeout_fn(iOSHttpRequest* __this, int* timeoutInMilliseconds);

struct iOSHttpRequest : uObject
{
    ::Uno::Net::Http::iOS::HttpRequest* _requestHandle;

    void ctor_(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
    void Abort();
    void Dispose();
    void EnableCache(bool enableCache);
    uArray* GetResponseContentByteArray();
    uString* GetResponseContentString();
    uString* GetResponseHeader(uString* name);
    uString* GetResponseHeaders();
    int GetResponseStatus();
    void SendAsync();
    void SendAsync1(uArray* data);
    void SendAsync2(uString* data);
    void SetHeader(uString* name, uString* value);
    void SetTimeout(int timeoutInMilliseconds);
    static iOSHttpRequest* New1(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
};
// }

}}}}} // ::g::Uno::Net::Http::Implementation
