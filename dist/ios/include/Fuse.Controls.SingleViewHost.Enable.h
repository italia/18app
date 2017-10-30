// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/SingleViewHost.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct SingleViewHost;}}}
namespace g{namespace Fuse{namespace Controls{struct SingleViewHost__Enable;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class SingleViewHost.Enable :18
// {
struct SingleViewHost__Enable_type : uType
{
    ::g::Uno::IDisposable interface0;
};

SingleViewHost__Enable_type* SingleViewHost__Enable_typeof();
void SingleViewHost__Enable__ctor__fn(SingleViewHost__Enable* __this, ::g::Fuse::Controls::SingleViewHost* host);
void SingleViewHost__Enable__New1_fn(::g::Fuse::Controls::SingleViewHost* host, SingleViewHost__Enable** __retval);
void SingleViewHost__Enable__NextFrame_fn(SingleViewHost__Enable* __this);
void SingleViewHost__Enable__UnoIDisposableDispose_fn(SingleViewHost__Enable* __this);

struct SingleViewHost__Enable : uObject
{
    bool _canceled;
    uStrong< ::g::Fuse::Controls::SingleViewHost*> _host;

    void ctor_(::g::Fuse::Controls::SingleViewHost* host);
    void NextFrame();
    static SingleViewHost__Enable* New1(::g::Fuse::Controls::SingleViewHost* host);
};
// }

}}} // ::g::Fuse::Controls
