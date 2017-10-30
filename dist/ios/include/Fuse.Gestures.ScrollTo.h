// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Scroller.Actions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Gestures{struct ScrollTo;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ScrollTo :56
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof();
void ScrollTo__get_How_fn(ScrollTo* __this, int* __retval);
void ScrollTo__set_How_fn(ScrollTo* __this, int* value);
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target);
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval);
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value);

struct ScrollTo : ::g::Fuse::Triggers::Actions::TriggerAction
{
    bool _hasRelativePosition;
    int _how;
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _relativePosition;
    uStrong< ::g::Fuse::Controls::ScrollView*> _Target;

    int How();
    void How(int value);
    ::g::Fuse::Controls::ScrollView* Target();
    void Target(::g::Fuse::Controls::ScrollView* value);
};
// }

}}} // ::g::Fuse::Gestures
