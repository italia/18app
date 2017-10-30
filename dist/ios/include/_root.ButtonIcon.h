// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ButtonIcon.g.uno.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ButtonIcon;}

namespace g{

// public partial sealed class ButtonIcon :2
// {
::g::Fuse::Controls::Panel_type* ButtonIcon_typeof();
void ButtonIcon__ctor_8_fn(ButtonIcon* __this);
void ButtonIcon__InitializeUX_fn(ButtonIcon* __this);
void ButtonIcon__New5_fn(ButtonIcon** __retval);
void ButtonIcon__SetTextColor_fn(ButtonIcon* __this, ::g::Uno::Float4* value, uObject* origin);
void ButtonIcon__SetValue_fn(ButtonIcon* __this, uString* value, uObject* origin);
void ButtonIcon__get_TextColor_fn(ButtonIcon* __this, ::g::Uno::Float4* __retval);
void ButtonIcon__set_TextColor_fn(ButtonIcon* __this, ::g::Uno::Float4* value);
void ButtonIcon__get_Value_fn(ButtonIcon* __this, uString** __retval);
void ButtonIcon__set_Value_fn(ButtonIcon* __this, uString* value);

struct ButtonIcon : ::g::Fuse::Controls::StackPanel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ButtonIcon_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ButtonIcon_typeof()->Init(), __selector1_; }
    ::g::Uno::Float4 _field_TextColor;
    uStrong<uString*> _field_Value;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_8();
    void InitializeUX();
    void SetTextColor(::g::Uno::Float4 value, uObject* origin);
    void SetValue(uString* value, uObject* origin);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    uString* Value();
    void Value(uString* value);
    static ButtonIcon* New5();
};
// }

} // ::g
