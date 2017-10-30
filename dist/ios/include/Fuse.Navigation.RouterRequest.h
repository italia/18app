// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/RouterRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal class RouterRequest :12
// {
struct RouterRequest_type : uType
{
    void(*fp_ParseNode)(::g::Fuse::Navigation::RouterRequest*, uObject*, ::g::Fuse::Node**);
};

RouterRequest_type* RouterRequest_typeof();
void RouterRequest__ctor__fn(RouterRequest* __this, int* flags);
void RouterRequest__AddArgument_fn(RouterRequest* __this, uString* name, uObject* value, bool* __retval);
void RouterRequest__AddHow_fn(RouterRequest* __this, int* how, bool* __retval);
void RouterRequest__AddPath_fn(RouterRequest* __this, uObject* value, bool* __retval);
void RouterRequest__MakeRequest_fn(RouterRequest* __this, ::g::Fuse::Navigation::Router* router, bool* __retval);
void RouterRequest__New1_fn(int* flags, RouterRequest** __retval);
void RouterRequest__ParseFlatRoute_fn(uObject* path, ::g::Fuse::Navigation::Route** __retval);
void RouterRequest__ParseFlatRoute1_fn(uArray* args, int* pos, ::g::Fuse::Navigation::Route** __retval);
void RouterRequest__ParseNode_fn(RouterRequest* __this, uObject* value, ::g::Fuse::Node** __retval);
void RouterRequest__ParseNVPComponent_fn(uObject* value, ::g::Fuse::Navigation::Route** route, bool* __retval);
void RouterRequest__ParseNVPRoute_fn(uObject* value, ::g::Fuse::Navigation::Route** route, bool* __retval);
void RouterRequest__Reset_fn(RouterRequest* __this);
void RouterRequest__ValidateParameter_fn(uObject* arg, int* depth, bool* __retval);

struct RouterRequest : uObject
{
    int _flags;
    uStrong<uString*> Bookmark;
    int How;
    uWeak< ::g::Fuse::Node*> Relative;
    uStrong< ::g::Fuse::Navigation::Route*> Route;
    uStrong<uString*> Style;
    int Transition;

    void ctor_(int flags);
    bool AddArgument(uString* name, uObject* value);
    bool AddHow(int how);
    bool AddPath(uObject* value);
    bool MakeRequest(::g::Fuse::Navigation::Router* router);
    ::g::Fuse::Node* ParseNode(uObject* value) { ::g::Fuse::Node* __retval; return (((RouterRequest_type*)__type)->fp_ParseNode)(this, value, &__retval), __retval; }
    void Reset();
    static RouterRequest* New1(int flags);
    static ::g::Fuse::Navigation::Route* ParseFlatRoute(uObject* path);
    static ::g::Fuse::Navigation::Route* ParseFlatRoute1(uArray* args, int pos);
    static ::g::Fuse::Node* ParseNode(RouterRequest* __this, uObject* value) { ::g::Fuse::Node* __retval; return RouterRequest__ParseNode_fn(__this, value, &__retval), __retval; }
    static bool ParseNVPComponent(uObject* value, ::g::Fuse::Navigation::Route** route);
    static bool ParseNVPRoute(uObject* value, ::g::Fuse::Navigation::Route** route);
    static bool ValidateParameter(uObject* arg, int depth);
};
// }

}}} // ::g::Fuse::Navigation
