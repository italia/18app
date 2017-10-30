// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Focus.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct ReleaseFocus;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class ReleaseFocus :49
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof();
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target);

struct ReleaseFocus : ::g::Fuse::Triggers::Actions::TriggerAction
{
};
// }

}}}} // ::g::Fuse::Triggers::Actions
