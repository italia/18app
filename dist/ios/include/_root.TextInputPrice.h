// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/TextInputPrice.g.uno.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct TextInputPrice;}

namespace g{

// public partial sealed class TextInputPrice :2
// {
::g::Fuse::Controls::Panel_type* TextInputPrice_typeof();
void TextInputPrice__ctor_7_fn(TextInputPrice* __this);
void TextInputPrice__InitializeUX_fn(TextInputPrice* __this);
void TextInputPrice__New4_fn(TextInputPrice** __retval);
void TextInputPrice__get_PlaceholderText_fn(TextInputPrice* __this, uString** __retval);
void TextInputPrice__set_PlaceholderText_fn(TextInputPrice* __this, uString* value);
void TextInputPrice__SetPlaceholderText_fn(TextInputPrice* __this, uString* value, uObject* origin);
void TextInputPrice__SetValue_fn(TextInputPrice* __this, uObject* value, uObject* origin);
void TextInputPrice__get_Value_fn(TextInputPrice* __this, uObject** __retval);
void TextInputPrice__set_Value_fn(TextInputPrice* __this, uObject* value);

struct TextInputPrice : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TextInputPrice_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return TextInputPrice_typeof()->Init(), __selector1_; }
    uStrong<uString*> _field_PlaceholderText;
    uStrong<uObject*> _field_Value;
    uStrong< ::g::Uno::UX::Property1*> temp_PlaceholderText_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_7();
    void InitializeUX();
    uString* PlaceholderText();
    void PlaceholderText(uString* value);
    void SetPlaceholderText(uString* value, uObject* origin);
    void SetValue(uObject* value, uObject* origin);
    uObject* Value();
    void Value(uObject* value);
    static TextInputPrice* New4();
};
// }

} // ::g
