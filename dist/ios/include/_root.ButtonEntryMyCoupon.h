// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ButtonEntryMyCoupon.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ButtonEntryMyCoupon;}

namespace g{

// public partial sealed class ButtonEntryMyCoupon :2
// {
::g::Fuse::Controls::Panel_type* ButtonEntryMyCoupon_typeof();
void ButtonEntryMyCoupon__ctor_8_fn(ButtonEntryMyCoupon* __this);
void ButtonEntryMyCoupon__get_Category_fn(ButtonEntryMyCoupon* __this, uString** __retval);
void ButtonEntryMyCoupon__set_Category_fn(ButtonEntryMyCoupon* __this, uString* value);
void ButtonEntryMyCoupon__get_Currency_fn(ButtonEntryMyCoupon* __this, uString** __retval);
void ButtonEntryMyCoupon__set_Currency_fn(ButtonEntryMyCoupon* __this, uString* value);
void ButtonEntryMyCoupon__get_icon_fn(ButtonEntryMyCoupon* __this, ::g::Uno::UX::FileSource** __retval);
void ButtonEntryMyCoupon__set_icon_fn(ButtonEntryMyCoupon* __this, ::g::Uno::UX::FileSource* value);
void ButtonEntryMyCoupon__get_id_fn(ButtonEntryMyCoupon* __this, uString** __retval);
void ButtonEntryMyCoupon__set_id_fn(ButtonEntryMyCoupon* __this, uString* value);
void ButtonEntryMyCoupon__InitializeUX_fn(ButtonEntryMyCoupon* __this);
void ButtonEntryMyCoupon__New5_fn(ButtonEntryMyCoupon** __retval);
void ButtonEntryMyCoupon__get_Price_fn(ButtonEntryMyCoupon* __this, uString** __retval);
void ButtonEntryMyCoupon__set_Price_fn(ButtonEntryMyCoupon* __this, uString* value);
void ButtonEntryMyCoupon__SetCategory_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin);
void ButtonEntryMyCoupon__SetCurrency_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin);
void ButtonEntryMyCoupon__Seticon_fn(ButtonEntryMyCoupon* __this, ::g::Uno::UX::FileSource* value, uObject* origin);
void ButtonEntryMyCoupon__Setid_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin);
void ButtonEntryMyCoupon__SetPrice_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin);
void ButtonEntryMyCoupon__SetShopPlace_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin);
void ButtonEntryMyCoupon__SetState_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin);
void ButtonEntryMyCoupon__SetTypeCoupon_fn(ButtonEntryMyCoupon* __this, uString* value, uObject* origin);
void ButtonEntryMyCoupon__get_ShopPlace_fn(ButtonEntryMyCoupon* __this, uString** __retval);
void ButtonEntryMyCoupon__set_ShopPlace_fn(ButtonEntryMyCoupon* __this, uString* value);
void ButtonEntryMyCoupon__get_State_fn(ButtonEntryMyCoupon* __this, uString** __retval);
void ButtonEntryMyCoupon__set_State_fn(ButtonEntryMyCoupon* __this, uString* value);
void ButtonEntryMyCoupon__get_TypeCoupon_fn(ButtonEntryMyCoupon* __this, uString** __retval);
void ButtonEntryMyCoupon__set_TypeCoupon_fn(ButtonEntryMyCoupon* __this, uString* value);

struct ButtonEntryMyCoupon : ::g::Fuse::Controls::Grid
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ButtonEntryMyCoupon_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ButtonEntryMyCoupon_typeof()->Init(), __selector1_; }
    uStrong<uString*> _field_Category;
    uStrong<uString*> _field_Currency;
    uStrong< ::g::Uno::UX::FileSource*> _field_icon;
    uStrong<uString*> _field_id;
    uStrong<uString*> _field_Price;
    uStrong<uString*> _field_ShopPlace;
    uStrong<uString*> _field_State;
    uStrong<uString*> _field_TypeCoupon;
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp10_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_File_inst;
    uStrong< ::g::Uno::UX::Property1*> temp6_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp7_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp8_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp9_Value_inst;

    void ctor_8();
    uString* Category();
    void Category(uString* value);
    uString* Currency();
    void Currency(uString* value);
    ::g::Uno::UX::FileSource* icon();
    void icon(::g::Uno::UX::FileSource* value);
    uString* id();
    void id(uString* value);
    void InitializeUX();
    uString* Price();
    void Price(uString* value);
    void SetCategory(uString* value, uObject* origin);
    void SetCurrency(uString* value, uObject* origin);
    void Seticon(::g::Uno::UX::FileSource* value, uObject* origin);
    void Setid(uString* value, uObject* origin);
    void SetPrice(uString* value, uObject* origin);
    void SetShopPlace(uString* value, uObject* origin);
    void SetState(uString* value, uObject* origin);
    void SetTypeCoupon(uString* value, uObject* origin);
    uString* ShopPlace();
    void ShopPlace(uString* value);
    uString* State();
    void State(uString* value);
    uString* TypeCoupon();
    void TypeCoupon(uString* value);
    static ButtonEntryMyCoupon* New5();
};
// }

} // ::g
