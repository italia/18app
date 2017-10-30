// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/RootViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IFrame.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct SystemUIFrame;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// internal sealed extern class SystemUIFrame :19
// {
struct SystemUIFrame_type : uType
{
    ::g::Fuse::IFrame interface0;
};

SystemUIFrame_type* SystemUIFrame_typeof();
void SystemUIFrame__ctor__fn(SystemUIFrame* __this);
void SystemUIFrame__add_FrameChanged_fn(SystemUIFrame* __this, uDelegate* value);
void SystemUIFrame__remove_FrameChanged_fn(SystemUIFrame* __this, uDelegate* value);
void SystemUIFrame__New1_fn(SystemUIFrame** __retval);
void SystemUIFrame__get_Size_fn(SystemUIFrame* __this, ::g::Uno::Float2* __retval);

struct SystemUIFrame : uObject
{
    void ctor_();
    void add_FrameChanged(uDelegate* value);
    void remove_FrameChanged(uDelegate* value);
    ::g::Uno::Float2 Size();
    static SystemUIFrame* New1();
};
// }

}} // ::g::Fuse
