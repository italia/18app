// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/NavigationControl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__ControlPageData;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class NavigationControl.ControlPageData :311
// {
uType* NavigationControl__ControlPageData_typeof();
void NavigationControl__ControlPageData__ctor__fn(NavigationControl__ControlPageData* __this);
void NavigationControl__ControlPageData__New1_fn(NavigationControl__ControlPageData** __retval);

struct NavigationControl__ControlPageData : uObject
{
    uStrong< ::g::Fuse::Triggers::Trigger*> Enter;
    uStrong< ::g::Fuse::Triggers::Trigger*> Exit;
    bool FromTemplate;
    uStrong< ::g::Fuse::Triggers::Trigger*> Inactive;
    uStrong< ::g::Fuse::Triggers::Trigger*> Removing;

    void ctor_();
    static NavigationControl__ControlPageData* New1();
};
// }

}}} // ::g::Fuse::Controls
