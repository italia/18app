// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/AppInitialized.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct AppInitialized;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal static class AppInitialized :15
// {
uClassType* AppInitialized_typeof();
void AppInitialized__On_fn(::g::Fuse::Scripting::Context* context, uDelegate* action);
void AppInitialized__Reset_fn();

struct AppInitialized : uObject
{
    static bool _initialized_;
    static bool& _initialized() { return _initialized_; }

    static void On(::g::Fuse::Scripting::Context* context, uDelegate* action);
    static void Reset();
};
// }

}}} // ::g::Fuse::Scripting
