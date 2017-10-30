// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/IScriptEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.Bool.h>
#include <Uno.UX.ValueChangedArgs-1.h>
namespace g{namespace Fuse{namespace Scripting{struct BoolChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class BoolChangedArgs :64
// {
struct BoolChangedArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

BoolChangedArgs_type* BoolChangedArgs_typeof();
void BoolChangedArgs__ctor_2_fn(BoolChangedArgs* __this, bool* value);
void BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn(BoolChangedArgs* __this, uObject* s);
void BoolChangedArgs__New3_fn(bool* value, BoolChangedArgs** __retval);

struct BoolChangedArgs : ::g::Uno::UX::ValueChangedArgs
{
    void ctor_2(bool value);
    static BoolChangedArgs* New3(bool value);
};
// }

}}} // ::g::Fuse::Scripting
