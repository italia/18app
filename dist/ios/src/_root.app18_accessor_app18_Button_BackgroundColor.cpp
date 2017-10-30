// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_app18_Button_BackgroundColor.h>
#include <app18.Button.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class app18_accessor_app18_Button_BackgroundColor :51
// {
// static generated app18_accessor_app18_Button_BackgroundColor() :51
static void app18_accessor_app18_Button_BackgroundColor__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    app18_accessor_app18_Button_BackgroundColor::Singleton_ = app18_accessor_app18_Button_BackgroundColor::New1();
    app18_accessor_app18_Button_BackgroundColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"BackgroundC...*/]);
}

static void app18_accessor_app18_Button_BackgroundColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("BackgroundColor");
    ::TYPES[0] = ::g::app18::Button_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&app18_accessor_app18_Button_BackgroundColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&app18_accessor_app18_Button_BackgroundColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* app18_accessor_app18_Button_BackgroundColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_accessor_app18_Button_BackgroundColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("app18_accessor_app18_Button_BackgroundColor", options);
    type->fp_build_ = app18_accessor_app18_Button_BackgroundColor_build;
    type->fp_ctor_ = (void*)app18_accessor_app18_Button_BackgroundColor__New1_fn;
    type->fp_cctor_ = app18_accessor_app18_Button_BackgroundColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))app18_accessor_app18_Button_BackgroundColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))app18_accessor_app18_Button_BackgroundColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))app18_accessor_app18_Button_BackgroundColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))app18_accessor_app18_Button_BackgroundColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))app18_accessor_app18_Button_BackgroundColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated app18_accessor_app18_Button_BackgroundColor() :51
void app18_accessor_app18_Button_BackgroundColor__ctor_1_fn(app18_accessor_app18_Button_BackgroundColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :57
void app18_accessor_app18_Button_BackgroundColor__GetAsObject_fn(app18_accessor_app18_Button_BackgroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::app18::Button*>(obj, ::TYPES[0/*app18.Button*/]))->BackgroundColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :54
void app18_accessor_app18_Button_BackgroundColor__get_Name_fn(app18_accessor_app18_Button_BackgroundColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = app18_accessor_app18_Button_BackgroundColor::_name_, void();
}

// public generated app18_accessor_app18_Button_BackgroundColor New() :51
void app18_accessor_app18_Button_BackgroundColor__New1_fn(app18_accessor_app18_Button_BackgroundColor** __retval)
{
    *__retval = app18_accessor_app18_Button_BackgroundColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :56
void app18_accessor_app18_Button_BackgroundColor__get_PropertyType_fn(app18_accessor_app18_Button_BackgroundColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :58
void app18_accessor_app18_Button_BackgroundColor__SetAsObject_fn(app18_accessor_app18_Button_BackgroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::app18::Button*>(obj, ::TYPES[0/*app18.Button*/]))->SetBackgroundColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :59
void app18_accessor_app18_Button_BackgroundColor__get_SupportsOriginSetter_fn(app18_accessor_app18_Button_BackgroundColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector app18_accessor_app18_Button_BackgroundColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> app18_accessor_app18_Button_BackgroundColor::Singleton_;

// public generated app18_accessor_app18_Button_BackgroundColor() [instance] :51
void app18_accessor_app18_Button_BackgroundColor::ctor_1()
{
    ctor_();
}

// public generated app18_accessor_app18_Button_BackgroundColor New() [static] :51
app18_accessor_app18_Button_BackgroundColor* app18_accessor_app18_Button_BackgroundColor::New1()
{
    app18_accessor_app18_Button_BackgroundColor* obj1 = (app18_accessor_app18_Button_BackgroundColor*)uNew(app18_accessor_app18_Button_BackgroundColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
