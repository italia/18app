// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/ProfileIcon.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
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
namespace g{struct ProfileIcon;}

namespace g{

// public partial sealed class ProfileIcon :2
// {
::g::Fuse::Controls::Control_type* ProfileIcon_typeof();
void ProfileIcon__ctor_7_fn(ProfileIcon* __this);
void ProfileIcon__InitializeUX_fn(ProfileIcon* __this);
void ProfileIcon__New4_fn(ProfileIcon** __retval);

struct ProfileIcon : ::g::Fuse::Controls::Image
{
    void ctor_7();
    void InitializeUX();
    static ProfileIcon* New4();
};
// }

} // ::g
