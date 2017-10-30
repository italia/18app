// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/BalanceCircle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_FuseControlsEllipticalShape_EndAngleDegrees_Property.h>
#include <_root.BalanceCircle.h>
#include <_root.P.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.EllipticalShape.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[4];
static uType* TYPES[4];

namespace g{

// public partial sealed class BalanceCircle :2
// {
// static BalanceCircle() :7
static void BalanceCircle__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    BalanceCircle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"EndAngleDeg...*/]);
    BalanceCircle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"CurrentBala...*/]);
    BalanceCircle::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"TotalBalance"*/]);
}

static void BalanceCircle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("EndAngleDegrees");
    ::STRINGS[1] = uString::Const("CurrentBalance");
    ::STRINGS[2] = uString::Const("TotalBalance");
    ::STRINGS[3] = uString::Const("NUOVO BUONO");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Fuse::Animations::Easing_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(113,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(BalanceCircle, CurrentBalance), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(BalanceCircle, CurrentBalance_EndAngleDegrees_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(BalanceCircle, TotalBalance), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BalanceCircle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BalanceCircle::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BalanceCircle::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* BalanceCircle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::StackPanel_typeof();
    options.FieldCount = 119;
    options.InterfaceCount = 18;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(BalanceCircle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BalanceCircle", options);
    type->fp_build_ = BalanceCircle_build;
    type->fp_ctor_ = (void*)BalanceCircle__New5_fn;
    type->fp_cctor_ = BalanceCircle__cctor_4_fn;
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

// public BalanceCircle() :11
void BalanceCircle__ctor_8_fn(BalanceCircle* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :15
void BalanceCircle__InitializeUX_fn(BalanceCircle* __this)
{
    __this->InitializeUX();
}

// public BalanceCircle New() :11
void BalanceCircle__New5_fn(BalanceCircle** __retval)
{
    *__retval = BalanceCircle::New5();
}

::g::Uno::UX::Selector BalanceCircle::__selector0_;
::g::Uno::UX::Selector BalanceCircle::__selector1_;
::g::Uno::UX::Selector BalanceCircle::__selector2_;

// public BalanceCircle() [instance] :11
void BalanceCircle::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :15
void BalanceCircle::InitializeUX()
{
    CurrentBalance = ::g::Fuse::Controls::Circle::New3();
    CurrentBalance_EndAngleDegrees_inst = ::g::app18_FuseControlsEllipticalShape_EndAngleDegrees_Property::New1(CurrentBalance, BalanceCircle::__selector0_);
    ::g::Fuse::Controls::Panel* temp = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp1 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp4 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::SolidColor* temp5 = ::g::Fuse::Drawing::SolidColor::New2();
    TotalBalance = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::Stroke* temp6 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::SolidColor* temp7 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Triggers::AddingAnimation* temp8 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], CurrentBalance_EndAngleDegrees_inst);
    ::g::P* temp10 = ::g::P::New4();
    Orientation(1);
    temp->Width(::g::Uno::UX::Size__New1(116.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(116.0f, 1));
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), CurrentBalance);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), TotalBalance);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp1->Width(::g::Uno::UX::Size__New1(90.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp2->Color(::g::Fuse::Drawing::Colors::White_);
    temp2->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp3->Color(::g::Fuse::Drawing::Colors::White_);
    temp3->Width(::g::Uno::UX::Size__New1(3.0f, 1));
    temp3->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(CurrentBalance)->StartAngleDegrees(180.0f);
    uPtr(CurrentBalance)->EndAngleDegrees(270.0f);
    uPtr(CurrentBalance)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CurrentBalance)->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(CurrentBalance)->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(CurrentBalance)->Name(BalanceCircle::__selector1_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CurrentBalance)->Strokes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp4);
    temp4->Width(2.0f);
    temp4->Brush(temp5);
    temp5->Color(::g::Uno::Float4__New2(0.3960784f, 0.8627451f, 0.8745098f, 1.0f));
    uPtr(TotalBalance)->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(TotalBalance)->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(TotalBalance)->Name(BalanceCircle::__selector2_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(TotalBalance)->Strokes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp6);
    temp6->Width(2.0f);
    temp6->Brush(temp7);
    temp7->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(180.0f));
    temp9->Duration(1.5);
    temp9->Easing(::g::Fuse::Animations::Easing::BounceIn_);
    temp10->Value(::STRINGS[3/*"NUOVO BUONO"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
}

// public BalanceCircle New() [static] :11
BalanceCircle* BalanceCircle::New5()
{
    BalanceCircle* obj1 = (BalanceCircle*)uNew(BalanceCircle_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
