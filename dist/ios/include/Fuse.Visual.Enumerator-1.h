// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Children.Enumerable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct Visual__Enumerator;}}

namespace g{
namespace Fuse{

// private sealed class Visual.Enumerator<T> :24
// {
struct Visual__Enumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

Visual__Enumerator_type* Visual__Enumerator_typeof();
void Visual__Enumerator__ctor__fn(Visual__Enumerator* __this, ::g::Fuse::Visual* parent);
void Visual__Enumerator__get_Current_fn(Visual__Enumerator* __this, ::g::Fuse::Node** __retval);
void Visual__Enumerator__Dispose_fn(Visual__Enumerator* __this);
void Visual__Enumerator__MoveNext_fn(Visual__Enumerator* __this, bool* __retval);
void Visual__Enumerator__New1_fn(uType* __type, ::g::Fuse::Visual* parent, Visual__Enumerator** __retval);
void Visual__Enumerator__Reset_fn(Visual__Enumerator* __this);

struct Visual__Enumerator : uObject
{
    uStrong< ::g::Fuse::Node*> _current;
    uStrong< ::g::Fuse::Visual*> _parent;
    bool _reachedEnd;

    void ctor_(::g::Fuse::Visual* parent);
    ::g::Fuse::Node* Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static Visual__Enumerator* New1(uType* __type, ::g::Fuse::Visual* parent);
};
// }

}} // ::g::Fuse
