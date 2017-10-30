// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/PointerEventArgs.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class PointerEventArgs :17
// {
::g::Fuse::VisualEventArgs_type* PointerEventArgs_typeof();
void PointerEventArgs__ctor_2_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
void PointerEventArgs__get_Data_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData** __retval);
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval);
void PointerEventArgs__get_PointIndex_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__Serialize_fn(PointerEventArgs* __this, uObject* s);
void PointerEventArgs__get_Timestamp_fn(PointerEventArgs* __this, double* __retval);
void PointerEventArgs__TryHardCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval);
void PointerEventArgs__TrySoftCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval);
void PointerEventArgs__get_WindowPoint_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);

struct PointerEventArgs : ::g::Fuse::VisualEventArgs
{
    uStrong< ::g::Fuse::Input::PointerEventData*> _data;

    void ctor_2(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
    ::g::Fuse::Input::PointerEventData* Data();
    bool IsPrimary();
    int PointIndex();
    double Timestamp();
    bool TryHardCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual);
    bool TrySoftCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual);
    ::g::Uno::Float2 WindowPoint();
};
// }

}}} // ::g::Fuse::Input
