// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_FuseControlsImage_File_Property.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class app18_FuseControlsImage_File_Property :336
// {
static void app18_FuseControlsImage_File_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Image*/], offsetof(app18_FuseControlsImage_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* app18_FuseControlsImage_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(app18_FuseControlsImage_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("app18_FuseControlsImage_File_Property", options);
    type->fp_build_ = app18_FuseControlsImage_File_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))app18_FuseControlsImage_File_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))app18_FuseControlsImage_File_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))app18_FuseControlsImage_File_Property__Set1_fn;
    return type;
}

// public app18_FuseControlsImage_File_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :339
void app18_FuseControlsImage_File_Property__ctor_3_fn(app18_FuseControlsImage_File_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :341
void app18_FuseControlsImage_File_Property__Get1_fn(app18_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->File(), void();
}

// public app18_FuseControlsImage_File_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :339
void app18_FuseControlsImage_File_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, app18_FuseControlsImage_File_Property** __retval)
{
    *__retval = app18_FuseControlsImage_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :340
void app18_FuseControlsImage_File_Property__get_Object_fn(app18_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :342
void app18_FuseControlsImage_File_Property__Set1_fn(app18_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->File(v);
}

// public app18_FuseControlsImage_File_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :339
void app18_FuseControlsImage_File_Property::ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public app18_FuseControlsImage_File_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :339
app18_FuseControlsImage_File_Property* app18_FuseControlsImage_File_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    app18_FuseControlsImage_File_Property* obj1 = (app18_FuseControlsImage_File_Property*)uNew(app18_FuseControlsImage_File_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
