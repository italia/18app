// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Collections/ICollection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// public abstract interface ICollection<T> :6
// {
uInterfaceType* ICollection_typeof();

struct ICollection
{
    void(*fp_Add)(uObject*, void*);
    void(*fp_Clear)(uObject*);
    void(*fp_Contains)(uObject*, void*, bool*);
    void(*fp_get_Count)(uObject*, int*);
    void(*fp_Remove)(uObject*, void*, bool*);
    template<class T>
    static void Add(const uInterface& __this, T item) { __this.VTable<ICollection>()->fp_Add(__this, uConstrain(__this->__type->GetBase(ICollection_typeof())->T(0), item)); }
    static void Add_ex(const uInterface& __this, void* item) { __this.VTable<ICollection>()->fp_Add(__this, item); }
    static void Clear(const uInterface& __this) { __this.VTable<ICollection>()->fp_Clear(__this); }
    template<class T>
    static bool Contains(const uInterface& __this, T item) { bool __retval; return __this.VTable<ICollection>()->fp_Contains(__this, uConstrain(__this->__type->GetBase(ICollection_typeof())->T(0), item), &__retval), __retval; }
    static void Contains_ex(const uInterface& __this, void* item, bool* __retval) { __this.VTable<ICollection>()->fp_Contains(__this, item, __retval); }
    static int Count(const uInterface& __this) { int __retval; return __this.VTable<ICollection>()->fp_get_Count(__this, &__retval), __retval; }
    template<class T>
    static bool Remove(const uInterface& __this, T item) { bool __retval; return __this.VTable<ICollection>()->fp_Remove(__this, uConstrain(__this->__type->GetBase(ICollection_typeof())->T(0), item), &__retval), __retval; }
    static void Remove_ex(const uInterface& __this, void* item, bool* __retval) { __this.VTable<ICollection>()->fp_Remove(__this, item, __retval); }
};
// }

}}} // ::g::Uno::Collections
