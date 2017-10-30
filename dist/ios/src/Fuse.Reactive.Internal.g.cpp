// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Reactive.Internal.PatchAlgorithm.h>
#include <Fuse.Reactive.Internal.PatchItem.h>
#include <Fuse.Reactive.Internal.PatchList.h>
#include <Fuse.Reactive.Internal.PatchOp.h>
#include <Fuse.Reactive.Internal.SimpleAlgorithm-1.h>
#include <Fuse.Reactive.Internal.SimpleAlgorithm-1.Location.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Reactive{
namespace Internal{

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Internal/PatchList.uno
// ---------------------------------------------------------------------------------

// private struct SimpleAlgorithm<T>.Location :121
// {
static void SimpleAlgorithm__Location_build(uType* type)
{
    ::STRINGS[0] = uString::Const(",");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(SimpleAlgorithm__Location, From), 0,
        ::g::Uno::Int_typeof(), offsetof(SimpleAlgorithm__Location, To), 0);
}

uStructType* SimpleAlgorithm__Location_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.Alignment = alignof(SimpleAlgorithm__Location);
    options.ValueSize = sizeof(SimpleAlgorithm__Location);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Reactive.Internal.SimpleAlgorithm`1.Location", options);
    type->fp_build_ = SimpleAlgorithm__Location_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SimpleAlgorithm__Location__ToString_fn;
    return type;
}

// public override sealed string ToString() :125
void SimpleAlgorithm__Location__ToString_fn(SimpleAlgorithm__Location* __this, uType* __type, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::g::Uno::Int_typeof(), __this->From), ::STRINGS[0/*","*/]), uBox<int>(::g::Uno::Int_typeof(), __this->To)), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Internal/PatchList.uno
// ---------------------------------------------------------------------------------

// internal enum PatchAlgorithm :23
uEnumType* PatchAlgorithm_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.Internal.PatchAlgorithm", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "RemoveAll", 0LL,
        "Simple", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Internal/PatchList.uno
// ---------------------------------------------------------------------------------

// internal struct PatchItem :16
// {
static void PatchItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Reactive::Internal::PatchOp_typeof(), offsetof(PatchItem, Op), 0,
        ::g::Uno::Int_typeof(), offsetof(PatchItem, A), 0,
        ::g::Uno::Int_typeof(), offsetof(PatchItem, Data), 0);
}

uStructType* PatchItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.Alignment = alignof(PatchItem);
    options.ValueSize = sizeof(PatchItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Reactive.Internal.PatchItem", options);
    type->fp_build_ = PatchItem_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Internal/PatchList.uno
// ---------------------------------------------------------------------------------

// internal sealed class PatchList :38
// {
static void PatchList_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::Internal::SimpleAlgorithm_typeof();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Internal::PatchItem_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof();
    type->MethodTypes[0]->SetPrecalc(
        type->MakeMethod(1/*PatchRemoveAll<T>*/, type->MethodTypes[0]->U(0), NULL),
        ::TYPES[0/*Fuse.Reactive.Internal.SimpleAlgorithm`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
}

uType* PatchList_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.ObjectSize = sizeof(PatchList);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Internal.PatchList", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->fp_build_ = PatchList_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> Patch<T>(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to, Fuse.Reactive.Internal.PatchAlgorithm algo, T emptyKey) :40
void PatchList__Patch_fn(uType* __type, uObject* from, uObject* to, int* algo, void* emptyKey, ::g::Uno::Collections::List** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Reactive.Internal.PatchList.PatchRemoveAll<T>*/),
        __type->Precalced(1/*Fuse.Reactive.Internal.SimpleAlgorithm<T>*/),
    };
    int algo_ = *algo;
    ::g::Fuse::Reactive::Internal::SimpleAlgorithm* ret3;

    switch (algo_)
    {
        case 0:
            return *__retval = PatchList::PatchRemoveAll(__types[0], from, to), void();
        case 1:
            return *__retval = (::g::Fuse::Reactive::Internal::SimpleAlgorithm__New1_fn(__types[1], from, to, emptyKey, &ret3), ret3)->Calc(), void();
    }

    return *__retval = NULL, void();
}

// private static Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> PatchRemoveAll<T>(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to) :57
void PatchList__PatchRemoveAll_fn(uType* __type, uObject* from, uObject* to, ::g::Uno::Collections::List** __retval)
{
    *__retval = PatchList::PatchRemoveAll(__type, from, to);
}

// private static Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> PatchRemoveAll<T>(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to) [static] :57
::g::Uno::Collections::List* PatchList::PatchRemoveAll(uType* __type, uObject* from, uObject* to)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    ::g::Fuse::Reactive::Internal::PatchItem collection1;
    ::g::Fuse::Reactive::Internal::PatchItem collection2;
    ::g::Uno::Collections::List* ops = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Reactive.Internal.PatchItem>*/]);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(from), __types[0])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(ops), uCRef((collection1 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection1.Op = 0, collection1.A = 0, collection1)));

    for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(to), __types[0])); ++i1)
        ::g::Uno::Collections::List__Add_fn(uPtr(ops), uCRef((collection2 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection2.Op = 1, collection2.A = i1, collection2.Data = i1, collection2)));

    return ops;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Internal/PatchList.uno
// ---------------------------------------------------------------------------------

// internal enum PatchOp :6
uEnumType* PatchOp_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.Internal.PatchOp", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Remove", 0LL,
        "Insert", 1LL,
        "Update", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Internal/PatchList.uno
// ---------------------------------------------------------------------------------

// internal sealed class SimpleAlgorithm<T> :98
// {
static void SimpleAlgorithm_build(uType* type)
{
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(SimpleAlgorithm, _from), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Internal::PatchItem_typeof(), NULL), offsetof(SimpleAlgorithm, _ops), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(SimpleAlgorithm, _to), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL), offsetof(SimpleAlgorithm, _toIndex), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SimpleAlgorithm, _toUsed), 0);
}

uType* SimpleAlgorithm_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(SimpleAlgorithm);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Internal.SimpleAlgorithm`1", options);
    type->fp_build_ = SimpleAlgorithm_build;
    return type;
}

// public SimpleAlgorithm(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to, T emptyKey) :106
void SimpleAlgorithm__ctor__fn(SimpleAlgorithm* __this, uObject* from, uObject* to, void* emptyKey)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.ICollection<T>*/),
    };
    __this->_emptyKey() = emptyKey;
    __this->_from = from;
    __this->_to = to;
    __this->_toIndex = __this->Index(to);
    __this->_toUsed = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(to), __types[0]))));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(to, __types[0])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_toUsed), uCRef(false));

    __this->_ops = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Reactive.Internal.PatchItem>*/]));
}

// private void AppendRemainingTo(int oPos) :185
void SimpleAlgorithm__AppendRemainingTo_fn(SimpleAlgorithm* __this, int* oPos)
{
    __this->AppendRemainingTo(*oPos);
}

// public Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> Calc() :141
void SimpleAlgorithm__Calc_fn(SimpleAlgorithm* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Calc();
}

// private Fuse.Reactive.Internal.SimpleAlgorithm<T>.Location FindNextAnchor(int fromAt) :199
void SimpleAlgorithm__FindNextAnchor_fn(SimpleAlgorithm* __this, int* fromAt, SimpleAlgorithm__Location* __retval)
{
    *__retval = __this->FindNextAnchor(*fromAt);
}

// private Uno.Collections.Dictionary<T, int> Index(Uno.Collections.IList<T> to) :130
void SimpleAlgorithm__Index_fn(SimpleAlgorithm* __this, uObject* to, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Index(to);
}

// public SimpleAlgorithm New(Uno.Collections.IList<T> from, Uno.Collections.IList<T> to, T emptyKey) :106
void SimpleAlgorithm__New1_fn(uType* __type, uObject* from, uObject* to, void* emptyKey, SimpleAlgorithm** __retval)
{
    SimpleAlgorithm* obj1 = (SimpleAlgorithm*)uNew(__type);
    SimpleAlgorithm__ctor__fn(obj1, from, to, emptyKey);
    return *__retval = obj1, void();
}

// private void AppendRemainingTo(int oPos) [instance] :185
void SimpleAlgorithm::AppendRemainingTo(int oPos)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.ICollection<T>*/),
    };
    ::g::Fuse::Reactive::Internal::PatchItem collection5;
    bool ret2;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_to), __types[0])); ++i)
    {
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_toUsed), uCRef<int>(i), &ret2), ret2))
            continue;

        ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection5 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection5.Op = 1, collection5.A = oPos, collection5.Data = i, collection5)));
        ::g::Uno::Collections::List__set_Item_fn(uPtr(_toUsed), uCRef<int>(i), uCRef(true));
        oPos++;
    }
}

// public Uno.Collections.List<Fuse.Reactive.Internal.PatchItem> Calc() [instance] :141
::g::Uno::Collections::List* SimpleAlgorithm::Calc()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.ICollection<T>*/),
    };
    ::g::Fuse::Reactive::Internal::PatchItem collection1;
    ::g::Fuse::Reactive::Internal::PatchItem collection2;
    ::g::Fuse::Reactive::Internal::PatchItem collection3;
    ::g::Fuse::Reactive::Internal::PatchItem collection4;
    bool ret3;
    int fromAt = 0;
    int oPos = 0;

    while (fromAt < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_from), __types[0])))
    {
        SimpleAlgorithm__Location anchor = FindNextAnchor(fromAt);

        if (anchor.From == -1)
        {
            while (fromAt < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_from), __types[0])))
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection1 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection1.Op = 0, collection1.A = (fromAt + oPos), collection1)));
                fromAt++;
                oPos--;
            }

            break;
        }

        int rem = fromAt + oPos;

        for (int i = 0; i < anchor.To; ++i)
        {
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_toUsed), uCRef<int>(i), &ret3), ret3))
                continue;

            ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection2 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection2.Op = 1, collection2.A = (oPos + anchor.From), collection2.Data = i, collection2)));
            oPos++;
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_toUsed), uCRef<int>(i), uCRef(true));
        }

        while (fromAt < anchor.From)
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection3 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection3.Op = 0, collection3.A = rem, collection3)));
            oPos--;
            fromAt++;
        }

        ::g::Uno::Collections::List__Add_fn(uPtr(_ops), uCRef((collection4 = uDefault< ::g::Fuse::Reactive::Internal::PatchItem>(), collection4.Op = 2, collection4.A = (fromAt + oPos), collection4.Data = anchor.To, collection4)));
        ::g::Uno::Collections::List__set_Item_fn(uPtr(_toUsed), uCRef<int>(anchor.To), uCRef(true));
        fromAt++;
    }

    AppendRemainingTo(fromAt + oPos);
    return _ops;
}

// private Fuse.Reactive.Internal.SimpleAlgorithm<T>.Location FindNextAnchor(int fromAt) [instance] :199
SimpleAlgorithm__Location SimpleAlgorithm::FindNextAnchor(int fromAt)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uT ret4(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT ret6(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    SimpleAlgorithm__Location collection6;
    SimpleAlgorithm__Location collection7;
    bool ret5;
    bool ret7;

    while (fromAt < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_from), __types[0])))
    {
        int faLoc = -1;

        if ((::g::Uno::Object::Equals1(uBoxPtr(__type->T(0), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_from), __types[1]), uCRef<int>(fromAt), &ret4), ret4)), uBoxPtr(__type->T(0), _emptyKey())) || !(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_toIndex), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_from), __types[1]), uCRef<int>(fromAt), &ret6), ret6), &faLoc, &ret5), ret5)) || (::g::Uno::Collections::List__get_Item_fn(uPtr(_toUsed), uCRef<int>(faLoc), &ret7), ret7))
        {
            fromAt++;
            continue;
        }

        collection6 = uDefault<SimpleAlgorithm__Location>();
        collection6.From = fromAt;
        collection6.To = faLoc;
        return collection6;
    }

    collection7 = uDefault<SimpleAlgorithm__Location>();
    collection7.From = -1;
    collection7.To = -1;
    return collection7;
}

// private Uno.Collections.Dictionary<T, int> Index(Uno.Collections.IList<T> to) [instance] :130
::g::Uno::Collections::Dictionary* SimpleAlgorithm::Index(uObject* to)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, int>*/),
        __type->Precalced(1/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uT ret8(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT ret9(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(to), __types[1])); ++i)
        if (!::g::Uno::Object::Equals1(uBoxPtr(__type->T(0), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(to), __types[2]), uCRef<int>(i), &ret8), ret8)), uBoxPtr(__type->T(0), _emptyKey())))
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(to), __types[2]), uCRef<int>(i), &ret9), ret9), uCRef<int>(i));

    return d;
}
// }

}}}} // ::g::Fuse::Reactive::Internal
