// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ProfilePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.BaseText.h>
#include <_root.H2.h>
#include <_root.H3.h>
#include <_root.LogoPosteIcon.h>
#include <_root.NavBarTitle.h>
#include <_root.ProfilePage.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Navigation.Router.h>
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
static uString* STRINGS[17];
static uType* TYPES[3];

namespace g{

// public partial sealed class ProfilePage :2
// {
// static ProfilePage() :11
static void ProfilePage__cctor_5_fn(uType* __type)
{
    ProfilePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"navBar"*/]);
}

static void ProfilePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("navBar");
    ::STRINGS[2] = uString::Const("Pages/Profile/ProfilePage.ux");
    ::STRINGS[3] = uString::Const("il tuo profilo");
    ::STRINGS[4] = uString::Const("Mario Rossi");
    ::STRINGS[5] = uString::Const("Codice Fiscale");
    ::STRINGS[6] = uString::Const("RSS MRA 98T10 A562S");
    ::STRINGS[7] = uString::Const("Data e luogo di nascita");
    ::STRINGS[8] = uString::Const("10/12/1998 San Giuliano Terme (PI)");
    ::STRINGS[9] = uString::Const("Residenza");
    ::STRINGS[10] = uString::Const("Viale della Repubblica, 171");
    ::STRINGS[11] = uString::Const("31100 Treviso (TV)");
    ::STRINGS[12] = uString::Const("Recapiti");
    ::STRINGS[13] = uString::Const("3331234567");
    ::STRINGS[14] = uString::Const("mario.rossi@email.it");
    ::STRINGS[15] = uString::Const("Questo e' il riepilogo dei dari della tua identit\303\240");
    ::STRINGS[16] = uString::Const("SPID: per modificarli rivolgiti al gestore.");
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(ProfilePage, __g_nametable1), 0,
        ::g::Fuse::Visual_typeof(), offsetof(ProfilePage, navBar), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(ProfilePage, router), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&ProfilePage::__g_static_nametable1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ProfilePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::BasePage_typeof();
    options.FieldCount = 122;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(ProfilePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ProfilePage", options);
    type->fp_build_ = ProfilePage_build;
    type->fp_cctor_ = ProfilePage__cctor_5_fn;
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

// public ProfilePage(Fuse.Navigation.Router router, Fuse.Visual navBar) :15
void ProfilePage__ctor_9_fn(ProfilePage* __this, ::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    __this->ctor_9(router1, navBar1);
}

// private void InitializeUX() :23
void ProfilePage__InitializeUX1_fn(ProfilePage* __this)
{
    __this->InitializeUX1();
}

// public ProfilePage New(Fuse.Navigation.Router router, Fuse.Visual navBar) :15
void ProfilePage__New6_fn(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1, ProfilePage** __retval)
{
    *__retval = ProfilePage::New6(router1, navBar1);
}

uSStrong<uArray*> ProfilePage::__g_static_nametable1_;

// public ProfilePage(Fuse.Navigation.Router router, Fuse.Visual navBar) [instance] :15
void ProfilePage::ctor_9(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ctor_8();
    router = router1;
    navBar = navBar1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :23
void ProfilePage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ProfilePage::__g_static_nametable1_);
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::NavBarTitle* temp1 = ::g::NavBarTitle::New4(navBar);
    ::g::Fuse::Controls::ScrollView* temp2 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::H2* temp4 = ::g::H2::New4();
    ::g::BaseText* temp5 = ::g::BaseText::New4();
    ::g::H3* temp6 = ::g::H3::New4();
    ::g::BaseText* temp7 = ::g::BaseText::New4();
    ::g::H3* temp8 = ::g::H3::New4();
    ::g::BaseText* temp9 = ::g::BaseText::New4();
    ::g::H3* temp10 = ::g::H3::New4();
    ::g::H3* temp11 = ::g::H3::New4();
    ::g::BaseText* temp12 = ::g::BaseText::New4();
    ::g::H3* temp13 = ::g::H3::New4();
    ::g::H3* temp14 = ::g::H3::New4();
    ::g::BaseText* temp15 = ::g::BaseText::New4();
    ::g::BaseText* temp16 = ::g::BaseText::New4();
    ::g::LogoPosteIcon* temp17 = ::g::LogoPosteIcon::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp18 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->LineNumber(3);
    temp->FileName(::STRINGS[2/*"Pages/Profi...*/]);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::ProfilePage600b831f()));
    temp1->Text(::STRINGS[3/*"il tuo prof...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp3->Background(temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp4->Value(::STRINGS[4/*"Mario Rossi"*/]);
    temp4->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Value(::STRINGS[5/*"Codice Fisc...*/]);
    temp5->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp6->Value(::STRINGS[6/*"RSS MRA 98T...*/]);
    temp6->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp7->Value(::STRINGS[7/*"Data e luog...*/]);
    temp7->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp8->Value(::STRINGS[8/*"10/12/1998 ...*/]);
    temp8->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp9->Value(::STRINGS[9/*"Residenza"*/]);
    temp9->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp9->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp10->Value(::STRINGS[10/*"Viale della...*/]);
    temp10->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp11->Value(::STRINGS[11/*"31100 Trevi...*/]);
    temp11->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp12->Value(::STRINGS[12/*"Recapiti"*/]);
    temp12->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp12->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp13->Value(::STRINGS[13/*"3331234567"*/]);
    temp13->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp14->Value(::STRINGS[14/*"mario.rossi...*/]);
    temp14->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp15->Value(::STRINGS[15/*"Questo e' i...*/]);
    temp15->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp15->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp16->Value(::STRINGS[16/*"SPID: per m...*/]);
    temp16->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp17->Alignment(9);
    temp17->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
}

// public ProfilePage New(Fuse.Navigation.Router router, Fuse.Visual navBar) [static] :15
ProfilePage* ProfilePage::New6(::g::Fuse::Navigation::Router* router1, ::g::Fuse::Visual* navBar1)
{
    ProfilePage* obj1 = (ProfilePage*)uNew(ProfilePage_typeof());
    obj1->ctor_9(router1, navBar1);
    return obj1;
}
// }

} // ::g
