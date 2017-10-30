// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/CanvasViewGroup.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.CanvasViewGroup.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.Native.ViewHandle.Invalidation.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.NativeSurface.h>
#include <Fuse.Drawing.Surface.h>
#include <iOS/CanvasViewGroup.h>
#include <ObjC.Object.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class CanvasViewGroup :9
// {
static void CanvasViewGroup_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Attempt to draw native canvas without surface");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/CanvasViewGroup.uno");
    ::STRINGS[2] = uString::Const("OnDraw");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IntPtr_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CanvasViewGroup_type, interface0),
        ::g::Fuse::Drawing::INativeSurfaceOwner_typeof(), offsetof(CanvasViewGroup_type, interface1));
    type->SetFields(9,
        ::g::Fuse::Drawing::NativeSurface_typeof(), offsetof(CanvasViewGroup, _nativeSurface), 0,
        ::g::Uno::Float_typeof(), offsetof(CanvasViewGroup, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(CanvasViewGroup, _surfaceDrawable), 0);
}

CanvasViewGroup_type* CanvasViewGroup_typeof()
{
    static uSStrong<CanvasViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CanvasViewGroup);
    options.TypeSize = sizeof(CanvasViewGroup_type);
    type = (CanvasViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.CanvasViewGroup", options);
    type->fp_build_ = CanvasViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))CanvasViewGroup__Dispose_fn;
    type->interface1.fp_GetSurface = (void(*)(uObject*, ::g::Fuse::Drawing::Surface**))CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CanvasViewGroup__Dispose_fn;
    return type;
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) :14
void CanvasViewGroup__ctor_2_fn(CanvasViewGroup* __this, uObject* surfaceDrawable, float* pixelsPerPoint)
{
    __this->ctor_2(surfaceDrawable, *pixelsPerPoint);
}

// private static ObjC.Object Create(float density) :63
void CanvasViewGroup__Create_fn(float* density, ::g::ObjC::Object** __retval)
{
    *__retval = CanvasViewGroup::Create(*density);
}

// public override sealed void Dispose() :22
void CanvasViewGroup__Dispose_fn(CanvasViewGroup* __this)
{
    CanvasViewGroup::SetDrawCallback(__this->NativeHandle, NULL);
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_nativeSurface = NULL;
}

// internal Fuse.Drawing.Surface Fuse.Drawing.INativeSurfaceOwner.GetSurface() :44
void CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn(CanvasViewGroup* __this, ::g::Fuse::Drawing::Surface** __retval)
{
    if (__this->_nativeSurface == NULL)
    {
        CanvasViewGroup::SetDrawCallback(__this->NativeHandle, uDelegate::New(::TYPES[0/*Uno.Action<Uno.IntPtr>*/], (void*)CanvasViewGroup__OnDraw_fn, __this));
        __this->Invalidate();
        __this->_nativeSurface = ::g::Fuse::Drawing::NativeSurface::New1();
    }

    return *__retval = __this->_nativeSurface, void();
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) :14
void CanvasViewGroup__New3_fn(uObject* surfaceDrawable, float* pixelsPerPoint, CanvasViewGroup** __retval)
{
    *__retval = CanvasViewGroup::New3(surfaceDrawable, *pixelsPerPoint);
}

// private void OnDraw(Uno.IntPtr cgContextRef) :29
void CanvasViewGroup__OnDraw_fn(CanvasViewGroup* __this, void** cgContextRef)
{
    __this->OnDraw(*cgContextRef);
}

// private static void SetDrawCallback(ObjC.Object handle, Uno.Action<Uno.IntPtr> onDrawCallback) :56
void CanvasViewGroup__SetDrawCallback_fn(::g::ObjC::Object* handle, uDelegate* onDrawCallback)
{
    CanvasViewGroup::SetDrawCallback(handle, onDrawCallback);
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [instance] :14
void CanvasViewGroup::ctor_2(uObject* surfaceDrawable, float pixelsPerPoint)
{
    ctor_1(CanvasViewGroup::Create(pixelsPerPoint), false, 0, 1);
    NeedsRenderBounds = true;
    _surfaceDrawable = surfaceDrawable;
    _pixelsPerPoint = pixelsPerPoint;
}

// private void OnDraw(Uno.IntPtr cgContextRef) [instance] :29
void CanvasViewGroup::OnDraw(void* cgContextRef)
{
    if (_nativeSurface == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"Attempt to ...*/], this, ::STRINGS[1/*"/usr/local/...*/], 33, ::STRINGS[2/*"OnDraw"*/]);
        return;
    }

    uPtr(_nativeSurface)->Begin1(cgContextRef, _pixelsPerPoint);
    uPtr(_nativeSurface)->DrawLocal(_surfaceDrawable);
    uPtr(_nativeSurface)->End();
}

// private static ObjC.Object Create(float density) [static] :63
::g::ObjC::Object* CanvasViewGroup::Create(float density)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (float density) -> ::id
        {
            ::CanvasViewGroup* cvg = [[::CanvasViewGroup alloc] initWithDensity:density];
            [cvg setOpaque:false];
            [cvg setMultipleTouchEnabled:true];
            return cvg;
        } (density));
        
    }
    
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [static] :14
CanvasViewGroup* CanvasViewGroup::New3(uObject* surfaceDrawable, float pixelsPerPoint)
{
    CanvasViewGroup* obj1 = (CanvasViewGroup*)uNew(CanvasViewGroup_typeof());
    obj1->ctor_2(surfaceDrawable, pixelsPerPoint);
    return obj1;
}

// private static void SetDrawCallback(ObjC.Object handle, Uno.Action<Uno.IntPtr> onDrawCallback) [static] :56
void CanvasViewGroup::SetDrawCallback(::g::ObjC::Object* handle, uDelegate* onDrawCallback)
{
    @autoreleasepool
    {
        [] (::id handle, ::uObjC::Function<void, void*> onDrawCallback) -> void
        {
            ::CanvasViewGroup* cvg = (::CanvasViewGroup*)handle;
            [cvg setOnDrawCallback:onDrawCallback];
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, void*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, void*>)nil : (^ void (void* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCRef(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onDrawCallback]));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
