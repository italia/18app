// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMember;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptClass :301
// {
uType* ScriptClass_typeof();
void ScriptClass__ctor__fn(ScriptClass* __this, uType* unoType, uArray* members);
void ScriptClass__Get_fn(uType* t, ScriptClass** __retval);
void ScriptClass__get_Members_fn(ScriptClass* __this, uArray** __retval);
void ScriptClass__New1_fn(uType* unoType, uArray* members, ScriptClass** __retval);
void ScriptClass__Register_fn(uType* unoType, uArray* members);
void ScriptClass__get_SuperType_fn(ScriptClass* __this, ScriptClass** __retval);
void ScriptClass__get_Type_fn(ScriptClass* __this, uType** __retval);

struct ScriptClass : uObject
{
    uStrong<uArray*> _members;
    uStrong<uType*> _unoType;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _unoTypeToScriptClass_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _unoTypeToScriptClass() { return _unoTypeToScriptClass_; }

    void ctor_(uType* unoType, uArray* members);
    uArray* Members();
    ScriptClass* SuperType();
    uType* Type();
    static ScriptClass* Get(uType* t);
    static ScriptClass* New1(uType* unoType, uArray* members);
    static void Register(uType* unoType, uArray* members);
};
// }

}}} // ::g::Fuse::Scripting
