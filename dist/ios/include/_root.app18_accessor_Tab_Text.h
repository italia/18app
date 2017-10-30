// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct app18_accessor_Tab_Text;}

namespace g{

// internal sealed class app18_accessor_Tab_Text :261
// {
::g::Uno::UX::PropertyAccessor_type* app18_accessor_Tab_Text_typeof();
void app18_accessor_Tab_Text__ctor_1_fn(app18_accessor_Tab_Text* __this);
void app18_accessor_Tab_Text__GetAsObject_fn(app18_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void app18_accessor_Tab_Text__get_Name_fn(app18_accessor_Tab_Text* __this, ::g::Uno::UX::Selector* __retval);
void app18_accessor_Tab_Text__New1_fn(app18_accessor_Tab_Text** __retval);
void app18_accessor_Tab_Text__get_PropertyType_fn(app18_accessor_Tab_Text* __this, uType** __retval);
void app18_accessor_Tab_Text__SetAsObject_fn(app18_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void app18_accessor_Tab_Text__get_SupportsOriginSetter_fn(app18_accessor_Tab_Text* __this, bool* __retval);

struct app18_accessor_Tab_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Singleton_; }

    void ctor_1();
    static app18_accessor_Tab_Text* New1();
};
// }

} // ::g
