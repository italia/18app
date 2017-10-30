// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/MiniList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct MiniList;}}}
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal struct MiniList<T> :25
// {
struct MiniList_type : uStructType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

MiniList_type* MiniList_typeof();
void MiniList__Add_fn(MiniList* __this, uType* __type, uObject* value);
void MiniList__get_AsList_fn(MiniList* __this, uType* __type, ::g::Fuse::Internal::ObjectList** __retval);
void MiniList__Clear_fn(MiniList* __this, uType* __type);
void MiniList__Contains_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval);
void MiniList__get_Count_fn(MiniList* __this, uType* __type, int* __retval);
void MiniList__GetEnumerator_fn(MiniList* __this, uType* __type, uObject** __retval);
void MiniList__Insert_fn(MiniList* __this, uType* __type, int* index, uObject* value);
void MiniList__get_Item_fn(MiniList* __this, uType* __type, int* index, uObject** __retval);
void MiniList__Remove_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval);
void MiniList__RemoveAt_fn(MiniList* __this, uType* __type, int* index);

struct MiniList
{
    uStrong<uObject*> _list;
    int _mode;

    void Add(uType* __type, uObject* value);
    ::g::Fuse::Internal::ObjectList* AsList(uType* __type);
    void Clear(uType* __type);
    bool Contains(uType* __type, uObject* value);
    int Count(uType* __type);
    uObject* GetEnumerator(uType* __type);
    void Insert(uType* __type, int index, uObject* value);
    uObject* Item(uType* __type, int index);
    bool Remove(uType* __type, uObject* value);
    void RemoveAt(uType* __type, int index);
};
// }

}}} // ::g::Fuse::Internal
