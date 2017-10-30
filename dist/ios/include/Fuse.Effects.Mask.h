// This file was generated based on /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/Mask.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Mask;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Mask :13
// {
struct Mask_type : ::g::Fuse::Effects::BasicEffect_type
{
    ::g::Fuse::Internal::IImageContainerOwner interface6;
};

Mask_type* Mask_typeof();
void Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn(Mask* __this);
void Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn(Mask* __this);
void Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn(Mask* __this);
void Mask__ModifyRenderBounds_fn(Mask* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval);
void Mask__OnRender_fn(Mask* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void Mask__OnRooted_fn(Mask* __this);
void Mask__OnUnrooted_fn(Mask* __this);

struct Mask : ::g::Fuse::Effects::BasicEffect
{
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_97b14dfa;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e56a2f35;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f63e1f3f;
    int _mode;
    ::g::Uno::Float4x4 OnRender_LocalTransform_e56a2f35_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_e56a2f35_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_97b14dfa_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_e56a2f35_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_f63e1f3f_7_2_1;
};
// }

}}} // ::g::Fuse::Effects
