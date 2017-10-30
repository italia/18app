// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/BoldText.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <_root.BaseText.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
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
namespace g{struct BoldText;}

namespace g{

// public partial sealed class BoldText :2
// {
::g::Fuse::Controls::TextControl_type* BoldText_typeof();
void BoldText__ctor_9_fn(BoldText* __this);
void BoldText__InitializeUX2_fn(BoldText* __this);
void BoldText__New5_fn(BoldText** __retval);

struct BoldText : ::g::BaseText
{
    void ctor_9();
    void InitializeUX2();
    static BoldText* New5();
};
// }

} // ::g
