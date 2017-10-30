// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/UX/Property.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Property<T> :66
// {
struct Property1_type : ::g::Uno::UX::Property_type
{
    void(*fp_Get1)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef);
    void(*fp_Set1)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*);
};

Property1_type* Property1_typeof();
void Property1__ctor_2_fn(Property1* __this, ::g::Uno::UX::Selector* name);
void Property1__Get_fn(Property1* __this, uTRef __retval);
void Property1__Get1_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uTRef __retval);
void Property1__GetAsObject_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void Property1__get_PropertyType_fn(Property1* __this, uType** __retval);
void Property1__Set_fn(Property1* __this, void* value, uObject* origin);
void Property1__Set1_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, void* value, uObject* origin);
void Property1__SetAsObject_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uObject* value, uObject* origin);

struct Property1 : ::g::Uno::UX::Property
{
    void ctor_2(::g::Uno::UX::Selector name);
    template<class T>
    T Get() { T __retval; return Property1__Get_fn(this, &__retval), __retval; }
    template<class T>
    T Get1(::g::Uno::UX::PropertyObject* obj) { T __retval; return (((Property1_type*)__type)->fp_Get1)(this, obj, &__retval), __retval; }
    void Get1_ex(::g::Uno::UX::PropertyObject* obj, uTRef __retval) { (((Property1_type*)__type)->fp_Get1)(this, obj, __retval); }
    template<class T>
    void Set(T value, uObject* origin) { Property1__Set_fn(this, uConstrain(__type->GetBase(Property1_typeof())->T(0), value), origin); }
    template<class T>
    void Set1(::g::Uno::UX::PropertyObject* obj, T value, uObject* origin) { (((Property1_type*)__type)->fp_Set1)(this, obj, uConstrain(__type->GetBase(Property1_typeof())->T(0), value), origin); }
    void Set1_ex(::g::Uno::UX::PropertyObject* obj, void* value, uObject* origin) { (((Property1_type*)__type)->fp_Set1)(this, obj, value, origin); }
    template<class T>
    static T Get1(Property1* __this, ::g::Uno::UX::PropertyObject* obj) { T __retval; return Property1__Get1_fn(__this, obj, &__retval), __retval; }
    template<class T>
    static void Set1(Property1* __this, ::g::Uno::UX::PropertyObject* obj, T value, uObject* origin) { Property1__Set1_fn(__this, obj, uConstrain(__this->__type->GetBase(Property1_typeof())->T(0), value), origin); }
};
// }

}}} // ::g::Uno::UX
