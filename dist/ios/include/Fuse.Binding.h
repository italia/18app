// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Binding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Binding;}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public abstract class Binding :5
// {
struct Binding_type : uType
{
    void(*fp_OnRooted)(::g::Fuse::Binding*);
    void(*fp_OnUnrooted)(::g::Fuse::Binding*);
};

Binding_type* Binding_typeof();
void Binding__ctor__fn(Binding* __this);
void Binding__OnRooted_fn(Binding* __this);
void Binding__OnUnrooted_fn(Binding* __this);
void Binding__get_Parent_fn(Binding* __this, ::g::Fuse::Node** __retval);
void Binding__set_Parent_fn(Binding* __this, ::g::Fuse::Node* value);
void Binding__Root_fn(Binding* __this, ::g::Fuse::Node* parent);
void Binding__Unroot_fn(Binding* __this);

struct Binding : uObject
{
    uStrong< ::g::Fuse::Node*> _Parent;

    void ctor_();
    void OnRooted() { (((Binding_type*)__type)->fp_OnRooted)(this); }
    void OnUnrooted() { (((Binding_type*)__type)->fp_OnUnrooted)(this); }
    ::g::Fuse::Node* Parent();
    void Parent(::g::Fuse::Node* value);
    void Root(::g::Fuse::Node* parent);
    void Unroot();
    static void OnRooted(Binding* __this) { Binding__OnRooted_fn(__this); }
    static void OnUnrooted(Binding* __this) { Binding__OnUnrooted_fn(__this); }
};
// }

}} // ::g::Fuse
