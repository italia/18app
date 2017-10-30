// This file was generated based on /usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/UserEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct UserEventArgs;}}
namespace g{namespace Fuse{struct UserEventDispatch;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{

// public sealed class UserEventArgs :9
// {
struct UserEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

UserEventArgs_type* UserEventArgs_typeof();
void UserEventArgs__ctor_1_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
void UserEventArgs__get_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary** __retval);
void UserEventArgs__set_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary* value);
void UserEventArgs__get_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch** __retval);
void UserEventArgs__set_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* value);
void UserEventArgs__FuseScriptingIScriptEventSerialize_fn(UserEventArgs* __this, uObject* s);
void UserEventArgs__New2_fn(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args, UserEventArgs** __retval);
void UserEventArgs__Raise_fn(UserEventArgs* __this);
void UserEventArgs__get_Source_fn(UserEventArgs* __this, ::g::Fuse::Node** __retval);
void UserEventArgs__set_Source_fn(UserEventArgs* __this, ::g::Fuse::Node* value);

struct UserEventArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Uno::Collections::Dictionary*> _Args;
    uStrong< ::g::Fuse::UserEventDispatch*> _Dispatch;
    uStrong< ::g::Fuse::Node*> _Source;

    void ctor_1(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
    ::g::Uno::Collections::Dictionary* Args();
    void Args(::g::Uno::Collections::Dictionary* value);
    ::g::Fuse::UserEventDispatch* Dispatch();
    void Dispatch(::g::Fuse::UserEventDispatch* value);
    void Raise();
    ::g::Fuse::Node* Source();
    void Source(::g::Fuse::Node* value);
    static UserEventArgs* New2(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args);
};
// }

}} // ::g::Fuse
