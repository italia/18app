// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/LayoutMasterBoxSizing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutMasterBoxSizing__LayoutMasterData;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class LayoutMasterBoxSizing.LayoutMasterData :60
// {
uType* LayoutMasterBoxSizing__LayoutMasterData_typeof();
void LayoutMasterBoxSizing__LayoutMasterData__ctor__fn(LayoutMasterBoxSizing__LayoutMasterData* __this);
void LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this);
void LayoutMasterBoxSizing__LayoutMasterData__get_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element** __retval);
void LayoutMasterBoxSizing__LayoutMasterData__set_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element* value);
void LayoutMasterBoxSizing__LayoutMasterData__New1_fn(LayoutMasterBoxSizing__LayoutMasterData** __retval);
void LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, uObject* s, uObject* args);
void LayoutMasterBoxSizing__LayoutMasterData__ScheduleCheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this);

struct LayoutMasterBoxSizing__LayoutMasterData : uObject
{
    uStrong< ::g::Fuse::Elements::Element*> _master;
    bool _pendingCheckLayout;
    uWeak< ::g::Fuse::Elements::Element*> Element;
    int Mode;

    void ctor_();
    void CheckLayout();
    ::g::Fuse::Elements::Element* Master();
    void Master(::g::Fuse::Elements::Element* value);
    void OnPlaced(uObject* s, uObject* args);
    void ScheduleCheckLayout();
    static LayoutMasterBoxSizing__LayoutMasterData* New1();
};
// }

}}} // ::g::Fuse::Elements
