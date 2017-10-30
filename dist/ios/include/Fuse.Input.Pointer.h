// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Input/Pointer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct Capture;}}}
namespace g{namespace Fuse{namespace Input{struct Pointer;}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__CaptureLockImpl;}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__PELHolder;}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__PointerRecord;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEntered;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEnteredArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{namespace Input{struct PointerLeft;}}}
namespace g{namespace Fuse{namespace Input{struct PointerLeftArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMoved;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressed;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleased;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerWheelMoved;}}}
namespace g{namespace Fuse{namespace Input{struct PointerWheelMovedArgs;}}}
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEvent;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// public partial static class Pointer :125
// {
uClassType* Pointer_typeof();
void Pointer__AddHandlers_fn(::g::Fuse::Visual* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved);
void Pointer__CaptureLock_fn(Pointer__CaptureLockImpl** __retval);
void Pointer__CheckFocus_fn(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes);
void Pointer__get_Coord_fn(::g::Uno::Float2* __retval);
void Pointer__set_Coord_fn(::g::Uno::Float2* value);
void Pointer__get_Entered_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__get_EventResponder_fn(uObject** __retval);
void Pointer__set_EventResponder_fn(uObject* value);
void Pointer__ExtendCapture_fn(uObject* identity, int* pointIndex, bool* __retval);
void Pointer__GetCapture_fn(uObject* identity, ::g::Fuse::Input::Capture** __retval);
void Pointer__GetLastHitList_fn(int* pointIndex, ::g::Uno::Collections::List** __retval);
void Pointer__GetPrimaryCapture_fn(int* pointIndex, ::g::Fuse::Input::Capture** __retval);
void Pointer__IsCaptureAllowed_fn(int* type, ::g::Fuse::Visual* visual, int* pointIndex, uObject* identity, bool* __retval);
void Pointer__IsCaptureAllowedAgainst_fn(::g::Fuse::Input::Capture* current, int* type, ::g::Fuse::Visual* visual, int* pointIndex, uObject* identity, bool* __retval);
void Pointer__IsPressed1_fn(int* pointIndex, bool* __retval);
void Pointer__get_Left_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__LoseCapture_fn(int* pointIndex);
void Pointer__LoseSoftCapturesTo_fn(::g::Fuse::Input::Capture* to);
void Pointer__MarkAncestorHits_fn(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list);
void Pointer__ModifyCapture_fn(uObject* identity, int* type, bool* __retval);
void Pointer__ModifyCapture1_fn(uObject* identity, ::g::Fuse::Visual* visual, uDelegate* lostCallback, int* type, int* pointIndex, bool* __retval);
void Pointer__get_Moved_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__get_Pressed_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__ProcessPointerEnterLeave_fn(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args);
void Pointer__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval);
void Pointer__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval);
void Pointer__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval);
void Pointer__ReleaseCapture_fn(uObject* identity);
void Pointer__get_Released_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__RemoveHandlers_fn(::g::Fuse::Visual* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved);
void Pointer__RoutePointerEvent_fn(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval);
void Pointer__RouteToHit_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval);
void Pointer__get_WheelMoved_fn(::g::Fuse::VisualEvent** __retval);

struct Pointer : uObject
{
    static uSStrong<Pointer__CaptureLockImpl*> _captureLockImpl_;
    static uSStrong<Pointer__CaptureLockImpl*>& _captureLockImpl() { return Pointer_typeof()->Init(), _captureLockImpl_; }
    static uSStrong< ::g::Uno::Collections::List*> _captures_;
    static uSStrong< ::g::Uno::Collections::List*>& _captures() { return Pointer_typeof()->Init(), _captures_; }
    static uSStrong< ::g::Fuse::Input::PointerEntered*> _entered_;
    static uSStrong< ::g::Fuse::Input::PointerEntered*>& _entered() { return Pointer_typeof()->Init(), _entered_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _lastHitVisuals_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _lastHitVisuals() { return Pointer_typeof()->Init(), _lastHitVisuals_; }
    static uSStrong< ::g::Fuse::Input::PointerLeft*> _left_;
    static uSStrong< ::g::Fuse::Input::PointerLeft*>& _left() { return Pointer_typeof()->Init(), _left_; }
    static uSStrong< ::g::Fuse::Input::PointerMoved*> _moved_;
    static uSStrong< ::g::Fuse::Input::PointerMoved*>& _moved() { return Pointer_typeof()->Init(), _moved_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pointersDown_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pointersDown() { return Pointer_typeof()->Init(), _pointersDown_; }
    static uSStrong< ::g::Fuse::Input::PointerPressed*> _pressed_;
    static uSStrong< ::g::Fuse::Input::PointerPressed*>& _pressed() { return Pointer_typeof()->Init(), _pressed_; }
    static uSStrong< ::g::Fuse::Input::PointerReleased*> _released_;
    static uSStrong< ::g::Fuse::Input::PointerReleased*>& _released() { return Pointer_typeof()->Init(), _released_; }
    static uSStrong< ::g::Fuse::Input::PointerWheelMoved*> _wheelMoved_;
    static uSStrong< ::g::Fuse::Input::PointerWheelMoved*>& _wheelMoved() { return Pointer_typeof()->Init(), _wheelMoved_; }
    static ::g::Uno::Float2 _Coord_;
    static ::g::Uno::Float2& _Coord() { return Pointer_typeof()->Init(), _Coord_; }
    static uSStrong<uObject*> _EventResponder_;
    static uSStrong<uObject*>& _EventResponder() { return Pointer_typeof()->Init(), _EventResponder_; }

    static void AddHandlers(::g::Fuse::Visual* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved);
    static Pointer__CaptureLockImpl* CaptureLock();
    static void CheckFocus(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes);
    static bool ExtendCapture(uObject* identity, int pointIndex);
    static ::g::Fuse::Input::Capture* GetCapture(uObject* identity);
    static ::g::Uno::Collections::List* GetLastHitList(int pointIndex);
    static ::g::Fuse::Input::Capture* GetPrimaryCapture(int pointIndex);
    static bool IsCaptureAllowed(int type, ::g::Fuse::Visual* visual, int pointIndex, uObject* identity);
    static bool IsCaptureAllowedAgainst(::g::Fuse::Input::Capture* current, int type, ::g::Fuse::Visual* visual, int pointIndex, uObject* identity);
    static bool IsPressed1(int pointIndex);
    static void LoseCapture(int pointIndex);
    static void LoseSoftCapturesTo(::g::Fuse::Input::Capture* to);
    static void MarkAncestorHits(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list);
    static bool ModifyCapture(uObject* identity, int type);
    static bool ModifyCapture1(uObject* identity, ::g::Fuse::Visual* visual, uDelegate* lostCallback, int type, int pointIndex);
    static void ProcessPointerEnterLeave(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args);
    static bool RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static bool RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static bool RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static void ReleaseCapture(uObject* identity);
    static void RemoveHandlers(::g::Fuse::Visual* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved);
    static ::g::Fuse::Visual* RoutePointerEvent(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root);
    static ::g::Fuse::Visual* RouteToHit(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root);
    static ::g::Uno::Float2 Coord();
    static void Coord(::g::Uno::Float2 value);
    static ::g::Fuse::VisualEvent* Entered();
    static uObject* EventResponder();
    static void EventResponder(uObject* value);
    static ::g::Fuse::VisualEvent* Left();
    static ::g::Fuse::VisualEvent* Moved();
    static ::g::Fuse::VisualEvent* Pressed();
    static ::g::Fuse::VisualEvent* Released();
    static ::g::Fuse::VisualEvent* WheelMoved();
};
// }

}}} // ::g::Fuse::Input
