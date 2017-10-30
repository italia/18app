// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/Router.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.RouterRequest.h>
namespace g{namespace Fuse{namespace Navigation{struct Router__ScriptRouterRequest;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class Router.ScriptRouterRequest :207
// {
::g::Fuse::Navigation::RouterRequest_type* Router__ScriptRouterRequest_typeof();
void Router__ScriptRouterRequest__ctor_1_fn(Router__ScriptRouterRequest* __this, ::g::Fuse::Scripting::Context* context);
void Router__ScriptRouterRequest__New2_fn(::g::Fuse::Scripting::Context* context, Router__ScriptRouterRequest** __retval);
void Router__ScriptRouterRequest__ParseNode_fn(Router__ScriptRouterRequest* __this, uObject* value, ::g::Fuse::Node** __retval);

struct Router__ScriptRouterRequest : ::g::Fuse::Navigation::RouterRequest
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;

    void ctor_1(::g::Fuse::Scripting::Context* context);
    static Router__ScriptRouterRequest* New2(::g::Fuse::Scripting::Context* context);
};
// }

}}} // ::g::Fuse::Navigation
