// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/IO/IOException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace IO{struct IOException;}}}

namespace g{
namespace Uno{
namespace IO{

// public class IOException :6
// {
::g::Uno::Exception_type* IOException_typeof();
void IOException__ctor_3_fn(IOException* __this, uString* message);
void IOException__New4_fn(uString* message, IOException** __retval);

struct IOException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static IOException* New4(uString* message);
};
// }

}}} // ::g::Uno::IO
