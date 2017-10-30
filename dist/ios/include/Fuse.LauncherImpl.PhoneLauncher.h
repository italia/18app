// This file was generated based on '/Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.3.1/Phone/PhoneLauncher.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct PhoneLauncher;}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// public static class PhoneLauncher :13
// {
uClassType* PhoneLauncher_typeof();
void PhoneLauncher__LaunchCall_fn(uString* callString);

struct PhoneLauncher : uObject
{
    static void LaunchCall(uString* callString);
};
// }

}}} // ::g::Fuse::LauncherImpl
