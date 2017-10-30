// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.3.1/iOSApp.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.AppBase.h>
#include <Fuse.IProperties.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{namespace Controls{struct TreeRendererPanel;}}}
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}

namespace g{
namespace Fuse{

// public extern class App :13
// {
::g::Fuse::AppBase_type* App_typeof();
void App__ctor_3_fn(App* __this);
void App__CheckFocus_fn(App* __this);
void App__CheckStatusBarOrientation_fn(App* __this);
void App__get_Children_fn(App* __this, uObject** __retval);
void App__Compare_fn(::g::ObjC::Object* x, ::g::ObjC::Object* y, bool* __retval);
void App__IsNull_fn(::g::ObjC::Object* x, bool* __retval);
void App__OnTick_fn(App* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
void App__OnUpdate_fn(App* __this);
void App__PropagateBackground_fn(App* __this);
void App__get_RootVisual_fn(App* __this, ::g::Fuse::Visual** __retval);

struct App : ::g::Fuse::AppBase
{
    uStrong< ::g::ObjC::Object*> _currentFocus;
    uStrong< ::g::Fuse::Controls::GraphicsView*> _graphicsView;
    int _prevStatusBarOrientation;
    uStrong< ::g::Fuse::Controls::TreeRendererPanel*> _renderPanel;

    void ctor_3();
    void CheckFocus();
    void CheckStatusBarOrientation();
    void OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
    void PropagateBackground();
    ::g::Fuse::Visual* RootVisual();
    static bool Compare(::g::ObjC::Object* x, ::g::ObjC::Object* y);
    static bool IsNull(::g::ObjC::Object* x);
};
// }

}} // ::g::Fuse
