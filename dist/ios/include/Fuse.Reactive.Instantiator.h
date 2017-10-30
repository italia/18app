// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.API.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.IDeferred.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator;}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator__TemplateMatch;}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator__WindowItem;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public partial class Instantiator :53
// {
struct Instantiator_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Reactive::IObserver interface6;
    ::g::Fuse::Node__ISubtreeDataProvider interface7;
    ::g::Fuse::IDeferred interface8;
};

Instantiator_type* Instantiator_typeof();
void Instantiator__ctor_3_fn(Instantiator* __this);
void Instantiator__AddMatchingTemplates_fn(Instantiator* __this, Instantiator__WindowItem* item, Instantiator__TemplateMatch* f, bool* __retval);
void Instantiator__AddTemplate_fn(Instantiator* __this, Instantiator__WindowItem* item, ::g::Uno::UX::Template* f);
void Instantiator__Append_fn(Instantiator* __this);
void Instantiator__CalcOffsetLimitCountOf_fn(Instantiator* __this, int* length, int* __retval);
void Instantiator__CompleteActionGood_fn(Instantiator* __this);
void Instantiator__CompletedRemove_fn(Instantiator* __this, ::g::Fuse::Node* n);
void Instantiator__CompleteNodeAction_fn(Instantiator* __this);
void Instantiator__CompleteWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi, int* windowIndex);
void Instantiator__CompleteWindowItems_fn(Instantiator* __this, bool* one, bool* __retval);
void Instantiator__CompleteWindowItemsAction_fn(Instantiator* __this);
void Instantiator__get_Count_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Count_fn(Instantiator* __this, int* value);
void Instantiator__get_DataCount_fn(Instantiator* __this, int* __retval);
void Instantiator__DataIndexOfChild_fn(Instantiator* __this, ::g::Fuse::Node* child, int* __retval);
void Instantiator__DataToWindowIndex_fn(Instantiator* __this, int* dataIndex, int* __retval);
void Instantiator__get_Defer_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Defer_fn(Instantiator* __this, int* value);
void Instantiator__get_DeferredPriority_fn(Instantiator* __this, float* __retval);
void Instantiator__set_DeferredPriority_fn(Instantiator* __this, float* value);
void Instantiator__DisposeItemsSubscription_fn(Instantiator* __this);
void Instantiator__FuseIDeferredPerform_fn(Instantiator* __this, bool* __retval);
void Instantiator__FuseNodeISubtreeDataProviderGetData_fn(Instantiator* __this, ::g::Fuse::Node* n, uObject** __retval);
void Instantiator__FuseReactiveIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue);
void Instantiator__FuseReactiveIObserverOnClear_fn(Instantiator* __this);
void Instantiator__FuseReactiveIObserverOnFailed_fn(Instantiator* __this, uString* message);
void Instantiator__FuseReactiveIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value);
void Instantiator__FuseReactiveIObserverOnNewAll_fn(Instantiator* __this, uObject* values);
void Instantiator__FuseReactiveIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value);
void Instantiator__FuseReactiveIObserverOnRemoveAt_fn(Instantiator* __this, int* index);
void Instantiator__FuseReactiveIObserverOnSet_fn(Instantiator* __this, uObject* newValue);
void Instantiator__GetAvailableNodes_fn(Instantiator* __this, Instantiator__TemplateMatch* f, uObject* id, Instantiator__WindowItem** __retval);
void Instantiator__GetData_fn(Instantiator* __this, int* dataIndex, uObject** __retval);
void Instantiator__GetDataCount_fn(Instantiator* __this, int* __retval);
void Instantiator__GetDataId_fn(Instantiator* __this, uObject* data, uObject** __retval);
void Instantiator__GetDataKey_fn(Instantiator* __this, uObject* data, uString* key, uObject** __retval);
void Instantiator__GetDataTemplate_fn(Instantiator* __this, uObject* data, Instantiator__TemplateMatch* __retval);
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* windowIndex, ::g::Fuse::Node** __retval);
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval);
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval);
void Instantiator__get_Identity_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Identity_fn(Instantiator* __this, int* value);
void Instantiator__get_IdentityKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_IdentityKey_fn(Instantiator* __this, uString* value);
void Instantiator__InsertNew_fn(Instantiator* __this, int* dataIndex);
void Instantiator__InsertNewWindowItem_fn(Instantiator* __this, int* windowIndex, uObject* data);
void Instantiator__get_IsListeningItems_fn(Instantiator* __this, bool* __retval);
void Instantiator__get_Limit_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Limit_fn(Instantiator* __this, int* value);
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value);
void Instantiator__get_Offset_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Offset_fn(Instantiator* __this, int* value);
void Instantiator__OnItemsChanged_fn(Instantiator* __this);
void Instantiator__OnRooted_fn(Instantiator* __this);
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory);
void Instantiator__OnUnrooted_fn(Instantiator* __this);
void Instantiator__OnUpdatedWindowItems_fn(Instantiator* __this);
void Instantiator__PatchTo_fn(Instantiator* __this, uObject* values);
void Instantiator__PostUpdatedWindowItems_fn(Instantiator* __this);
void Instantiator__RemoveAll_fn(Instantiator* __this);
void Instantiator__RemoveAt_fn(Instantiator* __this, int* dataIndex);
void Instantiator__RemoveFromParent_fn(Instantiator* __this, ::g::Fuse::Node* n);
void Instantiator__RemoveLastActive_fn(Instantiator* __this);
void Instantiator__RemovePendingAvailableItems_fn(Instantiator* __this);
void Instantiator__RemovePendingAvailableItemsAction_fn(Instantiator* __this);
void Instantiator__RemoveWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi);
void Instantiator__Repopulate_fn(Instantiator* __this);
void Instantiator__get_Reuse_fn(Instantiator* __this, int* __retval);
void Instantiator__set_Reuse_fn(Instantiator* __this, int* value);
void Instantiator__SetFailed_fn(Instantiator* __this, uString* message);
void Instantiator__SetValid_fn(Instantiator* __this);
void Instantiator__StartListeningItems_fn(Instantiator* __this);
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value);
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval);
void Instantiator__get_TemplateSource_fn(Instantiator* __this, uObject** __retval);
void Instantiator__set_TemplateSource_fn(Instantiator* __this, uObject* value);
void Instantiator__TrimAndPad_fn(Instantiator* __this);
void Instantiator__TryUpdateAt_fn(Instantiator* __this, int* dataIndex, uObject* newData, bool* __retval);
void Instantiator__UpdateData_fn(Instantiator* __this, Instantiator__WindowItem* item, uObject* oldData);
void Instantiator__add_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value);
void Instantiator__remove_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value);

struct Instantiator : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Internal::ObjectList*> _availableItems;
    uStrong< ::g::Uno::Collections::Dictionary*> _availableItemsById;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;
    uStrong<uDelegate*> _completedRemove;
    int _count;
    uStrong< ::g::Uno::Collections::Dictionary*> _dataMap;
    int _defer;
    float _deferredPriority;
    bool _hasLimit;
    int _identity;
    uStrong<uString*> _identityKey;
    bool _isListeningItems;
    uStrong<uObject*> _items;
    uStrong<uObject*> _itemsSubscription;
    int _limit;
    uStrong<uString*> _matchKey;
    int _offset;
    bool _pendingAvailableItems;
    bool _pendingNew;
    bool _pendingUpdateWindowItems;
    int _reuse;
    uStrong< ::g::Uno::Collections::RootableList*> _rootTemplates;
    uStrong<uObject*> _templates;
    uStrong<uObject*> _templateSource;
    uWeak<uObject*> _weakTemplateSource;
    uStrong< ::g::Fuse::Internal::ObjectList*> _windowItems;
    uStrong<uString*> _TemplateKey;
    uStrong<uDelegate*> UpdatedWindowItems1;

    void ctor_3();
    bool AddMatchingTemplates(Instantiator__WindowItem* item, Instantiator__TemplateMatch f);
    void AddTemplate(Instantiator__WindowItem* item, ::g::Uno::UX::Template* f);
    void Append();
    int CalcOffsetLimitCountOf(int length);
    void CompleteActionGood();
    void CompletedRemove(::g::Fuse::Node* n);
    void CompleteNodeAction();
    void CompleteWindowItem(Instantiator__WindowItem* wi, int windowIndex);
    bool CompleteWindowItems(bool one);
    void CompleteWindowItemsAction();
    int Count();
    void Count(int value);
    int DataCount();
    int DataIndexOfChild(::g::Fuse::Node* child);
    int DataToWindowIndex(int dataIndex);
    int Defer();
    void Defer(int value);
    float DeferredPriority();
    void DeferredPriority(float value);
    void DisposeItemsSubscription();
    Instantiator__WindowItem* GetAvailableNodes(Instantiator__TemplateMatch f, uObject* id);
    uObject* GetData(int dataIndex);
    int GetDataCount();
    uObject* GetDataId(uObject* data);
    uObject* GetDataKey(uObject* data, uString* key);
    Instantiator__TemplateMatch GetDataTemplate(uObject* data);
    ::g::Fuse::Node* GetLastNodeFromIndex(int windowIndex);
    bool HasLimit();
    int Identity();
    void Identity(int value);
    uString* IdentityKey();
    void IdentityKey(uString* value);
    void InsertNew(int dataIndex);
    void InsertNewWindowItem(int windowIndex, uObject* data);
    bool IsListeningItems();
    int Limit();
    void Limit(int value);
    uString* MatchKey();
    void MatchKey(uString* value);
    int Offset();
    void Offset(int value);
    void OnItemsChanged();
    void OnTemplatesChanged(::g::Uno::UX::Template* factory);
    void OnUpdatedWindowItems();
    void PatchTo(uObject* values);
    void PostUpdatedWindowItems();
    void RemoveAll();
    void RemoveAt(int dataIndex);
    void RemoveFromParent(::g::Fuse::Node* n);
    void RemoveLastActive();
    void RemovePendingAvailableItems();
    void RemovePendingAvailableItemsAction();
    void RemoveWindowItem(Instantiator__WindowItem* wi);
    void Repopulate();
    int Reuse();
    void Reuse(int value);
    void SetFailed(uString* message);
    void SetValid();
    void StartListeningItems();
    uString* TemplateKey();
    void TemplateKey(uString* value);
    uObject* Templates();
    uObject* TemplateSource();
    void TemplateSource(uObject* value);
    void TrimAndPad();
    bool TryUpdateAt(int dataIndex, uObject* newData);
    void UpdateData(Instantiator__WindowItem* item, uObject* oldData);
    void add_UpdatedWindowItems(uDelegate* value);
    void remove_UpdatedWindowItems(uDelegate* value);
};
// }

}}} // ::g::Fuse::Reactive
