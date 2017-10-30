// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/Thread.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Threading{struct ThreadStateException;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class ThreadStateException :11
// {
::g::Uno::Exception_type* ThreadStateException_typeof();
void ThreadStateException__ctor_3_fn(ThreadStateException* __this, uString* message);
void ThreadStateException__New4_fn(uString* message, ThreadStateException** __retval);

struct ThreadStateException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static ThreadStateException* New4(uString* message);
};
// }

}}} // ::g::Uno::Threading
