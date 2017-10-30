// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ObservableProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ObservableProperty__PushCapture;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class ObservableProperty.PushCapture :128
// {
uType* ObservableProperty__PushCapture_typeof();
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg);
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval);
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this);

struct ObservableProperty__PushCapture : uObject
{
    uStrong<uObject*> _arg;
    uStrong<uDelegate*> _push;

    void ctor_(uDelegate* push, uObject* arg);
    void Run();
    static ObservableProperty__PushCapture* New1(uDelegate* push, uObject* arg);
};
// }

}}} // ::g::Fuse::Reactive
