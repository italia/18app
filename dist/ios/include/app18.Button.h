// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.Button.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace app18{struct Button;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace app18{

// public partial sealed class Button :4
// {
::g::Fuse::Controls::Panel_type* Button_typeof();
void Button__ctor_7_fn(Button* __this);
void Button__get_BackgroundColor_fn(Button* __this, ::g::Uno::Float4* __retval);
void Button__set_BackgroundColor_fn(Button* __this, ::g::Uno::Float4* value);
void Button__InitializeUX_fn(Button* __this);
void Button__New4_fn(Button** __retval);
void Button__SetBackgroundColor_fn(Button* __this, ::g::Uno::Float4* value, uObject* origin);
void Button__SetValue_fn(Button* __this, uString* value, uObject* origin);
void Button__get_Value_fn(Button* __this, uString** __retval);
void Button__set_Value_fn(Button* __this, uString* value);

struct Button : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Button_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Button_typeof()->Init(), __selector1_; }
    ::g::Uno::Float4 _field_BackgroundColor;
    uStrong<uString*> _field_Value;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_7();
    ::g::Uno::Float4 BackgroundColor();
    void BackgroundColor(::g::Uno::Float4 value);
    void InitializeUX();
    void SetBackgroundColor(::g::Uno::Float4 value, uObject* origin);
    void SetValue(uString* value, uObject* origin);
    uString* Value();
    void Value(uString* value);
    static Button* New4();
};
// }

}} // ::g::app18
