// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct UpdateListener;}}

namespace g{
namespace Fuse{

// internal sealed class UpdateListener :44
// {
uType* UpdateListener_typeof();
void UpdateListener__ctor__fn(UpdateListener* __this);
void UpdateListener__Invoke_fn(UpdateListener* __this);
void UpdateListener__New1_fn(UpdateListener** __retval);

struct UpdateListener : uObject
{
    uStrong<uDelegate*> action;
    int deferFrame;
    bool removed;
    int sequence;
    uStrong<uObject*> update;

    void ctor_();
    void Invoke();
    static UpdateListener* New1();
};
// }

}} // ::g::Fuse
