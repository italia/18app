// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Focus.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal abstract extern interface INativeFocusListener :8
// {
uInterfaceType* INativeFocusListener_typeof();

struct INativeFocusListener
{
    void(*fp_FocusGained)(uObject*);
    void(*fp_FocusLost)(uObject*);
    static void FocusGained(const uInterface& __this) { __this.VTable<INativeFocusListener>()->fp_FocusGained(__this); }
    static void FocusLost(const uInterface& __this) { __this.VTable<INativeFocusListener>()->fp_FocusLost(__this); }
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
