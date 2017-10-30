// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.IDataEnumerator.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node__FirstDataEnumerator;}}

namespace g{
namespace Fuse{

// private sealed class Node.FirstDataEnumerator :27
// {
struct Node__FirstDataEnumerator_type : uType
{
    ::g::Fuse::Node__IDataEnumerator interface0;
};

Node__FirstDataEnumerator_type* Node__FirstDataEnumerator_typeof();
void Node__FirstDataEnumerator__ctor__fn(Node__FirstDataEnumerator* __this);
void Node__FirstDataEnumerator__get_Data_fn(Node__FirstDataEnumerator* __this, uObject** __retval);
void Node__FirstDataEnumerator__set_Data_fn(Node__FirstDataEnumerator* __this, uObject* value);
void Node__FirstDataEnumerator__New1_fn(Node__FirstDataEnumerator** __retval);
void Node__FirstDataEnumerator__NextData_fn(Node__FirstDataEnumerator* __this, uObject* data, bool* __retval);

struct Node__FirstDataEnumerator : uObject
{
    uStrong<uObject*> _Data;

    void ctor_();
    uObject* Data();
    void Data(uObject* value);
    bool NextData(uObject* data);
    static Node__FirstDataEnumerator* New1();
};
// }

}} // ::g::Fuse
