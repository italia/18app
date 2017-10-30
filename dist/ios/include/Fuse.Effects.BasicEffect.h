// This file was generated based on /usr/local/share/uno/Packages/Fuse.Effects/1.3.1/BasicEffect.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Effects{struct BasicEffect;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Rect;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace Effects{

// public abstract class BasicEffect :7
// {
struct BasicEffect_type : ::g::Fuse::Effects::Effect_type
{
    void(*fp_OnRender)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*);
};

BasicEffect_type* BasicEffect_typeof();
void BasicEffect__ctor_3_fn(BasicEffect* __this, int* effectType);
void BasicEffect__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval);
void BasicEffect__GetLocalElementRect_fn(BasicEffect* __this, ::g::Uno::Rect* __retval);
void BasicEffect__Render_fn(BasicEffect* __this, ::g::Fuse::DrawContext* dc);

struct BasicEffect : ::g::Fuse::Effects::Effect
{
    void ctor_3(int effectType);
    ::g::Uno::Rect GetLocalElementRect();
    void OnRender(::g::Fuse::DrawContext* dc, ::g::Uno::Rect region);
    static ::g::Uno::Recti ConservativelySnapToCoveringIntegers(::g::Uno::Rect r);
};

}}} // ::g::Fuse::Effects

#include <Uno.Rect.h>
#include <Uno.Recti.h>

namespace g{
namespace Fuse{
namespace Effects{

inline void BasicEffect::OnRender(::g::Fuse::DrawContext* dc, ::g::Uno::Rect region) { (((BasicEffect_type*)__type)->fp_OnRender)(this, dc, &region); }
// }

}}} // ::g::Fuse::Effects
