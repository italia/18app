// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/ExplicitNavigation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct ExplicitNavigation;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class ExplicitNavigation :9
// {
::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof();
void ExplicitNavigation__ctor_4_fn(ExplicitNavigation* __this);
void ExplicitNavigation__get_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual** __retval);
void ExplicitNavigation__set_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* value);
void ExplicitNavigation__Goto_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* visual, int* mode);
void ExplicitNavigation__New2_fn(ExplicitNavigation** __retval);
void ExplicitNavigation__SetPageProgress_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, bool* update);
void ExplicitNavigation__SetPageProgress1_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update);
void ExplicitNavigation__SetPageProgress2_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update, bool* havPrev);
void ExplicitNavigation__SetState_fn(ExplicitNavigation* __this, int* state);
void ExplicitNavigation__UpdateProgress_fn(ExplicitNavigation* __this, int* mode);

struct ExplicitNavigation : ::g::Fuse::Navigation::VisualNavigation
{
    uStrong< ::g::Fuse::Visual*> _active;

    void ctor_4();
    void SetPageProgress(::g::Fuse::Visual* page, float progress, bool update);
    void SetPageProgress1(::g::Fuse::Visual* page, float progress, float previous, bool update);
    void SetPageProgress2(::g::Fuse::Visual* page, float progress, float previous, bool update, bool havPrev);
    void SetState(int state);
    void UpdateProgress(int mode);
    static ExplicitNavigation* New2();
};
// }

}}} // ::g::Fuse::Navigation
