// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ListMyCoupon.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.ScrollView.h>
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
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ListMyCoupon;}

namespace g{

// public partial sealed class ListMyCoupon :2
// {
::g::Fuse::Controls::ScrollViewBase_type* ListMyCoupon_typeof();
void ListMyCoupon__ctor_8_fn(ListMyCoupon* __this);
void ListMyCoupon__InitializeUX1_fn(ListMyCoupon* __this);
void ListMyCoupon__get_Items_fn(ListMyCoupon* __this, uObject** __retval);
void ListMyCoupon__set_Items_fn(ListMyCoupon* __this, uObject* value);
void ListMyCoupon__New5_fn(ListMyCoupon** __retval);
void ListMyCoupon__get_Selected_fn(ListMyCoupon* __this, uObject** __retval);
void ListMyCoupon__set_Selected_fn(ListMyCoupon* __this, uObject* value);
void ListMyCoupon__SetItems_fn(ListMyCoupon* __this, uObject* value, uObject* origin);
void ListMyCoupon__SetSelected_fn(ListMyCoupon* __this, uObject* value, uObject* origin);
void ListMyCoupon__SetTitle_fn(ListMyCoupon* __this, uString* value, uObject* origin);
void ListMyCoupon__get_Title_fn(ListMyCoupon* __this, uString** __retval);
void ListMyCoupon__set_Title_fn(ListMyCoupon* __this, uString* value);

struct ListMyCoupon : ::g::Fuse::Controls::ScrollView
{
    static ::g::Uno::UX::Selector __selector01_;
    static ::g::Uno::UX::Selector& __selector01() { return ListMyCoupon_typeof()->Init(), __selector01_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListMyCoupon_typeof()->Init(), __selector1_; }
    uStrong<uObject*> _field_Items;
    uStrong<uObject*> _field_Selected;
    uStrong<uString*> _field_Title;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Items_inst;

    void ctor_8();
    void InitializeUX1();
    uObject* Items();
    void Items(uObject* value);
    uObject* Selected();
    void Selected(uObject* value);
    void SetItems(uObject* value, uObject* origin);
    void SetSelected(uObject* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Title();
    void Title(uString* value);
    static ListMyCoupon* New5();
};
// }

} // ::g
