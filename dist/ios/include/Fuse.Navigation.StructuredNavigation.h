// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/StructuredNavigation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public interfacemodifiers class StructuredNavigation :13
// {
struct StructuredNavigation_type : ::g::Fuse::Navigation::VisualNavigation_type
{
    ::g::Fuse::Navigation::ISeekableNavigation interface9;
};

StructuredNavigation_type* StructuredNavigation_typeof();
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval);
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual* value);
void StructuredNavigation__AnimationDone_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval);
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval);
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval);
void StructuredNavigation__ChangeProgress_fn(StructuredNavigation* __this, float* prev, float* next, int* mode);
void StructuredNavigation__CheckNeedUpdate_fn(StructuredNavigation* __this, bool* off);
void StructuredNavigation__ClampProgress1_fn(StructuredNavigation* __this, int* progress, int* __retval);
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval);
void StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn(StructuredNavigation* __this);
void StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args);
void StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args);
void StructuredNavigation__GetPageState_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval);
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this);
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this);
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode);
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode);
void StructuredNavigation__get_MaxIndex_fn(StructuredNavigation* __this, int* __retval);
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval);
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value);
void StructuredNavigation__get_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval);
void StructuredNavigation__set_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig* value);
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval);
void StructuredNavigation__OnChildAddedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child);
void StructuredNavigation__OnChildRemovedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child);
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this);
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this);
void StructuredNavigation__OnUpdated_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval);
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__QueueClearForwardHistory_fn(StructuredNavigation* __this);
void StructuredNavigation__ResetRegionLimits_fn(StructuredNavigation* __this);
void StructuredNavigation__SetActive_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page);
void StructuredNavigation__SetProgress_fn(StructuredNavigation* __this, float* value);
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval);

struct StructuredNavigation : ::g::Fuse::Navigation::VisualNavigation
{
    uStrong< ::g::Fuse::Visual*> _active;
    bool _hasUpdated;
    uStrong< ::g::Fuse::Motion::MotionConfig*> _motion;
    float _prevProgress;
    float _progress;
    bool _queueClearForwardHistory;
    uStrong<uObject*> _region;
    bool _reuseExistingVisual;
    float _seekBase;
    int _Mode;

    void AnimationDone();
    ::g::Fuse::Visual* Back();
    void ChangeProgress(float prev, float next, int mode);
    void CheckNeedUpdate(bool off);
    int ClampProgress1(int progress);
    void ClearForwardHistory();
    ::g::Fuse::Visual* Front();
    void GotoImpl(::g::Fuse::Visual* element, int mode);
    int MaxIndex();
    int Mode();
    void Mode(int value);
    ::g::Fuse::Motion::MotionConfig* Motion();
    void Motion(::g::Fuse::Motion::MotionConfig* value);
    ::g::Fuse::Visual* Next();
    void OnUpdated();
    ::g::Fuse::Visual* Previous();
    double Progress();
    void QueueClearForwardHistory();
    void ResetRegionLimits();
    void SetActive(::g::Fuse::Visual* page);
    void SetProgress(float value);
    bool TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp);
};
// }

}}} // ::g::Fuse::Navigation
