// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Exceptions/InvalidOperationException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct InvalidOperationException;}}

namespace g{
namespace Uno{

// public sealed class InvalidOperationException :6
// {
::g::Uno::Exception_type* InvalidOperationException_typeof();
void InvalidOperationException__ctor_3_fn(InvalidOperationException* __this);
void InvalidOperationException__ctor_4_fn(InvalidOperationException* __this, uString* message);
void InvalidOperationException__New4_fn(InvalidOperationException** __retval);
void InvalidOperationException__New5_fn(uString* message, InvalidOperationException** __retval);

struct InvalidOperationException : ::g::Uno::Exception
{
    void ctor_3();
    void ctor_4(uString* message);
    static InvalidOperationException* New4();
    static InvalidOperationException* New5(uString* message);
};
// }

}} // ::g::Uno
