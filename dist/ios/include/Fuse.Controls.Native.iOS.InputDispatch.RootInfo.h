// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/InputDispatch.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct InputDispatch__RootInfo;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// private struct InputDispatch.RootInfo :84
// {
uStructType* InputDispatch__RootInfo_typeof();
void InputDispatch__RootInfo__ctor__fn(InputDispatch__RootInfo* __this, ::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView);
void InputDispatch__RootInfo__New1_fn(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView, InputDispatch__RootInfo* __retval);

struct InputDispatch__RootInfo
{
    uStrong< ::g::Fuse::Visual*> RootVisual;
    uStrong< ::g::ObjC::Object*> RootView;

    void ctor_(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView);
};

InputDispatch__RootInfo InputDispatch__RootInfo__New1(::g::Fuse::Visual* rootVisual, ::g::ObjC::Object* rootView);
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
