// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/NotificationsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.BaseText.h>
#include <_root.NavBarTitle.h>
#include <_root.NotificationsPage.h>
#include <_root.P.h>
#include <_root.Separator.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.NodeGroup.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
static uString* STRINGS[16];
static uType* TYPES[3];

namespace g{

// public partial sealed class NotificationsPage :2
// {
// static NotificationsPage() :11
static void NotificationsPage__cctor_5_fn(uType* __type)
{
    NotificationsPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"navBar"*/]);
}

static void NotificationsPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("navBar");
    ::STRINGS[2] = uString::Const("Pages/Notifications/NotificationsPage.ux");
    ::STRINGS[3] = uString::Const("Notifiche");
    ::STRINGS[4] = uString::Const("hai 2 notifiche non lette");
    ::STRINGS[5] = uString::Const("1*,40");
    ::STRINGS[6] = uString::Const("22 Gennaio 2017 - 20:45");
    ::STRINGS[7] = uString::Const("Buono di 99,00 \342\202\254 utilizzato presso Electric Cinema");
    ::STRINGS[8] = uString::Const("!");
    ::STRINGS[9] = uString::Const("20 Gennaio 2017 - 11:13");
    ::STRINGS[10] = uString::Const("Buono di 5,00 \342\202\254 utilizzato presso Libreria Citylight");
    ::STRINGS[11] = uString::Const("08 Gennaio 2017 - 15:18");
    ::STRINGS[12] = uString::Const("Buono di 128,00 \342\202\254 per Teatro / Danza e' stato annullato");
    ::STRINGS[13] = uString::Const("\342\210\232");
    ::STRINGS[14] = uString::Const("01 Gennaio 2017 - 15:18");
    ::STRINGS[15] = uString::Const("Buono di 56,00 \342\202\254 utilizzato presso Madison Square Garden");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
    type->SetFields(118,
        ::g::Uno::UX::NameTable_typeof(), offsetof(NotificationsPage, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NotificationsPage, navBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(NotificationsPage, router), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&NotificationsPage::__g_static_nametable1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* NotificationsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 122;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(NotificationsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("NotificationsPage", options);
    type->fp_build_ = NotificationsPage_build;
    type->fp_cctor_ = NotificationsPage__cctor_5_fn;
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

// public NotificationsPage(Fuse.Navigation.Router router, Fuse.Visual navBar) :15
void NotificationsPage__ctor_9_fn(NotificationsPage* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :23
void NotificationsPage__InitializeUX1_fn(NotificationsPage* __this)
{
    __this->InitializeUX1();
}

// public NotificationsPage New(Fuse.Navigation.Router router, Fuse.Visual navBar) :15
void NotificationsPage__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, NotificationsPage** __retval)
{
    *__retval = NotificationsPage::New6(router1, navBar1);
}

uSStrong<uArray*> NotificationsPage::__g_static_nametable1_;

// public NotificationsPage(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :15
void NotificationsPage::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :23
void NotificationsPage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, NotificationsPage::__g_static_nametable1_);
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::NavBarTitle* temp1 = ::g::NavBarTitle::New4(navBar);
    ::g::Fuse::Controls::ScrollView* temp2 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::BaseText* temp4 = ::g::BaseText::New4();
    ::g::Fuse::NodeGroup* temp5 = ::g::Fuse::NodeGroup::New2();
    ::g::Fuse::Controls::Grid* temp6 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp7 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::P* temp8 = ::g::P::New4();
    ::g::P* temp9 = ::g::P::New4();
    ::g::P* temp10 = ::g::P::New4();
    ::g::Separator* temp11 = ::g::Separator::New4();
    ::g::Fuse::NodeGroup* temp12 = ::g::Fuse::NodeGroup::New2();
    ::g::Fuse::Controls::Grid* temp13 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp14 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::P* temp15 = ::g::P::New4();
    ::g::P* temp16 = ::g::P::New4();
    ::g::P* temp17 = ::g::P::New4();
    ::g::Separator* temp18 = ::g::Separator::New4();
    ::g::Fuse::NodeGroup* temp19 = ::g::Fuse::NodeGroup::New2();
    ::g::Fuse::Controls::Grid* temp20 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp21 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::P* temp22 = ::g::P::New4();
    ::g::P* temp23 = ::g::P::New4();
    ::g::P* temp24 = ::g::P::New4();
    ::g::Separator* temp25 = ::g::Separator::New4();
    ::g::Fuse::NodeGroup* temp26 = ::g::Fuse::NodeGroup::New2();
    ::g::Fuse::Controls::Grid* temp27 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::P* temp29 = ::g::P::New4();
    ::g::P* temp30 = ::g::P::New4();
    ::g::P* temp31 = ::g::P::New4();
    ::g::Separator* temp32 = ::g::Separator::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->LineNumber(3);
    temp->FileName(::STRINGS[2/*"Pages/Notif...*/]);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::NotificationsPage7f1875ff()));
    temp1->Text(::STRINGS[3/*"Notifiche"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp3->Background(temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp4->Value(::STRINGS[4/*"hai 2 notif...*/]);
    temp4->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp4->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp6->Columns(::STRINGS[5/*"1*,40"*/]);
    temp6->HitTestMode(6);
    temp6->Padding(::g::Uno::Float4__New2(0.0f, 11.0f, 0.0f, 11.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp8->Value(::STRINGS[6/*"22 Gennaio ...*/]);
    temp8->FontSize(14.0f);
    temp8->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp8->Alignment(1);
    temp9->Value(::STRINGS[7/*"Buono di 99...*/]);
    temp9->TextWrapping(1);
    temp9->Alignment(1);
    temp10->Value(::STRINGS[8/*"!"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp13->Columns(::STRINGS[5/*"1*,40"*/]);
    temp13->HitTestMode(6);
    temp13->Padding(::g::Uno::Float4__New2(0.0f, 11.0f, 0.0f, 11.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp15->Value(::STRINGS[9/*"20 Gennaio ...*/]);
    temp15->FontSize(14.0f);
    temp15->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp15->Alignment(1);
    temp16->Value(::STRINGS[10/*"Buono di 5,...*/]);
    temp16->TextWrapping(1);
    temp16->Alignment(1);
    temp17->Value(::STRINGS[8/*"!"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp20->Columns(::STRINGS[5/*"1*,40"*/]);
    temp20->HitTestMode(6);
    temp20->Padding(::g::Uno::Float4__New2(0.0f, 11.0f, 0.0f, 11.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp22->Value(::STRINGS[11/*"08 Gennaio ...*/]);
    temp22->FontSize(14.0f);
    temp22->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp22->Alignment(1);
    temp23->Value(::STRINGS[12/*"Buono di 12...*/]);
    temp23->TextWrapping(1);
    temp23->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp23->Alignment(1);
    temp24->Value(::STRINGS[13/*"√"*/]);
    temp24->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp27->Columns(::STRINGS[5/*"1*,40"*/]);
    temp27->HitTestMode(6);
    temp27->Padding(::g::Uno::Float4__New2(0.0f, 11.0f, 0.0f, 11.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp29->Value(::STRINGS[14/*"01 Gennaio ...*/]);
    temp29->FontSize(14.0f);
    temp29->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp29->Alignment(1);
    temp30->Value(::STRINGS[15/*"Buono di 56...*/]);
    temp30->TextWrapping(1);
    temp30->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp30->Alignment(1);
    temp31->Value(::STRINGS[13/*"√"*/]);
    temp31->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
}

// public NotificationsPage New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :15
NotificationsPage* NotificationsPage::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    NotificationsPage* obj1 = (NotificationsPage*)uNew(NotificationsPage_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
