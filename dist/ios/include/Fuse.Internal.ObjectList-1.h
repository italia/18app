// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/ObjectList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.ObjectList-1.Node.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}
namespace g{namespace Fuse{namespace Internal{struct ObjectList__Enumerator;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class ObjectList<T> :13
// {
struct ObjectList_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

ObjectList_type* ObjectList_typeof();
void ObjectList__ctor__fn(ObjectList* __this, int* equality);
void ObjectList__Add_fn(ObjectList* __this, uObject* value);
void ObjectList__AllocNext_fn(ObjectList* __this, int* __retval);
void ObjectList__CleanupVersion_fn(ObjectList* __this);
void ObjectList__Clear_fn(ObjectList* __this);
void ObjectList__CollapseNode_fn(ObjectList* __this, int* q);
void ObjectList__Contains_fn(ObjectList* __this, uObject* value, bool* __retval);
void ObjectList__get_Count_fn(ObjectList* __this, int* __retval);
void ObjectList__Equals2_fn(ObjectList* __this, uObject* a, uObject* b, bool* __retval);
void ObjectList__GetEnumerator_fn(ObjectList* __this, uObject** __retval);
void ObjectList__GetEnumeratorStruct_fn(ObjectList* __this, bool* versionLock, ObjectList__Enumerator* __retval);
void ObjectList__Grow_fn(ObjectList* __this, int* ncap);
void ObjectList__Insert_fn(ObjectList* __this, int* index, uObject* value);
void ObjectList__get_Item_fn(ObjectList* __this, int* index, uObject** __retval);
void ObjectList__Lock_fn(ObjectList* __this, int8_t* __retval);
void ObjectList__New1_fn(uType* __type, int* equality, ObjectList** __retval);
void ObjectList__NodeAt_fn(ObjectList* __this, int* index, int* __retval);
void ObjectList__NodeFor_fn(ObjectList* __this, uObject* value, int* __retval);
void ObjectList__Order_fn(ObjectList* __this);
void ObjectList__Remove_fn(ObjectList* __this, uObject* value, bool* __retval);
void ObjectList__RemoveAt_fn(ObjectList* __this, int* index);
void ObjectList__RemoveNode_fn(ObjectList* __this, int* q);
void ObjectList__Unalloc_fn(ObjectList* __this, int* q);
void ObjectList__Unlock_fn(ObjectList* __this);

struct ObjectList : uObject
{
    int _capacity;
    int _equality;
    int _free;
    int8_t _lockCount;
    int8_t _lockVersion;
    int _nodeHead;
    uStrong<uArray*> _nodes;
    int _nodeTail;
    bool _ordered;
    int _size;

    void ctor_(int equality);
    void Add(uObject* value);
    int AllocNext();
    void CleanupVersion();
    void Clear();
    void CollapseNode(int q);
    bool Contains(uObject* value);
    int Count();
    bool Equals2(uObject* a, uObject* b);
    uObject* GetEnumerator();
    ObjectList__Enumerator GetEnumeratorStruct(bool versionLock);
    void Grow(int ncap);
    void Insert(int index, uObject* value);
    uObject* Item(int index);
    int8_t Lock();
    int NodeAt(int index);
    int NodeFor(uObject* value);
    void Order();
    bool Remove(uObject* value);
    void RemoveAt(int index);
    void RemoveNode(int q);
    void Unalloc(int q);
    void Unlock();
    static ObjectList* New1(uType* __type, int equality);
};
// }

}}} // ::g::Fuse::Internal
