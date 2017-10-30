// This file was generated based on /usr/local/share/uno/Packages/Uno.Collections/1.0.1/extensions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct OfTypeEnumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class OfTypeEnumerator<T, U> :374
// {
struct OfTypeEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

OfTypeEnumerator_type* OfTypeEnumerator_typeof();
void OfTypeEnumerator__ctor__fn(OfTypeEnumerator* __this, uObject* source);
void OfTypeEnumerator__get_Current_fn(OfTypeEnumerator* __this, uTRef __retval);
void OfTypeEnumerator__Dispose_fn(OfTypeEnumerator* __this);
void OfTypeEnumerator__MoveNext_fn(OfTypeEnumerator* __this, bool* __retval);
void OfTypeEnumerator__New1_fn(uType* __type, uObject* source, OfTypeEnumerator** __retval);
void OfTypeEnumerator__Reset_fn(OfTypeEnumerator* __this);

struct OfTypeEnumerator : uObject
{
    uTField _current() { return __type->Field(this, 0); }
    uStrong<uObject*> _source;

    void ctor_(uObject* source);
    template<class U>
    U Current() { U __retval; return OfTypeEnumerator__get_Current_fn(this, &__retval), __retval; }
    void Dispose();
    bool MoveNext();
    void Reset();
    static OfTypeEnumerator* New1(uType* __type, uObject* source);
};
// }

}}} // ::g::Uno::Collections
