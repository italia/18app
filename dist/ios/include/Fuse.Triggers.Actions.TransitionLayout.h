// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Triggers/LayoutAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TransitionLayout;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class TransitionLayout :342
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof();
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval);
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value);
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target);
void TransitionLayout__get_Target_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval);
void TransitionLayout__set_Target_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value);
void TransitionLayout__Transition_fn(TransitionLayout* __this);

struct TransitionLayout : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Elements::Element*> _perform;
    uStrong< ::g::Fuse::Elements::Element*> _From;
    uStrong< ::g::Fuse::Elements::Element*> _Target;

    ::g::Fuse::Elements::Element* From();
    void From(::g::Fuse::Elements::Element* value);
    ::g::Fuse::Elements::Element* Target();
    void Target(::g::Fuse::Elements::Element* value);
    void Transition();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
