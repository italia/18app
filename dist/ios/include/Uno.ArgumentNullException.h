// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Exceptions/ArgumentNullException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ArgumentException.h>
namespace g{namespace Uno{struct ArgumentNullException;}}

namespace g{
namespace Uno{

// public sealed class ArgumentNullException :6
// {
::g::Uno::Exception_type* ArgumentNullException_typeof();
void ArgumentNullException__ctor_5_fn(ArgumentNullException* __this, uString* paramName);
void ArgumentNullException__New6_fn(uString* paramName, ArgumentNullException** __retval);

struct ArgumentNullException : ::g::Uno::ArgumentException
{
    void ctor_5(uString* paramName);
    static ArgumentNullException* New6(uString* paramName);
};
// }

}} // ::g::Uno
