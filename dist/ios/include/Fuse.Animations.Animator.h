// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Animator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract class Animator :68
// {
struct Animator_type : uType
{
    void(*fp_get_AnimatorVariant)(::g::Fuse::Animations::Animator*, int*);
    void(*fp_CreateState)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**);
    void(*fp_GetDurationWithDelay)(::g::Fuse::Animations::Animator*, int*, double*);
};

Animator_type* Animator_typeof();
void Animator__ctor_1_fn(Animator* __this);
void Animator__get_AnimatorVariant_fn(Animator* __this, int* __retval);
void Animator__get_Delay_fn(Animator* __this, double* __retval);
void Animator__set_Delay_fn(Animator* __this, double* value);
void Animator__GetDurationWithDelay_fn(Animator* __this, int* dir, double* __retval);
void Animator__get_MixOp_fn(Animator* __this, int* __retval);
void Animator__set_MixOp_fn(Animator* __this, int* value);

struct Animator : ::g::Uno::UX::PropertyObject
{
    int _mixOp;
    uStrong<uObject*> Mixer;
    double _Delay;

    void ctor_1();
    int AnimatorVariant() { int __retval; return (((Animator_type*)__type)->fp_get_AnimatorVariant)(this, &__retval), __retval; }
    ::g::Fuse::Animations::AnimatorState* CreateState(::g::Fuse::Animations::CreateStateParams* p) { ::g::Fuse::Animations::AnimatorState* __retval; return (((Animator_type*)__type)->fp_CreateState)(this, p, &__retval), __retval; }
    double Delay();
    void Delay(double value);
    double GetDurationWithDelay(int dir) { double __retval; return (((Animator_type*)__type)->fp_GetDurationWithDelay)(this, &dir, &__retval), __retval; }
    int MixOp();
    void MixOp(int value);
    static double GetDurationWithDelay(Animator* __this, int dir) { double __retval; return Animator__GetDurationWithDelay_fn(__this, &dir, &__retval), __retval; }
    static int AnimatorVariant(Animator* __this) { int __retval; return Animator__get_AnimatorVariant_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
