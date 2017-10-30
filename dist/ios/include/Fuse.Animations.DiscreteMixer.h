// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/DiscreteMixer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixer.h>
#include <Fuse.Animations.MixerBase.h>
namespace g{namespace Fuse{namespace Animations{struct DiscreteMixer;}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase;}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty;}}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteMixer :8
// {
::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof();
void DiscreteMixer__ctor_1_fn(DiscreteMixer* __this);
void DiscreteMixer__CreateMaster_fn(DiscreteMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval);
void DiscreteMixer__CreateMasterTransform_fn(DiscreteMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval);
void DiscreteMixer__New1_fn(DiscreteMixer** __retval);

struct DiscreteMixer : ::g::Fuse::Animations::MixerBase
{
    void ctor_1();
    static DiscreteMixer* New1();
};
// }

}}} // ::g::Fuse::Animations
