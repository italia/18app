// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Exceptions/ArgumentException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct ArgumentException;}}

namespace g{
namespace Uno{

// public class ArgumentException :6
// {
::g::Uno::Exception_type* ArgumentException_typeof();
void ArgumentException__ctor_3_fn(ArgumentException* __this, uString* message);
void ArgumentException__ctor_4_fn(ArgumentException* __this, uString* message, uString* paramName);
void ArgumentException__New4_fn(uString* message, ArgumentException** __retval);
void ArgumentException__New5_fn(uString* message, uString* paramName, ArgumentException** __retval);

struct ArgumentException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    void ctor_4(uString* message, uString* paramName);
    static ArgumentException* New4(uString* message);
    static ArgumentException* New5(uString* message, uString* paramName);
};
// }

}} // ::g::Uno
