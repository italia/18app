// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/MiniList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.Internal.ObjectList-1.Enumerator.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct MiniList__Enumerator;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public struct MiniList<T>.Enumerator :189
// {
struct MiniList__Enumerator_type : uStructType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

MiniList__Enumerator_type* MiniList__Enumerator_typeof();
void MiniList__Enumerator__ctor__fn(MiniList__Enumerator* __this, uType* __type, ::g::Fuse::Internal::MiniList* source, bool* versionLock);
void MiniList__Enumerator__get_Current_fn(MiniList__Enumerator* __this, uType* __type, uObject** __retval);
void MiniList__Enumerator__Dispose_fn(MiniList__Enumerator* __this, uType* __type);
void MiniList__Enumerator__MoveNext_fn(MiniList__Enumerator* __this, uType* __type, bool* __retval);
void MiniList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Internal::MiniList* source, bool* versionLock, MiniList__Enumerator* __retval);
void MiniList__Enumerator__Reset_fn(MiniList__Enumerator* __this, uType* __type);

struct MiniList__Enumerator
{
    ::g::Fuse::Internal::ObjectList__Enumerator _iter;
    ::g::Fuse::Internal::MiniList _source;
    bool _first;
    uStrong<uObject*> _value;
    int _mode;

    void ctor_(uType* __type, ::g::Fuse::Internal::MiniList source, bool versionLock);
    uObject* Current(uType* __type);
    void Dispose(uType* __type);
    bool MoveNext(uType* __type);
    void Reset(uType* __type);
};

MiniList__Enumerator MiniList__Enumerator__New1(uType* __type, ::g::Fuse::Internal::MiniList source, bool versionLock);
// }

}}} // ::g::Fuse::Internal
