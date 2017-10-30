// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/NodeExpressionBinding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IContext.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct NodeExpressionBinding;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class NodeExpressionBinding :9
// {
struct NodeExpressionBinding_type : uType
{
    ::g::Fuse::Reactive::IContext interface0;
    ::g::Uno::IDisposable interface1;
};

NodeExpressionBinding_type* NodeExpressionBinding_typeof();
void NodeExpressionBinding__ctor__fn(NodeExpressionBinding* __this, uObject* expr, ::g::Fuse::Node* node, uObject* listener);
void NodeExpressionBinding__CompleteInit_fn(NodeExpressionBinding* __this);
void NodeExpressionBinding__Dispose_fn(NodeExpressionBinding* __this);
void NodeExpressionBinding__FuseReactiveIContextget_Node_fn(NodeExpressionBinding* __this, ::g::Fuse::Node** __retval);
void NodeExpressionBinding__FuseReactiveIContextSubscribe_fn(NodeExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval);
void NodeExpressionBinding__New1_fn(uObject* expr, ::g::Fuse::Node* node, uObject* listener, NodeExpressionBinding** __retval);
void NodeExpressionBinding__SubscribeResource_fn(NodeExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval);

struct NodeExpressionBinding : uObject
{
    uStrong<uObject*> _expr;
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Node*> _node;
    uStrong<uObject*> _sub;

    void ctor_(uObject* expr, ::g::Fuse::Node* node, uObject* listener);
    void CompleteInit();
    void Dispose();
    uObject* SubscribeResource(uObject* source, uString* key, uObject* listener);
    static NodeExpressionBinding* New1(uObject* expr, ::g::Fuse::Node* node, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
