// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/PageControl.Pages.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.PageControl.AddedPage.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ObserverMap-1.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl__PagesMap;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class PageControl.PagesMap :12
// {
::g::Fuse::Reactive::ObserverMap_type* PageControl__PagesMap_typeof();
void PageControl__PagesMap__ctor_1_fn(PageControl__PagesMap* __this);
void PageControl__PagesMap__Attach1_fn(PageControl__PagesMap* __this, ::g::Fuse::Controls::PageControl* pageControl, uObject* obs);
void PageControl__PagesMap__Detach1_fn(PageControl__PagesMap* __this);
void PageControl__PagesMap__Map_fn(PageControl__PagesMap* __this, uObject* v, ::g::Fuse::Controls::PageControl__AddedPage** __retval);
void PageControl__PagesMap__New1_fn(PageControl__PagesMap** __retval);
void PageControl__PagesMap__OnUpdated_fn(PageControl__PagesMap* __this);
void PageControl__PagesMap__Unmap_fn(PageControl__PagesMap* __this, ::g::Fuse::Controls::PageControl__AddedPage* mv, uObject** __retval);

struct PageControl__PagesMap : ::g::Fuse::Reactive::ObserverMap
{
    uStrong< ::g::Fuse::Controls::PageControl*> PageControl;

    void ctor_1();
    void Attach1(::g::Fuse::Controls::PageControl* pageControl, uObject* obs);
    void Detach1();
    static PageControl__PagesMap* New1();
};
// }

}}} // ::g::Fuse::Controls
