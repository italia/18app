// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract class Easing :13
// {
struct Easing_type : uType
{
    void(*fp_Map)(::g::Fuse::Animations::Easing*, double*, double*);
};

Easing_type* Easing_typeof();
void Easing__ctor__fn(Easing* __this);

struct Easing : uObject
{
    static uSStrong<Easing*> BackIn_;
    static uSStrong<Easing*>& BackIn() { return BackIn_; }
    static uSStrong<Easing*> BackInOut_;
    static uSStrong<Easing*>& BackInOut() { return BackInOut_; }
    static uSStrong<Easing*> BackOut_;
    static uSStrong<Easing*>& BackOut() { return BackOut_; }
    static uSStrong<Easing*> BounceIn_;
    static uSStrong<Easing*>& BounceIn() { return BounceIn_; }
    static uSStrong<Easing*> BounceInOut_;
    static uSStrong<Easing*>& BounceInOut() { return BounceInOut_; }
    static uSStrong<Easing*> BounceOut_;
    static uSStrong<Easing*>& BounceOut() { return BounceOut_; }
    static uSStrong<Easing*> CircularIn_;
    static uSStrong<Easing*>& CircularIn() { return CircularIn_; }
    static uSStrong<Easing*> CircularInOut_;
    static uSStrong<Easing*>& CircularInOut() { return CircularInOut_; }
    static uSStrong<Easing*> CircularOut_;
    static uSStrong<Easing*>& CircularOut() { return CircularOut_; }
    static uSStrong<Easing*> CubicIn_;
    static uSStrong<Easing*>& CubicIn() { return CubicIn_; }
    static uSStrong<Easing*> CubicInOut_;
    static uSStrong<Easing*>& CubicInOut() { return CubicInOut_; }
    static uSStrong<Easing*> CubicOut_;
    static uSStrong<Easing*>& CubicOut() { return CubicOut_; }
    static uSStrong<Easing*> ElasticIn_;
    static uSStrong<Easing*>& ElasticIn() { return ElasticIn_; }
    static uSStrong<Easing*> ElasticInOut_;
    static uSStrong<Easing*>& ElasticInOut() { return ElasticInOut_; }
    static uSStrong<Easing*> ElasticOut_;
    static uSStrong<Easing*>& ElasticOut() { return ElasticOut_; }
    static uSStrong<Easing*> ExponentialIn_;
    static uSStrong<Easing*>& ExponentialIn() { return ExponentialIn_; }
    static uSStrong<Easing*> ExponentialInOut_;
    static uSStrong<Easing*>& ExponentialInOut() { return ExponentialInOut_; }
    static uSStrong<Easing*> ExponentialOut_;
    static uSStrong<Easing*>& ExponentialOut() { return ExponentialOut_; }
    static uSStrong<Easing*> Linear_;
    static uSStrong<Easing*>& Linear() { return Linear_; }
    static uSStrong<Easing*> QuadraticIn_;
    static uSStrong<Easing*>& QuadraticIn() { return QuadraticIn_; }
    static uSStrong<Easing*> QuadraticInOut_;
    static uSStrong<Easing*>& QuadraticInOut() { return QuadraticInOut_; }
    static uSStrong<Easing*> QuadraticOut_;
    static uSStrong<Easing*>& QuadraticOut() { return QuadraticOut_; }
    static uSStrong<Easing*> QuarticIn_;
    static uSStrong<Easing*>& QuarticIn() { return QuarticIn_; }
    static uSStrong<Easing*> QuarticInOut_;
    static uSStrong<Easing*>& QuarticInOut() { return QuarticInOut_; }
    static uSStrong<Easing*> QuarticOut_;
    static uSStrong<Easing*>& QuarticOut() { return QuarticOut_; }
    static uSStrong<Easing*> QuinticIn_;
    static uSStrong<Easing*>& QuinticIn() { return QuinticIn_; }
    static uSStrong<Easing*> QuinticInOut_;
    static uSStrong<Easing*>& QuinticInOut() { return QuinticInOut_; }
    static uSStrong<Easing*> QuinticOut_;
    static uSStrong<Easing*>& QuinticOut() { return QuinticOut_; }
    static uSStrong<Easing*> SinusoidalIn_;
    static uSStrong<Easing*>& SinusoidalIn() { return SinusoidalIn_; }
    static uSStrong<Easing*> SinusoidalInOut_;
    static uSStrong<Easing*>& SinusoidalInOut() { return SinusoidalInOut_; }
    static uSStrong<Easing*> SinusoidalOut_;
    static uSStrong<Easing*>& SinusoidalOut() { return SinusoidalOut_; }

    void ctor_();
    double Map(double p) { double __retval; return (((Easing_type*)__type)->fp_Map)(this, &p, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
