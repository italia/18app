// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct Change;}}}
namespace g{namespace Fuse{namespace Animations{struct Converter;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Change<T> :35
// {
::g::Fuse::Animations::Animator_type* Change_typeof();
void Change__ctor_3_fn(Change* __this, ::g::Uno::UX::Property1* target);
void Change__CreateState_fn(Change* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Change__get_IsContinuous_fn(Change* __this, bool* __retval);
void Change__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Change** __retval);
void Change__get_Target_fn(Change* __this, ::g::Uno::UX::Property1** __retval);
void Change__set_Target_fn(Change* __this, ::g::Uno::UX::Property1* value);
void Change__get_Value_fn(Change* __this, uTRef __retval);
void Change__set_Value_fn(Change* __this, void* value);

struct Change : ::g::Fuse::Animations::TrackAnimator
{
    uStrong< ::g::Fuse::Animations::Converter*> ContinuousConverter;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    void ctor_3(::g::Uno::UX::Property1* target);
    bool IsContinuous();
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    template<class T>
    T Value() { T __retval; return Change__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { Change__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    static Change* New2(uType* __type, ::g::Uno::UX::Property1* target);
};
// }

}}} // ::g::Fuse::Animations
