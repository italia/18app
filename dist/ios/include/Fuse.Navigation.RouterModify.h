// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterModify.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterModify;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct NodeExpressionBinding;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class RouterModify :84
// {
struct RouterModify_type : ::g::Fuse::Triggers::Actions::TriggerAction_type
{
    ::g::Fuse::Reactive::IListener interface0;
};

RouterModify_type* RouterModify_typeof();
void RouterModify__ctor_3_fn(RouterModify* __this, int* flags);
void RouterModify__DisposePathSub_fn(RouterModify* __this);
void RouterModify__FuseReactiveIListenerOnNewData_fn(RouterModify* __this, uObject* source, uObject* value);
void RouterModify__get_How_fn(RouterModify* __this, int* __retval);
void RouterModify__set_How_fn(RouterModify* __this, int* value);
void RouterModify__New3_fn(int* flags, RouterModify** __retval);
void RouterModify__OnUnrooted_fn(RouterModify* __this);
void RouterModify__get_Path_fn(RouterModify* __this, uObject** __retval);
void RouterModify__set_Path_fn(RouterModify* __this, uObject* value);
void RouterModify__Perform_fn(RouterModify* __this, ::g::Fuse::Node* n);
void RouterModify__PerformRoute_fn(RouterModify* __this, ::g::Fuse::Node* n, ::g::Fuse::Navigation::Route* route);
void RouterModify__get_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router** __retval);
void RouterModify__set_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router* value);

struct RouterModify : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _path;
    uStrong< ::g::Fuse::Reactive::NodeExpressionBinding*> _pathSub;
    uStrong< ::g::Fuse::Navigation::RouterRequest*> _request;
    uStrong< ::g::Fuse::Navigation::Router*> _Router;

    void ctor_3(int flags);
    void DisposePathSub();
    int How();
    void How(int value);
    uObject* Path();
    void Path(uObject* value);
    void PerformRoute(::g::Fuse::Node* n, ::g::Fuse::Navigation::Route* route);
    ::g::Fuse::Navigation::Router* Router();
    void Router(::g::Fuse::Navigation::Router* value);
    static RouterModify* New3(int flags);
};
// }

}}} // ::g::Fuse::Navigation
