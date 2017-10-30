// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementAtlasPool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPool;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolEntry;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolImpl;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal static class ElementAtlasFramebufferPool :107
// {
uClassType* ElementAtlasFramebufferPool_typeof();
void ElementAtlasFramebufferPool__add_AtlasSizeChanged_fn(uDelegate* value);
void ElementAtlasFramebufferPool__remove_AtlasSizeChanged_fn(uDelegate* value);
void ElementAtlasFramebufferPool__get_ElementAtlasSize_fn(::g::Uno::Int2* __retval);
void ElementAtlasFramebufferPool__set_ElementAtlasSize_fn(::g::Uno::Int2* value);
void ElementAtlasFramebufferPool__EnsurePool_fn();
void ElementAtlasFramebufferPool__FindFramebuffer_fn(::g::Uno::Collections::LinkedListNode** __retval);
void ElementAtlasFramebufferPool__Initialize_fn();
void ElementAtlasFramebufferPool__OnResized_fn(uObject* sender, ::g::Uno::EventArgs* args);
void ElementAtlasFramebufferPool__UpdateElementAtlasSize_fn();

struct ElementAtlasFramebufferPool : uObject
{
    static ::g::Uno::Int2 _elementAtlasSize_;
    static ::g::Uno::Int2& _elementAtlasSize() { return _elementAtlasSize_; }
    static bool _isInitialized_;
    static bool& _isInitialized() { return _isInitialized_; }
    static uSStrong< ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> _poolImpl_;
    static uSStrong< ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl*>& _poolImpl() { return _poolImpl_; }
    static uSStrong<uDelegate*> AtlasSizeChanged1_;
    static uSStrong<uDelegate*>& AtlasSizeChanged1() { return AtlasSizeChanged1_; }

    static void EnsurePool();
    static ::g::Uno::Collections::LinkedListNode* FindFramebuffer();
    static void Initialize();
    static void OnResized(uObject* sender, ::g::Uno::EventArgs* args);
    static void UpdateElementAtlasSize();
    static ::g::Uno::Int2 ElementAtlasSize();
    static void ElementAtlasSize(::g::Uno::Int2 value);
    static void add_AtlasSizeChanged(uDelegate* value);
    static void remove_AtlasSizeChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Elements
