// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.Dictionary-2.Bucket.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__KeyCollection;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection;}}}
namespace g{namespace Uno{namespace Collections{template<class TKey, class TValue>struct Dictionary__Enumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class Dictionary<TKey, TValue> :6
// {
struct Dictionary_type : uType
{
    ::g::Uno::Collections::IDictionary interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

Dictionary_type* Dictionary_typeof();
void Dictionary__ctor__fn(Dictionary* __this);
void Dictionary__Add_fn(Dictionary* __this, void* key, void* value);
void Dictionary__Clear_fn(Dictionary* __this);
void Dictionary__ContainsKey_fn(Dictionary* __this, void* key, bool* __retval);
void Dictionary__get_Count_fn(Dictionary* __this, int* __retval);
void Dictionary__GetEnumerator_fn(Dictionary* __this, uTRef __retval);
void Dictionary__GetEnumerator_boxed_fn(Dictionary* __this, uObject** __retval);
void Dictionary__get_Item_fn(Dictionary* __this, void* key, uTRef __retval);
void Dictionary__set_Item_fn(Dictionary* __this, void* key, void* value);
void Dictionary__get_Keys_fn(Dictionary* __this, Dictionary__KeyCollection** __retval);
void Dictionary__New1_fn(uType* __type, Dictionary** __retval);
void Dictionary__Rehash_fn(Dictionary* __this);
void Dictionary__Remove_fn(Dictionary* __this, void* key, bool* __retval);
void Dictionary__TryGetValue_fn(Dictionary* __this, void* key, uTRef value, bool* __retval);
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueAdd_fn(Dictionary* __this, void* item);
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueContains_fn(Dictionary* __this, void* item, bool* __retval);
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueRemove_fn(Dictionary* __this, void* item, bool* __retval);
void Dictionary__get_Values_fn(Dictionary* __this, Dictionary__ValueCollection** __retval);

struct Dictionary : uObject
{
    uStrong<uArray*> _buckets;
    int _count;
    int _dummies;
    int _version;

    void ctor_();
    template<class TKey, class TValue>
    void Add(TKey key, TValue value) { Dictionary__Add_fn(this, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value)); }
    void Clear();
    template<class TKey>
    bool ContainsKey(TKey key) { bool __retval; return Dictionary__ContainsKey_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
    int Count();
    template<class TKey, class TValue>
    Dictionary__Enumerator<TKey, TValue> GetEnumerator();
    uObject* GetEnumerator_boxed();
    template<class TKey, class TValue>
    TValue Item(TKey key) { TValue __retval; return Dictionary__get_Item_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
    template<class TKey, class TValue>
    void Item(TKey key, TValue value) { Dictionary__set_Item_fn(this, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value)); }
    Dictionary__KeyCollection* Keys();
    void Rehash();
    template<class TKey>
    bool Remove(TKey key) { bool __retval; return Dictionary__Remove_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
    template<class TKey, class TValue>
    bool TryGetValue(TKey key, TValue* value) { bool __retval; return Dictionary__TryGetValue_fn(this, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value), &__retval), __retval; }
    Dictionary__ValueCollection* Values();
    static Dictionary* New1(uType* __type);
};

}}} // ::g::Uno::Collections

#include <Uno.Collections.Dictionary-2.Enumerator.h>

namespace g{
namespace Uno{
namespace Collections{

template<class TKey, class TValue>
Dictionary__Enumerator<TKey, TValue> Dictionary::GetEnumerator() { Dictionary__Enumerator<TKey, TValue> __retval; return Dictionary__GetEnumerator_fn(this, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
