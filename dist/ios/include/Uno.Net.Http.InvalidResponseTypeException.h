// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct InvalidResponseTypeException;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class InvalidResponseTypeException :496
// {
::g::Uno::Exception_type* InvalidResponseTypeException_typeof();
void InvalidResponseTypeException__ctor_3_fn(InvalidResponseTypeException* __this);
void InvalidResponseTypeException__New4_fn(InvalidResponseTypeException** __retval);

struct InvalidResponseTypeException : ::g::Uno::Exception
{
    void ctor_3();
    static InvalidResponseTypeException* New4();
};
// }

}}}} // ::g::Uno::Net::Http
