// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/ArrayEnumerable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerator;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public sealed class ArrayEnumerator<T> :5
// {
struct ArrayEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

ArrayEnumerator_type* ArrayEnumerator_typeof();
void ArrayEnumerator__ctor__fn(ArrayEnumerator* __this, uArray* source);
void ArrayEnumerator__get_Current_fn(ArrayEnumerator* __this, uTRef __retval);
void ArrayEnumerator__Dispose_fn(ArrayEnumerator* __this);
void ArrayEnumerator__MoveNext_fn(ArrayEnumerator* __this, bool* __retval);
void ArrayEnumerator__New1_fn(uType* __type, uArray* source, ArrayEnumerator** __retval);
void ArrayEnumerator__Reset_fn(ArrayEnumerator* __this);

struct ArrayEnumerator : uObject
{
    uTField _current() { return __type->Field(this, 0); }
    int _iterator;
    uStrong<uArray*> _source;

    void ctor_(uArray* source);
    template<class T>
    T Current() { T __retval; return ArrayEnumerator__get_Current_fn(this, &__retval), __retval; }
    void Dispose();
    bool MoveNext();
    void Reset();
    static ArrayEnumerator* New1(uType* __type, uArray* source);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
