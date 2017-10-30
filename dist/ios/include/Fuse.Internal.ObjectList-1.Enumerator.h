// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/ObjectList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}
namespace g{namespace Fuse{namespace Internal{struct ObjectList__Enumerator;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public struct ObjectList<T>.Enumerator :386
// {
struct ObjectList__Enumerator_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

ObjectList__Enumerator_type* ObjectList__Enumerator_typeof();
void ObjectList__Enumerator__ctor__fn(ObjectList__Enumerator* __this, uType* __type, ::g::Fuse::Internal::ObjectList* source, bool* versionLock);
void ObjectList__Enumerator__get_Current_fn(ObjectList__Enumerator* __this, uType* __type, uObject** __retval);
void ObjectList__Enumerator__Dispose_fn(ObjectList__Enumerator* __this, uType* __type);
void ObjectList__Enumerator__get_Done_fn(ObjectList__Enumerator* __this, uType* __type, bool* __retval);
void ObjectList__Enumerator__MoveNext_fn(ObjectList__Enumerator* __this, uType* __type, bool* __retval);
void ObjectList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Internal::ObjectList* source, bool* versionLock, ObjectList__Enumerator* __retval);
void ObjectList__Enumerator__Next_fn(ObjectList__Enumerator* __this, uType* __type);
void ObjectList__Enumerator__Reset_fn(ObjectList__Enumerator* __this, uType* __type);
void ObjectList__Enumerator__SkipNew_fn(ObjectList__Enumerator* __this, uType* __type);
void ObjectList__Enumerator__Unlock_fn(ObjectList__Enumerator* __this, uType* __type);

struct ObjectList__Enumerator
{
    uStrong< ::g::Fuse::Internal::ObjectList*> _source;
    bool _first;
    int _at;
    int8_t _locked;

    void ctor_(uType* __type, ::g::Fuse::Internal::ObjectList* source, bool versionLock);
    uObject* Current(uType* __type);
    void Dispose(uType* __type);
    bool Done(uType* __type);
    bool MoveNext(uType* __type);
    void Next(uType* __type);
    void Reset(uType* __type);
    void SkipNew(uType* __type);
    void Unlock(uType* __type);
};

ObjectList__Enumerator ObjectList__Enumerator__New1(uType* __type, ::g::Fuse::Internal::ObjectList* source, bool versionLock);
// }

}}} // ::g::Fuse::Internal
