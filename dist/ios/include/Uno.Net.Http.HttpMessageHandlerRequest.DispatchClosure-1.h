// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest__DispatchClosure1;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// private sealed class HttpMessageHandlerRequest.DispatchClosure<TArg1> :161
// {
uType* HttpMessageHandlerRequest__DispatchClosure1_typeof();
void HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(HttpMessageHandlerRequest__DispatchClosure1* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1);
void HttpMessageHandlerRequest__DispatchClosure1__New1_fn(uType* __type, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1, HttpMessageHandlerRequest__DispatchClosure1** __retval);
void HttpMessageHandlerRequest__DispatchClosure1__Run_fn(HttpMessageHandlerRequest__DispatchClosure1* __this);

struct HttpMessageHandlerRequest__DispatchClosure1 : uObject
{
    uStrong<uDelegate*> _action;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _arg0;
    uTField _arg1() { return __type->Field(this, 2); }
    int _state;

    template<class TArg1>
    void ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, TArg1 arg1) { HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(this, &state, action, arg0, uConstrain(__type->T(0), arg1)); }
    void Run();
    template<class TArg1>
    static HttpMessageHandlerRequest__DispatchClosure1* New1(uType* __type, int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, TArg1 arg1) { HttpMessageHandlerRequest__DispatchClosure1* __retval; return HttpMessageHandlerRequest__DispatchClosure1__New1_fn(__type, &state, action, arg0, uConstrain(__type->T(0), arg1), &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Net::Http
