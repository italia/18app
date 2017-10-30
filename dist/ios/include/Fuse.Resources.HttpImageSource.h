// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Resources/HttpImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{namespace Resources{struct ProxyImageSource;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class HttpImageSource :23
// {
::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof();
void HttpImageSource__set_DefaultPolicy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void HttpImageSource__get_Density_fn(HttpImageSource* __this, float* __retval);
void HttpImageSource__set_Density_fn(HttpImageSource* __this, float* value);
void HttpImageSource__GetTexture_fn(HttpImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void HttpImageSource__OnPinChanged_fn(HttpImageSource* __this);
void HttpImageSource__get_PixelSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval);
void HttpImageSource__Reload_fn(HttpImageSource* __this);
void HttpImageSource__get_Size_fn(HttpImageSource* __this, ::g::Uno::Float2* __retval);
void HttpImageSource__get_SizeDensity_fn(HttpImageSource* __this, float* __retval);
void HttpImageSource__get_State_fn(HttpImageSource* __this, int* __retval);
void HttpImageSource__get_Url_fn(HttpImageSource* __this, uString** __retval);
void HttpImageSource__set_Url_fn(HttpImageSource* __this, uString* value);

struct HttpImageSource : ::g::Fuse::Resources::ImageSource
{
    uStrong< ::g::Fuse::Resources::ProxyImageSource*> _proxy;

    void DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value);
    float Density();
    void Density(float value);
    uString* Url();
    void Url(uString* value);
};
// }

}}} // ::g::Fuse::Resources
