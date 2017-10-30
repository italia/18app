// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/Surface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract class Surface :27
// {
struct Surface_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Begin)(::g::Fuse::Drawing::Surface*, ::g::Fuse::DrawContext*, ::g::Uno::Graphics::Framebuffer*, float*);
    void(*fp_CreatePath)(::g::Fuse::Drawing::Surface*, uObject*, int*, ::g::Fuse::Drawing::SurfacePath**);
    void(*fp_Dispose)(::g::Fuse::Drawing::Surface*);
    void(*fp_DisposePath)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*);
    void(*fp_End)(::g::Fuse::Drawing::Surface*);
    void(*fp_FillPath)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*, ::g::Fuse::Drawing::Brush*);
    void(*fp_PopTransform)(::g::Fuse::Drawing::Surface*);
    void(*fp_Prepare)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::Brush*);
    void(*fp_PushTransform)(::g::Fuse::Drawing::Surface*, ::g::Uno::Float4x4*);
    void(*fp_StrokePath)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*, ::g::Fuse::Drawing::Stroke*);
    void(*fp_Unprepare)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::Brush*);
};

Surface_type* Surface_typeof();
void Surface__ctor__fn(Surface* __this);
void Surface__Draw_fn(Surface* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* elm, uObject* drawable);
void Surface__DrawLocal_fn(Surface* __this, uObject* drawable);
void Surface__get_ElementSize_fn(Surface* __this, ::g::Uno::Float2* __retval);
void Surface__set_ElementSize_fn(Surface* __this, ::g::Uno::Float2* value);
void Surface__init_DrawCalls_fn(Surface* __this);
void Surface__SetElementSize_fn(Surface* __this, ::g::Uno::Float2* size);

struct Surface : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7678ae3a;
    ::g::Uno::Float4x4 Draw_LocalTransform_7678ae3a_4_9_2;
    ::g::Uno::Float4x4 Draw_LocalTransform_7678ae3a_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_VertexData_7678ae3a_7_2_1;
    uStrong<uObject*> Owner;
    ::g::Uno::Float2 _ElementSize;

    void ctor_();
    void Begin(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float pixelsPerPoint) { (((Surface_type*)__type)->fp_Begin)(this, dc, fb, &pixelsPerPoint); }
    ::g::Fuse::Drawing::SurfacePath* CreatePath(uObject* segments, int fillRule) { ::g::Fuse::Drawing::SurfacePath* __retval; return (((Surface_type*)__type)->fp_CreatePath)(this, segments, &fillRule, &__retval), __retval; }
    void Dispose() { (((Surface_type*)__type)->fp_Dispose)(this); }
    void DisposePath(::g::Fuse::Drawing::SurfacePath* path) { (((Surface_type*)__type)->fp_DisposePath)(this, path); }
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* elm, uObject* drawable);
    void DrawLocal(uObject* drawable);
    ::g::Uno::Float2 ElementSize();
    void ElementSize(::g::Uno::Float2 value);
    void End() { (((Surface_type*)__type)->fp_End)(this); }
    void FillPath(::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Brush* fill) { (((Surface_type*)__type)->fp_FillPath)(this, path, fill); }
    void init_DrawCalls();
    void PopTransform() { (((Surface_type*)__type)->fp_PopTransform)(this); }
    void Prepare(::g::Fuse::Drawing::Brush* brush) { (((Surface_type*)__type)->fp_Prepare)(this, brush); }
    void PushTransform(::g::Uno::Float4x4 transform) { (((Surface_type*)__type)->fp_PushTransform)(this, &transform); }
    void SetElementSize(::g::Uno::Float2 size);
    void StrokePath(::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Stroke* stroke) { (((Surface_type*)__type)->fp_StrokePath)(this, path, stroke); }
    void Unprepare(::g::Fuse::Drawing::Brush* brush) { (((Surface_type*)__type)->fp_Unprepare)(this, brush); }
};
// }

}}} // ::g::Fuse::Drawing
