// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/CacheFramebuffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct CacheFramebuffer;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{

// internal sealed class CacheFramebuffer :8
// {
uType* CacheFramebuffer_typeof();
void CacheFramebuffer__ctor__fn(CacheFramebuffer* __this, int* width, int* height, int* format, int* flags);
void CacheFramebuffer__Collect_fn(CacheFramebuffer* __this);
void CacheFramebuffer__Dispose_fn(CacheFramebuffer* __this);
void CacheFramebuffer__EnsurePinned_fn(CacheFramebuffer* __this);
void CacheFramebuffer__get_Flags_fn(CacheFramebuffer* __this, int* __retval);
void CacheFramebuffer__set_Flags_fn(CacheFramebuffer* __this, int* value);
void CacheFramebuffer__get_Format_fn(CacheFramebuffer* __this, int* __retval);
void CacheFramebuffer__set_Format_fn(CacheFramebuffer* __this, int* value);
void CacheFramebuffer__get_Framebuffer_fn(CacheFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval);
void CacheFramebuffer__get_FramesSinceLastUse_fn(CacheFramebuffer* __this, int* __retval);
void CacheFramebuffer__get_Height_fn(CacheFramebuffer* __this, int* __retval);
void CacheFramebuffer__set_Height_fn(CacheFramebuffer* __this, int* value);
void CacheFramebuffer__get_IsContentValid_fn(CacheFramebuffer* __this, bool* __retval);
void CacheFramebuffer__get_IsPinned_fn(CacheFramebuffer* __this, bool* __retval);
void CacheFramebuffer__New1_fn(int* width, int* height, int* format, int* flags, CacheFramebuffer** __retval);
void CacheFramebuffer__Pin_fn(CacheFramebuffer* __this);
void CacheFramebuffer__Unpin_fn(CacheFramebuffer* __this, bool* validate);
void CacheFramebuffer__get_Width_fn(CacheFramebuffer* __this, int* __retval);
void CacheFramebuffer__set_Width_fn(CacheFramebuffer* __this, int* value);

struct CacheFramebuffer : uObject
{
    uStrong< ::g::Uno::Graphics::Framebuffer*> _fb;
    bool _isContentValid;
    bool _isPinned;
    int _lastFrameUsed;
    int _Flags;
    int _Format;
    int _Height;
    int _Width;

    void ctor_(int width, int height, int format, int flags);
    void Collect();
    void Dispose();
    void EnsurePinned();
    int Flags();
    void Flags(int value);
    int Format();
    void Format(int value);
    ::g::Uno::Graphics::Framebuffer* Framebuffer();
    int FramesSinceLastUse();
    int Height();
    void Height(int value);
    bool IsContentValid();
    bool IsPinned();
    void Pin();
    void Unpin(bool validate);
    int Width();
    void Width(int value);
    static CacheFramebuffer* New1(int width, int height, int format, int flags);
};
// }

}} // ::g::Fuse
