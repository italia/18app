// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ButtonEntry.g.uno.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ButtonEntry;}

namespace g{

// public partial class ButtonEntry :2
// {
::g::Fuse::Controls::Panel_type* ButtonEntry_typeof();
void ButtonEntry__ctor_8_fn(ButtonEntry* __this);
void ButtonEntry__get_icon_fn(ButtonEntry* __this, ::g::Uno::UX::FileSource** __retval);
void ButtonEntry__set_icon_fn(ButtonEntry* __this, ::g::Uno::UX::FileSource* value);
void ButtonEntry__InitializeUX_fn(ButtonEntry* __this);
void ButtonEntry__New5_fn(ButtonEntry** __retval);
void ButtonEntry__Seticon_fn(ButtonEntry* __this, ::g::Uno::UX::FileSource* value, uObject* origin);
void ButtonEntry__SetTextColor_fn(ButtonEntry* __this, ::g::Uno::Float4* value, uObject* origin);
void ButtonEntry__SetValue_fn(ButtonEntry* __this, uString* value, uObject* origin);
void ButtonEntry__get_TextColor_fn(ButtonEntry* __this, ::g::Uno::Float4* __retval);
void ButtonEntry__set_TextColor_fn(ButtonEntry* __this, ::g::Uno::Float4* value);
void ButtonEntry__get_Value_fn(ButtonEntry* __this, uString** __retval);
void ButtonEntry__set_Value_fn(ButtonEntry* __this, uString* value);

struct ButtonEntry : ::g::Fuse::Controls::Grid
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ButtonEntry_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ButtonEntry_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ButtonEntry_typeof()->Init(), __selector2_; }
    uStrong< ::g::Uno::UX::FileSource*> _field_icon;
    ::g::Uno::Float4 _field_TextColor;
    uStrong<uString*> _field_Value;
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;

    void ctor_8();
    ::g::Uno::UX::FileSource* icon();
    void icon(::g::Uno::UX::FileSource* value);
    void InitializeUX();
    void Seticon(::g::Uno::UX::FileSource* value, uObject* origin);
    void SetTextColor(::g::Uno::Float4 value, uObject* origin);
    void SetValue(uString* value, uObject* origin);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    uString* Value();
    void Value(uString* value);
    static ButtonEntry* New5();
};
// }

} // ::g
