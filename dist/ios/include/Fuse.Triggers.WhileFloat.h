// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/WhileFloat.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFloat;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFloat :7
// {
::g::Fuse::Triggers::WhileValue_type* WhileFloat_typeof();
void WhileFloat__get_IsOn_fn(WhileFloat* __this, bool* __retval);
void WhileFloat__get_Value1_fn(WhileFloat* __this, float* __retval);
void WhileFloat__set_Value1_fn(WhileFloat* __this, float* value);

struct WhileFloat : ::g::Fuse::Triggers::WhileValue
{
    ::g::Uno::Float2 _compare;
    int _high;
    int _low;

    float Value1();
    void Value1(float value);
};
// }

}}} // ::g::Fuse::Triggers
