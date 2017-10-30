// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct RouteModificationCommand__ArgumentArrayAdapter;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// protected sealed class RouteModificationCommand.ArgumentArrayAdapter :121
// {
struct RouteModificationCommand__ArgumentArrayAdapter_type : uType
{
    ::g::Fuse::IArray interface0;
};

RouteModificationCommand__ArgumentArrayAdapter_type* RouteModificationCommand__ArgumentArrayAdapter_typeof();
void RouteModificationCommand__ArgumentArrayAdapter__ctor__fn(RouteModificationCommand__ArgumentArrayAdapter* __this, uArray* args);
void RouteModificationCommand__ArgumentArrayAdapter__get_Item_fn(RouteModificationCommand__ArgumentArrayAdapter* __this, int* index, uObject** __retval);
void RouteModificationCommand__ArgumentArrayAdapter__get_Length_fn(RouteModificationCommand__ArgumentArrayAdapter* __this, int* __retval);
void RouteModificationCommand__ArgumentArrayAdapter__New1_fn(uArray* args, RouteModificationCommand__ArgumentArrayAdapter** __retval);

struct RouteModificationCommand__ArgumentArrayAdapter : uObject
{
    uStrong<uArray*> _args;

    void ctor_(uArray* args);
    uObject* Item(int index);
    int Length();
    static RouteModificationCommand__ArgumentArrayAdapter* New1(uArray* args);
};
// }

}}} // ::g::Fuse::Navigation
