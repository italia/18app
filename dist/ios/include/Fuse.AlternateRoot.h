// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/AlternateRoot.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct AlternateRoot;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public sealed class AlternateRoot :30
// {
::g::Fuse::Node_type* AlternateRoot_typeof();
void AlternateRoot__ctor_3_fn(AlternateRoot* __this);
void AlternateRoot__Add1_fn(AlternateRoot* __this);
void AlternateRoot__get_IsEnabled_fn(AlternateRoot* __this, bool* __retval);
void AlternateRoot__set_IsEnabled_fn(AlternateRoot* __this, bool* value);
void AlternateRoot__New2_fn(AlternateRoot** __retval);
void AlternateRoot__get_Node_fn(AlternateRoot* __this, ::g::Fuse::Node** __retval);
void AlternateRoot__set_Node_fn(AlternateRoot* __this, ::g::Fuse::Node* value);
void AlternateRoot__OnRooted_fn(AlternateRoot* __this);
void AlternateRoot__OnUnrooted_fn(AlternateRoot* __this);
void AlternateRoot__get_ParentNode_fn(AlternateRoot* __this, ::g::Fuse::Visual** __retval);
void AlternateRoot__set_ParentNode_fn(AlternateRoot* __this, ::g::Fuse::Visual* value);
void AlternateRoot__get_PreserveContext_fn(AlternateRoot* __this, bool* __retval);
void AlternateRoot__set_PreserveContext_fn(AlternateRoot* __this, bool* value);
void AlternateRoot__Remove1_fn(AlternateRoot* __this);

struct AlternateRoot : ::g::Fuse::Behavior
{
    bool _isEnabled;
    uStrong< ::g::Fuse::Node*> _node;
    uStrong< ::g::Fuse::Visual*> _parentNode;
    bool _preserveContext;

    void ctor_3();
    void Add1();
    bool IsEnabled();
    void IsEnabled(bool value);
    ::g::Fuse::Node* Node();
    void Node(::g::Fuse::Node* value);
    ::g::Fuse::Visual* ParentNode();
    void ParentNode(::g::Fuse::Visual* value);
    bool PreserveContext();
    void PreserveContext(bool value);
    void Remove1();
    static AlternateRoot* New2();
};
// }

}} // ::g::Fuse
