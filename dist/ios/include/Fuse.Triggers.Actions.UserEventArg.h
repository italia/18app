// This file was generated based on /usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/RaiseUserEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct UserEventArg;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class UserEventArg :132
// {
uType* UserEventArg_typeof();
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval);
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value);
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval);
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value);

struct UserEventArg : ::g::Uno::UX::PropertyObject
{
    uStrong<uString*> _Name;
    uStrong<uObject*> _Value;

    uString* Name();
    void Name(uString* value);
    uObject* Value();
    void Value(uObject* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
