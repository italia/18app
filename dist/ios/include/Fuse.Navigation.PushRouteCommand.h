// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.RouteModificationCommand.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct PushRouteCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class PushRouteCommand :194
// {
::g::Fuse::Navigation::RouteModificationCommand_type* PushRouteCommand_typeof();
void PushRouteCommand__ProcessArguments_fn(PushRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval);

struct PushRouteCommand : ::g::Fuse::Navigation::RouteModificationCommand
{
};
// }

}}} // ::g::Fuse::Navigation
