// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/EdgeNavigator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator__ControlPageData;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class EdgeNavigator.ControlPageData :159
// {
uType* EdgeNavigator__ControlPageData_typeof();
void EdgeNavigator__ControlPageData__ctor__fn(EdgeNavigator__ControlPageData* __this);
void EdgeNavigator__ControlPageData__New1_fn(EdgeNavigator__ControlPageData** __retval);

struct EdgeNavigator__ControlPageData : uObject
{
    uStrong< ::g::Fuse::Triggers::Trigger*> Enter;

    void ctor_();
    static EdgeNavigator__ControlPageData* New1();
};
// }

}}} // ::g::Fuse::Controls
