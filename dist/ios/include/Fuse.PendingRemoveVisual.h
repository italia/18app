// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.BeginRemove.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IUpdateListener.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PendingRemoveVisual;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public sealed class PendingRemoveVisual :5
// {
struct PendingRemoveVisual_type : uType
{
    ::g::Fuse::IUpdateListener interface0;
};

PendingRemoveVisual_type* PendingRemoveVisual_typeof();
void PendingRemoveVisual__ctor__fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then);
void PendingRemoveVisual__AddSubscriber_fn(PendingRemoveVisual* __this);
void PendingRemoveVisual__get_Child_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual** __retval);
void PendingRemoveVisual__set_Child_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* value);
void PendingRemoveVisual__FuseIUpdateListenerUpdate_fn(PendingRemoveVisual* __this);
void PendingRemoveVisual__get_HasSubscribers_fn(PendingRemoveVisual* __this, bool* __retval);
void PendingRemoveVisual__New1_fn(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then, PendingRemoveVisual** __retval);
void PendingRemoveVisual__get_Parent_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual** __retval);
void PendingRemoveVisual__set_Parent_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* value);
void PendingRemoveVisual__Remove_fn(PendingRemoveVisual* __this);
void PendingRemoveVisual__RemoveSubscriber_fn(PendingRemoveVisual* __this);

struct PendingRemoveVisual : uObject
{
    bool _done;
    uStrong<uDelegate*> _then;
    int subscribers;
    uStrong< ::g::Fuse::Visual*> _Child;
    uStrong< ::g::Fuse::Visual*> _Parent;

    void ctor_(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then);
    void AddSubscriber();
    ::g::Fuse::Visual* Child();
    void Child(::g::Fuse::Visual* value);
    bool HasSubscribers();
    ::g::Fuse::Visual* Parent();
    void Parent(::g::Fuse::Visual* value);
    void Remove();
    void RemoveSubscriber();
    static PendingRemoveVisual* New1(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then);
};
// }

}} // ::g::Fuse
