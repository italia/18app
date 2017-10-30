// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Resources/TextureImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct TextureImageSource;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class TextureImageSource :16
// {
::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof();
void TextureImageSource__get_Density_fn(TextureImageSource* __this, float* __retval);
void TextureImageSource__set_Density_fn(TextureImageSource* __this, float* value);
void TextureImageSource__GetTexture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void TextureImageSource__get_PixelSize_fn(TextureImageSource* __this, ::g::Uno::Int2* __retval);
void TextureImageSource__get_Size_fn(TextureImageSource* __this, ::g::Uno::Float2* __retval);
void TextureImageSource__get_SizeDensity_fn(TextureImageSource* __this, float* __retval);
void TextureImageSource__get_State_fn(TextureImageSource* __this, int* __retval);

struct TextureImageSource : ::g::Fuse::Resources::ImageSource
{
    float _density;
    uStrong< ::g::Uno::Graphics::Texture2D*> _texture;

    float Density();
    void Density(float value);
};
// }

}}} // ::g::Fuse::Resources
