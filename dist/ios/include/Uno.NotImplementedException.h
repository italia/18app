// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Exceptions/NotImplementedException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct NotImplementedException;}}

namespace g{
namespace Uno{

// public sealed class NotImplementedException :6
// {
::g::Uno::Exception_type* NotImplementedException_typeof();
void NotImplementedException__ctor_3_fn(NotImplementedException* __this);
void NotImplementedException__New4_fn(NotImplementedException** __retval);

struct NotImplementedException : ::g::Uno::Exception
{
    void ctor_3();
    static NotImplementedException* New4();
};
// }

}} // ::g::Uno
