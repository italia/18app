// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Trigger.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction;}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger__DeferredItem;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class Trigger.DeferredItem :275
// {
uType* Trigger__DeferredItem_typeof();
void Trigger__DeferredItem__ctor__fn(Trigger__DeferredItem* __this);
void Trigger__DeferredItem__New1_fn(Trigger__DeferredItem** __retval);
void Trigger__DeferredItem__Perform_fn(Trigger__DeferredItem* __this);

struct Trigger__DeferredItem : uObject
{
    uStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> Action;
    uStrong< ::g::Fuse::Node*> Node;

    void ctor_();
    void Perform();
    static Trigger__DeferredItem* New1();
};
// }

}}} // ::g::Fuse::Triggers
