// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/CoreGraphics/CoreGraphicsSurface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineSegment.h>
#include <Fuse.Drawing.Surface.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct CoreGraphicsSurface;}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal abstract extern class CoreGraphicsSurface :24
// {
struct CoreGraphicsSurface_type : ::g::Fuse::Drawing::Surface_type
{
    void(*fp_PrepareImageFill)(::g::Fuse::Drawing::CoreGraphicsSurface*, ::g::Fuse::Drawing::ImageFill*);
    void(*fp_VerifyBegun)(::g::Fuse::Drawing::CoreGraphicsSurface*);
};

CoreGraphicsSurface_type* CoreGraphicsSurface_typeof();
void CoreGraphicsSurface__ctor_1_fn(CoreGraphicsSurface* __this);
void CoreGraphicsSurface__AddSegments_fn(CoreGraphicsSurface* __this, void** path, uObject* segments, ::g::Uno::Float2* prevPoint, ::g::Uno::Float2* __retval);
void CoreGraphicsSurface__CGFloatDeleteArray_fn(void** a);
void CoreGraphicsSurface__CGFloatNewArray_fn(int* size, void** __retval);
void CoreGraphicsSurface__CGFloatSet_fn(void** a, int* index, double* value);
void CoreGraphicsSurface__ConcatTransform_fn(void** cp, float* m11, float* m12, float* m21, float* m22, float* m31, float* m32);
void CoreGraphicsSurface__CreateLinearGradient_fn(void** cp, void** colors, void** stops, int* count, void** __retval);
void CoreGraphicsSurface__CreatePath_fn(CoreGraphicsSurface* __this, uObject* segments, int* fillRule, ::g::Fuse::Drawing::SurfacePath** __retval);
void CoreGraphicsSurface__CreateStrokedPath_fn(void** path, float* width, int* fjoin, int* fcap, float* miterLimit, void** __retval);
void CoreGraphicsSurface__DeleteContext_fn(void** cp);
void CoreGraphicsSurface__Dispose_fn(CoreGraphicsSurface* __this);
void CoreGraphicsSurface__DisposePath_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::SurfacePath* path);
void CoreGraphicsSurface__FillPath_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Brush* fill);
void CoreGraphicsSurface__FillPathImage_fn(void** cp, void** path, void** image, float* originX, float* originY, float* tileSizeX, float* tileSizeY, bool* eoFill);
void CoreGraphicsSurface__FillPathImpl_fn(CoreGraphicsSurface* __this, void** path, ::g::Fuse::Drawing::Brush* fill, int* fillRule);
void CoreGraphicsSurface__FillPathLinearGradient_fn(void** cp, void** path, void** gradient, float* sx, float* sy, float* ex, float* ey, bool* eoFill);
void CoreGraphicsSurface__FillPathSolidColor_fn(void** cp, void** path, float* r, float* g, float* b, float* a, bool* eoFill);
void CoreGraphicsSurface__NewContext_fn(void** __retval);
void CoreGraphicsSurface__PathClose_fn(void** path);
void CoreGraphicsSurface__PathCreateMutable_fn(void** __retval);
void CoreGraphicsSurface__PathCurveTo_fn(void** path, float* x, float* y, float* ax, float* ay, float* bx, float* by);
void CoreGraphicsSurface__PathLineTo_fn(void** path, float* x, float* y);
void CoreGraphicsSurface__PathMoveTo_fn(void** path, float* x, float* y);
void CoreGraphicsSurface__PathRelease_fn(void** path);
void CoreGraphicsSurface__PixelFromPoint_fn(CoreGraphicsSurface* __this, ::g::Uno::Float2* point, ::g::Uno::Float2* __retval);
void CoreGraphicsSurface__PopTransform_fn(CoreGraphicsSurface* __this);
void CoreGraphicsSurface__Prepare_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::Brush* brush);
void CoreGraphicsSurface__PrepareLinearGradient_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::LinearGradient* lg);
void CoreGraphicsSurface__PushTransform_fn(CoreGraphicsSurface* __this, ::g::Uno::Float4x4* t);
void CoreGraphicsSurface__ReleaseGradient_fn(void** cp, void** gradient);
void CoreGraphicsSurface__ReleaseImage_fn(void** cp, void** gradient);
void CoreGraphicsSurface__RestoreContextState_fn(void** cp);
void CoreGraphicsSurface__SaveContextState_fn(void** cp);
void CoreGraphicsSurface__StrokePath_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Stroke* stroke);
void CoreGraphicsSurface__Unprepare_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::Brush* brush);
void CoreGraphicsSurface__VerifyCreated_fn(CoreGraphicsSurface* __this);

struct CoreGraphicsSurface : ::g::Fuse::Drawing::Surface
{
    void* _context;
    uStrong< ::g::Uno::Collections::Dictionary*> _gradientBrushes;
    uStrong< ::g::Uno::Collections::Dictionary*> _imageBrushes;
    float _pixelsPerPoint;
    static bool _strokeWarning_;
    static bool& _strokeWarning() { return _strokeWarning_; }
    uStrong< ::g::Uno::Collections::List*> _temp;
    static bool _transformWarn_;
    static bool& _transformWarn() { return _transformWarn_; }

    void ctor_1();
    ::g::Uno::Float2 AddSegments(void* path, uObject* segments, ::g::Uno::Float2 prevPoint);
    void FillPathImpl(void* path, ::g::Fuse::Drawing::Brush* fill, int fillRule);
    ::g::Uno::Float2 PixelFromPoint(::g::Uno::Float2 point);
    void PrepareImageFill(::g::Fuse::Drawing::ImageFill* img) { (((CoreGraphicsSurface_type*)__type)->fp_PrepareImageFill)(this, img); }
    void PrepareLinearGradient(::g::Fuse::Drawing::LinearGradient* lg);
    void VerifyBegun() { (((CoreGraphicsSurface_type*)__type)->fp_VerifyBegun)(this); }
    void VerifyCreated();
    static void CGFloatDeleteArray(void* a);
    static void* CGFloatNewArray(int size);
    static void CGFloatSet(void* a, int index, double value);
    static void ConcatTransform(void* cp, float m11, float m12, float m21, float m22, float m31, float m32);
    static void* CreateLinearGradient(void* cp, void* colors, void* stops, int count);
    static void* CreateStrokedPath(void* path, float width, int fjoin, int fcap, float miterLimit);
    static void DeleteContext(void* cp);
    static void FillPathImage(void* cp, void* path, void* image, float originX, float originY, float tileSizeX, float tileSizeY, bool eoFill);
    static void FillPathLinearGradient(void* cp, void* path, void* gradient, float sx, float sy, float ex, float ey, bool eoFill);
    static void FillPathSolidColor(void* cp, void* path, float r, float g, float b, float a, bool eoFill);
    static void* NewContext();
    static void PathClose(void* path);
    static void* PathCreateMutable();
    static void PathCurveTo(void* path, float x, float y, float ax, float ay, float bx, float by);
    static void PathLineTo(void* path, float x, float y);
    static void PathMoveTo(void* path, float x, float y);
    static void PathRelease(void* path);
    static void ReleaseGradient(void* cp, void* gradient);
    static void ReleaseImage(void* cp, void* gradient);
    static void RestoreContextState(void* cp);
    static void SaveContextState(void* cp);
};
// }

}}} // ::g::Fuse::Drawing
