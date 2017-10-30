// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/1.3.1/BinaryLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Http.Loader.h>
namespace g{namespace Experimental{namespace Http{struct BinaryLoader;}}}
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Experimental{
namespace Http{

// internal sealed class BinaryLoader :8
// {
::g::Experimental::Http::Loader_type* BinaryLoader_typeof();
void BinaryLoader__ctor_1_fn(BinaryLoader* __this);
void BinaryLoader__CompleteLoading_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp);
void BinaryLoader__LoadCacheData_fn(BinaryLoader* __this);
void BinaryLoader__LoadCacheRaw_fn(BinaryLoader* __this, uObject* record, bool* __retval);
void BinaryLoader__New1_fn(BinaryLoader** __retval);
void BinaryLoader__OnBufferLoaded_fn(BinaryLoader* __this, uArray* data);
void BinaryLoader__PrepareRequest_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);

struct BinaryLoader : ::g::Experimental::Http::Loader
{
    uStrong< ::g::Uno::Buffer*> _loadedCache;
    uStrong<uDelegate*> Callback;

    void ctor_1();
    void OnBufferLoaded(uArray* data);
    static BinaryLoader* New1();
};
// }

}}} // ::g::Experimental::Http
