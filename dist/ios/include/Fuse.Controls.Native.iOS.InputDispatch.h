// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/InputDispatch.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct InputDispatch;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct InputDispatch__RootInfo;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class InputDispatch :12
// {
uClassType* InputDispatch_typeof();
void InputDispatch__AddInputHandler_fn(::g::Fuse::Visual* owner, ::g::Fuse::Controls::Native::ViewHandle* viewHandle);
void InputDispatch__CompareUITouch_fn(::g::ObjC::Object* a, ::g::ObjC::Object* b, bool* __retval);
void InputDispatch__DeactivateTouch_fn(::g::ObjC::Object* uiTouch);
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval);
void InputDispatch__GetPointIndex_fn(::g::ObjC::Object* uiTouch, int* __retval);
void InputDispatch__GetRootInfo_fn(::g::Fuse::Visual* origin, InputDispatch__RootInfo* __retval);
void InputDispatch__GetTimestamp_fn(::g::ObjC::Object* uiTouch, double* __retval);
void InputDispatch__GetWindowPoint_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, ::g::Uno::Float2* __retval);
void InputDispatch__GetWindowPoint1_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, float* x, float* y);
void InputDispatch__MakePointerEventData_fn(::g::ObjC::Object* touches, ::g::ObjC::Object* rootView, uArray** __retval);
void InputDispatch__NewPointerEventData_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, ::g::Fuse::Input::PointerEventData** __retval);
void InputDispatch__NSArrayCount_fn(::g::ObjC::Object* nsArray, int* __retval);
void InputDispatch__NSArrayObjectAtIndex_fn(::g::ObjC::Object* nsArray, int* index, ::g::ObjC::Object** __retval);
void InputDispatch__OnTouchesBegan_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches);
void InputDispatch__OnTouchesCancelled_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches);
void InputDispatch__OnTouchesEnded_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches);
void InputDispatch__OnTouchesMoved_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches);
void InputDispatch__RaiseCancelled_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RemoveInputHandler_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle);

struct InputDispatch : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _activePointers_;
    static uSStrong< ::g::Uno::Collections::List*>& _activePointers() { return _activePointers_; }

    static void AddInputHandler(::g::Fuse::Visual* owner, ::g::Fuse::Controls::Native::ViewHandle* viewHandle);
    static bool CompareUITouch(::g::ObjC::Object* a, ::g::ObjC::Object* b);
    static void DeactivateTouch(::g::ObjC::Object* uiTouch);
    static ::g::Fuse::Visual* FindRoot(::g::Fuse::Visual* visual);
    static int GetPointIndex(::g::ObjC::Object* uiTouch);
    static InputDispatch__RootInfo GetRootInfo(::g::Fuse::Visual* origin);
    static double GetTimestamp(::g::ObjC::Object* uiTouch);
    static ::g::Uno::Float2 GetWindowPoint(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView);
    static void GetWindowPoint1(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, float* x, float* y);
    static uArray* MakePointerEventData(::g::ObjC::Object* touches, ::g::ObjC::Object* rootView);
    static ::g::Fuse::Input::PointerEventData* NewPointerEventData(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView);
    static int NSArrayCount(::g::ObjC::Object* nsArray);
    static ::g::ObjC::Object* NSArrayObjectAtIndex(::g::ObjC::Object* nsArray, int index);
    static void OnTouchesBegan(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches);
    static void OnTouchesCancelled(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches);
    static void OnTouchesEnded(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches);
    static void OnTouchesMoved(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches);
    static void RaiseCancelled(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static void RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static void RemoveInputHandler(::g::Fuse::Controls::Native::ViewHandle* viewHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
