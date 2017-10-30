// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/PageControl.Pages.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl__AddedPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class PageControl.AddedPage :85
// {
uType* PageControl__AddedPage_typeof();
void PageControl__AddedPage__ctor__fn(PageControl__AddedPage* __this);
void PageControl__AddedPage__New1_fn(PageControl__AddedPage** __retval);

struct PageControl__AddedPage : uObject
{
    uStrong<uObject*> Data;
    uStrong< ::g::Fuse::Navigation::RouterPage*> Page;
    uStrong<uString*> Template;
    uStrong< ::g::Fuse::Visual*> Visual;

    void ctor_();
    static PageControl__AddedPage* New1();
};
// }

}}} // ::g::Fuse::Controls
