// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Effects/Effect.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Effects{struct Effect;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}

namespace g{
namespace Fuse{
namespace Effects{

// public abstract class Effect :15
// {
struct Effect_type : ::g::Fuse::Node_type
{
    void(*fp_get_Active)(::g::Fuse::Effects::Effect*, bool*);
    void(*fp_ModifyRenderBounds)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**);
    void(*fp_Render)(::g::Fuse::Effects::Effect*, ::g::Fuse::DrawContext*);
};

Effect_type* Effect_typeof();
void Effect__ctor_2_fn(Effect* __this, int* effectType);
void Effect__get_Active_fn(Effect* __this, bool* __retval);
void Effect__get_Element_fn(Effect* __this, ::g::Fuse::Elements::Element** __retval);
void Effect__set_Element_fn(Effect* __this, ::g::Fuse::Elements::Element* value);
void Effect__ModifyRenderBounds_fn(Effect* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval);
void Effect__OnRenderBoundsChanged_fn(Effect* __this);
void Effect__OnRenderingChanged_fn(Effect* __this);
void Effect__OnRooted_fn(Effect* __this);
void Effect__OnUnrooted_fn(Effect* __this);
void Effect__add_RenderBoundsChanged_fn(Effect* __this, uDelegate* value);
void Effect__remove_RenderBoundsChanged_fn(Effect* __this, uDelegate* value);
void Effect__add_RenderingChanged_fn(Effect* __this, uDelegate* value);
void Effect__remove_RenderingChanged_fn(Effect* __this, uDelegate* value);
void Effect__get_Type_fn(Effect* __this, int* __retval);

struct Effect : ::g::Fuse::Node
{
    int _effectType;
    uStrong< ::g::Fuse::Elements::Element*> _Element;
    uStrong<uDelegate*> RenderBoundsChanged1;
    uStrong<uDelegate*> RenderingChanged1;

    void ctor_2(int effectType);
    bool Active() { bool __retval; return (((Effect_type*)__type)->fp_get_Active)(this, &__retval), __retval; }
    ::g::Fuse::Elements::Element* Element();
    void Element(::g::Fuse::Elements::Element* value);
    ::g::Fuse::VisualBounds* ModifyRenderBounds(::g::Fuse::VisualBounds* inBounds) { ::g::Fuse::VisualBounds* __retval; return (((Effect_type*)__type)->fp_ModifyRenderBounds)(this, inBounds, &__retval), __retval; }
    void OnRenderBoundsChanged();
    void OnRenderingChanged();
    void Render(::g::Fuse::DrawContext* dc) { (((Effect_type*)__type)->fp_Render)(this, dc); }
    void add_RenderBoundsChanged(uDelegate* value);
    void remove_RenderBoundsChanged(uDelegate* value);
    void add_RenderingChanged(uDelegate* value);
    void remove_RenderingChanged(uDelegate* value);
    int Type();
    static ::g::Fuse::VisualBounds* ModifyRenderBounds(Effect* __this, ::g::Fuse::VisualBounds* inBounds) { ::g::Fuse::VisualBounds* __retval; return Effect__ModifyRenderBounds_fn(__this, inBounds, &__retval), __retval; }
    static bool Active(Effect* __this) { bool __retval; return Effect__get_Active_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Effects
