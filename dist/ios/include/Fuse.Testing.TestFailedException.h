// This file was generated based on /usr/local/share/uno/Packages/Fuse.Testing/1.3.1/JavaScriptTest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{namespace Testing{struct TestFailedException;}}}

namespace g{
namespace Fuse{
namespace Testing{

// internal sealed class TestFailedException :9
// {
::g::Uno::Exception_type* TestFailedException_typeof();
void TestFailedException__ctor_3_fn(TestFailedException* __this, uString* message);
void TestFailedException__New4_fn(uString* message, TestFailedException** __retval);

struct TestFailedException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static TestFailedException* New4(uString* message);
};
// }

}}} // ::g::Fuse::Testing
