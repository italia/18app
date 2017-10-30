// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Resources/HttpImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.LoadingImageSource.h>
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSourceImpl;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class HttpImageSourceImpl :94
// {
::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof();
void HttpImageSourceImpl__ctor_3_fn(HttpImageSourceImpl* __this, uString* url);
void HttpImageSourceImpl__AttemptLoad_fn(HttpImageSourceImpl* __this);
void HttpImageSourceImpl__Fail_fn(HttpImageSourceImpl* __this, uString* msg, ::g::Uno::Exception* e);
void HttpImageSourceImpl__FailureCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Exception* e);
void HttpImageSourceImpl__HttpCallback_fn(HttpImageSourceImpl* __this, ::g::Experimental::Http::HttpResponseHeader* response, ::g::Uno::Buffer* data);
void HttpImageSourceImpl__LoadFailed_fn(HttpImageSourceImpl* __this, uString* reason);
void HttpImageSourceImpl__New2_fn(uString* url, HttpImageSourceImpl** __retval);
void HttpImageSourceImpl__SuccessCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture);
void HttpImageSourceImpl__get_Url_fn(HttpImageSourceImpl* __this, uString** __retval);

struct HttpImageSourceImpl : ::g::Fuse::Resources::LoadingImageSource
{
    uStrong<uString*> _contentType;
    uStrong<uString*> _url;

    void ctor_3(uString* url);
    void Fail(uString* msg, ::g::Uno::Exception* e);
    void FailureCallback(::g::Uno::Exception* e);
    void HttpCallback(::g::Experimental::Http::HttpResponseHeader* response, ::g::Uno::Buffer* data);
    void LoadFailed(uString* reason);
    void SuccessCallback(::g::Uno::Graphics::Texture2D* texture);
    uString* Url();
    static HttpImageSourceImpl* New2(uString* url);
};
// }

}}} // ::g::Fuse::Resources
