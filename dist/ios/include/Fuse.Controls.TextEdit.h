// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/TextControls/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextControl.h>
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
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract class TextEdit :24
// {
struct TextEdit_type : ::g::Fuse::Controls::TextControl_type
{
    void(*fp_OnActionStyleChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnAutoCapitalizationHintChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnAutoCorrectHintChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnCaretColorChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnInputHintChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnIsPasswordChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnIsReadOnlyChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnPlaceholderColorChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnPlaceholderTextChanged)(::g::Fuse::Controls::TextEdit*);
    void(*fp_OnSelectionColorChanged)(::g::Fuse::Controls::TextEdit*);
};

TextEdit_type* TextEdit_typeof();
void TextEdit__ctor_7_fn(TextEdit* __this, bool* multiline);
void TextEdit__get_ActionStyle_fn(TextEdit* __this, int* __retval);
void TextEdit__set_ActionStyle_fn(TextEdit* __this, int* value);
void TextEdit__add_ActionTriggered_fn(TextEdit* __this, uDelegate* value);
void TextEdit__remove_ActionTriggered_fn(TextEdit* __this, uDelegate* value);
void TextEdit__get_AutoCapitalizationHint_fn(TextEdit* __this, int* __retval);
void TextEdit__set_AutoCapitalizationHint_fn(TextEdit* __this, int* value);
void TextEdit__get_AutoCorrectHint_fn(TextEdit* __this, int* __retval);
void TextEdit__set_AutoCorrectHint_fn(TextEdit* __this, int* value);
void TextEdit__CalcRenderBounds_fn(TextEdit* __this, ::g::Fuse::VisualBounds** __retval);
void TextEdit__get_CaretColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval);
void TextEdit__set_CaretColor_fn(TextEdit* __this, ::g::Uno::Float4* value);
void TextEdit__get_InputHint_fn(TextEdit* __this, int* __retval);
void TextEdit__set_InputHint_fn(TextEdit* __this, int* value);
void TextEdit__get_IsPassword_fn(TextEdit* __this, bool* __retval);
void TextEdit__set_IsPassword_fn(TextEdit* __this, bool* value);
void TextEdit__get_IsReadOnly_fn(TextEdit* __this, bool* __retval);
void TextEdit__set_IsReadOnly_fn(TextEdit* __this, bool* value);
void TextEdit__OnAction_fn(TextEdit* __this, int* type, bool* __retval);
void TextEdit__OnActionStyleChanged_fn(TextEdit* __this);
void TextEdit__OnAutoCapitalizationHintChanged_fn(TextEdit* __this);
void TextEdit__OnAutoCorrectHintChanged_fn(TextEdit* __this);
void TextEdit__OnCaretColorChanged_fn(TextEdit* __this);
void TextEdit__OnInputHintChanged_fn(TextEdit* __this);
void TextEdit__OnIsPasswordChanged_fn(TextEdit* __this);
void TextEdit__OnIsReadOnlyChanged_fn(TextEdit* __this);
void TextEdit__OnPlaceholderColorChanged_fn(TextEdit* __this);
void TextEdit__OnPlaceholderTextChanged_fn(TextEdit* __this);
void TextEdit__OnSelectionColorChanged_fn(TextEdit* __this);
void TextEdit__get_PlaceholderColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval);
void TextEdit__set_PlaceholderColor_fn(TextEdit* __this, ::g::Uno::Float4* value);
void TextEdit__get_PlaceholderText_fn(TextEdit* __this, uString** __retval);
void TextEdit__set_PlaceholderText_fn(TextEdit* __this, uString* value);
void TextEdit__get_SelectionColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval);
void TextEdit__set_SelectionColor_fn(TextEdit* __this, ::g::Uno::Float4* value);
void TextEdit__get_TextTruncation_fn(TextEdit* __this, int* __retval);
void TextEdit__set_TextTruncation_fn(TextEdit* __this, int* value);

struct TextEdit : ::g::Fuse::Controls::TextControl
{
    bool _isMultiline;
    static ::g::Uno::UX::Selector ActionStylePropertyName_;
    static ::g::Uno::UX::Selector& ActionStylePropertyName() { return ActionStylePropertyName_; }
    static ::g::Uno::UX::Selector AutoCapitalizationHintPropertyName_;
    static ::g::Uno::UX::Selector& AutoCapitalizationHintPropertyName() { return AutoCapitalizationHintPropertyName_; }
    static ::g::Uno::UX::Selector AutoCorrectHintPropertyName_;
    static ::g::Uno::UX::Selector& AutoCorrectHintPropertyName() { return AutoCorrectHintPropertyName_; }
    static ::g::Uno::UX::Selector CaretColorPropertyName_;
    static ::g::Uno::UX::Selector& CaretColorPropertyName() { return CaretColorPropertyName_; }
    static ::g::Uno::UX::Selector InputHintPropertyName_;
    static ::g::Uno::UX::Selector& InputHintPropertyName() { return InputHintPropertyName_; }
    static ::g::Uno::UX::Selector IsPasswordPropertyName_;
    static ::g::Uno::UX::Selector& IsPasswordPropertyName() { return IsPasswordPropertyName_; }
    static ::g::Uno::UX::Selector IsReadOnlyPropertyName_;
    static ::g::Uno::UX::Selector& IsReadOnlyPropertyName() { return IsReadOnlyPropertyName_; }
    static ::g::Uno::UX::Selector PlaceholderColorPropertyName_;
    static ::g::Uno::UX::Selector& PlaceholderColorPropertyName() { return PlaceholderColorPropertyName_; }
    static ::g::Uno::UX::Selector PlaceholderTextPropertyName_;
    static ::g::Uno::UX::Selector& PlaceholderTextPropertyName() { return PlaceholderTextPropertyName_; }
    static ::g::Uno::UX::Selector SelectionColorPropertyName_;
    static ::g::Uno::UX::Selector& SelectionColorPropertyName() { return SelectionColorPropertyName_; }
    uStrong<uDelegate*> ActionTriggered1;

    void ctor_7(bool multiline);
    int ActionStyle();
    void ActionStyle(int value);
    void add_ActionTriggered(uDelegate* value);
    void remove_ActionTriggered(uDelegate* value);
    int AutoCapitalizationHint();
    void AutoCapitalizationHint(int value);
    int AutoCorrectHint();
    void AutoCorrectHint(int value);
    ::g::Uno::Float4 CaretColor();
    void CaretColor(::g::Uno::Float4 value);
    int InputHint();
    void InputHint(int value);
    bool IsPassword();
    void IsPassword(bool value);
    bool IsReadOnly();
    void IsReadOnly(bool value);
    bool OnAction(int type);
    void OnActionStyleChanged() { (((TextEdit_type*)__type)->fp_OnActionStyleChanged)(this); }
    void OnAutoCapitalizationHintChanged() { (((TextEdit_type*)__type)->fp_OnAutoCapitalizationHintChanged)(this); }
    void OnAutoCorrectHintChanged() { (((TextEdit_type*)__type)->fp_OnAutoCorrectHintChanged)(this); }
    void OnCaretColorChanged() { (((TextEdit_type*)__type)->fp_OnCaretColorChanged)(this); }
    void OnInputHintChanged() { (((TextEdit_type*)__type)->fp_OnInputHintChanged)(this); }
    void OnIsPasswordChanged() { (((TextEdit_type*)__type)->fp_OnIsPasswordChanged)(this); }
    void OnIsReadOnlyChanged() { (((TextEdit_type*)__type)->fp_OnIsReadOnlyChanged)(this); }
    void OnPlaceholderColorChanged() { (((TextEdit_type*)__type)->fp_OnPlaceholderColorChanged)(this); }
    void OnPlaceholderTextChanged() { (((TextEdit_type*)__type)->fp_OnPlaceholderTextChanged)(this); }
    void OnSelectionColorChanged() { (((TextEdit_type*)__type)->fp_OnSelectionColorChanged)(this); }
    ::g::Uno::Float4 PlaceholderColor();
    void PlaceholderColor(::g::Uno::Float4 value);
    uString* PlaceholderText();
    void PlaceholderText(uString* value);
    ::g::Uno::Float4 SelectionColor();
    void SelectionColor(::g::Uno::Float4 value);
    static void OnActionStyleChanged(TextEdit* __this) { TextEdit__OnActionStyleChanged_fn(__this); }
    static void OnAutoCapitalizationHintChanged(TextEdit* __this) { TextEdit__OnAutoCapitalizationHintChanged_fn(__this); }
    static void OnAutoCorrectHintChanged(TextEdit* __this) { TextEdit__OnAutoCorrectHintChanged_fn(__this); }
    static void OnCaretColorChanged(TextEdit* __this) { TextEdit__OnCaretColorChanged_fn(__this); }
    static void OnInputHintChanged(TextEdit* __this) { TextEdit__OnInputHintChanged_fn(__this); }
    static void OnIsPasswordChanged(TextEdit* __this) { TextEdit__OnIsPasswordChanged_fn(__this); }
    static void OnIsReadOnlyChanged(TextEdit* __this) { TextEdit__OnIsReadOnlyChanged_fn(__this); }
    static void OnPlaceholderColorChanged(TextEdit* __this) { TextEdit__OnPlaceholderColorChanged_fn(__this); }
    static void OnPlaceholderTextChanged(TextEdit* __this) { TextEdit__OnPlaceholderTextChanged_fn(__this); }
    static void OnSelectionColorChanged(TextEdit* __this) { TextEdit__OnSelectionColorChanged_fn(__this); }
};
// }

}}} // ::g::Fuse::Controls
