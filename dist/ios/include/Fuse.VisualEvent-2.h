// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Event.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEvent;}}
namespace g{namespace Fuse{struct VisualEventArgs;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// public abstract class VisualEvent<THandler, TArgs> :43
// {
struct VisualEvent_type : uType
{
    void(*fp_Invoke)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*);
};

VisualEvent_type* VisualEvent_typeof();
void VisualEvent__ctor__fn(VisualEvent* __this);
void VisualEvent__AddGlobalHandler_fn(VisualEvent* __this, void* handler);
void VisualEvent__AddHandler_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, void* handler);
void VisualEvent__InvokeGlobalHandlers_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, ::g::Fuse::VisualEventArgs* args);
void VisualEvent__InvokeInternal_fn(VisualEvent* __this, void* handler, uObject* sender, ::g::Fuse::VisualEventArgs* args);
void VisualEvent__OnRaise_fn(VisualEvent* __this, uObject* target, uArray* args);
void VisualEvent__OnRaiseEnabled_fn(VisualEvent* __this, uObject* target, uArray* args);
void VisualEvent__Raise_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type, bool* bubble, uDelegate* PostBubbleAction);
void VisualEvent__RaiseWithBubble_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type);
void VisualEvent__RaiseWithBubble1_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type, uDelegate* PostBubbleAction);
void VisualEvent__RaiseWithoutBubble_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type);
void VisualEvent__RemoveGlobalHandler_fn(VisualEvent* __this, void* handler);
void VisualEvent__RemoveHandler_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, void* handler);

struct VisualEvent : uObject
{
    uStrong< ::g::Uno::Collections::List*> _globalHandlers;
    uStrong< ::g::Fuse::PropertyHandle*> _handle;

    void ctor_();
    template<class THandler>
    void AddGlobalHandler(THandler handler) { VisualEvent__AddGlobalHandler_fn(this, uConstrain(__type->GetBase(VisualEvent_typeof())->T(0), handler)); }
    template<class THandler>
    void AddHandler(::g::Fuse::Visual* visual, THandler handler) { VisualEvent__AddHandler_fn(this, visual, uConstrain(__type->GetBase(VisualEvent_typeof())->T(0), handler)); }
    template<class THandler>
    void Invoke(THandler handler, uObject* sender, ::g::Fuse::VisualEventArgs* args) { (((VisualEvent_type*)__type)->fp_Invoke)(this, uConstrain(__type->GetBase(VisualEvent_typeof())->T(0), handler), sender, args); }
    void Invoke_ex(void* handler, uObject* sender, ::g::Fuse::VisualEventArgs* args) { (((VisualEvent_type*)__type)->fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::g::Fuse::Visual* visual, ::g::Fuse::VisualEventArgs* args);
    template<class THandler>
    void InvokeInternal(THandler handler, uObject* sender, ::g::Fuse::VisualEventArgs* args) { VisualEvent__InvokeInternal_fn(this, uConstrain(__type->GetBase(VisualEvent_typeof())->T(0), handler), sender, args); }
    void OnRaise(uObject* target, uArray* args);
    void OnRaiseEnabled(uObject* target, uArray* args);
    void Raise(::g::Fuse::VisualEventArgs* args, int type, bool bubble, uDelegate* PostBubbleAction);
    void RaiseWithBubble(::g::Fuse::VisualEventArgs* args, int type);
    void RaiseWithBubble1(::g::Fuse::VisualEventArgs* args, int type, uDelegate* PostBubbleAction);
    void RaiseWithoutBubble(::g::Fuse::VisualEventArgs* args, int type);
    template<class THandler>
    void RemoveGlobalHandler(THandler handler) { VisualEvent__RemoveGlobalHandler_fn(this, uConstrain(__type->GetBase(VisualEvent_typeof())->T(0), handler)); }
    template<class THandler>
    void RemoveHandler(::g::Fuse::Visual* visual, THandler handler) { VisualEvent__RemoveHandler_fn(this, visual, uConstrain(__type->GetBase(VisualEvent_typeof())->T(0), handler)); }
};
// }

}} // ::g::Fuse
