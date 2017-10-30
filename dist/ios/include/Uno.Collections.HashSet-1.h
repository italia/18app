// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/HashSet.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Collections{template<class T>struct HashSet__Enumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class HashSet<T> :6
// {
struct HashSet_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

HashSet_type* HashSet_typeof();
void HashSet__ctor__fn(HashSet* __this);
void HashSet__Add_fn(HashSet* __this, void* item, bool* __retval);
void HashSet__Contains_fn(HashSet* __this, void* item, bool* __retval);
void HashSet__GetEnumerator_fn(HashSet* __this, uTRef __retval);
void HashSet__GetEnumerator_boxed_fn(HashSet* __this, uObject** __retval);
void HashSet__New1_fn(uType* __type, HashSet** __retval);
void HashSet__Remove_fn(HashSet* __this, void* item, bool* __retval);

struct HashSet : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _map;

    void ctor_();
    template<class T>
    bool Add(T item) { bool __retval; return HashSet__Add_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    template<class T>
    bool Contains(T item) { bool __retval; return HashSet__Contains_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    template<class T>
    HashSet__Enumerator<T> GetEnumerator();
    uObject* GetEnumerator_boxed();
    template<class T>
    bool Remove(T item) { bool __retval; return HashSet__Remove_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    static HashSet* New1(uType* __type);
};

}}} // ::g::Uno::Collections

#include <Uno.Collections.HashSet-1.Enumerator.h>

namespace g{
namespace Uno{
namespace Collections{

template<class T>
HashSet__Enumerator<T> HashSet::GetEnumerator() { HashSet__Enumerator<T> __retval; return HashSet__GetEnumerator_fn(this, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
