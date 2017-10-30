// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Resources/ProxyImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{namespace Resources{struct ProxyImageSource;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class ProxyImageSource :6
// {
uType* ProxyImageSource_typeof();
void ProxyImageSource__ctor__fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* outer);
void ProxyImageSource__Attach_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* impl);
void ProxyImageSource__DefaultSetPolicy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* mp);
void ProxyImageSource__get_Density_fn(ProxyImageSource* __this, float* __retval);
void ProxyImageSource__set_Density_fn(ProxyImageSource* __this, float* value);
void ProxyImageSource__GetTexture_fn(ProxyImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void ProxyImageSource__get_Impl_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval);
void ProxyImageSource__New1_fn(::g::Fuse::Resources::ImageSource* outer, ProxyImageSource** __retval);
void ProxyImageSource__OnPinChanged_fn(ProxyImageSource* __this);
void ProxyImageSource__get_PixelSize_fn(ProxyImageSource* __this, ::g::Uno::Int2* __retval);
void ProxyImageSource__ProxyOnChanged_fn(ProxyImageSource* __this, uObject* s, ::g::Uno::EventArgs* a);
void ProxyImageSource__ProxyOnError_fn(ProxyImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a);
void ProxyImageSource__Release_fn(ProxyImageSource* __this);
void ProxyImageSource__Reload_fn(ProxyImageSource* __this);
void ProxyImageSource__get_Size_fn(ProxyImageSource* __this, ::g::Uno::Float2* __retval);
void ProxyImageSource__get_State_fn(ProxyImageSource* __this, int* __retval);
void ProxyImageSource__UpdatePolicy_fn(ProxyImageSource* __this);

struct ProxyImageSource : uObject
{
    float _density;
    bool _hasDensity;
    uStrong< ::g::Fuse::Resources::ImageSource*> _impl;
    bool _isDefaultPolicy;
    uStrong< ::g::Fuse::Resources::ImageSource*> _outer;
    uStrong< ::g::Fuse::Resources::MemoryPolicy*> _policy;

    void ctor_(::g::Fuse::Resources::ImageSource* outer);
    void Attach(::g::Fuse::Resources::ImageSource* impl);
    void DefaultSetPolicy(::g::Fuse::Resources::MemoryPolicy* mp);
    float Density();
    void Density(float value);
    ::g::Uno::Graphics::Texture2D* GetTexture();
    ::g::Fuse::Resources::ImageSource* Impl();
    void OnPinChanged();
    ::g::Uno::Int2 PixelSize();
    void ProxyOnChanged(uObject* s, ::g::Uno::EventArgs* a);
    void ProxyOnError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a);
    void Release();
    void Reload();
    ::g::Uno::Float2 Size();
    int State();
    void UpdatePolicy();
    static ProxyImageSource* New1(::g::Fuse::Resources::ImageSource* outer);
};
// }

}}} // ::g::Fuse::Resources
