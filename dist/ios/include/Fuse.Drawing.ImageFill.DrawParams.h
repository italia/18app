// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Drawing/ImageFill.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill__DrawParams;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public struct ImageFill.DrawParams :108
// {
uStructType* ImageFill__DrawParams_typeof();

struct ImageFill__DrawParams
{
    ::g::Uno::Float2 Origin;
    ::g::Uno::Float2 Size;
    ::g::Uno::Float4 UVClip;
    uStrong< ::g::Uno::Graphics::Texture2D*> Texture;
    ::g::Uno::Float2 TexCoordBias1;
    ::g::Uno::Float2 TexCoordBias2;
    ::g::Uno::Float2 TexCoordScale1;
    ::g::Uno::Float2 TexCoordScale2;
    ::g::Uno::Graphics::SamplerState SamplerState;
    bool NeedFract;
};
// }

}}} // ::g::Fuse::Drawing
