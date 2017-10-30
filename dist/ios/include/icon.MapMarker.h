// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/icon.MapMarker.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace icon{struct MapMarker;}}

namespace g{
namespace icon{

// public partial sealed class MapMarker :4
// {
::g::Fuse::Controls::TextControl_type* MapMarker_typeof();
void MapMarker__ctor_8_fn(MapMarker* __this);
void MapMarker__InitializeUX1_fn(MapMarker* __this);
void MapMarker__New4_fn(MapMarker** __retval);

struct MapMarker : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX1();
    static MapMarker* New4();
};
// }

}} // ::g::icon
