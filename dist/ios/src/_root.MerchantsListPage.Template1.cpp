// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MerchantsListPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_FuseControlsTextControl_Value_Property.h>
#include <_root.B.h>
#include <_root.MerchantsListPage.h>
#include <_root.MerchantsListPage.Template1.h>
#include <_root.P.h>
#include <_root.Separator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.NodeGroup.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[7];
static uType* TYPES[3];

namespace g{

// public partial sealed class MerchantsListPage.Template1 :70
// {
// static Template1() :83
static void MerchantsListPage__Template1__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    MerchantsListPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void MerchantsListPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("name");
    ::STRINGS[2] = uString::Const("site");
    ::STRINGS[3] = uString::Const("tag");
    ::STRINGS[4] = uString::Const("onTapItemList");
    ::STRINGS[5] = uString::Const("1*,40");
    ::STRINGS[6] = uString::Const(">");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::MerchantsListPage_typeof(), offsetof(MerchantsListPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::MerchantsListPage_typeof(), offsetof(MerchantsListPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MerchantsListPage__Template1, temp_eb15), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantsListPage__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantsListPage__Template1, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MerchantsListPage__Template1, temp2_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MerchantsListPage__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MerchantsListPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(MerchantsListPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MerchantsListPage.Template1", options);
    type->fp_build_ = MerchantsListPage__Template1_build;
    type->fp_cctor_ = MerchantsListPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MerchantsListPage__Template1__New1_fn;
    return type;
}

// public Template1(MerchantsListPage parent, MerchantsListPage parentInstance) :74
void MerchantsListPage__Template1__ctor_1_fn(MerchantsListPage__Template1* __this, ::g::MerchantsListPage* parent, ::g::MerchantsListPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :86
void MerchantsListPage__Template1__New1_fn(MerchantsListPage__Template1* __this, uObject** __retval)
{
    ::g::Fuse::NodeGroup* __self1 = ::g::Fuse::NodeGroup::New2();
    ::g::B* temp = ::g::B::New4();
    __this->temp_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp, MerchantsListPage__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"name"*/]);
    ::g::P* temp1 = ::g::P::New4();
    __this->temp1_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp1, MerchantsListPage__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"site"*/]);
    ::g::P* temp2 = ::g::P::New4();
    __this->temp2_Value_inst = ::g::app18_FuseControlsTextControl_Value_Property::New1(temp2, MerchantsListPage__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"tag"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"onTapItemList"*/]);
    ::g::Fuse::Controls::Grid* temp7 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp8 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp5, 3);
    ::g::P* temp12 = ::g::P::New4();
    __this->temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Separator* temp13 = ::g::Separator::New4();
    temp7->Columns(::STRINGS[5/*"1*,40"*/]);
    temp7->HitTestMode(6);
    temp7->Padding(::g::Uno::Float4__New2(0.0f, 11.0f, 0.0f, 11.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp7, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb15)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp1->FontSize(14.0f);
    temp1->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp1->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp2->TextWrapping(1);
    temp2->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp12->Value(::STRINGS[6/*">"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    return *__retval = __self1, void();
}

// public Template1 New(MerchantsListPage parent, MerchantsListPage parentInstance) :74
void MerchantsListPage__Template1__New2_fn(::g::MerchantsListPage* parent, ::g::MerchantsListPage* parentInstance, MerchantsListPage__Template1** __retval)
{
    *__retval = MerchantsListPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MerchantsListPage__Template1::__selector0_;

// public Template1(MerchantsListPage parent, MerchantsListPage parentInstance) [instance] :74
void MerchantsListPage__Template1::ctor_1(::g::MerchantsListPage* parent, ::g::MerchantsListPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(MerchantsListPage parent, MerchantsListPage parentInstance) [static] :74
MerchantsListPage__Template1* MerchantsListPage__Template1::New2(::g::MerchantsListPage* parent, ::g::MerchantsListPage* parentInstance)
{
    MerchantsListPage__Template1* obj1 = (MerchantsListPage__Template1*)uNew(MerchantsListPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
