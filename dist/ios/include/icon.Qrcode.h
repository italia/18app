// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/icon.Qrcode.g.uno.
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
namespace g{namespace icon{struct Qrcode;}}

namespace g{
namespace icon{

// public partial sealed class Qrcode :4
// {
::g::Fuse::Controls::Control_type* Qrcode_typeof();
void Qrcode__ctor_7_fn(Qrcode* __this);
void Qrcode__InitializeUX_fn(Qrcode* __this);
void Qrcode__New4_fn(Qrcode** __retval);

struct Qrcode : ::g::Fuse::Controls::Image
{
    void ctor_7();
    void InitializeUX();
    static Qrcode* New4();
};
// }

}} // ::g::icon
