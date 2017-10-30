// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NodeGroup.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.TemplateSourceImpl.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeGroupBase;}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{

// public abstract class NodeGroupBase :16
// {
::g::Fuse::Node_type* NodeGroupBase_typeof();
void NodeGroupBase__ctor_3_fn(NodeGroupBase* __this, int* flags);
void NodeGroupBase__AddContent_fn(NodeGroupBase* __this);
void NodeGroupBase__FindTemplate_fn(NodeGroupBase* __this, uString* key, ::g::Uno::UX::Template** __retval);
void NodeGroupBase__get_NodeCount_fn(NodeGroupBase* __this, int* __retval);
void NodeGroupBase__get_Nodes_fn(NodeGroupBase* __this, uObject** __retval);
void NodeGroupBase__OnNodeAdded_fn(NodeGroupBase* __this, ::g::Fuse::Node* n);
void NodeGroupBase__OnNodeRemoved_fn(NodeGroupBase* __this, ::g::Fuse::Node* n);
void NodeGroupBase__OnResourceAdded_fn(NodeGroupBase* __this, ::g::Uno::UX::Resource* r);
void NodeGroupBase__OnResourceRemoved_fn(NodeGroupBase* __this, ::g::Uno::UX::Resource* r);
void NodeGroupBase__OnRooted_fn(NodeGroupBase* __this);
void NodeGroupBase__OnUnrooted_fn(NodeGroupBase* __this);
void NodeGroupBase__RemoveContent_fn(NodeGroupBase* __this);
void NodeGroupBase__get_UseContent_fn(NodeGroupBase* __this, bool* __retval);
void NodeGroupBase__set_UseContent_fn(NodeGroupBase* __this, bool* value);

struct NodeGroupBase : ::g::Fuse::Behavior
{
    uStrong<uArray*> _addedNodes;
    bool _contentAdded;
    uStrong< ::g::Uno::Collections::RootableList*> _nodes;
    uStrong< ::g::Uno::Collections::RootableList*> _resources;
    ::g::Fuse::TemplateSourceImpl _templates;
    bool _useContent;
    bool _useTemplates;

    void ctor_3(int flags);
    void AddContent();
    ::g::Uno::UX::Template* FindTemplate(uString* key);
    int NodeCount();
    uObject* Nodes();
    void OnNodeAdded(::g::Fuse::Node* n);
    void OnNodeRemoved(::g::Fuse::Node* n);
    void OnResourceAdded(::g::Uno::UX::Resource* r);
    void OnResourceRemoved(::g::Uno::UX::Resource* r);
    void RemoveContent();
    bool UseContent();
    void UseContent(bool value);
};
// }

}} // ::g::Fuse
