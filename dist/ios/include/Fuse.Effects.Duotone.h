// This file was generated based on /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Duotone.uno.
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
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Duotone;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Duotone :13
// {
::g::Fuse::Effects::BasicEffect_type* Duotone_typeof();
void Duotone__get_Amount_fn(Duotone* __this, float* __retval);
void Duotone__set_Amount_fn(Duotone* __this, float* value);
void Duotone__OnRender_fn(Duotone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);

struct Duotone : ::g::Fuse::Effects::BasicEffect
{
    float _amount;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_80b7f54b;
    ::g::Uno::Float3 _light;
    ::g::Uno::Float3 _shadow;
    ::g::Uno::Float4x4 OnRender_LocalTransform_80b7f54b_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_80b7f54b_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_80b7f54b_7_2_1;

    float Amount();
    void Amount(float value);
};
// }

}}} // ::g::Fuse::Effects
