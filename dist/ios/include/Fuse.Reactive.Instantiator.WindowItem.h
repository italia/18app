// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.WindowItems.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Instantiator.TemplateMatch.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator__ObservableLink;}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator__WindowItem;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Instantiator.WindowItem :461
// {
uType* Instantiator__WindowItem_typeof();
void Instantiator__WindowItem__ctor__fn(Instantiator__WindowItem* __this);
void Instantiator__WindowItem__get_CurrentData_fn(Instantiator__WindowItem* __this, uObject** __retval);
void Instantiator__WindowItem__New1_fn(Instantiator__WindowItem** __retval);
void Instantiator__WindowItem__Unlink_fn(Instantiator__WindowItem* __this);

struct Instantiator__WindowItem : uObject
{
    uStrong<uObject*> Data;
    uStrong< ::g::Fuse::Reactive::Instantiator__ObservableLink*> DataLink;
    uStrong<uObject*> Id;
    uStrong< ::g::Uno::Collections::List*> Nodes;
    ::g::Fuse::Reactive::Instantiator__TemplateMatch Template;

    void ctor_();
    uObject* CurrentData();
    void Unlink();
    static Instantiator__WindowItem* New1();
};
// }

}}} // ::g::Fuse::Reactive
