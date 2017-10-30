// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/LinkedList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct LinkedList;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class LinkedListNode<T> :6
// {
uType* LinkedListNode_typeof();
void LinkedListNode__ctor__fn(LinkedListNode* __this, void* value);
void LinkedListNode__get_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList** __retval);
void LinkedListNode__set_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList* value);
void LinkedListNode__New1_fn(uType* __type, void* value, LinkedListNode** __retval);
void LinkedListNode__get_Next_fn(LinkedListNode* __this, LinkedListNode** __retval);
void LinkedListNode__set_Next_fn(LinkedListNode* __this, LinkedListNode* value);
void LinkedListNode__get_Previous_fn(LinkedListNode* __this, LinkedListNode** __retval);
void LinkedListNode__set_Previous_fn(LinkedListNode* __this, LinkedListNode* value);
void LinkedListNode__get_Value_fn(LinkedListNode* __this, uTRef __retval);
void LinkedListNode__set_Value_fn(LinkedListNode* __this, void* value);

struct LinkedListNode : uObject
{
    uStrong< ::g::Uno::Collections::LinkedList*> _List;
    uStrong<LinkedListNode*> _Next;
    uStrong<LinkedListNode*> _Previous;
    uTField _Value() { return __type->Field(this, 3); }

    template<class T>
    void ctor_(T value) { LinkedListNode__ctor__fn(this, uConstrain(__type->T(0), value)); }
    ::g::Uno::Collections::LinkedList* List();
    void List(::g::Uno::Collections::LinkedList* value);
    LinkedListNode* Next();
    void Next(LinkedListNode* value);
    LinkedListNode* Previous();
    void Previous(LinkedListNode* value);
    template<class T>
    T Value() { T __retval; return LinkedListNode__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { LinkedListNode__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    static LinkedListNode* New1(uType* __type, T value) { LinkedListNode* __retval; return LinkedListNode__New1_fn(__type, uConstrain(__type->T(0), value), &__retval), __retval; }
};
// }

}}} // ::g::Uno::Collections
