// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct InvalidStateException;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class InvalidStateException :502
// {
::g::Uno::Exception_type* InvalidStateException_typeof();
void InvalidStateException__ctor_3_fn(InvalidStateException* __this);
void InvalidStateException__New4_fn(InvalidStateException** __retval);

struct InvalidStateException : ::g::Uno::Exception
{
    void ctor_3();
    static InvalidStateException* New4();
};
// }

}}}} // ::g::Uno::Net::Http
