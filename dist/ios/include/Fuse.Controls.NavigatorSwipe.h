// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/NavigatorSwipe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigatorSwipe;}}}
namespace g{namespace Fuse{namespace Gestures{struct Swiped;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipingAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterModify;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class NavigatorSwipe :77
// {
::g::Fuse::Node_type* NavigatorSwipe_typeof();
void NavigatorSwipe__ctor_4_fn(NavigatorSwipe* __this);
void NavigatorSwipe__get_Direction_fn(NavigatorSwipe* __this, int* __retval);
void NavigatorSwipe__set_Direction_fn(NavigatorSwipe* __this, int* value);
void NavigatorSwipe__get_GestureSwipeDirection_fn(NavigatorSwipe* __this, int* __retval);
void NavigatorSwipe__get_How_fn(NavigatorSwipe* __this, int* __retval);
void NavigatorSwipe__set_How_fn(NavigatorSwipe* __this, int* value);
void NavigatorSwipe__get_IsEnabled_fn(NavigatorSwipe* __this, bool* __retval);
void NavigatorSwipe__set_IsEnabled_fn(NavigatorSwipe* __this, bool* value);
void NavigatorSwipe__New2_fn(NavigatorSwipe** __retval);
void NavigatorSwipe__OnRooted_fn(NavigatorSwipe* __this);
void NavigatorSwipe__OnUnrooted_fn(NavigatorSwipe* __this);

struct NavigatorSwipe : ::g::Fuse::NodeGroupBase
{
    int _direction;
    int _how;
    uStrong< ::g::Fuse::Navigation::RouterModify*> _modify;
    uStrong< ::g::Fuse::Animations::Animator*> _prepareAnim;
    uStrong< ::g::Fuse::Navigation::Router*> _router;
    uStrong< ::g::Fuse::Gestures::SwipingAnimation*> _swipeAnim;
    uStrong< ::g::Fuse::Gestures::Swiped*> _swipedCancelled;
    uStrong< ::g::Fuse::Gestures::Swiped*> _swipedCompleted;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _swipeGesture;

    void ctor_4();
    int Direction();
    void Direction(int value);
    int GestureSwipeDirection();
    int How();
    void How(int value);
    bool IsEnabled();
    void IsEnabled(bool value);
    static NavigatorSwipe* New2();
};
// }

}}} // ::g::Fuse::Controls
