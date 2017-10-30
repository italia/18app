// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.3.1/iOS/NavDelegate.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct NavDelegate;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public static extern class NavDelegate :12
// {
uClassType* NavDelegate_typeof();
void NavDelegate__Create_fn(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes, uDelegate* hasURISchemeHandler, ::g::ObjC::Object** __retval);

struct NavDelegate : uObject
{
    static ::g::ObjC::Object* Create(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes, uDelegate* hasURISchemeHandler);
};
// }

}}}} // ::g::Fuse::iOS::Controls
