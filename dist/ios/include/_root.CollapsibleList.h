// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/CollapsibleList.g.uno.
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
namespace g{struct CollapsibleList;}

namespace g{

// public partial sealed class CollapsibleList :2
// {
::g::Fuse::Controls::ScrollViewBase_type* CollapsibleList_typeof();
void CollapsibleList__ctor_8_fn(CollapsibleList* __this);
void CollapsibleList__InitializeUX1_fn(CollapsibleList* __this);
void CollapsibleList__get_Items_fn(CollapsibleList* __this, uObject** __retval);
void CollapsibleList__set_Items_fn(CollapsibleList* __this, uObject* value);
void CollapsibleList__New5_fn(CollapsibleList** __retval);
void CollapsibleList__SetItems_fn(CollapsibleList* __this, uObject* value, uObject* origin);
void CollapsibleList__SetTitle_fn(CollapsibleList* __this, uString* value, uObject* origin);
void CollapsibleList__get_Title_fn(CollapsibleList* __this, uString** __retval);
void CollapsibleList__set_Title_fn(CollapsibleList* __this, uString* value);

struct CollapsibleList : ::g::Fuse::Controls::ScrollView
{
    static ::g::Uno::UX::Selector __selector01_;
    static ::g::Uno::UX::Selector& __selector01() { return CollapsibleList_typeof()->Init(), __selector01_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CollapsibleList_typeof()->Init(), __selector1_; }
    uStrong<uObject*> _field_Items;
    uStrong<uString*> _field_Title;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Items_inst;

    void ctor_8();
    void InitializeUX1();
    uObject* Items();
    void Items(uObject* value);
    void SetItems(uObject* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Title();
    void Title(uString* value);
    static CollapsibleList* New5();
};
// }

} // ::g
