// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/NavigatorSwipe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Router_PrepareProgress_Property;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class Router_PrepareProgress_Property :219
// {
::g::Uno::UX::Property1_type* Router_PrepareProgress_Property_typeof();
void Router_PrepareProgress_Property__ctor_3_fn(Router_PrepareProgress_Property* __this, ::g::Fuse::Navigation::Router* obj);
void Router_PrepareProgress_Property__Get1_fn(Router_PrepareProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval);
void Router_PrepareProgress_Property__New1_fn(::g::Fuse::Navigation::Router* obj, Router_PrepareProgress_Property** __retval);
void Router_PrepareProgress_Property__get_Object_fn(Router_PrepareProgress_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Router_PrepareProgress_Property__Set1_fn(Router_PrepareProgress_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin);
void Router_PrepareProgress_Property__get_SupportsOriginSetter_fn(Router_PrepareProgress_Property* __this, bool* __retval);

struct Router_PrepareProgress_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Navigation::Router*> _obj;

    void ctor_3(::g::Fuse::Navigation::Router* obj);
    static Router_PrepareProgress_Property* New1(::g::Fuse::Navigation::Router* obj);
};
// }

}}} // ::g::Fuse::Controls
