// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Bucket.h>
#include <Uno.Collections.Dictionary-2.BucketState.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.EnumerableExtensions.LinkedList-1.h>
#include <Uno.Collections.HashSet-1.Enumerator.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.LinkedList-1.Enumerator.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.LinkedListNode-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Collections.OfTypeEnumerable-2.h>
#include <Uno.Collections.OfTypeEnumerator-2.h>
#include <Uno.Collections.OrderByCompare-1.h>
#include <Uno.Collections.PriorityQueue-1.h>
#include <Uno.Collections.PriorityQueueItem-1.h>
#include <Uno.Collections.PriorityQueueType.h>
#include <Uno.Collections.Queue-1.Enumerator.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Collections.SelectEnumerable-2.h>
#include <Uno.Collections.SelectEnumerator-2.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Generic.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
static uString* STRINGS[5];
static uType* TYPES[12];

namespace g{
namespace Uno{
namespace Collections{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno
// ---------------------------------------------------------------------------------

// internal struct Dictionary<TKey, TValue>.Bucket :16
// {
static void Dictionary__Bucket_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Collections::Dictionary__BucketState_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
}

uStructType* Dictionary__Bucket_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.Dictionary`2.Bucket", options);
    type->fp_build_ = Dictionary__Bucket_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno
// ---------------------------------------------------------------------------------

// internal enum Dictionary<TKey, TValue>.BucketState :8
uEnumType* Dictionary__BucketState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Collections.Dictionary`2.BucketState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Empty", 0LL,
        "Used", 1LL,
        "Dummy", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno
// ---------------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue> :6
// {
static void Dictionary_build(uType* type)
{
    type->SetPrecalc(
        Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL)->Array(),
        Dictionary__Enumerator_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<TKey>*/, type->T(0), NULL),
        Dictionary__KeyCollection_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL),
        Dictionary__ValueCollection_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(Dictionary_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(Dictionary_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(Dictionary_type, interface2));
    type->SetFields(0,
        Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL)->Array(), offsetof(Dictionary, _buckets), 0,
        ::g::Uno::Int_typeof(), offsetof(Dictionary, _count), 0,
        ::g::Uno::Int_typeof(), offsetof(Dictionary, _dummies), 0,
        ::g::Uno::Int_typeof(), offsetof(Dictionary, _version), 0);
}

Dictionary_type* Dictionary_typeof()
{
    static uSStrong<Dictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(Dictionary);
    options.TypeSize = sizeof(Dictionary_type);
    type = (Dictionary_type*)uClassType::New("Uno.Collections.Dictionary`2", options);
    type->fp_build_ = Dictionary_build;
    type->fp_ctor_ = (void*)Dictionary__New1_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueAdd_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueRemove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueContains_fn;
    type->interface0.fp_TryGetValue = (void(*)(uObject*, void*, uTRef, bool*))Dictionary__TryGetValue_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))Dictionary__Clear_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))Dictionary__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__GetEnumerator_boxed_fn;
    return type;
}

// public Dictionary() :265
void Dictionary__ctor__fn(Dictionary* __this)
{
    __this->ctor_();
}

// public void Add(TKey key, TValue value) :327
void Dictionary__Add_fn(Dictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret6;

    if ((__this->_count + __this->_dummies) > (uPtr(__this->_buckets)->Length() / 2))
        __this->Rehash();

    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(0), uPtr(key), U_ALLOCA(__this->__type->T(0)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 1;
            uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
            uPtr(__this->_buckets)->TItem(x)[0/*Key*/] = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 2)
        {
            uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 1;
            uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
            uPtr(__this->_buckets)->TItem(x)[0/*Key*/] = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret6), ret6))
                U_THROW(::g::Uno::Exception::New2(uString::Const("Dictionary already contains the given key")));
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public void Clear() :313
void Dictionary__Clear_fn(Dictionary* __this)
{
    __this->Clear();
}

// public bool ContainsKey(TKey key) :426
void Dictionary__ContainsKey_fn(Dictionary* __this, void* key, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret7;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(0), uPtr(key), U_ALLOCA(__this->__type->T(0)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret7), ret7))
                return *__retval = true, void();
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            return *__retval = false, void();

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public int get_Count() :297
void Dictionary__get_Count_fn(Dictionary* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() :280
void Dictionary__GetEnumerator_fn(Dictionary* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Enumerator*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Dictionary__Enumerator__New1_fn(__types[0], __this, &ret8), ret8)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() :280
void Dictionary__GetEnumerator_boxed_fn(Dictionary* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public TValue get_Item(TKey key) :453
void Dictionary__get_Item_fn(Dictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret13;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(0), uPtr(key), U_ALLOCA(__this->__type->T(0)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret13), ret13))
                return __retval.Store(uPtr(__this->_buckets)->TItem(x)[1/*Value*/]), void();
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            U_THROW(::g::Uno::Exception::New2(uString::Const("Dictionary did not contain the given key")));

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public void set_Item(TKey key, TValue value) :477
void Dictionary__set_Item_fn(Dictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret14;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(0), uPtr(key), U_ALLOCA(__this->__type->T(0)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret14), ret14))
            {
                uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
                __this->_version++;
                return;
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            Dictionary__Add_fn(__this, key, value);
            return;
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection get_Keys() :287
void Dictionary__get_Keys_fn(Dictionary* __this, Dictionary__KeyCollection** __retval)
{
    *__retval = __this->Keys();
}

// public Dictionary New() :265
void Dictionary__New1_fn(uType* __type, Dictionary** __retval)
{
    *__retval = Dictionary::New1(__type);
}

// private void Rehash() :300
void Dictionary__Rehash_fn(Dictionary* __this)
{
    __this->Rehash();
}

// public bool Remove(TKey key) :395
void Dictionary__Remove_fn(Dictionary* __this, void* key, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret9;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(0), uPtr(key), U_ALLOCA(__this->__type->T(0)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret9), ret9))
            {
                uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 2;
                uPtr(__this->_buckets)->TItem(x)[1/*Value*/].Default();
                uPtr(__this->_buckets)->TItem(x)[0/*Key*/].Default();
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return *__retval = true, void();
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            return *__retval = false, void();

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public bool TryGetValue(TKey key, TValue& value) :368
void Dictionary__TryGetValue_fn(Dictionary* __this, void* key, uTRef value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Generic.Equals<TKey>*/),
    };
    bool ret10;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(0), uPtr(key), U_ALLOCA(__this->__type->T(0)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret10), ret10))
            {
                value.Store(uPtr(__this->_buckets)->TItem(x)[1/*Value*/]);
                return *__retval = true, void();
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            value.Default(__this->__type->T(1));
            return *__retval = false, void();
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// private void Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Add(Uno.Collections.KeyValuePair<TKey, TValue> item) :506
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueAdd_fn(Dictionary* __this, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
    };
    uT ret11(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT item_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    item_ = item;
    Dictionary__Add_fn(__this, (::g::Uno::Collections::KeyValuePair__get_Key_fn(&item_, __types[0], &ret11), ret11), (::g::Uno::Collections::KeyValuePair__get_Value_fn(&item_, __types[0], &ret12), ret12));
}

// private bool Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Contains(Uno.Collections.KeyValuePair<TKey, TValue> item) :516
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueContains_fn(Dictionary* __this, void* item, bool* __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Remove(Uno.Collections.KeyValuePair<TKey, TValue> item) :511
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueRemove_fn(Dictionary* __this, void* item, bool* __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection get_Values() :292
void Dictionary__get_Values_fn(Dictionary* __this, Dictionary__ValueCollection** __retval)
{
    *__retval = __this->Values();
}

// public Dictionary() [instance] :265
void Dictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    _buckets = uArray::New(__types[0], 8);
    _count = 0;
    _dummies = 0;
}

// public void Clear() [instance] :313
void Dictionary::Clear()
{
    for (int i = 0; i < uPtr(_buckets)->Length(); i++)
    {
        uPtr(_buckets)->TItem(i)[2/*State*/].Value<int>() = 0;
        uPtr(_buckets)->TItem(i)[1/*Value*/].Default();
        uPtr(_buckets)->TItem(i)[0/*Key*/].Default();
    }

    _count = 0;
    _dummies = 0;
    _version++;
}

// public int get_Count() [instance] :297
int Dictionary::Count()
{
    return _count;
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() [instance] :280
uObject* Dictionary::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Enumerator*/),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Dictionary__GetEnumerator_fn(this, &ret15), ret15));
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection get_Keys() [instance] :287
Dictionary__KeyCollection* Dictionary::Keys()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection*/),
    };
    return Dictionary__KeyCollection::New1(__types[0], this);
}

// private void Rehash() [instance] :300
void Dictionary::Rehash()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    uArray* oldBuckets = _buckets;
    _buckets = uArray::New(__types[0], uPtr(oldBuckets)->Length() * 2);
    _count = 0;
    _dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
        if (uPtr(oldBuckets)->TItem(i)[2/*State*/].Value<int>() == 1)
            Dictionary__Add_fn(this, uPtr(oldBuckets)->TItem(i)[0/*Key*/], uPtr(oldBuckets)->TItem(i)[1/*Value*/]);
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection get_Values() [instance] :292
Dictionary__ValueCollection* Dictionary::Values()
{
    uType* __types[] = {
        __type->Precalced(5/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection*/),
    };
    return Dictionary__ValueCollection::New1(__types[0], this);
}

// public Dictionary New() [static] :265
Dictionary* Dictionary::New1(uType* __type)
{
    Dictionary* obj1 = (Dictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno
// --------------------------------------------------------------------

// public static class EnumerableExtensions :27
// {
static void EnumerableExtensions_build(uType* type)
{
    type->MethodTypes[0]->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->MethodTypes[2]->U(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::g::Uno::Collections::OfTypeEnumerable_typeof()->MakeType(type->MethodTypes[3]->U(0), type->MethodTypes[3]->U(1), NULL));
    type->MethodTypes[4]->SetPrecalc(
        type->MakeMethod(8/*ToList<T>*/, type->MethodTypes[4]->U(0), NULL),
        ::g::Uno::Comparison_typeof()->MakeType(type->MethodTypes[4]->U(0), NULL),
        ::g::Uno::Collections::OrderByCompare_typeof()->MakeType(type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        ::g::Uno::Collections::SelectEnumerable_typeof()->MakeType(type->MethodTypes[5]->U(0), type->MethodTypes[5]->U(1), NULL));
    type->MethodTypes[6]->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->MethodTypes[6]->U(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->MethodTypes[6]->U(0), NULL));
    type->MethodTypes[7]->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->MethodTypes[7]->U(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->MethodTypes[7]->U(0), NULL),
        EnumerableExtensions__LinkedList_typeof()->MakeType(type->MethodTypes[7]->U(0), NULL),
        type->MethodTypes[7]->U(0)->Array());
    type->MethodTypes[8]->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->MethodTypes[8]->U(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->MethodTypes[8]->U(0), NULL),
        EnumerableExtensions__LinkedList_typeof()->MakeType(type->MethodTypes[8]->U(0), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(type->MethodTypes[8]->U(0), NULL),
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(type->MethodTypes[8]->U(0), NULL),
        type->MethodTypes[8]->U(0)->Array());
}

uClassType* EnumerableExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 9;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Collections.EnumerableExtensions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->MethodTypes[1] = type->NewMethodType(1, 2,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->MethodTypes[3] = type->NewMethodType(2, 1,0);
    type->MethodTypes[4] = type->NewMethodType(1, 3,0);
    type->MethodTypes[5] = type->NewMethodType(2, 1,0);
    type->MethodTypes[6] = type->NewMethodType(1, 2,0);
    type->MethodTypes[7] = type->NewMethodType(1, 4,0);
    type->MethodTypes[8] = type->NewMethodType(1, 6,0);
    type->fp_build_ = EnumerableExtensions_build;
    return type;
}

// public static bool All<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> where) :200
void EnumerableExtensions__All_fn(uType* __type, uObject* self, uDelegate* where, bool* __retval)
{
    *__retval = EnumerableExtensions::All(__type, self, where);
}

// public static T FirstOrDefault<T>(Uno.Collections.IEnumerable<T> self) :178
void EnumerableExtensions__FirstOrDefault_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret9(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT item(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[0]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
        {
            item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret9), ret9);
            return __retval.Store(item), void();
        }
    }

    return __retval.Store(__type->U(0), uT(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize))), void();
}

// public static int IndexOf<T>(Uno.Collections.IEnumerable<T> self, T element) :68
void EnumerableExtensions__IndexOf_fn(uType* __type, uObject* self, void* element, int* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret12(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT item(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int i = 0;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[0]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
        {
            item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret12), ret12);

            if (::g::Uno::Object::Equals(uBoxPtr(__type->U(0), uPtr(item), U_ALLOCA(__type->U(0)->ObjectSize)), uBoxPtr(__type->U(0), element)))
                return *__retval = i, void();

            i++;
        }
    }

    return *__retval = -1, void();
}

// public static Uno.Collections.IEnumerable<U> OfType<T, U>(Uno.Collections.IEnumerable<T> self) :34
void EnumerableExtensions__OfType_fn(uType* __type, uObject* self, uObject** __retval)
{
    *__retval = EnumerableExtensions::OfType(__type, self);
}

// public static Uno.Collections.IEnumerable<T> OrderBy<T>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, T, int> orderFunction) :46
void EnumerableExtensions__OrderBy1_fn(uType* __type, uObject* self, uDelegate* orderFunction, uObject** __retval)
{
    *__retval = EnumerableExtensions::OrderBy1(__type, self, orderFunction);
}

// public static Uno.Collections.IEnumerable<TRet> Select<T, TRet>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, TRet> func) :53
void EnumerableExtensions__Select_fn(uType* __type, uObject* self, uDelegate* func, uObject** __retval)
{
    *__retval = EnumerableExtensions::Select(__type, self, func);
}

// public static bool SequenceEqual<T>(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) :250
void EnumerableExtensions__SequenceEqual_fn(uType* __type, uObject* first, uObject* second, bool* __retval)
{
    *__retval = EnumerableExtensions::SequenceEqual(__type, first, second);
}

// public static T[] ToArray<T>(Uno.Collections.IEnumerable<T> self) :92
void EnumerableExtensions__ToArray_fn(uType* __type, uObject* self, uArray** __retval)
{
    *__retval = EnumerableExtensions::ToArray(__type, self);
}

// public static Uno.Collections.List<T> ToList<T>(Uno.Collections.IEnumerable<T> self) :108
void EnumerableExtensions__ToList_fn(uType* __type, uObject* self, ::g::Uno::Collections::List** __retval)
{
    *__retval = EnumerableExtensions::ToList(__type, self);
}

// public static bool All<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> where) [static] :200
bool EnumerableExtensions::All(uType* __type, uObject* self, uDelegate* where)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret1(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT item(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    bool ret2;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[0]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
        {
            item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret1), ret1);

            if (!(uPtr(where)->Invoke(&ret2, 1, (void*)item), ret2))
                return false;
        }
    }

    return true;
}

// public static Uno.Collections.IEnumerable<U> OfType<T, U>(Uno.Collections.IEnumerable<T> self) [static] :34
uObject* EnumerableExtensions::OfType(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.OfTypeEnumerable<T, U>*/),
    };
    return (uObject*)((::g::Uno::Collections::OfTypeEnumerable*)::g::Uno::Collections::OfTypeEnumerable::New1(__types[0], self));
}

// public static Uno.Collections.IEnumerable<T> OrderBy<T>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, T, int> orderFunction) [static] :46
uObject* EnumerableExtensions::OrderBy1(uType* __type, uObject* self, uDelegate* orderFunction)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.ToList<T>*/),
        __type->Precalced(1/*Uno.Comparison<T>*/),
        __type->Precalced(2/*Uno.Collections.OrderByCompare<T>*/),
    };
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)EnumerableExtensions::ToList(__types[0], self);
    uPtr(list)->Sort(uDelegate::New(__types[1], (void*)::g::Uno::Collections::OrderByCompare__Compare_fn, (::g::Uno::Collections::OrderByCompare*)::g::Uno::Collections::OrderByCompare::New1(__types[2], orderFunction)));
    return (uObject*)list;
}

// public static Uno.Collections.IEnumerable<TRet> Select<T, TRet>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, TRet> func) [static] :53
uObject* EnumerableExtensions::Select(uType* __type, uObject* self, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.SelectEnumerable<T, TRet>*/),
    };
    return (uObject*)((::g::Uno::Collections::SelectEnumerable*)::g::Uno::Collections::SelectEnumerable::New1(__types[0], self, func));
}

// public static bool SequenceEqual<T>(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) [static] :250
bool EnumerableExtensions::SequenceEqual(uType* __type, uObject* first, uObject* second)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret15(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT ret16(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));

    if (first == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("first")));

    if (second == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("second")));

    if (::g::Uno::Object::ReferenceEquals(first, second))
        return true;

    uObject* it1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(first), __types[0]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(it1), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uObject* it2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(second), __types[0]));

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(it2), ::g::Uno::IDisposable_typeof()));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (true)
            {
                bool next1 = ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(it1), ::TYPES[8/*Uno.Collections.IEnumerator*/]));
                bool next2 = ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(it2), ::TYPES[8/*Uno.Collections.IEnumerator*/]));

                if (!next1 && !next2)
                    return true;

                if (next1 != next2)
                    return false;

                if (!::g::Uno::Object::Equals(uBoxPtr(__type->U(0), uPtr((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(it1, __types[1]), &ret15), ret15)), U_ALLOCA(__type->U(0)->ObjectSize)), uBoxPtr(__type->U(0), (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(it2, __types[1]), &ret16), ret16))))
                    return false;
            }
        }
    }

    U_THROW(::g::Uno::Exception::New2(uString::Const("Impossible")));
}

// public static T[] ToArray<T>(Uno.Collections.IEnumerable<T> self) [static] :92
uArray* EnumerableExtensions::ToArray(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
        __type->Precalced(2/*Uno.Collections.EnumerableExtensions.LinkedList<T>*/),
        __type->Precalced(3/*T[]*/),
    };
    uT ret19(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT item(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    EnumerableExtensions__LinkedList* ret20;
    EnumerableExtensions__LinkedList* head = NULL;
    int count = 0;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[0]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
        {
            item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret19), ret19);
            head = (EnumerableExtensions__LinkedList__New1_fn(__types[2], item, head, &ret20), ret20);
            count++;
        }
    }

    uArray* res = uArray::New(__types[3], count);

    for (EnumerableExtensions__LinkedList* current = head; current != NULL; current = (EnumerableExtensions__LinkedList*)uPtr(current)->Next)
        uPtr(res)->TItem(--count) = uPtr(current)->Item();

    return res;
}

// public static Uno.Collections.List<T> ToList<T>(Uno.Collections.IEnumerable<T> self) [static] :108
::g::Uno::Collections::List* EnumerableExtensions::ToList(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
        __type->Precalced(2/*Uno.Collections.EnumerableExtensions.LinkedList<T>*/),
        __type->Precalced(3/*Uno.Collections.List<T>*/),
        __type->Precalced(4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
        __type->Precalced(5/*T[]*/),
    };
    uT ret21(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT item(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    EnumerableExtensions__LinkedList* ret22;
    EnumerableExtensions__LinkedList* head = NULL;
    int count = 0;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[0]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
        {
            item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret21), ret21);
            head = (EnumerableExtensions__LinkedList__New1_fn(__types[2], item, head, &ret22), ret22);
            count++;
        }
    }

    ::g::Uno::Collections::List* res = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(__types[3], count);
    res->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[4], uArray::New(__types[5], count))));

    for (EnumerableExtensions__LinkedList* current = head; current != NULL; current = (EnumerableExtensions__LinkedList*)uPtr(current)->Next)
        ::g::Uno::Collections::List__set_Item_fn(uPtr(res), uCRef<int>(--count), uPtr(current)->Item());

    return res;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Queue.uno
// ----------------------------------------------------------------------------

// public struct Queue<T>.Enumerator :8
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :39
static void Queue__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Queue__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public T get_Current() [adapter] :25
static void Queue__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Queue__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :35
static void Queue__Enumerator__Dispose_ex(uObject* __this)
{
    Queue__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :46
static void Queue__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Queue__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Queue__Enumerator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Collection was modified");
    ::STRINGS[1] = uString::Const("Enumerator is invalid");
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(Queue__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Queue__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Queue__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

Queue__Enumerator_type* Queue__Enumerator_typeof()
{
    static uSStrong<Queue__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.TypeSize = sizeof(Queue__Enumerator_type);
    type = (Queue__Enumerator_type*)uStructType::New("Uno.Collections.Queue`1.Enumerator", options);
    type->fp_build_ = Queue__Enumerator_build;
    type->interface2.fp_Reset = Queue__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Queue__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Queue__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Queue__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Queue<T> source) :15
void Queue__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Queue* source)
{
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>() = source;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_index*/).Value<int>() = -1;
}

// public T get_Current() :25
void Queue__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    if (__type->Field(__this, 2/*_index*/).Value<int>() < 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[1/*"Enumerator ...*/]));

    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :35
void Queue__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :46
void Queue__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[0/*"Collection ...*/]));

    __type->Field(__this, 2/*_index*/).Value<int>()++;

    if (__type->Field(__this, 2/*_index*/).Value<int>() < uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_size)
    {
        __type->Field(__this, 3/*_current*/) = (::g::Uno::Collections::Queue__ElementAt_fn(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>()), uCRef<int>(__type->Field(__this, 2/*_index*/).Value<int>()), &ret2), ret2);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.Queue<T> source) :15
void Queue__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Queue* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Queue__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :39
void Queue__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    __type->Field(__this, 2/*_index*/).Value<int>() = -1;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_version;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/HashSet.uno
// ------------------------------------------------------------------------------

// public struct HashSet<T>.Enumerator :8
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :32
static void HashSet__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    HashSet__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public T get_Current() [adapter] :24
static void HashSet__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    HashSet__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :27
static void HashSet__Enumerator__Dispose_ex(uObject* __this)
{
    HashSet__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :39
static void HashSet__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    HashSet__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void HashSet__Enumerator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Collection was modified");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary__Bucket_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(HashSet__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(HashSet__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(HashSet__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof(), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
}

HashSet__Enumerator_type* HashSet__Enumerator_typeof()
{
    static uSStrong<HashSet__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(HashSet__Enumerator_type);
    type = (HashSet__Enumerator_type*)uStructType::New("Uno.Collections.HashSet`1.Enumerator", options);
    type->fp_build_ = HashSet__Enumerator_build;
    type->interface2.fp_Reset = HashSet__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))HashSet__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = HashSet__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = HashSet__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<T, bool> source) :15
void HashSet__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public T get_Current() :24
void HashSet__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :27
void HashSet__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :39
void HashSet__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>.Bucket*/),
    };
    uT bucket(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[0/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[0/*Key*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<T, bool> source) :15
void HashSet__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    HashSet__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :32
void HashSet__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version;
    __type->Field(__this, 1/*_current*/).Default();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno
// ---------------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.Enumerator :23
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :47
static void Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public Uno.Collections.KeyValuePair<TKey, TValue> get_Current() [adapter] :39
static void Dictionary__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :42
static void Dictionary__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :54
static void Dictionary__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Dictionary__Enumerator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Collection was modified");
    ::TYPES[1] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[0] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(Dictionary__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
}

Dictionary__Enumerator_type* Dictionary__Enumerator_typeof()
{
    static uSStrong<Dictionary__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.TypeSize = sizeof(Dictionary__Enumerator_type);
    type = (Dictionary__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.Enumerator", options);
    type->fp_build_ = Dictionary__Enumerator_build;
    type->interface2.fp_Reset = Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Dictionary__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :30
void Dictionary__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public Uno.Collections.KeyValuePair<TKey, TValue> get_Current() :39
void Dictionary__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :42
void Dictionary__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :54
void Dictionary__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT bucket(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[0/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = (::g::Uno::Collections::KeyValuePair__New1_fn(__types[0], bucket[0/*Key*/], bucket[1/*Value*/], &ret2), ret2);
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :30
void Dictionary__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Dictionary__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :47
void Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version;
    __type->Field(__this, 1/*_current*/).Default();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/LinkedList.uno
// ---------------------------------------------------------------------------------

// public struct LinkedList<T>.Enumerator :26
// {
// public T get_Current() [adapter] :37
static void LinkedList__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    LinkedList__Enumerator__get_Current_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :39
static void LinkedList__Enumerator__Dispose_ex(uObject* __this)
{
    LinkedList__Enumerator__Dispose_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public void Reset() [adapter] :44
static void LinkedList__Enumerator__Reset_ex(uObject* __this)
{
    LinkedList__Enumerator__Reset_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :49
static void LinkedList__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    LinkedList__Enumerator__MoveNext_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void LinkedList__Enumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LinkedList__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(LinkedList__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList__Enumerator, _list), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList__Enumerator, _current), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList__Enumerator, _next), 0);
}

LinkedList__Enumerator_type* LinkedList__Enumerator_typeof()
{
    static uSStrong<LinkedList__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.Alignment = alignof(LinkedList__Enumerator);
    options.ValueSize = sizeof(LinkedList__Enumerator);
    options.TypeSize = sizeof(LinkedList__Enumerator_type);
    type = (LinkedList__Enumerator_type*)uStructType::New("Uno.Collections.LinkedList`1.Enumerator", options);
    type->fp_build_ = LinkedList__Enumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))LinkedList__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = LinkedList__Enumerator__Dispose_ex;
    type->interface2.fp_Reset = LinkedList__Enumerator__Reset_ex;
    type->interface2.fp_MoveNext = LinkedList__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.LinkedList<T> list) :31
void LinkedList__Enumerator__ctor__fn(LinkedList__Enumerator* __this, uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    __this->ctor_(__type, list);
}

// public T get_Current() :37
void LinkedList__Enumerator__get_Current_fn(LinkedList__Enumerator* __this, uType* __type, uTRef __retval)
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    return __retval.Store((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(__this->_current), &ret2), ret2)), void();
}

// public void Dispose() :39
void LinkedList__Enumerator__Dispose_fn(LinkedList__Enumerator* __this, uType* __type)
{
    __this->Dispose(__type);
}

// public bool MoveNext() :49
void LinkedList__Enumerator__MoveNext_fn(LinkedList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->MoveNext(__type);
}

// internal Enumerator New(Uno.Collections.LinkedList<T> list) :31
void LinkedList__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::LinkedList* list, LinkedList__Enumerator* __retval)
{
    *__retval = LinkedList__Enumerator__New1(__type, list);
}

// public void Reset() :44
void LinkedList__Enumerator__Reset_fn(LinkedList__Enumerator* __this, uType* __type)
{
    __this->Reset(__type);
}

// internal Enumerator(Uno.Collections.LinkedList<T> list) [instance] :31
void LinkedList__Enumerator::ctor_(uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    _list = list;
    _next = uPtr(_list)->First();
}

// public void Dispose() [instance] :39
void LinkedList__Enumerator::Dispose(uType* __type)
{
}

// public bool MoveNext() [instance] :49
bool LinkedList__Enumerator::MoveNext(uType* __type)
{
    if (_next == NULL)
        return false;

    _current = _next;
    _next = ((::g::Uno::Collections::LinkedListNode*)uPtr(_next)->Next());
    return true;
}

// public void Reset() [instance] :44
void LinkedList__Enumerator::Reset(uType* __type)
{
    _next = uPtr(_list)->First();
}

// internal Enumerator New(Uno.Collections.LinkedList<T> list) [static] :31
LinkedList__Enumerator LinkedList__Enumerator__New1(uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    LinkedList__Enumerator obj1;
    obj1.ctor_(__type, list);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno
// ---------------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.KeyCollection.Enumerator :77
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :102
static void Dictionary__KeyCollection__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Dictionary__KeyCollection__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public TKey get_Current() [adapter] :94
static void Dictionary__KeyCollection__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__KeyCollection__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :97
static void Dictionary__KeyCollection__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__KeyCollection__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :109
static void Dictionary__KeyCollection__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__KeyCollection__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Dictionary__KeyCollection__Enumerator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Collection was modified");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(Dictionary__KeyCollection__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__KeyCollection__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__KeyCollection__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
}

Dictionary__KeyCollection__Enumerator_type* Dictionary__KeyCollection__Enumerator_typeof()
{
    static uSStrong<Dictionary__KeyCollection__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(Dictionary__KeyCollection__Enumerator_type);
    type = (Dictionary__KeyCollection__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.KeyCollection.Enumerator", options);
    type->fp_build_ = Dictionary__KeyCollection__Enumerator_build;
    type->interface2.fp_Reset = Dictionary__KeyCollection__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Dictionary__KeyCollection__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__KeyCollection__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__KeyCollection__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :85
void Dictionary__KeyCollection__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public TKey get_Current() :94
void Dictionary__KeyCollection__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :97
void Dictionary__KeyCollection__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :109
void Dictionary__KeyCollection__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
    };
    uT bucket(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[0/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[0/*Key*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :85
void Dictionary__KeyCollection__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Dictionary__KeyCollection__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :102
void Dictionary__KeyCollection__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version;
    __type->Field(__this, 1/*_current*/).Default();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/List.uno
// ---------------------------------------------------------------------------

// public struct List<T>.Enumerator :12
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :36
static void List__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    List__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public T get_Current() [adapter] :28
static void List__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    List__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :31
static void List__Enumerator__Dispose_ex(uObject* __this)
{
    List__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :43
static void List__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    List__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void List__Enumerator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Collection was modified");
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(List__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(List__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(List__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

List__Enumerator_type* List__Enumerator_typeof()
{
    static uSStrong<List__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.TypeSize = sizeof(List__Enumerator_type);
    type = (List__Enumerator_type*)uStructType::New("Uno.Collections.List`1.Enumerator", options);
    type->fp_build_ = List__Enumerator_build;
    type->interface2.fp_Reset = List__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))List__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = List__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = List__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.List<T> source) :19
void List__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::List* source)
{
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>() = source;
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public T get_Current() :28
void List__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :31
void List__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :43
void List__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[0/*"Collection ...*/]));

    __type->Field(__this, 2/*_iterator*/).Value<int>()++;

    if (__type->Field(__this, 2/*_iterator*/).Value<int>() < uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_used)
    {
        __type->Field(__this, 3/*_current*/) = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_data)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.List<T> source) :19
void List__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::List* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    List__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :36
void List__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_version;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno
// ---------------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.ValueCollection.Enumerator :170
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :194
static void Dictionary__ValueCollection__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Dictionary__ValueCollection__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public TValue get_Current() [adapter] :186
static void Dictionary__ValueCollection__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__ValueCollection__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :189
static void Dictionary__ValueCollection__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__ValueCollection__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :201
static void Dictionary__ValueCollection__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__ValueCollection__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Dictionary__ValueCollection__Enumerator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Collection was modified");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1), NULL), offsetof(Dictionary__ValueCollection__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__ValueCollection__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__ValueCollection__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
}

Dictionary__ValueCollection__Enumerator_type* Dictionary__ValueCollection__Enumerator_typeof()
{
    static uSStrong<Dictionary__ValueCollection__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(Dictionary__ValueCollection__Enumerator_type);
    type = (Dictionary__ValueCollection__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.ValueCollection.Enumerator", options);
    type->fp_build_ = Dictionary__ValueCollection__Enumerator_build;
    type->interface2.fp_Reset = Dictionary__ValueCollection__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Dictionary__ValueCollection__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__ValueCollection__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__ValueCollection__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :177
void Dictionary__ValueCollection__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public TValue get_Current() :186
void Dictionary__ValueCollection__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :189
void Dictionary__ValueCollection__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :201
void Dictionary__ValueCollection__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
    };
    uT bucket(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[0/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[1/*Value*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :177
void Dictionary__ValueCollection__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Dictionary__ValueCollection__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :194
void Dictionary__ValueCollection__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version;
    __type->Field(__this, 1/*_current*/).Default();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/HashSet.uno
// ------------------------------------------------------------------------------

// public sealed class HashSet<T> :6
// {
static void HashSet_build(uType* type)
{
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof(), NULL),
        HashSet__Enumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(HashSet_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof(), NULL), offsetof(HashSet, _map), 0);
}

HashSet_type* HashSet_typeof()
{
    static uSStrong<HashSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(HashSet);
    options.TypeSize = sizeof(HashSet_type);
    type = (HashSet_type*)uClassType::New("Uno.Collections.HashSet`1", options);
    type->fp_build_ = HashSet_build;
    type->fp_ctor_ = (void*)HashSet__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))HashSet__GetEnumerator_boxed_fn;
    return type;
}

// public HashSet() :62
void HashSet__ctor__fn(HashSet* __this)
{
    __this->ctor_();
}

// public bool Add(T item) :87
void HashSet__Add_fn(HashSet* __this, void* item, bool* __retval)
{
    bool ret5;
    bool result = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_map), item, &ret5), ret5);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_map), item, uCRef(true));
    return *__retval = result, void();
}

// public bool Contains(T item) :94
void HashSet__Contains_fn(HashSet* __this, void* item, bool* __retval)
{
    bool ret6;
    return *__retval = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_map), item, &ret6), ret6), void();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() :114
void HashSet__GetEnumerator_fn(HashSet* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.HashSet<T>.Enumerator*/),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((HashSet__Enumerator__New1_fn(__types[0], __this->_map, &ret7), ret7)), void();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() :114
void HashSet__GetEnumerator_boxed_fn(HashSet* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public HashSet New() :62
void HashSet__New1_fn(uType* __type, HashSet** __retval)
{
    *__retval = HashSet::New1(__type);
}

// public bool Remove(T item) :99
void HashSet__Remove_fn(HashSet* __this, void* item, bool* __retval)
{
    bool ret8;
    return *__retval = (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_map), item, &ret8), ret8), void();
}

// public HashSet() [instance] :62
void HashSet::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
    };
    _map = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() [instance] :114
uObject* HashSet::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.HashSet<T>.Enumerator*/),
    };
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (HashSet__GetEnumerator_fn(this, &ret16), ret16));
}

// public HashSet New() [static] :62
HashSet* HashSet::New1(uType* __type)
{
    HashSet* obj1 = (HashSet*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/ICollection.uno
// ----------------------------------------------------------------------------------

// public abstract interface ICollection<T> :6
// {
uInterfaceType* ICollection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.ICollection`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/IDictionary.uno
// ----------------------------------------------------------------------------------

// public abstract interface IDictionary<TKey, TValue> :6
// {
uInterfaceType* IDictionary_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IDictionary`2", 2, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/IEnumerable.uno
// ----------------------------------------------------------------------------------

// public abstract interface IEnumerable<T> :6
// {
uInterfaceType* IEnumerable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerable`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/IEnumerator.uno
// ----------------------------------------------------------------------------------

// public abstract interface IEnumerator :6
// {
uInterfaceType* IEnumerator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerator", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/IEnumerator.uno
// ----------------------------------------------------------------------------------

// public abstract interface IEnumerator<T> :13
// {
uInterfaceType* IEnumerator1_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerator`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/IList.uno
// ----------------------------------------------------------------------------

// public abstract interface IList<T> :6
// {
uInterfaceType* IList_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IList`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno
// --------------------------------------------------------------------

// public static class IListExtensions :285
// {
static void IListExtensions_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[3/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
}

uClassType* IListExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Collections.IListExtensions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->fp_build_ = IListExtensions_build;
    return type;
}

// public static T RemoveLast<T>(Uno.Collections.IList<T> self) :335
void IListExtensions__RemoveLast_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uT ret6(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT t(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(self), __types[0])) - 1;
    t = (::g::Uno::Collections::IList::get_Item_ex(uInterface(self, __types[1]), uCRef<int>(i), &ret6), ret6);
    ::g::Uno::Collections::IList::RemoveAt(uInterface(self, __types[1]), i);
    return __retval.Store(t), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno
// ---------------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue>.KeyCollection :75
// {
static void Dictionary__KeyCollection_build(uType* type)
{
    type->SetPrecalc(
        Dictionary__KeyCollection__Enumerator_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(Dictionary__KeyCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(Dictionary__KeyCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(Dictionary__KeyCollection, _source), 0);
}

Dictionary__KeyCollection_type* Dictionary__KeyCollection_typeof()
{
    static uSStrong<Dictionary__KeyCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Dictionary__KeyCollection);
    options.TypeSize = sizeof(Dictionary__KeyCollection_type);
    type = (Dictionary__KeyCollection_type*)uClassType::New("Uno.Collections.Dictionary`2.KeyCollection", options);
    type->fp_build_ = Dictionary__KeyCollection_build;
    type->interface0.fp_Clear = (void(*)(uObject*))Dictionary__KeyCollection__UnoCollectionsICollectionTKeyClear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))Dictionary__KeyCollection__UnoCollectionsICollectionTKeyAdd_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__KeyCollection__UnoCollectionsICollectionTKeyRemove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__KeyCollection__UnoCollectionsICollectionTKeyContains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))Dictionary__KeyCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__KeyCollection__GetEnumerator_boxed_fn;
    return type;
}

// internal KeyCollection(Uno.Collections.Dictionary<TKey, TValue> source) :132
void Dictionary__KeyCollection__ctor__fn(Dictionary__KeyCollection* __this, ::g::Uno::Collections::Dictionary* source)
{
    __this->ctor_(source);
}

// public int get_Count() :164
void Dictionary__KeyCollection__get_Count_fn(Dictionary__KeyCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() :137
void Dictionary__KeyCollection__GetEnumerator_fn(Dictionary__KeyCollection* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Dictionary__KeyCollection__Enumerator__New1_fn(__types[0], __this->_source, &ret2), ret2)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() :137
void Dictionary__KeyCollection__GetEnumerator_boxed_fn(Dictionary__KeyCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// internal KeyCollection New(Uno.Collections.Dictionary<TKey, TValue> source) :132
void Dictionary__KeyCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__KeyCollection** __retval)
{
    *__retval = Dictionary__KeyCollection::New1(__type, source);
}

// private void Uno.Collections.ICollection<TKey>.Add(TKey item) :147
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyAdd_fn(Dictionary__KeyCollection* __this, void* item)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private void Uno.Collections.ICollection<TKey>.Clear() :142
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyClear_fn(Dictionary__KeyCollection* __this)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TKey>.Contains(TKey item) :157
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyContains_fn(Dictionary__KeyCollection* __this, void* item, bool* __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TKey>.Remove(TKey item) :152
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyRemove_fn(Dictionary__KeyCollection* __this, void* item, bool* __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// internal KeyCollection(Uno.Collections.Dictionary<TKey, TValue> source) [instance] :132
void Dictionary__KeyCollection::ctor_(::g::Uno::Collections::Dictionary* source)
{
    _source = source;
}

// public int get_Count() [instance] :164
int Dictionary__KeyCollection::Count()
{
    return uPtr(_source)->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() [instance] :137
uObject* Dictionary__KeyCollection::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Dictionary__KeyCollection__GetEnumerator_fn(this, &ret3), ret3));
}

// internal KeyCollection New(Uno.Collections.Dictionary<TKey, TValue> source) [static] :132
Dictionary__KeyCollection* Dictionary__KeyCollection::New1(uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    Dictionary__KeyCollection* obj1 = (Dictionary__KeyCollection*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/KeyValuePair.uno
// -----------------------------------------------------------------------------------

// public struct KeyValuePair<TKey, TValue> :6
// {
static void KeyValuePair_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uStructType* KeyValuePair_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.KeyValuePair`2", options);
    type->fp_build_ = KeyValuePair_build;
    return type;
}

// public KeyValuePair(TKey key, TValue value) :11
void KeyValuePair__ctor__fn(uTRef __this, uType* __type, void* key, void* value)
{
    __type->Field(__this, 0/*_key*/) = key;
    __type->Field(__this, 1/*_value*/) = value;
}

// public TKey get_Key() :19
void KeyValuePair__get_Key_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 0/*_key*/)), void();
}

// public KeyValuePair New(TKey key, TValue value) :11
void KeyValuePair__New1_fn(uType* __type, void* key, void* value, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    KeyValuePair__ctor__fn(&obj1, __type, key, value);
    return __retval.Store(obj1), void();
}

// public TValue get_Value() :24
void KeyValuePair__get_Value_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_value*/)), void();
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno
// --------------------------------------------------------------------

// private sealed class EnumerableExtensions.LinkedList<T> :80
// {
static void EnumerableExtensions__LinkedList_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type, offsetof(EnumerableExtensions__LinkedList, Next), 0);
}

uType* EnumerableExtensions__LinkedList_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(EnumerableExtensions__LinkedList);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.EnumerableExtensions.LinkedList`1", options);
    type->fp_build_ = EnumerableExtensions__LinkedList_build;
    return type;
}

// public LinkedList(T item, Uno.Collections.EnumerableExtensions.LinkedList<T> next) :85
void EnumerableExtensions__LinkedList__ctor__fn(EnumerableExtensions__LinkedList* __this, void* item, EnumerableExtensions__LinkedList* next)
{
    __this->Item() = item;
    __this->Next = next;
}

// public LinkedList New(T item, Uno.Collections.EnumerableExtensions.LinkedList<T> next) :85
void EnumerableExtensions__LinkedList__New1_fn(uType* __type, void* item, EnumerableExtensions__LinkedList* next, EnumerableExtensions__LinkedList** __retval)
{
    EnumerableExtensions__LinkedList* obj1 = (EnumerableExtensions__LinkedList*)uNew(__type);
    EnumerableExtensions__LinkedList__ctor__fn(obj1, item, next);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/LinkedList.uno
// ---------------------------------------------------------------------------------

// public sealed class LinkedList<T> :20
// {
static void LinkedList_build(uType* type)
{
    type->SetPrecalc(
        LinkedList__Enumerator_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList_type, interface1));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(LinkedList, _Count), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList, _First), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList, _Last), 0);
}

LinkedList_type* LinkedList_typeof()
{
    static uSStrong<LinkedList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(LinkedList);
    options.TypeSize = sizeof(LinkedList_type);
    type = (LinkedList_type*)uClassType::New("Uno.Collections.LinkedList`1", options);
    type->fp_build_ = LinkedList_build;
    type->fp_ctor_ = (void*)LinkedList__New1_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))LinkedList__UnoCollectionsICollectionTAdd_fn;
    type->interface0.fp_Clear = (void(*)(uObject*))LinkedList__Clear_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))LinkedList__Remove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))LinkedList__Contains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))LinkedList__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))LinkedList__GetEnumerator_fn;
    return type;
}

// public generated LinkedList() :20
void LinkedList__ctor__fn(LinkedList* __this)
{
    __this->ctor_();
}

// public Uno.Collections.LinkedListNode<T> AddAfter(Uno.Collections.LinkedListNode<T> node, T value) :65
void LinkedList__AddAfter_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };
    ::g::Uno::Collections::LinkedListNode* ret2;
    ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[0], value, &ret2), ret2);
    __this->AddAfter1(node, newNode);
    return *__retval = newNode, void();
}

// public void AddAfter(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) :72
void LinkedList__AddAfter1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    __this->AddAfter1(node, newNode);
}

// public Uno.Collections.LinkedListNode<T> AddBefore(Uno.Collections.LinkedListNode<T> node, T value) :106
void LinkedList__AddBefore_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };
    ::g::Uno::Collections::LinkedListNode* ret3;
    ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[0], value, &ret3), ret3);
    __this->AddBefore1(node, newNode);
    return *__retval = newNode, void();
}

// public void AddBefore(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) :113
void LinkedList__AddBefore1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    __this->AddBefore1(node, newNode);
}

// public Uno.Collections.LinkedListNode<T> AddFirst(T value) :169
void LinkedList__AddFirst_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };
    ::g::Uno::Collections::LinkedListNode* ret4;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[0], value, &ret4), ret4);
    __this->AddFirst1(node);
    return *__retval = node, void();
}

// public void AddFirst(Uno.Collections.LinkedListNode<T> node) :147
void LinkedList__AddFirst1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->AddFirst1(node);
}

// public Uno.Collections.LinkedListNode<T> AddLast(T value) :198
void LinkedList__AddLast_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };
    ::g::Uno::Collections::LinkedListNode* ret5;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[0], value, &ret5), ret5);
    __this->AddLast1(node);
    return *__retval = node, void();
}

// public void AddLast(Uno.Collections.LinkedListNode<T> node) :176
void LinkedList__AddLast1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->AddLast1(node);
}

// public void Clear() :217
void LinkedList__Clear_fn(LinkedList* __this)
{
    __this->Clear();
}

// public bool Contains(T value) :240
void LinkedList__Contains_fn(LinkedList* __this, void* value, bool* __retval)
{
    ::g::Uno::Collections::LinkedListNode* ret6;
    return *__retval = (LinkedList__Find_fn(__this, value, &ret6), ret6) != NULL, void();
}

// public generated int get_Count() :22
void LinkedList__get_Count_fn(LinkedList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private generated void set_Count(int value) :22
void LinkedList__set_Count_fn(LinkedList* __this, int* value)
{
    __this->Count(*value);
}

// public Uno.Collections.LinkedListNode<T> Find(T value) :205
void LinkedList__Find_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uT ret7(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    ::g::Uno::Collections::LinkedListNode* curr = __this->First();

    while (curr != NULL)
    {
        if (::g::Uno::Object::Equals(uBoxPtr(__this->__type->T(0), uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(curr), &ret7), ret7)), U_ALLOCA(__this->__type->T(0)->ObjectSize)), uBoxPtr(__this->__type->T(0), value)))
            return *__retval = curr, void();

        curr = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
    }

    return *__retval = NULL, void();
}

// public generated Uno.Collections.LinkedListNode<T> get_First() :23
void LinkedList__get_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Uno.Collections.LinkedListNode<T> value) :23
void LinkedList__set_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value)
{
    __this->First(value);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :60
void LinkedList__GetEnumerator_fn(LinkedList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public generated Uno.Collections.LinkedListNode<T> get_Last() :24
void LinkedList__get_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->Last();
}

// private generated void set_Last(Uno.Collections.LinkedListNode<T> value) :24
void LinkedList__set_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value)
{
    __this->Last(value);
}

// public generated LinkedList New() :20
void LinkedList__New1_fn(uType* __type, LinkedList** __retval)
{
    *__retval = LinkedList::New1(__type);
}

// public bool Remove(T value) :269
void LinkedList__Remove_fn(LinkedList* __this, void* value, bool* __retval)
{
    ::g::Uno::Collections::LinkedListNode* ret8;
    ::g::Uno::Collections::LinkedListNode* node = (LinkedList__Find_fn(__this, value, &ret8), ret8);

    if (node != NULL)
    {
        __this->Remove1(node);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public void Remove(Uno.Collections.LinkedListNode<T> node) :245
void LinkedList__Remove1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->Remove1(node);
}

// private void UncheckedAddAfter(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) :89
void LinkedList__UncheckedAddAfter_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    __this->UncheckedAddAfter(node, newNode);
}

// private void UncheckedAddBefore(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) :130
void LinkedList__UncheckedAddBefore_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    __this->UncheckedAddBefore(node, newNode);
}

// public void Uno.Collections.ICollection<T>.Add(T value) :235
void LinkedList__UnoCollectionsICollectionTAdd_fn(LinkedList* __this, void* value)
{
    ::g::Uno::Collections::LinkedListNode* ret9;
    LinkedList__AddLast_fn(__this, value, &ret9);
}

// public generated LinkedList() [instance] :20
void LinkedList::ctor_()
{
}

// public void AddAfter(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) [instance] :72
void LinkedList::AddAfter1(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("node")));

    if (((LinkedList*)uPtr(node)->List()) != this)
        U_THROW(::g::Uno::InvalidOperationException::New5(uString::Const("The LinkedList node does not belong to current LinkedList.")));

    if (newNode == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("newNode")));

    if (((LinkedList*)uPtr(newNode)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(uString::Const("The LinkedList node already belongs to a LinkedList.")));

    UncheckedAddAfter(node, newNode);
}

// public void AddBefore(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) [instance] :113
void LinkedList::AddBefore1(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("node")));

    if (((LinkedList*)uPtr(node)->List()) != this)
        U_THROW(::g::Uno::InvalidOperationException::New5(uString::Const("The LinkedList node does not belong to current LinkedList.")));

    if (newNode == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("newNode")));

    if (((LinkedList*)uPtr(newNode)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(uString::Const("The LinkedList node already belongs to a LinkedList.")));

    UncheckedAddBefore(node, newNode);
}

// public void AddFirst(Uno.Collections.LinkedListNode<T> node) [instance] :147
void LinkedList::AddFirst1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("node")));

    if (((LinkedList*)uPtr(node)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(uString::Const("The LinkedList node already belongs to a LinkedList.")));

    if (Last() == NULL)
    {
        uPtr(node)->Previous((uPtr(node)->Next(NULL), uCast< ::g::Uno::Collections::LinkedListNode*>(NULL, __types[0])));
        node->List(this);
        First((Last(node), node));
        Count(1);
    }
    else
        UncheckedAddBefore(First(), node);
}

// public void AddLast(Uno.Collections.LinkedListNode<T> node) [instance] :176
void LinkedList::AddLast1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("node")));

    if (((LinkedList*)uPtr(node)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(uString::Const("The LinkedList node already belongs to a LinkedList.")));

    if (Last() == NULL)
    {
        uPtr(node)->Previous((uPtr(node)->Next(NULL), uCast< ::g::Uno::Collections::LinkedListNode*>(NULL, __types[0])));
        node->List(this);
        First((Last(node), node));
        Count(1);
    }
    else
        UncheckedAddAfter(Last(), node);
}

// public void Clear() [instance] :217
void LinkedList::Clear()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.LinkedListNode<T>*/),
    };
    ::g::Uno::Collections::LinkedListNode* curr = First();

    while (curr != NULL)
    {
        ::g::Uno::Collections::LinkedListNode* next = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
        curr->Previous(NULL);
        curr->Next(NULL);
        curr->List(NULL);
        curr = next;
    }

    First((Last(NULL), uCast< ::g::Uno::Collections::LinkedListNode*>(NULL, __types[0])));
    Count(0);
}

// public generated int get_Count() [instance] :22
int LinkedList::Count()
{
    return _Count;
}

// private generated void set_Count(int value) [instance] :22
void LinkedList::Count(int value)
{
    _Count = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_First() [instance] :23
::g::Uno::Collections::LinkedListNode* LinkedList::First()
{
    return _First;
}

// private generated void set_First(Uno.Collections.LinkedListNode<T> value) [instance] :23
void LinkedList::First(::g::Uno::Collections::LinkedListNode* value)
{
    _First = value;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :60
uObject* LinkedList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedList<T>.Enumerator*/),
    };
    return uBox(__types[0], LinkedList__Enumerator__New1(__types[0], this));
}

// public generated Uno.Collections.LinkedListNode<T> get_Last() [instance] :24
::g::Uno::Collections::LinkedListNode* LinkedList::Last()
{
    return _Last;
}

// private generated void set_Last(Uno.Collections.LinkedListNode<T> value) [instance] :24
void LinkedList::Last(::g::Uno::Collections::LinkedListNode* value)
{
    _Last = value;
}

// public void Remove(Uno.Collections.LinkedListNode<T> node) [instance] :245
void LinkedList::Remove1(::g::Uno::Collections::LinkedListNode* node)
{
    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("node")));

    if (((LinkedList*)uPtr(node)->List()) != this)
        U_THROW(::g::Uno::InvalidOperationException::New5(uString::Const("The LinkedList node does not belong to current LinkedList.")));

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous())->Next((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next())->Previous((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous());

    if (node == First())
        First((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());

    if (node == Last())
        Last((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous());

    uPtr(node)->List(NULL);
    Count(Count() - 1);
}

// private void UncheckedAddAfter(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) [instance] :89
void LinkedList::UncheckedAddAfter(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    if (node == Last())
        Last(newNode);

    uPtr(newNode)->List(this);
    newNode->Next((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());
    newNode->Previous(node);

    if (((::g::Uno::Collections::LinkedListNode*)node->Next()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next())->Previous(newNode);

    node->Next(newNode);
    Count(Count() + 1);
}

// private void UncheckedAddBefore(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) [instance] :130
void LinkedList::UncheckedAddBefore(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    if (node == First())
        First(newNode);

    uPtr(newNode)->List(this);
    newNode->Next(node);
    newNode->Previous((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous());

    if (((::g::Uno::Collections::LinkedListNode*)node->Previous()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous())->Next(newNode);

    node->Previous(newNode);
    Count(Count() + 1);
}

// public generated LinkedList New() [static] :20
LinkedList* LinkedList::New1(uType* __type)
{
    LinkedList* obj1 = (LinkedList*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/LinkedList.uno
// ---------------------------------------------------------------------------------

// public sealed class LinkedListNode<T> :6
// {
static void LinkedListNode_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedListNode, _List), 0,
        type, offsetof(LinkedListNode, _Next), 0,
        type, offsetof(LinkedListNode, _Previous), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* LinkedListNode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(LinkedListNode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.LinkedListNode`1", options);
    type->fp_build_ = LinkedListNode_build;
    return type;
}

// public LinkedListNode(T value) :13
void LinkedListNode__ctor__fn(LinkedListNode* __this, void* value)
{
    LinkedListNode__set_Value_fn(__this, value);
}

// public generated Uno.Collections.LinkedList<T> get_List() :8
void LinkedListNode__get_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList** __retval)
{
    *__retval = __this->List();
}

// internal generated void set_List(Uno.Collections.LinkedList<T> value) :8
void LinkedListNode__set_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList* value)
{
    __this->List(value);
}

// public LinkedListNode New(T value) :13
void LinkedListNode__New1_fn(uType* __type, void* value, LinkedListNode** __retval)
{
    LinkedListNode* obj1 = (LinkedListNode*)uNew(__type);
    LinkedListNode__ctor__fn(obj1, value);
    return *__retval = obj1, void();
}

// public generated Uno.Collections.LinkedListNode<T> get_Next() :9
void LinkedListNode__get_Next_fn(LinkedListNode* __this, LinkedListNode** __retval)
{
    *__retval = __this->Next();
}

// internal generated void set_Next(Uno.Collections.LinkedListNode<T> value) :9
void LinkedListNode__set_Next_fn(LinkedListNode* __this, LinkedListNode* value)
{
    __this->Next(value);
}

// public generated Uno.Collections.LinkedListNode<T> get_Previous() :10
void LinkedListNode__get_Previous_fn(LinkedListNode* __this, LinkedListNode** __retval)
{
    *__retval = __this->Previous();
}

// internal generated void set_Previous(Uno.Collections.LinkedListNode<T> value) :10
void LinkedListNode__set_Previous_fn(LinkedListNode* __this, LinkedListNode* value)
{
    __this->Previous(value);
}

// public generated T get_Value() :11
void LinkedListNode__get_Value_fn(LinkedListNode* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :11
void LinkedListNode__set_Value_fn(LinkedListNode* __this, void* value)
{
    __this->_Value() = value;
}

// public generated Uno.Collections.LinkedList<T> get_List() [instance] :8
::g::Uno::Collections::LinkedList* LinkedListNode::List()
{
    return _List;
}

// internal generated void set_List(Uno.Collections.LinkedList<T> value) [instance] :8
void LinkedListNode::List(::g::Uno::Collections::LinkedList* value)
{
    _List = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_Next() [instance] :9
LinkedListNode* LinkedListNode::Next()
{
    return _Next;
}

// internal generated void set_Next(Uno.Collections.LinkedListNode<T> value) [instance] :9
void LinkedListNode::Next(LinkedListNode* value)
{
    _Next = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_Previous() [instance] :10
LinkedListNode* LinkedListNode::Previous()
{
    return _Previous;
}

// internal generated void set_Previous(Uno.Collections.LinkedListNode<T> value) [instance] :10
void LinkedListNode::Previous(LinkedListNode* value)
{
    _Previous = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/List.uno
// ---------------------------------------------------------------------------

// public sealed class List<T> :6
// {
static void List_build(uType* type)
{
    type->SetPrecalc(
        type->T(0)->Array(),
        List__Enumerator_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<T>*/, type->T(0), NULL),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Array_typeof()->MakeMethod(4/*Sort<T>*/, type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(List_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(List_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(List_type, interface2));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(List, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(List, _used), 0,
        ::g::Uno::Int_typeof(), offsetof(List, _version), 0);
}

List_type* List_typeof()
{
    static uSStrong<List_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(List);
    options.TypeSize = sizeof(List_type);
    type = (List_type*)uClassType::New("Uno.Collections.List`1", options);
    type->fp_build_ = List_build;
    type->fp_ctor_ = (void*)List__New1_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))List__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))List__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))List__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))List__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))List__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))List__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))List__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))List__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))List__GetEnumerator_boxed_fn;
    return type;
}

// public List() :60
void List__ctor__fn(List* __this)
{
    __this->ctor_();
}

// public List(int capacity) :66
void List__ctor_1_fn(List* __this, int* capacity)
{
    __this->ctor_1(*capacity);
}

// public void Add(T item) :125
void List__Add_fn(List* __this, void* item)
{
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_used++) = item;
    __this->_version++;
}

// public void AddRange(Uno.Collections.IEnumerable<T> items) :132
void List__AddRange_fn(List* __this, uObject* items)
{
    __this->AddRange(items);
}

// private void BoundsCheck(int index) :87
void List__BoundsCheck_fn(List* __this, int* index)
{
    __this->BoundsCheck(*index);
}

// public void Clear() :216
void List__Clear_fn(List* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :223
void List__Contains_fn(List* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Generic.Equals<T>*/),
    };
    bool ret4;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_data)->TItem(i), item, &ret4), ret4))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public int get_Count() :122
void List__get_Count_fn(List* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private void EnsureCapacity() :93
void List__EnsureCapacity_fn(List* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() :72
void List__GetEnumerator_fn(List* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.List<T>.Enumerator*/),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((List__Enumerator__New1_fn(__types[0], __this, &ret5), ret5)), void();
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() :72
void List__GetEnumerator_boxed_fn(List* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public void Insert(int index, T item) :137
void List__Insert_fn(List* __this, int* index, void* item)
{
    int index_ = *index;

    if ((index_ < 0) || (index_ > __this->_used))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    __this->EnsureCapacity();
    uType* type = __this->__type->T(0);
    size_t size = type->ValueSize;
    uint8_t* src = (uint8_t*) __this->_data->Ptr() + size * index_;
    memmove(src + size, src, size * (__this->_used - index_));
    memset(src, 0, size);
    uPtr(__this->_data)->TItem(index_) = item;
    __this->_version++;
    __this->_used++;
}

// public T get_Item(int index) :234
void List__get_Item_fn(List* __this, int* index, uTRef __retval)
{
    int index_ = *index;
    __this->BoundsCheck(index_);
    return __retval.Store(uPtr(__this->_data)->TItem(index_)), void();
}

// public void set_Item(int index, T value) :239
void List__set_Item_fn(List* __this, int* index, void* value)
{
    int index_ = *index;
    __this->BoundsCheck(index_);
    uPtr(__this->_data)->TItem(index_) = value;
    __this->_version++;
}

// public List New() :60
void List__New1_fn(uType* __type, List** __retval)
{
    *__retval = List::New1(__type);
}

// public List New(int capacity) :66
void List__New2_fn(uType* __type, int* capacity, List** __retval)
{
    *__retval = List::New2(__type, *capacity);
}

// public bool Remove(T item) :172
void List__Remove_fn(List* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Generic.Equals<T>*/),
    };
    bool ret7;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_data)->TItem(i), item, &ret7), ret7))
        {
            __this->RemoveAt(i);
            return *__retval = true, void();
        }

    return *__retval = false, void();
}

// public void RemoveAt(int index) :186
void List__RemoveAt_fn(List* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public void Sort(Uno.Comparison<T> comparer) :247
void List__Sort_fn(List* __this, uDelegate* comparer)
{
    __this->Sort(comparer);
}

// public T[] ToArray() :77
void List__ToArray_fn(List* __this, uArray** __retval)
{
    *__retval = __this->ToArray();
}

// public List() [instance] :60
void List::ctor_()
{
    _data = NULL;
    _used = 0;
}

// public List(int capacity) [instance] :66
void List::ctor_1(int capacity)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    _data = uArray::New(__types[0], capacity);
    _used = 0;
}

// public void AddRange(Uno.Collections.IEnumerable<T> items) [instance] :132
void List::AddRange(uObject* items)
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(4/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret3(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT i(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(items), __types[0]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
        {
            i = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret3), ret3);
            List__Add_fn(this, i);
        }
    }
}

// private void BoundsCheck(int index) [instance] :87
void List::BoundsCheck(int index)
{
    if ((index < 0) || (index >= Count()))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void Clear() [instance] :216
void List::Clear()
{
    _data = NULL;
    _used = 0;
    _version++;
}

// public int get_Count() [instance] :122
int List::Count()
{
    return _used;
}

// private void EnsureCapacity() [instance] :93
void List::EnsureCapacity()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };

    if (_data == NULL)
        _data = uArray::New(__types[0], 2);
    else if ((_used + 1) >= uPtr(_data)->Length())
    {
        uArray* newData = uArray::New(__types[0], ::g::Uno::Math::Max8(2, uPtr(_data)->Length() * 2));
        uType* type = __type->T(0);
        size_t size = type->ValueSize;
        uint8_t* src = (uint8_t*) this->_data->Ptr();
        uint8_t* dst = (uint8_t*) newData->Ptr();
        memcpy(dst, src, size * this->_used);
        memset(src, 0, size * this->_used);
        _data = newData;
    }
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() [instance] :72
uObject* List::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.List<T>.Enumerator*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (List__GetEnumerator_fn(this, &ret8), ret8));
}

// public void RemoveAt(int index) [instance] :186
void List::RemoveAt(int index)
{
    BoundsCheck(index);
    _version++;
    uType* type = __type->T(0);
    size_t size = type->ValueSize;
    uint8_t* dst = (uint8_t*) this->_data->Ptr() + size * index;
    
    if (type->Flags & uTypeFlagsRetainStruct)
        uAutoReleaseStruct(type, dst);
    else if (U_IS_OBJECT(type))
        uAutoRelease(*(uObject**) dst);
    
    memmove(dst, dst + size, size * (this->_used - index - 1));
    this->_used--;
    memset((uint8_t*) this->_data->Ptr() + size * this->_used, 0, size);
}

// public void Sort(Uno.Comparison<T> comparer) [instance] :247
void List::Sort(uDelegate* comparer)
{
    uType* __types[] = {
        __type->Precalced(5/*Uno.Array.Sort<T>*/),
    };
    ::g::Uno::Array::Sort(__types[0], _data, 0, _used, comparer);
    _version++;
}

// public T[] ToArray() [instance] :77
uArray* List::ToArray()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    uArray* t = uArray::New(__types[0], _used);

    for (int i = 0; i < _used; i++)
        uPtr(t)->TItem(i) = uPtr(_data)->TItem(i);

    return t;
}

// public List New() [static] :60
List* List::New1(uType* __type)
{
    List* obj1 = (List*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public List New(int capacity) [static] :66
List* List::New2(uType* __type, int capacity)
{
    List* obj2 = (List*)uNew(__type);
    obj2->ctor_1(capacity);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/$.uno
// ---------------------------------------------------------

// public sealed class ObservableList<T> :8
// {
static void ObservableList_build(uType* type)
{
    ::STRINGS[2] = uString::Const("added");
    ::STRINGS[3] = uString::Const("removed");
    ::TYPES[4] = ::g::Uno::Collections::List_typeof();
    ::TYPES[5] = ::g::Uno::Collections::List__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(ObservableList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(ObservableList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(ObservableList_type, interface2));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(ObservableList, added), 0,
        ::TYPES[4/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(ObservableList, items), 0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(ObservableList, removed), 0);
}

ObservableList_type* ObservableList_typeof()
{
    static uSStrong<ObservableList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ObservableList);
    options.TypeSize = sizeof(ObservableList_type);
    type = (ObservableList_type*)uClassType::New("Uno.Collections.ObservableList`1", options);
    type->fp_build_ = ObservableList_build;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))ObservableList__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))ObservableList__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))ObservableList__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ObservableList__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ObservableList__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ObservableList__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ObservableList__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ObservableList__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ObservableList__GetEnumerator_fn;
    return type;
}

// public ObservableList(Uno.Action<T> added, Uno.Action<T> removed) :14
void ObservableList__ctor__fn(ObservableList* __this, uDelegate* added1, uDelegate* removed1)
{
    __this->ctor_(added1, removed1);
}

// public void Add(T item) :44
void ObservableList__Add_fn(ObservableList* __this, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.List<T>*/),
    };

    if (__this->items == NULL)
        __this->items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));

    ::g::Uno::Collections::List__Add_fn(uPtr(__this->items), item);
    uPtr(__this->added)->InvokeVoid(item);
}

// public void Clear() :25
void ObservableList__Clear_fn(ObservableList* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :36
void ObservableList__Contains_fn(ObservableList* __this, void* item, bool* __retval)
{
    bool ret5;

    if (__this->items == NULL)
        return *__retval = false, void();

    return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(__this->items), item, &ret5), ret5), void();
}

// public int get_Count() :92
void ObservableList__get_Count_fn(ObservableList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :105
void ObservableList__GetEnumerator_fn(ObservableList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public void Insert(int index, T item) :53
void ObservableList__Insert_fn(ObservableList* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.List<T>*/),
    };
    int index_ = *index;

    if (__this->items == NULL)
        __this->items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->items), uCRef<int>(index_), item);
    uPtr(__this->added)->InvokeVoid(item);
}

// public T get_Item(int index) :96
void ObservableList__get_Item_fn(ObservableList* __this, int* index, uTRef __retval)
{
    uT ret11(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    int index_ = *index;

    if (__this->items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->items), uCRef<int>(index_), &ret11), ret11)), void();
}

// public ObservableList New(Uno.Action<T> added, Uno.Action<T> removed) :14
void ObservableList__New1_fn(uType* __type, uDelegate* added1, uDelegate* removed1, ObservableList** __retval)
{
    *__retval = ObservableList::New1(__type, added1, removed1);
}

// public bool Remove(T item) :81
void ObservableList__Remove_fn(ObservableList* __this, void* item, bool* __retval)
{
    bool ret7;

    if (__this->items == NULL)
        return *__retval = false, void();

    bool res = (::g::Uno::Collections::List__Remove_fn(uPtr(__this->items), item, &ret7), ret7);

    if (res)
        uPtr(__this->removed)->InvokeVoid(item);

    return *__retval = res, void();
}

// public void RemoveAt(int index) :73
void ObservableList__RemoveAt_fn(ObservableList* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public ObservableList(Uno.Action<T> added, Uno.Action<T> removed) [instance] :14
void ObservableList::ctor_(uDelegate* added1, uDelegate* removed1)
{
    if (::g::Uno::Delegate::op_Equality(added1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"added"*/]));

    if (::g::Uno::Delegate::op_Equality(removed1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"removed"*/]));

    added = added1;
    removed = removed1;
}

// public void Clear() [instance] :25
void ObservableList::Clear()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>.Enumerator*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT i(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    bool ret3;

    if (items != NULL)
    {
        ::g::Uno::Collections::List* removedItems = items;
        items = NULL;
        enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removedItems), &ret2), ret2);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::Collections::List__Enumerator__Dispose_fn(&enum1, __types[0]);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while ((::g::Uno::Collections::List__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3))
            {
                i = (::g::Uno::Collections::List__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
                uPtr(removed)->InvokeVoid(i);
            }
        }
    }
}

// public int get_Count() [instance] :92
int ObservableList::Count()
{
    return (items != NULL) ? uPtr(items)->Count() : 0;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :105
uObject* ObservableList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>.Enumerator*/),
        __type->Precalced(1/*Uno.Collections.List<T>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (items == NULL)
        items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[1]));

    return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(items), &ret6), ret6));
}

// public void RemoveAt(int index) [instance] :73
void ObservableList::RemoveAt(int index)
{
    uT ret9(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    bool ret8;

    if (items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    ObservableList__Remove_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(items), uCRef<int>(index), &ret9), ret9), &ret8);
}

// public ObservableList New(Uno.Action<T> added, Uno.Action<T> removed) [static] :14
ObservableList* ObservableList::New1(uType* __type, uDelegate* added1, uDelegate* removed1)
{
    ObservableList* obj1 = (ObservableList*)uNew(__type);
    obj1->ctor_(added1, removed1);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno
// --------------------------------------------------------------------

// internal sealed class OfTypeEnumerable<T, U> :359
// {
static void OfTypeEnumerable_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Collections::OfTypeEnumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::OfTypeEnumerator_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::TYPES[7/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(1), NULL), offsetof(OfTypeEnumerable_type, interface0));
    type->SetFields(0,
        ::TYPES[7/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(OfTypeEnumerable, _source), 0);
}

OfTypeEnumerable_type* OfTypeEnumerable_typeof()
{
    static uSStrong<OfTypeEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(OfTypeEnumerable);
    options.TypeSize = sizeof(OfTypeEnumerable_type);
    type = (OfTypeEnumerable_type*)uClassType::New("Uno.Collections.OfTypeEnumerable`2", options);
    type->fp_build_ = OfTypeEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))OfTypeEnumerable__GetEnumerator_fn;
    return type;
}

// public OfTypeEnumerable(Uno.Collections.IEnumerable<T> source) :363
void OfTypeEnumerable__ctor__fn(OfTypeEnumerable* __this, uObject* source)
{
    __this->ctor_(source);
}

// public Uno.Collections.IEnumerator<U> GetEnumerator() :368
void OfTypeEnumerable__GetEnumerator_fn(OfTypeEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public OfTypeEnumerable New(Uno.Collections.IEnumerable<T> source) :363
void OfTypeEnumerable__New1_fn(uType* __type, uObject* source, OfTypeEnumerable** __retval)
{
    *__retval = OfTypeEnumerable::New1(__type, source);
}

// public OfTypeEnumerable(Uno.Collections.IEnumerable<T> source) [instance] :363
void OfTypeEnumerable::ctor_(uObject* source)
{
    _source = source;
}

// public Uno.Collections.IEnumerator<U> GetEnumerator() [instance] :368
uObject* OfTypeEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.OfTypeEnumerator<T, U>*/),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
    };
    return (uObject*)((::g::Uno::Collections::OfTypeEnumerator*)::g::Uno::Collections::OfTypeEnumerator::New1(__types[0], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), __types[1]))));
}

// public OfTypeEnumerable New(Uno.Collections.IEnumerable<T> source) [static] :363
OfTypeEnumerable* OfTypeEnumerable::New1(uType* __type, uObject* source)
{
    OfTypeEnumerable* obj1 = (OfTypeEnumerable*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno
// --------------------------------------------------------------------

// internal sealed class OfTypeEnumerator<T, U> :374
// {
static void OfTypeEnumerator_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[9/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(1), NULL), offsetof(OfTypeEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(OfTypeEnumerator_type, interface1),
        ::TYPES[8/*Uno.Collections.IEnumerator*/], offsetof(OfTypeEnumerator_type, interface2));
    type->SetFields(0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[9/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(OfTypeEnumerator, _source), 0);
}

OfTypeEnumerator_type* OfTypeEnumerator_typeof()
{
    static uSStrong<OfTypeEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(OfTypeEnumerator);
    options.TypeSize = sizeof(OfTypeEnumerator_type);
    type = (OfTypeEnumerator_type*)uClassType::New("Uno.Collections.OfTypeEnumerator`2", options);
    type->fp_build_ = OfTypeEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))OfTypeEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))OfTypeEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))OfTypeEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))OfTypeEnumerator__MoveNext_fn;
    return type;
}

// public OfTypeEnumerator(Uno.Collections.IEnumerator<T> source) :379
void OfTypeEnumerator__ctor__fn(OfTypeEnumerator* __this, uObject* source)
{
    __this->ctor_(source);
}

// public U get_Current() :386
void OfTypeEnumerator__get_Current_fn(OfTypeEnumerator* __this, uTRef __retval)
{
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :389
void OfTypeEnumerator__Dispose_fn(OfTypeEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :399
void OfTypeEnumerator__MoveNext_fn(OfTypeEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public OfTypeEnumerator New(Uno.Collections.IEnumerator<T> source) :379
void OfTypeEnumerator__New1_fn(uType* __type, uObject* source, OfTypeEnumerator** __retval)
{
    *__retval = OfTypeEnumerator::New1(__type, source);
}

// public void Reset() :394
void OfTypeEnumerator__Reset_fn(OfTypeEnumerator* __this)
{
    __this->Reset();
}

// public OfTypeEnumerator(Uno.Collections.IEnumerator<T> source) [instance] :379
void OfTypeEnumerator::ctor_(uObject* source)
{
    _source = source;
}

// public void Dispose() [instance] :389
void OfTypeEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :399
bool OfTypeEnumerator::MoveNext()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT ret3(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    while (true)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
            return false;

        if (uIs(uBoxPtr(__type->T(0), (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[0]), &ret2), ret2)), __type->T(1)))
        {
            uObject* obj = uBoxPtr(__type->T(0), (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[0]), &ret3), ret3));
            _current() = uUnboxAny(__type->T(1), obj);
            return true;
        }
    }

    return false;
}

// public void Reset() [instance] :394
void OfTypeEnumerator::Reset()
{
    ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(_source), ::TYPES[8/*Uno.Collections.IEnumerator*/]));
}

// public OfTypeEnumerator New(Uno.Collections.IEnumerator<T> source) [static] :379
OfTypeEnumerator* OfTypeEnumerator::New1(uType* __type, uObject* source)
{
    OfTypeEnumerator* obj1 = (OfTypeEnumerator*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno
// --------------------------------------------------------------------

// internal sealed class OrderByCompare<T> :438
// {
static void OrderByCompare_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(0), ::g::Uno::Int_typeof(), NULL), offsetof(OrderByCompare, _orderFunction), 0);
}

uType* OrderByCompare_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(OrderByCompare);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.OrderByCompare`1", options);
    type->fp_build_ = OrderByCompare_build;
    return type;
}

// public OrderByCompare(Uno.Func<T, T, int> orderFunction) :442
void OrderByCompare__ctor__fn(OrderByCompare* __this, uDelegate* orderFunction)
{
    __this->ctor_(orderFunction);
}

// public int Compare(T a, T b) :447
void OrderByCompare__Compare_fn(OrderByCompare* __this, void* a, void* b, int* __retval)
{
    int ret2;
    return *__retval = (uPtr(__this->_orderFunction)->Invoke(&ret2, 2, a, b), ret2), void();
}

// public OrderByCompare New(Uno.Func<T, T, int> orderFunction) :442
void OrderByCompare__New1_fn(uType* __type, uDelegate* orderFunction, OrderByCompare** __retval)
{
    *__retval = OrderByCompare::New1(__type, orderFunction);
}

// public OrderByCompare(Uno.Func<T, T, int> orderFunction) [instance] :442
void OrderByCompare::ctor_(uDelegate* orderFunction)
{
    _orderFunction = orderFunction;
}

// public OrderByCompare New(Uno.Func<T, T, int> orderFunction) [static] :442
OrderByCompare* OrderByCompare::New1(uType* __type, uDelegate* orderFunction)
{
    OrderByCompare* obj1 = (OrderByCompare*)uNew(__type);
    obj1->ctor_(orderFunction);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/PriorityQueue.uno
// --------------------------------------------------------------------------

// internal sealed class PriorityQueue<T> :23
// {
static void PriorityQueue_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::List_typeof();
    ::TYPES[10] = ::g::Uno::Collections::PriorityQueueItem_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::PriorityQueueItem_typeof()->MakeType(type->T(0), NULL), NULL),
        ::g::Uno::Collections::PriorityQueueItem_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.List`1*/]->MakeType(::TYPES[10/*Uno.Collections.PriorityQueueItem`1*/]->MakeType(type->T(0), NULL), NULL), offsetof(PriorityQueue, _items), 0,
        ::g::Uno::Collections::PriorityQueueType_typeof(), offsetof(PriorityQueue, _type), 0);
}

uType* PriorityQueue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(PriorityQueue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.PriorityQueue`1", options);
    type->fp_build_ = PriorityQueue_build;
    return type;
}

// public PriorityQueue([Uno.Collections.PriorityQueueType type]) :28
void PriorityQueue__ctor__fn(PriorityQueue* __this, int* type)
{
    __this->ctor_(*type);
}

// public void Add(T value, float2 priority) :70
void PriorityQueue__Add2_fn(PriorityQueue* __this, void* value, ::g::Uno::Float2* priority)
{
    ::g::Uno::Float2 priority_ = *priority;
    PriorityQueue__Add4_fn(__this, value, uCRef(::g::Uno::Float4__New6(priority_, 0.0f, 0.0f)));
}

// public void Add(T value, float4 priority) :73
void PriorityQueue__Add4_fn(PriorityQueue* __this, void* value, ::g::Uno::Float4* priority)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
    };
    uT collection1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::Float4 priority_ = *priority;
    int at = (__this->_type == 0) ? __this->LowerBound(priority_) : __this->UpperBound(priority_);
    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_items), uCRef<int>(at), (collection1.Default(), collection1[0/*Value*/] = value, collection1[1/*Priority*/].Value< ::g::Uno::Float4>() = priority_, collection1));
}

// private static int Compare(float4 a, float4 b) :33
void PriorityQueue__Compare_fn(uType* __type, ::g::Uno::Float4* a, ::g::Uno::Float4* b, int* __retval)
{
    *__retval = PriorityQueue::Compare(__type, *a, *b);
}

// public int get_Count() :115
void PriorityQueue__get_Count_fn(PriorityQueue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public bool get_Empty() :110
void PriorityQueue__get_Empty_fn(PriorityQueue* __this, bool* __retval)
{
    *__retval = __this->Empty();
}

// private int LowerBound(float4 priority) :48
void PriorityQueue__LowerBound_fn(PriorityQueue* __this, ::g::Uno::Float4* priority, int* __retval)
{
    *__retval = __this->LowerBound(*priority);
}

// public PriorityQueue New([Uno.Collections.PriorityQueueType type]) :28
void PriorityQueue__New1_fn(uType* __type, int* type, PriorityQueue** __retval)
{
    *__retval = PriorityQueue::New1(__type, *type);
}

// public T PopTop(float4& priority) :99
void PriorityQueue__PopTop1_fn(PriorityQueue* __this, ::g::Uno::Float4* priority, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    int i = uPtr(__this->_items)->Count() - 1;
    v = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int>(i), &ret4), ret4)[0/*Value*/];
    *priority = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int>(i), &ret5), ret5)[1/*Priority*/].Value< ::g::Uno::Float4>();
    uPtr(__this->_items)->RemoveAt(i);
    return __retval.Store(v), void();
}

// private int UpperBound(float4 priority) :60
void PriorityQueue__UpperBound_fn(PriorityQueue* __this, ::g::Uno::Float4* priority, int* __retval)
{
    *__retval = __this->UpperBound(*priority);
}

// public PriorityQueue([Uno.Collections.PriorityQueueType type]) [instance] :28
void PriorityQueue::ctor_(int type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<Uno.Collections.PriorityQueueItem<T>>*/),
    };
    _items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _type = type;
}

// public int get_Count() [instance] :115
int PriorityQueue::Count()
{
    return uPtr(_items)->Count();
}

// public bool get_Empty() [instance] :110
bool PriorityQueue::Empty()
{
    return uPtr(_items)->Count() == 0;
}

// private int LowerBound(float4 priority) [instance] :48
int PriorityQueue::LowerBound(::g::Uno::Float4 priority)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    for (int i = 0; i < uPtr(_items)->Count(); ++i)
        if (PriorityQueue::Compare(__type, (::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int>(i), &ret2), ret2)[1/*Priority*/].Value< ::g::Uno::Float4>(), priority) >= 0)
            return i;

    return uPtr(_items)->Count();
}

// private int UpperBound(float4 priority) [instance] :60
int PriorityQueue::UpperBound(::g::Uno::Float4 priority)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
    };
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));

    for (int i = 0; i < uPtr(_items)->Count(); ++i)
        if (PriorityQueue::Compare(__type, (::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int>(i), &ret7), ret7)[1/*Priority*/].Value< ::g::Uno::Float4>(), priority) > 0)
            return i;

    return uPtr(_items)->Count();
}

// private static int Compare(float4 a, float4 b) [static] :33
int PriorityQueue::Compare(uType* __type, ::g::Uno::Float4 a, ::g::Uno::Float4 b)
{
    for (int i = 0; i < 4; ++i)
    {
        if (a.Item(i) < b.Item(i))
            return -1;

        if (a.Item(i) > b.Item(i))
            return 1;
    }

    return 0;
}

// public PriorityQueue New([Uno.Collections.PriorityQueueType type]) [static] :28
PriorityQueue* PriorityQueue::New1(uType* __type, int type)
{
    PriorityQueue* obj1 = (PriorityQueue*)uNew(__type);
    obj1->ctor_(type);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/PriorityQueue.uno
// --------------------------------------------------------------------------

// internal struct PriorityQueueItem<T> :5
// {
static void PriorityQueueItem_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float4_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
}

uStructType* PriorityQueueItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.PriorityQueueItem`1", options);
    type->fp_build_ = PriorityQueueItem_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/PriorityQueue.uno
// --------------------------------------------------------------------------

// internal enum PriorityQueueType :11
uEnumType* PriorityQueueType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Collections.PriorityQueueType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Fifo", 0LL,
        "Lifo", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Queue.uno
// ----------------------------------------------------------------------------

// public sealed class Queue<T> :6
// {
static void Queue_build(uType* type)
{
    type->SetPrecalc(
        type->T(0)->Array(),
        Queue__Enumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(Queue_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(Queue, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(Queue, _head), 0,
        ::g::Uno::Int_typeof(), offsetof(Queue, _size), 0,
        ::g::Uno::Int_typeof(), offsetof(Queue, _tail), 0,
        ::g::Uno::Int_typeof(), offsetof(Queue, _version), 0);
}

Queue_type* Queue_typeof()
{
    static uSStrong<Queue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Queue);
    options.TypeSize = sizeof(Queue_type);
    type = (Queue_type*)uClassType::New("Uno.Collections.Queue`1", options);
    type->fp_build_ = Queue_build;
    type->fp_ctor_ = (void*)Queue__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Queue__GetEnumerator_boxed_fn;
    return type;
}

// public Queue() :69
void Queue__ctor__fn(Queue* __this)
{
    __this->ctor_();
}

// public void Clear() :95
void Queue__Clear_fn(Queue* __this)
{
    __this->Clear();
}

// public int get_Count() :87
void Queue__get_Count_fn(Queue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public T Dequeue() :122
void Queue__Dequeue_fn(Queue* __this, uTRef __retval)
{
    uT result(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));

    if (__this->_size == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(uString::Const("Queue is empty")));

    result = uPtr(__this->_data)->TItem(__this->_head);
    uPtr(__this->_data)->TItem(__this->_head).Default();
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return __retval.Store(result), void();
}

// private T ElementAt(int index) :166
void Queue__ElementAt_fn(Queue* __this, int* index, uTRef __retval)
{
    int index_ = *index;
    return __retval.Store(uPtr(__this->_data)->TItem(__this->_head + index_)), void();
}

// public void Enqueue(T item) :113
void Queue__Enqueue_fn(Queue* __this, void* item)
{
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

// private void EnsureCapacity() :145
void Queue__EnsureCapacity_fn(Queue* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() :90
void Queue__GetEnumerator_fn(Queue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.Queue<T>.Enumerator*/),
    };
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Queue__Enumerator__New1_fn(__types[0], __this, &ret5), ret5)), void();
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() :90
void Queue__GetEnumerator_boxed_fn(Queue* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public Queue New() :69
void Queue__New1_fn(uType* __type, Queue** __retval)
{
    *__retval = Queue::New1(__type);
}

// public Queue() [instance] :69
void Queue::ctor_()
{
    _data = NULL;
    _head = 0;
    _tail = 0;
    _size = 0;
}

// public void Clear() [instance] :95
void Queue::Clear()
{
    _data = NULL;
    _head = 0;
    _tail = 0;
    _size = 0;
    _version++;
}

// public int get_Count() [instance] :87
int Queue::Count()
{
    return _size;
}

// private void EnsureCapacity() [instance] :145
void Queue::EnsureCapacity()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    uT ret4(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if (_data == NULL)
        _data = uArray::New(__types[0], 2);

    if (_tail == uPtr(_data)->Length())
    {
        int newSize = (_size != 0) ? _size * 2 : uPtr(_data)->Length();
        uArray* newData = uArray::New(__types[0], newSize);

        for (int i = 0; i < _size; i++)
            uPtr(newData)->TItem(i) = (Queue__ElementAt_fn(this, uCRef<int>(i), &ret4), ret4);

        _data = newData;
        _head = 0;
        _tail = _size;
    }
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() [instance] :90
uObject* Queue::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.Queue<T>.Enumerator*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Queue__GetEnumerator_fn(this, &ret6), ret6));
}

// public Queue New() [static] :69
Queue* Queue::New1(uType* __type)
{
    Queue* obj1 = (Queue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/RootableList.uno
// -------------------------------------------------------------------------

// public sealed class RootableList<T> :12
// {
static void RootableList_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Supports only one subscription");
    ::STRINGS[2] = uString::Const("added");
    ::STRINGS[3] = uString::Const("removed");
    ::TYPES[4] = ::g::Uno::Collections::List_typeof();
    ::TYPES[5] = ::g::Uno::Collections::List__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(RootableList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(RootableList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(RootableList_type, interface2));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(RootableList, _added), 0,
        ::TYPES[4/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(RootableList, _items), 0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(RootableList, _removed), 0);
}

RootableList_type* RootableList_typeof()
{
    static uSStrong<RootableList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(RootableList);
    options.TypeSize = sizeof(RootableList_type);
    type = (RootableList_type*)uClassType::New("Uno.Collections.RootableList`1", options);
    type->fp_build_ = RootableList_build;
    type->fp_ctor_ = (void*)RootableList__New1_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))RootableList__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))RootableList__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))RootableList__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))RootableList__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))RootableList__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))RootableList__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))RootableList__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))RootableList__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))RootableList__GetEnumerator_fn;
    return type;
}

// public generated RootableList() :12
void RootableList__ctor__fn(RootableList* __this)
{
    __this->ctor_();
}

// public void Add(T item) :91
void RootableList__Add_fn(RootableList* __this, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.List<T>*/),
    };

    if (__this->_items == NULL)
        __this->_items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));

    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_items), item);
    RootableList__OnAdded_fn(__this, item);
}

// public void Clear() :72
void RootableList__Clear_fn(RootableList* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :83
void RootableList__Contains_fn(RootableList* __this, void* item, bool* __retval)
{
    bool ret5;

    if (__this->_items == NULL)
        return *__retval = false, void();

    return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(__this->_items), item, &ret5), ret5), void();
}

// public int get_Count() :139
void RootableList__get_Count_fn(RootableList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :152
void RootableList__GetEnumerator_fn(RootableList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public void Insert(int index, T item) :100
void RootableList__Insert_fn(RootableList* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.List<T>*/),
    };
    int index_ = *index;

    if (__this->_items == NULL)
        __this->_items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_items), uCRef<int>(index_), item);
    RootableList__OnAdded_fn(__this, item);
}

// public T get_Item(int index) :143
void RootableList__get_Item_fn(RootableList* __this, int* index, uTRef __retval)
{
    uT ret13(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    int index_ = *index;

    if (__this->_items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int>(index_), &ret13), ret13)), void();
}

// public generated RootableList New() :12
void RootableList__New1_fn(uType* __type, RootableList** __retval)
{
    *__retval = RootableList::New1(__type);
}

// private void OnAdded(T item) :60
void RootableList__OnAdded_fn(RootableList* __this, void* item)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_added, NULL))
        uPtr(__this->_added)->InvokeVoid(item);
}

// private void OnRemoved(T item) :66
void RootableList__OnRemoved_fn(RootableList* __this, void* item)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_removed, NULL))
        uPtr(__this->_removed)->InvokeVoid(item);
}

// public bool Remove(T item) :128
void RootableList__Remove_fn(RootableList* __this, void* item, bool* __retval)
{
    bool ret7;

    if (__this->_items == NULL)
        return *__retval = false, void();

    bool res = (::g::Uno::Collections::List__Remove_fn(uPtr(__this->_items), item, &ret7), ret7);

    if (res)
        RootableList__OnRemoved_fn(__this, item);

    return *__retval = res, void();
}

// public void RemoveAt(int index) :120
void RootableList__RemoveAt_fn(RootableList* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public void RootSubscribe(Uno.Action<T> added, Uno.Action<T> removed) :32
void RootableList__RootSubscribe_fn(RootableList* __this, uDelegate* added, uDelegate* removed)
{
    __this->RootSubscribe(added, removed);
}

// public void RootUnsubscribe() :48
void RootableList__RootUnsubscribe_fn(RootableList* __this)
{
    __this->RootUnsubscribe();
}

// public void Subscribe(Uno.Action<T> added, Uno.Action<T> removed) :18
void RootableList__Subscribe_fn(RootableList* __this, uDelegate* added, uDelegate* removed)
{
    __this->Subscribe(added, removed);
}

// public void Unsubscribe() :42
void RootableList__Unsubscribe_fn(RootableList* __this)
{
    __this->Unsubscribe();
}

// public generated RootableList() [instance] :12
void RootableList::ctor_()
{
}

// public void Clear() [instance] :72
void RootableList::Clear()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>.Enumerator*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT i(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    bool ret3;

    if (_items != NULL)
    {
        ::g::Uno::Collections::List* removedItems = _items;
        _items = NULL;
        enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removedItems), &ret2), ret2);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::Collections::List__Enumerator__Dispose_fn(&enum1, __types[0]);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while ((::g::Uno::Collections::List__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3))
            {
                i = (::g::Uno::Collections::List__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
                RootableList__OnRemoved_fn(this, i);
            }
        }
    }
}

// public int get_Count() [instance] :139
int RootableList::Count()
{
    return (_items != NULL) ? uPtr(_items)->Count() : 0;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :152
uObject* RootableList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>.Enumerator*/),
        __type->Precalced(1/*Uno.Collections.List<T>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_items == NULL)
        _items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[1]));

    return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_items), &ret6), ret6));
}

// public void RemoveAt(int index) [instance] :120
void RootableList::RemoveAt(int index)
{
    uT ret9(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    bool ret8;

    if (_items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    RootableList__Remove_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int>(index), &ret9), ret9), &ret8);
}

// public void RootSubscribe(Uno.Action<T> added, Uno.Action<T> removed) [instance] :32
void RootableList::RootSubscribe(uDelegate* added, uDelegate* removed)
{
    uT ret11(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    Subscribe(added, removed);

    if (_items == NULL)
        return;

    for (int i = 0; i < uPtr(_items)->Count(); ++i)
        RootableList__OnAdded_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int>(i), &ret11), ret11));
}

// public void RootUnsubscribe() [instance] :48
void RootableList::RootUnsubscribe()
{
    uT ret12(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uDelegate* removed = _removed;
    Unsubscribe();

    if (::g::Uno::Delegate::op_Inequality(removed, NULL) && (_items != NULL))

        for (int i = 0; i < uPtr(_items)->Count(); ++i)
            uPtr(removed)->InvokeVoid((::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int>(i), &ret12), ret12));
}

// public void Subscribe(Uno.Action<T> added, Uno.Action<T> removed) [instance] :18
void RootableList::Subscribe(uDelegate* added, uDelegate* removed)
{
    if (::g::Uno::Delegate::op_Inequality(_added, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Supports on...*/]));

    if (::g::Uno::Delegate::op_Equality(added, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"added"*/]));

    if (::g::Uno::Delegate::op_Equality(removed, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"removed"*/]));

    _added = added;
    _removed = removed;
}

// public void Unsubscribe() [instance] :42
void RootableList::Unsubscribe()
{
    _added = NULL;
    _removed = NULL;
}

// public generated RootableList New() [static] :12
RootableList* RootableList::New1(uType* __type)
{
    RootableList* obj1 = (RootableList*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno
// --------------------------------------------------------------------

// internal sealed class SelectEnumerable<T, TRet> :459
// {
static void SelectEnumerable_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Collections::SelectEnumerator_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::SelectEnumerator_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::TYPES[7/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(1), NULL), offsetof(SelectEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(SelectEnumerable, _select), 0,
        ::TYPES[7/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(SelectEnumerable, _source), 0);
}

SelectEnumerable_type* SelectEnumerable_typeof()
{
    static uSStrong<SelectEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SelectEnumerable);
    options.TypeSize = sizeof(SelectEnumerable_type);
    type = (SelectEnumerable_type*)uClassType::New("Uno.Collections.SelectEnumerable`2", options);
    type->fp_build_ = SelectEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))SelectEnumerable__GetEnumerator_fn;
    return type;
}

// public SelectEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) :464
void SelectEnumerable__ctor__fn(SelectEnumerable* __this, uObject* source, uDelegate* select)
{
    __this->ctor_(source, select);
}

// public Uno.Collections.IEnumerator<TRet> GetEnumerator() :470
void SelectEnumerable__GetEnumerator_fn(SelectEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public SelectEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) :464
void SelectEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerable** __retval)
{
    *__retval = SelectEnumerable::New1(__type, source, select);
}

// public SelectEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) [instance] :464
void SelectEnumerable::ctor_(uObject* source, uDelegate* select)
{
    _source = source;
    _select = select;
}

// public Uno.Collections.IEnumerator<TRet> GetEnumerator() [instance] :470
uObject* SelectEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.SelectEnumerator<T, TRet>*/),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
    };
    return (uObject*)((::g::Uno::Collections::SelectEnumerator*)::g::Uno::Collections::SelectEnumerator::New1(__types[0], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), __types[1])), _select));
}

// public SelectEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) [static] :464
SelectEnumerable* SelectEnumerable::New1(uType* __type, uObject* source, uDelegate* select)
{
    SelectEnumerable* obj1 = (SelectEnumerable*)uNew(__type);
    obj1->ctor_(source, select);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno
// --------------------------------------------------------------------

// internal sealed class SelectEnumerator<T, TRet> :476
// {
static void SelectEnumerator_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[9/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(1), NULL), offsetof(SelectEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SelectEnumerator_type, interface1),
        ::TYPES[8/*Uno.Collections.IEnumerator*/], offsetof(SelectEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(SelectEnumerator, _select), 0,
        ::TYPES[9/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(SelectEnumerator, _source), 0);
}

SelectEnumerator_type* SelectEnumerator_typeof()
{
    static uSStrong<SelectEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(SelectEnumerator);
    options.TypeSize = sizeof(SelectEnumerator_type);
    type = (SelectEnumerator_type*)uClassType::New("Uno.Collections.SelectEnumerator`2", options);
    type->fp_build_ = SelectEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))SelectEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SelectEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))SelectEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))SelectEnumerator__MoveNext_fn;
    return type;
}

// public SelectEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) :481
void SelectEnumerator__ctor__fn(SelectEnumerator* __this, uObject* source, uDelegate* select)
{
    __this->ctor_(source, select);
}

// public TRet get_Current() :489
void SelectEnumerator__get_Current_fn(SelectEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
    };
    uT ret2(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    return __retval.Store((uPtr(__this->_select)->Invoke(&ret2, 1, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(__this->_source), __types[0]), &ret3), (void*)ret3)), ret2)), void();
}

// public void Dispose() :492
void SelectEnumerator__Dispose_fn(SelectEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :502
void SelectEnumerator__MoveNext_fn(SelectEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public SelectEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) :481
void SelectEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerator** __retval)
{
    *__retval = SelectEnumerator::New1(__type, source, select);
}

// public void Reset() :497
void SelectEnumerator__Reset_fn(SelectEnumerator* __this)
{
    __this->Reset();
}

// public SelectEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) [instance] :481
void SelectEnumerator::ctor_(uObject* source, uDelegate* select)
{
    _source = source;
    _select = select;
}

// public void Dispose() [instance] :492
void SelectEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :502
bool SelectEnumerator::MoveNext()
{
    return ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::TYPES[8/*Uno.Collections.IEnumerator*/]));
}

// public void Reset() [instance] :497
void SelectEnumerator::Reset()
{
    ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(_source), ::TYPES[8/*Uno.Collections.IEnumerator*/]));
}

// public SelectEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) [static] :481
SelectEnumerator* SelectEnumerator::New1(uType* __type, uObject* source, uDelegate* select)
{
    SelectEnumerator* obj1 = (SelectEnumerator*)uNew(__type);
    obj1->ctor_(source, select);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/Dictionary.uno
// ---------------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue>.ValueCollection :168
// {
static void Dictionary__ValueCollection_build(uType* type)
{
    type->SetPrecalc(
        Dictionary__ValueCollection__Enumerator_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(1), NULL), offsetof(Dictionary__ValueCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(1), NULL), offsetof(Dictionary__ValueCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(Dictionary__ValueCollection, _source), 0);
}

Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof()
{
    static uSStrong<Dictionary__ValueCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Dictionary__ValueCollection);
    options.TypeSize = sizeof(Dictionary__ValueCollection_type);
    type = (Dictionary__ValueCollection_type*)uClassType::New("Uno.Collections.Dictionary`2.ValueCollection", options);
    type->fp_build_ = Dictionary__ValueCollection_build;
    type->interface0.fp_Clear = (void(*)(uObject*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueClear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueAdd_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueRemove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueContains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))Dictionary__ValueCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__ValueCollection__GetEnumerator_boxed_fn;
    return type;
}

// internal ValueCollection(Uno.Collections.Dictionary<TKey, TValue> source) :224
void Dictionary__ValueCollection__ctor__fn(Dictionary__ValueCollection* __this, ::g::Uno::Collections::Dictionary* source)
{
    __this->ctor_(source);
}

// public int get_Count() :256
void Dictionary__ValueCollection__get_Count_fn(Dictionary__ValueCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() :229
void Dictionary__ValueCollection__GetEnumerator_fn(Dictionary__ValueCollection* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Dictionary__ValueCollection__Enumerator__New1_fn(__types[0], __this->_source, &ret2), ret2)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() :229
void Dictionary__ValueCollection__GetEnumerator_boxed_fn(Dictionary__ValueCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// internal ValueCollection New(Uno.Collections.Dictionary<TKey, TValue> source) :224
void Dictionary__ValueCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__ValueCollection** __retval)
{
    *__retval = Dictionary__ValueCollection::New1(__type, source);
}

// private void Uno.Collections.ICollection<TValue>.Add(TValue item) :239
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueAdd_fn(Dictionary__ValueCollection* __this, void* item)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private void Uno.Collections.ICollection<TValue>.Clear() :234
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueClear_fn(Dictionary__ValueCollection* __this)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TValue>.Contains(TValue item) :249
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueContains_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TValue>.Remove(TValue item) :244
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueRemove_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval)
{
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// internal ValueCollection(Uno.Collections.Dictionary<TKey, TValue> source) [instance] :224
void Dictionary__ValueCollection::ctor_(::g::Uno::Collections::Dictionary* source)
{
    _source = source;
}

// public int get_Count() [instance] :256
int Dictionary__ValueCollection::Count()
{
    return uPtr(_source)->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() [instance] :229
uObject* Dictionary__ValueCollection::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Dictionary__ValueCollection__GetEnumerator_fn(this, &ret3), ret3));
}

// internal ValueCollection New(Uno.Collections.Dictionary<TKey, TValue> source) [static] :224
Dictionary__ValueCollection* Dictionary__ValueCollection::New1(uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    Dictionary__ValueCollection* obj1 = (Dictionary__ValueCollection*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

}}} // ::g::Uno::Collections
