// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Exceptions/ArgumentOutOfRangeException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ArgumentException.h>
namespace g{namespace Uno{struct ArgumentOutOfRangeException;}}

namespace g{
namespace Uno{

// public sealed class ArgumentOutOfRangeException :6
// {
::g::Uno::Exception_type* ArgumentOutOfRangeException_typeof();
void ArgumentOutOfRangeException__ctor_5_fn(ArgumentOutOfRangeException* __this, uString* paramName);
void ArgumentOutOfRangeException__ctor_6_fn(ArgumentOutOfRangeException* __this, uString* message, uString* paramName);
void ArgumentOutOfRangeException__New6_fn(uString* paramName, ArgumentOutOfRangeException** __retval);
void ArgumentOutOfRangeException__New7_fn(uString* message, uString* paramName, ArgumentOutOfRangeException** __retval);

struct ArgumentOutOfRangeException : ::g::Uno::ArgumentException
{
    void ctor_5(uString* paramName);
    void ctor_6(uString* message, uString* paramName);
    static ArgumentOutOfRangeException* New6(uString* paramName);
    static ArgumentOutOfRangeException* New7(uString* message, uString* paramName);
};
// }

}} // ::g::Uno
