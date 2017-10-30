// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/cover.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_cover_Image.h>
#include <_root.app18_FuseControlsImage_File_Property.h>
#include <_root.cover.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[4];

namespace g{

// public partial sealed class cover :2
// {
// static cover() :36
static void cover__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    cover::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"File"*/]);
    cover::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"innerPanel"*/]);
}

static void cover_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::STRINGS[1] = uString::Const("innerPanel");
    ::STRINGS[2] = uString::Const("Image");
    ::STRINGS[3] = uString::Const("LayerImage");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    type->SetDependencies(
        ::g::app18_accessor_cover_Image_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(114,
        ::g::Uno::UX::FileSource_typeof(), offsetof(cover, _field_Image), 0,
        ::g::Fuse::Layer_typeof(), offsetof(cover, _field_LayerImage), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(cover, innerPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(cover, temp_File_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&cover::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&cover::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* cover_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Container_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 18;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(cover);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("cover", options);
    type->fp_build_ = cover_build;
    type->fp_ctor_ = (void*)cover__New5_fn;
    type->fp_cctor_ = cover__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public cover() :40
void cover__ctor_8_fn(cover* __this)
{
    __this->ctor_8();
}

// public Uno.UX.FileSource get_Image() :8
void cover__get_Image_fn(cover* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->Image();
}

// public void set_Image(Uno.UX.FileSource value) :9
void cover__set_Image_fn(cover* __this, ::g::Uno::UX::FileSource* value)
{
    __this->Image(value);
}

// private void InitializeUX() :44
void cover__InitializeUX_fn(cover* __this)
{
    __this->InitializeUX();
}

// public Fuse.Layer get_LayerImage() :23
void cover__get_LayerImage_fn(cover* __this, int* __retval)
{
    *__retval = __this->LayerImage();
}

// public void set_LayerImage(Fuse.Layer value) :24
void cover__set_LayerImage_fn(cover* __this, int* value)
{
    __this->LayerImage(*value);
}

// public cover New() :40
void cover__New5_fn(cover** __retval)
{
    *__retval = cover::New5();
}

// public void SetImage(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) :11
void cover__SetImage_fn(cover* __this, ::g::Uno::UX::FileSource* value, uObject* origin)
{
    __this->SetImage(value, origin);
}

// public void SetLayerImage(Fuse.Layer value, Uno.UX.IPropertyListener origin) :26
void cover__SetLayerImage_fn(cover* __this, int* value, uObject* origin)
{
    __this->SetLayerImage(*value, origin);
}

::g::Uno::UX::Selector cover::__selector0_;
::g::Uno::UX::Selector cover::__selector1_;

// public cover() [instance] :40
void cover::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// public Uno.UX.FileSource get_Image() [instance] :8
::g::Uno::UX::FileSource* cover::Image()
{
    return _field_Image;
}

// public void set_Image(Uno.UX.FileSource value) [instance] :9
void cover::Image(::g::Uno::UX::FileSource* value)
{
    SetImage(value, NULL);
}

// private void InitializeUX() [instance] :44
void cover::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    temp_File_inst = ::g::app18_FuseControlsImage_File_Property::New1(temp, cover::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::app18_accessor_cover_Image::Singleton_);
    innerPanel = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::LinearGradient* temp4 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp5 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp6 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(temp_File_inst, (uObject*)temp2, 1);
    Layer(1);
    LayerImage(1);
    temp->StretchMode(6);
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), innerPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    uPtr(innerPanel)->Name(cover::__selector1_);
    temp3->Opacity(0.85f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp4);
    temp4->StartPoint(::g::Uno::Float2__New2(0.0f, 0.0f));
    temp4->EndPoint(::g::Uno::Float2__New2(0.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp6);
    temp5->Offset(0.0f);
    temp5->Color(::g::Uno::Float4__New2(0.0f, 0.2392157f, 0.5607843f, 1.0f));
    temp6->Offset(1.0f);
    temp6->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    Subtree(innerPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public Fuse.Layer get_LayerImage() [instance] :23
int cover::LayerImage()
{
    return _field_LayerImage;
}

// public void set_LayerImage(Fuse.Layer value) [instance] :24
void cover::LayerImage(int value)
{
    SetLayerImage(value, NULL);
}

// public void SetImage(Uno.UX.FileSource value, Uno.UX.IPropertyListener origin) [instance] :11
void cover::SetImage(::g::Uno::UX::FileSource* value, uObject* origin)
{
    if (value != _field_Image)
    {
        _field_Image = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Image"*/]), origin);
    }
}

// public void SetLayerImage(Fuse.Layer value, Uno.UX.IPropertyListener origin) [instance] :26
void cover::SetLayerImage(int value, uObject* origin)
{
    if (value != _field_LayerImage)
    {
        _field_LayerImage = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"LayerImage"*/]), origin);
    }
}

// public cover New() [static] :40
cover* cover::New5()
{
    cover* obj1 = (cover*)uNew(cover_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
