// This file was generated based on /usr/local/share/uno/Packages/Fuse.Android/1.3.1/StatusBarConfig.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Android{struct StatusBarConfig;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Android{

// public sealed class StatusBarConfig :82
// {
::g::Fuse::Node_type* StatusBarConfig_typeof();
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this);
void StatusBarConfig__get_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* __retval);
void StatusBarConfig__set_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* value);
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval);
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value);
void StatusBarConfig__New2_fn(StatusBarConfig** __retval);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    static bool _isVisible_;
    static bool& _isVisible() { return _isVisible_; }

    void ctor_3();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    bool IsVisible();
    void IsVisible(bool value);
    static StatusBarConfig* New2();
};
// }

}}} // ::g::Fuse::Android
