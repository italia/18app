// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.DataFinder.h>
#include <Fuse.Node.IDataEnumerator.h>
#include <Fuse.Node.IDataListener.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Node__DataWatcher;}}

namespace g{
namespace Fuse{

// private sealed class Node.DataWatcher :35
// {
struct Node__DataWatcher_type : ::g::Fuse::Node__DataFinder_type
{
    ::g::Fuse::Node__IDataListener interface1;
};

Node__DataWatcher_type* Node__DataWatcher_typeof();
void Node__DataWatcher__ctor_1_fn(Node__DataWatcher* __this, ::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key);
void Node__DataWatcher__Dispose_fn(Node__DataWatcher* __this);
void Node__DataWatcher__FuseNodeIDataListenerOnDataChanged_fn(Node__DataWatcher* __this);
void Node__DataWatcher__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key, Node__DataWatcher** __retval);
void Node__DataWatcher__Resolve_fn(Node__DataWatcher* __this, uObject* data);
void Node__DataWatcher__Subscribe_fn(Node__DataWatcher* __this);
void Node__DataWatcher__Unsubscribe_fn(Node__DataWatcher* __this);
void Node__DataWatcher__Update_fn(Node__DataWatcher* __this);

struct Node__DataWatcher : ::g::Fuse::Node__DataFinder
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong<uObject*> _data;
    uStrong< ::g::Fuse::Node*> _node;
    uStrong< ::g::Fuse::Scripting::Function*> _updateCallback;

    void ctor_1(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key);
    void Dispose();
    void Subscribe();
    void Unsubscribe();
    void Update();
    static Node__DataWatcher* New1(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key);
};
// }

}} // ::g::Fuse
