// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/Separator.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct Separator;}

namespace g{

// public partial sealed class Separator :2
// {
::g::Fuse::Controls::Shape_type* Separator_typeof();
void Separator__ctor_8_fn(Separator* __this);
void Separator__InitializeUX_fn(Separator* __this);
void Separator__New4_fn(Separator** __retval);

struct Separator : ::g::Fuse::Controls::Rectangle
{
    void ctor_8();
    void InitializeUX();
    static Separator* New4();
};
// }

} // ::g
