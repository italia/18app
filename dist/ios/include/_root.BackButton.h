// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/BackButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{struct BackButton;}

namespace g{

// public partial sealed class BackButton :2
// {
::g::Fuse::Controls::Panel_type* BackButton_typeof();
void BackButton__ctor_7_fn(BackButton* __this);
void BackButton__InitializeUX_fn(BackButton* __this);
void BackButton__New4_fn(BackButton** __retval);

struct BackButton : ::g::Fuse::Controls::Panel
{
    void ctor_7();
    void InitializeUX();
    static BackButton* New4();
};
// }

} // ::g
