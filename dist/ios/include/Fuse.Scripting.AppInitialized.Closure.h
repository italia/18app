// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/AppInitialized.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct AppInitialized__Closure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class AppInitialized.Closure :36
// {
uType* AppInitialized__Closure_typeof();
void AppInitialized__Closure__ctor__fn(AppInitialized__Closure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* action);
void AppInitialized__Closure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* action, AppInitialized__Closure** __retval);
void AppInitialized__Closure__Run_fn(AppInitialized__Closure* __this);
void AppInitialized__Closure__RunJS_fn(uDelegate* action);

struct AppInitialized__Closure : uObject
{
    uStrong<uDelegate*> _action;
    uStrong< ::g::Fuse::Scripting::Context*> _context;

    void ctor_(::g::Fuse::Scripting::Context* context, uDelegate* action);
    void Run();
    static AppInitialized__Closure* New1(::g::Fuse::Scripting::Context* context, uDelegate* action);
    static void RunJS(uDelegate* action);
};
// }

}}} // ::g::Fuse::Scripting
