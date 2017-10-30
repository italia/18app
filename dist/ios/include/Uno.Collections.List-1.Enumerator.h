// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/List.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Uno{
namespace Collections{

// public struct List<T>.Enumerator :12
// {
struct List__Enumerator_type : uStructType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

List__Enumerator_type* List__Enumerator_typeof();
void List__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::List* source);
void List__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval);
void List__Enumerator__Dispose_fn(uTRef __this, uType* __type);
void List__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval);
void List__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::List* source, uTRef __retval);
void List__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type);

template<class T>
struct List__Enumerator
{
    uStrong< ::g::Uno::Collections::List*> _source;
    int _version;
    int _iterator;
    T _current;

    void ctor_(uType* __type, ::g::Uno::Collections::List* source) { List__Enumerator__ctor__fn(this, __type, source); }
    T Current(uType* __type) { T __retval; return List__Enumerator__get_Current_fn(this, __type, &__retval), __retval; }
    void Dispose(uType* __type) { List__Enumerator__Dispose_fn(this, __type); }
    bool MoveNext(uType* __type) { bool __retval; return List__Enumerator__MoveNext_fn(this, __type, &__retval), __retval; }
};

template<class T>
List__Enumerator<T> List__Enumerator__New1(uType* __type, ::g::Uno::Collections::List* source) { List__Enumerator<T> __retval; return List__Enumerator__New1_fn(__type, source, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
