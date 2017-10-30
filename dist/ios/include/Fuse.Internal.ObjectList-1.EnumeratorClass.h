// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Internal/ObjectList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.ObjectList-1.Enumerator.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}
namespace g{namespace Fuse{namespace Internal{struct ObjectList__EnumeratorClass;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public sealed class ObjectList<T>.EnumeratorClass :351
// {
struct ObjectList__EnumeratorClass_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

ObjectList__EnumeratorClass_type* ObjectList__EnumeratorClass_typeof();
void ObjectList__EnumeratorClass__ctor__fn(ObjectList__EnumeratorClass* __this, ::g::Fuse::Internal::ObjectList* source);
void ObjectList__EnumeratorClass__get_Current_fn(ObjectList__EnumeratorClass* __this, uObject** __retval);
void ObjectList__EnumeratorClass__Dispose_fn(ObjectList__EnumeratorClass* __this);
void ObjectList__EnumeratorClass__MoveNext_fn(ObjectList__EnumeratorClass* __this, bool* __retval);
void ObjectList__EnumeratorClass__New1_fn(uType* __type, ::g::Fuse::Internal::ObjectList* source, ObjectList__EnumeratorClass** __retval);
void ObjectList__EnumeratorClass__Reset_fn(ObjectList__EnumeratorClass* __this);

struct ObjectList__EnumeratorClass : uObject
{
    ::g::Fuse::Internal::ObjectList__Enumerator _en;

    void ctor_(::g::Fuse::Internal::ObjectList* source);
    uObject* Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static ObjectList__EnumeratorClass* New1(uType* __type, ::g::Fuse::Internal::ObjectList* source);
};
// }

}}} // ::g::Fuse::Internal
