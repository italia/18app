// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/CollapsibleEntry.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
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
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CollapsibleEntry;}
namespace g{struct P;}

namespace g{

// public partial sealed class CollapsibleEntry :2
// {
::g::Fuse::Controls::Panel_type* CollapsibleEntry_typeof();
void CollapsibleEntry__ctor_8_fn(CollapsibleEntry* __this);
void CollapsibleEntry__get_Description_fn(CollapsibleEntry* __this, uString** __retval);
void CollapsibleEntry__set_Description_fn(CollapsibleEntry* __this, uString* value);
void CollapsibleEntry__InitializeUX_fn(CollapsibleEntry* __this);
void CollapsibleEntry__New5_fn(CollapsibleEntry** __retval);
void CollapsibleEntry__SetDescription_fn(CollapsibleEntry* __this, uString* value, uObject* origin);
void CollapsibleEntry__SetTitle_fn(CollapsibleEntry* __this, uString* value, uObject* origin);
void CollapsibleEntry__get_Title_fn(CollapsibleEntry* __this, uString** __retval);
void CollapsibleEntry__set_Title_fn(CollapsibleEntry* __this, uString* value);

struct CollapsibleEntry : ::g::Fuse::Controls::StackPanel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CollapsibleEntry_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CollapsibleEntry_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CollapsibleEntry_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CollapsibleEntry_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return CollapsibleEntry_typeof()->Init(), __selector4_; }
    uStrong<uString*> _field_Description;
    uStrong<uString*> _field_Title;
    uStrong< ::g::P*> description;
    uStrong< ::g::Uno::UX::Property1*> description_LayoutRole_inst;
    uStrong< ::g::Uno::UX::Property1*> description_Value_inst;
    uStrong< ::g::P*> icon;
    uStrong< ::g::Uno::UX::Property1*> icon_Value_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showDescription;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_8();
    uString* Description();
    void Description(uString* value);
    void InitializeUX();
    void SetDescription(uString* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Title();
    void Title(uString* value);
    static CollapsibleEntry* New5();
};
// }

} // ::g
