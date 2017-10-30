// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/Cache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Elements{struct CacheTile;}}}
namespace g{namespace Fuse{struct CacheFramebuffer;}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal struct CacheTile :10
// {
uStructType* CacheTile_typeof();
void CacheTile__EnsureHasFramebuffer_fn(CacheTile* __this);
void CacheTile__get_Texture_fn(CacheTile* __this, ::g::Uno::Graphics::Texture2D** __retval);

struct CacheTile
{
    ::g::Uno::Float4x4 _compositMatrix;
    uStrong< ::g::Fuse::CacheFramebuffer*> _framebuffer;
    ::g::Uno::Recti _rect;

    void EnsureHasFramebuffer();
    ::g::Uno::Graphics::Texture2D* Texture();
};
// }

}}} // ::g::Fuse::Elements
