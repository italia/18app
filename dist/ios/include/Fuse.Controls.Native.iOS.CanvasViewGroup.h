// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/CanvasViewGroup.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Drawing.INativeSurfaceOwner.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct CanvasViewGroup;}}}}}
namespace g{namespace Fuse{namespace Drawing{struct NativeSurface;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class CanvasViewGroup :9
// {
struct CanvasViewGroup_type : ::g::Fuse::Controls::Native::ViewHandle_type
{
    ::g::Fuse::Drawing::INativeSurfaceOwner interface1;
};

CanvasViewGroup_type* CanvasViewGroup_typeof();
void CanvasViewGroup__ctor_2_fn(CanvasViewGroup* __this, uObject* surfaceDrawable, float* pixelsPerPoint);
void CanvasViewGroup__Create_fn(float* density, ::g::ObjC::Object** __retval);
void CanvasViewGroup__Dispose_fn(CanvasViewGroup* __this);
void CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn(CanvasViewGroup* __this, ::g::Fuse::Drawing::Surface** __retval);
void CanvasViewGroup__New3_fn(uObject* surfaceDrawable, float* pixelsPerPoint, CanvasViewGroup** __retval);
void CanvasViewGroup__OnDraw_fn(CanvasViewGroup* __this, void** cgContextRef);
void CanvasViewGroup__SetDrawCallback_fn(::g::ObjC::Object* handle, uDelegate* onDrawCallback);

struct CanvasViewGroup : ::g::Fuse::Controls::Native::ViewHandle
{
    uStrong< ::g::Fuse::Drawing::NativeSurface*> _nativeSurface;
    float _pixelsPerPoint;
    uStrong<uObject*> _surfaceDrawable;

    void ctor_2(uObject* surfaceDrawable, float pixelsPerPoint);
    void OnDraw(void* cgContextRef);
    static ::g::ObjC::Object* Create(float density);
    static CanvasViewGroup* New3(uObject* surfaceDrawable, float pixelsPerPoint);
    static void SetDrawCallback(::g::ObjC::Object* handle, uDelegate* onDrawCallback);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
