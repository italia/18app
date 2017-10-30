// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.RouteModificationCommand.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct ModifyRouteCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class ModifyRouteCommand :150
// {
::g::Fuse::Navigation::RouteModificationCommand_type* ModifyRouteCommand_typeof();
void ModifyRouteCommand__ProcessArguments_fn(ModifyRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval);

struct ModifyRouteCommand : ::g::Fuse::Navigation::RouteModificationCommand
{
};
// }

}}} // ::g::Fuse::Navigation
