// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/TextControls/MobileTextEdit.Forwarding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Input.INotifyFocus.h>
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
namespace g{namespace Fuse{namespace Controls{struct MobileTextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct SingleViewHost;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal partial sealed class MobileTextEdit :7
// {
struct MobileTextEdit_type : ::g::Fuse::Controls::TextEdit_type
{
    ::g::Fuse::Controls::Native::ITextEditHost interface18;
    ::g::Fuse::Input::INotifyFocus interface19;
};

MobileTextEdit_type* MobileTextEdit_typeof();
void MobileTextEdit__ctor_8_fn(MobileTextEdit* __this, bool* multiline);
void MobileTextEdit__DisableRenderToTexture_fn(MobileTextEdit* __this);
void MobileTextEdit__EnabledRenderToTexture_fn(MobileTextEdit* __this);
void MobileTextEdit__FuseControlsNativeITextEditHostOnFocusGained_fn(MobileTextEdit* __this);
void MobileTextEdit__FuseControlsNativeITextEditHostOnFocusLost_fn(MobileTextEdit* __this);
void MobileTextEdit__FuseControlsNativeITextEditHostOnInputAction_fn(MobileTextEdit* __this, int* type, bool* __retval);
void MobileTextEdit__FuseControlsNativeITextEditHostOnValueChanged_fn(MobileTextEdit* __this, uString* newValue);
void MobileTextEdit__FuseInputINotifyFocusOnFocusGained_fn(MobileTextEdit* __this);
void MobileTextEdit__FuseInputINotifyFocusOnFocusLost_fn(MobileTextEdit* __this);
void MobileTextEdit__GetITextEdit_fn(MobileTextEdit* __this, uObject** __retval);
void MobileTextEdit__InstatiateRenderer_fn(MobileTextEdit* __this, uObject** __retval);
void MobileTextEdit__InstatiateTextEdit_fn(MobileTextEdit* __this, uObject** __retval);
void MobileTextEdit__InvalidateNativeViewHost_fn(MobileTextEdit* __this);
void MobileTextEdit__InvalidateRenderer_fn(MobileTextEdit* __this);
void MobileTextEdit__get_NativeEdit_fn(MobileTextEdit* __this, uObject** __retval);
void MobileTextEdit__New3_fn(bool* multiline, MobileTextEdit** __retval);
void MobileTextEdit__OnActionStyleChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnAutoCapitalizationHintChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnAutoCorrectHintChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnCaretColorChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnInputHintChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnIsPasswordChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnIsReadOnlyChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnPlaceholderColorChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnPlaceholderTextChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnRooted_fn(MobileTextEdit* __this);
void MobileTextEdit__OnSelectionColorChanged_fn(MobileTextEdit* __this);
void MobileTextEdit__OnUnrooted_fn(MobileTextEdit* __this);
void MobileTextEdit__OnValueChanged_fn(MobileTextEdit* __this, uObject* origin);
void MobileTextEdit__PushPropertiesToNativeView_fn(MobileTextEdit* __this);
void MobileTextEdit__get_RenderValue_fn(MobileTextEdit* __this, uString** __retval);

struct MobileTextEdit : ::g::Fuse::Controls::TextEdit
{
    bool _isMultiline1;
    uStrong< ::g::Fuse::Controls::SingleViewHost*> _singelViewHost;
    uStrong<uObject*> _textEdit;

    void ctor_8(bool multiline);
    void DisableRenderToTexture();
    void EnabledRenderToTexture();
    uObject* GetITextEdit();
    uObject* InstatiateRenderer();
    uObject* InstatiateTextEdit();
    void InvalidateNativeViewHost();
    uObject* NativeEdit();
    static MobileTextEdit* New3(bool multiline);
};
// }

}}} // ::g::Fuse::Controls
