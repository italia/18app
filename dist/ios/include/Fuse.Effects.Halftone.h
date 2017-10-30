// This file was generated based on /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Halftone.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Halftone;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Halftone :12
// {
::g::Fuse::Effects::BasicEffect_type* Halftone_typeof();
void Halftone__get_DotTint_fn(Halftone* __this, float* __retval);
void Halftone__set_DotTint_fn(Halftone* __this, float* value);
void Halftone__get_Intensity_fn(Halftone* __this, float* __retval);
void Halftone__set_Intensity_fn(Halftone* __this, float* value);
void Halftone__OnRender_fn(Halftone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void Halftone__get_PaperTint_fn(Halftone* __this, float* __retval);
void Halftone__set_PaperTint_fn(Halftone* __this, float* value);
void Halftone__get_Smoothness_fn(Halftone* __this, float* __retval);
void Halftone__set_Smoothness_fn(Halftone* __this, float* value);
void Halftone__get_Spacing_fn(Halftone* __this, float* __retval);
void Halftone__set_Spacing_fn(Halftone* __this, float* value);

struct Halftone : ::g::Fuse::Effects::BasicEffect
{
    float _dotTint;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_4b464452;
    float _intensity;
    float _paperTint;
    float _smoothness;
    float _spacing;
    ::g::Uno::Float4x4 OnRender_LocalTransform_4b464452_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_4b464452_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_4b464452_7_2_1;

    float DotTint();
    void DotTint(float value);
    float Intensity();
    void Intensity(float value);
    float PaperTint();
    void PaperTint(float value);
    float Smoothness();
    void Smoothness(float value);
    float Spacing();
    void Spacing(float value);
};
// }

}}} // ::g::Fuse::Effects
