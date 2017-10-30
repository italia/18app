// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.3.1/iOSInterop.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class iOSDeviceInterop :13
// {
static void iOSDeviceInterop_build(uType* type)
{
}

uClassType* iOSDeviceInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSDeviceInterop", options);
    type->fp_build_ = iOSDeviceInterop_build;
    return type;
}

// public static extern void LaunchUriiOS(string uri) :53
void iOSDeviceInterop__LaunchUriiOS_fn(uString* uri)
{
    iOSDeviceInterop::LaunchUriiOS(uri);
}

// public static extern void LaunchUriiOS(string uri) [static] :53
void iOSDeviceInterop::LaunchUriiOS(uString* uri)
{
    @autoreleasepool
    {
        [] (::NSString* uri) -> void
        {
            [[UIApplication sharedApplication] openURL:[NSURL URLWithString:uri]];
        } (::uObjC::NativeString(uri));
        
    }
    
}
// }

}}}} // ::g::Fuse::iOS::Bindings
