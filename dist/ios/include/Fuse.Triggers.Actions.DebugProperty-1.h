// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Actions/DebugProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.ITaggedDebugProperty.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugProperty;}}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class DebugProperty<T> :12
// {
struct DebugProperty_type : uType
{
    ::g::Fuse::Triggers::Actions::ITaggedDebugProperty interface0;
};

DebugProperty_type* DebugProperty_typeof();
void DebugProperty__GetStringValue_fn(DebugProperty* __this, uString** __retval);
void DebugProperty__GetTag_fn(DebugProperty* __this, uString** __retval);
void DebugProperty__get_Tag_fn(DebugProperty* __this, uString** __retval);
void DebugProperty__set_Tag_fn(DebugProperty* __this, uString* value);
void DebugProperty__get_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1** __retval);
void DebugProperty__set_Value_fn(DebugProperty* __this, ::g::Uno::UX::Property1* value);

struct DebugProperty : uObject
{
    uStrong<uString*> _Tag;
    uStrong< ::g::Uno::UX::Property1*> _Value;

    uString* GetStringValue();
    uString* GetTag();
    uString* Tag();
    void Tag(uString* value);
    ::g::Uno::UX::Property1* Value();
    void Value(::g::Uno::UX::Property1* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
