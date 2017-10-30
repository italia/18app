// This file was generated based on /usr/local/share/uno/Packages/Fuse.Testing/1.3.1/JavaScriptTest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Testing{struct UnoTestingHelper;}}}

namespace g{
namespace Fuse{
namespace Testing{

// public sealed class UnoTestingHelper :17
// {
::g::Fuse::Scripting::NativeModule_type* UnoTestingHelper_typeof();
void UnoTestingHelper__ctor_2_fn(UnoTestingHelper* __this);
void UnoTestingHelper__New2_fn(UnoTestingHelper** __retval);
void UnoTestingHelper__TestFailed_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);

struct UnoTestingHelper : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<UnoTestingHelper*> _instance_;
    static uSStrong<UnoTestingHelper*>& _instance() { return _instance_; }

    void ctor_2();
    static UnoTestingHelper* New2();
    static uObject* TestFailed(::g::Fuse::Scripting::Context* c, uArray* args);
};
// }

}}} // ::g::Fuse::Testing
