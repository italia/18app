// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Exceptions/AggregateException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct AggregateException;}}

namespace g{
namespace Uno{

// public sealed class AggregateException :8
// {
::g::Uno::Exception_type* AggregateException_typeof();
void AggregateException__ctor_5_fn(AggregateException* __this, uString* message, uArray* innerExceptions);
void AggregateException__ctor_6_fn(AggregateException* __this, uArray* innerExceptions);
void AggregateException__New7_fn(uArray* innerExceptions, AggregateException** __retval);
void AggregateException__ToString_fn(AggregateException* __this, uString** __retval);

struct AggregateException : ::g::Uno::Exception
{
    uStrong<uArray*> _innerExceptions;

    void ctor_5(uString* message, uArray* innerExceptions);
    void ctor_6(uArray* innerExceptions);
    static AggregateException* New7(uArray* innerExceptions);
};
// }

}} // ::g::Uno
