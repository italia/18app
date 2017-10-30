// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/LinkedList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct LinkedList;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class LinkedList<T> :20
// {
struct LinkedList_type : uType
{
    ::g::Uno::Collections::ICollection interface0;
    ::g::Uno::Collections::IEnumerable interface1;
};

LinkedList_type* LinkedList_typeof();
void LinkedList__ctor__fn(LinkedList* __this);
void LinkedList__AddAfter_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, void* value, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__AddAfter1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode);
void LinkedList__AddBefore_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, void* value, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__AddBefore1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode);
void LinkedList__AddFirst_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__AddFirst1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node);
void LinkedList__AddLast_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__AddLast1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node);
void LinkedList__Clear_fn(LinkedList* __this);
void LinkedList__Contains_fn(LinkedList* __this, void* value, bool* __retval);
void LinkedList__get_Count_fn(LinkedList* __this, int* __retval);
void LinkedList__set_Count_fn(LinkedList* __this, int* value);
void LinkedList__Find_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__get_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__set_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value);
void LinkedList__GetEnumerator_fn(LinkedList* __this, uObject** __retval);
void LinkedList__get_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval);
void LinkedList__set_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value);
void LinkedList__New1_fn(uType* __type, LinkedList** __retval);
void LinkedList__Remove_fn(LinkedList* __this, void* value, bool* __retval);
void LinkedList__Remove1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node);
void LinkedList__UncheckedAddAfter_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode);
void LinkedList__UncheckedAddBefore_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode);
void LinkedList__UnoCollectionsICollectionTAdd_fn(LinkedList* __this, void* value);

struct LinkedList : uObject
{
    int _Count;
    uStrong< ::g::Uno::Collections::LinkedListNode*> _First;
    uStrong< ::g::Uno::Collections::LinkedListNode*> _Last;

    void ctor_();
    template<class T>
    ::g::Uno::Collections::LinkedListNode* AddAfter(::g::Uno::Collections::LinkedListNode* node, T value) { ::g::Uno::Collections::LinkedListNode* __retval; return LinkedList__AddAfter_fn(this, node, uConstrain(__type->T(0), value), &__retval), __retval; }
    void AddAfter1(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode);
    template<class T>
    ::g::Uno::Collections::LinkedListNode* AddBefore(::g::Uno::Collections::LinkedListNode* node, T value) { ::g::Uno::Collections::LinkedListNode* __retval; return LinkedList__AddBefore_fn(this, node, uConstrain(__type->T(0), value), &__retval), __retval; }
    void AddBefore1(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode);
    template<class T>
    ::g::Uno::Collections::LinkedListNode* AddFirst(T value) { ::g::Uno::Collections::LinkedListNode* __retval; return LinkedList__AddFirst_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    void AddFirst1(::g::Uno::Collections::LinkedListNode* node);
    template<class T>
    ::g::Uno::Collections::LinkedListNode* AddLast(T value) { ::g::Uno::Collections::LinkedListNode* __retval; return LinkedList__AddLast_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    void AddLast1(::g::Uno::Collections::LinkedListNode* node);
    void Clear();
    template<class T>
    bool Contains(T value) { bool __retval; return LinkedList__Contains_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    int Count();
    void Count(int value);
    template<class T>
    ::g::Uno::Collections::LinkedListNode* Find(T value) { ::g::Uno::Collections::LinkedListNode* __retval; return LinkedList__Find_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    ::g::Uno::Collections::LinkedListNode* First();
    void First(::g::Uno::Collections::LinkedListNode* value);
    uObject* GetEnumerator();
    ::g::Uno::Collections::LinkedListNode* Last();
    void Last(::g::Uno::Collections::LinkedListNode* value);
    template<class T>
    bool Remove(T value) { bool __retval; return LinkedList__Remove_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    void Remove1(::g::Uno::Collections::LinkedListNode* node);
    void UncheckedAddAfter(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode);
    void UncheckedAddBefore(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode);
    static LinkedList* New1(uType* __type);
};
// }

}}} // ::g::Uno::Collections
