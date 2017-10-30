// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/INavigation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigatedArgs :30
// {
struct NavigatedArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

NavigatedArgs_type* NavigatedArgs_typeof();
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Visual* newVisual);
void NavigatedArgs__FuseScriptingIScriptEventSerialize_fn(NavigatedArgs* __this, uObject* s);
void NavigatedArgs__New2_fn(::g::Fuse::Visual* newVisual, NavigatedArgs** __retval);
void NavigatedArgs__get_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual** __retval);
void NavigatedArgs__set_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual* value);

struct NavigatedArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Visual*> _NewVisual;

    void ctor_1(::g::Fuse::Visual* newVisual);
    ::g::Fuse::Visual* NewVisual();
    void NewVisual(::g::Fuse::Visual* value);
    static NavigatedArgs* New2(::g::Fuse::Visual* newVisual);
};
// }

}}} // ::g::Fuse::Navigation
