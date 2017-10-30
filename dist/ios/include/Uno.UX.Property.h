// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/UX/Property.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Property :24
// {
struct Property_type : ::g::Uno::UX::PropertyAccessor_type
{
    void(*fp_get_Object)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**);
};

Property_type* Property_typeof();
void Property__ctor_1_fn(Property* __this, ::g::Uno::UX::Selector* name);
void Property__AddListener_fn(Property* __this, uObject* listener);
void Property__Equals_fn(Property* __this, uObject* obj, bool* __retval);
void Property__GetAsObject1_fn(Property* __this, uObject** __retval);
void Property__GetHashCode_fn(Property* __this, int* __retval);
void Property__get_Name_fn(Property* __this, ::g::Uno::UX::Selector* __retval);
void Property__RemoveListener_fn(Property* __this, uObject* listener);
void Property__SetAsObject1_fn(Property* __this, uObject* value, uObject* origin);

struct Property : ::g::Uno::UX::PropertyAccessor
{
    ::g::Uno::UX::Selector _name;

    void ctor_1(::g::Uno::UX::Selector name);
    void AddListener(uObject* listener);
    uObject* GetAsObject1();
    ::g::Uno::UX::PropertyObject* Object() { ::g::Uno::UX::PropertyObject* __retval; return (((Property_type*)__type)->fp_get_Object)(this, &__retval), __retval; }
    void RemoveListener(uObject* listener);
    void SetAsObject1(uObject* value, uObject* origin);
};
// }

}}} // ::g::Uno::UX
