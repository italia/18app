// This file was generated based on '/Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Email/1.3.1/Email/EmailLauncher.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LauncherImpl{struct EmailLauncher;}}}

namespace g{
namespace Fuse{
namespace LauncherImpl{

// public static class EmailLauncher :15
// {
uClassType* EmailLauncher_typeof();
void EmailLauncher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message);

struct EmailLauncher : uObject
{
    static void LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message);
};
// }

}}} // ::g::Fuse::LauncherImpl
