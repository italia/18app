// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/Http.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http__FuseJSHttpClient;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Http.FuseJSHttpClient :53
// {
uType* Http__FuseJSHttpClient_typeof();
void Http__FuseJSHttpClient__ctor__fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context);
void Http__FuseJSHttpClient__CreateRequest_fn(Http__FuseJSHttpClient* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpClient__New1_fn(::g::Fuse::Scripting::Context* context, Http__FuseJSHttpClient** __retval);
void Http__FuseJSHttpClient__get_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object** __retval);
void Http__FuseJSHttpClient__set_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object* value);

struct Http__FuseJSHttpClient : uObject
{
    uStrong< ::g::Uno::Net::Http::HttpMessageHandler*> _client;
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Fuse::Scripting::Object*> _Obj;

    void ctor_(::g::Fuse::Scripting::Context* context);
    uObject* CreateRequest(uArray* args);
    ::g::Fuse::Scripting::Object* Obj();
    void Obj(::g::Fuse::Scripting::Object* value);
    static Http__FuseJSHttpClient* New1(::g::Fuse::Scripting::Context* context);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
