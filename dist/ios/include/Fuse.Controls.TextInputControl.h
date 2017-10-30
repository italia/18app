// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/TextControls/TextInputControl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct TextInputControl;}}}
namespace g{namespace Fuse{namespace Gestures{struct Tapped;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class TextInputControl :26
// {
struct TextInputControl_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Triggers::IValue interface17;
};

TextInputControl_type* TextInputControl_typeof();
void TextInputControl__ctor_6_fn(TextInputControl* __this, ::g::Fuse::Controls::TextEdit* editor);
void TextInputControl__get_Editor_fn(TextInputControl* __this, ::g::Fuse::Controls::TextEdit** __retval);
void TextInputControl__FocusDelegator_fn(TextInputControl* __this, ::g::Fuse::Visual** __retval);
void TextInputControl__get_Font_fn(TextInputControl* __this, ::g::Fuse::Font** __retval);
void TextInputControl__set_Font_fn(TextInputControl* __this, ::g::Fuse::Font* value);
void TextInputControl__get_FontSize_fn(TextInputControl* __this, float* __retval);
void TextInputControl__set_FontSize_fn(TextInputControl* __this, float* value);
void TextInputControl__get_InputHint_fn(TextInputControl* __this, int* __retval);
void TextInputControl__set_InputHint_fn(TextInputControl* __this, int* value);
void TextInputControl__get_MaxLength_fn(TextInputControl* __this, int* __retval);
void TextInputControl__set_MaxLength_fn(TextInputControl* __this, int* value);
void TextInputControl__OnPropertyChanged2_fn(TextInputControl* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void TextInputControl__OnRooted_fn(TextInputControl* __this);
void TextInputControl__OnTapped_fn(TextInputControl* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextInputControl__OnUnrooted_fn(TextInputControl* __this);
void TextInputControl__SetValue_fn(TextInputControl* __this, uString* v, uObject* origin);
void TextInputControl__get_Value_fn(TextInputControl* __this, uString** __retval);
void TextInputControl__set_Value_fn(TextInputControl* __this, uString* value);
void TextInputControl__add_ValueChanged_fn(TextInputControl* __this, uDelegate* value);
void TextInputControl__remove_ValueChanged_fn(TextInputControl* __this, uDelegate* value);

struct TextInputControl : ::g::Fuse::Controls::LayoutControl
{
    uStrong< ::g::Fuse::Controls::TextEdit*> _editor;
    uStrong< ::g::Fuse::Gestures::Tapped*> _tapped;

    void ctor_6(::g::Fuse::Controls::TextEdit* editor);
    ::g::Fuse::Controls::TextEdit* Editor();
    ::g::Fuse::Visual* FocusDelegator();
    ::g::Fuse::Font* Font();
    void Font(::g::Fuse::Font* value);
    float FontSize();
    void FontSize(float value);
    int InputHint();
    void InputHint(int value);
    int MaxLength();
    void MaxLength(int value);
    void OnTapped(uObject* sender, ::g::Uno::EventArgs* args);
    void SetValue(uString* v, uObject* origin);
    uString* Value();
    void Value(uString* value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Controls
