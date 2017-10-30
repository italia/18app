// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__KeyCollection;}}}
namespace g{namespace Uno{namespace Collections{template<class TKey>struct Dictionary__KeyCollection__Enumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class Dictionary<TKey, TValue>.KeyCollection :75
// {
struct Dictionary__KeyCollection_type : uType
{
    ::g::Uno::Collections::ICollection interface0;
    ::g::Uno::Collections::IEnumerable interface1;
};

Dictionary__KeyCollection_type* Dictionary__KeyCollection_typeof();
void Dictionary__KeyCollection__ctor__fn(Dictionary__KeyCollection* __this, ::g::Uno::Collections::Dictionary* source);
void Dictionary__KeyCollection__get_Count_fn(Dictionary__KeyCollection* __this, int* __retval);
void Dictionary__KeyCollection__GetEnumerator_fn(Dictionary__KeyCollection* __this, uTRef __retval);
void Dictionary__KeyCollection__GetEnumerator_boxed_fn(Dictionary__KeyCollection* __this, uObject** __retval);
void Dictionary__KeyCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__KeyCollection** __retval);
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyAdd_fn(Dictionary__KeyCollection* __this, void* item);
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyClear_fn(Dictionary__KeyCollection* __this);
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyContains_fn(Dictionary__KeyCollection* __this, void* item, bool* __retval);
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyRemove_fn(Dictionary__KeyCollection* __this, void* item, bool* __retval);

struct Dictionary__KeyCollection : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _source;

    void ctor_(::g::Uno::Collections::Dictionary* source);
    int Count();
    template<class TKey>
    Dictionary__KeyCollection__Enumerator<TKey> GetEnumerator();
    uObject* GetEnumerator_boxed();
    static Dictionary__KeyCollection* New1(uType* __type, ::g::Uno::Collections::Dictionary* source);
};

}}} // ::g::Uno::Collections

#include <Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h>

namespace g{
namespace Uno{
namespace Collections{

template<class TKey>
Dictionary__KeyCollection__Enumerator<TKey> Dictionary__KeyCollection::GetEnumerator() { Dictionary__KeyCollection__Enumerator<TKey> __retval; return Dictionary__KeyCollection__GetEnumerator_fn(this, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
