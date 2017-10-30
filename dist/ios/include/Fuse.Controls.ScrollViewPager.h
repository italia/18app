// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/ScrollViewPager.ScriptClass.uno.
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
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollViewPager;}}}
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ScrollViewPager :7
// {
struct ScrollViewPager_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface6;
};

ScrollViewPager_type* ScrollViewPager_typeof();
void ScrollViewPager__check_fn(::g::Fuse::Scripting::Context* c, ScrollViewPager* s, uArray* args);
void ScrollViewPager__Check_fn(ScrollViewPager* __this);
void ScrollViewPager__CheckPosition_fn(ScrollViewPager* __this);
void ScrollViewPager__CheckSizing_fn(ScrollViewPager* __this);
void ScrollViewPager__get_Each_fn(ScrollViewPager* __this, ::g::Fuse::Reactive::Each** __retval);
void ScrollViewPager__set_Each_fn(ScrollViewPager* __this, ::g::Fuse::Reactive::Each* value);
void ScrollViewPager__get_EndRange_fn(ScrollViewPager* __this, float* __retval);
void ScrollViewPager__set_EndRange_fn(ScrollViewPager* __this, float* value);
void ScrollViewPager__OnRooted_fn(ScrollViewPager* __this);
void ScrollViewPager__OnUnrooted_fn(ScrollViewPager* __this);
void ScrollViewPager__add_ReachedEnd_fn(ScrollViewPager* __this, uDelegate* value);
void ScrollViewPager__remove_ReachedEnd_fn(ScrollViewPager* __this, uDelegate* value);
void ScrollViewPager__add_ReachedStart_fn(ScrollViewPager* __this, uDelegate* value);
void ScrollViewPager__remove_ReachedStart_fn(ScrollViewPager* __this, uDelegate* value);
void ScrollViewPager__RequestCheckPosition_fn(ScrollViewPager* __this);
void ScrollViewPager__RequestCheckSizing_fn(ScrollViewPager* __this);
void ScrollViewPager__get_Retain_fn(ScrollViewPager* __this, int* __retval);
void ScrollViewPager__set_Retain_fn(ScrollViewPager* __this, int* value);
void ScrollViewPager__UnoUXIPropertyListenerOnPropertyChanged_fn(ScrollViewPager* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct ScrollViewPager : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Reactive::Each*> _each;
    float _endRange;
    int _lastActivityPosition;
    int _lastActivitySizing;
    bool _nearTrueEnd;
    bool _nearTrueStart;
    bool _pendingPosition;
    bool _pendingSizing;
    ::g::Uno::Float2 _prevActualSize;
    int _retain;
    uStrong< ::g::Fuse::Controls::ScrollViewBase*> _scrollable;
    uStrong<uDelegate*> ReachedEnd1;
    uStrong<uDelegate*> ReachedStart1;

    void Check();
    void CheckPosition();
    void CheckSizing();
    ::g::Fuse::Reactive::Each* Each();
    void Each(::g::Fuse::Reactive::Each* value);
    float EndRange();
    void EndRange(float value);
    void add_ReachedEnd(uDelegate* value);
    void remove_ReachedEnd(uDelegate* value);
    void add_ReachedStart(uDelegate* value);
    void remove_ReachedStart(uDelegate* value);
    void RequestCheckPosition();
    void RequestCheckSizing();
    int Retain();
    void Retain(int value);
    static void check(::g::Fuse::Scripting::Context* c, ScrollViewPager* s, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
