// This file was generated based on /usr/local/share/uno/Packages/Fuse.Platform/1.3.1/SystemUI.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Platform{struct SystemUIWillResizeEventArgs;}}}

namespace g{
namespace Fuse{
namespace Platform{

// public sealed class SystemUIWillResizeEventArgs :28
// {
uType* SystemUIWillResizeEventArgs_typeof();
void SystemUIWillResizeEventArgs__ctor_1_fn(SystemUIWillResizeEventArgs* __this, int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve);
void SystemUIWillResizeEventArgs__get_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* __retval);
void SystemUIWillResizeEventArgs__set_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* value);
void SystemUIWillResizeEventArgs__get_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* __retval);
void SystemUIWillResizeEventArgs__set_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* value);
void SystemUIWillResizeEventArgs__get_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval);
void SystemUIWillResizeEventArgs__set_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value);
void SystemUIWillResizeEventArgs__get_ID_fn(SystemUIWillResizeEventArgs* __this, int* __retval);
void SystemUIWillResizeEventArgs__set_ID_fn(SystemUIWillResizeEventArgs* __this, int* value);
void SystemUIWillResizeEventArgs__get_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* __retval);
void SystemUIWillResizeEventArgs__set_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* value);
void SystemUIWillResizeEventArgs__New2_fn(int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve, SystemUIWillResizeEventArgs** __retval);
void SystemUIWillResizeEventArgs__get_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* __retval);
void SystemUIWillResizeEventArgs__set_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* value);
void SystemUIWillResizeEventArgs__get_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval);
void SystemUIWillResizeEventArgs__set_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value);

struct SystemUIWillResizeEventArgs : ::g::Uno::EventArgs
{
    int _AnimationCurve;
    double _AnimationDuration;
    ::g::Uno::Rect _EndFrame;
    int _ID;
    bool _IsAnimated;
    int _ResizeReason;
    ::g::Uno::Rect _StartFrame;

    void ctor_1(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve);
    int AnimationCurve();
    void AnimationCurve(int value);
    double AnimationDuration();
    void AnimationDuration(double value);
    ::g::Uno::Rect EndFrame();
    void EndFrame(::g::Uno::Rect value);
    int ID();
    void ID(int value);
    bool IsAnimated();
    void IsAnimated(bool value);
    int ResizeReason();
    void ResizeReason(int value);
    ::g::Uno::Rect StartFrame();
    void StartFrame(::g::Uno::Rect value);
    static SystemUIWillResizeEventArgs* New2(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve);
};
// }

}}} // ::g::Fuse::Platform
