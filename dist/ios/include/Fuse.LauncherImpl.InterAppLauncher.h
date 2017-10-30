// This file was generated based on '/Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.InterApp/1.3.1/InterApp/InterAppLauncher.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct InterAppLauncher;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct Uri;}}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// public static class InterAppLauncher :15
// {
uClassType* InterAppLauncher_typeof();
void InterAppLauncher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri);

struct InterAppLauncher : uObject
{
    static void LaunchUri(::g::Uno::Net::Http::Uri* uri);
};
// }

}}} // ::g::Fuse::LauncherImpl
