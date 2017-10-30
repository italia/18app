// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.3.1/iOSInterop.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct iOSDeviceInterop;}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class iOSDeviceInterop :13
// {
uClassType* iOSDeviceInterop_typeof();
void iOSDeviceInterop__LaunchUriiOS_fn(uString* uri);

struct iOSDeviceInterop : uObject
{
    static void LaunchUriiOS(uString* uri);
};
// }

}}}} // ::g::Fuse::iOS::Bindings
