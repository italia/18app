// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/DrawObjectWatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.MiniList-1.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct DrawObjectWatcher;}}}
namespace g{namespace Fuse{namespace Drawing{struct DrawObjectWatcher__Item;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class DrawObjectWatcher :21
// {
struct DrawObjectWatcher_type : uType
{
    ::g::Uno::UX::IPropertyListener interface0;
};

DrawObjectWatcher_type* DrawObjectWatcher_typeof();
void DrawObjectWatcher__ctor__fn(DrawObjectWatcher* __this);
void DrawObjectWatcher__Add_fn(DrawObjectWatcher* __this, ::g::Fuse::Drawing::Brush* brush);
void DrawObjectWatcher__Add1_fn(DrawObjectWatcher* __this, ::g::Fuse::Drawing::Stroke* stroke);
void DrawObjectWatcher__AddObject_fn(DrawObjectWatcher* __this, ::g::Uno::UX::PropertyObject* drawObject);
void DrawObjectWatcher__New1_fn(DrawObjectWatcher** __retval);
void DrawObjectWatcher__OnRooted_fn(DrawObjectWatcher* __this, uObject* feedback);
void DrawObjectWatcher__OnUnrooted_fn(DrawObjectWatcher* __this);
void DrawObjectWatcher__Reset_fn(DrawObjectWatcher* __this);
void DrawObjectWatcher__Sync_fn(DrawObjectWatcher* __this);
void DrawObjectWatcher__UnoUXIPropertyListenerOnPropertyChanged_fn(DrawObjectWatcher* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct DrawObjectWatcher : uObject
{
    uStrong<uObject*> _feedback;
    ::g::Fuse::Internal::MiniList _items;
    bool _rooted;
    static ::g::Uno::UX::Selector ShadingName_;
    static ::g::Uno::UX::Selector& ShadingName() { return ShadingName_; }

    void ctor_();
    void Add(::g::Fuse::Drawing::Brush* brush);
    void Add1(::g::Fuse::Drawing::Stroke* stroke);
    void AddObject(::g::Uno::UX::PropertyObject* drawObject);
    void OnRooted(uObject* feedback);
    void OnUnrooted();
    void Reset();
    void Sync();
    static DrawObjectWatcher* New1();
};
// }

}}} // ::g::Fuse::Drawing
