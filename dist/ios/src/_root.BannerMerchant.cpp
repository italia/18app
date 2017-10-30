// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/BannerMerchant.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_cover_Image_Property.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseTriggersWhileString_Value_Property.h>
#include <_root.BannerMerchant.h>
#include <_root.cover.h>
#include <_root.H2.h>
#include <_root.P.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Triggers.WhileString.h>
#include <icon.Link.h>
#include <icon.MapMarker.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[14];
static uType* TYPES[2];

namespace g{

// public partial sealed class BannerMerchant :2
// {
// static BannerMerchant() :10
static void BannerMerchant__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    BannerMerchant::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    BannerMerchant::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Image"*/]);
}

static void BannerMerchant_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Image");
    ::STRINGS[2] = uString::Const("merchant");
    ::STRINGS[3] = uString::Const("name");
    ::STRINGS[4] = uString::Const("address");
    ::STRINGS[5] = uString::Const("city");
    ::STRINGS[6] = uString::Const(" (");
    ::STRINGS[7] = uString::Const("state");
    ::STRINGS[8] = uString::Const(")");
    ::STRINGS[9] = uString::Const("type");
    ::STRINGS[10] = uString::Const("site");
    ::STRINGS[11] = uString::Const("cover");
    ::STRINGS[12] = uString::Const("local_store");
    ::STRINGS[13] = uString::Const("internet_store");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::DockPanel_typeof());
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
    type->SetFields(112,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BannerMerchant, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BannerMerchant, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BannerMerchant, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BannerMerchant, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(BannerMerchant, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(BannerMerchant, temp5_Image_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BannerMerchant::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BannerMerchant::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* BannerMerchant_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(BannerMerchant);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BannerMerchant", options);
    type->fp_build_ = BannerMerchant_build;
    type->fp_ctor_ = (void*)BannerMerchant__New4_fn;
    type->fp_cctor_ = BannerMerchant__cctor_4_fn;
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

// public BannerMerchant() :14
void BannerMerchant__ctor_7_fn(BannerMerchant* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :18
void BannerMerchant__InitializeUX_fn(BannerMerchant* __this)
{
    __this->InitializeUX();
}

// public BannerMerchant New() :14
void BannerMerchant__New4_fn(BannerMerchant** __retval)
{
    *__retval = BannerMerchant::New4();
}

::g::Uno::UX::Selector BannerMerchant::__selector0_;
::g::Uno::UX::Selector BannerMerchant::__selector1_;

// public BannerMerchant() [instance] :14
void BannerMerchant::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :18
void BannerMerchant::InitializeUX()
{
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"merchant"*/]);
    ::g::H2* temp = ::g::H2::New4();
    temp_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp, BannerMerchant::__selector0_);
    ::g::Fuse::Reactive::Member* temp7 = ::g::Fuse::Reactive::Member::New1(temp6, ::STRINGS[3/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"merchant"*/]);
    ::g::Fuse::Reactive::Member* temp9 = ::g::Fuse::Reactive::Member::New1(temp8, ::STRINGS[4/*"address"*/]);
    ::g::Fuse::Reactive::Member* temp10 = ::g::Fuse::Reactive::Member::New1(temp9, ::STRINGS[5/*"city"*/]);
    uString* temp11 = ::STRINGS[6/*" ("*/];
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(temp11);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"merchant"*/]);
    ::g::Fuse::Reactive::Member* temp14 = ::g::Fuse::Reactive::Member::New1(temp13, ::STRINGS[4/*"address"*/]);
    ::g::Fuse::Reactive::Member* temp15 = ::g::Fuse::Reactive::Member::New1(temp14, ::STRINGS[7/*"state"*/]);
    uString* temp16 = ::STRINGS[8/*")"*/];
    ::g::Fuse::Reactive::Constant* temp17 = ::g::Fuse::Reactive::Constant::New1(temp16);
    ::g::Fuse::Reactive::Add* temp18 = ::g::Fuse::Reactive::Add::New1(temp15, temp17);
    ::g::Fuse::Reactive::Add* temp19 = ::g::Fuse::Reactive::Add::New1(temp12, temp18);
    ::g::P* temp1 = ::g::P::New4();
    temp1_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp1, BannerMerchant::__selector0_);
    ::g::Fuse::Reactive::Add* temp20 = ::g::Fuse::Reactive::Add::New1(temp10, temp19);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"merchant"*/]);
    ::g::Fuse::Triggers::WhileString* temp2 = ::g::Fuse::Triggers::WhileString::New2();
    temp2_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp2, BannerMerchant::__selector0_);
    ::g::Fuse::Reactive::Member* temp22 = ::g::Fuse::Reactive::Member::New1(temp21, ::STRINGS[9/*"type"*/]);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"merchant"*/]);
    ::g::P* temp3 = ::g::P::New4();
    temp3_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp3, BannerMerchant::__selector0_);
    ::g::Fuse::Reactive::Member* temp24 = ::g::Fuse::Reactive::Member::New1(temp23, ::STRINGS[10/*"site"*/]);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"merchant"*/]);
    ::g::Fuse::Triggers::WhileString* temp4 = ::g::Fuse::Triggers::WhileString::New2();
    temp4_Value_inst = ::g::app18_FuseTriggersWhileString_Value_Property::New1(temp4, BannerMerchant::__selector0_);
    ::g::Fuse::Reactive::Member* temp26 = ::g::Fuse::Reactive::Member::New1(temp25, ::STRINGS[9/*"type"*/]);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"merchant"*/]);
    ::g::cover* temp5 = ::g::cover::New5();
    temp5_Image_inst = ::g::app18_cover_Image_Property::New1(temp5, BannerMerchant::__selector1_);
    ::g::Fuse::Reactive::Member* temp28 = ::g::Fuse::Reactive::Member::New1(temp27, ::STRINGS[11/*"cover"*/]);
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Controls::StackPanel* temp31 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::icon::MapMarker* temp32 = ::g::icon::MapMarker::New4();
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp20, 3);
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Controls::StackPanel* temp35 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::icon::Link* temp36 = ::g::icon::Link::New4();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp24, 3);
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp26, 3);
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Image_inst, (uObject*)temp28, 3);
    ::g::Fuse::Controls::DockPanel::SetDock(this, 2);
    temp5->Height(::g::Uno::UX::Size__New1(112.0f, 1));
    temp5->Layer(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp29->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    temp2->Equals2(::STRINGS[12/*"local_store"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp31->Orientation(0);
    temp31->ItemSpacing(11.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp32->FontSize(25.0f);
    temp1->FontSize(14.0f);
    temp1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    temp4->Equals2(::STRINGS[13/*"internet_st...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp35->Orientation(0);
    temp35->ItemSpacing(8.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp36->FontSize(20.0f);
    temp36->Alignment(8);
    temp3->FontSize(14.0f);
    temp3->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
}

// public BannerMerchant New() [static] :14
BannerMerchant* BannerMerchant::New4()
{
    BannerMerchant* obj1 = (BannerMerchant*)uNew(BannerMerchant_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
