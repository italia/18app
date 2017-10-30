// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/Focus.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct FocusHelpers__PerformBecomeFirstResponder;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// private sealed class FocusHelpers.PerformBecomeFirstResponder :125
// {
uType* FocusHelpers__PerformBecomeFirstResponder_typeof();
void FocusHelpers__PerformBecomeFirstResponder__ctor__fn(FocusHelpers__PerformBecomeFirstResponder* __this, ::g::ObjC::Object* target);
void FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn(FocusHelpers__PerformBecomeFirstResponder* __this);
void FocusHelpers__PerformBecomeFirstResponder__New1_fn(::g::ObjC::Object* target, FocusHelpers__PerformBecomeFirstResponder** __retval);

struct FocusHelpers__PerformBecomeFirstResponder : uObject
{
    uStrong< ::g::ObjC::Object*> _target;

    void ctor_(::g::ObjC::Object* target);
    void BecomeFirstResponder();
    static FocusHelpers__PerformBecomeFirstResponder* New1(::g::ObjC::Object* target);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
