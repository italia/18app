// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/1.3.1/KeepInView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct KeepFocusInView;}}}
namespace g{namespace Fuse{namespace Input{struct FocusGainedArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class KeepFocusInView :106
// {
::g::Fuse::Node_type* KeepFocusInView_typeof();
void KeepFocusInView__ctor_4_fn(KeepFocusInView* __this);
void KeepFocusInView__New3_fn(KeepFocusInView** __retval);
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga);
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a);
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this);
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this);

struct KeepFocusInView : ::g::Fuse::Gestures::KeepInViewCommon
{
    void ctor_4();
    void OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga);
    void OnLostFocus(uObject* s, uObject* a);
    static KeepFocusInView* New3();
};
// }

}}} // ::g::Fuse::Gestures
