// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/NativeRootViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct NativeRootViewport;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal sealed extern class NativeRootViewport :6
// {
::g::Fuse::RootViewport_type* NativeRootViewport_typeof();
void NativeRootViewport__ctor_5_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle* rootView);
void NativeRootViewport__New4_fn(::g::Fuse::Controls::Native::ViewHandle* rootView, NativeRootViewport** __retval);
void NativeRootViewport__get_RootView_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle** __retval);

struct NativeRootViewport : ::g::Fuse::RootViewport
{
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _rootView;

    void ctor_5(::g::Fuse::Controls::Native::ViewHandle* rootView);
    ::g::Fuse::Controls::Native::ViewHandle* RootView();
    static NativeRootViewport* New4(::g::Fuse::Controls::Native::ViewHandle* rootView);
};
// }

}}}} // ::g::Fuse::Controls::Native
