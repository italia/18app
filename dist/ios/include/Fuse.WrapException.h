// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/WrapException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{struct WrapException;}}

namespace g{
namespace Fuse{

// internal sealed class WrapException :12
// {
::g::Uno::Exception_type* WrapException_typeof();
void WrapException__ctor_3_fn(WrapException* __this, ::g::Uno::Exception* inner);
void WrapException__get_Message_fn(WrapException* __this, uString** __retval);
void WrapException__New4_fn(::g::Uno::Exception* inner, WrapException** __retval);
void WrapException__ToString_fn(WrapException* __this, uString** __retval);
void WrapException__Unwrap_fn(::g::Uno::Exception* e, ::g::Uno::Exception** __retval);

struct WrapException : ::g::Uno::Exception
{
    void ctor_3(::g::Uno::Exception* inner);
    static WrapException* New4(::g::Uno::Exception* inner);
    static ::g::Uno::Exception* Unwrap(::g::Uno::Exception* e);
};
// }

}} // ::g::Fuse
