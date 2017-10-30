// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_ButtonIcon_Value.h>
#include <_root.ButtonIcon.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class app18_accessor_ButtonIcon_Value :181
// {
// static generated app18_accessor_ButtonIcon_Value() :181
static void app18_accessor_ButtonIcon_Value__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    app18_accessor_ButtonIcon_Value::Singleton_ = app18_accessor_ButtonIcon_Value::New1();
    app18_accessor_ButtonIcon_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void app18_accessor_ButtonIcon_Value_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::TYPES[0] = ::g::ButtonIcon_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&app18_accessor_ButtonIcon_Value::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&app18_accessor_ButtonIcon_Value::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* app18_accessor_ButtonIcon_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_accessor_ButtonIcon_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("app18_accessor_ButtonIcon_Value", options);
    type->fp_build_ = app18_accessor_ButtonIcon_Value_build;
    type->fp_ctor_ = (void*)app18_accessor_ButtonIcon_Value__New1_fn;
    type->fp_cctor_ = app18_accessor_ButtonIcon_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))app18_accessor_ButtonIcon_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))app18_accessor_ButtonIcon_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))app18_accessor_ButtonIcon_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))app18_accessor_ButtonIcon_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))app18_accessor_ButtonIcon_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated app18_accessor_ButtonIcon_Value() :181
void app18_accessor_ButtonIcon_Value__ctor_1_fn(app18_accessor_ButtonIcon_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :187
void app18_accessor_ButtonIcon_Value__GetAsObject_fn(app18_accessor_ButtonIcon_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::ButtonIcon*>(obj, ::TYPES[0/*ButtonIcon*/]))->Value(), void();
}

// public override sealed Uno.UX.Selector get_Name() :184
void app18_accessor_ButtonIcon_Value__get_Name_fn(app18_accessor_ButtonIcon_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = app18_accessor_ButtonIcon_Value::_name_, void();
}

// public generated app18_accessor_ButtonIcon_Value New() :181
void app18_accessor_ButtonIcon_Value__New1_fn(app18_accessor_ButtonIcon_Value** __retval)
{
    *__retval = app18_accessor_ButtonIcon_Value::New1();
}

// public override sealed Uno.Type get_PropertyType() :186
void app18_accessor_ButtonIcon_Value__get_PropertyType_fn(app18_accessor_ButtonIcon_Value* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :188
void app18_accessor_ButtonIcon_Value__SetAsObject_fn(app18_accessor_ButtonIcon_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::ButtonIcon*>(obj, ::TYPES[0/*ButtonIcon*/]))->SetValue(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :189
void app18_accessor_ButtonIcon_Value__get_SupportsOriginSetter_fn(app18_accessor_ButtonIcon_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector app18_accessor_ButtonIcon_Value::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> app18_accessor_ButtonIcon_Value::Singleton_;

// public generated app18_accessor_ButtonIcon_Value() [instance] :181
void app18_accessor_ButtonIcon_Value::ctor_1()
{
    ctor_();
}

// public generated app18_accessor_ButtonIcon_Value New() [static] :181
app18_accessor_ButtonIcon_Value* app18_accessor_ButtonIcon_Value::New1()
{
    app18_accessor_ButtonIcon_Value* obj1 = (app18_accessor_ButtonIcon_Value*)uNew(app18_accessor_ButtonIcon_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
