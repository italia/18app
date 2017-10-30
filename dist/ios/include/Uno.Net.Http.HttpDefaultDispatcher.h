// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpDefaultDispatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpDefaultDispatcher;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// internal sealed class HttpDefaultDispatcher :6
// {
struct HttpDefaultDispatcher_type : uType
{
    ::g::Uno::Threading::IDispatcher interface0;
};

HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof();
void HttpDefaultDispatcher__ctor__fn(HttpDefaultDispatcher* __this);
void HttpDefaultDispatcher__Invoke_fn(HttpDefaultDispatcher* __this, uDelegate* action);
void HttpDefaultDispatcher__New1_fn(HttpDefaultDispatcher** __retval);

struct HttpDefaultDispatcher : uObject
{
    void ctor_();
    void Invoke(uDelegate* action);
    static HttpDefaultDispatcher* New1();
};
// }

}}}} // ::g::Uno::Net::Http
