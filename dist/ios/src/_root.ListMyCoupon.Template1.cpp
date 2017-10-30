// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ListMyCoupon.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_ButtonEntryMyCoupon_Category_Property.h>
#include <_root.app18_ButtonEntryMyCoupon_Currency_Property.h>
#include <_root.app18_ButtonEntryMyCoupon_icon_Property.h>
#include <_root.app18_ButtonEntryMyCoupon_id_Property.h>
#include <_root.app18_ButtonEntryMyCoupon_Price_Property.h>
#include <_root.app18_ButtonEntryMyCoupon_ShopPlace_Property.h>
#include <_root.app18_ButtonEntryMyCoupon_State_Property.h>
#include <_root.app18_ButtonEntryMyCoupon_TypeCoupon_Property.h>
#include <_root.ButtonEntryMyCoupon.h>
#include <_root.ListMyCoupon.h>
#include <_root.ListMyCoupon.Template1.h>
#include <_root.Separator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[16];
static uType* TYPES[4];

namespace g{

// public partial sealed class ListMyCoupon.Template1 :85
// {
// static Template1() :103
static void ListMyCoupon__Template1__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ListMyCoupon__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"icon"*/]);
    ListMyCoupon__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Category"*/]);
    ListMyCoupon__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"TypeCoupon"*/]);
    ListMyCoupon__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Price"*/]);
    ListMyCoupon__Template1::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Currency"*/]);
    ListMyCoupon__Template1::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"State"*/]);
    ListMyCoupon__Template1::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"ShopPlace"*/]);
    ListMyCoupon__Template1::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"id"*/]);
}

static void ListMyCoupon__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("icon");
    ::STRINGS[1] = uString::Const("Category");
    ::STRINGS[2] = uString::Const("TypeCoupon");
    ::STRINGS[3] = uString::Const("Price");
    ::STRINGS[4] = uString::Const("Currency");
    ::STRINGS[5] = uString::Const("State");
    ::STRINGS[6] = uString::Const("ShopPlace");
    ::STRINGS[7] = uString::Const("id");
    ::STRINGS[8] = uString::Const("onTapItemList");
    ::STRINGS[9] = uString::Const("macroCategory");
    ::STRINGS[10] = uString::Const("name");
    ::STRINGS[11] = uString::Const("microCategory");
    ::STRINGS[12] = uString::Const("price");
    ::STRINGS[13] = uString::Const("currency");
    ::STRINGS[14] = uString::Const("state");
    ::STRINGS[15] = uString::Const("shopPlace");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    type->SetFields(2,
        ::g::ListMyCoupon_typeof(), offsetof(ListMyCoupon__Template1, __parent1), uFieldFlagsWeak,
        ::g::ListMyCoupon_typeof(), offsetof(ListMyCoupon__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListMyCoupon__Template1, temp_Category_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListMyCoupon__Template1, temp_Currency_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ListMyCoupon__Template1, temp_eb7), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(ListMyCoupon__Template1, temp_icon_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListMyCoupon__Template1, temp_id_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListMyCoupon__Template1, temp_Price_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListMyCoupon__Template1, temp_ShopPlace_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListMyCoupon__Template1, temp_State_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListMyCoupon__Template1, temp_TypeCoupon_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListMyCoupon__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListMyCoupon__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListMyCoupon__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListMyCoupon__Template1::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListMyCoupon__Template1::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListMyCoupon__Template1::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListMyCoupon__Template1::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListMyCoupon__Template1::__selector7_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ListMyCoupon__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 21;
    options.ObjectSize = sizeof(ListMyCoupon__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("ListMyCoupon.Template1", options);
    type->fp_build_ = ListMyCoupon__Template1_build;
    type->fp_cctor_ = ListMyCoupon__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ListMyCoupon__Template1__New1_fn;
    return type;
}

// public Template1(ListMyCoupon parent, ListMyCoupon parentInstance) :89
void ListMyCoupon__Template1__ctor_1_fn(ListMyCoupon__Template1* __this, ::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :106
void ListMyCoupon__Template1__New1_fn(ListMyCoupon__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"onTapItemList"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"macroCategory"*/]);
    ::g::ButtonEntryMyCoupon* temp = ::g::ButtonEntryMyCoupon::New5();
    __this->temp_icon_inst = ::g::app18_ButtonEntryMyCoupon_icon_Property::New1(temp, ListMyCoupon__Template1::__selector0_);
    ::g::Fuse::Reactive::Member* temp3 = ::g::Fuse::Reactive::Member::New1(temp2, ::STRINGS[0/*"icon"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"macroCategory"*/]);
    __this->temp_Category_inst = ::g::app18_ButtonEntryMyCoupon_Category_Property::New1(temp, ListMyCoupon__Template1::__selector1_);
    ::g::Fuse::Reactive::Member* temp5 = ::g::Fuse::Reactive::Member::New1(temp4, ::STRINGS[10/*"name"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"microCategory"*/]);
    __this->temp_TypeCoupon_inst = ::g::app18_ButtonEntryMyCoupon_TypeCoupon_Property::New1(temp, ListMyCoupon__Template1::__selector2_);
    ::g::Fuse::Reactive::Member* temp7 = ::g::Fuse::Reactive::Member::New1(temp6, ::STRINGS[10/*"name"*/]);
    __this->temp_Price_inst = ::g::app18_ButtonEntryMyCoupon_Price_Property::New1(temp, ListMyCoupon__Template1::__selector3_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"price"*/]);
    __this->temp_Currency_inst = ::g::app18_ButtonEntryMyCoupon_Currency_Property::New1(temp, ListMyCoupon__Template1::__selector4_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"currency"*/]);
    __this->temp_State_inst = ::g::app18_ButtonEntryMyCoupon_State_Property::New1(temp, ListMyCoupon__Template1::__selector5_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"state"*/]);
    __this->temp_ShopPlace_inst = ::g::app18_ButtonEntryMyCoupon_ShopPlace_Property::New1(temp, ListMyCoupon__Template1::__selector6_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"shopPlace"*/]);
    __this->temp_id_inst = ::g::app18_ButtonEntryMyCoupon_id_Property::New1(temp, ListMyCoupon__Template1::__selector7_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"id"*/]);
    ::g::Fuse::Gestures::Clicked* temp13 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp14 = ::g::Fuse::Triggers::Actions::Callback::New2();
    __this->temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_icon_inst, (uObject*)temp3, 3);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Category_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_TypeCoupon_inst, (uObject*)temp7, 3);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Price_inst, (uObject*)temp8, 3);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Currency_inst, (uObject*)temp9, 3);
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_State_inst, (uObject*)temp10, 3);
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_ShopPlace_inst, (uObject*)temp11, 3);
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_id_inst, (uObject*)temp12, 3);
    ::g::Separator* temp23 = ::g::Separator::New4();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb7);
    temp14->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    return *__retval = __self1, void();
}

// public Template1 New(ListMyCoupon parent, ListMyCoupon parentInstance) :89
void ListMyCoupon__Template1__New2_fn(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance, ListMyCoupon__Template1** __retval)
{
    *__retval = ListMyCoupon__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ListMyCoupon__Template1::__selector0_;
::g::Uno::UX::Selector ListMyCoupon__Template1::__selector1_;
::g::Uno::UX::Selector ListMyCoupon__Template1::__selector2_;
::g::Uno::UX::Selector ListMyCoupon__Template1::__selector3_;
::g::Uno::UX::Selector ListMyCoupon__Template1::__selector4_;
::g::Uno::UX::Selector ListMyCoupon__Template1::__selector5_;
::g::Uno::UX::Selector ListMyCoupon__Template1::__selector6_;
::g::Uno::UX::Selector ListMyCoupon__Template1::__selector7_;

// public Template1(ListMyCoupon parent, ListMyCoupon parentInstance) [instance] :89
void ListMyCoupon__Template1::ctor_1(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(ListMyCoupon parent, ListMyCoupon parentInstance) [static] :89
ListMyCoupon__Template1* ListMyCoupon__Template1::New2(::g::ListMyCoupon* parent, ::g::ListMyCoupon* parentInstance)
{
    ListMyCoupon__Template1* obj1 = (ListMyCoupon__Template1*)uNew(ListMyCoupon__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
