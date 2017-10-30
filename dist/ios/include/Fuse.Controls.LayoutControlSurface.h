// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/LayoutControl.Canvas.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct LayoutControl;}}}
namespace g{namespace Fuse{namespace Controls{struct LayoutControlSurface;}}}
namespace g{namespace Fuse{namespace Drawing{struct DrawObjectWatcher;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class LayoutControlSurface :12
// {
struct LayoutControlSurface_type : uType
{
    ::g::Fuse::Drawing::IDrawObjectWatcherFeedback interface0;
};

LayoutControlSurface_type* LayoutControlSurface_typeof();
void LayoutControlSurface__ctor__fn(LayoutControlSurface* __this);
void LayoutControlSurface__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn(LayoutControlSurface* __this, uObject* obj);
void LayoutControlSurface__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn(LayoutControlSurface* __this, uObject* obj);
void LayoutControlSurface__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn(LayoutControlSurface* __this, uObject* obj);
void LayoutControlSurface__New1_fn(LayoutControlSurface** __retval);

struct LayoutControlSurface : uObject
{
    uStrong< ::g::Fuse::Drawing::SurfacePath*> BackgroundPath;
    ::g::Uno::Float2 BackgroundPathSize;
    uStrong< ::g::Fuse::Controls::LayoutControl*> LayoutControl;
    uStrong< ::g::Fuse::Drawing::Surface*> Surface;
    bool WarnDraw;
    uStrong< ::g::Fuse::Drawing::DrawObjectWatcher*> Watcher;

    void ctor_();
    static LayoutControlSurface* New1();
};
// }

}}} // ::g::Fuse::Controls
