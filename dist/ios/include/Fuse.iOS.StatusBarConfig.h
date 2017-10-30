// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.3.1/StatusBarConfig.uno.
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
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace iOS{

// public sealed class StatusBarConfig :28
// {
::g::Fuse::Node_type* StatusBarConfig_typeof();
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this);
void StatusBarConfig__get_Animation_fn(StatusBarConfig* __this, int* __retval);
void StatusBarConfig__set_Animation_fn(StatusBarConfig* __this, int* value);
void StatusBarConfig__Apply_fn();
void StatusBarConfig__GetAnimation_fn(int* __retval);
void StatusBarConfig__GetIsVisible_fn(bool* __retval);
void StatusBarConfig__GetStyle_fn(int* __retval);
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval);
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value);
void StatusBarConfig__New2_fn(StatusBarConfig** __retval);
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this);
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this);
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int* __retval);
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int* value);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    int _animation;
    bool _hasAnimation;
    bool _hasIsVisible;
    bool _hasStyle;
    bool _isVisible;
    static uSStrong< ::g::Uno::Collections::List*> _stack_;
    static uSStrong< ::g::Uno::Collections::List*>& _stack() { return _stack_; }
    int _style;

    void ctor_3();
    int Animation();
    void Animation(int value);
    bool IsVisible();
    void IsVisible(bool value);
    int Style();
    void Style(int value);
    static void Apply();
    static int GetAnimation();
    static bool GetIsVisible();
    static int GetStyle();
    static StatusBarConfig* New2();
};
// }

}}} // ::g::Fuse::iOS
