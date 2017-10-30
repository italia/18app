// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Children.SafeIterator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct Visual__SafeIterator;}}

namespace g{
namespace Fuse{

// private sealed class Visual.SafeIterator :53
// {
struct Visual__SafeIterator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

Visual__SafeIterator_type* Visual__SafeIterator_typeof();
void Visual__SafeIterator__ctor__fn(Visual__SafeIterator* __this, ::g::Fuse::Visual* v);
void Visual__SafeIterator__AddToIteratorList_fn(Visual__SafeIterator* __this);
void Visual__SafeIterator__get_Current_fn(Visual__SafeIterator* __this, ::g::Fuse::Node** __retval);
void Visual__SafeIterator__Dispose_fn(Visual__SafeIterator* __this);
void Visual__SafeIterator__MoveNext_fn(Visual__SafeIterator* __this, bool* __retval);
void Visual__SafeIterator__get_MultipleIterators_fn(Visual__SafeIterator* __this, bool* __retval);
void Visual__SafeIterator__New1_fn(::g::Fuse::Visual* v, Visual__SafeIterator** __retval);
void Visual__SafeIterator__RemoveFromIteratorList_fn(Visual__SafeIterator* __this);
void Visual__SafeIterator__Reset_fn(Visual__SafeIterator* __this);
void Visual__SafeIterator__SecureCopy_fn(Visual__SafeIterator* __this);

struct Visual__SafeIterator : uObject
{
    uStrong<uArray*> _array;
    uStrong< ::g::Fuse::Node*> _current;
    uStrong<Visual__SafeIterator*> _nextIterator;
    int _pos;
    bool _reachedEnd;
    uStrong< ::g::Fuse::Visual*> _v;

    void ctor_(::g::Fuse::Visual* v);
    void AddToIteratorList();
    ::g::Fuse::Node* Current();
    void Dispose();
    bool MoveNext();
    bool MultipleIterators();
    void RemoveFromIteratorList();
    void Reset();
    void SecureCopy();
    static Visual__SafeIterator* New1(::g::Fuse::Visual* v);
};
// }

}} // ::g::Fuse
