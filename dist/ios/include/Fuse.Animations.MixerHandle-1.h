// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerHandle-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct MasterBase;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerHandle;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class MixerHandle<T> :360
// {
struct MixerHandle_type : uType
{
    ::g::Fuse::Animations::IMixerHandle interface0;
};

MixerHandle_type* MixerHandle_typeof();
void MixerHandle__ctor__fn(MixerHandle* __this, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority);
void MixerHandle__get_HasValue_fn(MixerHandle* __this, bool* __retval);
void MixerHandle__get_MixOp_fn(MixerHandle* __this, int* __retval);
void MixerHandle__set_MixOp_fn(MixerHandle* __this, int* value);
void MixerHandle__New1_fn(uType* __type, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority, MixerHandle** __retval);
void MixerHandle__get_Priority_fn(MixerHandle* __this, int* __retval);
void MixerHandle__set_Priority_fn(MixerHandle* __this, int* value);
void MixerHandle__Set_fn(MixerHandle* __this, void* value, float* strength);
void MixerHandle__Unregister_fn(MixerHandle* __this);

struct MixerHandle : uObject
{
    bool _hasValue;
    uStrong< ::g::Fuse::Animations::MasterBase*> Master;
    float Strength;
    uTField Value() { return __type->Field(this, 3); }
    int _MixOp;
    int _Priority;

    void ctor_(::g::Fuse::Animations::MasterBase* master, int mode, int priority);
    bool HasValue();
    int MixOp();
    void MixOp(int value);
    int Priority();
    void Priority(int value);
    template<class T>
    void Set(T value, float strength) { MixerHandle__Set_fn(this, uConstrain(__type->T(0), value), &strength); }
    void Unregister();
    static MixerHandle* New1(uType* __type, ::g::Fuse::Animations::MasterBase* master, int mode, int priority);
};
// }

}}} // ::g::Fuse::Animations
