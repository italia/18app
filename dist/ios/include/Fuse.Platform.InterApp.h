// This file was generated based on /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/InterApp.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Platform{struct InterApp;}}}

namespace g{
namespace Fuse{
namespace Platform{

// public static class InterApp :9
// {
uClassType* InterApp_typeof();
void InterApp__OnReceivedURI_fn(uObject* sender, uString* uri);
void InterApp__add_ReceivedURI_fn(uDelegate* value);
void InterApp__remove_ReceivedURI_fn(uDelegate* value);

struct InterApp : uObject
{
    static uSStrong<uDelegate*> ReceivedURI1_;
    static uSStrong<uDelegate*>& ReceivedURI1() { return InterApp_typeof()->Init(), ReceivedURI1_; }

    static void OnReceivedURI(uObject* sender, uString* uri);
    static void add_ReceivedURI(uDelegate* value);
    static void remove_ReceivedURI(uDelegate* value);
};
// }

}}} // ::g::Fuse::Platform
