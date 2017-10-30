// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.IDataEnumerator.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node__DataFinder;}}

namespace g{
namespace Fuse{

// internal abstract class Node.DataFinder :33
// {
struct Node__DataFinder_type : uType
{
    ::g::Fuse::Node__IDataEnumerator interface0;
    void(*fp_Resolve)(::g::Fuse::Node__DataFinder*, uObject*);
};

Node__DataFinder_type* Node__DataFinder_typeof();
void Node__DataFinder__ctor__fn(Node__DataFinder* __this, uString* key);
void Node__DataFinder__get_Key_fn(Node__DataFinder* __this, uString** __retval);
void Node__DataFinder__NextData_fn(Node__DataFinder* __this, uObject* data, bool* __retval);

struct Node__DataFinder : uObject
{
    uStrong<uString*> _key;

    void ctor_(uString* key);
    uString* Key();
    bool NextData(uObject* data);
    void Resolve(uObject* data) { (((Node__DataFinder_type*)__type)->fp_Resolve)(this, data); }
};
// }

}} // ::g::Fuse
