// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_FuseControlsShadow_Color_Property.h>
#include <Fuse.Controls.Shadow.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class app18_FuseControlsShadow_Color_Property :310
// {
static void app18_FuseControlsShadow_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Shadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Shadow*/], offsetof(app18_FuseControlsShadow_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* app18_FuseControlsShadow_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_FuseControlsShadow_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("app18_FuseControlsShadow_Color_Property", options);
    type->fp_build_ = app18_FuseControlsShadow_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))app18_FuseControlsShadow_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))app18_FuseControlsShadow_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))app18_FuseControlsShadow_Color_Property__Set1_fn;
    return type;
}

// public app18_FuseControlsShadow_Color_Property(Fuse.Controls.Shadow obj, Uno.UX.Selector name) :313
void app18_FuseControlsShadow_Color_Property__ctor_3_fn(app18_FuseControlsShadow_Color_Property* __this, ::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :315
void app18_FuseControlsShadow_Color_Property__Get1_fn(app18_FuseControlsShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shadow*>(obj, ::TYPES[0/*Fuse.Controls.Shadow*/]))->Color(), void();
}

// public app18_FuseControlsShadow_Color_Property New(Fuse.Controls.Shadow obj, Uno.UX.Selector name) :313
void app18_FuseControlsShadow_Color_Property__New1_fn(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector* name, app18_FuseControlsShadow_Color_Property** __retval)
{
    *__retval = app18_FuseControlsShadow_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :314
void app18_FuseControlsShadow_Color_Property__get_Object_fn(app18_FuseControlsShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :316
void app18_FuseControlsShadow_Color_Property__Set1_fn(app18_FuseControlsShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shadow*>(obj, ::TYPES[0/*Fuse.Controls.Shadow*/]))->Color(v_);
}

// public app18_FuseControlsShadow_Color_Property(Fuse.Controls.Shadow obj, Uno.UX.Selector name) [instance] :313
void app18_FuseControlsShadow_Color_Property::ctor_3(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public app18_FuseControlsShadow_Color_Property New(Fuse.Controls.Shadow obj, Uno.UX.Selector name) [static] :313
app18_FuseControlsShadow_Color_Property* app18_FuseControlsShadow_Color_Property::New1(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector name)
{
    app18_FuseControlsShadow_Color_Property* obj1 = (app18_FuseControlsShadow_Color_Property*)uNew(app18_FuseControlsShadow_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
