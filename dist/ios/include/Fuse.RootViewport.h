// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/RootViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Fuse{struct RootViewport;}}

namespace g{
namespace Fuse{

// public class RootViewport :33
// {
struct RootViewport_type : ::g::Fuse::Visual_type
{
    ::g::Fuse::IViewport interface12;
    ::g::Uno::IDisposable interface13;
    ::g::Fuse::ICommonViewport interface14;
};

RootViewport_type* RootViewport_typeof();
void RootViewport__ctor_3_fn(RootViewport* __this);
void RootViewport__ctor_4_fn(RootViewport* __this, uObject* frame);
void RootViewport__Draw_fn(RootViewport* __this, ::g::Fuse::DrawContext* dc);
void RootViewport__EstablishSize_fn(RootViewport* __this);
void RootViewport__EstablishSizeInternals_fn(RootViewport* __this);
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a);
void RootViewport__get_PixelSize_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__get_PixelsPerPoint_fn(RootViewport* __this, float* __retval);
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Fuse::Ray* __retval);
void RootViewport__add_Resized_fn(RootViewport* __this, uDelegate* value);
void RootViewport__remove_Resized_fn(RootViewport* __this, uDelegate* value);
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__UnoIDisposableDispose_fn(RootViewport* __this);
void RootViewport__get_VisualContext_fn(RootViewport* __this, int* __retval);
void RootViewport__WorldToLocalRay_fn(RootViewport* __this, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval);

struct RootViewport : ::g::Fuse::Visual
{
    uStrong<uObject*> _frame;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    float _overridePixelsPerPoint;
    ::g::Uno::Float2 _pixelSize;
    float _pixelsPerOSPoint;
    float _pixelsPerPoint;
    bool _sizeOverridden;
    uStrong<uObject*> Frustum;
    uStrong<uDelegate*> Resized1;

    void ctor_3();
    void ctor_4(uObject* frame);
    void EstablishSize();
    void EstablishSizeInternals();
    void OnResized(uObject* s, uObject* a);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Fuse::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    void add_Resized(uDelegate* value);
    void remove_Resized(uDelegate* value);
    ::g::Uno::Float2 Size();
    ::g::Fuse::Ray WorldToLocalRay(uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where);
};
// }

}} // ::g::Fuse
