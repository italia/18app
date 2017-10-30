// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/TextControls/TextControl.Forwarding.uno.
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
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class TextControl :7
// {
struct TextControl_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Triggers::IValue interface17;
    void(*fp_InvalidateRenderer)(::g::Fuse::Controls::TextControl*);
    void(*fp_OnValueChanged)(::g::Fuse::Controls::TextControl*, uObject*);
    void(*fp_get_RenderValue)(::g::Fuse::Controls::TextControl*, uString**);
    void(*fp_get_TextTruncation)(::g::Fuse::Controls::TextControl*, int*);
    void(*fp_set_TextTruncation)(::g::Fuse::Controls::TextControl*, int*);
};

TextControl_type* TextControl_typeof();
void TextControl__ctor_6_fn(TextControl* __this);
void TextControl__ArrangePaddingBox_fn(TextControl* __this, ::g::Fuse::LayoutParams* lp);
void TextControl__CalcRenderBounds_fn(TextControl* __this, ::g::Fuse::VisualBounds** __retval);
void TextControl__get_Color_fn(TextControl* __this, ::g::Uno::Float4* __retval);
void TextControl__set_Color_fn(TextControl* __this, ::g::Uno::Float4* value);
void TextControl__DrawVisual_fn(TextControl* __this, ::g::Fuse::DrawContext* dc);
void TextControl__EnforceMaxLength_fn(TextControl* __this, uString** v, bool* __retval);
void TextControl__FastTrackDrawWithOpacity_fn(TextControl* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void TextControl__get_Font_fn(TextControl* __this, ::g::Fuse::Font** __retval);
void TextControl__set_Font_fn(TextControl* __this, ::g::Fuse::Font* value);
void TextControl__get_FontSize_fn(TextControl* __this, float* __retval);
void TextControl__set_FontSize_fn(TextControl* __this, float* value);
void TextControl__GetContentSize_fn(TextControl* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextControl__GetITextView_fn(TextControl* __this, uObject** __retval);
void TextControl__get_HitTestLocalVisualBounds_fn(TextControl* __this, ::g::Fuse::VisualBounds** __retval);
void TextControl__InitializeUX_fn(TextControl* __this);
void TextControl__InvalidateRenderer_fn(TextControl* __this);
void TextControl__InvalidateTextRenderer_fn(TextControl* __this);
void TextControl__get_LineSpacing_fn(TextControl* __this, float* __retval);
void TextControl__set_LineSpacing_fn(TextControl* __this, float* value);
void TextControl__get_MaxLength_fn(TextControl* __this, int* __retval);
void TextControl__set_MaxLength_fn(TextControl* __this, int* value);
void TextControl__OnColorChanged_fn(TextControl* __this, uObject* origin);
void TextControl__OnFontChanged_fn(TextControl* __this);
void TextControl__OnFontSizeChanged_fn(TextControl* __this);
void TextControl__OnHitTestLocalVisual_fn(TextControl* __this, ::g::Fuse::HitTestContext* htc);
void TextControl__OnLineSpacingChanged_fn(TextControl* __this);
void TextControl__OnMaxLengthChanged_fn(TextControl* __this);
void TextControl__OnRooted_fn(TextControl* __this);
void TextControl__OnTextAlignmentChanged_fn(TextControl* __this);
void TextControl__OnTextTruncationChanged_fn(TextControl* __this);
void TextControl__OnTextWrappingChanged_fn(TextControl* __this);
void TextControl__OnUnrooted_fn(TextControl* __this);
void TextControl__OnValueChanged_fn(TextControl* __this, uObject* origin);
void TextControl__PushPropertiesToNativeView_fn(TextControl* __this);
void TextControl__get_RenderValue_fn(TextControl* __this, uString** __retval);
void TextControl__SetColor_fn(TextControl* __this, ::g::Uno::Float4* color, uObject* origin);
void TextControl__SetValue_fn(TextControl* __this, uString* value, uObject* origin);
void TextControl__SetValueInternal_fn(TextControl* __this, uString* newValue);
void TextControl__SoftDispose_fn(TextControl* __this);
void TextControl__get_TextAlignment_fn(TextControl* __this, int* __retval);
void TextControl__set_TextAlignment_fn(TextControl* __this, int* value);
void TextControl__get_TextColor_fn(TextControl* __this, ::g::Uno::Float4* __retval);
void TextControl__set_TextColor_fn(TextControl* __this, ::g::Uno::Float4* value);
void TextControl__get_TextRendererFactory_fn(uDelegate** __retval);
void TextControl__set_TextRendererFactory_fn(uDelegate* value);
void TextControl__get_TextTruncation_fn(TextControl* __this, int* __retval);
void TextControl__set_TextTruncation_fn(TextControl* __this, int* value);
void TextControl__get_TextWrapping_fn(TextControl* __this, int* __retval);
void TextControl__set_TextWrapping_fn(TextControl* __this, int* value);
void TextControl__get_Value_fn(TextControl* __this, uString** __retval);
void TextControl__set_Value_fn(TextControl* __this, uString* value);
void TextControl__add_ValueChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__remove_ValueChanged_fn(TextControl* __this, uDelegate* value);

struct TextControl : ::g::Fuse::Controls::LayoutControl
{
    ::g::Uno::Float4 _color;
    uStrong< ::g::Fuse::Font*> _font;
    float _fontSize;
    int _maxLength;
    uStrong<uObject*> _textRenderer;
    uStrong<uString*> _value;
    static ::g::Uno::UX::Selector ColorPropertyName_;
    static ::g::Uno::UX::Selector& ColorPropertyName() { return TextControl_typeof()->Init(), ColorPropertyName_; }
    static ::g::Uno::UX::Selector FontPropertyName_;
    static ::g::Uno::UX::Selector& FontPropertyName() { return TextControl_typeof()->Init(), FontPropertyName_; }
    static ::g::Uno::UX::Selector FontSizePropertyName_;
    static ::g::Uno::UX::Selector& FontSizePropertyName() { return TextControl_typeof()->Init(), FontSizePropertyName_; }
    static ::g::Uno::UX::Selector LineSpacingPropertyName_;
    static ::g::Uno::UX::Selector& LineSpacingPropertyName() { return TextControl_typeof()->Init(), LineSpacingPropertyName_; }
    static ::g::Uno::UX::Selector LoadAsyncPropertyName_;
    static ::g::Uno::UX::Selector& LoadAsyncPropertyName() { return TextControl_typeof()->Init(), LoadAsyncPropertyName_; }
    static ::g::Uno::UX::Selector MaxLengthPropertyName_;
    static ::g::Uno::UX::Selector& MaxLengthPropertyName() { return TextControl_typeof()->Init(), MaxLengthPropertyName_; }
    static ::g::Uno::UX::Selector TextAlignmentPropertyName_;
    static ::g::Uno::UX::Selector& TextAlignmentPropertyName() { return TextControl_typeof()->Init(), TextAlignmentPropertyName_; }
    static ::g::Uno::UX::Selector TextColorPropertyName_;
    static ::g::Uno::UX::Selector& TextColorPropertyName() { return TextControl_typeof()->Init(), TextColorPropertyName_; }
    static ::g::Uno::UX::Selector TextTruncationPropertyName_;
    static ::g::Uno::UX::Selector& TextTruncationPropertyName() { return TextControl_typeof()->Init(), TextTruncationPropertyName_; }
    static ::g::Uno::UX::Selector TextWrappingPropertyName_;
    static ::g::Uno::UX::Selector& TextWrappingPropertyName() { return TextControl_typeof()->Init(), TextWrappingPropertyName_; }
    static ::g::Uno::UX::Selector ValuePropertyName_;
    static ::g::Uno::UX::Selector& ValuePropertyName() { return TextControl_typeof()->Init(), ValuePropertyName_; }
    static uSStrong<uDelegate*> _TextRendererFactory_;
    static uSStrong<uDelegate*>& _TextRendererFactory() { return TextControl_typeof()->Init(), _TextRendererFactory_; }
    uStrong<uDelegate*> ValueChanged1;

    void ctor_6();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    bool EnforceMaxLength(uString** v);
    ::g::Fuse::Font* Font();
    void Font(::g::Fuse::Font* value);
    float FontSize();
    void FontSize(float value);
    uObject* GetITextView();
    void InitializeUX();
    void InvalidateRenderer() { (((TextControl_type*)__type)->fp_InvalidateRenderer)(this); }
    void InvalidateTextRenderer();
    float LineSpacing();
    void LineSpacing(float value);
    int MaxLength();
    void MaxLength(int value);
    void OnColorChanged(uObject* origin);
    void OnFontChanged();
    void OnFontSizeChanged();
    void OnLineSpacingChanged();
    void OnMaxLengthChanged();
    void OnTextAlignmentChanged();
    void OnTextTruncationChanged();
    void OnTextWrappingChanged();
    void OnValueChanged(uObject* origin) { (((TextControl_type*)__type)->fp_OnValueChanged)(this, origin); }
    uString* RenderValue() { uString* __retval; return (((TextControl_type*)__type)->fp_get_RenderValue)(this, &__retval), __retval; }
    void SetColor(::g::Uno::Float4 color, uObject* origin);
    void SetValue(uString* value, uObject* origin);
    void SetValueInternal(uString* newValue);
    int TextAlignment();
    void TextAlignment(int value);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    int TextTruncation() { int __retval; return (((TextControl_type*)__type)->fp_get_TextTruncation)(this, &__retval), __retval; }
    void TextTruncation(int value) { (((TextControl_type*)__type)->fp_set_TextTruncation)(this, &value); }
    int TextWrapping();
    void TextWrapping(int value);
    uString* Value();
    void Value(uString* value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static void InvalidateRenderer(TextControl* __this) { TextControl__InvalidateRenderer_fn(__this); }
    static void OnValueChanged(TextControl* __this, uObject* origin) { TextControl__OnValueChanged_fn(__this, origin); }
    static uString* RenderValue(TextControl* __this) { uString* __retval; return TextControl__get_RenderValue_fn(__this, &__retval), __retval; }
    static uDelegate* TextRendererFactory();
    static void TextRendererFactory(uDelegate* value);
    static int TextTruncation(TextControl* __this) { int __retval; return TextControl__get_TextTruncation_fn(__this, &__retval), __retval; }
    static void TextTruncation(TextControl* __this, int value) { TextControl__set_TextTruncation_fn(__this, &value); }
};
// }

}}} // ::g::Fuse::Controls
