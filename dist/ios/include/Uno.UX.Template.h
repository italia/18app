// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/UX/Template.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Template :12
// {
struct Template_type : uType
{
    void(*fp_New1)(::g::Uno::UX::Template*, uObject**);
};

Template_type* Template_typeof();
void Template__ctor__fn(Template* __this, uString* key, bool* isDefault);
void Template__get_IsDefault_fn(Template* __this, bool* __retval);
void Template__get_Key_fn(Template* __this, uString** __retval);

struct Template : uObject
{
    bool _isDefault;
    uStrong<uString*> _key;

    void ctor_(uString* key, bool isDefault);
    bool IsDefault();
    uString* Key();
    uObject* New1() { uObject* __retval; return (((Template_type*)__type)->fp_New1)(this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
