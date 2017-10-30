// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest__DispatchClosure;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// private sealed class HttpMessageHandlerRequest.DispatchClosure :138
// {
uType* HttpMessageHandlerRequest__DispatchClosure_typeof();
void HttpMessageHandlerRequest__DispatchClosure__ctor__fn(HttpMessageHandlerRequest__DispatchClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg);
void HttpMessageHandlerRequest__DispatchClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg, HttpMessageHandlerRequest__DispatchClosure** __retval);
void HttpMessageHandlerRequest__DispatchClosure__Run_fn(HttpMessageHandlerRequest__DispatchClosure* __this);

struct HttpMessageHandlerRequest__DispatchClosure : uObject
{
    uStrong<uDelegate*> _action;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _arg;
    int _state;

    void ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg);
    void Run();
    static HttpMessageHandlerRequest__DispatchClosure* New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg);
};
// }

}}}} // ::g::Uno::Net::Http
