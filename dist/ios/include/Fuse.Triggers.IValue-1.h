// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/IValue.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IValue<T> :5
// {
uInterfaceType* IValue_typeof();

struct IValue
{
    void(*fp_get_Value)(uObject*, uTRef);
    void(*fp_set_Value)(uObject*, void*);
    void(*fp_add_ValueChanged)(uObject*, uDelegate*);
    void(*fp_remove_ValueChanged)(uObject*, uDelegate*);
    template<class T>
    static T Value(const uInterface& __this) { T __retval; return __this.VTable<IValue>()->fp_get_Value(__this, &__retval), __retval; }
    static void get_Value_ex(const uInterface& __this, uTRef __retval) { __this.VTable<IValue>()->fp_get_Value(__this, __retval); }
    template<class T>
    static void Value(const uInterface& __this, T value) { __this.VTable<IValue>()->fp_set_Value(__this, uConstrain(__this->__type->GetBase(IValue_typeof())->T(0), value)); }
    static void set_Value_ex(const uInterface& __this, void* value) { __this.VTable<IValue>()->fp_set_Value(__this, value); }
    static void add_ValueChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IValue>()->fp_add_ValueChanged(__this, value); }
    static void remove_ValueChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IValue>()->fp_remove_ValueChanged(__this, value); }
};
// }

}}} // ::g::Fuse::Triggers
