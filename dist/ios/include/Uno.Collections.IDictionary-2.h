// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/IDictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// public abstract interface IDictionary<TKey, TValue> :6
// {
uInterfaceType* IDictionary_typeof();

struct IDictionary
{
    void(*fp_TryGetValue)(uObject*, void*, uTRef, bool*);
    template<class TKey, class TValue>
    static bool TryGetValue(const uInterface& __this, TKey key, TValue* value) { bool __retval; return __this.VTable<IDictionary>()->fp_TryGetValue(__this, uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(0), key), uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(1), value), &__retval), __retval; }
    static void TryGetValue_ex(const uInterface& __this, void* key, uTRef value, bool* __retval) { __this.VTable<IDictionary>()->fp_TryGetValue(__this, key, value, __retval); }
};
// }

}}} // ::g::Uno::Collections
