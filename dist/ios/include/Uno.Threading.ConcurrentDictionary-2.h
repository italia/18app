// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.3.2/ConcurrentDictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentDictionary;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class ConcurrentDictionary<TKey, TValue> :6
// {
struct ConcurrentDictionary_type : uType
{
    ::g::Uno::Collections::IDictionary interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

ConcurrentDictionary_type* ConcurrentDictionary_typeof();
void ConcurrentDictionary__ctor__fn(ConcurrentDictionary* __this);
void ConcurrentDictionary__Add_fn(ConcurrentDictionary* __this, void* key, void* value);
void ConcurrentDictionary__Add1_fn(ConcurrentDictionary* __this, void* keyValue);
void ConcurrentDictionary__Clear_fn(ConcurrentDictionary* __this);
void ConcurrentDictionary__Contains_fn(ConcurrentDictionary* __this, void* keyValue, bool* __retval);
void ConcurrentDictionary__ContainsKey_fn(ConcurrentDictionary* __this, void* key, bool* __retval);
void ConcurrentDictionary__get_Count_fn(ConcurrentDictionary* __this, int* __retval);
void ConcurrentDictionary__GetEnumerator_fn(ConcurrentDictionary* __this, uObject** __retval);
void ConcurrentDictionary__get_Item_fn(ConcurrentDictionary* __this, void* key, uTRef __retval);
void ConcurrentDictionary__set_Item_fn(ConcurrentDictionary* __this, void* key, void* value);
void ConcurrentDictionary__New1_fn(uType* __type, ConcurrentDictionary** __retval);
void ConcurrentDictionary__Remove_fn(ConcurrentDictionary* __this, void* key, bool* __retval);
void ConcurrentDictionary__Remove1_fn(ConcurrentDictionary* __this, void* keyValue, bool* __retval);
void ConcurrentDictionary__TryGetValue_fn(ConcurrentDictionary* __this, void* key, uTRef value, bool* __retval);

struct ConcurrentDictionary : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _dictionary;
    uStrong<uObject*> _mutex;

    void ctor_();
    template<class TKey, class TValue>
    void Add(TKey key, TValue value) { ConcurrentDictionary__Add_fn(this, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value)); }
    template<class TKey, class TValue>
    void Add1(::g::Uno::Collections::KeyValuePair<TKey, TValue> keyValue) { ConcurrentDictionary__Add1_fn(this, uConstrain(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(__type->T(0), __type->T(1), NULL), keyValue)); }
    void Clear();
    template<class TKey, class TValue>
    bool Contains(::g::Uno::Collections::KeyValuePair<TKey, TValue> keyValue) { bool __retval; return ConcurrentDictionary__Contains_fn(this, uConstrain(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(__type->T(0), __type->T(1), NULL), keyValue), &__retval), __retval; }
    template<class TKey>
    bool ContainsKey(TKey key) { bool __retval; return ConcurrentDictionary__ContainsKey_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
    int Count();
    uObject* GetEnumerator();
    template<class TKey, class TValue>
    TValue Item(TKey key) { TValue __retval; return ConcurrentDictionary__get_Item_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
    template<class TKey, class TValue>
    void Item(TKey key, TValue value) { ConcurrentDictionary__set_Item_fn(this, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value)); }
    template<class TKey>
    bool Remove(TKey key) { bool __retval; return ConcurrentDictionary__Remove_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
    template<class TKey, class TValue>
    bool Remove1(::g::Uno::Collections::KeyValuePair<TKey, TValue> keyValue) { bool __retval; return ConcurrentDictionary__Remove1_fn(this, uConstrain(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(__type->T(0), __type->T(1), NULL), keyValue), &__retval), __retval; }
    template<class TKey, class TValue>
    bool TryGetValue(TKey key, TValue* value) { bool __retval; return ConcurrentDictionary__TryGetValue_fn(this, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value), &__retval), __retval; }
    static ConcurrentDictionary* New1(uType* __type);
};
// }

}}} // ::g::Uno::Threading
