// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_ButtonEntryMyCoupon_State.h>
#include <_root.ButtonEntryMyCoupon.h>
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

// internal sealed class app18_accessor_ButtonEntryMyCoupon_State :101
// {
// static generated app18_accessor_ButtonEntryMyCoupon_State() :101
static void app18_accessor_ButtonEntryMyCoupon_State__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    app18_accessor_ButtonEntryMyCoupon_State::Singleton_ = app18_accessor_ButtonEntryMyCoupon_State::New1();
    app18_accessor_ButtonEntryMyCoupon_State::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"State"*/]);
}

static void app18_accessor_ButtonEntryMyCoupon_State_build(uType* type)
{
    ::STRINGS[0] = uString::Const("State");
    ::TYPES[0] = ::g::ButtonEntryMyCoupon_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&app18_accessor_ButtonEntryMyCoupon_State::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&app18_accessor_ButtonEntryMyCoupon_State::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* app18_accessor_ButtonEntryMyCoupon_State_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_accessor_ButtonEntryMyCoupon_State);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("app18_accessor_ButtonEntryMyCoupon_State", options);
    type->fp_build_ = app18_accessor_ButtonEntryMyCoupon_State_build;
    type->fp_ctor_ = (void*)app18_accessor_ButtonEntryMyCoupon_State__New1_fn;
    type->fp_cctor_ = app18_accessor_ButtonEntryMyCoupon_State__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))app18_accessor_ButtonEntryMyCoupon_State__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))app18_accessor_ButtonEntryMyCoupon_State__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))app18_accessor_ButtonEntryMyCoupon_State__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))app18_accessor_ButtonEntryMyCoupon_State__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))app18_accessor_ButtonEntryMyCoupon_State__get_SupportsOriginSetter_fn;
    return type;
}

// public generated app18_accessor_ButtonEntryMyCoupon_State() :101
void app18_accessor_ButtonEntryMyCoupon_State__ctor_1_fn(app18_accessor_ButtonEntryMyCoupon_State* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :107
void app18_accessor_ButtonEntryMyCoupon_State__GetAsObject_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::ButtonEntryMyCoupon*>(obj, ::TYPES[0/*ButtonEntryMyCoupon*/]))->State(), void();
}

// public override sealed Uno.UX.Selector get_Name() :104
void app18_accessor_ButtonEntryMyCoupon_State__get_Name_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = app18_accessor_ButtonEntryMyCoupon_State::_name_, void();
}

// public generated app18_accessor_ButtonEntryMyCoupon_State New() :101
void app18_accessor_ButtonEntryMyCoupon_State__New1_fn(app18_accessor_ButtonEntryMyCoupon_State** __retval)
{
    *__retval = app18_accessor_ButtonEntryMyCoupon_State::New1();
}

// public override sealed Uno.Type get_PropertyType() :106
void app18_accessor_ButtonEntryMyCoupon_State__get_PropertyType_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :108
void app18_accessor_ButtonEntryMyCoupon_State__SetAsObject_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::ButtonEntryMyCoupon*>(obj, ::TYPES[0/*ButtonEntryMyCoupon*/]))->SetState(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :109
void app18_accessor_ButtonEntryMyCoupon_State__get_SupportsOriginSetter_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector app18_accessor_ButtonEntryMyCoupon_State::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> app18_accessor_ButtonEntryMyCoupon_State::Singleton_;

// public generated app18_accessor_ButtonEntryMyCoupon_State() [instance] :101
void app18_accessor_ButtonEntryMyCoupon_State::ctor_1()
{
    ctor_();
}

// public generated app18_accessor_ButtonEntryMyCoupon_State New() [static] :101
app18_accessor_ButtonEntryMyCoupon_State* app18_accessor_ButtonEntryMyCoupon_State::New1()
{
    app18_accessor_ButtonEntryMyCoupon_State* obj1 = (app18_accessor_ButtonEntryMyCoupon_State*)uNew(app18_accessor_ButtonEntryMyCoupon_State_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
