// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/RootableList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class RootableList<T> :12
// {
struct RootableList_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

RootableList_type* RootableList_typeof();
void RootableList__ctor__fn(RootableList* __this);
void RootableList__Add_fn(RootableList* __this, void* item);
void RootableList__Clear_fn(RootableList* __this);
void RootableList__Contains_fn(RootableList* __this, void* item, bool* __retval);
void RootableList__get_Count_fn(RootableList* __this, int* __retval);
void RootableList__GetEnumerator_fn(RootableList* __this, uObject** __retval);
void RootableList__Insert_fn(RootableList* __this, int* index, void* item);
void RootableList__get_Item_fn(RootableList* __this, int* index, uTRef __retval);
void RootableList__New1_fn(uType* __type, RootableList** __retval);
void RootableList__OnAdded_fn(RootableList* __this, void* item);
void RootableList__OnRemoved_fn(RootableList* __this, void* item);
void RootableList__Remove_fn(RootableList* __this, void* item, bool* __retval);
void RootableList__RemoveAt_fn(RootableList* __this, int* index);
void RootableList__RootSubscribe_fn(RootableList* __this, uDelegate* added, uDelegate* removed);
void RootableList__RootUnsubscribe_fn(RootableList* __this);
void RootableList__Subscribe_fn(RootableList* __this, uDelegate* added, uDelegate* removed);
void RootableList__Unsubscribe_fn(RootableList* __this);

struct RootableList : uObject
{
    uStrong<uDelegate*> _added;
    uStrong< ::g::Uno::Collections::List*> _items;
    uStrong<uDelegate*> _removed;

    void ctor_();
    template<class T>
    void Add(T item) { RootableList__Add_fn(this, uConstrain(__type->T(0), item)); }
    void Clear();
    template<class T>
    bool Contains(T item) { bool __retval; return RootableList__Contains_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    int Count();
    uObject* GetEnumerator();
    template<class T>
    void Insert(int index, T item) { RootableList__Insert_fn(this, &index, uConstrain(__type->T(0), item)); }
    template<class T>
    T Item(int index) { T __retval; return RootableList__get_Item_fn(this, &index, &__retval), __retval; }
    template<class T>
    void OnAdded(T item) { RootableList__OnAdded_fn(this, uConstrain(__type->T(0), item)); }
    template<class T>
    void OnRemoved(T item) { RootableList__OnRemoved_fn(this, uConstrain(__type->T(0), item)); }
    template<class T>
    bool Remove(T item) { bool __retval; return RootableList__Remove_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    void RemoveAt(int index);
    void RootSubscribe(uDelegate* added, uDelegate* removed);
    void RootUnsubscribe();
    void Subscribe(uDelegate* added, uDelegate* removed);
    void Unsubscribe();
    static RootableList* New1(uType* __type);
};
// }

}}} // ::g::Uno::Collections
