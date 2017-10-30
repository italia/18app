// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/NavigationInternal/EnterVertical.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct EnterVertical;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class EnterVertical :9
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnterVertical_typeof();
void EnterVertical__ctor_8_fn(EnterVertical* __this);
void EnterVertical__InitializeUX_fn(EnterVertical* __this);
void EnterVertical__New3_fn(EnterVertical** __retval);

struct EnterVertical : ::g::Fuse::Navigation::EnteringAnimation
{
    void ctor_8();
    void InitializeUX();
    static EnterVertical* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
