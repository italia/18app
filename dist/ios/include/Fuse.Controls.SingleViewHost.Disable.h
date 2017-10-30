// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/SingleViewHost.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct SingleViewHost;}}}
namespace g{namespace Fuse{namespace Controls{struct SingleViewHost__Disable;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class SingleViewHost.Disable :43
// {
struct SingleViewHost__Disable_type : uType
{
    ::g::Uno::IDisposable interface0;
};

SingleViewHost__Disable_type* SingleViewHost__Disable_typeof();
void SingleViewHost__Disable__ctor__fn(SingleViewHost__Disable* __this, ::g::Fuse::Controls::SingleViewHost* host);
void SingleViewHost__Disable__New1_fn(::g::Fuse::Controls::SingleViewHost* host, SingleViewHost__Disable** __retval);
void SingleViewHost__Disable__NextFrame_fn(SingleViewHost__Disable* __this);
void SingleViewHost__Disable__UnoIDisposableDispose_fn(SingleViewHost__Disable* __this);

struct SingleViewHost__Disable : uObject
{
    bool _canceled;
    uStrong< ::g::Fuse::Controls::SingleViewHost*> _host;

    void ctor_(::g::Fuse::Controls::SingleViewHost* host);
    void NextFrame();
    static SingleViewHost__Disable* New1(::g::Fuse::Controls::SingleViewHost* host);
};
// }

}}} // ::g::Fuse::Controls
