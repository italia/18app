// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/HitTestContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Ray.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public sealed class HitTestContext :19
// {
uType* HitTestContext_typeof();
void HitTestContext__ctor__fn(HitTestContext* __this, ::g::Uno::Float2* windowPoint, uDelegate* callback);
void HitTestContext__get_Callback_fn(HitTestContext* __this, uDelegate** __retval);
void HitTestContext__Dispose_fn(HitTestContext* __this);
void HitTestContext__Hit_fn(HitTestContext* __this, ::g::Fuse::Visual* obj);
void HitTestContext__get_LocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval);
void HitTestContext__New1_fn(::g::Uno::Float2* windowPoint, uDelegate* callback, HitTestContext** __retval);
void HitTestContext__PopLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp);
void HitTestContext__PushLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp, ::g::Uno::Float2* __retval);
void HitTestContext__PushWorldRay_fn(HitTestContext* __this, ::g::Fuse::Ray* n, ::g::Fuse::Ray* __retval);
void HitTestContext__get_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval);
void HitTestContext__set_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* value);

struct HitTestContext : uObject
{
    uStrong<uDelegate*> _callback;
    ::g::Uno::Float2 _localPoint;
    ::g::Fuse::Ray _worldRay;
    ::g::Uno::Float2 _WindowPoint;

    void ctor_(::g::Uno::Float2 windowPoint, uDelegate* callback);
    uDelegate* Callback();
    void Dispose();
    void Hit(::g::Fuse::Visual* obj);
    ::g::Uno::Float2 LocalPoint();
    void PopLocalPoint(::g::Uno::Float2 lp);
    ::g::Uno::Float2 PushLocalPoint(::g::Uno::Float2 lp);
    ::g::Fuse::Ray PushWorldRay(::g::Fuse::Ray n);
    ::g::Uno::Float2 WindowPoint();
    void WindowPoint(::g::Uno::Float2 value);
    static HitTestContext* New1(::g::Uno::Float2 windowPoint, uDelegate* callback);
};
// }

}} // ::g::Fuse
