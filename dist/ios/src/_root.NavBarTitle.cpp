// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NavBarTitle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_accessor_NavBarTitle_Text.h>
#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.app18_FuseElementsElement_Opacity_Property.h>
#include <_root.NavBarTitle.h>
#include <_root.NavbarTitleText.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[4];

namespace g{

// public partial sealed class NavBarTitle :2
// {
// static NavBarTitle() :23
static void NavBarTitle__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    NavBarTitle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    NavBarTitle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Opacity"*/]);
    NavBarTitle::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"title"*/]);
}

static void NavBarTitle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Opacity");
    ::STRINGS[2] = uString::Const("title");
    ::STRINGS[3] = uString::Const("Text");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::app18_accessor_NavBarTitle_Text_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
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
    type->SetFields(112,
        ::g::Uno::String_typeof(), offsetof(NavBarTitle, _field_Text), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavBarTitle, navBar), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(NavBarTitle, temp_Value_inst), 0,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(NavBarTitle, title), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(NavBarTitle, title_Opacity_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NavBarTitle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NavBarTitle::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&NavBarTitle::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* NavBarTitle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 18;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(NavBarTitle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("NavBarTitle", options);
    type->fp_build_ = NavBarTitle_build;
    type->fp_cctor_ = NavBarTitle__cctor_4_fn;
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

// public NavBarTitle(Fuse.Visual navBar) :27
void NavBarTitle__ctor_7_fn(NavBarTitle* __this, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_7(navBar1);
}

// private void InitializeUX() :33
void NavBarTitle__InitializeUX_fn(NavBarTitle* __this)
{
    __this->InitializeUX();
}

// public NavBarTitle New(Fuse.Visual navBar) :27
void NavBarTitle__New4_fn(::g::Fuse::Visual* navBar1, NavBarTitle** __retval)
{
    *__retval = NavBarTitle::New4(navBar1);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :11
void NavBarTitle__SetText_fn(NavBarTitle* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public string get_Text() :8
void NavBarTitle__get_Text_fn(NavBarTitle* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :9
void NavBarTitle__set_Text_fn(NavBarTitle* __this, uString* value)
{
    __this->Text(value);
}

::g::Uno::UX::Selector NavBarTitle::__selector0_;
::g::Uno::UX::Selector NavBarTitle::__selector1_;
::g::Uno::UX::Selector NavBarTitle::__selector2_;

// public NavBarTitle(Fuse.Visual navBar) [instance] :27
void NavBarTitle::ctor_7(::g::Fuse::Visual* navBar1)
{
    ctor_6();
    navBar = navBar1;
    InitializeUX();
}

// private void InitializeUX() [instance] :33
void NavBarTitle::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::NavbarTitleText* temp = ::g::NavbarTitleText::New4();
    temp_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp, NavBarTitle::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::app18_accessor_NavBarTitle_Text::Singleton_);
    title = ::g::Fuse::Controls::StackPanel::New4();
    title_Opacity_inst = ::g::app18_FuseElementsElement_Opacity_Property::New1(title, NavBarTitle::__selector1_);
    ::g::Fuse::AlternateRoot* temp3 = ::g::Fuse::AlternateRoot::New2();
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 1);
    ::g::Fuse::Navigation::EnteringAnimation* temp5 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Move* temp6 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Change* temp7 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], title_Opacity_inst);
    ::g::Fuse::Navigation::ExitingAnimation* temp8 = ::g::Fuse::Navigation::ExitingAnimation::New2();
    ::g::Fuse::Animations::Move* temp9 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Change* temp10 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], title_Opacity_inst);
    temp3->ParentNode(navBar);
    temp3->Node(title);
    uPtr(title)->Orientation(0);
    uPtr(title)->ItemSpacing(10.0f);
    uPtr(title)->Alignment(9);
    uPtr(title)->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 0.0f, 0.0f));
    uPtr(title)->Name(NavBarTitle::__selector2_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(title)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(title)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(title)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    temp6->X(1.0f);
    temp6->Duration(0.5);
    temp6->RelativeTo(::g::Fuse::TranslationModes::Size_);
    temp6->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    ::g::Fuse::Animations::Change__set_Value_fn(temp7, uCRef(0.0f));
    temp7->Duration(0.4);
    temp7->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    temp9->X(-1.0f);
    temp9->Duration(0.4);
    temp9->RelativeTo(::g::Fuse::TranslationModes::Size_);
    temp9->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    ::g::Fuse::Animations::Change__set_Value_fn(temp10, uCRef(0.0f));
    temp10->Duration(0.4);
    temp10->Easing(::g::Fuse::Animations::Easing::CubicInOut_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :11
void NavBarTitle::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Text"*/]), origin);
    }
}

// public string get_Text() [instance] :8
uString* NavBarTitle::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :9
void NavBarTitle::Text(uString* value)
{
    SetText(value, NULL);
}

// public NavBarTitle New(Fuse.Visual navBar) [static] :27
NavBarTitle* NavBarTitle::New4(::g::Fuse::Visual* navBar1)
{
    NavBarTitle* obj1 = (NavBarTitle*)uNew(NavBarTitle_typeof());
    obj1->ctor_7(navBar1);
    return obj1;
}
// }

} // ::g
