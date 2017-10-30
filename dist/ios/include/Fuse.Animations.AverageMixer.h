// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/AverageMixer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixer.h>
#include <Fuse.Animations.MixerBase.h>
namespace g{namespace Fuse{namespace Animations{struct AverageMixer;}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase;}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty;}}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class AverageMixer :7
// {
::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof();
void AverageMixer__ctor_1_fn(AverageMixer* __this);
void AverageMixer__CreateMaster_fn(AverageMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval);
void AverageMixer__CreateMasterTransform_fn(AverageMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval);
void AverageMixer__New1_fn(AverageMixer** __retval);

struct AverageMixer : ::g::Fuse::Animations::MixerBase
{
    void ctor_1();
    static AverageMixer* New1();
};
// }

}}} // ::g::Fuse::Animations
