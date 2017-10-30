// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Layout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct RequestBringIntoViewArgs;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public sealed class RequestBringIntoViewArgs :74
// {
uType* RequestBringIntoViewArgs_typeof();
void RequestBringIntoViewArgs__ctor_1_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual* elm);
void RequestBringIntoViewArgs__New2_fn(::g::Fuse::Visual* elm, RequestBringIntoViewArgs** __retval);
void RequestBringIntoViewArgs__get_Visual_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual** __retval);
void RequestBringIntoViewArgs__set_Visual_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual* value);

struct RequestBringIntoViewArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Visual*> _Visual;

    void ctor_1(::g::Fuse::Visual* elm);
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static RequestBringIntoViewArgs* New2(::g::Fuse::Visual* elm);
};
// }

}} // ::g::Fuse
