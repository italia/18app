// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_cover_Image_Property.h>
#include <_root.cover.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class app18_cover_Image_Property :352
// {
static void app18_cover_Image_Property_build(uType* type)
{
    ::TYPES[0] = ::g::cover_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*cover*/], offsetof(app18_cover_Image_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* app18_cover_Image_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_cover_Image_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("app18_cover_Image_Property", options);
    type->fp_build_ = app18_cover_Image_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))app18_cover_Image_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))app18_cover_Image_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))app18_cover_Image_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))app18_cover_Image_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public app18_cover_Image_Property(cover obj, Uno.UX.Selector name) :355
void app18_cover_Image_Property__ctor_3_fn(app18_cover_Image_Property* __this, ::g::cover* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :357
void app18_cover_Image_Property__Get1_fn(app18_cover_Image_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = uPtr(uCast< ::g::cover*>(obj, ::TYPES[0/*cover*/]))->Image(), void();
}

// public app18_cover_Image_Property New(cover obj, Uno.UX.Selector name) :355
void app18_cover_Image_Property__New1_fn(::g::cover* obj, ::g::Uno::UX::Selector* name, app18_cover_Image_Property** __retval)
{
    *__retval = app18_cover_Image_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :356
void app18_cover_Image_Property__get_Object_fn(app18_cover_Image_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :358
void app18_cover_Image_Property__Set1_fn(app18_cover_Image_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uPtr(uCast< ::g::cover*>(obj, ::TYPES[0/*cover*/]))->SetImage(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :359
void app18_cover_Image_Property__get_SupportsOriginSetter_fn(app18_cover_Image_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public app18_cover_Image_Property(cover obj, Uno.UX.Selector name) [instance] :355
void app18_cover_Image_Property::ctor_3(::g::cover* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public app18_cover_Image_Property New(cover obj, Uno.UX.Selector name) [static] :355
app18_cover_Image_Property* app18_cover_Image_Property::New1(::g::cover* obj, ::g::Uno::UX::Selector name)
{
    app18_cover_Image_Property* obj1 = (app18_cover_Image_Property*)uNew(app18_cover_Image_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
