// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_TextInputPrice_Value_Property.h>
#include <_root.TextInputPrice.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class app18_TextInputPrice_Value_Property :605
// {
static void app18_TextInputPrice_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::TextInputPrice_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*TextInputPrice*/], offsetof(app18_TextInputPrice_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* app18_TextInputPrice_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_TextInputPrice_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("app18_TextInputPrice_Value_Property", options);
    type->fp_build_ = app18_TextInputPrice_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))app18_TextInputPrice_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))app18_TextInputPrice_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))app18_TextInputPrice_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))app18_TextInputPrice_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public app18_TextInputPrice_Value_Property(TextInputPrice obj, Uno.UX.Selector name) :608
void app18_TextInputPrice_Value_Property__ctor_3_fn(app18_TextInputPrice_Value_Property* __this, ::g::TextInputPrice* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :610
void app18_TextInputPrice_Value_Property__Get1_fn(app18_TextInputPrice_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::TextInputPrice*>(obj, ::TYPES[0/*TextInputPrice*/]))->Value(), void();
}

// public app18_TextInputPrice_Value_Property New(TextInputPrice obj, Uno.UX.Selector name) :608
void app18_TextInputPrice_Value_Property__New1_fn(::g::TextInputPrice* obj, ::g::Uno::UX::Selector* name, app18_TextInputPrice_Value_Property** __retval)
{
    *__retval = app18_TextInputPrice_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :609
void app18_TextInputPrice_Value_Property__get_Object_fn(app18_TextInputPrice_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :611
void app18_TextInputPrice_Value_Property__Set1_fn(app18_TextInputPrice_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::TextInputPrice*>(obj, ::TYPES[0/*TextInputPrice*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :612
void app18_TextInputPrice_Value_Property__get_SupportsOriginSetter_fn(app18_TextInputPrice_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public app18_TextInputPrice_Value_Property(TextInputPrice obj, Uno.UX.Selector name) [instance] :608
void app18_TextInputPrice_Value_Property::ctor_3(::g::TextInputPrice* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public app18_TextInputPrice_Value_Property New(TextInputPrice obj, Uno.UX.Selector name) [static] :608
app18_TextInputPrice_Value_Property* app18_TextInputPrice_Value_Property::New1(::g::TextInputPrice* obj, ::g::Uno::UX::Selector name)
{
    app18_TextInputPrice_Value_Property* obj1 = (app18_TextInputPrice_Value_Property*)uNew(app18_TextInputPrice_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
