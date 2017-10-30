// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/UX/Property.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct PropertyAccessor;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class PropertyAccessor :15
// {
struct PropertyAccessor_type : uType
{
    void(*fp_GetAsObject)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**);
    void(*fp_get_Name)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*);
    void(*fp_get_PropertyType)(::g::Uno::UX::PropertyAccessor*, uType**);
    void(*fp_SetAsObject)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*);
    void(*fp_get_SupportsOriginSetter)(::g::Uno::UX::PropertyAccessor*, bool*);
};

PropertyAccessor_type* PropertyAccessor_typeof();
void PropertyAccessor__ctor__fn(PropertyAccessor* __this);
void PropertyAccessor__GetAsObject_fn(PropertyAccessor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void PropertyAccessor__SetAsObject_fn(PropertyAccessor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* value, uObject* origin);
void PropertyAccessor__get_SupportsOriginSetter_fn(PropertyAccessor* __this, bool* __retval);

struct PropertyAccessor : uObject
{
    void ctor_();
    uObject* GetAsObject(::g::Uno::UX::PropertyObject* obj) { uObject* __retval; return (((PropertyAccessor_type*)__type)->fp_GetAsObject)(this, obj, &__retval), __retval; }
    ::g::Uno::UX::Selector Name();
    uType* PropertyType() { uType* __retval; return (((PropertyAccessor_type*)__type)->fp_get_PropertyType)(this, &__retval), __retval; }
    void SetAsObject(::g::Uno::UX::PropertyObject* obj, uObject* value, uObject* origin) { (((PropertyAccessor_type*)__type)->fp_SetAsObject)(this, obj, value, origin); }
    bool SupportsOriginSetter() { bool __retval; return (((PropertyAccessor_type*)__type)->fp_get_SupportsOriginSetter)(this, &__retval), __retval; }
    static uObject* GetAsObject(PropertyAccessor* __this, ::g::Uno::UX::PropertyObject* obj) { uObject* __retval; return PropertyAccessor__GetAsObject_fn(__this, obj, &__retval), __retval; }
    static void SetAsObject(PropertyAccessor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* value, uObject* origin) { PropertyAccessor__SetAsObject_fn(__this, obj, value, origin); }
    static bool SupportsOriginSetter(PropertyAccessor* __this) { bool __retval; return PropertyAccessor__get_SupportsOriginSetter_fn(__this, &__retval), __retval; }
};

}}} // ::g::Uno::UX

#include <Uno.UX.Selector.h>

namespace g{
namespace Uno{
namespace UX{

inline ::g::Uno::UX::Selector PropertyAccessor::Name() { ::g::Uno::UX::Selector __retval; return (((PropertyAccessor_type*)__type)->fp_get_Name)(this, &__retval), __retval; }
// }

}}} // ::g::Uno::UX
