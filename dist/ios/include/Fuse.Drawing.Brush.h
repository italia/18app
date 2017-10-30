// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Brush.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract class Brush :32
// {
struct Brush_type : uType
{
    void(*fp_get_IsCompletelyTransparent)(::g::Fuse::Drawing::Brush*, bool*);
    void(*fp_OnPinned)(::g::Fuse::Drawing::Brush*);
    void(*fp_OnPrepare)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*);
    void(*fp_OnUnpinned)(::g::Fuse::Drawing::Brush*);
};

Brush_type* Brush_typeof();
void Brush__ctor_1_fn(Brush* __this);
void Brush__get_IsCompletelyTransparent_fn(Brush* __this, bool* __retval);
void Brush__get_IsPinned_fn(Brush* __this, bool* __retval);
void Brush__OnPinned_fn(Brush* __this);
void Brush__OnPrepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Brush__OnUnpinned_fn(Brush* __this);
void Brush__Pin_fn(Brush* __this);
void Brush__Prepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Brush__Unpin_fn(Brush* __this);

struct Brush : ::g::Uno::UX::PropertyObject
{
    int _pinCount;

    void ctor_1();
    bool IsCompletelyTransparent() { bool __retval; return (((Brush_type*)__type)->fp_get_IsCompletelyTransparent)(this, &__retval), __retval; }
    bool IsPinned();
    void OnPinned() { (((Brush_type*)__type)->fp_OnPinned)(this); }
    void OnPrepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void OnUnpinned() { (((Brush_type*)__type)->fp_OnUnpinned)(this); }
    void Pin();
    void Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void Unpin();
    static void OnPinned(Brush* __this) { Brush__OnPinned_fn(__this); }
    static void OnPrepare(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    static void OnUnpinned(Brush* __this) { Brush__OnUnpinned_fn(__this); }
    static bool IsCompletelyTransparent(Brush* __this) { bool __retval; return Brush__get_IsCompletelyTransparent_fn(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Drawing

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Drawing{

inline void Brush::OnPrepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize) { (((Brush_type*)__type)->fp_OnPrepare)(this, dc, &canvasSize); }
inline void Brush::OnPrepare(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize) { Brush__OnPrepare_fn(__this, dc, &canvasSize); }
// }

}}} // ::g::Fuse::Drawing
