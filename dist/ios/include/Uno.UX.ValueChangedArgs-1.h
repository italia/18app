// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/UX/Property.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Uno{
namespace UX{

// public class ValueChangedArgs<T> :3
// {
uType* ValueChangedArgs_typeof();
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value);
void ValueChangedArgs__New2_fn(uType* __type, void* value, ValueChangedArgs** __retval);
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval);
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value);

struct ValueChangedArgs : ::g::Uno::EventArgs
{
    uTField _Value() { return __type->Field(this, 0); }

    template<class T>
    void ctor_1(T value) { ValueChangedArgs__ctor_1_fn(this, uConstrain(__type->GetBase(ValueChangedArgs_typeof())->T(0), value)); }
    template<class T>
    T Value() { T __retval; return ValueChangedArgs__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { ValueChangedArgs__set_Value_fn(this, uConstrain(__type->GetBase(ValueChangedArgs_typeof())->T(0), value)); }
    template<class T>
    static ValueChangedArgs* New2(uType* __type, T value) { ValueChangedArgs* __retval; return ValueChangedArgs__New2_fn(__type, uConstrain(__type->T(0), value), &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
