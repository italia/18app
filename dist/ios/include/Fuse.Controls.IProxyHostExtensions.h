// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/GraphicsView.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct IProxyHostExtensions;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static class IProxyHostExtensions :71
// {
uClassType* IProxyHostExtensions_typeof();
void IProxyHostExtensions__FindProxyHost_fn(::g::Fuse::Visual* visual, uObject** __retval);

struct IProxyHostExtensions : uObject
{
    static uObject* FindProxyHost(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Controls
