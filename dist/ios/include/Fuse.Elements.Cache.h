// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/Cache.Heuristic.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.CacheTile.h>
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Elements{struct Cache;}}}
namespace g{namespace Fuse{namespace Elements{struct CacheHelper;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal partial sealed class Cache :8
// {
uType* Cache_typeof();
void Cache__ctor__fn(Cache* __this, ::g::Fuse::Elements::Element* elm);
void Cache__Blit_fn(Cache* __this, ::g::Fuse::DrawContext* dc, float* opacity);
void Cache__get_CacheTiles_fn(Cache* __this, uArray** __retval);
void Cache__CalculateCompositMatrix_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* cachingRect, ::g::Uno::Float4x4* __retval);
void Cache__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval);
void Cache__DrawCached_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Cache__DrawHeuristically_fn(Cache* __this, ::g::Fuse::DrawContext* dc);
void Cache__GetCachePreference_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Cache__GetCachePreferenceCore_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Cache__GetCachingRect_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect, bool* __retval);
void Cache__GetCachingRect1_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect, bool* __retval);
void Cache__Invalidate_fn(Cache* __this);
void Cache__get_MaxTileSize_fn(Cache* __this, int* __retval);
void Cache__New1_fn(::g::Fuse::Elements::Element* elm, Cache** __retval);
void Cache__PinAndValidate_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Cache__Repaint_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile* tile);
void Cache__Unpin_fn(Cache* __this);

struct Cache : uObject
{
    ::g::Uno::Recti _cacheRect;
    uStrong<uArray*> _cacheTiles;
    uWeak< ::g::Fuse::Elements::Element*> _element;
    bool _isValid;
    static uSStrong< ::g::Fuse::Elements::CacheHelper*> cacheHelper_;
    static uSStrong< ::g::Fuse::Elements::CacheHelper*>& cacheHelper() { return cacheHelper_; }

    void ctor_(::g::Fuse::Elements::Element* elm);
    void Blit(::g::Fuse::DrawContext* dc, float opacity);
    uArray* CacheTiles();
    ::g::Uno::Float4x4 CalculateCompositMatrix(::g::Fuse::DrawContext* dc, ::g::Uno::Recti cachingRect);
    bool DrawCached(::g::Fuse::DrawContext* dc);
    void DrawHeuristically(::g::Fuse::DrawContext* dc);
    bool GetCachePreference(::g::Fuse::DrawContext* dc);
    bool GetCachePreferenceCore(::g::Fuse::DrawContext* dc);
    bool GetCachingRect(::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect);
    void Invalidate();
    int MaxTileSize();
    bool PinAndValidate(::g::Fuse::DrawContext* dc);
    void Repaint(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile tile);
    void Unpin();
    static ::g::Uno::Recti ConservativelySnapToCoveringIntegers(::g::Uno::Rect r);
    static bool GetCachingRect1(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect);
    static Cache* New1(::g::Fuse::Elements::Element* elm);
};
// }

}}} // ::g::Fuse::Elements
