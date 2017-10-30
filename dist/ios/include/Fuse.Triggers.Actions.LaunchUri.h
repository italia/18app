// This file was generated based on '/Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.InterApp/1.3.1/InterApp/InterAppTrigger.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LaunchUri;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LaunchUri :45
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof();
void LaunchUri__Perform_fn(LaunchUri* __this, ::g::Fuse::Node* target);
void LaunchUri__get_Uri_fn(LaunchUri* __this, uString** __retval);
void LaunchUri__set_Uri_fn(LaunchUri* __this, uString* value);

struct LaunchUri : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Uri;

    uString* Uri();
    void Uri(uString* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
