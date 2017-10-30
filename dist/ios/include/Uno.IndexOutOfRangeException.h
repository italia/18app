// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Exceptions/IndexOutOfRangeException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct IndexOutOfRangeException;}}

namespace g{
namespace Uno{

// public sealed class IndexOutOfRangeException :6
// {
::g::Uno::Exception_type* IndexOutOfRangeException_typeof();
void IndexOutOfRangeException__ctor_3_fn(IndexOutOfRangeException* __this);
void IndexOutOfRangeException__New4_fn(IndexOutOfRangeException** __retval);

struct IndexOutOfRangeException : ::g::Uno::Exception
{
    void ctor_3();
    static IndexOutOfRangeException* New4();
};
// }

}} // ::g::Uno
