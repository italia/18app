// This file was generated based on /usr/local/share/uno/Packages/Experimental.TextureLoader/1.3.1/TextureLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace TextureLoader{struct Callback;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Experimental{
namespace TextureLoader{

// internal sealed class Callback :9
// {
uType* Callback_typeof();
void Callback__ctor__fn(Callback* __this, uDelegate* action);
void Callback__Execute_fn(Callback* __this, ::g::Uno::Graphics::Texture2D* arg);
void Callback__New1_fn(uDelegate* action, Callback** __retval);

struct Callback : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    void Execute(::g::Uno::Graphics::Texture2D* arg);
    static Callback* New1(uDelegate* action);
};
// }

}}} // ::g::Experimental::TextureLoader
