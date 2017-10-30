// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Backgrounds/BottomFrameBackground.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
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
namespace g{namespace Fuse{namespace Controls{struct BottomFrameBackground;}}}
namespace g{namespace Fuse{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class BottomFrameBackground :34
// {
::g::Fuse::Controls::Control_type* BottomFrameBackground_typeof();
void BottomFrameBackground__ctor_5_fn(BottomFrameBackground* __this);
void BottomFrameBackground__GetContentSize_fn(BottomFrameBackground* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void BottomFrameBackground__get_IncludesKeyboard_fn(BottomFrameBackground* __this, bool* __retval);
void BottomFrameBackground__set_IncludesKeyboard_fn(BottomFrameBackground* __this, bool* value);
void BottomFrameBackground__get_KeyboardVisibleThreshold_fn(BottomFrameBackground* __this, float* __retval);
void BottomFrameBackground__set_KeyboardVisibleThreshold_fn(BottomFrameBackground* __this, float* value);
void BottomFrameBackground__OnFrameResized_fn(BottomFrameBackground* __this, uObject* sender, ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
void BottomFrameBackground__OnRooted_fn(BottomFrameBackground* __this);
void BottomFrameBackground__OnUnrooted_fn(BottomFrameBackground* __this);

struct BottomFrameBackground : ::g::Fuse::Controls::Control
{
    float _height1;
    bool _includesKeyboard;
    float _keyboardVisibleThreshold;

    void ctor_5();
    bool IncludesKeyboard();
    void IncludesKeyboard(bool value);
    float KeyboardVisibleThreshold();
    void KeyboardVisibleThreshold(float value);
    void OnFrameResized(uObject* sender, ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
};
// }

}}} // ::g::Fuse::Controls
