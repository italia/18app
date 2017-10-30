// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.3.1/VideoContainer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct LoadingClosure;}}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal sealed class LoadingClosure :51
// {
struct LoadingClosure_type : uType
{
    ::g::Uno::IDisposable interface0;
};

LoadingClosure_type* LoadingClosure_typeof();
void LoadingClosure__ctor__fn(LoadingClosure* __this, ::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error);
void LoadingClosure__Load_fn(uString* url, uDelegate* loaded, uDelegate* error, uObject** __retval);
void LoadingClosure__Load1_fn(::g::Uno::UX::FileSource* file, uDelegate* loaded, uDelegate* error, uObject** __retval);
void LoadingClosure__New1_fn(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error, LoadingClosure** __retval);
void LoadingClosure__UnoIDisposableDispose_fn(LoadingClosure* __this);

struct LoadingClosure : uObject
{
    uStrong<uDelegate*> _error;
    bool _isDisposed;
    uStrong<uDelegate*> _loaded;
    uStrong< ::g::Uno::Threading::Future1*> _loaderFuture;
    uStrong< ::g::Uno::Threading::Future1*> _thenFuture;

    void ctor_(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error);
    static uObject* Load(uString* url, uDelegate* loaded, uDelegate* error);
    static uObject* Load1(::g::Uno::UX::FileSource* file, uDelegate* loaded, uDelegate* error);
    static LoadingClosure* New1(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error);
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
