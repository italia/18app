// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Uno{
namespace Collections{

// public struct Dictionary<TKey, TValue>.Enumerator :23
// {
struct Dictionary__Enumerator_type : uStructType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

Dictionary__Enumerator_type* Dictionary__Enumerator_typeof();
void Dictionary__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source);
void Dictionary__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval);
void Dictionary__Enumerator__Dispose_fn(uTRef __this, uType* __type);
void Dictionary__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval);
void Dictionary__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval);
void Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type);

template<class TKey, class TValue>
struct Dictionary__Enumerator
{
    uStrong< ::g::Uno::Collections::Dictionary*> _source;
    ::g::Uno::Collections::KeyValuePair<TKey, TValue> _current;
    int _iterator;
    int _version;

    void ctor_(uType* __type, ::g::Uno::Collections::Dictionary* source) { Dictionary__Enumerator__ctor__fn(this, __type, source); }
    ::g::Uno::Collections::KeyValuePair<TKey, TValue> Current(uType* __type) { ::g::Uno::Collections::KeyValuePair<TKey, TValue> __retval; return Dictionary__Enumerator__get_Current_fn(this, __type, &__retval), __retval; }
    void Dispose(uType* __type) { Dictionary__Enumerator__Dispose_fn(this, __type); }
    bool MoveNext(uType* __type) { bool __retval; return Dictionary__Enumerator__MoveNext_fn(this, __type, &__retval), __retval; }
};

template<class TKey, class TValue>
Dictionary__Enumerator<TKey, TValue> Dictionary__Enumerator__New1(uType* __type, ::g::Uno::Collections::Dictionary* source) { Dictionary__Enumerator<TKey, TValue> __retval; return Dictionary__Enumerator__New1_fn(__type, source, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
