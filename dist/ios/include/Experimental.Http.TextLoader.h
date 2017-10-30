// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/1.3.1/TextLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Http.Loader.h>
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Experimental{namespace Http{struct TextLoader;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Experimental{
namespace Http{

// internal sealed class TextLoader :8
// {
::g::Experimental::Http::Loader_type* TextLoader_typeof();
void TextLoader__CompleteLoading_fn(TextLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp);
void TextLoader__LoadCacheData_fn(TextLoader* __this);
void TextLoader__LoadCacheRaw_fn(TextLoader* __this, uObject* record, bool* __retval);
void TextLoader__OnBufferLoaded_fn(TextLoader* __this, uString* data);
void TextLoader__PrepareRequest_fn(TextLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);

struct TextLoader : ::g::Experimental::Http::Loader
{
    uStrong<uString*> _loadedCache;
    uStrong<uDelegate*> Callback;

    void OnBufferLoaded(uString* data);
};
// }

}}} // ::g::Experimental::Http
