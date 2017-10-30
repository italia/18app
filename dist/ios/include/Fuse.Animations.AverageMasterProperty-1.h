// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/AverageMixer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.MasterProperty-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct AverageMasterProperty;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class AverageMasterProperty<T> :17
// {
::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof();
void AverageMasterProperty__ctor_2_fn(AverageMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterProperty** __retval);
void AverageMasterProperty__OnActive_fn(AverageMasterProperty* __this);
void AverageMasterProperty__OnComplete_fn(AverageMasterProperty* __this);

struct AverageMasterProperty : ::g::Fuse::Animations::MasterProperty
{
    uStrong< ::g::Fuse::Internal::Blender*> blender;

    void ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase);
    static AverageMasterProperty* New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase);
};
// }

}}} // ::g::Fuse::Animations
