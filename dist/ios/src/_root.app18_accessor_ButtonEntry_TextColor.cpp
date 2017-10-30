// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_ButtonEntry_TextColor.h>
#include <_root.ButtonEntry.h>
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

// internal sealed class app18_accessor_ButtonEntry_TextColor :81
// {
// static generated app18_accessor_ButtonEntry_TextColor() :81
static void app18_accessor_ButtonEntry_TextColor__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    app18_accessor_ButtonEntry_TextColor::Singleton_ = app18_accessor_ButtonEntry_TextColor::New1();
    app18_accessor_ButtonEntry_TextColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"TextColor"*/]);
}

static void app18_accessor_ButtonEntry_TextColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TextColor");
    ::TYPES[0] = ::g::ButtonEntry_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&app18_accessor_ButtonEntry_TextColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&app18_accessor_ButtonEntry_TextColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* app18_accessor_ButtonEntry_TextColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_accessor_ButtonEntry_TextColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("app18_accessor_ButtonEntry_TextColor", options);
    type->fp_build_ = app18_accessor_ButtonEntry_TextColor_build;
    type->fp_ctor_ = (void*)app18_accessor_ButtonEntry_TextColor__New1_fn;
    type->fp_cctor_ = app18_accessor_ButtonEntry_TextColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))app18_accessor_ButtonEntry_TextColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))app18_accessor_ButtonEntry_TextColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))app18_accessor_ButtonEntry_TextColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))app18_accessor_ButtonEntry_TextColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))app18_accessor_ButtonEntry_TextColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated app18_accessor_ButtonEntry_TextColor() :81
void app18_accessor_ButtonEntry_TextColor__ctor_1_fn(app18_accessor_ButtonEntry_TextColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :87
void app18_accessor_ButtonEntry_TextColor__GetAsObject_fn(app18_accessor_ButtonEntry_TextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::ButtonEntry*>(obj, ::TYPES[0/*ButtonEntry*/]))->TextColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :84
void app18_accessor_ButtonEntry_TextColor__get_Name_fn(app18_accessor_ButtonEntry_TextColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = app18_accessor_ButtonEntry_TextColor::_name_, void();
}

// public generated app18_accessor_ButtonEntry_TextColor New() :81
void app18_accessor_ButtonEntry_TextColor__New1_fn(app18_accessor_ButtonEntry_TextColor** __retval)
{
    *__retval = app18_accessor_ButtonEntry_TextColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :86
void app18_accessor_ButtonEntry_TextColor__get_PropertyType_fn(app18_accessor_ButtonEntry_TextColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :88
void app18_accessor_ButtonEntry_TextColor__SetAsObject_fn(app18_accessor_ButtonEntry_TextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::ButtonEntry*>(obj, ::TYPES[0/*ButtonEntry*/]))->SetTextColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :89
void app18_accessor_ButtonEntry_TextColor__get_SupportsOriginSetter_fn(app18_accessor_ButtonEntry_TextColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector app18_accessor_ButtonEntry_TextColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> app18_accessor_ButtonEntry_TextColor::Singleton_;

// public generated app18_accessor_ButtonEntry_TextColor() [instance] :81
void app18_accessor_ButtonEntry_TextColor::ctor_1()
{
    ctor_();
}

// public generated app18_accessor_ButtonEntry_TextColor New() [static] :81
app18_accessor_ButtonEntry_TextColor* app18_accessor_ButtonEntry_TextColor::New1()
{
    app18_accessor_ButtonEntry_TextColor* obj1 = (app18_accessor_ButtonEntry_TextColor*)uNew(app18_accessor_ButtonEntry_TextColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
