// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_FuseTriggersWhileString_Value_Property.h>
#include <Fuse.Triggers.WhileString.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class app18_FuseTriggersWhileString_Value_Property :361
// {
static void app18_FuseTriggersWhileString_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::WhileString_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.WhileString*/], offsetof(app18_FuseTriggersWhileString_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* app18_FuseTriggersWhileString_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_FuseTriggersWhileString_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("app18_FuseTriggersWhileString_Value_Property", options);
    type->fp_build_ = app18_FuseTriggersWhileString_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))app18_FuseTriggersWhileString_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))app18_FuseTriggersWhileString_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))app18_FuseTriggersWhileString_Value_Property__Set1_fn;
    return type;
}

// public app18_FuseTriggersWhileString_Value_Property(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) :364
void app18_FuseTriggersWhileString_Value_Property__ctor_3_fn(app18_FuseTriggersWhileString_Value_Property* __this, ::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :366
void app18_FuseTriggersWhileString_Value_Property__Get1_fn(app18_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uString* ret2;
    return *__retval = (::g::Fuse::Triggers::WhileValue__get_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::WhileString*>(obj, ::TYPES[0/*Fuse.Triggers.WhileString*/])), &ret2), ret2), void();
}

// public app18_FuseTriggersWhileString_Value_Property New(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) :364
void app18_FuseTriggersWhileString_Value_Property__New1_fn(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name, app18_FuseTriggersWhileString_Value_Property** __retval)
{
    *__retval = app18_FuseTriggersWhileString_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :365
void app18_FuseTriggersWhileString_Value_Property__get_Object_fn(app18_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :367
void app18_FuseTriggersWhileString_Value_Property__Set1_fn(app18_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::WhileString*>(obj, ::TYPES[0/*Fuse.Triggers.WhileString*/])), v);
}

// public app18_FuseTriggersWhileString_Value_Property(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) [instance] :364
void app18_FuseTriggersWhileString_Value_Property::ctor_3(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public app18_FuseTriggersWhileString_Value_Property New(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) [static] :364
app18_FuseTriggersWhileString_Value_Property* app18_FuseTriggersWhileString_Value_Property::New1(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name)
{
    app18_FuseTriggersWhileString_Value_Property* obj1 = (app18_FuseTriggersWhileString_Value_Property*)uNew(app18_FuseTriggersWhileString_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
