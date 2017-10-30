// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/IRouterOutlet.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObserverMap;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class RouterPage :41
// {
uType* RouterPage_typeof();
void RouterPage__ctor__fn(RouterPage* __this);
void RouterPage__BubbleHistoryChanged_fn(::g::Fuse::Node* at);
void RouterPage__get_ChildRouterPages_fn(RouterPage* __this, ::g::Fuse::Reactive::ObserverMap** __retval);
void RouterPage__New1_fn(RouterPage** __retval);
void RouterPage__ToString_fn(RouterPage* __this, uString** __retval);
void RouterPage__get_Visual_fn(RouterPage* __this, ::g::Fuse::Visual** __retval);
void RouterPage__set_Visual_fn(RouterPage* __this, ::g::Fuse::Visual* value);

struct RouterPage : uObject
{
    uStrong< ::g::Fuse::Reactive::ObserverMap*> _childRouterPages;
    uStrong<uObject*> Context;
    uWeak< ::g::Fuse::Node*> Node;
    uStrong<uString*> Parameter;
    uStrong<uString*> Path;

    void ctor_();
    ::g::Fuse::Reactive::ObserverMap* ChildRouterPages();
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static void BubbleHistoryChanged(::g::Fuse::Node* at);
    static RouterPage* New1();
};
// }

}}} // ::g::Fuse::Navigation
