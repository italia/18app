// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Internal/PatchList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Internal.PatchItem.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace Internal{struct SimpleAlgorithm;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace Internal{struct SimpleAlgorithm__Location;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace Internal{

// internal sealed class SimpleAlgorithm<T> :98
// {
uType* SimpleAlgorithm_typeof();
void SimpleAlgorithm__ctor__fn(SimpleAlgorithm* __this, uObject* from, uObject* to, void* emptyKey);
void SimpleAlgorithm__AppendRemainingTo_fn(SimpleAlgorithm* __this, int* oPos);
void SimpleAlgorithm__Calc_fn(SimpleAlgorithm* __this, ::g::Uno::Collections::List** __retval);
void SimpleAlgorithm__FindNextAnchor_fn(SimpleAlgorithm* __this, int* fromAt, SimpleAlgorithm__Location* __retval);
void SimpleAlgorithm__Index_fn(SimpleAlgorithm* __this, uObject* to, ::g::Uno::Collections::Dictionary** __retval);
void SimpleAlgorithm__New1_fn(uType* __type, uObject* from, uObject* to, void* emptyKey, SimpleAlgorithm** __retval);

struct SimpleAlgorithm : uObject
{
    uTField _emptyKey() { return __type->Field(this, 0); }
    uStrong<uObject*> _from;
    uStrong< ::g::Uno::Collections::List*> _ops;
    uStrong<uObject*> _to;
    uStrong< ::g::Uno::Collections::Dictionary*> _toIndex;
    uStrong< ::g::Uno::Collections::List*> _toUsed;

    template<class T>
    void ctor_(uObject* from, uObject* to, T emptyKey) { SimpleAlgorithm__ctor__fn(this, from, to, uConstrain(__type->T(0), emptyKey)); }
    void AppendRemainingTo(int oPos);
    ::g::Uno::Collections::List* Calc();
    SimpleAlgorithm__Location FindNextAnchor(int fromAt);
    ::g::Uno::Collections::Dictionary* Index(uObject* to);
    template<class T>
    static SimpleAlgorithm* New1(uType* __type, uObject* from, uObject* to, T emptyKey) { SimpleAlgorithm* __retval; return SimpleAlgorithm__New1_fn(__type, from, to, uConstrain(__type->T(0), emptyKey), &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Reactive::Internal
