// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/iOSDevice.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct iOSDevice;}}
namespace g{namespace Fuse{struct OSVersion;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// public static extern class iOSDevice :26
// {
uClassType* iOSDevice_typeof();
void iOSDevice__CompensateForOrientation_fn(::g::Uno::Float2* size, ::g::Uno::Float2* __retval);
void iOSDevice__GetiOSVersion_fn(int* major, int* minor, int* patch);
void iOSDevice__IsLandscapeOrientation_fn(bool* __retval);
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::OSVersion** __retval);
void iOSDevice__get_Orientation_fn(int* __retval);

struct iOSDevice : uObject
{
    static uSStrong< ::g::Fuse::OSVersion*> _osVersion_;
    static uSStrong< ::g::Fuse::OSVersion*>& _osVersion() { return _osVersion_; }

    static ::g::Uno::Float2 CompensateForOrientation(::g::Uno::Float2 size);
    static void GetiOSVersion(int* major, int* minor, int* patch);
    static bool IsLandscapeOrientation();
    static ::g::Fuse::OSVersion* OperatingSystemVersion();
    static int Orientation();
};
// }

}} // ::g::Fuse
