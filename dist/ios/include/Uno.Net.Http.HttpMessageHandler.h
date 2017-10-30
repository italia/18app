// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandler.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HttpMessageHandler :8
// {
struct HttpMessageHandler_type : uType
{
    ::g::Uno::IDisposable interface0;
};

HttpMessageHandler_type* HttpMessageHandler_typeof();
void HttpMessageHandler__ctor__fn(HttpMessageHandler* __this);
void HttpMessageHandler__CompleteRequest_fn(HttpMessageHandler* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);
void HttpMessageHandler__CreateRequest1_fn(HttpMessageHandler* __this, uString* method, uString* url, uObject* dispatcher, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval);
void HttpMessageHandler__Dispose_fn(HttpMessageHandler* __this);
void HttpMessageHandler__New1_fn(HttpMessageHandler** __retval);

struct HttpMessageHandler : uObject
{
    uStrong<uObject*> _defaultDispatcher;
    uStrong< ::g::Uno::Collections::List*> _pendingRequests;

    void ctor_();
    void CompleteRequest(::g::Uno::Net::Http::HttpMessageHandlerRequest* request);
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* CreateRequest1(uString* method, uString* url, uObject* dispatcher);
    void Dispose();
    static HttpMessageHandler* New1();
};
// }

}}}} // ::g::Uno::Net::Http
