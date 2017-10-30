// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/Playback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.PlaybackAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Play;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Play :213
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Play_typeof();
void Play__Perform_fn(Play* __this, ::g::Fuse::Node* target);

struct Play : ::g::Fuse::Triggers::Actions::PlaybackAction
{
};
// }

}}}} // ::g::Fuse::Triggers::Actions
