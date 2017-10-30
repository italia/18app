// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/IRouterOutlet.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.RouterPage.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ObserverMap-1.h>
namespace g{namespace Fuse{namespace Navigation{struct PagesMap;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class PagesMap :92
// {
::g::Fuse::Reactive::ObserverMap_type* PagesMap_typeof();
void PagesMap__ctor_1_fn(PagesMap* __this, ::g::Fuse::Navigation::RouterPage* owner);
void PagesMap__Map_fn(PagesMap* __this, uObject* v, ::g::Fuse::Navigation::RouterPage** __retval);
void PagesMap__New1_fn(::g::Fuse::Navigation::RouterPage* owner, PagesMap** __retval);
void PagesMap__OnUpdated_fn(PagesMap* __this);
void PagesMap__Unmap_fn(PagesMap* __this, ::g::Fuse::Navigation::RouterPage* mv, uObject** __retval);

struct PagesMap : ::g::Fuse::Reactive::ObserverMap
{
    uWeak< ::g::Fuse::Navigation::RouterPage*> _owner;

    void ctor_1(::g::Fuse::Navigation::RouterPage* owner);
    static PagesMap* New1(::g::Fuse::Navigation::RouterPage* owner);
};
// }

}}} // ::g::Fuse::Navigation
