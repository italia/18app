// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Resize.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimatorState.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Resize;}}}
namespace g{namespace Fuse{namespace Animations{struct ResizeAnimatorState;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ResizeAnimatorState :84
// {
::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof();
void ResizeAnimatorState__ctor_2_fn(ResizeAnimatorState* __this, ::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p);
void ResizeAnimatorState__Disable_fn(ResizeAnimatorState* __this);
void ResizeAnimatorState__New1_fn(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p, ResizeAnimatorState** __retval);
void ResizeAnimatorState__OnPlaced_fn(ResizeAnimatorState* __this, uObject* s, uObject* a);
void ResizeAnimatorState__SeekValue_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength);
void ResizeAnimatorState__Update_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength);

struct ResizeAnimatorState : ::g::Fuse::Animations::TrackAnimatorState
{
    float _lastStrength;
    ::g::Uno::Float4 _lastValue;
    uStrong< ::g::Fuse::Visual*> _relativeNode;
    uStrong<uObject*> _relativeTo;
    uStrong< ::g::Fuse::Animations::Resize*> _resize;
    uStrong<uObject*> _target;
    bool _valid;

    void ctor_2(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p);
    void OnPlaced(uObject* s, uObject* a);
    void Update(::g::Uno::Float4 value, float strength);
    static ResizeAnimatorState* New1(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p);
};
// }

}}} // ::g::Fuse::Animations
