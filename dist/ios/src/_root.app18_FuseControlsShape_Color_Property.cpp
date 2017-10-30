// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_FuseControlsShape_Color_Property.h>
#include <Fuse.Controls.Shape.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class app18_FuseControlsShape_Color_Property :369
// {
static void app18_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Shape*/], offsetof(app18_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* app18_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("app18_FuseControlsShape_Color_Property", options);
    type->fp_build_ = app18_FuseControlsShape_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))app18_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))app18_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))app18_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))app18_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public app18_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :372
void app18_FuseControlsShape_Color_Property__ctor_3_fn(app18_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :374
void app18_FuseControlsShape_Color_Property__Get1_fn(app18_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[0/*Fuse.Controls.Shape*/]))->Color(), void();
}

// public app18_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :372
void app18_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, app18_FuseControlsShape_Color_Property** __retval)
{
    *__retval = app18_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :373
void app18_FuseControlsShape_Color_Property__get_Object_fn(app18_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :375
void app18_FuseControlsShape_Color_Property__Set1_fn(app18_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[0/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :376
void app18_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(app18_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public app18_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :372
void app18_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public app18_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :372
app18_FuseControlsShape_Color_Property* app18_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    app18_FuseControlsShape_Color_Property* obj1 = (app18_FuseControlsShape_Color_Property*)uNew(app18_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
