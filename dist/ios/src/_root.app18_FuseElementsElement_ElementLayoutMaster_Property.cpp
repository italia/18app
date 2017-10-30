// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class app18_FuseElementsElement_ElementLayoutMaster_Property :570
// {
static void app18_FuseElementsElement_ElementLayoutMaster_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::Controls::LayoutControl_typeof());
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(app18_FuseElementsElement_ElementLayoutMaster_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* app18_FuseElementsElement_ElementLayoutMaster_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(app18_FuseElementsElement_ElementLayoutMaster_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("app18_FuseElementsElement_ElementLayoutMaster_Property", options);
    type->fp_build_ = app18_FuseElementsElement_ElementLayoutMaster_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))app18_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))app18_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))app18_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn;
    return type;
}

// public app18_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :573
void app18_FuseElementsElement_ElementLayoutMaster_Property__ctor_3_fn(app18_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.Element Get(Uno.UX.PropertyObject obj) :575
void app18_FuseElementsElement_ElementLayoutMaster_Property__Get1_fn(app18_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element** __retval)
{
    return *__retval = ::g::Fuse::Controls::LayoutControl::GetLayoutMaster(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/])), void();
}

// public app18_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :573
void app18_FuseElementsElement_ElementLayoutMaster_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, app18_FuseElementsElement_ElementLayoutMaster_Property** __retval)
{
    *__retval = app18_FuseElementsElement_ElementLayoutMaster_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :574
void app18_FuseElementsElement_ElementLayoutMaster_Property__get_Object_fn(app18_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.Element v, Uno.UX.IPropertyListener origin) :576
void app18_FuseElementsElement_ElementLayoutMaster_Property__Set1_fn(app18_FuseElementsElement_ElementLayoutMaster_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Elements::Element* v, uObject* origin)
{
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]), v);
}

// public app18_FuseElementsElement_ElementLayoutMaster_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :573
void app18_FuseElementsElement_ElementLayoutMaster_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public app18_FuseElementsElement_ElementLayoutMaster_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :573
app18_FuseElementsElement_ElementLayoutMaster_Property* app18_FuseElementsElement_ElementLayoutMaster_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    app18_FuseElementsElement_ElementLayoutMaster_Property* obj1 = (app18_FuseElementsElement_ElementLayoutMaster_Property*)uNew(app18_FuseElementsElement_ElementLayoutMaster_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
