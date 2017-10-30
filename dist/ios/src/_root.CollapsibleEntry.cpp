// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/CollapsibleEntry.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_CollapsibleEntry_Description.h>
#include <_root.app18_accessor_CollapsibleEntry_Title.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseVisual_LayoutRole_Property.h>
#include <_root.CollapsibleEntry.h>
#include <_root.P.h>
#include <_root.Separator.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[10];
static uType* TYPES[6];

namespace g{

// public partial sealed class CollapsibleEntry :2
// {
// static CollapsibleEntry() :56
static void CollapsibleEntry__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    CollapsibleEntry::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    CollapsibleEntry::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"LayoutRole"*/]);
    CollapsibleEntry::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"icon"*/]);
    CollapsibleEntry::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"description"*/]);
    CollapsibleEntry::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"showDescrip...*/]);
}

static void CollapsibleEntry_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("LayoutRole");
    ::STRINGS[2] = uString::Const("icon");
    ::STRINGS[3] = uString::Const("description");
    ::STRINGS[4] = uString::Const("showDescription");
    ::STRINGS[5] = uString::Const("1*, 10");
    ::STRINGS[6] = uString::Const(">");
    ::STRINGS[7] = uString::Const("V");
    ::STRINGS[8] = uString::Const("Description");
    ::STRINGS[9] = uString::Const("Title");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::LayoutRole_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetDependencies(
        ::g::app18_accessor_CollapsibleEntry_Description_typeof(),
        ::g::app18_accessor_CollapsibleEntry_Title_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(113,
        ::g::Uno::String_typeof(), offsetof(CollapsibleEntry, _field_Description), 0,
        ::g::Uno::String_typeof(), offsetof(CollapsibleEntry, _field_Title), 0,
        ::g::P_typeof(), offsetof(CollapsibleEntry, description), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::LayoutRole_typeof(), NULL), offsetof(CollapsibleEntry, description_LayoutRole_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleEntry, description_Value_inst), 0,
        ::g::P_typeof(), offsetof(CollapsibleEntry, icon), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleEntry, icon_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(CollapsibleEntry, showDescription), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(CollapsibleEntry, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleEntry::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleEntry::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleEntry::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleEntry::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&CollapsibleEntry::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* CollapsibleEntry_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::StackPanel_typeof();
    options.FieldCount = 127;
    options.InterfaceCount = 18;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(CollapsibleEntry);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("CollapsibleEntry", options);
    type->fp_build_ = CollapsibleEntry_build;
    type->fp_ctor_ = (void*)CollapsibleEntry__New5_fn;
    type->fp_cctor_ = CollapsibleEntry__cctor_4_fn;
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

// public CollapsibleEntry() :60
void CollapsibleEntry__ctor_8_fn(CollapsibleEntry* __this)
{
    __this->ctor_8();
}

// public string get_Description() :23
void CollapsibleEntry__get_Description_fn(CollapsibleEntry* __this, uString** __retval)
{
    *__retval = __this->Description();
}

// public void set_Description(string value) :24
void CollapsibleEntry__set_Description_fn(CollapsibleEntry* __this, uString* value)
{
    __this->Description(value);
}

// private void InitializeUX() :64
void CollapsibleEntry__InitializeUX_fn(CollapsibleEntry* __this)
{
    __this->InitializeUX();
}

// public CollapsibleEntry New() :60
void CollapsibleEntry__New5_fn(CollapsibleEntry** __retval)
{
    *__retval = CollapsibleEntry::New5();
}

// public void SetDescription(string value, Uno.UX.IPropertyListener origin) :26
void CollapsibleEntry__SetDescription_fn(CollapsibleEntry* __this, uString* value, uObject* origin)
{
    __this->SetDescription(value, origin);
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) :11
void CollapsibleEntry__SetTitle_fn(CollapsibleEntry* __this, uString* value, uObject* origin)
{
    __this->SetTitle(value, origin);
}

// public string get_Title() :8
void CollapsibleEntry__get_Title_fn(CollapsibleEntry* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :9
void CollapsibleEntry__set_Title_fn(CollapsibleEntry* __this, uString* value)
{
    __this->Title(value);
}

::g::Uno::UX::Selector CollapsibleEntry::__selector0_;
::g::Uno::UX::Selector CollapsibleEntry::__selector1_;
::g::Uno::UX::Selector CollapsibleEntry::__selector2_;
::g::Uno::UX::Selector CollapsibleEntry::__selector3_;
::g::Uno::UX::Selector CollapsibleEntry::__selector4_;

// public CollapsibleEntry() [instance] :60
void CollapsibleEntry::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// public string get_Description() [instance] :23
uString* CollapsibleEntry::Description()
{
    return _field_Description;
}

// public void set_Description(string value) [instance] :24
void CollapsibleEntry::Description(uString* value)
{
    SetDescription(value, NULL);
}

// private void InitializeUX() [instance] :64
void CollapsibleEntry::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::P* temp = ::g::P::New4();
    temp_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp, CollapsibleEntry::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::app18_accessor_CollapsibleEntry_Title::Singleton_);
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    description = ::g::P::New4();
    description_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(description, CollapsibleEntry::__selector0_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::app18_accessor_CollapsibleEntry_Description::Singleton_);
    description_LayoutRole_inst = ::g::app18_FuseVisual_LayoutRole_Property::New1(description, CollapsibleEntry::__selector1_);
    icon = ::g::P::New4();
    icon_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(icon, CollapsibleEntry::__selector0_);
    ::g::Fuse::Controls::Grid* temp5 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 1);
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(description_Value_inst, (uObject*)temp4, 1);
    ::g::Separator* temp9 = ::g::Separator::New4();
    ::g::Fuse::Triggers::LayoutAnimation* temp10 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Resize* temp11 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Move* temp12 = ::g::Fuse::Animations::Move::New2();
    showDescription = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp13 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<Fuse.LayoutRole>*/], description_LayoutRole_inst);
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<string>*/], icon_Value_inst);
    ::g::Fuse::Gestures::Clicked* temp15 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp16 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::LayoutAnimation* temp17 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Resize* temp18 = ::g::Fuse::Animations::Resize::New2();
    ::g::Fuse::Animations::Move* temp19 = ::g::Fuse::Animations::Move::New2();
    HitTestMode(6);
    ClipToBounds(true);
    temp5->Columns(::STRINGS[5/*"1*, 10"*/]);
    temp5->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), icon);
    temp->TextWrapping(1);
    temp->Alignment(9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    uPtr(icon)->Value(::STRINGS[6/*">"*/]);
    uPtr(icon)->Name(CollapsibleEntry::__selector2_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), description);
    uPtr(description)->TextWrapping(1);
    uPtr(description)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(description)->Alignment(1);
    uPtr(description)->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    uPtr(description)->LayoutRole(2);
    uPtr(description)->Name(CollapsibleEntry::__selector3_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(description)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    temp11->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp11->Duration(0.5);
    temp11->RelativeTo(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_);
    temp11->Easing(::g::Fuse::Animations::Easing::QuadraticOut_);
    temp11->EasingBack(::g::Fuse::Animations::Easing::QuadraticIn_);
    temp12->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp12->Duration(0.5);
    temp12->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionChange_);
    temp12->Easing(::g::Fuse::Animations::Easing::QuadraticOut_);
    temp12->EasingBack(::g::Fuse::Animations::Easing::QuadraticIn_);
    uPtr(showDescription)->Name(CollapsibleEntry::__selector4_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showDescription)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showDescription)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Fuse::Animations::Change__set_Value_fn(temp13, uCRef<int>(0));
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, ::STRINGS[7/*"V"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp16);
    temp16->Target((uObject*)showDescription);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    temp18->Vector(::g::Uno::Float2__New2(1.0f, 1.0f));
    temp18->Duration(0.5);
    temp18->RelativeTo(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_);
    temp18->Easing(::g::Fuse::Animations::Easing::QuadraticOut_);
    temp18->EasingBack(::g::Fuse::Animations::Easing::QuadraticIn_);
    temp19->Vector(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f));
    temp19->Duration(0.5);
    temp19->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionChange_);
    temp19->Easing(::g::Fuse::Animations::Easing::QuadraticOut_);
    temp19->EasingBack(::g::Fuse::Animations::Easing::QuadraticIn_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), showDescription);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
}

// public void SetDescription(string value, Uno.UX.IPropertyListener origin) [instance] :26
void CollapsibleEntry::SetDescription(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Description))
    {
        _field_Description = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Description"*/]), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :11
void CollapsibleEntry::SetTitle(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Title"*/]), origin);
    }
}

// public string get_Title() [instance] :8
uString* CollapsibleEntry::Title()
{
    return _field_Title;
}

// public void set_Title(string value) [instance] :9
void CollapsibleEntry::Title(uString* value)
{
    SetTitle(value, NULL);
}

// public CollapsibleEntry New() [static] :60
CollapsibleEntry* CollapsibleEntry::New5()
{
    CollapsibleEntry* obj1 = (CollapsibleEntry*)uNew(CollapsibleEntry_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
